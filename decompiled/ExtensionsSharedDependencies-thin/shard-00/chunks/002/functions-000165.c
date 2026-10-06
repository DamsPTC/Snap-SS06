/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00407b0c; end: 00407b93;  */

long * FUN_00407b0c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (lVar3 = param_1[1], lVar3 != 0)) {
    lVar4 = 0;
    plVar5 = (long *)*param_1;
    plVar2 = plVar5;
    do {
      lVar1 = *plVar2;
      if (param_2 == 0) {
        if (lVar1 == 0) {
          return plVar5 + lVar4 * 3;
        }
      }
      else if ((lVar1 != 0) && (_strcmp(lVar1,param_2), (int)lVar1 == 0)) {
        return plVar2;
      }
      lVar4 = lVar4 + 1;
      plVar2 = plVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return (long *)0x0;
}



/* Entry: 00407b94; end: 00407c57;  */

long * FUN_00407b94(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return (long *)((long)&MACH_HEADER.magic + 2);
  }
  plVar1 = (long *)((long)&MACH_HEADER.magic + 2);
  if ((param_3 != 0) && (*param_1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return param_1;
    }
    plVar1 = (long *)((long)&MACH_HEADER.cputype + 2);
  }
  return plVar1;
}



/* Entry: 00407c58; end: 00407d8f;  */

undefined8 *
FUN_00407c58(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_009e2598;
  param_1[1] = &PTR_DAT_009e25f8;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00407d90(param_1 + 4,1);
  *param_1 = &PTR_FUN_009e2420;
  param_1[1] = &PTR_DAT_009e2480;
  param_1[4] = &PTR_DAT_009e24a8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1 + 6,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[8] = param_2[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  param_1[9] = param_3;
  (**(code **)(*plRam0000000000b65da0 + 0x70))(plRam0000000000b65da0,param_1 + 10);
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  func_0x00408e1c(param_1 + 0x13);
  uVar1 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = uVar1;
  param_1[0x15] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return param_1;
}



/* Entry: 00407d90; end: 00407e1b;  */

undefined8 * FUN_00407d90(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_009e2620;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x2f);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x10))();
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 00407e1c; end: 00407e1f;  */

undefined8 *
FUN_00407e1c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_009e2598;
  param_1[1] = &PTR_DAT_009e25f8;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00407d90(param_1 + 4,1);
  *param_1 = &PTR_FUN_009e2420;
  param_1[1] = &PTR_DAT_009e2480;
  param_1[4] = &PTR_DAT_009e24a8;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1 + 6,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[8] = param_2[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  param_1[9] = param_3;
  (**(code **)(*plRam0000000000b65da0 + 0x70))(plRam0000000000b65da0,param_1 + 10);
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  func_0x00408e1c(param_1 + 0x13);
  uVar1 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = uVar1;
  param_1[0x15] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return param_1;
}



/* Entry: 00407e20; end: 00407edb;  */

long FUN_00407e20(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  FUN_003f4634();
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    func_0x003c3444();
    if (iVar1 == 0) {
      FUN_0040b700(lVar2);
    }
    else {
      FUN_0040b380(lVar2);
    }
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  lStack_28 = param_1 + 0x98;
  FUN_00408da0(&lStack_28);
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 0x50);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_005b957c(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 00407edc; end: 00407eef;  */

long FUN_00407edc(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  FUN_003f4634();
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    func_0x003c3444();
    if (iVar1 == 0) {
      FUN_0040b700(lVar2);
    }
    else {
      FUN_0040b380(lVar2);
    }
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  lStack_28 = param_1 + 0x98;
  FUN_00408da0(&lStack_28);
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 0x50);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_005b957c(param_1 + 0x20);
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 00407ef0; end: 00407f33;  */

void FUN_00407ef0(void)

{
  FUN_00407e20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00407f34; end: 004081f3;  */

/* WARNING: Removing unreachable block (ram,0x00408000) */

long * FUN_00407f34(long *param_1,long param_2,undefined8 *param_3,long *param_4,long param_5,
                   undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 uStack_1ac;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3[3] != 0) {
    if (*(char *)((long)param_4 + 0x8f) < '\0') {
      FUN_002971d4(&lStack_90,param_4[0xf],param_4[0x10]);
    }
    else {
      plStack_88 = (long *)param_4[0x10];
      lStack_90 = param_4[0xf];
      uStack_80 = param_4[0x11];
    }
    if (uStack_80 >> 0x38 == 0) {
      lVar4 = *(long *)(param_2 + 0x48);
      FUN_003f4250(lVar4,param_4[0x28],(int)param_4[0x29],*(undefined8 *)(param_5 + 0x10),param_3[3]
                   ,param_4[0xd],param_4[0xe],0);
      goto LAB_00408104;
    }
  }
  plVar16 = param_4 + 0xf;
  if (*(char *)((long)param_4 + 0x8f) < '\0') {
    if (param_4[0x10] == 0) goto LAB_00407fec;
  }
  else if (*(char *)((long)param_4 + 0x8f) == '\0') {
LAB_00407fec:
    if ((char)*(byte *)(param_2 + 0x47) < '\0') {
      uVar13 = *(ulong *)(param_2 + 0x38);
    }
    else {
      uVar13 = (ulong)*(byte *)(param_2 + 0x47);
    }
    plVar16 = (long *)0x0;
    if (uVar13 != 0) {
      plVar16 = (long *)(param_2 + 0x30);
    }
  }
  uVar15 = *param_3;
  uVar3 = uVar15;
  _strlen(uVar15);
  (**(code **)(*plRam0000000000b65da0 + 0x198))(&lStack_90,plRam0000000000b65da0,uVar15,uVar3);
  if (plVar16 == (long *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uVar13 = plVar16[1];
    plVar5 = (long *)*plVar16;
    if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
      plVar5 = plVar16;
    }
    (**(code **)(*plRam0000000000b65da0 + 0x198))(&uStack_b0,plRam0000000000b65da0,plVar5,uVar13);
    puVar11 = &uStack_b0;
  }
  lVar4 = *(long *)(param_2 + 0x48);
  plStack_c8 = plStack_88;
  lStack_d0 = lStack_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_120 = 0;
  FUN_003f36fc(lVar4,param_4[0x28],(int)param_4[0x29],*(undefined8 *)(param_5 + 0x10),&lStack_d0,
               puVar11,param_4[0xd],param_4[0xe]);
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  FUN_003eca28(&lStack_f0);
  if (plVar16 != (long *)0x0) {
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    FUN_003eca28(&uStack_110);
  }
LAB_00408104:
  func_0x0033bb24(lVar4,param_4[0x16]);
  lVar12 = param_2 + 0x98;
  uVar9 = *(undefined4 *)(param_3 + 2);
  plVar5 = param_4;
  lVar10 = param_2;
  FUN_004081f4(param_4,*param_3,param_3[1],uVar9,param_2,lVar12,param_6);
  FUN_00408e8c(&lStack_90,param_2 + 0x10);
  plVar8 = &lStack_90;
  lVar7 = lVar4;
  FUN_004092c4();
  plVar16 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar14 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      param_4 = plVar16;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = param_2 + 8;
  param_1[1] = param_5;
  param_1[2] = lVar4;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = (long)plVar5;
  param_1[5] = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00408ecc(&lStack_90);
  plVar6 = param_4;
  __Unwind_Resume();
  plStack_150 = plVar16;
  pcStack_128 = FUN_004081f4;
  lStack_170 = 0;
  uStack_178 = 0;
  plVar6[0x32] = lVar10;
  plVar6[0x2f] = CONCAT44(uStack_1ac,uVar9);
  plVar6[0x2e] = (long)plVar6;
  plVar6[0x31] = (long)plVar8;
  plVar6[0x30] = lVar7;
  puStack_160 = param_3;
  plStack_158 = plVar5;
  lStack_148 = param_2;
  lStack_140 = param_5;
  plStack_138 = param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_00408abc(plVar6 + 0x33);
  plVar6[0x33] = 0;
  plVar6[0x34] = 0;
  plVar6[0x35] = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_190 = 0;
  plVar6[0x37] = lStack_170;
  plVar6[0x36] = CONCAT71(uStack_177,uStack_178);
  puStack_168 = &uStack_190;
  func_0x00408b2c(&puStack_168);
  FUN_00408814(plVar6 + 0x2e,lVar12,param_6);
  return plVar6 + 0x2e;
}



/* Entry: 004081f4; end: 004082a3;  */

long FUN_004081f4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uStack_8c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  uStack_50 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 400) = param_5;
  *(ulong *)(param_1 + 0x178) = CONCAT44(uStack_8c,param_4);
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined8 *)(param_1 + 0x188) = param_3;
  *(undefined8 *)(param_1 + 0x180) = param_2;
  FUN_00408abc(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_1 + 0x1b8) = uStack_50;
  *(ulong *)(param_1 + 0x1b0) = CONCAT71(uStack_57,uStack_58);
  puStack_48 = &uStack_70;
  func_0x00408b2c(&puStack_48);
  FUN_00408814(param_1 + 0x170,param_6,param_7);
  return param_1 + 0x170;
}



/* Entry: 004082a4; end: 004082d3;  */

/* WARNING: Removing unreachable block (ram,0x00408000) */

