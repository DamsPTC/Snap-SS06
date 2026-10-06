/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bda8618; end: 10bda8643; -[SCHeliosFeatureGate init] */

void FUN_10bda8618(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("HeliosFeatureGate.HeliosFeatureGate",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bda8644);
  (*pcVar1)();
}



/* Entry: 10bda8644; end: 10bda866f; -[_TtC22HeliosLoadingIndicatorP33_0EC34136E676B856B6A8ECB36E92FBA730HeliosLoadingIndicatorArcLayer init] */

void FUN_10bda8644(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("HeliosLoadingIndicator.HeliosLoadingIndicatorArcLayer",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bda8670);
  (*pcVar1)();
}



/* Entry: 10bda8670; end: 10bda869b; -[_TtC22HeliosLoadingIndicator26HeliosLoadingIndicatorView initWithFrame:] */

void FUN_10bda8670(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("HeliosLoadingIndicator.HeliosLoadingIndicatorView",0x31,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bda869c);
  (*pcVar1)();
}



/* Entry: 10bda869c; end: 10bda86c7; -[_TtC18SCUserSessionScope18SCUserSessionScope init] */

void FUN_10bda869c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUserSessionScope.SCUserSessionScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bda86c8);
  (*pcVar1)();
}



/* Entry: 10bda86c8; end: 10bda86f3; -[_TtC18SCUserSessionScope26SCUserSessionScopeServices init] */

void FUN_10bda86c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUserSessionScope.SCUserSessionScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bda86f4);
  (*pcVar1)();
}



/* Entry: 10bda86f4; end: 10bda871f; -[_TtC13SCSystemScope13SCSystemScope init] */

void FUN_10bda86f4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCSystemScope.SCSystemScope",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bda8720);
  (*pcVar1)();
}



/* Entry: 10bda8720; end: 10bda8ae3;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_10bda8720(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107b94f8;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107b94f8);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107b94f8);
  func_0x000107c61180();
  (*pcVar3)(0x11369cec0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10bda8ae4; end: 10bda8b3b;  */

void FUN_10bda8ae4(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  *param_4 = param_2;
  *(undefined4 *)(param_4 + 1) = param_3;
  return;
}



/* Entry: 10bda8b3c; end: 10bda8b87;  */

void FUN_10bda8b3c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 10bda8b88; end: 10bda8bd7;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_10bda8b88(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ___assert_rtn("MAllocateMemory","FBSDKTensor.hpp",0x24,"ret == 0");
  ___assert_rtn("MAllocateMemory","FBSDKTensor.hpp",0x1e,"nbytes > 0");
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107b9d80;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107b9d80);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107b9d80);
  func_0x000107c61180();
  (*pcVar3)(0x11369d508,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10bda8bd8; end: 10bda8beb;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_10bda8bd8(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107b9d80;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107b9d80);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107b9d80);
  func_0x000107c61180();
  (*pcVar3)(0x11369d508,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10bda8bec; end: 10bda8e1f;  */

void FUN_10bda8bec(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
    goto LAB_10bda8dcc;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    if (param_3 == 0) {
      uVar1 = param_1;
      func_0x00010c0829e0();
      if ((int)uVar1 != 0) {
        func_0x00010bf58ce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10bda8c60;
      }
      puVar5 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
      func_0x00010bf98460();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)(param_1 + 0x40) = puVar5;
    }
    else {
      _objc_retain(param_3);
LAB_10bda8c60:
      uVar1 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c160080();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c160000(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar1);
      _objc_release(uVar2);
      puVar5 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
      func_0x00010bf14420();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar5;
      _objc_release(uVar4);
      func_0x00010c21fae0(param_1);
      func_0x00010c177d20(param_1);
      _objc_release(uVar1);
    }
    func_0x000104a58170();
    func_0x00010c2112a0(*(undefined8 *)(param_1 + 0x40));
  }
  func_0x00010bf51960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4f80(*(undefined8 *)(param_1 + 0x40));
  func_0x000104a58170();
  lVar3 = *(long *)(param_1 + 0x180);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar1 = param_2;
  _objc_retain();
  if ((uVar1 == 0) || (uVar2 = param_1, func_0x00010bf2d620(), (uVar2 & 1) == 0)) {
    uVar1 = param_1;
    _objc_retain();
    func_0x000104a58170();
  }
  puVar5 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  uVar2 = param_1;
  func_0x00010c15fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1606c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if ((uVar1 == param_1) && (puVar5 != (undefined *)0x0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  func_0x000104a58170();
LAB_10bda8dcc:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10bda8e20; end: 10bda92bf;  */

void FUN_10bda8e20(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *in_x4;
  long extraout_x9;
  int extraout_w11;
  long *plVar4;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/alloc.cc"
                      ,0x43,2,"assertion failed: %s");
  _abort();
  func_0x000104a6f4f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync.cc"
                      ,0x69);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x2e);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x37);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x43);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x4c);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x58);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x6a);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x60);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x73);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x90);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0x98);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0xa0);
  _abort();
  func_0x000104a6f548("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/sync_posix.cc"
                      ,0xa7);
  _abort();
  func_0x000104a6f574("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/time.cc"
                      ,0x20);
  _abort();
  func_0x000104a6f574("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/time.cc"
                      ,0x8e);
  _abort();
  func_0x000104a6f574("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/time.cc"
                      ,0x8a);
  _abort();
  func_0x000104a6f574("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/time.cc"
                      ,0xb0);
  _abort();
  func_0x000104a6f574("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/time.cc"
                      ,0xb2);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/time_posix.cc"
                      ,0xad,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gpr/time_posix.cc"
                      ,0xb0,2,"assertion failed: %s");
  _abort();
  uVar3 = 0xf22f1eb;
  puVar1 = (undefined8 *)0x45;
  uVar2 = 2;
  func_0x000107c2c124(
                     "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/time_util.cc"
                     );
  _abort();
  _abort();
  _abort();
  func_0x000104a72178();
  plVar4 = (long *)*puVar1;
  if (plVar4 != (long *)0x0) {
    do {
      func_0x000104a73ad8();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *in_x4 = uVar2;
  *(undefined4 *)(in_x4 + 1) = uVar3;
  return;
}



/* Entry: 10bda92c0; end: 10bda932b;  */

void FUN_10bda92c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  long extraout_x9;
  int extraout_w11;
  long *plVar1;
  
  func_0x000104a72178();
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    do {
      func_0x000104a73ad8();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *param_5 = param_3;
  *(undefined4 *)(param_5 + 1) = param_4;
  return;
}



/* Entry: 10bda932c; end: 10bda9363;  */

void FUN_10bda932c(undefined8 param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  do {
    func_0x000104a73ad8();
  } while (extraout_w11 != 0);
  if (extraout_x9 == 0) {
    func_0x000104a73ac8();
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 10bda9364; end: 10bda9607;  */

void FUN_10bda9364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long extraout_x9;
  int extraout_w11;
  
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x1dc,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x1d9,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x1ac,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x174,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x1dc,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x1d9,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x1ac,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                      ,0x174,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x8a,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x211,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x218,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x211,param_3,"assertion failed: %s");
  _abort();
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
  ;
  func_0x000104a73ac0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x218,param_3,"assertion failed: %s");
  _abort();
  do {
    func_0x000104a73ad8();
  } while (extraout_w11 != 0);
  if (extraout_x9 == 0) {
    func_0x000104a73ac8();
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar1);
  }
  return;
}



/* Entry: 10bda9608; end: 10bda963f;  */

void FUN_10bda9608(undefined8 param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  do {
    func_0x000104a73ad8();
  } while (extraout_w11 != 0);
  if (extraout_x9 == 0) {
    func_0x000104a73ac8();
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 10bda9640; end: 10bda9647;  */

void FUN_10bda9640(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bda9644);
  (*pcVar1)();
}



/* Entry: 10bda9648; end: 10bda99eb;  */

void FUN_10bda9648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x6fc,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x3fa,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x3fb,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x622,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0xc60,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0xc5f,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x6ed,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x820,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
  ;
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x80d,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000104a8123c();
  }
  return;
}



/* Entry: 10bda99ec; end: 10bda9a13;  */

void FUN_10bda99ec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bda9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10bda9a14; end: 10bda9a3f;  */

void FUN_10bda9a14(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x000104a8123c();
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 10bda9a40; end: 10bda9b0b;  */

void FUN_10bda9a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x201,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
  ;
  func_0x000104a81234("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x20d,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000104a8123c();
  }
  return;
}



/* Entry: 10bda9b0c; end: 10bda9b33;  */

void FUN_10bda9b0c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bda9b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10bda9b34; end: 10bda9bdb;  */

void FUN_10bda9b34(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
                      ,0x55,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
  ;
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
                      ,0x54,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 10bda9bdc; end: 10bda9c7f;  */

void FUN_10bda9bdc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 10bda9c80; end: 10bda9d53;  */

void FUN_10bda9c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  
  func_0x000104a83a48("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                      ,0xf6,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a83a48("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                      ,0x7d);
  _abort();
  func_0x000104a83a48("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
                      ,0x78);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/grpclb/client_load_reporting_filter.cc"
  ;
  pcVar7 = "assertion failed: %s";
  uVar5 = 0x53;
  uVar6 = 2;
  func_0x000107c2c124();
  _abort();
  plVar9 = *(long **)pcVar4;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  *(undefined8 *)pcVar7 = uVar5;
  *(undefined4 *)(pcVar7 + 8) = uVar6;
  return;
}



/* Entry: 10bda9d54; end: 10bda9dbf;  */

void FUN_10bda9d54(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *param_4 = param_2;
  *(undefined4 *)(param_4 + 1) = param_3;
  return;
}



/* Entry: 10bda9dc0; end: 10bda9ffb;  */

void FUN_10bda9dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104a84a20("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                      ,0x1a6,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84a20("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                      ,0x130,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84a20("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                      ,0x133,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84a20("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                      ,0x1e1,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84a20("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                      ,0x12f,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84afc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                      ,100,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84afc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                      ,0x6f,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84afc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                      ,0xac,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84cbc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
                      ,0x25,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a84cbc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
                      ,0x30,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
  ;
  func_0x000104a84cbc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
                      ,0x31,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a85c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar4 + 0x10))();
  return;
}



/* Entry: 10bda9ffc; end: 10bdaa01b;  */

void FUN_10bda9ffc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a85c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10bdaa01c; end: 10bdaa18b;  */

void FUN_10bdaa01c(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  char *pcVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/polling_resolver.cc"
                      ,0x95,2,"assertion failed: %s");
  _abort();
  func_0x000104a8b720("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                      ,0x995);
  _abort();
  func_0x000104a8b720("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                      ,0x9e7);
  _abort();
  func_0x000104a8b720("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                      ,0x97);
  _abort();
  func_0x000104a8b720("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                      ,0x98);
  _abort();
  func_0x000104a8b720("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                      ,0xa38);
  _abort();
  pcVar3 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
  ;
  func_0x000104a8b720("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
                      ,0x430);
  _abort();
  do {
    func_0x000104a8fd18();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (!(bool)in_ZR) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdaa1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar3 + 8))();
  return;
}



/* Entry: 10bdaa18c; end: 10bdaa1b7;  */

void FUN_10bdaa18c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  do {
    func_0x000104a8fd18();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (!(bool)in_ZR) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdaa1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10bdaa1b8; end: 10bdaa42b;  */

void FUN_10bdaa1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  func_0x000104a8fd10("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                      ,0xfa,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a8fd10("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                      ,0xc2,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a8fd10("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                      ,0xc1,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a8fd10("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                      ,0x115,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a8fd10("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                      ,0x11b,param_3,"assertion failed: %s");
  _abort();
  do {
    func_0x000104a8fd18();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)in_ZR) {
    func_0x000104a8fd04();
  }
  return;
}



/* Entry: 10bdaa42c; end: 10bdaa4a3;  */

void FUN_10bdaa42c(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  
  if (*param_1 != 0) {
    do {
      func_0x000104a8fd18();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000104a8fd04();
    }
  }
  if (*param_2 != 0) {
    do {
      func_0x000104a8fd18();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = extraout_x9_00;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000104a8fd04();
    }
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __ZdlPv(*param_3);
  }
  return;
}



/* Entry: 10bdaa4a4; end: 10bdaa50b;  */

void FUN_10bdaa4a4(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  do {
    func_0x000104a8fd18();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)in_ZR) {
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}



/* Entry: 10bdaa50c; end: 10bdaa567;  */

void FUN_10bdaa50c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    do {
      func_0x000104a8fd18();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdaa53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10bdaa568; end: 10bdaa7b3;  */

void FUN_10bdaa568(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                      ,0x6e,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
                      ,0x1c8,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/deadline/deadline_filter.cc"
                      ,0x7d,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/deadline/deadline_filter.cc"
                      ,0xfa,2,"assertion failed: %s");
  _abort();
  func_0x000104a94574("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x211);
  _abort();
  func_0x000104a94574("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x218);
  _abort();
  func_0x000104a9486c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x211);
  _abort();
  func_0x000104a9486c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x218);
  _abort();
  func_0x000104a94a44("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                      ,0x10c);
  _abort();
  func_0x000104a94a44("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                      ,0xfb);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
  ;
  func_0x000104a94a44("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                      ,0x4a);
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*(long *)pcVar4 + 0x10))(pcVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar4);
  }
  return;
}



/* Entry: 10bdaa7b4; end: 10bdaa7ff;  */

void FUN_10bdaa7b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 10bdaa800; end: 10bdaaae3;  */

void FUN_10bdaa800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104a95bc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x211,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a95bc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                      ,0x218);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/message_size/message_size_filter.cc"
                      ,0x149,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/alpn/alpn.cc"
                      ,0x2b,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                      ,0x134,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/credentials.h"
                      ,0x90,2,"assertion failed: %s");
  _abort();
  func_0x000104a96cc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_decoder.cc"
                      ,0xfa);
  _abort();
  func_0x000104a96cc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_decoder.cc"
                      ,0xf9);
  _abort();
  func_0x000104a96f94("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_encoder.cc"
                      ,0x5c);
  _abort();
  func_0x000104a96f94("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_encoder.cc"
                      ,0x5b);
  _abort();
  func_0x000104a96f94("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_encoder.cc"
                      ,0xe3);
  _abort();
  func_0x000104a96f94("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_encoder.cc"
                      ,0xe6);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
  ;
  func_0x000104a9bee8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0x659);
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000104a9bf08();
  }
  return;
}



