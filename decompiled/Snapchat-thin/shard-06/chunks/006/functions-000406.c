/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ae3304; end: 104ae33d7;  */

void FUN_104ae3304(long param_1,long param_2)

{
  long lVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 auStack_40 [2];
  char cStack_29;
  long lStack_28;
  
  *(int *)(param_1 + 0x14c) = (int)param_2;
  lStack_28 = 0;
  lVar1 = param_2;
  FUN_104ab1444(param_2,&lStack_28);
  if ((int)lVar1 != 0) {
    if (lStack_28 != 0) {
      func_0x00010002b024(auStack_40,"grpc-internal-encoding-request");
      func_0x00010002b024(auStack_58,lStack_28);
      func_0x0001004b5d48(param_1,auStack_40,auStack_58);
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      if (cStack_29 < '\0') {
        __ZdlPv(auStack_40[0]);
      }
      return;
    }
    func_0x00010bdae5ec();
  }
  func_0x00010bdae5c0();
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  __Unwind_Resume();
  (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,param_2 + 0x18);
  if (*(long *)(param_2 + 0x58) == 0) {
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  else {
    FUN_104ae3294(param_2);
    FUN_104ad8de8(*(undefined8 *)(param_2 + 0x58),0);
  }
  (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,param_2 + 0x18);
  return;
}



/* Entry: 104ae33d8; end: 104ae347f;  */

void FUN_104ae33d8(long param_1)

{
  (**(code **)(*plRam0000000113815c70 + 0x80))(plRam0000000113815c70,param_1 + 0x18);
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  else {
    FUN_104ae3294(param_1);
    FUN_104ad8de8(*(undefined8 *)(param_1 + 0x58),0);
  }
  (**(code **)(*plRam0000000113815c70 + 0x88))(plRam0000000113815c70,param_1 + 0x18);
  return;
}



/* Entry: 104ae3480; end: 104ae34cb;  */

void FUN_104ae3480(void)

{
  return;
}



/* Entry: 104ae34cc; end: 104ae354b;  */

undefined8 FUN_104ae34cc(void)

{
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call GetSendMessage on a method which \" \"has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1b2);
  return 0;
}



/* Entry: 104ae354c; end: 104ae3577;  */

void FUN_104ae354c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae3574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call ModifySendMessage on a method which \" \"has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1ca);
  return;
}



/* Entry: 104ae3578; end: 104ae35f7;  */

undefined8 FUN_104ae3578(void)

{
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call GetSendMessageStatus on a method which \" \"has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1ba);
  return 0;
}



/* Entry: 104ae35f8; end: 104ae3653;  */

void FUN_104ae35f8(undefined4 *param_1)

{
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call GetSendStatus on a method which \" \"has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1d7);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 104ae3654; end: 104ae367f;  */

void FUN_104ae3654(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae367c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call ModifySendStatus on a method \" \"which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1de);
  return;
}



/* Entry: 104ae3680; end: 104ae37bf;  */

undefined8 FUN_104ae3680(void)

{
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call GetSendTrailingMetadata on a \" \"method which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1e4);
  return 0;
}



/* Entry: 104ae37c0; end: 104ae380b;  */

void FUN_104ae37c0(undefined8 *param_1)

{
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call GetInterceptedChannel on a \" \"method which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x209);
  *param_1 = 0;
  return;
}



/* Entry: 104ae380c; end: 104ae386b;  */

void FUN_104ae380c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae3834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000113815c70 + 0x10))
            (plRam0000000113815c70,
             "false && \"It is illegal to call FailHijackedRecvMessage on a \" \"method which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x210);
  return;
}



/* Entry: 104ae386c; end: 104ae38d7;  */

void FUN_104ae386c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [48];
  
  func_0x000100468be4(auStack_60);
  FUN_104ae38d8(param_1,param_2,param_3,auStack_60);
  func_0x00010046a1bc(auStack_60);
  return;
}



/* Entry: 104ae38d8; end: 104ae3a4b;  */

void FUN_104ae38d8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined **ppuStack_58;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  
  ppuStack_58 = &PTR_FUN_1107ec4f0;
  if (plRam0000000113815c78 == (long *)0x0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/grpc_library.h"
               ,0x2f);
  }
  (**(code **)(*plRam0000000113815c78 + 0x10))();
  uStack_50 = 1;
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    func_0x00010002b024(auStack_70,"");
    uVar1 = 0;
    FUN_104adbd2c(0,3,"Invalid credentials.");
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x000100487f08(param_1,auStack_70,uVar1,&uStack_88);
    puStack_48 = &uStack_88;
    func_0x0001004889dc(&puStack_48);
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_1,param_3,param_2,param_4);
  }
  func_0x00010046df00(&ppuStack_58);
  return;
}



/* Entry: 104ae3a4c; end: 104ae3a4f;  */

void FUN_104ae3a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104ae3a50; end: 104ae3a87;  */

void FUN_104ae3a50(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae3a88; end: 104ae3ac3;  */

long FUN_104ae3a88(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c7d90);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ae3ac4; end: 104ae3adf;  */

void FUN_104ae3ac4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae3ae0; end: 104ae3b5f;  */

void FUN_104ae3ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010046de78();
  *puVar1 = &PTR_FUN_1107c7e20;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_DAT_1107c7e78;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  param_1[1] = puVar2;
  return;
}



/* Entry: 104ae3b60; end: 104ae3b63;  */

undefined8 * FUN_104ae3b60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 104ae3b64; end: 104ae3b77;  */

void FUN_104ae3b64(void)

{
  func_0x00010048b7f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae3b78; end: 104ae3b7f;  */

undefined8 FUN_104ae3b78(void)

{
  return 0;
}



/* Entry: 104ae3b80; end: 104ae3bdb;  */

void FUN_104ae3b80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_104ae3bdc();
  puStack_28 = (undefined1 *)&uStack_40;
  func_0x0001004889dc(&puStack_28);
  return;
}



/* Entry: 104ae3bdc; end: 104ae3ce3;  */

void FUN_104ae3bdc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [16];
  undefined1 *puStack_38;
  
  func_0x00010046e9e8(param_4,auStack_48);
  FUN_104acff14();
  func_0x00010002b024(auStack_60,"");
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  func_0x00010046ec34(plVar1,param_4,auStack_48);
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_70 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  func_0x000100487f08(param_1,auStack_60,plVar1,&uStack_80);
  puStack_38 = (undefined1 *)&uStack_80;
  func_0x0001004889dc(&puStack_38);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  FUN_104acf9e0(param_4);
  return;
}



/* Entry: 104ae3ce4; end: 104ae3cef;  */