long * FUN_004082a4(long *param_1,long param_2,undefined8 *param_3,long *param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 uStack_1ac;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3[3] != 0) {
    if (*(char *)((long)param_4 + 0x8f) < '\0') {
      FUN_002971d4(&lStack_90,param_4[0xf],param_4[0x10]);
    }
    else {
      plStack_88 = (long *)param_4[0x10];
      lStack_90 = param_4[0xf];
      uStack_80 = param_4[0x11];
    }
    if (uStack_80 >> 0x38 == 0) {
      lVar3 = *(long *)(param_2 + 0x48);
      FUN_003f4250(lVar3,param_4[0x28],(int)param_4[0x29],*(undefined8 *)(param_5 + 0x10),param_3[3]
                   ,param_4[0xd],param_4[0xe],0);
      goto LAB_00408104;
    }
  }
  plVar16 = param_4 + 0xf;
  if (*(char *)((long)param_4 + 0x8f) < '\0') {
    if (param_4[0x10] == 0) goto LAB_00407fec;
  }
  else if (*(char *)((long)param_4 + 0x8f) == '\0') {
LAB_00407fec:
    if ((char)*(byte *)(param_2 + 0x47) < '\0') {
      uVar13 = *(ulong *)(param_2 + 0x38);
    }
    else {
      uVar13 = (ulong)*(byte *)(param_2 + 0x47);
    }
    plVar16 = (long *)0x0;
    if (uVar13 != 0) {
      plVar16 = (long *)(param_2 + 0x30);
    }
  }
  uVar15 = *param_3;
  uVar12 = uVar15;
  _strlen(uVar15);
  (**(code **)(*plRam0000000000b65da0 + 0x198))(&lStack_90,plRam0000000000b65da0,uVar15,uVar12);
  if (plVar16 == (long *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uVar13 = plVar16[1];
    plVar4 = (long *)*plVar16;
    if (-1 < (char)*(byte *)((long)plVar16 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)plVar16 + 0x17);
      plVar4 = plVar16;
    }
    (**(code **)(*plRam0000000000b65da0 + 0x198))(&uStack_b0,plRam0000000000b65da0,plVar4,uVar13);
    puVar10 = &uStack_b0;
  }
  lVar3 = *(long *)(param_2 + 0x48);
  plStack_c8 = plStack_88;
  lStack_d0 = lStack_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_120 = 0;
  FUN_003f36fc(lVar3,param_4[0x28],(int)param_4[0x29],*(undefined8 *)(param_5 + 0x10),&lStack_d0,
               puVar10,param_4[0xd],param_4[0xe]);
  plStack_e8 = plStack_88;
  lStack_f0 = lStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  FUN_003eca28(&lStack_f0);
  if (plVar16 != (long *)0x0) {
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    FUN_003eca28(&uStack_110);
  }
LAB_00408104:
  func_0x0033bb24(lVar3,param_4[0x16]);
  lVar11 = param_2 + 0x98;
  uVar8 = *(undefined4 *)(param_3 + 2);
  uVar12 = 0;
  plVar4 = param_4;
  lVar9 = param_2;
  FUN_004081f4(param_4,*param_3,param_3[1],uVar8,param_2,lVar11,0);
  FUN_00408e8c(&lStack_90,param_2 + 0x10);
  plVar7 = &lStack_90;
  lVar6 = lVar3;
  FUN_004092c4();
  plVar16 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar5 = plStack_88 + 1;
    do {
      lVar14 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar14 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      param_4 = plVar16;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = param_2 + 8;
  param_1[1] = param_5;
  param_1[2] = lVar3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = (long)plVar4;
  param_1[5] = 0;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return param_4;
  }
  ___stack_chk_fail();
  func_0x00408ecc(&lStack_90);
  plVar5 = param_4;
  __Unwind_Resume();
  plStack_150 = plVar16;
  pcStack_128 = FUN_004081f4;
  lStack_170 = 0;
  uStack_178 = 0;
  plVar5[0x32] = lVar9;
  plVar5[0x2f] = CONCAT44(uStack_1ac,uVar8);
  plVar5[0x2e] = (long)plVar5;
  plVar5[0x31] = (long)plVar7;
  plVar5[0x30] = lVar6;
  puStack_160 = param_3;
  plStack_158 = plVar4;
  lStack_148 = param_2;
  lStack_140 = param_5;
  plStack_138 = param_4;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_00408abc(plVar5 + 0x33);
  plVar5[0x33] = 0;
  plVar5[0x34] = 0;
  plVar5[0x35] = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_190 = 0;
  plVar5[0x37] = lStack_170;
  plVar5[0x36] = CONCAT71(uStack_177,uStack_178);
  puStack_168 = &uStack_190;
  func_0x00408b2c(&puStack_168);
  FUN_00408814(plVar5 + 0x2e,lVar11,uVar12);
  return plVar5 + 0x2e;
}



/* Entry: 004082d4; end: 004083eb;  */

undefined8 FUN_004082d4(long param_1,undefined8 *****param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 ****ppppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 ****ppppuStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  ppppuStack_40 = (undefined8 *****)0x0;
  uStack_38 = 0;
  lStack_30 = 0;
  if ((char)*(byte *)(param_1 + 199) < '\0') {
    uVar3 = *(ulong *)(param_1 + 0xb8);
  }
  else {
    uVar3 = (ulong)*(byte *)(param_1 + 199);
  }
  if ((param_2 != (undefined8 *****)0x0) && (uVar3 != 0)) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&ppppuStack_58,"/",param_1 + 0xb0);
    if (lStack_30 < 0) {
      __ZdlPv(ppppuStack_40);
    }
    uStack_38 = uStack_50;
    ppppuStack_40 = ppppuStack_58;
    lStack_30 = lStack_48;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (&ppppuStack_40,(long)param_2 + 1);
    param_2 = (undefined8 *****)ppppuStack_40;
    if (-1 < lStack_30) {
      param_2 = &ppppuStack_40;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x47) < '\0') {
    if (*(long *)(param_1 + 0x38) == 0) {
      plVar2 = (long *)0;
    }
    else {
      plVar2 = (long *)*(long *)(param_1 + 0x30);
    }
  }
  else {
    plVar2 = (long *)0;
    if (*(char *)(param_1 + 0x47) != '\0') {
      plVar2 = (long *)(param_1 + 0x30);
    }
  }
  FUN_003f3f28(uVar1,param_2,plVar2,0);
  if (lStack_30 < 0) {
    __ZdlPv(ppppuStack_40);
  }
  return uVar1;
}



/* Entry: 004083ec; end: 004083f3;  */

long FUN_004083ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x48);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00341380(&uStack_38,0);
  FUN_003413d4(auStack_80);
  lVar3 = lVar2;
  FUN_003425f8();
  if (lVar3 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0xc0);
    func_0x003a6554();
    if ((undefined **)*puVar1 == &PTR_DAT_009e1cd0) {
      lVar3 = 3;
    }
    else {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                   ,0x47,2,
                   "grpc_channel_check_connectivity_state called on something that is not a client channel"
                  );
      lVar3 = 4;
    }
  }
  else {
    FUN_003468ec();
  }
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  return lVar3;
}



/* Entry: 004083f4; end: 0040845f;  */

void FUN_004083f4(long param_1,dword param_2,qword param_3,undefined8 param_4,long param_5,
                 undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  qword *pqVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  dword *pdVar9;
  long lVar10;
  ulong uVar11;
  qword *pqVar12;
  undefined1 auStack_c0 [72];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pdVar9 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar9 = &PTR_FUN_009e2640;
  *(undefined8 *)(pdVar9 + 2) = param_6;
  lVar10 = *(long *)(param_1 + 0x48);
  uVar11 = *(ulong *)(param_5 + 0x10);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_00341380(&uStack_78,0);
  FUN_003413d4(auStack_c0);
  pqVar5 = &section_000000b8.addr;
  __Znwm();
  pqVar12 = pqVar5 + 1;
  *pqVar12 = 0x100000000;
  *pqVar5 = (qword)&PTR_FUN_009db9a8;
  plVar1 = (long *)(lVar10 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(dword *)(pqVar5 + 5) = param_2;
  pqVar5[2] = lVar10;
  pqVar5[3] = uVar11;
  pqVar5[4] = (qword)pdVar9;
  *(undefined1 *)(pqVar5 + 0x1a) = 0;
  uVar6 = uVar11;
  FUN_003f6ea0(uVar11,pdVar9);
  if ((uVar6 & 1) != 0) {
    pqVar5[0xc] = (qword)FUN_00341564;
    pqVar5[0xd] = (qword)pqVar5;
    pqVar5[0xe] = 0;
    pqVar5[0x17] = 0x34158c;
    pqVar5[0x18] = (qword)pqVar5;
    pqVar5[0x19] = 0;
    lVar10 = pqVar5[2];
    FUN_003425f8();
    if (lVar10 == 0) {
      puVar8 = *(undefined8 **)(pqVar5[2] + 0xc0);
      func_0x003a6554();
      if ((undefined **)*puVar8 != &PTR_DAT_009e1cd0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                     ,0x7f,2,
                     "grpc_channel_watch_connectivity_state called on something that is not a client channel"
                    );
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
                     ,0x82,2,"assertion failed: %s");
        _abort();
        goto LAB_00341300;
      }
      FUN_003b8b9c(param_3,param_4);
      func_0x003cf010(pqVar5 + 0xf,param_3,pqVar5 + 0x16);
    }
    else {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
        if (bVar3) {
          *pqVar12 = *pqVar12 + 0x100000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcVar7 = segment_command_00000020.segname + 8;
      __Znwm();
      FUN_003b8b9c(param_3,param_4);
      *(qword **)pcVar7 = pqVar5;
      *(qword *)(pcVar7 + 8) = param_3;
      *(qword *)(pcVar7 + 0x18) = 0x3418ac;
      *(char **)(pcVar7 + 0x20) = pcVar7;
      *(undefined8 *)(pcVar7 + 0x28) = 0;
      FUN_003f7014(uVar11);
      func_0x003c3d30();
      FUN_003415d4(lVar10,uVar11,param_4,pqVar5 + 5,pqVar5 + 0xb,pcVar7 + 0x10);
    }
    FUN_00341470(auStack_c0);
    FUN_003414dc(&uStack_78);
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/channel_connectivity.cc"
               ,0x6f,2,"assertion failed: %s");
  _abort();
LAB_00341300:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x341304);
  (*pcVar4)();
}