/* Entry: 10bdaaae4; end: 10bdaab27;  */

void FUN_10bdaaae4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  func_0x000104a9bef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_1);
  return;
}



/* Entry: 10bdaab28; end: 10bdaab57;  */

void FUN_10bdaab28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000104a9bf08();
  }
  return;
}



/* Entry: 10bdaab58; end: 10bdaab9b;  */

void FUN_10bdaab58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  func_0x000104a9bef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_1);
  return;
}



/* Entry: 10bdaab9c; end: 10bdabec3;  */

void FUN_10bdaab9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104a9bee8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0x304,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a9bee8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0x3b7,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a9bee8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0x3c8,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a9bee8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0x262,param_3,"assertion failed: %s");
  _abort();
  func_0x000104a9bee8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                      ,0x27f,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/bdp_estimator.h"
  ;
  func_0x000104a9bee8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/bdp_estimator.h"
                      ,0x37,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 10bdabec4; end: 10bdabedb;  */

void FUN_10bdabec4(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10bdabedc; end: 10bdac2d7;  */

void FUN_10bdabedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/timer_manager.cc"
  ;
  func_0x000104ab58d4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/timer_manager.cc"
                      ,0x2f,param_3,"assertion failed: %s");
  _abort();
  if (pcVar1[0x17] < '\0') {
    __ZdlPv(*(undefined8 *)pcVar1);
  }
  return;
}



/* Entry: 10bdac2d8; end: 10bdac327;  */

void FUN_10bdac2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104abd5e4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                      ,0x595,param_3,"Attempted a blocking poll when declared non-polling.");
  func_0x000104abd5e4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
                      ,0x596);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
                      ,0x6f,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/exec_ctx.cc"
                      ,0x56,2,"assertion failed: %s");
  _abort();
  func_0x000104abde1c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
                      ,0x9e);
  _abort();
  func_0x000104abde1c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
                      ,0x17f);
  _abort();
  func_0x000104abde1c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
                      ,0x19a);
  _abort();
  func_0x000104abde94();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                      ,0x81,0,
                      "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely"
                     );
  func_0x000104abe17c();
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
                      ,0x56,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
                      ,0xa0,2,
                      "LockfreeEvent::NotifyOn: notify_on called with a previous callback still pending"
                     );
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x49);
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x46);
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x5d);
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x5a);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/sockaddr_utils_posix.cc"
                      ,0x3a,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
  ;
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                      ,0x189,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 10bdac328; end: 10bdac66b;  */

void FUN_10bdac328(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
                      ,0x6f,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/exec_ctx.cc"
                      ,0x56,2,"assertion failed: %s");
  _abort();
  func_0x000104abde1c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
                      ,0x9e);
  _abort();
  func_0x000104abde1c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
                      ,0x17f);
  _abort();
  func_0x000104abde1c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
                      ,0x19a);
  _abort();
  func_0x000104abde94();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
                      ,0x81,0,
                      "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely"
                     );
  func_0x000104abe17c();
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
                      ,0x56,2,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
                      ,0xa0,2,
                      "LockfreeEvent::NotifyOn: notify_on called with a previous callback still pending"
                     );
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x49);
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x46);
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x5d);
  _abort();
  func_0x000104abe988("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
                      ,0x5a);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/sockaddr_utils_posix.cc"
                      ,0x3a,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
  ;
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
                      ,0x189,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 10bdac66c; end: 10bdac6b7;  */

void FUN_10bdac66c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 10bdac6b8; end: 10bdaca33;  */

void FUN_10bdac6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x000104ac4c7c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x207,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ac4c7c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x3c8);
  _abort();
  func_0x000104ac4c7c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x5ee);
  _abort();
  func_0x000104ac4c7c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x623);
  _abort();
  func_0x000104ac4c7c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
                      ,0x1eb);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x20c);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x218);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x20f);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x20e);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x1ac);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0xae);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x9a);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x8e);
  _abort();
  func_0x000104ac6ca4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
                      ,0x75);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                      ,0xd5,2,"assertion failed: %s");
  _abort();
  func_0x000104ac8854("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/timer_manager.cc"
                      ,0x53);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/json/json_reader.cc"
                      ,0xdc,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdaca38);
  (*pcVar1)();
}



/* Entry: 10bdaca34; end: 10bdaca3b;  */

void FUN_10bdaca34(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdaca38);
  (*pcVar1)();
}



/* Entry: 10bdaca3c; end: 10bdaca73;  */

void FUN_10bdaca3c(void)

{
  code *pcVar1;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.cc"
                      ,0x2f,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdaca78);
  (*pcVar1)();
}



/* Entry: 10bdaca74; end: 10bdaca7b;  */

void FUN_10bdaca74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdaca78);
  (*pcVar1)();
}



/* Entry: 10bdaca7c; end: 10bdacb23;  */

void FUN_10bdaca7c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
                      ,0x2b,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
  ;
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
                      ,0x79,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 10bdacb24; end: 10bdacb6f;  */

void FUN_10bdacb24(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 10bdacb70; end: 10bdacd7b;  */

void FUN_10bdacb70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104acca80("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                      ,0xbe,param_3,"assertion failed: %s");
  _abort();
  func_0x000104acca80("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                      ,0xbf,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
  ;
  func_0x000104acca80("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
                      ,0x107,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 0x10))();
  }
  return;
}



/* Entry: 10bdacd7c; end: 10bdacda3;  */

void FUN_10bdacd7c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdacda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10bdacda4; end: 10bdace4f;  */

void FUN_10bdacda4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/context/security_context.cc"
                      ,0xc5,2,"assertion failed: %s");
  _abort();
  _abort();
  func_0x000104acf9d8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
                      ,0x89);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
  ;
  func_0x000104acf9d8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
                      ,0x8a);
  _abort();
  plVar5 = *(long **)pcVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104acf9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10bdace50; end: 10bdace97;  */

void FUN_10bdace50(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104acf9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10bdace98; end: 10bdacecb;  */

void FUN_10bdace98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
  ;
  func_0x000104acf9d8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
                      ,0x88,param_3,"assertion failed: %s");
  _abort();
  plVar5 = *(long **)pcVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104acf9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10bdacecc; end: 10bdacf13;  */

void FUN_10bdacecc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104acf9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10bdacf14; end: 10bdacf5b;  */

void FUN_10bdacf14(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (*param_1 != 0) {
    do {
      func_0x000104ad00a8();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000104ad009c();
    }
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 10bdacf5c; end: 10bdad11b;  */

void FUN_10bdacf5c(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  do {
    func_0x000104ad00a8();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)in_ZR) {
    func_0x000104ad009c();
  }
  return;
}



/* Entry: 10bdad11c; end: 10bdad123;  */

void FUN_10bdad11c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdad120);
  (*pcVar1)();
}



/* Entry: 10bdad124; end: 10bdad34b;  */

void FUN_10bdad124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104ad0d64("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
                      ,0x31,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
  ;
  func_0x000104ad0d64("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
                      ,0x32,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x000104ad0f38();
  }
  return;
}



/* Entry: 10bdad34c; end: 10bdad397;  */

void FUN_10bdad34c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 10bdad398; end: 10bdad99f;  */

void FUN_10bdad398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104ad56dc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/server_auth_filter.cc"
                      ,0x14e,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad56dc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/server_auth_filter.cc"
                      ,0x14b,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7374("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/b64.cc"
                      ,0x79,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7374("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/b64.cc"
                      ,0x7a,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0xf2,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0xff,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0xf6,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0x133,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0x124,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0x15f,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0x169,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad7ab8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                      ,0x171,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x1b8,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x137,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x159,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x158,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x157,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x14c,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x137,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x159,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x158,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x157,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x152,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x169,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x183,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad8344("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
                      ,0x194,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x1d6,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x1d7,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x271,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc";
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x274,param_3,"A pollset_set is already registered for this call.");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdad9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar4 + 8))();
  return;
}



/* Entry: 10bdad9a0; end: 10bdad9c7;  */

void FUN_10bdad9a0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdad9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10bdad9c8; end: 10bdadee3;  */

void FUN_10bdad9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x4e2,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x52e,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x69e,param_3,"assertion failed: %s");
  _abort();
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x6f8,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc";
  func_0x000104ad931c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
                      ,0x707,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 10bdadee4; end: 10bdadf03;  */

void FUN_10bdadee4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104add270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10bdadf04; end: 10bdadf6b;  */

void FUN_10bdadf04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x000104add260("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
                      ,0x48e,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc";
  func_0x000104add260("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
                      ,0x48f,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104add270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar4 + 0x10))();
  return;
}



/* Entry: 10bdadf6c; end: 10bdadf8b;  */

void FUN_10bdadf6c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104add270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10bdadf8c; end: 10bdadff7;  */

void FUN_10bdadf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  func_0x000104add260("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
                      ,0x548,param_3,"assertion failed: %s");
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/bdp_estimator.cc"
                      ,0x3a,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdadffc);
  (*pcVar1)();
}



/* Entry: 10bdadff8; end: 10bdadfff;  */

void FUN_10bdadff8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdadffc);
  (*pcVar1)();
}



/* Entry: 10bdae000; end: 10bdae5af;  */

void FUN_10bdae000(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}



/* Entry: 10bdae5b0; end: 10bdae5bf;  */

void FUN_10bdae5b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdae5b4);
  (*pcVar1)();
}



/* Entry: 10bdae5c0; end: 10bdae657;  */

void FUN_10bdae5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  func_0x000104ae3864("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/client_context.cc"
                      ,0x95,param_3,"Name for compression algorithm \'%d\' unknown.");
  _abort();
  func_0x000104ae3864("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/client_context.cc"
                      ,0x99);
  _abort();
  func_0x000107c2c124("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/common/channel_arguments.cc"
                      ,0x87,2,"assertion failed: %s");
  _abort();
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_a0 = 0;
  puStack_98 = &UNK_104bd35d4;
  (*pcRam00000001136b8688)(0x1136a3720,&uStack_a0,&UNK_100029ddc);
  return;
}



/* Entry: 10bdae658; end: 10bdae683;  */

void FUN_10bdae658(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  uStack_40 = 0;
  puStack_38 = &UNK_104bd35d4;
  (*pcRam00000001136b8688)(0x1136a3720,&uStack_40,&UNK_100029ddc);
  return;
}



/* Entry: 10bdae684; end: 10bdae69f;  */

void FUN_10bdae684(undefined4 param_1)

{
  FUN_10bdb1278();
  uRam0000000113815ee8 = param_1;
  return;
}



/* Entry: 10bdae6a0; end: 10bdae70b;  */

undefined4 FUN_10bdae6a0(long param_1)