undefined8 FUN_104ae3ce4(void)

{
  return 1;
}



/* Entry: 104ae3cf0; end: 104ae3d27;  */

void FUN_104ae3cf0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae3d28; end: 104ae3d63;  */

long FUN_104ae3d28(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c7ec8);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ae3d64; end: 104ae3d67;  */

void FUN_104ae3d64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae3d68; end: 104ae3dc3;  */

void FUN_104ae3d68(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010046ea04();
  puStack_28 = (undefined1 *)&uStack_40;
  func_0x0001004889dc(&puStack_28);
  return;
}



/* Entry: 104ae3dc4; end: 104ae3e03;  */

long FUN_104ae3dc4(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 104ae3e04; end: 104ae3e07;  */

void FUN_104ae3e04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [72];
  
  func_0x000100460de4(auStack_68);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x000100467a48(auStack_68);
  func_0x00010048b7f0(param_1);
  return;
}



/* Entry: 104ae3e08; end: 104ae3e1b;  */

void FUN_104ae3e08(void)

{
  func_0x00010048b75c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae3e1c; end: 104ae3e23;  */

void FUN_104ae3e1c(void)

{
  return;
}



/* Entry: 104ae3e24; end: 104ae3e37;  */

void FUN_104ae3e24(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae3e38; end: 104ae3e73;  */

long FUN_104ae3e38(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c7f98);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ae3e74; end: 104ae3ee7;  */

void FUN_104ae3e74(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x00010002b024(auStack_38,"grpc.max_send_message_length");
  func_0x00010046924c(param_1,auStack_38,param_2);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 104ae3ee8; end: 104ae3f23;  */

void FUN_104ae3ee8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000104ae3f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000113815c70 + 0x38))
              (plRam0000000113815c70,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 104ae3f24; end: 104ae41c3;  */

ulong FUN_104ae3f24(void)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined2 auStack_70 [4];
  undefined8 uStack_68;
  
  func_0x00010045fe6c(0x1130a6540,FUN_104ae42d4);
  uVar3 = uRam00000001136a2bf8;
  func_0x000100460448(uRam00000001136a2bf8);
  iVar1 = iRam00000001136a2be0 + 1;
  bVar2 = iRam00000001136a2be0 == 0;
  iRam00000001136a2be0 = iVar1;
  if (bVar2) {
    uVar5 = 0x78;
    __Znwm();
    puStack_98 = (ulong *)0x2;
    puStack_90 = (ulong *)((ulong)puStack_90 & 0xffffffff00000000);
    puStack_88 = (ulong *)0x0;
    uVar12 = uVar5;
    FUN_104c4f3d4();
    uRam00000001136a2be8 = uVar5;
    func_0x0001004605e0();
    uVar8 = (uint)(uVar12 >> 1) & 0x7fffffff;
    if (0xf < uVar8) {
      uVar8 = 0x10;
    }
    uVar13 = 2;
    if (3 < (uint)uVar12) {
      uVar13 = uVar8;
    }
    plVar6 = (long *)0x18;
    __Znwm();
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    plRam00000001136a2bf0 = plVar6;
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      do {
        plVar6 = plRam00000001136a2bf0;
        uVar12 = plRam00000001136a2bf0[1];
        puVar7 = (ulong *)(plRam00000001136a2bf0 + 2);
        if (uVar12 < *puVar7) {
          puStack_98 = (ulong *)CONCAT62(puStack_98._2_6_,0x101);
          puStack_90 = (ulong *)0x0;
          func_0x000100462a0c(uVar12,"nexting_thread",FUN_104ae4318,uRam00000001136a2be8,0,
                              &puStack_98);
          lVar11 = uVar12 + 0x20;
          plVar6[1] = lVar11;
        }
        else {
          lVar11 = (long)(uVar12 - *plRam00000001136a2bf0) >> 5;
          uVar12 = lVar11 + 1;
          if (uVar12 >> 0x3b != 0) {
            FUN_104ab57d4(plRam00000001136a2bf0);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104ae4164);
            (*pcVar4)();
          }
          uVar9 = *puVar7 - *plRam00000001136a2bf0;
          uVar5 = (long)uVar9 >> 4;
          if (uVar5 <= uVar12) {
            uVar5 = uVar12;
          }
          if (0x7fffffffffffffdf < uVar9) {
            uVar5 = 0x7ffffffffffffff;
          }
          puStack_78 = puVar7;
          if (uVar5 == 0) {
            puStack_98 = (ulong *)0x0;
          }
          else {
            FUN_104ab57e8();
            puStack_98 = puVar7;
          }
          puStack_90 = puStack_98 + lVar11 * 4;
          puStack_80 = puStack_98 + uVar5 * 4;
          auStack_70[0] = 0x101;
          uStack_68 = 0;
          puStack_88 = puStack_90;
          func_0x000100462a0c(puStack_90,"nexting_thread",FUN_104ae4318,uRam00000001136a2be8,0,
                              auStack_70);
          puStack_88 = puStack_88 + 4;
          FUN_104ab5738(plVar6,&puStack_98);
          lVar11 = plVar6[1];
          func_0x000104ab581c(&puStack_98);
        }
        plVar6[1] = lVar11;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      lVar11 = *plRam00000001136a2bf0;
    }
    lVar10 = plRam00000001136a2bf0[1];
    for (; lVar11 != lVar10; lVar11 = lVar11 + 0x20) {
      func_0x000100463850(lVar11);
    }
  }
  uVar12 = uRam00000001136a2be8;
  func_0x000100466b80(uVar3);
  return uVar12;
}



/* Entry: 104ae41c4; end: 104ae42d3;  */

void FUN_104ae41c4(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_48;
  
  uVar6 = uRam00000001136a2bf8;
  func_0x000100460448(uRam00000001136a2bf8);
  plVar5 = plRam00000001136a2be8;
  iRam00000001136a2be0 = iRam00000001136a2be0 + -1;
  if (iRam00000001136a2be0 != 0) goto LAB_104ae4294;
  plVar1 = plRam00000001136a2be8 + 3;
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 + -1 == 0) {
    (**(code **)(*plRam0000000113815c70 + 0x38))(plRam0000000113815c70,plVar5[2]);
  }
  lVar7 = *plRam00000001136a2bf0;
  lVar2 = plRam00000001136a2bf0[1];
  if (lVar7 == lVar2) {
LAB_104ae426c:
    plVar5 = plRam00000001136a2bf0;
    plStack_48 = plRam00000001136a2bf0;
    FUN_104ab55c4(&plStack_48);
    __ZdlPv(plVar5);
  }
  else {
    do {
      FUN_104ab3234(lVar7);
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar2);
    if (plRam00000001136a2bf0 != (long *)0x0) goto LAB_104ae426c;
  }
  if (plRam00000001136a2be8 != (long *)0x0) {
    (**(code **)(*plRam00000001136a2be8 + 8))();
  }
