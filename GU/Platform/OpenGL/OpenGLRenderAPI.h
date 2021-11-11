/*
 * @Author: ImGili
 * @Description: 
 */
#pragma once
#include"Renderer/RenderAPI.h"
#include"Core/Core.h"
namespace GU
{
    class GU_API OpenGLRenderAPI : public RenderAPI
    {
    public:
        void Init() override;
        void SetClearColor(const glm::vec4& color) override;
        void Clear() override;
        void DrawIndexed(const std::shared_ptr<VertexArray>& vertexArray, uint32_t indexCount = 0) override;
    };
}