/* Entry: 00408460; end: 004085b3;  */

char * FUN_00408460(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  dword *pdVar2;
  undefined1 *puVar3;
  char *pcVar4;
  segment_command *psVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte bStack_c9;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_c8 = 2;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_00408cac(auStack_b0,&lStack_c8);
  bStack_c9 = 0;
  lStack_c8 = 0;
  pdVar2 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar2 = &PTR_FUN_009e2640;
  *(undefined8 *)(pdVar2 + 2) = 0;
  FUN_003410c4(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_4,uStack_a0,pdVar2);
  uVar6 = 1;
  pcVar7 = pcRam0000000000b65da0;
  (**(code **)(*(long *)pcRam0000000000b65da0 + 0x1c0))(pcRam0000000000b65da0,1);
  FUN_0040b3bc(auStack_b0,&lStack_c8,&bStack_c9,pcVar7,uVar6);
  if (lStack_c8 != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/channel_cc.cc"
                 ,0xe4,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x408594);
    (*pcVar1)();
  }
  pcVar7 = (char *)(ulong)bStack_c9;
  puVar3 = auStack_b0;
  FUN_005b9434();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pcVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcVar7 = *(char **)(puVar3 + 0x90);
  if (pcVar7 == (char *)0x0) {
    pcVar4 = pcRam0000000000b65da0;
    (**(code **)(*(long *)pcRam0000000000b65da0 + 0x80))(pcRam0000000000b65da0,puVar3 + 0x50);
    pcVar7 = *(char **)(puVar3 + 0x90);
    if (*(char **)(puVar3 + 0x90) == (char *)0x0) {
      func_0x003c3444();
      if ((int)pcVar4 == 0) {
        FUN_0040b460();
      }
      else {
        psVar5 = &segment_command_00000020;
        __Znwm();
        psVar5->vmaddr = 0;
        *(code **)psVar5 = FUN_00408c78;
        psVar5->segname[0] = '\x01';
        psVar5->segname[1] = '\0';
        psVar5->segname[2] = '\0';
        psVar5->segname[3] = '\0';
        pcVar4 = section_00000068.segname;
        __Znwm();
        FUN_00408cac();
        psVar5->vmaddr = (qword)pcVar4;
      }
      *(char **)(puVar3 + 0x90) = pcVar4;
      pcVar7 = pcVar4;
    }
    (**(code **)(*(long *)pcRam0000000000b65da0 + 0x88))(pcRam0000000000b65da0,puVar3 + 0x50);
  }
  return pcVar7;
}



/* Entry: 004085b4; end: 004086d7;  */

char * FUN_004085b4(long param_1)

{
  char *pcVar1;
  segment_command *psVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 0x90);
  if (pcVar3 == (char *)0x0) {
    pcVar1 = pcRam0000000000b65da0;
    (**(code **)(*(long *)pcRam0000000000b65da0 + 0x80))(pcRam0000000000b65da0,param_1 + 0x50);
    pcVar3 = *(char **)(param_1 + 0x90);
    if (*(char **)(param_1 + 0x90) == (char *)0x0) {
      func_0x003c3444();
      if ((int)pcVar1 == 0) {
        FUN_0040b460();
      }
      else {
        psVar2 = &segment_command_00000020;
        __Znwm();
        psVar2->vmaddr = 0;
        *(code **)psVar2 = FUN_00408c78;
        psVar2->segname[0] = '\x01';
        psVar2->segname[1] = '\0';
        psVar2->segname[2] = '\0';
        psVar2->segname[3] = '\0';
        pcVar1 = section_00000068.segname;
        __Znwm();
        FUN_00408cac();
        psVar2->vmaddr = (qword)pcVar1;
      }
      *(char **)(param_1 + 0x90) = pcVar1;
      pcVar3 = pcVar1;
    }
    (**(code **)(*(long *)pcRam0000000000b65da0 + 0x88))(pcRam0000000000b65da0,param_1 + 0x50);
  }
  return pcVar3;
}



/* Entry: 004086d8; end: 004086df;  */

void FUN_004086d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
            (param_1 + 0xb0);
  return;
}



/* Entry: 004086e0; end: 004087fb;  */

undefined8 FUN_004086e0(undefined8 param_1)

{
  int iVar1;
  dword *pdVar2;
  
  if (pdRam0000000000b65da8 == (dword *)0x0) {
    if ((bRam0000000000afb180 & 1) == 0) {
      iVar1 = 0xafb180;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        pdVar2 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar2 = &PTR_FUN_009e2540;
        pdRam0000000000afb178 = pdVar2;
        ___cxa_guard_release(0xafb180);
      }
    }
    pdRam0000000000b65da8 = pdRam0000000000afb178;
  }
  if (pdRam0000000000b65da0 == (dword *)0x0) {
    if ((bRam0000000000afb190 & 1) == 0) {
      iVar1 = 0xafb190;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        pdVar2 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar2 = &PTR_FUN_009e2a40;
        pdRam0000000000afb188 = pdVar2;
        ___cxa_guard_release(0xafb190);
      }
    }
    pdRam0000000000b65da0 = pdRam0000000000afb188;
  }
  return param_1;
}



/* Entry: 004087fc; end: 00408813;  */

void FUN_004087fc(void)

{
  return;
}



/* Entry: 00408814; end: 00408abb;  */

void FUN_00408814(long param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  if (param_3 <= (ulong)(param_2[1] - *param_2 >> 3)) {
    plVar5 = (long *)(*param_2 + param_3 * 8);
    if (plVar5 != (long *)param_2[1]) {
      plVar10 = (long *)(param_1 + 0x28);
      lVar11 = param_1 + 0x38;
      do {
        plVar3 = (long *)*plVar5;
        (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
        if (plVar3 != (long *)0x0) {
          plVar7 = *(long **)(param_1 + 0x30);
          if (plVar7 < *(long **)(param_1 + 0x38)) {
            plVar13 = plVar7 + 1;
            *plVar7 = (long)plVar3;
          }
          else {
            lVar12 = (long)plVar7 - *plVar10 >> 3;
            uVar1 = lVar12 + 1;
            if (uVar1 >> 0x3d != 0) {
              FUN_00408ba8(plVar10);
              goto LAB_00408a8c;
            }
            uVar8 = (long)*(long **)(param_1 + 0x38) - *plVar10;
            uVar9 = (long)uVar8 >> 2;
            if (uVar9 <= uVar1) {
              uVar9 = uVar1;
            }
            if (0x7ffffffffffffff7 < uVar8) {
              uVar9 = 0x1fffffffffffffff;
            }
            puStack_68 = (undefined8 *)lVar11;
            if (uVar9 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = lVar11;
              FUN_00408bbc();
            }
            plVar7 = (long *)(lVar4 + lVar12 * 8);
            plVar13 = plVar7 + 1;
            *plVar7 = (long)plVar3;
            plVar3 = *(long **)(param_1 + 0x28);
            plStack_88 = *(long **)(param_1 + 0x30);
            plStack_78 = plStack_88;
            if (plStack_88 != plVar3) {
              do {
                plStack_88 = plStack_88 + -1;
                lVar12 = *plStack_88;
                *plStack_88 = 0;
                plVar7 = plVar7 + -1;
                *plVar7 = lVar12;
              } while (plStack_88 != plVar3);
              plStack_88 = (long *)*plVar10;
              plStack_78 = *(long **)(param_1 + 0x30);
            }
            *(long **)(param_1 + 0x28) = plVar7;
            *(long **)(param_1 + 0x30) = plVar13;
            uStack_70 = *(undefined8 *)(param_1 + 0x38);
            *(ulong *)(param_1 + 0x38) = lVar4 + uVar9 * 8;
            plStack_80 = plStack_88;
            func_0x00408bf0(&plStack_88);
          }
          *(long **)(param_1 + 0x30) = plVar13;
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != (long *)param_2[1]);
    }
    if (plRam0000000000b65d98 != (long *)0x0) {
      plVar5 = plRam0000000000b65d98;
      (**(code **)(*plRam0000000000b65d98 + 0x10))(plRam0000000000b65d98,param_1);
      puVar6 = (undefined8 *)(param_1 + 0x38);
      plVar10 = *(long **)(param_1 + 0x30);
      if (plVar10 < (long *)*puVar6) {
        plVar7 = plVar10 + 1;
        *plVar10 = (long)plVar5;
      }
      else {
        plVar3 = (long *)(param_1 + 0x28);
        lVar11 = (long)plVar10 - *plVar3 >> 3;
        uVar1 = lVar11 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_00408ba8(plVar3);
LAB_00408a8c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x408a90);
          (*pcVar2)();
        }
        uVar8 = (long)*puVar6 - *plVar3;
        uVar9 = (long)uVar8 >> 2;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar9 = 0x1fffffffffffffff;
        }
        puStack_68 = puVar6;
        if (uVar9 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          FUN_00408bbc();
        }
        plVar10 = puVar6 + lVar11;
        plVar7 = plVar10 + 1;
        *plVar10 = (long)plVar5;
        plVar5 = *(long **)(param_1 + 0x28);
        plStack_88 = *(long **)(param_1 + 0x30);
        plStack_78 = plStack_88;
        if (plStack_88 != plVar5) {
          do {
            plStack_88 = plStack_88 + -1;
            lVar11 = *plStack_88;
            *plStack_88 = 0;
            plVar10 = plVar10 + -1;
            *plVar10 = lVar11;
          } while (plStack_88 != plVar5);
          plStack_88 = (long *)*plVar3;
          plStack_78 = *(long **)(param_1 + 0x30);
        }
        *(long **)(param_1 + 0x28) = plVar10;
        *(long **)(param_1 + 0x30) = plVar7;
        uStack_70 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar6 + uVar9;
        plStack_80 = plStack_88;
        func_0x00408bf0(&plStack_88);
      }
      *(long **)(param_1 + 0x30) = plVar7;
    }
  }
  return;
}



