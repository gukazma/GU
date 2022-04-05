#pragma once
#include"Core/Layer.h"
#include"Renderer/Shader.h"
#include"Renderer/Buffer.h"
#include"Renderer/VertexArray.h"
#include"Renderer/Mesh.h"
#include"Renderer/EditorCamera.h"
using namespace GU;
class ExampleLayer : public Layer
{
public:
    ExampleLayer();
    ~ExampleLayer();
    void OnImGuiRender() override;
    void OnAttach() override;
    void OnUpdate(TimeStep ts) override;
    void OnEvent(Event& e) override;
private:
    std::shared_ptr<Shader> m_Shader;
    std::shared_ptr<VertexBuffer> m_Vertexbuffer;
    std::shared_ptr<VertexArray> m_VertexArray;
};