{
  int iVar1;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_30 = 4;
  iVar1 = 0xf2453e7;
  _sysctlbyname("hw.logicalcpu",&uStack_24,&uStack_30,0,0);
  if (iVar1 != 0) {
    if (param_1 != 0) {
      FUN_10bdb0160(param_1,"Unable to detect thread count, defaulting to single-threaded mode\n");
    }
    uStack_24 = 1;
  }
  return uStack_24;
}



/* Entry: 10bdae70c; end: 10bdae75f;  */

void FUN_10bdae70c(undefined8 *param_1)

{
  *param_1 = &UNK_100d77678;
  param_1[1] = &UNK_100d77b20;
  param_1[2] = &UNK_100d77d60;
  param_1[3] = &UNK_100d77860;
  param_1[4] = &UNK_104c132f8;
  param_1[5] = &UNK_104c134a4;
  param_1[6] = &UNK_104c135c8;
  param_1[7] = &UNK_104c136ec;
  return;
}



/* Entry: 10bdae760; end: 10bdae7d3;  */

void FUN_10bdae760(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 0x113815f00;
  uStack_38 = 0x113815f40;
  uStack_30 = 0x113816040;
  uStack_28 = 0x113816440;
  func_0x000104c13cf0(&DAT_113815ef0,0,&uStack_40);
  uStack_40 = 0;
  uStack_38 = 0x113816c50;
  uStack_30 = 0x113816c90;
  uStack_28 = 0x113816d90;
  func_0x000104c13cf0(&DAT_113816c40,1,&uStack_40);
  return;
}



/* Entry: 10bdae7d4; end: 10bdae8ef;  */

void FUN_10bdae7d4(long param_1,ulong param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = 7;
  }
  uVar1 = 0x38;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  FUN_10bdae8f0(param_1,param_2,uVar1 | uVar2);
  if ((int)param_2 == 3) {
    for (lVar4 = 8; lVar4 != 0x10; lVar4 = lVar4 + 2) {
      lVar3 = *(long *)(param_3 + 0x18);
      uVar2 = 0;
      if ((lVar4 != 10 || param_4 != 0) && lVar4 != 0xe) {
        uVar2 = 7;
      }
      *(long *)(param_3 + 0x18) = lVar3 + 8;
      *(short *)(param_1 + lVar4) = (short)lVar3 - (short)param_1;
      uVar1 = 0x38;
      if ((lVar4 != 0xc || param_5 == 0) && lVar4 != 8) {
        uVar1 = 0;
      }
      FUN_10bdae8f0(lVar3,4,uVar2 | uVar1);
    }
  }
  else {
    for (lVar4 = 8; lVar4 != 0x10; lVar4 = lVar4 + 2) {
      lVar3 = *(long *)(param_3 + (param_2 & 0xffffffff) * 8);
      *(long *)(param_3 + (param_2 & 0xffffffff) * 8) = lVar3 + 0x10;
      *(short *)(param_1 + lVar4) = (short)lVar3 - (short)param_1;
      FUN_10bdae7d4(lVar3,(int)param_2 + 1,param_3,(lVar4 != 0xe) != (param_4 == 0 && lVar4 == 10),
                    param_5 != 0 && lVar4 == 0xc || lVar4 == 8);
    }
  }
  return;
}



/* Entry: 10bdae8f0; end: 10bdaea5f;  */

void FUN_10bdae8f0(byte *param_1,int param_2,byte param_3)

{
  *param_1 = param_3;
  param_1[1] = param_3 | 0x38;
  param_1[3] = param_3 | 7;
  if (param_2 == 4) {
    param_1[2] = param_3 & 0x3c;
    param_1[4] = param_3 & 0x37;
    param_1[5] = param_3 & 7 | 0x10;
    param_1[6] = param_3 | 1;
    param_1[7] = param_3 & 0x34;
    return;
  }
  param_1[2] = param_3 & 0x38;
  param_1[4] = param_3 & 7;
  param_1[5] = 0x38;
  param_1[6] = 7;
  if (param_2 == 3) {
    param_1[5] = param_3 & 4 | 0x38;
    param_1[6] = param_3 & 0x30 | 7;
  }
  return;
}



/* Entry: 10bdaea60; end: 10bdaf87b;  */

void FUN_10bdaea60(undefined8 *param_1)