/* Entry: 00408abc; end: 00408ba7;  */

void FUN_00408abc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
    __ZdlPv(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 00408ba8; end: 00408bbb;  */

undefined1  [16] FUN_00408ba8(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  lVar2 = *(long *)((long)pcVar1 + 8);
  lVar4 = *(long *)((long)pcVar1 + 0x10);
  while (lVar4 != lVar2) {
    *(long *)((long)pcVar1 + 0x10) = lVar4 + -8;
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = *(long *)((long)pcVar1 + 0x10);
  }
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pcVar1;
  return auVar6;
}



/* Entry: 00408bbc; end: 00408c4f;  */

undefined1  [16] FUN_00408bbc(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 00408c50; end: 00408c57;  */

void FUN_00408c50(void)

{
  return;
}



/* Entry: 00408c58; end: 00408c77;  */

undefined8 FUN_00408c58(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 8);
  __ZdlPv();
  return 1;
}



/* Entry: 00408c78; end: 00408cab;  */

void FUN_00408c78(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00408cac; end: 00408d9f;  */

undefined8 * FUN_00408cac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = param_1;
  FUN_00407d90(param_1,1);
  *puVar1 = &PTR_FUN_009e2680;
  (**(code **)(*plRam0000000000b65da0 + 0x70))(plRam0000000000b65da0,puVar1 + 4);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  plVar3 = plRam0000000000b65da0;
  plVar2 = plRam0000000000b65da0;
  (**(code **)(*plRam0000000000b65da0 + 0x18))(plRam0000000000b65da0,param_2);
  (**(code **)(*plVar3 + 0x20))(plVar3,plVar2,param_2,0);
  param_1[2] = plVar3;
  param_1[3] = 1;
  return param_1;
}



/* Entry: 00408da0; end: 00408e8b;  */

void FUN_00408da0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 00408e8c; end: 00408f23;  */

undefined8 * FUN_00408e8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_2[1];
  *param_1 = *param_2;
  if (lVar5 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      return param_1;
    }
  }
  puVar4 = (undefined8 *)0x0;
  FUN_003d7c54();
  plVar6 = (long *)puVar4[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 00408f24; end: 00408f2f;  */

undefined8 FUN_00408f24(void)

{
  int iVar1;
  dword *pdVar2;
  
  if (pdRam0000000000b65da8 == (dword *)0x0) {
    if ((bRam0000000000afb180 & 1) == 0) {
      iVar1 = 0xafb180;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        pdVar2 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar2 = &PTR_FUN_009e2540;
        pdRam0000000000afb178 = pdVar2;
        ___cxa_guard_release(0xafb180);
      }
    }
    pdRam0000000000b65da8 = pdRam0000000000afb178;
  }
  if (pdRam0000000000b65da0 == (dword *)0x0) {
    if ((bRam0000000000afb190 & 1) == 0) {
      iVar1 = 0xafb190;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        pdVar2 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar2 = &PTR_FUN_009e2a40;
        pdRam0000000000afb188 = pdVar2;
        ___cxa_guard_release(0xafb190);
      }
    }
    pdRam0000000000b65da0 = pdRam0000000000afb188;
  }
  return 0xb5f4f0;
}



/* Entry: 00408f30; end: 0040910b;  */

undefined2 * FUN_00408f30(undefined2 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar2 = param_1 + 0xc;
  (**(code **)(*plRam0000000000b65da0 + 0x70))();
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = 1;
  func_0x0033a068();
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined2 **)(param_1 + 0x38) = puVar2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 **)(param_1 + 0x5c) = param_1 + 0x60;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined2 **)(param_1 + 0x78) = param_1 + 0x7c;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 **)(param_1 + 0x94) = param_1 + 0x98;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffff;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 4;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  (**(code **)(*plRam0000000000b5f508 + 0x10))(plRam0000000000b5f508,param_1);
  return param_1;
}



/* Entry: 0040910c; end: 0040910f;  */

undefined2 * FUN_0040910c(undefined2 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar2 = param_1 + 0xc;
  (**(code **)(*plRam0000000000b65da0 + 0x70))();
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = 1;
  func_0x0033a068();
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined2 **)(param_1 + 0x38) = puVar2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 **)(param_1 + 0x5c) = param_1 + 0x60;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined2 **)(param_1 + 0x78) = param_1 + 0x7c;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 **)(param_1 + 0x94) = param_1 + 0x98;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffff;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 4;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  (**(code **)(*plRam0000000000b5f508 + 0x10))(plRam0000000000b5f508,param_1);
  return param_1;
}



/* Entry: 00409110; end: 004091e3;  */

long FUN_00409110(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x003f1bd0();
  }
  (**(code **)(*plRam0000000000b5f508 + 0x18))(plRam0000000000b5f508,param_1);
  lStack_28 = param_1 + 0x198;
  func_0x00408b2c(&lStack_28);
  if (*(char *)(param_1 + 0x16f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x158));
  }
  FUN_00409644(param_1 + 0x108);
  FUN_00409644(param_1 + 0xd0);
  FUN_003dcd80(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  FUN_00409afc(param_1 + 0xa0);
  func_0x00409b54(param_1 + 0x90);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 0x18);
  func_0x00408ecc(param_1 + 8);
  return param_1;
}



/* Entry: 004091e4; end: 004091e7;  */

long FUN_004091e4(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x003f1bd0();
  }
  (**(code **)(*plRam0000000000b5f508 + 0x18))(plRam0000000000b5f508,param_1);
  lStack_28 = param_1 + 0x198;
  func_0x00408b2c(&lStack_28);
  if (*(char *)(param_1 + 0x16f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x158));
  }
  FUN_00409644(param_1 + 0x108);
  FUN_00409644(param_1 + 0xd0);
  FUN_003dcd80(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  FUN_00409afc(param_1 + 0xa0);
  func_0x00409b54(param_1 + 0x90);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  (**(code **)(*plRam0000000000b65da0 + 0x78))(plRam0000000000b65da0,param_1 + 0x18);
  func_0x00408ecc(param_1 + 8);
  return param_1;
}



/* Entry: 004091e8; end: 00409257;  */

void FUN_004091e8(long param_1)

{
  ulong uVar1;
  undefined **ppuStack_38;
  
  ppuStack_38 = &PTR_FUN_009e26f8;
  if (*(long *)(param_1 + 0x1a0) != *(long *)(param_1 + 0x198)) {
    uVar1 = 0;
    do {
      FUN_00469240(param_1 + 0x170,&ppuStack_38,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulong)(*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 3));
  }
  return;
}



/* Entry: 00409258; end: 004092c3;  */

void FUN_00409258(long param_1)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  char cStack_21;
  
  FUN_00409690(auStack_50);
  FUN_00409bac(param_1 + 0xb8,auStack_50);
  if (cStack_21 < '\0') {
    __ZdlPv(uStack_38);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 004092c4; end: 004093fb;  */

void FUN_004092c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  
  (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,param_1 + 0x18);
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0x58) = param_2;
    FUN_004093fc(param_1 + 8,param_3);
    plVar2 = *(long **)(param_1 + 0x90);
    if ((plVar2 != (long *)0x0) &&
       ((**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x58)),
       ((ulong)plVar2 & 1) == 0)) {
      FUN_004091e8(param_1);
      FUN_003f1ca4(param_2,1,"Failed to set credentials to rpc.",0);
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      FUN_004091e8(param_1);
      FUN_003f1bf4(*(undefined8 *)(param_1 + 0x58),0);
    }
    (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,param_1 + 0x18);
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/client_context.cc"
               ,0x81,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4093d4);
  (*pcVar1)();
}



/* Entry: 004093fc; end: 00409473;  */

undefined8 * FUN_004093fc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 00409474; end: 00409547;  */

void FUN_00409474(long param_1,long param_2)

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
  FUN_003b05f0(param_2,&lStack_28);
  if ((int)lVar1 != 0) {
    if (lStack_28 != 0) {
      FUN_00353254(auStack_40,"grpc-internal-encoding-request");
      FUN_00353254(auStack_58,lStack_28);
      FUN_00409258(param_1,auStack_40,auStack_58);
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      if (cStack_29 < '\0') {
        __ZdlPv(auStack_40[0]);
      }
      return;
    }
    func_0x007762a4();
  }
  func_0x00776278();
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  __Unwind_Resume();
  (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,param_2 + 0x18);
  if (*(long *)(param_2 + 0x58) == 0) {
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  else {
    FUN_004091e8(param_2);
    FUN_003f1bf4(*(undefined8 *)(param_2 + 0x58),0);
  }
  (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,param_2 + 0x18);
  return;
}



/* Entry: 00409548; end: 004095ef;  */