LAB_104ae4294:
  func_0x000100466b80(uVar6);
  return;
}



/* Entry: 104ae42d4; end: 104ae4317;  */

void FUN_104ae42d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  func_0x000100460318();
  uRam00000001136a2bf8 = uVar1;
  return;
}



/* Entry: 104ae4318; end: 104ae43df;  */

void FUN_104ae4318(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  while( true ) {
    while( true ) {
      puVar1 = (undefined8 *)0x1;
      func_0x000100467380();
      uVar2 = 1000;
      uVar4 = 3;
      func_0x00010047e734(1000,3);
      func_0x00010047e648(puVar1,param_2,uVar2,uVar4);
      uVar3 = uVar5;
      func_0x000100491568(uVar5,puVar1,param_2,0);
      if ((int)uVar3 != 1) break;
      func_0x000100467380();
      uVar2 = 100;
      uVar4 = 3;
      func_0x00010047e734(100,3);
      func_0x00010047e648(uVar3,puVar1,uVar2,uVar4);
      FUN_104a6f57c();
      param_2 = puVar1;
    }
    if ((int)uVar3 == 0) break;
    param_2 = (undefined8 *)(uVar3 >> 0x20);
    (*(code *)*puVar1)(puVar1);
  }
  return;
}



/* Entry: 104ae43e0; end: 104ae44bf;  */

undefined ** FUN_104ae43e0(undefined8 param_1,undefined **param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_c8 [72];
  
  if (0xfffffffd < *(int *)param_2 - 3U) {
    return &PTR_s_Default_Factory_1107c7220;
  }
  ppuVar5 = param_2;
  func_0x000107c2c420();
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100488d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_2[2])();
    return param_2;
  }
  func_0x000107c2c424();
  uVar1 = *(uint *)((long)ppuVar5 + 4);
  uVar2 = (ulong)*(uint *)(ppuVar5 + 1);
  puVar6 = ppuVar5[2];
  lVar3 = (ulong)uVar1 * 0x48;
  puVar4 = auStack_c8;
  func_0x000100460de4();
  lVar7 = *(long *)(&UNK_1107c7028 + lVar3);
  (*(code *)(&PTR_SUB_1107c7100)[uVar2 * 7])();
  ppuVar5 = (undefined **)(puVar4 + lVar7 + 0x48);
  func_0x000100460860();
  ppuVar5[2] = &UNK_1107c7020 + lVar3;
  ppuVar5[3] = &UNK_1107c70f8 + uVar2 * 0x38;
  *ppuVar5 = (undefined *)0x2;
  (*(code *)(&PTR_SUB_1107c7108)[uVar2 * 7])((long)(ppuVar5 + 9) + lVar7,ppuVar5 + 1);
  (*(code *)(&PTR_DAT_1107c7030)[(ulong)uVar1 * 9])(ppuVar5 + 9,puVar6);
  ppuVar5[5] = FUN_104ada54c;
  ppuVar5[6] = (undefined *)ppuVar5;
  ppuVar5[7] = (undefined *)0x0;
  func_0x000100467a48(auStack_c8);
  return ppuVar5;
}



/* Entry: 104ae44c0; end: 104ae4513;  */

/* WARNING: Removing unreachable block (ram,0x000104ad7998) */
/* WARNING: Removing unreachable block (ram,0x000104ad79a4) */
/* WARNING: Removing unreachable block (ram,0x000104ad79ac) */
/* WARNING: Removing unreachable block (ram,0x000104ad79b4) */

