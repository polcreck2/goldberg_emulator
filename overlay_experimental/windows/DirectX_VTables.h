/*
 * Copyright (C) Nemirtingas
 * This file is part of the ingame overlay project
 *
 * The ingame overlay project is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * 
 * The ingame overlay project is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the ingame overlay project; if not, see
 * <http://www.gnu.org/licenses/>.
 */

#pragma once

enum class IDXGISwapChainVTable
{
    // IUnknown
    QueryInterface,
    AddRef,
    Release,

    // IDXGIObject
    SetPrivateData,
    SetPrivateDataInterface,
    GetPrivateData,
    GetParent,

    // IDXGIDeviceSubObject
    GetDevice,

    // IDXGISwapChain
    Present,
    GetBuffer,
    SetFullscreenState,
    GetFullscreenState,
    GetDesc,
    ResizeBuffers,
    ResizeTarget,
    GetContainingOutput,
    GetFrameStatistics,
    GetLastPresentCount,

    // IDXGISwapChain1
    GetDesc1,
    GetFullscreenDesc,
    GetHwnd,
    GetCoreWindow,
    Present1,
    IsTemporaryMonoSupported,
    GetRestrictToOutput,
    SetBackgroundColor,
    GetBackgroundColor,
    SetRotation,
    GetRotation,
};

enum class ID3D12CommandQueueVTable
{
    // IUnknown
    QueryInterface,
    AddRef,
    Release,

    // ID3D12Object
    GetPrivateData,
    SetPrivateData,
    SetPrivateDataInterface,
    SetName,

    // ID3D12DeviceChild
    GetDevice,

    // ID3D12Pageable

    // ID3D12CommandQueue
    UpdateTileMappings,
    CopyTileMappings,
    ExecuteCommandLists,
    SetMarker,
    BeginEvent,
    EndEvent,
    Signal,
    Wait,
    GetTimestampFrequency,
    GetClockCalibration,
    GetDesc,
};

enum class ID3D12GraphicsCommandListVTable
{
    // IUnknown
    QueryInterface,
    AddRef,
    Release,

    // ID3D12Object
    GetPrivateData,
    SetPrivateData,
    SetPrivateDataInterface,
    SetName,

    // ID3D12DeviceChild
    GetDevice,

    // ID3D12CommandList
    GetType,

    // ID3D12GraphicsCommandList
    Close,
    Reset,
    ClearState,
    DrawInstanced,
    DrawIndexedInstanced,
    Dispatch,
    CopyBufferRegion,
    CopyTextureRegion,
    CopyResource,
    CopyTiles,
    ResolveSubresource,
    IASetPrimitiveTopology,
    RSSetViewports,
    RSSetScissorRects,
    OMSetBlendFactor,
    OMSetStencilRef,
    SetPipelineState,
    ResourceBarrier,
    ExecuteBundle,
    SetDescriptorHeaps,
    SetComputeRootSignature,
    SetGraphicsRootSignature,
    SetComputeRootDescriptorTable,
    SetGraphicsRootDescriptorTable,
    SetComputeRoot32BitConstant,
    SetGraphicsRoot32BitConstant,
    SetComputeRoot32BitConstants,
    SetGraphicsRoot32BitConstants,
    SetComputeRootConstantBufferView,
    SetGraphicsRootConstantBufferView,
    SetComputeRootShaderResourceView,
    SetGraphicsRootShaderResourceView,
    SetComputeRootUnorderedAccessView,
    SetGraphicsRootUnorderedAccessView,
    IASetIndexBuffer,
    IASetVertexBuffers,
    SOSetTargets,
    OMSetRenderTargets,
    ClearDepthStencilView,
    ClearRenderTargetView,
    ClearUnorderedAccessViewUint,
    ClearUnorderedAccessViewFloat,
    DiscardResource,
    BeginQuery,
    EndQuery,
    ResolveQueryData,
    SetPredication,
    SetMarker,
    BeginEvent,
    EndEvent,
    ExecuteIndirect,
};

enum class ID3D11DeviceVTable
{
    // IUnknown
    QueryInterface,
    AddRef,
    Release,

