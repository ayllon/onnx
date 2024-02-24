#pragma once

namespace ONNX_NAMESPACE {

class ONNXRuntimeFix {
public:
  static bool isStaticRegistrationDisabled();
  static void disableStaticRegistration();

private:
  static bool _static_registration_disabled;
};

} // namespace ONNX_NAMESPACE