{
  *param_1 = &UNK_104c18a6c;
  param_1[1] = &UNK_104c18a90;
  param_1[2] = &UNK_104c18a84;
  param_1[3] = &UNK_104c18a9c;
  param_1[8] = &UNK_104c18ab4;
  param_1[9] = &UNK_104c18a78;
  param_1[4] = &UNK_104c18acc;
  param_1[5] = &UNK_104c18ac0;
  param_1[6] = &UNK_104c18ad8;
  param_1[7] = &UNK_104c18aa8;
  param_1[10] = &UNK_104c18af0;
  param_1[0xb] = &UNK_104c18ae4;
  param_1[0xe] = &UNK_104c18b08;
  param_1[0xf] = &UNK_104c18afc;
  param_1[0xc] = &UNK_104c18b20;
  param_1[0xd] = &UNK_104c18b14;
  param_1[0x55] = &UNK_104c18b2c;
  param_1[0x5e] = &UNK_104c18b38;
  param_1[0x57] = &UNK_104c18b44;
  param_1[0x56] = &UNK_104c18b50;
  param_1[0x58] = &UNK_104c18b5c;
  param_1[0x5c] = &UNK_104c18b68;
  param_1[0x5d] = &UNK_104c18b74;
  param_1[0x5a] = &UNK_104c18b80;
  param_1[0x59] = &UNK_104c18b8c;
  param_1[0x5b] = &UNK_104c18b98;
  param_1[0x60] = &UNK_104c18ba4;
  param_1[0x5f] = &UNK_104c18bb0;
  param_1[100] = &UNK_104c18bbc;
  param_1[99] = &UNK_104c18bc8;
  param_1[0x62] = &UNK_104c18bd4;
  param_1[0x61] = &UNK_104c18be0;
  param_1[0xdd] = &UNK_104c18bec;
  param_1[0xe6] = &UNK_104c18bf4;
  param_1[0xdf] = &UNK_104c18bfc;
  param_1[0xde] = &UNK_104c18c04;
  param_1[0xe0] = &UNK_104c18c0c;
  param_1[0xe4] = &UNK_104c18c14;
  param_1[0xe5] = &UNK_104c18c1c;
  param_1[0xe2] = &UNK_104c18c24;
  param_1[0xe1] = &UNK_104c18c2c;
  param_1[0xe3] = &UNK_104c18c34;
  param_1[0xe8] = &UNK_104c18c3c;
  param_1[0xe7] = &UNK_104c18c44;
  param_1[0xec] = &UNK_104c18c4c;
  param_1[0xeb] = &UNK_104c18c54;
  param_1[0xea] = &UNK_104c18c5c;
  param_1[0xe9] = &UNK_104c18c64;
  param_1[0x66] = &UNK_104c18c6c;
  param_1[0x6f] = &UNK_104c18c78;
  param_1[0x68] = &UNK_104c18c84;
  param_1[0x67] = &UNK_104c18c90;
  param_1[0x69] = &UNK_104c18c9c;
  param_1[0x6d] = &UNK_104c18ca8;
  param_1[0x6e] = &UNK_104c18cb4;
  param_1[0x6b] = &UNK_104c18cc0;
  param_1[0x6a] = &UNK_104c18ccc;
  param_1[0x6c] = &UNK_104c18cd8;
  param_1[0x71] = &UNK_104c18ce4;
  param_1[0x70] = &UNK_104c18cf0;
  param_1[0x75] = &UNK_104c18cfc;
  param_1[0x74] = &UNK_104c18d08;
  param_1[0x73] = &UNK_104c18d14;
  param_1[0x72] = &UNK_104c18d20;
  param_1[0x11] = &UNK_104c18d2c;
  param_1[0x12] = &UNK_104c18d44;
  param_1[0x13] = &UNK_104c18d3c;
  param_1[0x14] = &UNK_104c18d4c;
  param_1[0x15] = &UNK_104c18d6c;
  param_1[0x16] = &UNK_104c18d64;
  param_1[0x17] = &UNK_104c18d74;
  param_1[0x18] = &UNK_104c18d54;
  param_1[0x19] = &UNK_104c18d5c;
  param_1[0x1a] = &UNK_104c18d34;
  param_1[0x1b] = &UNK_104c18d84;
  param_1[0x1c] = &UNK_104c18d7c;
  param_1[0x1d] = &UNK_104c18da4;
  param_1[0x1e] = &UNK_104c18d9c;
  param_1[0x1f] = &UNK_104c18d94;
  param_1[0x20] = &UNK_104c18d8c;
  param_1[0x77] = &UNK_104c18dac;
  param_1[0x80] = &UNK_104c18db4;
  param_1[0x79] = &UNK_104c18dbc;
  param_1[0x78] = &UNK_104c18dc4;
  param_1[0x7a] = &UNK_104c18dcc;
  param_1[0x7e] = &UNK_104c18dd4;
  param_1[0x7f] = &UNK_104c18ddc;
  param_1[0x7c] = &UNK_104c18de4;
  param_1[0x7b] = &UNK_104c18dec;
  param_1[0x7d] = &UNK_104c18df4;
  param_1[0x82] = &UNK_104c18dfc;
  param_1[0x81] = &UNK_104c18e04;
  param_1[0x86] = &UNK_104c18e0c;
  param_1[0x85] = &UNK_104c18e14;
  param_1[0x84] = &UNK_104c18e1c;
  param_1[0x83] = &UNK_104c18e24;
  param_1[0xff] = &UNK_104c18e2c;
  param_1[0x108] = &UNK_104c18e34;
  param_1[0xee] = &UNK_104c18e40;
  param_1[0xf7] = &UNK_104c18e48;
  param_1[0xf0] = &UNK_104c18e50;
  param_1[0xef] = &UNK_104c18e58;
  param_1[0xf1] = &UNK_104c18e60;
  param_1[0xf5] = &UNK_104c18e68;
  param_1[0xf6] = &UNK_104c18e70;
  param_1[0xf3] = &UNK_104c18e78;
  param_1[0xf2] = &UNK_104c18e80;
  param_1[0xf4] = &UNK_104c18e88;
  param_1[0xf9] = &UNK_104c18e90;
  param_1[0xf8] = &UNK_104c18e98;
  param_1[0xfd] = &UNK_104c18ea0;
  param_1[0xfc] = &UNK_104c18ea8;
  param_1[0xfb] = &UNK_104c18eb0;
  param_1[0xfa] = &UNK_104c18eb8;
  param_1[0x88] = &UNK_104c18ec0;
  param_1[0x91] = &UNK_104c18ec8;
  param_1[0x8a] = &UNK_104c18ed0;
  param_1[0x89] = &UNK_104c18ed8;
  param_1[0x8b] = &UNK_104c18ee0;
  param_1[0x8f] = &UNK_104c18ee8;
  param_1[0x90] = &UNK_104c18ef0;
  param_1[0x8d] = &UNK_104c18ef8;
  param_1[0x8c] = &UNK_104c18f00;
  param_1[0x8e] = &UNK_104c18f08;
  param_1[0x93] = &UNK_104c18f10;
  param_1[0x92] = &UNK_104c18f18;
  param_1[0x97] = &UNK_104c18f20;
  param_1[0x96] = &UNK_104c18f28;
  param_1[0x95] = &UNK_104c18f30;
  param_1[0x94] = &UNK_104c18f38;
  param_1[0x22] = &UNK_104c18f40;
  param_1[0x23] = &UNK_104c18f60;
  param_1[0x24] = &UNK_104c18f54;
  param_1[0x25] = &UNK_104c18f6c;
  param_1[0x2a] = &UNK_104c18f84;
  param_1[0x2b] = &UNK_104c18f48;
  param_1[0x26] = &UNK_104c18f9c;
  param_1[0x27] = &UNK_104c18f90;
  param_1[0x28] = &UNK_104c18fa8;
  param_1[0x29] = &UNK_104c18f78;
  param_1[0x2c] = &UNK_104c18fc0;
  param_1[0x2d] = &UNK_104c18fb4;
  param_1[0x99] = &UNK_104c18fcc;
  param_1[0xa2] = &UNK_104c18fd4;
  param_1[0x121] = &UNK_104c18fdc;
  param_1[0x110] = &UNK_104c18fe4;
  param_1[0x119] = &UNK_104c18fec;
  param_1[0xaa] = &UNK_104c18ff8;
  param_1[0xb3] = &UNK_104c19000;
  param_1[0x33] = &UNK_104c19008;
  param_1[0x3c] = &UNK_104c19010;
  param_1[0xbb] = &UNK_104c1901c;
  param_1[0x132] = &UNK_104c19024;
  param_1[0xcc] = &UNK_104c1902c;
  param_1[0x44] = &UNK_104c19034;
  param_1[0x10] = &UNK_100d85478;
  *param_1 = &UNK_100d85598;
  param_1[1] = &UNK_100d855f0;
  param_1[2] = &UNK_100d85620;
  param_1[3] = &UNK_100d85630;
  param_1[8] = &UNK_100d85640;
  param_1[9] = &UNK_100d855e0;
  param_1[4] = &UNK_100d85600;
  param_1[5] = &UNK_100d85650;
  param_1[6] = &UNK_100d85670;
  param_1[7] = &UNK_100d85660;
  param_1[10] = &UNK_100d85680;
  param_1[0xb] = &UNK_100d85610;
  param_1[0xc] = &UNK_100d856b0;
  param_1[0xd] = &UNK_100d85690;
  param_1[0xe] = &UNK_100d856c0;
  param_1[0xf] = &UNK_100d856a0;
  param_1[0x55] = &UNK_100d86398;
  param_1[0x5e] = &UNK_100d863d4;
  param_1[0x56] = &UNK_100d863e4;
  param_1[0x59] = &UNK_100d863f4;
  param_1[0x60] = &UNK_100d86404;
  param_1[0x57] = &UNK_100d86414;
  param_1[0x58] = &UNK_100d86424;
  param_1[0x5d] = &UNK_100d86434;
  param_1[0x5a] = &UNK_100d86444;
  param_1[0x5c] = &UNK_100d86454;
  param_1[0x5b] = &UNK_100d86464;
  param_1[0x5f] = &UNK_100d86474;
  param_1[0x62] = &UNK_100d86484;
  param_1[100] = &UNK_100d86494;
  param_1[0x61] = &UNK_100d864a4;
  param_1[99] = &UNK_100d864b4;
  param_1[0xdd] = &UNK_100d889c8;
  param_1[0xe6] = &UNK_100d88a04;
  param_1[0xde] = &UNK_100d88a10;
  param_1[0xe1] = &UNK_100d88a20;
  param_1[0xe8] = &UNK_100d88a30;
  param_1[0xdf] = &UNK_100d88a40;
  param_1[0xe0] = &UNK_100d88a50;
  param_1[0xe5] = &UNK_100d88a60;
  param_1[0xe2] = &UNK_100d88a70;
  param_1[0xe4] = &UNK_100d88a80;
  param_1[0xe3] = &UNK_100d88a90;
  param_1[0xe7] = &UNK_100d88aa0;
  param_1[0xea] = &UNK_100d88aac;
  param_1[0xec] = &UNK_100d88abc;
  param_1[0xe9] = &UNK_100d88acc;
  param_1[0xeb] = &UNK_100d88ad8;
  param_1[0x66] = &UNK_100d864c4;
  param_1[0x6f] = &UNK_100d86500;
  param_1[0x67] = &UNK_100d86510;
  param_1[0x6a] = &UNK_100d86520;
  param_1[0x71] = &UNK_100d86530;
  param_1[0x68] = &UNK_100d86540;
  param_1[0x69] = &UNK_100d86550;
  param_1[0x6e] = &UNK_100d86560;
  param_1[0x6b] = &UNK_100d86570;
  param_1[0x6d] = &UNK_100d86580;
  param_1[0x6c] = &UNK_100d86590;
  param_1[0x70] = &UNK_100d865a0;
  param_1[0x73] = &UNK_100d865b0;
  param_1[0x75] = &UNK_100d865c0;
  param_1[0x72] = &UNK_100d865d0;
  param_1[0x74] = &UNK_100d865e0;
  param_1[0x11] = &UNK_100d8609c;
  param_1[0x12] = &UNK_100d860e4;
  param_1[0x19] = &UNK_100d86134;
  param_1[0x1a] = &UNK_100d860d8;
  param_1[0x14] = &UNK_100d86124;
  param_1[0x15] = &UNK_100d860f4;
  param_1[0x1b] = &UNK_100d86174;
  param_1[0x1c] = &UNK_100d86104;
  param_1[0x13] = &UNK_100d86114;
  param_1[0x16] = &UNK_100d86144;
  param_1[0x17] = &UNK_100d86164;
  param_1[0x18] = &UNK_100d86154;
  param_1[0x1e] = &UNK_100d86180;
  param_1[0x1f] = &UNK_100d861ac;
  param_1[0x20] = &UNK_100d86190;
  param_1[0x1d] = &UNK_100d861a0;
  param_1[0x77] = &UNK_100d89564;
  param_1[0x80] = &UNK_100d895a4;
  param_1[0x78] = &UNK_100d895b0;
  param_1[0x7b] = &UNK_100d895c0;
  param_1[0x82] = &UNK_100d895d0;
  param_1[0x79] = &UNK_100d895e0;
  param_1[0x7a] = &UNK_100d895f0;
  param_1[0x7f] = &UNK_100d89600;
  param_1[0x7c] = &UNK_100d89610;
  param_1[0x7e] = &UNK_100d89620;
  param_1[0x7d] = &UNK_100d89630;
  param_1[0x81] = &UNK_100d89640;
  param_1[0x84] = &UNK_100d8964c;
  param_1[0x86] = &UNK_100d8965c;
  param_1[0x83] = &UNK_100d8966c;
  param_1[0x85] = &UNK_100d89678;
  param_1[0xff] = &UNK_100d8b6fc;
  param_1[0x108] = &UNK_100d8b104;
  param_1[0xee] = &UNK_100d88ae4;
  param_1[0xf7] = &UNK_100d88b1c;
  param_1[0xef] = &UNK_100d88b24;
  param_1[0xf2] = &UNK_100d88b30;
  param_1[0xf9] = &UNK_100d88b3c;
  param_1[0xf0] = &UNK_100d88b48;
  param_1[0xf1] = &UNK_100d88b54;
  param_1[0xf6] = &UNK_100d88b60;
  param_1[0xf3] = &UNK_100d88b6c;
  param_1[0xf5] = &UNK_100d88b78;
  param_1[0xf4] = &UNK_100d88b84;
  param_1[0xf8] = &UNK_100d88b90;
  param_1[0xfb] = &UNK_100d88b98;
  param_1[0xfd] = &UNK_100d88ba4;
  param_1[0xfa] = &UNK_100d88bb0;
  param_1[0xfc] = &UNK_100d88bb8;
  param_1[0x88] = &UNK_100d89684;
  param_1[0x91] = &UNK_100d896c0;
  param_1[0x89] = &UNK_100d896c8;
  param_1[0x8c] = &UNK_100d896d4;
  param_1[0x93] = &UNK_100d896e0;
  param_1[0x8a] = &UNK_100d896ec;
  param_1[0x8b] = &UNK_100d896f8;
  param_1[0x90] = &UNK_100d89704;
  param_1[0x8d] = &UNK_100d89710;
  param_1[0x8f] = &UNK_100d8971c;
  param_1[0x8e] = &UNK_100d89728;
  param_1[0x92] = &UNK_100d89734;
  param_1[0x95] = &UNK_100d8973c;
  param_1[0x97] = &UNK_100d89748;
  param_1[0x94] = &UNK_100d89754;
  param_1[0x96] = &UNK_100d8975c;
  param_1[0x22] = &UNK_100d88280;
  param_1[0x23] = &UNK_100d882d0;
  param_1[0x24] = &UNK_100d8830c;
  param_1[0x25] = &UNK_100d88320;
  param_1[0x2a] = &UNK_100d88334;
  param_1[0x2b] = &UNK_100d882c0;
  param_1[0x26] = &UNK_100d882e4;
  param_1[0x27] = &UNK_100d88348;
  param_1[0x28] = &UNK_100d88370;
  param_1[0x29] = &UNK_100d8835c;
  param_1[0x2c] = &UNK_100d88384;
  param_1[0x2d] = &UNK_100d882f8;
  param_1[0x99] = &UNK_100d8b524;
  param_1[0xa2] = &UNK_100d8ac8c;
  param_1[0x121] = &UNK_100d8d048;
  param_1[0x110] = &UNK_100d8b864;
  param_1[0x119] = &UNK_100d8b294;
  param_1[0xaa] = &UNK_100d8b62c;
  param_1[0xb3] = &UNK_100d8aeb8;
  param_1[0x33] = &UNK_100d8b404;
  param_1[0x3c] = &UNK_100d8aaf0;
  param_1[0xbb] = &UNK_100d8cdec;
  param_1[0x132] = &UNK_100d8cf24;
  param_1[0xcc] = &UNK_100d8cc50;
  param_1[0x44] = &UNK_100d8ca98;
  return;
}



/* Entry: 10bdaf87c; end: 10bdafd97;  */

long * FUN_10bdaf87c(long *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined *extraout_x8;
  undefined *puVar11;
  undefined *extraout_x9;
  undefined *puVar12;
  long *plVar13;
  uint *puVar14;
  ulong uVar15;
  long *unaff_x24;
  long lVar16;
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _pthread_once(0x1130a8630,FUN_10bdafd98);
  plVar13 = (long *)0xffffffea;
  if (((((param_1 != (long *)0x0) && (param_2 != (uint *)0x0)) && (*param_2 < 0x101)) &&
      ((param_2[1] < 0x101 && (*(long *)(param_2 + 8) != 0)))) &&
     ((*(long *)(param_2 + 10) != 0 && ((param_2[3] < 0x20 && (param_2[0x13] < 4)))))) {
    iVar4 = (int)auStack_a8;
    _pthread_attr_init();
    if (iVar4 == 0) {
      _pthread_attr_setstacksize(auStack_a8,0x100000);
      plVar13 = (long *)0xf700;
      func_0x000104c1bae4(0xf700,0x40);
      *param_1 = (long)plVar13;
      if (plVar13 == (long *)0x0) goto LAB_10bdaf948;
      unaff_x24 = plVar13 + 0x1ec2;
      _bzero();
      lVar16 = *(long *)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 6);
      plVar13[0x1ec8] = *(long *)(param_2 + 10);
      plVar13[0x1ec7] = lVar16;
      plVar13[0x1ec6] = lVar6;
      lVar6 = *(long *)(param_2 + 0xc);
      plVar13[0x1ed8] = *(long *)(param_2 + 0xe);
      plVar13[0x1ed7] = lVar6;
      plVar13[0x1ec9] = *(long *)(param_2 + 2);
      uVar3 = param_2[5];
      *(uint *)((long)plVar13 + 0xf654) = param_2[4];
      *(uint *)((long)plVar13 + 0xf65c) = uVar3;
      lVar6 = *(long *)(param_2 + 0x10);
      plVar13[0x1ecd] = *(long *)(param_2 + 0x12);
      plVar13[0x1ecc] = lVar6;
      plVar13[0x1ed1] = 0;
      plVar13[0x1ed0] = 0;
      plVar13[0x1ed3] = 0;
      plVar13[0x1ed2] = 0;
      plVar13[0x1ed5] = 0;
      plVar13[0x1ed4] = 0;
      plVar13[0x1ed0] = -0x8000000000000000;
      plVar13[0x1ed2] = -1;
      iVar4 = (int)plVar13 + 0x38;
      func_0x00010bdb056c();
      if (iVar4 != 0) goto LAB_10bdafd88;
      iVar4 = (int)plVar13 + 0x50;
      func_0x00010bdb056c();
      if (iVar4 != 0) goto LAB_10bdafd88;
      func_0x000104c1c344(0xc300);
      if (iVar4 != 0) goto LAB_10bdafd88;
      func_0x000104c1c344(0xc308);
      if (iVar4 != 0) goto LAB_10bdafd88;
      func_0x000104c1c344(0xf6d0);
      if (iVar4 != 0) goto LAB_10bdafd88;
      func_0x000104c1c344(0xcdd0);
      if (iVar4 != 0) goto LAB_10bdafd88;
      puVar11 = (undefined *)plVar13[0x1ec8];
      puVar12 = &UNK_104c218b0;
      if ((undefined *)plVar13[0x1ec7] == &UNK_104c217c4) goto LAB_10bdafd24;
      if (puVar11 == &UNK_104c218b0) goto LAB_10bdafd88;
      goto LAB_10bdafa64;
    }
    plVar13 = (long *)0xfffffff4;
  }
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return plVar13;
    }
    ___stack_chk_fail();
    puVar11 = extraout_x8;
    puVar12 = extraout_x9;