void FUN_00409548(long param_1)

{
  (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,param_1 + 0x18);
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  else {
    FUN_004091e8(param_1);
    FUN_003f1bf4(*(undefined8 *)(param_1 + 0x58),0);
  }
  (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,param_1 + 0x18);
  return;
}



/* Entry: 004095f0; end: 00409603;  */

void FUN_004095f0(void)

{
  return;
}



/* Entry: 00409604; end: 00409643;  */

void FUN_00409604(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00409604(param_1,*param_2);
    FUN_00409604(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 00409644; end: 0040968f;  */

long FUN_00409644(long param_1)

{
  (**(code **)(*plRam0000000000b65da0 + 0x1a8))(plRam0000000000b65da0,param_1 + 8);
  FUN_00409604(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 00409690; end: 00409723;  */

undefined8 * FUN_00409690(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_002971d4(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 00409724; end: 00409763;  */

void FUN_00409724(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00409764; end: 004097e3;  */

undefined8 FUN_00409764(void)

{
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
             "false && \"It is illegal to call GetSendMessage on a method which \" \"has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1b2);
  return 0;
}



/* Entry: 004097e4; end: 0040980f;  */

void FUN_004097e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0040980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
             "false && \"It is illegal to call ModifySendMessage on a method which \" \"has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1ca);
  return;
}



/* Entry: 00409810; end: 0040988f;  */

undefined8 FUN_00409810(void)

{
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
             "false && \"It is illegal to call GetSendMessageStatus on a method which \" \"has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1ba);
  return 0;
}



/* Entry: 00409890; end: 004098eb;  */

void FUN_00409890(undefined4 *param_1)

{
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
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



/* Entry: 004098ec; end: 00409917;  */

void FUN_004098ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
             "false && \"It is illegal to call ModifySendStatus on a method \" \"which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1de);
  return;
}



/* Entry: 00409918; end: 00409a57;  */

undefined8 FUN_00409918(void)

{
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
             "false && \"It is illegal to call GetSendTrailingMetadata on a \" \"method which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x1e4);
  return 0;
}



/* Entry: 00409a58; end: 00409aa3;  */

void FUN_00409a58(undefined8 *param_1)

{
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
             "false && \"It is illegal to call GetInterceptedChannel on a \" \"method which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x209);
  *param_1 = 0;
  return;
}



/* Entry: 00409aa4; end: 00409afb;  */

void FUN_00409aa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00409acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000000b65da0 + 0x10))
            (plRam0000000000b65da0,
             "false && \"It is illegal to call FailHijackedRecvMessage on a \" \"method which has a Cancel notification\""
             ,
             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/interceptor_common.h"
             ,0x210);
  return;
}



/* Entry: 00409afc; end: 00409bab;  */

long FUN_00409afc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
  return param_1;
}



/* Entry: 00409bac; end: 00409c6f;  */

long FUN_00409bac(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = 0x50;
  __Znwm();
  uVar3 = *param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_2[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x30) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_2[3];
  *(undefined8 *)(lVar1 + 0x40) = param_2[4];
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = param_2[5];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uStack_38 = 1;
  lVar2 = param_1;
  lStack_48 = lVar1;
  lStack_40 = param_1 + 8;
  FUN_00409c70(param_1,&uStack_50,lVar1 + 0x20);
  func_0x003dce0c(param_1,uStack_50,lVar2,lStack_48);
  lVar2 = lStack_48;
  lStack_48 = 0;
  func_0x003dce60(&lStack_48,0);
  return lVar2;
}



/* Entry: 00409c70; end: 00409ce7;  */

long * FUN_00409c70(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar1 = (long *)*plVar4;
    do {
      while (plVar4 = plVar1, lVar2 = param_1 + 0x10,
            FUN_003494f0(param_1 + 0x10,param_3,plVar4 + 4), (int)lVar2 == 0) {
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar3 = plVar4 + 1;
          goto LAB_00409cd4;
        }
      }
      plVar3 = plVar4;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_00409cd4:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 00409ce8; end: 00409cef;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00409ce8(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 00409cf0; end: 00409d2f;  */

void FUN_00409cf0(void)

{
  dword *pdVar1;
  
  FUN_004086e0(0xb5f4f8);
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009e26a0;
  pdRam0000000000b5f500 = pdVar1;
  pdRam0000000000b5f508 = pdVar1;
  return;
}



/* Entry: 00409d30; end: 00409ea3;  */

void FUN_00409d30(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

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
  
  ppuStack_58 = &PTR_FUN_009e2620;
  if (plRam0000000000b65da8 == (long *)0x0) {
    (**(code **)(*plRam0000000000b65da0 + 0x10))
              (plRam0000000000b65da0,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/grpc_library.h"
               ,0x2f);
  }
  (**(code **)(*plRam0000000000b65da8 + 0x10))();
  uStack_50 = 1;
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    FUN_00353254(auStack_70,"");
    uVar1 = 0;
    FUN_003f93d0(0,3,"Invalid credentials.");
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    FUN_0040a068(param_1,auStack_70,uVar1,&uStack_88);
    puStack_48 = &uStack_88;
    FUN_00408da0(&puStack_48);
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_1,param_3,param_2,param_4);
  }
  FUN_005b957c(&ppuStack_58);
  return;
}



/* Entry: 00409ea4; end: 0040a067;  */

void FUN_00409ea4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *apuStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined1 uStack_50;
  undefined1 *puStack_48;
  
  ppuStack_58 = &PTR_FUN_009e2620;
  if (plRam0000000000b65da8 == (long *)0x0) {
    (**(code **)(*plRam0000000000b65da0 + 0x10))
              (plRam0000000000b65da0,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/grpc_library.h"
               ,0x2f);
  }
  (**(code **)(*plRam0000000000b65da8 + 0x10))();
  uStack_50 = 1;
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    FUN_00353254(apuStack_88,"");
    uVar1 = 0;
    FUN_003f93d0(0,3,"Invalid credentials.");
    uStack_98 = param_5[1];
    uStack_a0 = *param_5;
    uStack_90 = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    FUN_0040a068(param_1,apuStack_88,uVar1,&uStack_a0);
    puStack_48 = (undefined1 *)&uStack_a0;
    FUN_00408da0(&puStack_48);
    if (cStack_71 < '\0') {
      __ZdlPv(apuStack_88[0]);
    }
  }
  else {
    uStack_68 = param_5[1];
    uStack_70 = *param_5;
    uStack_60 = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    (**(code **)(*param_3 + 0x20))(param_1,param_3,param_2,param_4,&uStack_70);
    apuStack_88[0] = &uStack_70;
    FUN_00408da0(apuStack_88);
  }
  FUN_005b957c(&ppuStack_58);
  return;
}



/* Entry: 0040a068; end: 0040a133;  */

void FUN_0040a068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  uVar1 = 200;
  __Znwm(200);
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  FUN_00407e1c();
  FUN_0040a134(param_1,uVar1);
  puStack_48 = (undefined1 *)&uStack_60;
  FUN_00408da0(&puStack_48);
  return;
}



/* Entry: 0040a134; end: 0040a1ab;  */

qword * FUN_0040a134(qword *param_1,qword param_2)

{
  long lVar1;
  segment_command *psVar2;
  
  *param_1 = param_2;
  psVar2 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar2 = &PTR_FUN_009e27c0;
  psVar2->segname[0] = '\0';
  psVar2->segname[1] = '\0';
  psVar2->segname[2] = '\0';
  psVar2->segname[3] = '\0';
  psVar2->segname[4] = '\0';
  psVar2->segname[5] = '\0';
  psVar2->segname[6] = '\0';
  psVar2->segname[7] = '\0';
  psVar2->segname[8] = '\0';
  psVar2->segname[9] = '\0';
  psVar2->segname[10] = '\0';
  psVar2->segname[0xb] = '\0';
  psVar2->segname[0xc] = '\0';
  psVar2->segname[0xd] = '\0';
  psVar2->segname[0xe] = '\0';
  psVar2->segname[0xf] = '\0';
  psVar2->vmaddr = param_2;
  param_1[1] = (qword)psVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x10;
  }
  FUN_0040a1ac(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 0040a1ac; end: 0040a25b;  */

void FUN_0040a1ac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 0040a25c; end: 0040a25f;  */

void FUN_0040a25c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0040a260; end: 0040a297;  */

void FUN_0040a260(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040a298; end: 0040a2d3;  */

long FUN_0040a298(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e2810);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0040a2d4; end: 0040a2d7;  */

void FUN_0040a2d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040a2d8; end: 0040a2fb;  */

void FUN_0040a2d8(undefined8 *param_1)

{
  FUN_00407d90(param_1,1);
  *param_1 = &PTR_DAT_009e2838;
  return;
}



/* Entry: 0040a2fc; end: 0040a323;  */

undefined8 * FUN_0040a2fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 0040a324; end: 0040a3a3;  */

void FUN_0040a324(undefined8 *param_1)

{
  dword *pdVar1;
  segment_command *psVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined8 *)pdVar1 = 0;
  *(undefined8 *)(pdVar1 + 2) = 0;
  FUN_0040a2d8();
  *(undefined ***)pdVar1 = &PTR_FUN_009e28a0;
  *param_1 = pdVar1;
  psVar2 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar2 = &PTR_DAT_009e28f8;
  psVar2->segname[0] = '\0';
  psVar2->segname[1] = '\0';
  psVar2->segname[2] = '\0';
  psVar2->segname[3] = '\0';
  psVar2->segname[4] = '\0';
  psVar2->segname[5] = '\0';
  psVar2->segname[6] = '\0';
  psVar2->segname[7] = '\0';
  psVar2->segname[8] = '\0';
  psVar2->segname[9] = '\0';
  psVar2->segname[10] = '\0';
  psVar2->segname[0xb] = '\0';
  psVar2->segname[0xc] = '\0';
  psVar2->segname[0xd] = '\0';
  psVar2->segname[0xe] = '\0';
  psVar2->segname[0xf] = '\0';
  psVar2->vmaddr = (qword)pdVar1;
  param_1[1] = psVar2;
  return;
}



/* Entry: 0040a3a4; end: 0040a3a7;  */

undefined8 * FUN_0040a3a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2620;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (plRam0000000000b65da8 == (long *)0x0) {
      (**(code **)(*plRam0000000000b65da0 + 0x10))
                (plRam0000000000b65da0,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,
                 "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/grpc_library.h"
                 ,0x38);
    }
    (**(code **)(*plRam0000000000b65da8 + 0x18))();
  }
  return param_1;
}