void FUN_104ae44c0(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  undefined8 *extraout_x8_00;
  long lVar12;
  long *plVar13;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  code *pcVar14;
  ulong auStack_60 [7];
  undefined8 uStack_28;
  long lStack_18;
  undefined1 *puVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_60[5] = param_2[1];
  auStack_60[4] = *param_2;
  uStack_28 = param_2[3];
  auStack_60[6] = param_2[2];
  func_0x000104ad7ac0(auStack_60 + 4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  pcVar14 = FUN_104ae4514;
  ___stack_chk_fail();
  puVar6 = auStack_60 + 4;
  puVar11 = extraout_x8_00;
  puVar7 = (undefined1 *)register0x00000008;
  do {
    uVar10 = param_3;
    puVar9 = param_2;
    puVar8 = (undefined1 *)puVar6;
    *(undefined8 **)(puVar8 + -0x20) = unaff_x20;
    *(ulong *)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar7 + -0x10;
    *(code **)(puVar8 + -8) = pcVar14;
    plVar13 = (long *)*puVar9;
    if (plVar13 == (long *)0x1) {
      lVar12 = puVar9[1];
      puVar11[2] = puVar9[2] + uVar10;
      *puVar11 = 1;
      puVar11[1] = lVar12 - uVar10;
LAB_104ad79e0:
      puVar9[1] = uVar10;
      return;
    }
    param_2 = puVar9;
    param_3 = uVar10;
    if (plVar13 == (long *)0x0) {
      bVar1 = *(byte *)(puVar9 + 1);
      if (uVar10 <= bVar1) {
        *puVar11 = 0;
        uVar4 = (uint)bVar1 - (int)uVar10;
        *(char *)(puVar11 + 1) = (char)uVar4;
        _memcpy((long)puVar11 + 9,(long)puVar9 + uVar10 + 9,uVar4 & 0xff);
        *(char *)(puVar9 + 1) = (char)uVar10;
        return;
      }
      func_0x00010bdad538();
    }
    else {
      uVar5 = puVar9[1] - uVar10;
      if (uVar10 <= (ulong)puVar9[1]) {
        if (uVar5 < 0x17) {
          *puVar11 = 0;
          *(char *)(puVar11 + 1) = (char)uVar5;
          _memcpy((long)puVar11 + 9,puVar9[2] + uVar10);
        }
        else {
          *puVar11 = plVar13;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar12 = puVar9[2];
          puVar11[1] = uVar5;
          puVar11[2] = lVar12 + uVar10;
        }
        goto LAB_104ad79e0;
      }
    }
    pcVar14 = FUN_104ad79f8;
    func_0x00010bdad504();
    puVar6 = (ulong *)(puVar8 + -0x20);
    puVar11 = extraout_x8;
    unaff_x19 = uVar10;
    unaff_x20 = puVar9;
    puVar7 = puVar8;
  } while( true );
}



/* Entry: 104ae4514; end: 104ae452b;  */

/* WARNING: Removing unreachable block (ram,0x000104ad7998) */
/* WARNING: Removing unreachable block (ram,0x000104ad79a4) */
/* WARNING: Removing unreachable block (ram,0x000104ad79ac) */
/* WARNING: Removing unreachable block (ram,0x000104ad79b4) */

void FUN_104ae4514(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long *plVar10;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar6 = (undefined1 *)register0x00000008;
  do {
    uVar8 = param_4;
    puVar7 = param_3;
    *(undefined8 **)(puVar6 + -0x20) = unaff_x20;
    *(ulong *)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
    *(code **)(puVar6 + -8) = unaff_x30;
    unaff_x29 = puVar6 + -0x10;
    plVar10 = (long *)*puVar7;
    if (plVar10 == (long *)0x1) {
      lVar9 = puVar7[1];
      param_1[2] = puVar7[2] + uVar8;
      *param_1 = 1;
      param_1[1] = lVar9 - uVar8;
LAB_104ad79e0:
      puVar7[1] = uVar8;
      return;
    }
    param_3 = puVar7;
    param_4 = uVar8;
    if (plVar10 == (long *)0x0) {
      bVar1 = *(byte *)(puVar7 + 1);
      if (uVar8 <= bVar1) {
        *param_1 = 0;
        uVar4 = (uint)bVar1 - (int)uVar8;
        *(char *)(param_1 + 1) = (char)uVar4;
        _memcpy((long)param_1 + 9,(long)puVar7 + uVar8 + 9,uVar4 & 0xff);
        *(char *)(puVar7 + 1) = (char)uVar8;
        return;
      }
      func_0x00010bdad538();
    }
    else {
      uVar5 = puVar7[1] - uVar8;
      if (uVar8 <= (ulong)puVar7[1]) {
        if (uVar5 < 0x17) {
          *param_1 = 0;
          *(char *)(param_1 + 1) = (char)uVar5;
          _memcpy((long)param_1 + 9,puVar7[2] + uVar8);
        }
        else {
          *param_1 = plVar10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar9 = puVar7[2];
          param_1[1] = uVar5;
          param_1[2] = lVar9 + uVar8;
        }
        goto LAB_104ad79e0;
      }
    }
    unaff_x30 = FUN_104ad79f8;
    func_0x00010bdad504();
    puVar6 = puVar6 + -0x20;
    param_1 = extraout_x8;
    unaff_x19 = uVar8;
    unaff_x20 = puVar7;
  } while( true );
}



/* Entry: 104ae452c; end: 104ae45df;  */

void FUN_104ae452c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_104ad77f4(&uStack_40,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_80;
  uStack_48 = 0x104ae4588;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_68 = param_4[3];
  uStack_70 = param_4[2];
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001005a70c4(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)((long)puVar2 + 0x10) != 0) {
    lVar3 = *(long *)((long)puVar2 + 0x10) + -1;
    *(long *)((long)puVar2 + 0x10) = lVar3;
    plVar1 = (long *)(*(long *)((long)puVar2 + 8) + lVar3 * 0x20);
    puVar4 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar5 = (ulong)(byte)*puVar4;
    }
    else {
      uVar5 = *puVar4;
    }
    *(ulong *)((long)puVar2 + 0x20) = *(long *)((long)puVar2 + 0x20) - uVar5;
  }
  return;
}



/* Entry: 104ae45e0; end: 104ae4607;  */

void FUN_104ae45e0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar2 = *(long *)(param_2 + 0x10) + -1;
    *(long *)(param_2 + 0x10) = lVar2;
    plVar1 = (long *)(*(long *)(param_2 + 8) + lVar2 * 0x20);
    puVar3 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar4 = (ulong)(byte)*puVar3;
    }
    else {
      uVar4 = *puVar3;
    }
    *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) - uVar4;
  }
  return;
}



/* Entry: 104ae4608; end: 104ae4637;  */

void FUN_104ae4608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001004686cc(param_3,param_4,2,"assertion failed: %s");
  _abort();
  return;
}



/* Entry: 104ae4638; end: 104ae463f;  */

void FUN_104ae4638(void)

{
  return;
}



/* Entry: 104ae4640; end: 104ae4843;  */

/* WARNING: Removing unreachable block (ram,0x000104ae47c0) */
/* WARNING: Removing unreachable block (ram,0x000104ae47a8) */
/* WARNING: Removing unreachable block (ram,0x000104ae4720) */
/* WARNING: Removing unreachable block (ram,0x000104ae47b0) */
/* WARNING: Removing unreachable block (ram,0x000104ae4808) */

long * FUN_104ae4640(undefined4 *param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1d8;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long *plVar6;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_2 == 0) {
    pcVar5 = "Buffer not initialized";
    func_0x00010002b024(&lStack_60);
    *param_1 = 9;
  }
  else {
    iVar4 = (int)auStack_b8;
    func_0x000100836568();
    if (iVar4 != 0) {
      FUN_104ad8484(&lStack_80,auStack_b8);
      lStack_98 = param_3[1];
      lStack_a0 = *param_3;
      lStack_88 = param_3[3];
      lStack_90 = param_3[2];
      param_3[1] = lStack_78;
      *param_3 = lStack_80;
      param_3[3] = lStack_68;
      param_3[2] = lStack_70;
      pcVar5 = (char *)&lStack_60;
      lStack_60 = lStack_a0;
      lStack_58 = lStack_98;
      lStack_50 = lStack_90;
      lStack_48 = lStack_88;
      (**(code **)(*plRam0000000113815c70 + 0x150))();
      func_0x0001008365ec(auStack_b8);
      puVar1 = puRam0000000113815c80;
      *param_1 = *puRam0000000113815c80;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        pcVar5 = *(char **)(puVar1 + 2);
        func_0x000100033dac(param_1 + 2,pcVar5,*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar14 = *(undefined8 *)(puVar1 + 4);
        uVar12 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(param_1 + 4) = uVar14;
        *(undefined8 *)(param_1 + 2) = uVar12;
      }
      plVar2 = (long *)(param_1 + 8);
      if (*(char *)((long)puVar1 + 0x37) < '\0') {
        pcVar5 = *(char **)(puVar1 + 8);
        func_0x000100033dac(plVar2,pcVar5,*(undefined8 *)(puVar1 + 10));
      }
      else {
        uVar12 = *(undefined8 *)(puVar1 + 10);
        lVar13 = *(long *)(puVar1 + 8);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
        *(undefined8 *)(param_1 + 10) = uVar12;
        *plVar2 = lVar13;
      }
      goto LAB_104ae47c8;
    }
    pcVar5 = "Couldn\'t initialize byte buffer reader";
    func_0x00010002b024(&lStack_60);
    *param_1 = 0xd;
  }
  plVar2 = (long *)(param_1 + 2);
  *(long *)(param_1 + 4) = lStack_58;
  *plVar2 = lStack_60;
  *(long *)(param_1 + 6) = lStack_50;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