LAB_10bdafd24:
    if ((puVar11 == puVar12) && (unaff_x24[4] == 0)) {
      iVar4 = (int)unaff_x24 + 0xb8;
      func_0x00010bdb056c();
      if (iVar4 != 0) goto LAB_10bdafd88;
      unaff_x24[4] = unaff_x24[0x17];
LAB_10bdafa64:
      plVar13[0x68] = (long)(plVar13 + 0x67);
      *(undefined4 *)(plVar13 + 0x67) = 0;
      uVar3 = *param_2;
      if (uVar3 == 0) {
        plVar5 = plVar13;
        FUN_10bdae6a0();
        uVar3 = (uint)plVar5;
        if ((int)uVar3 < 2) {
          uVar3 = 1;
        }
        if (0xff < (int)uVar3) {
          uVar3 = 0x100;
        }
      }
      *(uint *)(plVar13 + 3) = uVar3;
      uVar2 = param_2[1];
      if (uVar2 == 0) {
        if (uVar3 < 0x32) {
          uVar9 = (ulong)(byte)(&UNK_10dd6b688)[uVar3 - 1];
        }
        else {
          uVar9 = 8;
        }
      }
      else {
        if (uVar3 <= uVar2) {
          uVar2 = uVar3;
        }
        uVar9 = (ulong)uVar2;
      }
      *(int *)(plVar13 + 1) = (int)uVar9;
      lVar6 = uVar9 * 0x1640;
      func_0x000104c1bae4(lVar6,0x20);
      *plVar13 = lVar6;
      if (lVar6 == 0) goto LAB_10bdafd88;
      param_2 = (uint *)0x3f2c0;
      _bzero();
      lVar6 = (ulong)*(uint *)(plVar13 + 3) * 0x3f2c0;
      func_0x000104c1bae4(lVar6,0x40);
      plVar13[2] = lVar6;
      if (lVar6 == 0) goto LAB_10bdafd88;
      _bzero();
      if (1 < *(uint *)(plVar13 + 3)) {
        param_2 = (uint *)(plVar13 + 0x70);
        puVar14 = param_2;
        func_0x000104c1c34c();
        if ((int)puVar14 == 0) {
          puVar14 = (uint *)(plVar13 + 0x78);
          puVar7 = puVar14;
          func_0x000104c1c354();
          if ((int)puVar7 == 0) {
            iVar4 = (int)plVar13 + 0x408;
            func_0x000104c1c354();
            if (iVar4 == 0) {
              uVar3 = *(uint *)(plVar13 + 1);
              *(uint *)((long)plVar13 + 0x3f4) = uVar3;
              plVar13[0x7f] = 0xffffffff;
              *(undefined4 *)(plVar13 + 0x1858) = 1;
              goto LAB_10bdafb88;
            }
LAB_10bdafd78:
            _pthread_cond_destroy(puVar14);
          }
LAB_10bdafd80:
          _pthread_mutex_destroy(param_2);
        }
        goto LAB_10bdafd88;
      }
      uVar3 = *(uint *)(plVar13 + 1);
LAB_10bdafb88:
      uVar9 = (ulong)uVar3;
      if (1 < uVar9) {
        param_2 = (uint *)(uVar9 * 0x128);
        puVar14 = param_2;
        _malloc();
        plVar13[0x69] = (long)puVar14;
        if (puVar14 == (uint *)0x0) goto LAB_10bdafd88;
        _bzero();
      }
      lVar6 = 0x15d8;
      for (uVar15 = 0; uVar15 < uVar9; uVar15 = uVar15 + 1) {
        lVar16 = *plVar13;
        if (1 < *(uint *)(plVar13 + 3)) {
          param_2 = (uint *)(lVar16 + lVar6);
          iVar4 = (int)param_2 + -0xf8;
          func_0x000104c1c34c();
          if (iVar4 != 0) goto LAB_10bdafd88;
          iVar4 = (int)param_2 + -0xb8;
          func_0x000104c1c354();
          if (iVar4 != 0) {
            param_2 = (uint *)(lVar16 + lVar6 + -0xf8);
            goto LAB_10bdafd80;
          }
          param_2 = (uint *)(lVar16 + lVar6);
          puVar14 = param_2;
          func_0x000104c1c34c();
          if ((int)puVar14 != 0) {
            puVar14 = param_2 + -0x2e;
            param_2 = param_2 + -0x3e;
            goto LAB_10bdafd78;
          }
          uVar9 = (ulong)*(uint *)(plVar13 + 1);
        }
        lVar16 = lVar16 + lVar6;
        *(long **)(lVar16 + -0x920) = plVar13;
        *(long **)(lVar16 + -0x88) = plVar13 + 0x70;
        *(undefined4 *)(lVar16 + -0x1c8) = 0xffffffff;
        lVar6 = lVar6 + 0x1640;
      }
      lVar16 = 0;
      lVar6 = 0x3f288;
      for (uVar9 = 0; uVar9 < *(uint *)(plVar13 + 3); uVar9 = uVar9 + 1) {
        param_2 = (uint *)plVar13[2];
        puVar1 = (undefined8 *)((long)param_2 + lVar16);
        lVar10 = *plVar13;
        plVar5 = (long *)((long)param_2 + lVar6);
        plVar8 = plVar5 + -0x10;
        *plVar5 = (long)(plVar13 + 0x70);
        *puVar1 = plVar13;
        puVar1[1] = lVar10;
        _bzero(puVar1 + 0x80,0x1000);
        if (1 < *(uint *)(plVar13 + 3)) {
          iVar4 = (int)plVar5 + -0x48;
          func_0x000104c1c34c();
          if (iVar4 != 0) goto LAB_10bdafd88;
          iVar4 = (int)((long)param_2 + lVar6) + -0x78;
          func_0x000104c1c354();
          if (iVar4 != 0) {
            param_2 = (uint *)((long)param_2 + lVar6 + -0x48);
            goto LAB_10bdafd80;
          }
          _pthread_create(plVar8,auStack_a8,&UNK_104c2b430,puVar1);
          if ((int)plVar8 != 0) {
            puVar14 = (uint *)((long)param_2 + lVar6 + -0x78);
            param_2 = (uint *)((long)param_2 + lVar6 + -0x48);
            goto LAB_10bdafd78;
          }
          *(undefined4 *)((long)param_2 + lVar6 + -8) = 1;
        }
        lVar6 = lVar6 + 0x3f2c0;
        lVar16 = lVar16 + 0x3f2c0;
      }
      plVar13 = (long *)0x0;
      *unaff_x24 = (long)&UNK_104c216c0;
      unaff_x24[1] = (long)&UNK_104c2aa0c;
      unaff_x24[2] = (long)&UNK_100dafac8;
      unaff_x24[3] = (long)&UNK_100dafa34;
    }
    else {
LAB_10bdafd88:
      FUN_10bdafdb4(param_1,0);
LAB_10bdaf948:
      plVar13 = (long *)0xfffffff4;
    }
    _pthread_attr_destroy(auStack_a8);
  } while( true );
}



/* Entry: 10bdafd98; end: 10bdafdb3;  */

void FUN_10bdafd98(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  
  FUN_10bdae684();
  FUN_10bdb09b8();
  FUN_10bdae760();
  puVar17 = (undefined1 *)0x1136af609;
  for (lVar15 = 0; lVar15 != 0xf; lVar15 = lVar15 + 1) {
    puVar21 = puVar17;
    for (lVar23 = 0; lVar23 != 2; lVar23 = lVar23 + 1) {
      lVar3 = lVar15 * 0x40 + 0x1136b6e08 + lVar23 * 0x20;
      lVar1 = lVar3 + 0x1e0;
      plVar25 = (long *)(lVar15 * 0x130 + 0x1138473c8 + lVar23 * 0x98);
      lVar4 = lVar15 * 0x80 + 0x1136b7768 + lVar23 * 0x40;
      lVar3 = lVar3 + 0x5a0;
      plVar25[5] = lVar1;
      plVar25[6] = lVar3;
      plVar25[0xd] = lVar4;
      plVar25[0xe] = lVar4 + 0x780;
      lVar5 = lVar15 * 0x100 + 0x1136a3a88 + lVar23 * 0x80;
      lVar6 = lVar15 * 0x100 + 0x1136a4988 + lVar23 * 0x80;
      plVar25[7] = lVar5;
      plVar25[8] = lVar6;
      lVar7 = lVar15 * 0x200 + 0x1136a5888 + lVar23 * 0x100;
      lVar8 = lVar15 * 0x200 + 0x1136a7688 + lVar23 * 0x100;
      plVar25[0xf] = lVar7;
      plVar25[0x10] = lVar8;
      puVar9 = &UNK_10dd6b72a + lVar23 * 0x200 + lVar15 * 0x400;
      lVar10 = lVar15 * 0x400 + 0x1136a9488 + lVar23 * 0x200;
      plVar25[9] = (long)puVar9;
      plVar25[10] = lVar10;
      lVar11 = lVar15 * 0x20 + 0x1136b6e08 + lVar23 * 0x10;
      lVar12 = lVar15 * 0x80 + 0x1136ad088 + lVar23 * 0x40;
      *plVar25 = lVar11;
      plVar25[1] = lVar12;
      lVar13 = lVar15 * 0x200 + 0x1136ad808 + lVar23 * 0x100;
      lVar14 = lVar15 * 0x800 + 0x1136af608 + lVar23 * 0x400;
      plVar25[2] = lVar13;
      plVar25[3] = lVar14;
      puVar20 = &UNK_10dd6f32a + lVar23 * 0x210 + lVar15 * 0x420;
      lVar26 = 1;
      puVar22 = puVar21;
      lVar24 = lVar14;
      lVar19 = 0;
      while (lVar19 != 0x20) {
        lVar2 = lVar19 + 1;
        _memcpy(lVar24,puVar20,lVar2);
        puVar16 = puVar20 + lVar19;
        puVar18 = puVar22;
        for (lVar19 = lVar26; lVar19 != 0x20; lVar19 = lVar19 + 1) {
          puVar16 = puVar16 + lVar19;
          *puVar18 = *puVar16;
          puVar18 = puVar18 + 1;
        }
        lVar24 = lVar24 + 0x20;
        puVar20 = puVar20 + lVar2;
        lVar26 = lVar26 + 1;
        puVar22 = puVar22 + 0x21;
        lVar19 = lVar2;
      }
      func_0x000104c21f78(lVar11,lVar14 + 99,0x20,8,8);
      func_0x000104c22014(lVar1,puVar9 + 0x21,0x10,4);
      func_0x000104c22014(lVar12,lVar14 + 0x21,0x20,4);
      func_0x000104c22014(lVar4,puVar9 + 0x20,0x10,2);
      func_0x000104c2200c(lVar5,puVar9,0x10,2);
      func_0x000104c2200c(lVar13,lVar14,0x20,2);
      func_0x000104c2200c(lVar7,puVar9,0x10,1);
      func_0x000104c21fc0(lVar3,lVar1,8,4);
      func_0x000104c21fc0(lVar4 + 0x780,lVar4,0x10,4);
      func_0x000104c21fc0(lVar6,lVar5,0x10,8);
      func_0x000104c21fc0(lVar8,lVar7,0x20,8);
      func_0x000104c21fc0(lVar10,puVar9,0x20,0x10);
      plVar25[4] = lVar14;
      plVar25[0xb] = lVar14;
      plVar25[0xc] = lVar14;
      puVar21 = puVar21 + 0x400;
      plVar25[0x11] = (long)puVar9;
      plVar25[0x12] = lVar10;
    }
    puVar17 = puVar17 + 0x800;
  }
  return;
}



/* Entry: 10bdafdb4; end: 10bdb013f;  */