    // ID3D11Device
    CreateBuffer,
    CreateTexture1D,
    CreateTexture2D,
    CreateTexture3D,
    CreateShaderResourceView,
    CreateUnorderedAccessView,
    CreateRenderTargetView,
    CreateDepthStencilView,
    CreateInputLayout,
    CreateVertexShader,
    CreateGeometryShader,
    CreateGeometryShaderWithStreamOutput,
    CreatePixelShader,
    CreateHullShader,
    CreateDomainShader,
    CreateComputeShader,
    CreateClassLinkage,
    CreateBlendState,
    CreateDepthStencilState,
    CreateRasterizerState,
    CreateSamplerState,
    CreateQuery,
    CreatePredicate,
    CreateCounter,
    CreateDeferredContext,
    OpenSharedResource,
    CheckFormatSupport,
    CheckMultisampleQualityLevels,
    CheckCounterInfo,
    CheckCounter,
    CheckFeatureSupport,
    GetPrivateData,
    SetPrivateData,
    SetPrivateDataInterface,
    GetFeatureLevel,
    GetCreationFlags,
    GetDeviceRemovedReason,
    GetImmediateContext,
    SetExceptionMode,
    GetExceptionMode,
};

enum class ID3D10DeviceVTable
{
    // IUnknown
    QueryInterface,
    AddRef,
    Release,

    // ID3D10Device
    VSSetConstantBuffers,
    PSSetShaderResources,
    PSSetShader,
    PSSetSamplers,
    VSSetShader,
    DrawIndexed,
    Draw,
    PSSetConstantBuffers,
    IASetInputLayout,
    IASetVertexBuffers,
    IASetIndexBuffer,
    DrawIndexedInstanced,
    DrawInstanced,
    GSSetConstantBuffers,
    GSSetShader,
    IASetPrimitiveTopology,
    VSSetShaderResources,
    VSSetSamplers,
    SetPredication,
    GSSetShaderResources,
    GSSetSamplers,
    OMSetRenderTargets,
    OMSetBlendState,
    OMSetDepthStencilState,
    SOSetTargets,
    DrawAuto,
    RSSetState,
    RSSetViewports,
    RSSetScissorRects,
    CopySubresourceRegion,
    CopyResource,
    UpdateSubresource,
    ClearRenderTargetView,
    ClearDepthStencilView,
    GenerateMips,
    ResolveSubresource,
    VSGetConstantBuffers,
    PSGetShaderResources,
    PSGetShader,
    PSGetSamplers,
    VSGetShader,
    PSGetConstantBuffers,
    IAGetInputLayout,
    IAGetVertexBuffers,
    IAGetIndexBuffer,
    GSGetConstantBuffers,
    GSGetShader,
    IAGetPrimitiveTopology,
    VSGetShaderResources,
    VSGetSamplers,
    GetPredication,
    GSGetShaderResources,
    GSGetSamplers,
    OMGetRenderTargets,
    OMGetBlendState,
    OMGetDepthStencilState,
    SOGetTargets,
    RSGetState,
    RSGetViewports,
    RSGetScissorRects,
    GetDeviceRemovedReason,
    SetExceptionMode,
    GetExceptionMode,
    GetPrivateData,
    SetPrivateData,
    SetPrivateDataInterface,
    ClearState,
    Flush,
    CreateBuffer,
    CreateTexture1D,
    CreateTexture2D,
    CreateTexture3D,
    CreateShaderResourceView,
    CreateRenderTargetView,
    CreateDepthStencilView,
    CreateInputLayout,
    CreateVertexShader,
    CreateGeometryShader,
    CreateGeometryShaderWithStreamOutput,
    CreatePixelShader,
    CreateBlendState,
    CreateDepthStencilState,
    CreateRasterizerState,
    CreateSamplerState,
    CreateQuery,
    CreatePredicate,
    CreateCounter,
    CheckFormatSupport,
    CheckMultisampleQualityLevels,
    CheckCounterInfo,
    CheckCounter,
    GetCreationFlags,
    OpenSharedResource,
    SetTextFilterSize,
    GetTextFilterSize,
};

enum class IDirect3DDevice9VTable
{
    // IUnknown
    QueryInterface,
    AddRef,
    Release,