LAB_104ae47c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_c8 = FUN_104ae4844;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)plVar2[1];
  lVar13 = *(long *)pcVar5;
  lVar16 = *(long *)((long)pcVar5 + 0x18);
  lVar15 = *(long *)((long)pcVar5 + 0x10);
  plVar11[1] = *(long *)((long)pcVar5 + 8);
  *plVar11 = lVar13;
  plVar11[3] = lVar16;
  plVar11[2] = lVar15;
  plVar3 = plRam0000000113815c70;
  plVar6 = (long *)pcVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  (**(code **)(*plRam0000000113815c70 + 0x140))(&lStack_118);
  iVar4 = (int)plVar6;
  *(long *)((long)pcVar5 + 8) = lStack_110;
  *(long *)pcVar5 = lStack_118;
  *(long *)((long)pcVar5 + 0x18) = lStack_100;
  *(long *)((long)pcVar5 + 0x10) = lStack_108;
  plVar2[1] = (long)(plVar11 + 4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  pcStack_128 = FUN_104ae48e8;
  puVar10 = (undefined8 *)&DAT_10f62a4d8;
  ppuStack_130 = &puStack_d0;
  FUN_104a6fa70();
  uStack_138 = 0x104ae48fc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = *(undefined8 *)puVar10[2];
  uStack_160 = ((undefined8 *)puVar10[2])[1];
  plVar2 = (long *)*puVar10;
  uStack_190 = *(undefined8 *)puVar10[1];
  uStack_188 = ((undefined8 *)puVar10[1])[1];
  puVar7 = auStack_170;
  puVar9 = auStack_198;
  uStack_180 = uStack_190;
  uStack_178 = uStack_188;
  uStack_158 = uStack_168;
  uStack_150 = uStack_160;
  puStack_140 = (undefined1 *)&ppuStack_130;
  FUN_104ae4970();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return plVar2;
  }
  ___stack_chk_fail();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = *(undefined8 **)(puVar7 + 0x20);
  puVar8 = (undefined8 *)puVar7;
  if (puVar10 != *(undefined8 **)(puVar9 + 0x20)) {
    do {
      uStack_1f8 = puVar10[1];
      uStack_200 = *puVar10;
      uStack_1e8 = puVar10[3];
      uStack_1f0 = puVar10[2];
      plVar2 = plRam0000000113815c70;
      puVar8 = &uStack_200;
      (**(code **)(*plRam0000000113815c70 + 0x150))();
      puVar10 = (undefined8 *)(*(long *)(puVar7 + 0x20) + 0x20);
      *(undefined8 **)(puVar7 + 0x20) = puVar10;
    } while (puVar10 != *(undefined8 **)(puVar9 + 0x20));
  }
  iVar4 = (int)puVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  *plVar2 = (long)&PTR_FUN_1107ec4f0;
  if ((char)plVar2[1] == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return plVar2;
}



/* Entry: 104ae4844; end: 104ae48e7;  */

long * FUN_104ae4844(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = *(undefined8 **)(param_1 + 8);
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  puVar6[1] = param_2[1];
  *puVar6 = uVar7;
  puVar6[3] = uVar9;
  puVar6[2] = uVar8;
  plVar1 = plRam0000000113815c70;
  puVar5 = param_2;
  (**(code **)(*plRam0000000113815c70 + 0x140))(&uStack_58);
  iVar2 = (int)puVar5;
  param_2[1] = uStack_50;
  *param_2 = uStack_58;
  param_2[3] = uStack_40;
  param_2[2] = uStack_48;
  *(undefined8 **)(param_1 + 8) = puVar6 + 4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  FUN_104bd46a0();
  pcStack_68 = FUN_104ae48e8;
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_104a6fa70();
  uStack_78 = 0x104ae48fc;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = *(undefined8 *)puVar5[2];
  uStack_a0 = ((undefined8 *)puVar5[2])[1];
  plVar1 = (long *)*puVar5;
  uStack_d0 = *(undefined8 *)puVar5[1];
  uStack_c8 = ((undefined8 *)puVar5[1])[1];
  puVar3 = auStack_b0;
  puVar4 = auStack_d8;
  uStack_c0 = uStack_d0;
  uStack_b8 = uStack_c8;
  uStack_98 = uStack_a8;
  uStack_90 = uStack_a0;
  puStack_80 = (undefined1 *)&puStack_70;
  FUN_104ae4970();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = *(undefined8 **)(puVar3 + 0x20);
    puVar6 = (undefined8 *)puVar3;
    if (puVar5 != *(undefined8 **)(puVar4 + 0x20)) {
      do {
        uStack_138 = puVar5[1];
        uStack_140 = *puVar5;
        uStack_128 = puVar5[3];
        uStack_130 = puVar5[2];
        plVar1 = plRam0000000113815c70;
        puVar6 = &uStack_140;
        (**(code **)(*plRam0000000113815c70 + 0x150))();
        puVar5 = (undefined8 *)(*(long *)(puVar3 + 0x20) + 0x20);
        *(undefined8 **)(puVar3 + 0x20) = puVar5;
      } while (puVar5 != *(undefined8 **)(puVar4 + 0x20));
    }
    iVar2 = (int)puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      if (iVar2 == 0) {
        __Unwind_Resume();
      }
      FUN_104bd46a0();
      *plVar1 = (long)&PTR_FUN_1107ec4f0;
      if ((char)plVar1[1] == '\x01') {
        if (plRam0000000113815c78 == (long *)0x0) {
          (**(code **)(*plRam0000000113815c70 + 0x10))
                    (plRam0000000113815c70,
                     "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                     ,
                     "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                     ,0x38);
        }
        (**(code **)(*plRam0000000113815c78 + 0x18))();
      }
      return plVar1;
    }
    return plVar1;
  }
  return plVar1;
}



/* Entry: 104ae48e8; end: 104ae496f;  */