/* Entry: 0040a3a8; end: 0040a3bb;  */

void FUN_0040a3a8(void)

{
  FUN_0040a2fc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040a3bc; end: 0040a3c3;  */

undefined8 FUN_0040a3bc(void)

{
  return 0;
}



/* Entry: 0040a3c4; end: 0040a41f;  */

void FUN_0040a3c4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_0040a420();
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_00408da0(&puStack_28);
  return;
}



/* Entry: 0040a420; end: 0040a527;  */

void FUN_0040a420(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
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
  
  FUN_0040b1e0(param_4,auStack_48);
  FUN_003dd4f4();
  FUN_00353254(auStack_60,"");
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_003817cc(plVar1,param_4,auStack_48);
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_70 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_0040a068(param_1,auStack_60,plVar1,&uStack_80);
  puStack_38 = (undefined1 *)&uStack_80;
  FUN_00408da0(&puStack_38);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  FUN_003dcb74(param_4);
  return;
}



/* Entry: 0040a528; end: 0040a533;  */

undefined8 FUN_0040a528(void)

{
  return 1;
}



/* Entry: 0040a534; end: 0040a56b;  */

void FUN_0040a534(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040a56c; end: 0040a5a7;  */

long FUN_0040a56c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e2948);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0040a5a8; end: 0040a5ab;  */

void FUN_0040a5a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040a5ac; end: 0040a607;  */

void FUN_0040a5ac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_0040a608();
  puStack_28 = (undefined1 *)&uStack_40;
  FUN_00408da0(&puStack_28);
  return;
}



/* Entry: 0040a608; end: 0040a6fb;  */