void FUN_10bdafdb4(long *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    if (param_2 != 0) {
      func_0x000104c1c0e8(plVar6);
    }
    lVar4 = plVar6[2];
    if (lVar4 != 0) {
      if ((int)plVar6[0x1858] != 0) {
        _pthread_mutex_lock(plVar6 + 0x70);
        uVar5 = (ulong)*(uint *)(plVar6 + 3);
        for (lVar4 = 0x3f29c; (uVar5 != 0 && (*(int *)(plVar6[2] + lVar4 + -0x1c) != 0));
            lVar4 = lVar4 + 0x3f2c0) {
          *(undefined4 *)(plVar6[2] + lVar4) = 1;
          uVar5 = uVar5 - 1;
        }
        _pthread_cond_broadcast(plVar6 + 0x78);
        _pthread_mutex_unlock(plVar6 + 0x70);
        uVar5 = 0;
        for (lVar4 = 0x3f280;
            (uVar5 < *(uint *)(plVar6 + 3) && (piVar1 = (int *)(plVar6[2] + lVar4), *piVar1 != 0));
            lVar4 = lVar4 + 0x3f2c0) {
          _pthread_join(*(undefined8 *)(piVar1 + -0x1e),0);
          _pthread_cond_destroy(piVar1 + -0x1c);
          _pthread_mutex_destroy(piVar1 + -0x10);
          uVar5 = uVar5 + 1;
        }
        _pthread_cond_destroy(plVar6 + 0x81);
        _pthread_cond_destroy(plVar6 + 0x78);
        _pthread_mutex_destroy(plVar6 + 0x70);
        lVar4 = plVar6[2];
      }
      _free(lVar4);
    }
    lVar4 = 0xc28;
    for (uVar5 = 0; (lVar7 = *plVar6, lVar7 != 0 && (uVar5 < *(uint *)(plVar6 + 1)));
        uVar5 = uVar5 + 1) {
      if (1 < *(uint *)(plVar6 + 1)) {
        lVar2 = lVar7 + lVar4;
        _free(*(undefined8 *)(lVar2 + 0xa00));
        _free(*(undefined8 *)(lVar2 + 0x4d0));
        _free(*(undefined8 *)(lVar2 + 0x4d8));
        _free(*(undefined8 *)(lVar2 + 0x4e8));
        _free(*(undefined8 *)(lVar2 + 0x4f0));
        _free(*(undefined8 *)(lVar2 + 0x510));
        _free(*(undefined8 *)(lVar2 + 0x4e0));
      }
      if (1 < *(uint *)(plVar6 + 3)) {
        lVar2 = lVar7 + lVar4;
        _pthread_mutex_destroy(lVar2 + 0x9b0);
        _pthread_cond_destroy(lVar2 + 0x8f8);
        _pthread_mutex_destroy(lVar2 + 0x8b8);
      }
      puVar3 = (undefined8 *)(lVar7 + lVar4);
      _free(puVar3[0x98]);
      _free(puVar3[0x126]);
      _free(puVar3[0x127]);
      _free(puVar3[0x13]);
      _free(puVar3[0x25]);
      _free(puVar3[0x73]);
      _free(*puVar3);
      _free(puVar3[0xa4]);
      _free(puVar3[0xa3]);
      _free(puVar3[0xa5]);
      _free(puVar3[0xfe]);
      _free(puVar3[0x10e]);
      _free(puVar3[0x8d]);
      _free(puVar3[0x100]);
      _free(puVar3[0x101]);
      lVar4 = lVar4 + 0x1640;
    }
    _free(lVar7);
    uVar5 = (ulong)*(uint *)(plVar6 + 1);
    if ((1 < *(uint *)(plVar6 + 1)) && (lVar4 = plVar6[0x69], lVar4 != 0)) {
      lVar7 = 0;
      for (uVar9 = 0; uVar9 < uVar5; uVar9 = uVar9 + 1) {
        if (*(long *)(lVar4 + lVar7 + 8) != 0) {
          func_0x000104c21ed8(lVar4 + lVar7);
          uVar5 = (ulong)*(uint *)(plVar6 + 1);
          lVar4 = plVar6[0x69];
        }
        lVar7 = lVar7 + 0x128;
      }
      _free();
    }
    lVar7 = 0;
    for (lVar4 = 0; lVar4 < *(int *)((long)plVar6 + 0x2c); lVar4 = lVar4 + 1) {
      func_0x000104c06fa4(plVar6[4] + lVar7);
      lVar7 = lVar7 + 0x50;
    }
    _free();
    plVar8 = plVar6 + 0x19bb;
    plVar10 = plVar6 + 0x1862;
    lVar4 = 8;
    do {
      func_0x000104c06e18(plVar8);
      if (plVar10[1] != 0) {
        func_0x000104c21ed8(plVar10);
      }
      func_0x000104c28f7c(plVar10 + 0x26);
      func_0x000104c28f7c(plVar10 + 0x25);
      plVar8 = plVar8 + 3;
      plVar10 = plVar10 + 0x2b;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    func_0x000104c28f7c(plVar6 + 8);
    func_0x000104c28f7c(plVar6 + 0xb);
    func_0x000104c28f7c(plVar6 + 0xf);
    func_0x000104c28f7c(plVar6 + 0xd);
    func_0x000104c28f7c(plVar6 + 0x11);
    FUN_10bdb05d0(plVar6[7]);
    FUN_10bdb05d0(plVar6[10]);
    FUN_10bdb05d0(plVar6[0x1860]);
    FUN_10bdb05d0(plVar6[0x1861]);
    FUN_10bdb05d0(plVar6[0x19ba]);
    FUN_10bdb05d0(plVar6[0x1ed9]);
    FUN_10bdb05d0(plVar6[0x1eda]);
    if (*param_1 != 0) {
      _free();
      *param_1 = 0;
    }
  }
  return;
}



/* Entry: 10bdb0140; end: 10bdb015f;  */

void FUN_10bdb0140(long *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  if (param_1 != (long *)0x0) {
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) {
      func_0x000104c1c0e8(plVar6);
      lVar4 = plVar6[2];
      if (lVar4 != 0) {
        if ((int)plVar6[0x1858] != 0) {
          _pthread_mutex_lock(plVar6 + 0x70);
          uVar5 = (ulong)*(uint *)(plVar6 + 3);
          for (lVar4 = 0x3f29c; (uVar5 != 0 && (*(int *)(plVar6[2] + lVar4 + -0x1c) != 0));
              lVar4 = lVar4 + 0x3f2c0) {
            *(undefined4 *)(plVar6[2] + lVar4) = 1;
            uVar5 = uVar5 - 1;
          }
          _pthread_cond_broadcast(plVar6 + 0x78);
          _pthread_mutex_unlock(plVar6 + 0x70);
          uVar5 = 0;
          for (lVar4 = 0x3f280;
              (uVar5 < *(uint *)(plVar6 + 3) && (piVar1 = (int *)(plVar6[2] + lVar4), *piVar1 != 0))
              ; lVar4 = lVar4 + 0x3f2c0) {
            _pthread_join(*(undefined8 *)(piVar1 + -0x1e),0);
            _pthread_cond_destroy(piVar1 + -0x1c);
            _pthread_mutex_destroy(piVar1 + -0x10);
            uVar5 = uVar5 + 1;
          }
          _pthread_cond_destroy(plVar6 + 0x81);
          _pthread_cond_destroy(plVar6 + 0x78);
          _pthread_mutex_destroy(plVar6 + 0x70);
          lVar4 = plVar6[2];
        }
        _free(lVar4);
      }
      lVar4 = 0xc28;
      for (uVar5 = 0; (lVar7 = *plVar6, lVar7 != 0 && (uVar5 < *(uint *)(plVar6 + 1)));
          uVar5 = uVar5 + 1) {
        if (1 < *(uint *)(plVar6 + 1)) {
          lVar2 = lVar7 + lVar4;
          _free(*(undefined8 *)(lVar2 + 0xa00));
          _free(*(undefined8 *)(lVar2 + 0x4d0));
          _free(*(undefined8 *)(lVar2 + 0x4d8));
          _free(*(undefined8 *)(lVar2 + 0x4e8));
          _free(*(undefined8 *)(lVar2 + 0x4f0));
          _free(*(undefined8 *)(lVar2 + 0x510));
          _free(*(undefined8 *)(lVar2 + 0x4e0));
        }
        if (1 < *(uint *)(plVar6 + 3)) {
          lVar2 = lVar7 + lVar4;
          _pthread_mutex_destroy(lVar2 + 0x9b0);
          _pthread_cond_destroy(lVar2 + 0x8f8);
          _pthread_mutex_destroy(lVar2 + 0x8b8);
        }
        puVar3 = (undefined8 *)(lVar7 + lVar4);
        _free(puVar3[0x98]);
        _free(puVar3[0x126]);
        _free(puVar3[0x127]);
        _free(puVar3[0x13]);
        _free(puVar3[0x25]);
        _free(puVar3[0x73]);
        _free(*puVar3);
        _free(puVar3[0xa4]);
        _free(puVar3[0xa3]);
        _free(puVar3[0xa5]);
        _free(puVar3[0xfe]);
        _free(puVar3[0x10e]);
        _free(puVar3[0x8d]);
        _free(puVar3[0x100]);
        _free(puVar3[0x101]);
        lVar4 = lVar4 + 0x1640;
      }
      _free(lVar7);
      uVar5 = (ulong)*(uint *)(plVar6 + 1);
      if ((1 < *(uint *)(plVar6 + 1)) && (lVar4 = plVar6[0x69], lVar4 != 0)) {
        lVar7 = 0;
        for (uVar9 = 0; uVar9 < uVar5; uVar9 = uVar9 + 1) {
          if (*(long *)(lVar4 + lVar7 + 8) != 0) {
            func_0x000104c21ed8(lVar4 + lVar7);
            uVar5 = (ulong)*(uint *)(plVar6 + 1);
            lVar4 = plVar6[0x69];
          }
          lVar7 = lVar7 + 0x128;
        }
        _free();
      }
      lVar7 = 0;
      for (lVar4 = 0; lVar4 < *(int *)((long)plVar6 + 0x2c); lVar4 = lVar4 + 1) {
        func_0x000104c06fa4(plVar6[4] + lVar7);
        lVar7 = lVar7 + 0x50;
      }
      _free();
      plVar8 = plVar6 + 0x19bb;
      plVar10 = plVar6 + 0x1862;
      lVar4 = 8;
      do {
        func_0x000104c06e18(plVar8);
        if (plVar10[1] != 0) {
          func_0x000104c21ed8(plVar10);
        }
        func_0x000104c28f7c(plVar10 + 0x26);
        func_0x000104c28f7c(plVar10 + 0x25);
        plVar8 = plVar8 + 3;
        plVar10 = plVar10 + 0x2b;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      func_0x000104c28f7c(plVar6 + 8);
      func_0x000104c28f7c(plVar6 + 0xb);
      func_0x000104c28f7c(plVar6 + 0xf);
      func_0x000104c28f7c(plVar6 + 0xd);
      func_0x000104c28f7c(plVar6 + 0x11);
      FUN_10bdb05d0(plVar6[7]);
      FUN_10bdb05d0(plVar6[10]);
      FUN_10bdb05d0(plVar6[0x1860]);
      FUN_10bdb05d0(plVar6[0x1861]);
      FUN_10bdb05d0(plVar6[0x19ba]);
      FUN_10bdb05d0(plVar6[0x1ed9]);
      FUN_10bdb05d0(plVar6[0x1eda]);
      if (*param_1 != 0) {
        _free();
        *param_1 = 0;
      }
    }
    return;
  }
  return;
}



/* Entry: 10bdb0160; end: 10bdb019b;  */

void FUN_10bdb0160(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0xf6c0) != 0) {
    (**(code **)(param_1 + 0xf6c0))(*(undefined8 *)(param_1 + 0xf6b8),param_2,&stack0x00000000);
  }
  return;
}



/* Entry: 10bdb019c; end: 10bdb0547;  */

void FUN_10bdb019c(undefined8 *param_1)