long * FUN_104ae48e8(void)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  puVar6 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  uStack_18 = 0x104ae48fc;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)puVar6[2];
  uStack_40 = ((undefined8 *)puVar6[2])[1];
  plVar1 = (long *)*puVar6;
  uStack_70 = *(undefined8 *)puVar6[1];
  uStack_68 = ((undefined8 *)puVar6[1])[1];
  puVar3 = auStack_50;
  puVar5 = auStack_78;
  uStack_60 = uStack_70;
  uStack_58 = uStack_68;
  uStack_38 = uStack_48;
  uStack_30 = uStack_40;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_104ae4970();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar1;
  }
  ___stack_chk_fail();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = *(undefined8 **)(puVar3 + 0x20);
  puVar4 = (undefined8 *)puVar3;
  if (puVar6 != *(undefined8 **)(puVar5 + 0x20)) {
    do {
      uStack_d8 = puVar6[1];
      uStack_e0 = *puVar6;
      uStack_c8 = puVar6[3];
      uStack_d0 = puVar6[2];
      plVar1 = plRam0000000113815c70;
      puVar4 = &uStack_e0;
      (**(code **)(*plRam0000000113815c70 + 0x150))();
      puVar6 = (undefined8 *)(*(long *)(puVar3 + 0x20) + 0x20);
      *(undefined8 **)(puVar3 + 0x20) = puVar6;
    } while (puVar6 != *(undefined8 **)(puVar5 + 0x20));
  }
  iVar2 = (int)puVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    if (iVar2 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0();
    *plVar1 = (long)&PTR_FUN_1107ec4f0;
    if ((char)plVar1[1] == '\x01') {
      if (plRam0000000113815c78 == (long *)0x0) {
        (**(code **)(*plRam0000000113815c70 + 0x10))
                  (plRam0000000113815c70,
                   "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                   ,
                   "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                   ,0x38);
      }
      (**(code **)(*plRam0000000113815c78 + 0x18))();
    }
    return plVar1;
  }
  return plVar1;
}



/* Entry: 104ae4970; end: 104ae4a23;  */

long * FUN_104ae4970(long *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  puVar2 = (undefined8 *)param_2;
  if (puVar3 != *(undefined8 **)(param_3 + 0x20)) {
    do {
      uStack_58 = puVar3[1];
      uStack_60 = *puVar3;
      uStack_48 = puVar3[3];
      uStack_50 = puVar3[2];
      param_1 = plRam0000000113815c70;
      puVar2 = &uStack_60;
      (**(code **)(*plRam0000000113815c70 + 0x150))();
      puVar3 = (undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
      *(undefined8 **)(param_2 + 0x20) = puVar3;
    } while (puVar3 != *(undefined8 **)(param_3 + 0x20));
  }
  iVar1 = (int)puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (iVar1 == 0) {
      __Unwind_Resume();
    }
    FUN_104bd46a0();
    *param_1 = (long)&PTR_FUN_1107ec4f0;
    if ((char)param_1[1] == '\x01') {
      if (plRam0000000113815c78 == (long *)0x0) {
        (**(code **)(*plRam0000000113815c70 + 0x10))
                  (plRam0000000113815c70,
                   "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                   ,
                   "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                   ,0x38);
      }
      (**(code **)(*plRam0000000113815c78 + 0x18))();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 104ae4a24; end: 104ae4a27;  */

undefined8 * FUN_104ae4a24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ec4f0;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000113815c78 == (long *)0x0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000113815c78 + 0x18))();
  }
  return param_1;
}



/* Entry: 104ae4a28; end: 104ae4a3b;  */

void FUN_104ae4a28(void)

{
  func_0x00010048b7f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae4a3c; end: 104ae4a43;  */

undefined8 FUN_104ae4a3c(void)

{
  return 0;
}



/* Entry: 104ae4a44; end: 104ae4a9f;  */

void FUN_104ae4a44(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010055fd24();
  puStack_28 = (undefined1 *)&uStack_40;
  func_0x0001004889dc(&puStack_28);
  return;
}



/* Entry: 104ae4aa0; end: 104ae4aa3;  */

void FUN_104ae4aa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104ae4aa4; end: 104ae4adb;  */

void FUN_104ae4aa4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae4adc; end: 104ae4b17;  */

long FUN_104ae4adc(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c8270);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104ae4b18; end: 104ae4b1b;  */

void FUN_104ae4b18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104ae4b1c; end: 104ae4c57;  */

undefined8
FUN_104ae4b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 1;
  puStack_48 = &uStack_78;
  puStack_40 = &uStack_70;
  puStack_38 = &uStack_68;
  puStack_30 = &uStack_60;
  puStack_28 = &uStack_58;
  puStack_20 = &uStack_50;
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  FUN_104ae536c(0xb34330358e78bc8c,&uStack_80,&puStack_48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uStack_80;
  }
  ___stack_chk_fail(uStack_80);
  uStack_98 = 0x104ae4be8;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_104ae536c(0x4c738029ec4e10bc,&uStack_b0,auStack_a8);
  return uStack_b0;
}



/* Entry: 104ae4c58; end: 104ae536b;  */

void FUN_104ae4c58(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae4ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104ae4ca8)();
  return;
}



/* Entry: 104ae536c; end: 104ae5e1b;  */

void FUN_104ae536c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae53b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104ae53b8)();
  return;
}



/* Entry: 104ae5e1c; end: 104afd6d7;  */

void FUN_104ae5e1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae5eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104ae5eb4)();
  return;
}



/* Entry: 104afd6d8; end: 104afdd2f;  */

undefined8 * FUN_104afd6d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_DAT_1107e2650;
    if (puVar1[1] != 0) {
      puVar1[2] = puVar1[1];
      __ZdlPv();
    }
    __ZdlPv(puVar1);
  }
  return param_1;
}



/* Entry: 104afdd30; end: 104b15e37;  */

void FUN_104afdd30(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104afdda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104afddac)();
  return;
}



/* Entry: 104b15e38; end: 104b187df;  */

void FUN_104b15e38(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b15ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b15eac)();
  return;
}



/* Entry: 104b187e0; end: 104b1ab6b;  */

void FUN_104b187e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b18850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b18854)();
  return;
}



/* Entry: 104b1ab6c; end: 104b1bc6f;  */

void FUN_104b1ab6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b1abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b1abd4)();
  return;
}



/* Entry: 104b1bc70; end: 104b1d667;  */

void FUN_104b1bc70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b1bccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b1bcd0)();
  return;
}



/* Entry: 104b1d668; end: 104b22787;  */

void FUN_104b1d668(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b1d6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b1d6dc)();
  return;
}



/* Entry: 104b22788; end: 104b231db;  */

void FUN_104b22788(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b227e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b227ec)();
  return;
}



/* Entry: 104b231dc; end: 104b25f83;  */

void FUN_104b231dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b23254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b23258)();
  return;
}



/* Entry: 104b25f84; end: 104b2783b;  */

void FUN_104b25f84(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b26000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b26004)();
  return;
}



/* Entry: 104b2783c; end: 104b297cf;  */