void FUN_0040a608(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [16];
  undefined1 *puStack_48;
  
  FUN_0040b1e0(param_4,auStack_58);
  FUN_0040bd38(auStack_70,param_4);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_003817cc(plVar1,*(undefined8 *)(param_2 + 0x10),auStack_58);
  uStack_88 = param_5[1];
  uStack_90 = *param_5;
  uStack_80 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_0040a068(param_1,auStack_70,plVar1,&uStack_90);
  puStack_48 = (undefined1 *)&uStack_90;
  FUN_00408da0(&puStack_48);
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 0040a6fc; end: 0040a777;  */

undefined8 * FUN_0040a6fc(undefined8 *param_1,long param_2)

{
  dword *pdVar1;
  segment_command *psVar2;
  
  if (param_2 != 0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
    FUN_0040a2d8();
    *(undefined ***)pdVar1 = &PTR_FUN_009e2970;
    *(long *)(pdVar1 + 4) = param_2;
    *param_1 = pdVar1;
    psVar2 = &segment_command_00000020;
    __Znwm();
    *(undefined ***)psVar2 = &PTR_FUN_009e29c8;
    psVar2->segname[0] = '\0';
    psVar2->segname[1] = '\0';
    psVar2->segname[2] = '\0';
    psVar2->segname[3] = '\0';
    psVar2->segname[4] = '\0';
    psVar2->segname[5] = '\0';
    psVar2->segname[6] = '\0';
    psVar2->segname[7] = '\0';
    psVar2->segname[8] = '\0';
    psVar2->segname[9] = '\0';
    psVar2->segname[10] = '\0';
    psVar2->segname[0xb] = '\0';
    psVar2->segname[0xc] = '\0';
    psVar2->segname[0xd] = '\0';
    psVar2->segname[0xe] = '\0';
    psVar2->segname[0xf] = '\0';
    psVar2->vmaddr = (qword)pdVar1;
    param_1[1] = psVar2;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (undefined8 *)0x0;
}



/* Entry: 0040a778; end: 0040a8a3;  */

/* WARNING: Removing unreachable block (ram,0x0040a804) */
/* WARNING: Removing unreachable block (ram,0x0040a80c) */

void FUN_0040a778(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 **ppuVar3;
  byte bVar4;
  undefined8 *puStack_50;
  long lStack_48;
  undefined **ppuStack_40;
  undefined1 uStack_38;
  
  ppuStack_40 = &PTR_FUN_009e2620;
  if (plRam0000000000b65da8 == (long *)0x0) {
    (**(code **)(*plRam0000000000b65da0 + 0x10))
              (plRam0000000000b65da0,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,
               "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/include/grpcpp/impl/codegen/grpc_library.h"
               ,0x2f);
  }
  (**(code **)(*plRam0000000000b65da8 + 0x10))();
  uStack_38 = 1;
  bVar4 = *(byte *)(param_2 + 0x2f);
  puStack_50 = *(undefined8 **)(param_2 + 0x18);
  if (-1 < (char)bVar4) {
    puStack_50 = (undefined8 *)(param_2 + 0x18);
  }
  lStack_48 = *(long *)(param_2 + 0x30);
  if (-1 < *(char *)(param_2 + 0x47)) {
    lStack_48 = param_2 + 0x30;
  }
  lVar1 = 0;
  if (*(char *)(param_2 + 0x17) != '\0') {
    lVar1 = param_2;
  }
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  ppuVar3 = (undefined8 **)(undefined1 *)0x0;
  if (uVar2 != 0) {
    ppuVar3 = &puStack_50;
  }
  FUN_003dda94(lVar1,ppuVar3,0,0);
  FUN_0040a6fc(param_1);
  FUN_005b957c(&ppuStack_40);
  return;
}



/* Entry: 0040a8a4; end: 0040a8e3;  */

long FUN_0040a8a4(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 0040a8e4; end: 0040a8e7;  */

void FUN_0040a8e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [72];
  
  FUN_003413d4(auStack_68);
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
  FUN_00341470(auStack_68);
  FUN_0040a2fc(param_1);
  return;
}



/* Entry: 0040a8e8; end: 0040a8fb;  */

void FUN_0040a8e8(void)

{
  FUN_0040a900();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040a8fc; end: 0040a8ff;  */

void FUN_0040a8fc(void)

{
  return;
}



/* Entry: 0040a900; end: 0040a96f;  */

void FUN_0040a900(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [72];
  
  FUN_003413d4(auStack_68);
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
  FUN_00341470(auStack_68);
  FUN_0040a2fc(param_1);
  return;
}



/* Entry: 0040a970; end: 0040a9cf;  */

qword * FUN_0040a970(qword *param_1,qword param_2)

{
  segment_command *psVar1;
  
  *param_1 = param_2;
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009e29c8;
  psVar1->segname[0] = '\0';
  psVar1->segname[1] = '\0';
  psVar1->segname[2] = '\0';
  psVar1->segname[3] = '\0';
  psVar1->segname[4] = '\0';
  psVar1->segname[5] = '\0';
  psVar1->segname[6] = '\0';
  psVar1->segname[7] = '\0';
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = param_2;
  param_1[1] = (qword)psVar1;
  return param_1;
}



/* Entry: 0040a9d0; end: 0040a9d3;  */

void FUN_0040a9d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0040a9d4; end: 0040aa0b;  */

void FUN_0040a9d4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040aa0c; end: 0040aa47;  */

long FUN_0040aa0c(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e2a18);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0040aa48; end: 0040aa57;  */

void FUN_0040aa48(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040aa58; end: 0040ab87;  */

undefined8 * FUN_0040aa58(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  FUN_00353254(auStack_48,"grpc.primary_user_agent");
  FUN_0040be74(auStack_78);
  puVar1 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc(puVar1,0,"grpc-c++/")
  ;
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  lStack_50 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_0040ab88(param_1,auStack_48,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 0040ab88; end: 0040acf7;  */

long * FUN_0040ab88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar11 = param_1 + 3;
  plVar5 = plVar11;
  FUN_0040b28c(plVar11,0,0,param_2);
  lVar6 = param_1[3];
  *plVar5 = lVar6;
  plVar5[1] = (long)plVar11;
  *(long **)(lVar6 + 8) = plVar5;
  param_1[3] = (long)plVar5;
  param_1[5] = param_1[5] + 1;
  plVar13 = plVar5 + 2;
  if (*(char *)((long)plVar5 + 0x27) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  plVar5 = plVar11;
  FUN_0040b28c(plVar11,0,0,param_3);
  lVar6 = param_1[3];
  *plVar5 = lVar6;
  plVar5[1] = (long)plVar11;
  *(long **)(lVar6 + 8) = plVar5;
  param_1[3] = (long)plVar5;
  param_1[5] = param_1[5] + 1;
  plVar11 = plVar5 + 2;
  if (*(char *)((long)plVar5 + 0x27) < '\0') {
    plVar11 = (long *)*plVar11;
  }
  plVar5 = param_1 + 2;
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 < (undefined4 *)*plVar5) {
    *puVar8 = 0;
    plVar12 = (long *)(puVar8 + 8);
    *(long **)(puVar8 + 2) = plVar13;
    *(long **)(puVar8 + 4) = plVar11;
  }
  else {
    lVar6 = (long)puVar8 - *param_1 >> 5;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3b != 0) {
      plVar5 = param_1;
      FUN_003a38a0();
      pcStack_38 = FUN_0040acf8;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = (long)(plVar5 + 3);
      plVar5[4] = (long)(plVar5 + 3);
      plVar5[5] = 0;
      plStack_60 = plVar13;
      lStack_58 = lVar6;
      plStack_50 = plVar11;
      plStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_00353254(auStack_78,"grpc.primary_user_agent");
      FUN_0040be74(auStack_a8);
      puVar4 = auStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                (puVar4,0,"grpc-c++/");
      uStack_88 = puVar4[1];
      uStack_90 = *puVar4;
      lStack_80 = puVar4[2];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      FUN_0040ab88(plVar5,auStack_78,&uStack_90);
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(auStack_78[0]);
      }
      return plVar5;
    }
    uVar7 = *plVar5 - *param_1;
    uVar10 = (long)uVar7 >> 4;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar10 = 0x7ffffffffffffff;
    }
    if (uVar10 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      FUN_003a38b4();
    }
    plVar9 = plVar5 + lVar6 * 4;
    plVar2 = plVar5 + uVar10 * 4;
    *(undefined4 *)plVar9 = 0;
    plVar9[1] = (long)plVar13;
    plVar9[2] = (long)plVar11;
    plVar12 = plVar9 + 4;
    plVar11 = (long *)*param_1;
    plVar5 = (long *)param_1[1];
    plVar13 = plVar9;
    if (plVar5 != plVar11) {
      do {
        plVar3 = plVar5 + -3;
        lVar6 = plVar5[-4];
        lVar15 = plVar5[-1];
        lVar14 = plVar5[-2];
        plVar5 = plVar5 + -4;
        plVar9 = plVar13 + -4;
        plVar13[-3] = *plVar3;
        *plVar9 = lVar6;
        plVar13[-1] = lVar15;
        plVar13[-2] = lVar14;
        plVar13 = plVar9;
      } while (plVar5 != plVar11);
      plVar5 = (long *)*param_1;
    }
    *param_1 = (long)plVar9;
    param_1[1] = (long)plVar12;
    param_1[2] = (long)plVar2;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar12;
  return plVar5;
}



/* Entry: 0040acf8; end: 0040acfb;  */

undefined8 * FUN_0040acf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  FUN_00353254(auStack_48,"grpc.primary_user_agent");
  FUN_0040be74(auStack_78);
  puVar1 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc(puVar1,0,"grpc-c++/")
  ;
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  lStack_50 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_0040ab88(param_1,auStack_48,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 0040acfc; end: 0040ad83;  */

long * FUN_0040acfc(long *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_78 [72];
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; piVar2 != piVar1; piVar2 = piVar2 + 8) {
    if (*piVar2 == 2) {
      FUN_003413d4(auStack_78);
      (**(code **)(*(long *)(piVar2 + 6) + 8))(*(undefined8 *)(piVar2 + 4));
      FUN_00341470(auStack_78);
    }
  }
  FUN_0040b1fc(param_1 + 3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0040ad84; end: 0040ad87;  */

long * FUN_0040ad84(long *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_78 [72];
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; piVar2 != piVar1; piVar2 = piVar2 + 8) {
    if (*piVar2 == 2) {
      FUN_003413d4(auStack_78);
      (**(code **)(*(long *)(piVar2 + 6) + 8))(*(undefined8 *)(piVar2 + 4));
      FUN_00341470(auStack_78);
    }
  }
  FUN_0040b1fc(param_1 + 3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0040ad88; end: 0040aec7;  */

void FUN_0040ad88(long *****param_1,undefined8 param_2,long *****param_3)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  long *****ppppplVar4;
  long ****pppplVar5;
  long *****ppppplVar6;
  long ****pppplVar7;
  ulong uVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  ulong uVar11;
  long *****ppppplVar12;
  long lVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  undefined8 auStack_108 [2];
  char cStack_f1;
  long ****pppplStack_f0;
  long ****pppplStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long ****pppplStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  char cStack_b1;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  long lStack_98;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  ppppplVar12 = param_1 + 3;
  ppppplVar6 = (long *****)0x0;
  ppppplVar4 = ppppplVar12;
  FUN_0040b28c(ppppplVar12,0,0,param_2);
  pppplVar7 = param_1[3];
  *ppppplVar4 = pppplVar7;
  ppppplVar4[1] = (long ****)ppppplVar12;
  pppplVar7[1] = (long ***)ppppplVar4;
  param_1[3] = (long ****)ppppplVar4;
  param_1[5] = (long ****)((long)param_1[5] + 1);
  ppppplVar12 = ppppplVar4 + 2;
  if (*(char *)((long)ppppplVar4 + 0x27) < '\0') {
    ppppplVar12 = (long *****)*ppppplVar12;
  }
  ppppplVar4 = param_1 + 2;
  pppplVar7 = param_1[1];
  if (pppplVar7 < *ppppplVar4) {
    *(undefined4 *)pppplVar7 = 1;
    pppplVar7[1] = (long ***)ppppplVar12;
    *(int *)(pppplVar7 + 2) = (int)param_3;
    ppppplVar12 = (long *****)(pppplVar7 + 4);
  }
  else {
    lVar13 = (long)pppplVar7 - (long)*param_1 >> 5;
    uVar1 = lVar13 + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_003a38a0();
      pcStack_38 = FUN_0040aec8;
      lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
      pppplVar7 = ppppplVar6[1];
      if (-1 < (char)*(byte *)((long)ppppplVar6 + 0x17)) {
        pppplVar7 = (long ****)(ulong)*(byte *)((long)ppppplVar6 + 0x17);
      }
      ppppplVar4 = param_1;
      ppppplVar12 = ppppplVar6;
      puStack_40 = &stack0xfffffffffffffff0;
      if (pppplVar7 != (long ****)0x0) {
        pppplVar7 = *param_1;
        pppplVar5 = param_1[1];
        if (pppplVar7 != pppplVar5) {
          pppplVar14 = param_1[4];
          do {
            pppplVar14 = (long ****)pppplVar14[1];
            if (*(int *)pppplVar7 == 0) {
              FUN_00353254(&pppplStack_c8,pppplVar7[1]);
              if (cStack_b1 < '\0') {
                if (CONCAT17(uStack_b9,uStack_c0) == 0x17) {
                  pppplVar10 = (long ****)*pppplStack_c8;
                  pppplVar15 = (long ****)pppplStack_c8[1];
                  lVar13 = *(long *)((long)pppplStack_c8 + 0xf);
                  __ZdlPv();
                  if ((pppplVar10 == (long ****)0x6972702e63707267 &&
                      pppplVar15 == (long ****)0x6573755f7972616d) && lVar13 == 0x746e6567615f7265)
                  goto LAB_0040b014;
                }
                else {
                  __ZdlPv();
                }
              }
              else if ((cStack_b1 == '\x17') &&
                      (((long *****)pppplStack_c8 == (long *****)0x6972702e63707267 &&
                       CONCAT17(uStack_b9,uStack_c0) == 0x6573755f7972616d) &&
                       CONCAT71(uStack_b8,uStack_b9) == 0x746e6567615f7265)) {
LAB_0040b014:
                pppplVar5 = pppplVar14 + 2;
                pppplVar10 = pppplVar5;
                if (*(char *)((long)pppplVar14 + 0x27) < '\0') {
                  pppplVar10 = (long ****)*pppplVar5;
                }
                if ((long ****)pppplVar7[2] != pppplVar10) {
                  func_0x007762d8();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x40b140);
                  (*pcVar3)();
                }
                pppplVar10 = ppppplVar6[1];
                if (-1 < (char)*(byte *)((long)ppppplVar6 + 0x17)) {
                  pppplVar10 = (long ****)(ulong)*(byte *)((long)ppppplVar6 + 0x17);
                }
                FUN_00403e30(&pppplStack_c8,(long)pppplVar10 + 1,&uStack_a9);
                ppppplVar12 = (long *****)pppplStack_c8;
                if (-1 < cStack_b1) {
                  ppppplVar12 = &pppplStack_c8;
                }
                if (pppplVar10 != (long ****)0x0) {
                  ppppplVar4 = (long *****)*ppppplVar6;
                  if (-1 < *(char *)((long)ppppplVar6 + 0x17)) {
                    ppppplVar4 = ppppplVar6;
                  }
                  _memmove(ppppplVar12,ppppplVar4,pppplVar10);
                }
                *(undefined2 *)((long)ppppplVar12 + (long)pppplVar10) = 0x20;
                ppppplVar12 = (long *****)pppplVar7[2];
                ppppplVar4 = &pppplStack_c8;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                          (ppppplVar4,ppppplVar12);
                param_3 = (long *****)*ppppplVar4;
                uStack_a8 = SUB87(ppppplVar4[1],0);
                uStack_a1 = (undefined1)*(undefined8 *)((long)ppppplVar4 + 0xf);
                uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)ppppplVar4 + 0xf) >> 8);
                cVar2 = *(char *)((long)ppppplVar4 + 0x17);
                ppppplVar4[1] = (long ****)0x0;
                ppppplVar4[2] = (long ****)0x0;
                *ppppplVar4 = (long ****)0x0;
                if (*(char *)((long)pppplVar14 + 0x27) < '\0') {
                  ppppplVar4 = (long *****)*pppplVar5;
                  __ZdlPv();
                }
                pppplVar14[2] = (long ***)param_3;
                pppplVar14[3] = (long ***)CONCAT17(uStack_a1,uStack_a8);
                *(ulong *)((long)pppplVar14 + 0x1f) = CONCAT71(uStack_a0,uStack_a1);
                *(char *)((long)pppplVar14 + 0x27) = cVar2;
                if (cStack_b1 < '\0') {
                  ppppplVar4 = (long *****)pppplStack_c8;
                  __ZdlPv();
                  cVar2 = *(char *)((long)pppplVar14 + 0x27);
                }
                if (cVar2 < '\0') {
                  pppplVar5 = (long ****)*pppplVar5;
                }
                pppplVar7[2] = (long ***)pppplVar5;
                goto LAB_0040b100;
              }
              pppplVar14 = (long ****)pppplVar14[1];
            }
            pppplVar7 = pppplVar7 + 4;
          } while (pppplVar7 != pppplVar5);
        }
        FUN_00353254(&pppplStack_c8,"grpc.primary_user_agent");
        ppppplVar12 = &pppplStack_c8;
        FUN_0040ab88(param_1,ppppplVar12,ppppplVar6);
        param_3 = param_1;
        if (cStack_b1 < '\0') {
          ppppplVar4 = (long *****)pppplStack_c8;
          __ZdlPv();
        }
      }
LAB_0040b100:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
        return;
      }
      ___stack_chk_fail();
      if (cStack_b1 < '\0') {
        __ZdlPv(pppplStack_c8);
      }
      ppppplVar6 = ppppplVar4;
      __Unwind_Resume(ppppplVar4);
      pcStack_d8 = FUN_0040b16c;
      pppplStack_f0 = (long ****)param_3;
      pppplStack_e8 = (long ****)ppppplVar4;
      ppuStack_e0 = &puStack_40;
      FUN_00353254(auStack_108,"grpc.max_receive_message_length");
      FUN_0040ad88(ppppplVar6,auStack_108,ppppplVar12);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      return;
    }
    uVar8 = (long)*ppppplVar4 - (long)*param_1;
    uVar11 = (long)uVar8 >> 4;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar11 = 0x7ffffffffffffff;
    }
    if (uVar11 == 0) {
      ppppplVar4 = (long *****)0x0;
    }
    else {
      FUN_003a38b4();
    }
    ppppplVar6 = ppppplVar4 + lVar13 * 4;
    *(undefined4 *)ppppplVar6 = 1;
    ppppplVar6[1] = (long ****)ppppplVar12;
    *(int *)(ppppplVar6 + 2) = (int)param_3;
    ppppplVar12 = ppppplVar6 + 4;
    pppplVar7 = *param_1;
    pppplVar5 = param_1[1];
    ppppplVar9 = ppppplVar6;
    if (pppplVar5 != pppplVar7) {
      do {
        pppplVar14 = pppplVar5 + -3;
        pppplVar10 = (long ****)pppplVar5[-4];
        pppplVar16 = (long ****)pppplVar5[-1];
        pppplVar15 = (long ****)pppplVar5[-2];
        pppplVar5 = pppplVar5 + -4;
        ppppplVar6 = ppppplVar9 + -4;
        ppppplVar9[-3] = (long ****)*pppplVar14;
        *ppppplVar6 = pppplVar10;
        ppppplVar9[-1] = pppplVar16;
        ppppplVar9[-2] = pppplVar15;
        ppppplVar9 = ppppplVar6;
      } while (pppplVar5 != pppplVar7);
      pppplVar5 = *param_1;
    }
    *param_1 = (long ****)ppppplVar6;
    param_1[1] = (long ****)ppppplVar12;
    param_1[2] = (long ****)(ppppplVar4 + uVar11 * 4);
    if (pppplVar5 != (long ****)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long ****)ppppplVar12;
  return;
}