{
  uint uVar1;
  
  param_1[10] = &UNK_104c1db8c;
  param_1[0xb] = &UNK_104c1dbd0;
  param_1[0x1e] = &UNK_104c1dbb0;
  param_1[0x1f] = &UNK_104c1dbf0;
  param_1[0xc] = &UNK_104c1dc10;
  param_1[0xd] = &UNK_104c1dc50;
  param_1[0x20] = &UNK_104c1dc30;
  param_1[0x21] = &UNK_104c1dc70;
  param_1[0xe] = &UNK_104c1dc90;
  param_1[0xf] = &UNK_104c1dcd0;
  param_1[0x22] = &UNK_104c1dcb0;
  param_1[0x23] = &UNK_104c1dcf0;
  param_1[0x10] = &UNK_104c1dd10;
  param_1[0x11] = &UNK_104c1dd50;
  param_1[0x24] = &UNK_104c1dd30;
  param_1[0x25] = &UNK_104c1dd70;
  param_1[0x12] = &UNK_104c1dd90;
  param_1[0x13] = &UNK_104c1ddd0;
  param_1[0x26] = &UNK_104c1ddb0;
  param_1[0x27] = &UNK_104c1df14;
  param_1[0x34] = &UNK_104c1e050;
  uVar1 = uRam00000001130a8618 & uRam0000000113815ee8;
  *param_1 = &UNK_100d9dcd0;
  param_1[1] = &UNK_100d9dcdc;
  param_1[6] = &UNK_100d9dcf4;
  param_1[7] = &UNK_100d9dce8;
  param_1[2] = &UNK_100d9c740;
  param_1[3] = &UNK_100d9c764;
  param_1[4] = &UNK_100d9c770;
  param_1[5] = &UNK_100d9c758;
  param_1[0x14] = &UNK_100da0760;
  param_1[0x15] = &UNK_100da076c;
  param_1[0x1a] = &UNK_100da0784;
  param_1[0x1b] = &UNK_100da0778;
  param_1[0x16] = &UNK_100d9f668;
  param_1[0x17] = &UNK_100d9f68c;
  param_1[0x18] = &UNK_100d9f698;
  param_1[0x19] = &UNK_100d9f680;
  param_1[8] = &UNK_100d9c74c;
  param_1[9] = &UNK_100d9f0f0;
  param_1[0x1c] = &UNK_100d9f674;
  param_1[0x1d] = &UNK_100da1700;
  param_1[0x28] = &UNK_100d9a6e0;
  param_1[0x29] = &UNK_100d9aac4;
  param_1[0x2e] = &UNK_100d9be8c;
  param_1[0x2f] = &UNK_100d9c224;
  param_1[0x2a] = &UNK_100d9b094;
  param_1[0x2b] = &UNK_100d9b83c;
  param_1[0x2c] = &UNK_100d9ba48;
  param_1[0x2d] = &UNK_100d9bc6c;
  param_1[0x30] = &UNK_100d9c01c;
  param_1[0x31] = &UNK_100da1bb8;
  param_1[0x32] = &UNK_100da1d64;
  param_1[0x33] = &UNK_100da1f10;
  if ((uVar1 >> 1 & 1) != 0) {
    *param_1 = &UNK_100dacbe8;
    param_1[1] = &UNK_100dacbdc;
    param_1[6] = &UNK_100dacbc4;
    param_1[7] = &UNK_100dacbb8;
    param_1[8] = &UNK_100dacbac;
    param_1[2] = &UNK_100dacbd0;
    param_1[3] = &UNK_100dacba0;
    param_1[4] = &UNK_100dacb94;
    param_1[5] = &UNK_100dacb88;
    param_1[0x14] = &UNK_100dac18c;
    param_1[0x15] = &UNK_100dac180;
    param_1[0x1a] = &UNK_100dac168;
    param_1[0x1b] = &UNK_100dac15c;
    param_1[0x1c] = &UNK_100dac150;
    param_1[0x16] = &UNK_100dac174;
    param_1[0x17] = &UNK_100dac144;
    param_1[0x18] = &UNK_100dac138;
    param_1[0x19] = &UNK_100dac12c;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    *param_1 = &UNK_100dae550;
    param_1[1] = &UNK_100dae544;
    param_1[6] = &UNK_100dae52c;
    param_1[7] = &UNK_100dae520;
    param_1[8] = &UNK_100dae514;
    param_1[2] = &UNK_100dae538;
    param_1[3] = &UNK_100dae508;
    param_1[4] = &UNK_100dae4fc;
    param_1[5] = &UNK_100dae4f0;
    param_1[0x14] = &UNK_100dad940;
    param_1[0x15] = &UNK_100dad934;
    param_1[0x1a] = &UNK_100dad91c;
    param_1[0x1b] = &UNK_100dad910;
    param_1[0x1c] = &UNK_100dad904;
    param_1[0x16] = &UNK_100dad928;
    param_1[0x17] = &UNK_100dad8f8;
    param_1[0x18] = &UNK_100dad8ec;
    param_1[0x19] = &UNK_100dad8e0;
    return;
  }
  return;
}



/* Entry: 10bdb0548; end: 10bdb05cf;  */

void FUN_10bdb0548(undefined8 param_1)

{
  _pthread_mutex_destroy();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10bdb05d0; end: 10bdb062b;  */

void FUN_10bdb05d0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long unaff_x19;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    func_0x000104c1e878();
    puVar3 = *(undefined8 **)(unaff_x19 + 0x40);
    iVar2 = *(int *)(unaff_x19 + 0x48) + -1;
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    *(int *)(unaff_x19 + 0x48) = iVar2;
    *(undefined4 *)(unaff_x19 + 0x4c) = 1;
    func_0x000104c1e858();
    while (puVar3 != (undefined8 *)0x0) {
      uVar1 = *puVar3;
      puVar3 = (undefined8 *)puVar3[1];
      _free(uVar1);
    }
    if (iVar2 == 0) {
      _pthread_mutex_destroy();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)();
      return;
    }
  }
  return;
}



/* Entry: 10bdb062c; end: 10bdb09b7;  */

void FUN_10bdb062c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  
  puVar17 = (undefined1 *)0x1136af609;
  for (lVar15 = 0; lVar15 != 0xf; lVar15 = lVar15 + 1) {
    puVar21 = puVar17;
    for (lVar23 = 0; lVar23 != 2; lVar23 = lVar23 + 1) {
      lVar3 = lVar15 * 0x40 + 0x1136b6e08 + lVar23 * 0x20;
      lVar1 = lVar3 + 0x1e0;
      plVar25 = (long *)(lVar15 * 0x130 + 0x1138473c8 + lVar23 * 0x98);
      lVar4 = lVar15 * 0x80 + 0x1136b7768 + lVar23 * 0x40;
      lVar3 = lVar3 + 0x5a0;
      plVar25[5] = lVar1;
      plVar25[6] = lVar3;
      plVar25[0xd] = lVar4;
      plVar25[0xe] = lVar4 + 0x780;
      lVar5 = lVar15 * 0x100 + 0x1136a3a88 + lVar23 * 0x80;
      lVar6 = lVar15 * 0x100 + 0x1136a4988 + lVar23 * 0x80;
      plVar25[7] = lVar5;
      plVar25[8] = lVar6;
      lVar7 = lVar15 * 0x200 + 0x1136a5888 + lVar23 * 0x100;
      lVar8 = lVar15 * 0x200 + 0x1136a7688 + lVar23 * 0x100;
      plVar25[0xf] = lVar7;
      plVar25[0x10] = lVar8;
      puVar9 = &UNK_10dd6b72a + lVar23 * 0x200 + lVar15 * 0x400;
      lVar10 = lVar15 * 0x400 + 0x1136a9488 + lVar23 * 0x200;
      plVar25[9] = (long)puVar9;
      plVar25[10] = lVar10;
      lVar11 = lVar15 * 0x20 + 0x1136b6e08 + lVar23 * 0x10;
      lVar12 = lVar15 * 0x80 + 0x1136ad088 + lVar23 * 0x40;
      *plVar25 = lVar11;
      plVar25[1] = lVar12;
      lVar13 = lVar15 * 0x200 + 0x1136ad808 + lVar23 * 0x100;
      lVar14 = lVar15 * 0x800 + 0x1136af608 + lVar23 * 0x400;
      plVar25[2] = lVar13;
      plVar25[3] = lVar14;
      puVar20 = &UNK_10dd6f32a + lVar23 * 0x210 + lVar15 * 0x420;
      lVar26 = 1;
      puVar22 = puVar21;
      lVar24 = lVar14;
      lVar19 = 0;
      while (lVar19 != 0x20) {
        lVar2 = lVar19 + 1;
        _memcpy(lVar24,puVar20,lVar2);
        puVar16 = puVar20 + lVar19;
        puVar18 = puVar22;
        for (lVar19 = lVar26; lVar19 != 0x20; lVar19 = lVar19 + 1) {
          puVar16 = puVar16 + lVar19;
          *puVar18 = *puVar16;
          puVar18 = puVar18 + 1;
        }
        lVar24 = lVar24 + 0x20;
        puVar20 = puVar20 + lVar2;
        lVar26 = lVar26 + 1;
        puVar22 = puVar22 + 0x21;
        lVar19 = lVar2;
      }
      func_0x000104c21f78(lVar11,lVar14 + 99,0x20,8,8);
      func_0x000104c22014(lVar1,puVar9 + 0x21,0x10,4);
      func_0x000104c22014(lVar12,lVar14 + 0x21,0x20,4);
      func_0x000104c22014(lVar4,puVar9 + 0x20,0x10,2);
      func_0x000104c2200c(lVar5,puVar9,0x10,2);
      func_0x000104c2200c(lVar13,lVar14,0x20,2);
      func_0x000104c2200c(lVar7,puVar9,0x10,1);
      func_0x000104c21fc0(lVar3,lVar1,8,4);
      func_0x000104c21fc0(lVar4 + 0x780,lVar4,0x10,4);
      func_0x000104c21fc0(lVar6,lVar5,0x10,8);
      func_0x000104c21fc0(lVar8,lVar7,0x20,8);
      func_0x000104c21fc0(lVar10,puVar9,0x20,0x10);
      plVar25[4] = lVar14;
      plVar25[0xb] = lVar14;
      plVar25[0xc] = lVar14;
      puVar21 = puVar21 + 0x400;
      plVar25[0x11] = (long)puVar9;
      plVar25[0x12] = lVar10;
    }
    puVar17 = puVar17 + 0x800;
  }
  return;
}



/* Entry: 10bdb09b8; end: 10bdb0eb3;  */