void FUN_104b2783c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b27890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b27894)();
  return;
}



/* Entry: 104b297d0; end: 104b29a33;  */

void FUN_104b297d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b29814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b29818)();
  return;
}



/* Entry: 104b29a34; end: 104b29adb;  */

/* WARNING: Removing unreachable block (ram,0x000104b29a5c) */

void FUN_104b29a34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_6c [4];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_38;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  puStack_20 = &uStack_28;
  uVar1 = 0x4edd1c3f8a9584d7;
  uStack_28 = param_1;
  FUN_104b2a3cc(0x4edd1c3f8a9584d7,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_48 = FUN_104b29adc;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &uStack_68;
  uStack_68 = uVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010002b140(0xdc2a4b5edb265046,auStack_6c,&puStack_60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104b29bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b29bcc)();
  return;
}



/* Entry: 104b29adc; end: 104b29b7f;  */

void FUN_104b29adc(undefined8 param_1)

{
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  uStack_28 = param_1;
  func_0x00010002b140(0xdc2a4b5edb265046,auStack_2c,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104b29bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b29bcc)();
  return;
}



/* Entry: 104b29b80; end: 104b2a3cb;  */

void FUN_104b29b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b29bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b29bcc)();
  return;
}



/* Entry: 104b2a3cc; end: 104b2a9db;  */

void FUN_104b2a3cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2a408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2a40c)();
  return;
}



/* Entry: 104b2a9dc; end: 104b2abc7;  */

void FUN_104b2a9dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2aa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2aa34)();
  return;
}



/* Entry: 104b2abc8; end: 104b2acbb;  */

void FUN_104b2abc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2ac14)();
  return;
}



/* Entry: 104b2acbc; end: 104b2af1b;  */

void FUN_104b2acbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2acfc)();
  return;
}



/* Entry: 104b2af1c; end: 104b2b0ab;  */

void FUN_104b2af1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2af64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2af68)();
  return;
}



/* Entry: 104b2b0ac; end: 104b2b0df;  */

long FUN_104b2b0ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = lVar1;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 104b2b0e0; end: 104b2d5d3;  */

void FUN_104b2b0e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2b14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2b150)();
  return;
}



/* Entry: 104b2d5d4; end: 104b2d96f;  */

void FUN_104b2d5d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2d614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2d618)();
  return;
}



/* Entry: 104b2d970; end: 104b2d97b;  */

undefined8 FUN_104b2d970(void)

{
  _abort();
  return uRam00000001136a2ca0;
}



/* Entry: 104b2d97c; end: 104b2d9cb;  */

undefined8 FUN_104b2d97c(void)

{
  return uRam00000001136a2ca0;
}



/* Entry: 104b2d9cc; end: 104b30873;  */

void FUN_104b2d9cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b2da28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b2da2c)();
  return;
}



/* Entry: 104b30874; end: 104b3095b;  */