/* Entry: 0040aec8; end: 0040b16b;  */

void FUN_0040aec8(long *****param_1,long *****param_2)

{
  long ****pppplVar1;
  char cVar2;
  code *pcVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long ****pppplVar7;
  long lVar8;
  long *****unaff_x20;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long ****pppplStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  char cStack_81;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar9 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pppplVar9 = (long ****)(ulong)*(byte *)((long)param_2 + 0x17);
  }
  ppppplVar4 = param_1;
  ppppplVar6 = param_2;
  if (pppplVar9 != (long ****)0x0) {
    pppplVar9 = *param_1;
    pppplVar11 = param_1[1];
    if (pppplVar9 != pppplVar11) {
      pppplVar10 = param_1[4];
      do {
        pppplVar10 = (long ****)pppplVar10[1];
        if (*(int *)pppplVar9 == 0) {
          FUN_00353254(&pppplStack_98,pppplVar9[1]);
          if (cStack_81 < '\0') {
            if (CONCAT17(uStack_89,uStack_90) == 0x17) {
              pppplVar7 = (long ****)*pppplStack_98;
              pppplVar1 = (long ****)pppplStack_98[1];
              lVar8 = *(long *)((long)pppplStack_98 + 0xf);
              __ZdlPv();
              if ((pppplVar7 == (long ****)0x6972702e63707267 &&
                  pppplVar1 == (long ****)0x6573755f7972616d) && lVar8 == 0x746e6567615f7265)
              goto LAB_0040b014;
            }
            else {
              __ZdlPv();
            }
          }
          else if ((cStack_81 == '\x17') &&
                  (((long *****)pppplStack_98 == (long *****)0x6972702e63707267 &&
                   CONCAT17(uStack_89,uStack_90) == 0x6573755f7972616d) &&
                   CONCAT71(uStack_88,uStack_89) == 0x746e6567615f7265)) {
LAB_0040b014:
            pppplVar11 = pppplVar10 + 2;
            pppplVar7 = pppplVar11;
            if (*(char *)((long)pppplVar10 + 0x27) < '\0') {
              pppplVar7 = (long ****)*pppplVar11;
            }
            if ((long ****)pppplVar9[2] != pppplVar7) {
              func_0x007762d8();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x40b140);
              (*pcVar3)();
            }
            pppplVar7 = param_2[1];
            if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
              pppplVar7 = (long ****)(ulong)*(byte *)((long)param_2 + 0x17);
            }
            FUN_00403e30(&pppplStack_98,(long)pppplVar7 + 1,&uStack_79);
            ppppplVar6 = (long *****)pppplStack_98;
            if (-1 < cStack_81) {
              ppppplVar6 = &pppplStack_98;
            }
            if (pppplVar7 != (long ****)0x0) {
              ppppplVar4 = (long *****)*param_2;
              if (-1 < *(char *)((long)param_2 + 0x17)) {
                ppppplVar4 = param_2;
              }
              _memmove(ppppplVar6,ppppplVar4,pppplVar7);
            }
            *(undefined2 *)((long)ppppplVar6 + (long)pppplVar7) = 0x20;
            ppppplVar6 = (long *****)pppplVar9[2];
            ppppplVar4 = &pppplStack_98;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (ppppplVar4,ppppplVar6);
            unaff_x20 = (long *****)*ppppplVar4;
            uStack_78 = SUB87(ppppplVar4[1],0);
            uStack_71 = (undefined1)*(undefined8 *)((long)ppppplVar4 + 0xf);
            uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)ppppplVar4 + 0xf) >> 8);
            cVar2 = *(char *)((long)ppppplVar4 + 0x17);
            ppppplVar4[1] = (long ****)0x0;
            ppppplVar4[2] = (long ****)0x0;
            *ppppplVar4 = (long ****)0x0;
            if (*(char *)((long)pppplVar10 + 0x27) < '\0') {
              ppppplVar4 = (long *****)*pppplVar11;
              __ZdlPv();
            }
            pppplVar10[2] = (long ***)unaff_x20;
            pppplVar10[3] = (long ***)CONCAT17(uStack_71,uStack_78);
            *(ulong *)((long)pppplVar10 + 0x1f) = CONCAT71(uStack_70,uStack_71);
            *(char *)((long)pppplVar10 + 0x27) = cVar2;
            if (cStack_81 < '\0') {
              ppppplVar4 = (long *****)pppplStack_98;
              __ZdlPv();
              cVar2 = *(char *)((long)pppplVar10 + 0x27);
            }
            if (cVar2 < '\0') {
              pppplVar11 = (long ****)*pppplVar11;
            }
            pppplVar9[2] = (long ***)pppplVar11;
            goto LAB_0040b100;
          }
          pppplVar10 = (long ****)pppplVar10[1];
        }
        pppplVar9 = pppplVar9 + 4;
      } while (pppplVar9 != pppplVar11);
    }
    FUN_00353254(&pppplStack_98,"grpc.primary_user_agent");
    ppppplVar6 = &pppplStack_98;
    FUN_0040ab88(param_1,ppppplVar6,param_2);
    unaff_x20 = param_1;
    if (cStack_81 < '\0') {
      ppppplVar4 = (long *****)pppplStack_98;
      __ZdlPv();
    }
  }
LAB_0040b100:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_81 < '\0') {
    __ZdlPv(pppplStack_98);
  }
  ppppplVar5 = ppppplVar4;
  __Unwind_Resume(ppppplVar4);
  pcStack_a8 = FUN_0040b16c;
  pppplStack_c0 = (long ****)unaff_x20;
  pppplStack_b8 = (long ****)ppppplVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_00353254(auStack_d8,"grpc.max_receive_message_length");
  FUN_0040ad88(ppppplVar5,auStack_d8,ppppplVar6);
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  return;
}