void FUN_10bdb09b8(void)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  short sVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  short sVar24;
  int iVar25;
  long lVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined1 *puVar30;
  ulong uVar31;
  uint uVar32;
  undefined1 auStack_6058 [4096];
  undefined1 auStack_5058 [36];
  undefined8 auStack_5034 [507];
  undefined1 auStack_4058 [4096];
  undefined1 auStack_3058 [64];
  undefined1 auStack_3018 [4032];
  undefined1 auStack_2058 [4096];
  undefined1 auStack_1058 [4096];
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = auStack_5034;
  iVar25 = 0x40;
  do {
    *(undefined8 *)((long)puVar22 + -0x1c) = 0;
    *(undefined8 *)((long)puVar22 + -0x24) = 0;
    *(undefined4 *)((long)puVar22 + -0xc) = 0;
    *(undefined8 *)((long)puVar22 + -0x14) = 0;
    puVar22[-1] = 0x403e392b15070200;
    *puVar22 = 0x4040404040404040;
    puVar22[1] = 0x4040404040404040;
    puVar22[2] = 0x4040404040404040;
    *(undefined4 *)(puVar22 + 3) = 0x40404040;
    puVar22 = puVar22 + 8;
    iVar25 = iVar25 + -1;
  } while (iVar25 != 0);
  puVar30 = auStack_3018;
  iVar25 = 0x2f;
  for (uVar32 = 0; uVar32 < 0x40; uVar32 = uVar32 + 2) {
    func_0x000104c2cf58(puVar30 + -0x40,&UNK_10dd770b0,iVar25 + 1);
    func_0x000104c2cf58(puVar30,&UNK_10dd770a8,iVar25);
    puVar30 = puVar30 + 0x80;
    iVar25 = iVar25 + -1;
  }
  func_0x000104c2cffc(auStack_4058,auStack_3058);
  func_0x000104c2cffc(auStack_6058,auStack_5058);
  func_0x000104c2d03c(auStack_2058,auStack_3058);
  func_0x000104c2d03c(auStack_1058,auStack_4058);
  lVar18 = 0x113848700;
  lVar17 = 0x113849080;
  FUN_10bdb0eb4(0x20,0x20,0,auStack_6058,&UNK_10dd770c0,0x113849080,0x113855480,0x113861880,0x7bfb);
  func_0x000104c2d094(0x4980);
  FUN_10bdb0eb4(0x20,0x10,1);
  func_0x000104c2d094(0x6980);
  FUN_10bdb0eb4(0x20,8,2);
  func_0x000104c2d094(0x7980);
  FUN_10bdb0eb4(0x10,0x20,4);
  func_0x000104c2d094(0x9980);
  FUN_10bdb0eb4(0x10,0x10,5);
  func_0x000104c2d094(0xa980);
  FUN_10bdb0eb4(0x10,8,6);
  func_0x000104c2d094(0xb180);
  FUN_10bdb0eb4(8,0x20,8);
  func_0x000104c2d094(0xc180);
  FUN_10bdb0eb4(8,0x10,9);
  uVar32 = 0x7bfb;
  func_0x000104c2d094(0xc980);
  uVar19 = 0x113867880;
  FUN_10bdb0eb4(8,8,10);
  _memset(0x113867a80,0x20,0x400);
  lVar23 = 3;
  do {
    *(undefined2 *)(lVar18 + 0x310) = 0x3e70;
    *(undefined2 *)(lVar18 + 0x2c8) = 0x3e70;
    *(undefined2 *)(lVar18 + 0x1f0) = 0x3e70;
    *(undefined2 *)(lVar18 + 0x1a8) = 0x3e70;
    *(undefined2 *)(lVar18 + 0x160) = 0x3e70;
    *(undefined2 *)(lVar18 + 0x88) = 0x3e70;
    *(undefined2 *)(lVar18 + 0x40) = 0x3e70;
    lVar18 = lVar18 + 0x318;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  func_0x000104c2d088(0x113867e80,0x20);
  func_0x000104c2d088(0x113868a80,0x10);
  func_0x000104c2d07c(0x113869080,0x10);
  func_0x000104c2d088(0x113869380,8);
  func_0x000104c2d07c(0x113869680,8);
  func_0x000104c2d0c0(0x113869800,8);
  func_0x000104c2d07c(0x1138698c0,4);
  func_0x000104c2d0c0(0x113869980,4);
  func_0x00010bdb110c(0x1138699e0,4,4,8);
  sVar20 = 0;
  sVar24 = 0;
  sVar27 = 0;
  sVar28 = 0;
  sVar29 = 0;
  lVar18 = 0;
  uVar10 = 0x41f0;
  uVar13 = 0x4220;
  uVar14 = 0x4238;
  lVar15 = 0x4250;
  lVar16 = 0x425c;
  for (lVar23 = 0; lVar23 != 6; lVar23 = lVar23 + 2) {
    lVar17 = lVar23 + 0x113848700;
    *(short *)(lVar23 + 0x113848742) = sVar20 + 0x3ef0;
    *(short *)(lVar23 + 0x113848a5a) = sVar24 + 0x4070;
    sVar4 = sVar27 + 0x4130;
    *(short *)(lVar23 + 0x113848d72) = sVar4;
    *(short *)(lVar23 + 0x11384878a) = sVar20 + 0x3ef0;
    *(short *)(lVar23 + 0x113848aa2) = sVar4;
    *(short *)(lVar23 + 0x113848862) = sVar24 + 0x4070;
    sVar7 = (short)lVar18;
    sVar5 = sVar7 * 8 + 0x4220;
    sVar6 = sVar7 * 4 + 0x4250;
    lVar18 = lVar18 + 1;
    *(short *)(lVar23 + 0x113848dba) = sVar4;
    *(short *)(lVar23 + 0x113848b7a) = sVar7 * 0x20 + 0x4190;
    sVar7 = sVar28 + 0x41f0;
    *(short *)(lVar23 + 0x113848e92) = sVar7;
    *(short *)(lVar23 + 0x1138488aa) = sVar4;
    *(short *)(lVar23 + 0x113848bc2) = sVar7;
    *(short *)(lVar23 + 0x113848eda) = sVar5;
    *(short *)(lVar23 + 0x1138488f2) = sVar4;
    *(short *)(lVar23 + 0x113848c0a) = sVar5;
    *(short *)(lVar23 + 0x113848f22) = sVar5;
    *(short *)(lVar23 + 0x1138489ca) = sVar7;
    *(short *)(lVar23 + 0x113848ce2) = sVar29 + 0x4238;
    uVar1 = (int)lVar23 + 0x425c;
    uVar19 = (ulong)uVar1;
    *(short *)(lVar23 + 0x113848ffa) = sVar6;
    sVar29 = sVar29 + 8;
    *(short *)(lVar23 + 0x113848a12) = sVar5;
    sVar28 = sVar28 + 0x10;
    sVar27 = sVar27 + 0x20;
    *(short *)(lVar23 + 0x113848d2a) = sVar6;
    sVar24 = sVar24 + 0x40;
    sVar20 = sVar20 + 0x80;
    *(short *)(lVar23 + 0x113849042) = (short)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uVar12 = (uint)uVar13;
    uVar1 = uVar12 * (int)uVar10;
    iVar25 = (uVar1 >> 1) * 0x10;
    iVar3 = (uVar1 >> 2) * 0x10;
    uVar31 = uVar10 & 0xffffffff;
    lVar9 = (uVar14 & 0xffffffff) * 0x48;
    for (lVar23 = 0; lVar23 != 0x10; lVar23 = lVar23 + 1) {
      pbVar2 = (byte *)(lVar16 + lVar23 * 3);
      lVar11 = lVar15 + (ulong)*pbVar2 * 0x1000 +
               (long)(int)(0x820 - ((uVar12 * 8 * (uint)pbVar2[2] & 0x1ffc0) +
                                   ((int)uVar10 * (uint)pbVar2[1] >> 3)));
      uVar14 = uVar13;
      lVar26 = lVar17;
      uVar21 = uVar12;
      if ((uVar32 & 1) == 0) {
        while (uVar21 != 0) {
          _memcpy(lVar26,lVar11,uVar31);
          lVar11 = lVar11 + 0x40;
          uVar21 = (int)uVar14 - 1;
          uVar14 = (ulong)uVar21;
          lVar26 = lVar26 + uVar31;
        }
      }
      else {
        for (uVar21 = 0; uVar21 != uVar12; uVar21 = uVar21 + 1) {
          for (uVar14 = 0; uVar31 != uVar14; uVar14 = uVar14 + 1) {
            *(char *)(lVar26 + uVar14) = '@' - *(char *)(lVar11 + uVar14);
          }
          lVar11 = lVar11 + 0x40;
          lVar26 = lVar26 + uVar31;
        }
      }
      uVar21 = uVar32 & 1;
      uVar8 = (undefined2)((int)lVar17 + 0xec7b7900U >> 3);
      *(undefined2 *)(lVar9 + 0x113848720 + lVar23 * 2) = uVar8;
      *(undefined2 *)(lVar9 + 0x113848700 + lVar23 * 2) = uVar8;
      lVar11 = lVar18 + (ulong)(uVar21 * iVar25);
      func_0x000104c2d0b0(lVar11,lVar17,0);
      *(short *)(lVar9 + 0x113848a18 + lVar23 * 2) = (short)lVar11;
      lVar11 = lVar18 + (ulong)((uVar21 ^ 1) * iVar25);
      func_0x000104c2d0b0(lVar11,lVar17,1);
      *(short *)(lVar9 + 0x113848a38 + lVar23 * 2) = (short)lVar11;
      lVar11 = uVar19 + uVar21 * iVar3;
      func_0x000104c2d0a0(lVar11,lVar17,0);
      *(short *)(lVar9 + 0x113848d30 + lVar23 * 2) = (short)lVar11;
      lVar11 = uVar19 + (uVar21 ^ 1) * iVar3;
      func_0x000104c2d0a0(lVar11,lVar17,1);
      *(short *)(lVar9 + 0x113848d50 + lVar23 * 2) = (short)lVar11;
      uVar32 = uVar32 >> 1;
      lVar17 = lVar17 + (ulong)uVar1;
      lVar18 = lVar18 + (ulong)(uVar1 >> 1);
      uVar19 = uVar19 + (uVar1 >> 2);
    }
    return;
  }
  return;
}



/* Entry: 10bdb0eb4; end: 10bdb11db;  */

void FUN_10bdb0eb4(uint param_1,int param_2,ulong param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,uint param_9)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar5 = param_2 * param_1;
  iVar3 = (uVar5 >> 1) * 0x10;
  iVar4 = (uVar5 >> 2) * 0x10;
  uVar13 = (ulong)param_1;
  lVar7 = (param_3 & 0xffffffff) * 0x48;
  for (lVar12 = 0; lVar12 != 0x10; lVar12 = lVar12 + 1) {
    pbVar1 = (byte *)(param_5 + lVar12 * 3);
    lVar8 = param_4 + (ulong)*pbVar1 * 0x1000 +
            (long)(int)(0x820 - ((param_2 * 8 * (uint)pbVar1[2] & 0x1ffc0) +
                                (param_1 * pbVar1[1] >> 3)));
    lVar10 = param_6;
    iVar9 = param_2;
    if ((param_9 & 1) == 0) {
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        _memcpy(lVar10,lVar8,uVar13);
        lVar8 = lVar8 + 0x40;
        lVar10 = lVar10 + uVar13;
      }
    }
    else {
      for (iVar9 = 0; iVar9 != param_2; iVar9 = iVar9 + 1) {
        for (uVar11 = 0; uVar13 != uVar11; uVar11 = uVar11 + 1) {
          *(char *)(lVar10 + uVar11) = '@' - *(char *)(lVar8 + uVar11);
        }
        lVar8 = lVar8 + 0x40;
        lVar10 = lVar10 + uVar13;
      }
    }
    uVar2 = param_9 & 1;
    uVar6 = (undefined2)((int)param_6 + 0xec7b7900U >> 3);
    *(undefined2 *)(lVar7 + 0x113848720 + lVar12 * 2) = uVar6;
    *(undefined2 *)(lVar7 + 0x113848700 + lVar12 * 2) = uVar6;
    lVar8 = param_7 + (ulong)(uVar2 * iVar3);
    func_0x000104c2d0b0(lVar8,param_6,0);
    *(short *)(lVar7 + 0x113848a18 + lVar12 * 2) = (short)lVar8;
    lVar8 = param_7 + (ulong)((uVar2 ^ 1) * iVar3);
    func_0x000104c2d0b0(lVar8,param_6,1);
    *(short *)(lVar7 + 0x113848a38 + lVar12 * 2) = (short)lVar8;
    lVar8 = param_8 + (ulong)(uVar2 * iVar4);
    func_0x000104c2d0a0(lVar8,param_6,0);
    *(short *)(lVar7 + 0x113848d30 + lVar12 * 2) = (short)lVar8;
    lVar8 = param_8 + (ulong)((uVar2 ^ 1) * iVar4);
    func_0x000104c2d0a0(lVar8,param_6,1);
    *(short *)(lVar7 + 0x113848d50 + lVar12 * 2) = (short)lVar8;
    param_9 = param_9 >> 1;
    param_6 = param_6 + (ulong)uVar5;
    param_7 = param_7 + (ulong)(uVar5 >> 1);
    param_8 = param_8 + (ulong)(uVar5 >> 2);
  }
  return;
}



/* Entry: 10bdb11dc; end: 10bdb1277;  */

uint FUN_10bdb11dc(undefined1 *param_1,long param_2,int param_3,uint param_4,uint param_5,
                  uint param_6)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  
  puVar3 = param_1;
  for (uVar2 = 0; uVar2 < param_5; uVar2 = uVar2 + param_6 + 1) {
    lVar1 = param_2 + (ulong)param_4;
    puVar5 = puVar3;
    for (uVar4 = 0; uVar4 < param_4; uVar4 = uVar4 + 2) {
      iVar6 = (uint)*(byte *)(param_2 + uVar4) + (uint)((byte *)(param_2 + uVar4))[1] + 1;
      if (param_6 != 0) {
        iVar6 = iVar6 + (uint)*(byte *)(lVar1 + uVar4) + (uint)*(byte *)(lVar1 + uVar4 + 1) + 1;
      }
      *puVar5 = (char)((uint)(iVar6 - param_3) >> (ulong)(param_6 + 1 & 0x1f));
      puVar5 = puVar5 + 1;
    }
    param_2 = param_2 + (ulong)(param_4 << (ulong)(param_6 & 0x1f));
    puVar3 = puVar3 + (param_4 >> 1);
  }
  return (int)param_1 + 0xec7b7900U >> 3 & 0xffff;
}



/* Entry: 10bdb1278; end: 10bdb12bf;  */

uint FUN_10bdb1278(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0xf24558d;
  func_0x000104c2d0cc();
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  iVar1 = 0xf2455aa;
  func_0x000104c2d0cc();
  if (iVar1 != 0) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}



/* Entry: 10bdb12c0; end: 10bdb1467;  */

void FUN_10bdb12c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdb12c4);
  (*pcVar1)();
}



/* Entry: 10bdb1468; end: 10bdb14c3;  */

void FUN_10bdb1468(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001077c9e24();
  func_0x0001077ca088();
  func_0x00010740f1d0();
  *param_1 = &PTR_DAT_1109dcb68;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdb14a8);
  (*pcVar1)();
}



/* Entry: 10bdb14c4; end: 10bdb150b;  */

void FUN_10bdb14c4(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x38;
  ___cxa_allocate_exception();
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0xffffffff;
  *puVar2 = &PTR_DAT_1109dfa68;
  puVar2[1] = &PTR_DAT_1109dfa98;
  puVar2[2] = &PTR_DAT_1109dfac0;
  puVar2[3] = 0;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdb1510);
  (*pcVar1)();
}



/* Entry: 10bdb150c; end: 10bdb1533;  */

void FUN_10bdb150c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bdb1510);
  (*pcVar1)();
}