undefined8 * FUN_104b30874(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xf) != '\x01') {
    return param_1;
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 104b3095c; end: 104b30a2b;  */

void FUN_104b3095c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 **ppuVar4;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 *puStack_110;
  undefined4 **ppuStack_108;
  undefined1 uStack_f9;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 **ppuStack_d8;
  undefined4 ***pppuStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  uStack_f9 = (undefined1)param_4;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 1;
  puStack_48 = &uStack_74;
  puStack_40 = &uStack_70;
  puStack_38 = &uStack_68;
  puStack_30 = &uStack_60;
  puStack_28 = &uStack_58;
  puStack_20 = &uStack_50;
  puVar2 = auStack_80;
  ppuVar4 = &puStack_48;
  uStack_74 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  FUN_104b316fc(0xd8a23fa1c15715fa);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_104b30a2c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 1;
  puStack_e0 = auStack_118;
  ppuStack_d8 = &puStack_110;
  pppuStack_d0 = &ppuStack_108;
  puStack_c8 = &uStack_f9;
  puStack_c0 = &uStack_f8;
  puStack_b8 = &uStack_f0;
  puStack_b0 = &uStack_e8;
  puStack_110 = puVar2;
  ppuStack_108 = ppuVar4;
  uStack_f8 = param_5;
  uStack_f0 = param_6;
  uStack_e8 = param_7;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_104b32b50(0xe7a7a298644fe560,auStack_120,&puStack_e0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_138 = FUN_104b30b0c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = auStack_158;
  puVar3 = &uStack_160;
  ppuStack_140 = &puStack_a0;
  FUN_104b32b50(0x795d375fe909e3c8,puVar3,&puStack_150);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail(uStack_160);
  uVar1 = uStack_160;
  __Unwind_Resume();
  if ((uint)((iRam00000001130a6558 * iRam00000001130a6558 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_104b30c34;
  while (func_0x000100042ef0(uVar1,puVar3),
        (uint)((iRam00000001130a6558 + iRam00000001130a6558 * iRam00000001130a6558 + 7) * 0x781948b1
              ) < 0x3291620) {
LAB_104b30c34:
    func_0x000100042ef0(uVar1,puVar3);
  }
  return;
}



/* Entry: 104b30a2c; end: 104b30b0b;  */

void FUN_104b30a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined1 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = 1;
  puStack_50 = &uStack_88;
  puStack_48 = &uStack_80;
  puStack_40 = &uStack_78;
  puStack_38 = &uStack_69;
  puStack_30 = &uStack_68;
  puStack_28 = &uStack_60;
  puStack_20 = &uStack_58;
  uStack_88 = param_1;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_69 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_7;
  FUN_104b32b50(0xe7a7a298644fe560,auStack_90,&puStack_50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_a8 = FUN_104b30b0c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = auStack_c8;
  puVar2 = &uStack_d0;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_104b32b50(0x795d375fe909e3c8,puVar2,&puStack_c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail(uStack_d0);
  uVar1 = uStack_d0;
  __Unwind_Resume();
  if ((uint)((iRam00000001130a6558 * iRam00000001130a6558 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_104b30c34;
  while (func_0x000100042ef0(uVar1,puVar2),
        (uint)((iRam00000001130a6558 + iRam00000001130a6558 * iRam00000001130a6558 + 7) * 0x781948b1
              ) < 0x3291620) {
LAB_104b30c34:
    func_0x000100042ef0(uVar1,puVar2);
  }
  return;
}



/* Entry: 104b30b0c; end: 104b30bb7;  */

void FUN_104b30b0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_20 = &uStack_28;
  puVar2 = &uStack_30;
  uStack_28 = param_1;
  FUN_104b32b50(0x795d375fe909e3c8,puVar2,&puStack_20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail(uStack_30);
  uVar1 = uStack_30;
  __Unwind_Resume();
  if ((uint)((iRam00000001130a6558 * iRam00000001130a6558 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_104b30c34;
  while (func_0x000100042ef0(uVar1,puVar2),
        (uint)((iRam00000001130a6558 + iRam00000001130a6558 * iRam00000001130a6558 + 7) * 0x781948b1
              ) < 0x3291620) {
LAB_104b30c34:
    func_0x000100042ef0(uVar1,puVar2);
  }
  return;
}



/* Entry: 104b30bb8; end: 104b30c53;  */

void FUN_104b30bb8(undefined8 param_1,undefined8 param_2)

{
  if ((uint)((iRam00000001130a6558 * iRam00000001130a6558 * 4 + 4) * 0x286bca1b) < 0xd79435f)
  goto LAB_104b30c34;
  while( true ) {
    func_0x000100042ef0(param_1,param_2);
    if (0x329161f <
        (uint)((iRam00000001130a6558 + iRam00000001130a6558 * iRam00000001130a6558 + 7) * 0x781948b1
              )) break;
LAB_104b30c34:
    func_0x000100042ef0(param_1,param_2);
  }
  return;
}



/* Entry: 104b30c54; end: 104b30cdb;  */

undefined8 * FUN_104b30c54(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 104b30cdc; end: 104b31283;  */

void FUN_104b30cdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b30d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b30d24)();
  return;
}



/* Entry: 104b31284; end: 104b31317;  */

undefined8 * FUN_104b31284(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xf) != '\x01') {
    return param_1;
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (cVar1 < '\0') {
    __ZdlPv(*param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 104b31318; end: 104b316fb;  */

undefined8 * FUN_104b31318(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    if ((uRam00000001130a6558 + 1 + (~uRam00000001130a6558 | 1) == 0) &&
       ((uRam00000001130a6558 & 1) != 0)) goto LAB_104b313f4;
    while( true ) {
      if (((uRam00000001130a6558 * uRam00000001130a6558 * 2 | 2) -
          (uRam00000001130a6558 * uRam00000001130a6558 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_104b313cc;
      while( true ) {
        uVar5 = param_2[1];
        uVar4 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar5;
        *param_1 = uVar4;
        if ((iRam00000001130a6550 < 10) || ((uRam00000001130a6558 * ~uRam00000001130a6558 & 1) == 0)
           ) break;
LAB_104b313cc:
        uVar5 = param_2[1];
        uVar4 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar5;
        *param_1 = uVar4;
      }
      uVar1 = iRam00000001130a6550 * iRam00000001130a6550;
      if (~uVar1 + uVar1 * 8 != uVar1) break;
LAB_104b313f4:
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
  }
  uVar1 = uRam00000001130a6558;
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000100033dac(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar3 = ~uRam00000001130a6558;
    if ((uRam00000001130a6558 + 1 + (uVar3 | 1) == 0) && ((uRam00000001130a6558 & 1) != 0))
    goto LAB_104b314d0;
    while( true ) {
      if (((uVar1 * uVar1 * 2 | 2) - (uVar1 * uVar1 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_104b314a8;
      while( true ) {
        uVar5 = param_2[4];
        uVar4 = param_2[3];
        param_1[5] = param_2[5];
        param_1[4] = uVar5;
        param_1[3] = uVar4;
        if (((uVar1 * uVar3 & 1) == 0) || (iRam00000001130a6550 < 10)) break;
LAB_104b314a8:
        uVar5 = param_2[4];
        uVar4 = param_2[3];
        param_1[5] = param_2[5];
        param_1[4] = uVar5;
        param_1[3] = uVar4;
      }
      uVar2 = iRam00000001130a6550 * iRam00000001130a6550;
      if (~uVar2 + uVar2 * 8 != uVar2) break;
LAB_104b314d0:
      uVar5 = param_2[4];
      uVar4 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = uVar5;
      param_1[3] = uVar4;
    }
  }
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar1 = uRam00000001130a6558;
  if (*(char *)((long)param_2 + 0x5f) < '\0') {
    func_0x000100033dac(param_1 + 9,param_2[9],param_2[10]);
  }
  else {
    uVar3 = ~uRam00000001130a6558;
    if ((uRam00000001130a6558 + 1 + (uVar3 | 1) == 0) && ((uRam00000001130a6558 & 1) != 0))
    goto LAB_104b315b8;
    while( true ) {
      if (((uVar1 * uVar1 * 2 | 2) - (uVar1 * uVar1 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_104b31590;
      while( true ) {
        uVar5 = param_2[10];
        uVar4 = param_2[9];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar5;
        param_1[9] = uVar4;
        if (((uVar1 * uVar3 & 1) == 0) || (iRam00000001130a6550 < 10)) break;
LAB_104b31590:
        uVar5 = param_2[10];
        uVar4 = param_2[9];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar5;
        param_1[9] = uVar4;
      }
      uVar2 = iRam00000001130a6550 * iRam00000001130a6550;
      if (~uVar2 + uVar2 * 8 != uVar2) break;
LAB_104b315b8:
      uVar5 = param_2[10];
      uVar4 = param_2[9];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[9] = uVar4;
    }
  }
  uVar1 = uRam00000001130a6558;
  if (*(char *)((long)param_2 + 0x77) < '\0') {
    func_0x000100033dac(param_1 + 0xc,param_2[0xc],param_2[0xd]);
  }
  else {
    uVar3 = ~uRam00000001130a6558;
    if ((uRam00000001130a6558 + 1 + (uVar3 | 1) == 0) && ((uRam00000001130a6558 & 1) != 0))
    goto LAB_104b316d4;
    while( true ) {
      if (((uVar1 * uVar1 * 2 | 2) - (uVar1 * uVar1 ^ 1)) * -0x49249249 < 0x24924925)
      goto LAB_104b316ac;
      while( true ) {
        uVar5 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar5;
        param_1[0xc] = uVar4;
        if (((uVar1 * uVar3 & 1) == 0) || (iRam00000001130a6550 < 10)) break;
LAB_104b316ac:
        uVar5 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar5;
        param_1[0xc] = uVar4;
      }
      uVar2 = iRam00000001130a6550 * iRam00000001130a6550;
      if (~uVar2 + uVar2 * 8 != uVar2) break;
LAB_104b316d4:
      uVar5 = param_2[0xd];
      uVar4 = param_2[0xc];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
    }
  }
  return param_1;
}



/* Entry: 104b316fc; end: 104b32b4f;  */

void FUN_104b316fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b31760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b31764)();
  return;
}



/* Entry: 104b32b50; end: 104b37107;  */

void FUN_104b32b50(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104b32bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104b32bb8)();
  return;
}