    // IDirect3DDevice9
    TestCooperativeLevel,
    GetAvailableTextureMem,
    EvictManagedResources,
    GetDirect3D,
    GetDeviceCaps,
    GetDisplayMode,
    GetCreationParameters,
    SetCursorProperties,
    SetCursorPosition,
    ShowCursor,
    CreateAdditionalSwapChain,
    GetSwapChain,
    GetNumberOfSwapChains,
    Reset,
    Present,
    GetBackBuffer,
    GetRasterStatus,
    SetDialogBoxMode,
    SetGammaRamp,
    GetGammaRamp,
    CreateTexture,
    CreateVolumeTexture,
    CreateCubeTexture,
    CreateVertexBuffer,
    CreateIndexBuffer,
    CreateRenderTarget,
    CreateDepthStencilSurface,
    UpdateSurface,
    UpdateTexture,
    GetRenderTargetData,
    GetFrontBufferData,
    StretchRect,
    ColorFill,
    CreateOffscreenPlainSurface,
    SetRenderTarget,
    GetRenderTarget,
    SetDepthStencilSurface,
    GetDepthStencilSurface,
    BeginScene,
    EndScene,
    Clear,
    SetTransform,
    GetTransform,
    MultiplyTransform,
    SetViewport,
    GetViewport,
    SetMaterial,
    GetMaterial,
    SetLight,
    GetLight,
    LightEnable,
    GetLightEnable,
    SetClipPlane,
    GetClipPlane,
    SetRenderState,
    GetRenderState,
    CreateStateBlock,
    BeginStateBlock,
    EndStateBlock,
    SetClipStatus,
    GetClipStatus,
    GetTexture,
    SetTexture,
    GetTextureStageState,
    SetTextureStageState,
    GetSamplerState,
    SetSamplerState,
    ValidateDevice,
    SetPaletteEntries,
    GetPaletteEntries,
    SetCurrentTexturePalette,
    GetCurrentTexturePalette,
    SetScissorRect,
    GetScissorRect,
    SetSoftwareVertexProcessing,
    GetSoftwareVertexProcessing,
    SetNPatchMode,
    GetNPatchMode,
    DrawPrimitive,
    DrawIndexedPrimitive,
    DrawPrimitiveUP,
    DrawIndexedPrimitiveUP,
    ProcessVertices,
    CreateVertexDeclaration,
    SetVertexDeclaration,
    GetVertexDeclaration,
    SetFVF,
    GetFVF,
    CreateVertexShader,
    SetVertexShader,
    GetVertexShader,
    SetVertexShaderConstantF,
    GetVertexShaderConstantF,
    SetVertexShaderConstantI,
    GetVertexShaderConstantI,
    SetVertexShaderConstantB,
    GetVertexShaderConstantB,
    SetStreamSource,
    GetStreamSource,
    SetStreamSourceFreq,
    GetStreamSourceFreq,
    SetIndices,
    GetIndices,
    CreatePixelShader,
    SetPixelShader,
    GetPixelShader,
    SetPixelShaderConstantF,
    GetPixelShaderConstantF,
    SetPixelShaderConstantI,
    GetPixelShaderConstantI,
    SetPixelShaderConstantB,
    GetPixelShaderConstantB,
    DrawRectPatch,
    DrawTriPatch,
    DeletePatch,
    CreateQuery,

    // IDirect3DDevice9Ex
    SetConvolutionMonoKernel,
    ComposeRects,
    PresentEx,
    GetGPUThreadPriority,
    SetGPUThreadPriority,
    WaitForVBlank,
    CheckResourceResidency,
    SetMaximumFrameLatency,
    GetMaximumFrameLatency,
    CheckDeviceState,
    CreateRenderTargetEx,
    CreateOffscreenPlainSurfaceEx,
    CreateDepthStencilSurfaceEx,
    ResetEx,
    GetDisplayModeEx,
};

struct IDirect3DSwapChain9VTable
{
    enum class Index
    {
        // IUnknown
        QueryInterface,
        AddRef,
        Release,

        // IDirect3DSwapChain9
        Present,
        GetFrontBufferData,
        GetBackBuffer,
        GetRasterStatus,
        GetDisplayMode,
        GetDevice,
        GetPresentParameters,

        // IDirect3DSwapChain9Ex
        GetLastPresentCount,
        GetPresentStats,
        GetDisplayModeEx,
    };

    decltype(&IDirect3DSwapChain9::QueryInterface)        pQueryInterface;
    decltype(&IDirect3DSwapChain9::AddRef)                pAddRef;
    decltype(&IDirect3DSwapChain9::Release)               pRelease;

    decltype(&IDirect3DSwapChain9::Present)               pPresent;
    decltype(&IDirect3DSwapChain9::GetFrontBufferData)    pGetFrontBufferData;
    decltype(&IDirect3DSwapChain9::GetBackBuffer)         pGetBackBuffer;
    decltype(&IDirect3DSwapChain9::GetRasterStatus)       pGetRasterStatus;
    decltype(&IDirect3DSwapChain9::GetDisplayMode)        pGetDisplayMode;
    decltype(&IDirect3DSwapChain9::GetDevice)             pGetDevice;
    decltype(&IDirect3DSwapChain9::GetPresentParameters)  pGetPresentParameters;

    decltype(&IDirect3DSwapChain9Ex::GetLastPresentCount) pGetLastPresentCount;
    decltype(&IDirect3DSwapChain9Ex::GetPresentStats)     pGetPresentStats;
    decltype(&IDirect3DSwapChain9Ex::GetDisplayModeEx)    pGetDisplayModeEx;
};