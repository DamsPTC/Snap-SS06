/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00468490; end: 004684a7;  */

void FUN_00468490(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  FUN_0046aeb4();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 004684a8; end: 0046856b;  */

void FUN_004684a8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  code *extraout_x8;
  int aiStack_78 [14];
  
  plVar2 = plRam0000000000b65da0;
  (**(code **)(*plRam0000000000b65da0 + 0x130))(plRam0000000000b65da0,param_1,0x228);
  plVar3 = plVar2;
  func_0x00468840();
  plVar1 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
  }
  *param_2 = (long)plVar1;
  FUN_004687a0(aiStack_78,plVar3 + 6,param_5);
  func_0x0046cdc4();
  if (aiStack_78[0] != 0) {
    func_0x0046cc50(plRam0000000000b65da0);
    (*extraout_x8)();
  }
  *(undefined1 *)((long)plVar2 + 0x71) = 1;
  func_0x004687a8(param_3,aiStack_78);
  func_0x004687f4(param_4,aiStack_78);
  return;
}



/* Entry: 0046856c; end: 00468573;  */

long FUN_0046856c(long param_1)

{
  func_0x0046861c(param_1 + 0x78);
  func_0x00468650(param_1 + 0x58);
  return param_1;
}



/* Entry: 00468574; end: 004685ab;  */

void FUN_00468574(long param_1,undefined8 param_2)

{
  FUN_00468684(param_1 + 0x58,*(undefined8 *)(param_1 + 8),param_1 + 0x10,
               *(undefined8 *)(param_1 + 0x48),param_2);
  *(undefined1 *)(param_1 + 0x41) = 1;
  return;
}



/* Entry: 004685ac; end: 004685ef;  */

void FUN_004685ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00468728(param_1 + 0x78,*(undefined8 *)(param_1 + 8),param_1 + 0x10,
                  *(undefined1 *)(param_1 + 0x41),*(undefined8 *)(param_1 + 0x48),param_1 + 0x50,
                  param_2,param_3,param_4);
  return;
}



/* Entry: 004685f0; end: 00468683;  */

long FUN_004685f0(long param_1)

{
  func_0x0046861c(param_1 + 0x78);
  func_0x00468650(param_1 + 0x58);
  return param_1;
}



/* Entry: 00468684; end: 0046870f;  */

void FUN_00468684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_5;
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x004686bc(param_1,&uStack_18,&uStack_20,&uStack_28,&uStack_30);
  return;
}



/* Entry: 00468710; end: 00468713;  */

void FUN_00468710(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return;
}



/* Entry: 00468714; end: 0046879f;  */

void FUN_00468714(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004687a0; end: 004687a7;  */

void FUN_004687a0(long param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x9;
  long unaff_x20;
  byte bStack_21;
  
  uVar1 = 0;
  func_0x0046d210();
  *(int *)(param_1 + 0x18) = (int)uVar1;
  *(char *)(param_1 + 0x1c) = (char)((ulong)uVar1 >> 0x20);
  FUN_0046a64c(extraout_x9,param_1 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x0046a698(unaff_x20 + 0x10);
  }
  return;
}



/* Entry: 004687a8; end: 004688d7;  */

void FUN_004687a8(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0046cb00();
  uStack_28 = extraout_x8;
  func_0x0046d09c(&PTR_FUN_009e6850);
  FUN_0046a830();
  func_0x00468650(auStack_48);
  func_0x0046ca74(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0046cb00();
    uStack_78 = extraout_x8_00;
    func_0x0046d09c(&PTR_FUN_009e68e0);
    FUN_0046adb0();
    puVar1 = auStack_98;
    func_0x0046861c();
    func_0x0046ca74(uStack_78);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0046ce0c();
      *(undefined1 *)(puVar1 + 0xf) = 0;
      puVar1[0x10] = 0;
      *(undefined1 *)(puVar1 + 0x11) = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      *(undefined4 *)((long)puVar1 + 0x9f) = 0;
      *(undefined1 *)(puVar1 + 0x15) = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      *puVar1 = &PTR_FUN_009e6590;
      puVar1[0x1f] = puVar1;
      puVar1[0x20] = puVar1;
      puVar1[0x22] = 0;
      puVar1[0x23] = 0;
      puVar1[0x21] = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
      puVar1[0x25] = 0;
      puVar1[0x26] = 0;
      *(undefined1 *)(puVar1 + 0x27) = 0;
      FUN_00468b58(puVar1 + 0x28);
      return;
    }
  }
  return;
}



/* Entry: 004688d8; end: 004688db;  */

long FUN_004688d8(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  FUN_0046cf40(&UNK_009e6580);
  *unaff_x20 = extraout_x8;
  func_0x00468fe8(lVar1 + 0x140);
  FUN_00468b24(param_1 + 0x98);
  func_0x004688ac(unaff_x20 + 6);
  return param_1;
}



/* Entry: 004688dc; end: 004688ef;  */

void FUN_004688dc(void)

{
  FUN_00469680();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004688f0; end: 00468983;  */

undefined8 FUN_004688f0(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x0046cba4();
  if (*(char *)(param_1 + 0x138) == '\x01') {
    FUN_004696c4(*(undefined8 *)(unaff_x19 + 0x110));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x100);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x220);
  }
  else {
    func_0x0046d1b0();
    func_0x0046d1e4();
    *(undefined1 *)(unaff_x19 + 0x71) = 0;
    func_0x0046d14c(unaff_x19 + 0x88);
    func_0x0046d154(unaff_x19 + 0xa8);
    *(undefined1 *)(unaff_x19 + 0x220) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_004699dc();
    if ((int)lVar1 == 0) {
      return 0;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x100);
  }
  func_0x0046cb14();
  func_0x0046cbdc();
  return 1;
}



/* Entry: 00468984; end: 004689cb;  */

void FUN_00468984(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x0046cc6c();
  *(undefined1 *)(param_4 + 0x138) = 0;
  func_0x0046ca9c();
  func_0x0046cfb0(unaff_x19 + 0x108);
  extraout_x8[3] = in_register_00005028;
  extraout_x8[2] = param_2;
  extraout_x8[5] = in_register_00005048;
  extraout_x8[4] = param_3;
  extraout_x8[1] = in_register_00005008;
  *extraout_x8 = param_1;
  FUN_0046a074();
  if ((int)unaff_x19 != 0) {
    func_0x0046cc88();
                    /* WARNING: Could not recover jumptable at 0x0046cdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 004689cc; end: 00468a23;  */

undefined8 FUN_004689cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 00468a24; end: 00468ae3;  */

void FUN_00468a24(void)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  long lStack_230;
  undefined8 auStack_228 [60];
  undefined8 uStack_48;
  
  func_0x0046ca4c();
  FUN_0046a1e0();
  func_0x0046cd70(unaff_x19 + 0x30);
  FUN_0046a294();
  uVar1 = *(char *)(unaff_x19 + 0x71) == '\x01';
  if (((bool)uVar1) && ((*(byte *)(unaff_x19 + 0x70) & 1) == 0)) {
    auStack_228[lStack_230 * 10] = 2;
    auStack_228[lStack_230 * 10 + 1] = 0;
  }
  func_0x0046cd70(unaff_x19 + 0x78);
  FUN_0046a364();
  func_0x0046cd70(unaff_x19 + 0x88);
  func_0x0046a3a0();
  lVar3 = unaff_x19 + 0xa8;
  func_0x0046cd70();
  func_0x0046a3dc();
  func_0x0046cd60();
  func_0x0046cb64();
  func_0x0046cab8();
  if ((int)lVar3 != 0) {
    func_0x0046c9e8();
  }
  func_0x0046ca74(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar3 + 0x138) = 1;
  func_0x0046cc78();
  iVar2 = (int)lVar3;
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar2 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 00468ae4; end: 00468b23;  */

void FUN_00468ae4(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x138) = 1;
  func_0x0046cc78();
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 00468b24; end: 00468b57;  */

long * FUN_00468b24(long *param_1)

{
  long extraout_x8;
  
  if (*param_1 != 0) {
    func_0x0046ca88();
    (**(code **)(extraout_x8 + 0xc0))();
  }
  return param_1;
}



/* Entry: 00468b58; end: 00468bb3;  */

void FUN_00468b58(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_009e66f0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0x11] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  for (lVar1 = 8; lVar1 != 0x15; lVar1 = lVar1 + 1) {
    *(undefined1 *)((long)param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 00468bb4; end: 00468bc7;  */

void FUN_00468bb4(void)

{
  func_0x00468fe8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00468bc8; end: 00468bd3;  */

undefined1 FUN_00468bc8(long param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2 + 8);
}



/* Entry: 00468bd4; end: 00468c2f;  */

void FUN_00468bd4(long param_1)

{
  char cVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *UNRECOVERED_JUMPTABLE_00;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar3;
  code *extraout_x9;
  long lVar4;
  
  if (*(long *)(*(long *)(param_1 + 0x28) + 0x20) == 0) {
    if (*(long *)(*(long *)(param_1 + 0x28) + 0x28) == 0) {
      func_0x0046c9d0();
      func_0x0046cdb0();
      (*extraout_x8)();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      UNRECOVERED_JUMPTABLE_00 = (char *)(lVar3 + 1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
      if ((code *)(*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x20) >> 3) <=
          UNRECOVERED_JUMPTABLE_00) {
        plVar2 = *(long **)(param_1 + 0x30);
        if (plVar2 != (long *)0x0) goto LAB_0046d134;
        goto LAB_004691cc;
      }
    }
    else {
      if (lVar3 == 0) {
        if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004691c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
          return;
        }
LAB_004691cc:
        if (*(long *)(param_1 + 0x50) == 0) {
          func_0x0046cdb0();
          (*extraout_x9)();
          param_1 = extraout_x8_00;
        }
        plVar2 = *(long **)(param_1 + 0x50);
        if (plVar2 == (long *)0x0) {
          func_0x004686dc();
          func_0x00469328();
          return;
        }
LAB_0046d134:
                    /* WARNING: Could not recover jumptable at 0x0046d13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x30))();
        return;
      }
      UNRECOVERED_JUMPTABLE_00 = (char *)(lVar3 + -1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
    }
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((code *)(*(long *)(lVar4 + 0x28) - lVar3 >> 3) <= UNRECOVERED_JUMPTABLE_00) {
      func_0x0046c9d0(lVar4,param_1);
      UNRECOVERED_JUMPTABLE_00 =
           "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
      ;
      (*extraout_x8_02)();
      lVar3 = *(long *)(lVar4 + 0x20);
    }
    func_0x0046d21c(lVar3);
    goto LAB_0046d16c;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  cVar1 = *(char *)(lVar4 + 0x40);
  if (cVar1 == '\x01') {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 != *(long *)(lVar4 + 0x48)) || ((*(byte *)(param_1 + 0x21) & 1) != 0))
      goto LAB_00469108;
      lVar4 = param_1;
      FUN_00469220();
      func_0x0046cfcc();
      *(undefined1 *)(param_1 + 0x21) = 1;
      UNRECOVERED_JUMPTABLE_00 = *(char **)(param_1 + 0x18);
      param_1 = lVar4;
    }
    else {
LAB_004690f0:
      if (*(long *)(param_1 + 0x18) == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x30) + 0x38);
LAB_0046915c:
                    /* WARNING: Could not recover jumptable at 0x0046cdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      UNRECOVERED_JUMPTABLE_00 = (char *)(*(long *)(param_1 + 0x18) - 1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) goto LAB_004690f0;
    lVar3 = *(long *)(param_1 + 0x18);
LAB_00469108:
    UNRECOVERED_JUMPTABLE_00 = (char *)(lVar3 + 1);
    *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
    if (((code *)(*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3) <=
         UNRECOVERED_JUMPTABLE_00) ||
       ((cVar1 != '\0' && (*(code **)(lVar4 + 0x48) < UNRECOVERED_JUMPTABLE_00)))) {
      UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x30) + 0x30);
      goto LAB_0046915c;
    }
  }
  func_0x0046d0c0();
  lVar4 = *(long *)(param_1 + 0x28);
  if ((code *)(*(long *)(param_1 + 0x30) - lVar4 >> 3) <= UNRECOVERED_JUMPTABLE_00) {
    func_0x0046c9d0();
    UNRECOVERED_JUMPTABLE_00 =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8_01)();
    lVar4 = *(long *)(param_1 + 0x28);
  }
  func_0x0046d21c(lVar4);
LAB_0046d16c:
                    /* WARNING: Could not recover jumptable at 0x0046d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* Entry: 00468c30; end: 00468d8f;  */

void FUN_00468c30(long param_1)

{
  long lVar1;
  char *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar2;
  
  if ((((*(byte *)(param_1 + 0x20) & 1) != 0) || (*(long *)(param_1 + 0x30) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x28) + 0x20) == 0)) {
    func_0x0046cc50(uRam0000000000b65da0);
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  if (*(char *)(param_1 + 0x21) == '\x01') {
    func_0x0046cc50(uRam0000000000b65da0);
    func_0x0046cdb0();
    (*extraout_x8_00)();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  *(undefined1 *)(lVar2 + 0x40) = 1;
  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_1;
  FUN_00469220();
  func_0x0046cfcc();
  *(undefined1 *)(param_1 + 0x21) = 1;
  UNRECOVERED_JUMPTABLE = *(char **)(param_1 + 0x18);
  func_0x0046d0c0();
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((code *)(*(long *)(lVar1 + 0x30) - lVar2 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x0046c9d0();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8_01)();
    lVar2 = *(long *)(lVar1 + 0x28);
  }
  func_0x0046d21c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0046d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 00468d90; end: 00468e13;  */

undefined8 FUN_00468d90(long param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
    puVar1 = *(undefined8 **)(param_1 + 0x68);
  }
  return *puVar1;
}



/* Entry: 00468e14; end: 00468e43;  */

byte FUN_00468e14(long param_1)

{
  return (**(byte **)(param_1 + 0x60) ^ 0xff) & 1;
}



/* Entry: 00468e44; end: 00468ea3;  */

void FUN_00468e44(long param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [24];
  
  **(undefined4 **)(param_1 + 0x98) = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_2 + 8);
  FUN_004575b8(*(undefined8 *)(param_1 + 0xa0),auStack_38);
  func_0x0046ce54();
  func_0x0046d048(auStack_38);
  FUN_004575b8(*(undefined8 *)(param_1 + 0xa8),auStack_38);
  func_0x0046ce54();
  return;
}



/* Entry: 00468ea4; end: 00468eb3;  */

undefined8 FUN_00468ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 00468eb4; end: 00468ed7;  */

long FUN_00468eb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 200);
  FUN_00469398(lVar1);
  return lVar1 + 0x20;
}



/* Entry: 00468ed8; end: 00468edf;  */

undefined8 FUN_00468ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 00468ee0; end: 00468f03;  */

long FUN_00468ee0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  FUN_00469398(lVar1);
  return lVar1 + 0x20;
}



/* Entry: 00468f04; end: 00468f5f;  */

void FUN_00468f04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2[5] + 0x20);
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = param_2;
    func_0x0046d104();
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    lVar3 = param_2[3];
    *puVar1 = &PTR_DAT_009e67c8;
    puVar1[1] = uVar2;
    puVar1[2] = lVar3 + 1;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 00468f60; end: 00469163;  */

void FUN_00468f60(long param_1)

{
  code *extraout_x8;
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  **(undefined1 **)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 00469164; end: 0046921f;  */

void FUN_00469164(long param_1)

{
  long lVar1;
  long *plVar2;
  char *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  code *extraout_x8_00;
  long lVar3;
  code *extraout_x9;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    UNRECOVERED_JUMPTABLE = (char *)(lVar3 + 1);
    *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
    if (UNRECOVERED_JUMPTABLE < (code *)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 3))
    goto LAB_004691a4;
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 != (long *)0x0) goto LAB_0046d134;
  }
  else {
    if (lVar3 != 0) {
      UNRECOVERED_JUMPTABLE = (char *)(lVar3 + -1);
      *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
LAB_004691a4:
      lVar3 = *(long *)(lVar1 + 0x20);
      if ((code *)(*(long *)(lVar1 + 0x28) - lVar3 >> 3) <= UNRECOVERED_JUMPTABLE) {
        func_0x0046c9d0(lVar1,param_1);
        UNRECOVERED_JUMPTABLE =
             "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/server_interceptor.h"
        ;
        (*extraout_x8_00)();
        lVar3 = *(long *)(lVar1 + 0x20);
      }
      func_0x0046d21c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0046d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004691c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
      return;
    }
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x0046cdb0();
    (*extraout_x9)();
    param_1 = extraout_x8;
  }
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 == (long *)0x0) {
    func_0x004686dc();
    func_0x00469328();
    return;
  }
LAB_0046d134:
                    /* WARNING: Could not recover jumptable at 0x0046d13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return;
}



/* Entry: 00469220; end: 0046923f;  */

void FUN_00469220(long param_1)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0xd; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + 8 + lVar1) = 0;
  }
  return;
}



/* Entry: 00469240; end: 004692ef;  */

void FUN_00469240(long param_1,undefined8 param_2,char *UNRECOVERED_JUMPTABLE)

{
  code *extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((code *)(*(long *)(param_1 + 0x30) - lVar1 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x0046c9d0();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8)();
    lVar1 = *(long *)(param_1 + 0x28);
  }
  func_0x0046d21c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0046d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004692f0; end: 00469347;  */

void FUN_004692f0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046d13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x004686dc();
  func_0x00469328();
  return;
}



/* Entry: 00469348; end: 00469397;  */

undefined4 * FUN_00469348(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_3);
  func_0x0046d048(param_1 + 8);
  return param_1;
}



/* Entry: 00469398; end: 0046944b;  */

void FUN_00469398(byte *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((*param_1 & 1) == 0) {
    lVar2 = 0;
    *param_1 = 1;
    for (uVar3 = 0; uVar3 < *(ulong *)(param_1 + 8); uVar3 = uVar3 + 1) {
      lVar1 = *(long *)(param_1 + 0x18);
      if (*(long *)(lVar1 + lVar2) == 0) {
        lStack_50 = lVar1 + lVar2 + 9;
        uStack_48 = (ulong)*(byte *)(lVar1 + lVar2 + 8);
      }
      else {
        uStack_48 = *(ulong *)(lVar1 + lVar2 + 8);
        lStack_50 = *(long *)(lVar1 + lVar2 + 0x10);
      }
      lVar1 = lVar1 + lVar2;
      if (*(long *)(lVar1 + 0x20) == 0) {
        lStack_40 = lVar1 + 0x29;
        uStack_38 = (ulong)*(byte *)(lVar1 + 0x28);
      }
      else {
        uStack_38 = *(ulong *)(lVar1 + 0x28);
        lStack_40 = *(long *)(lVar1 + 0x30);
      }
      FUN_0046944c(param_1 + 0x20,&lStack_50);
      lVar2 = lVar2 + 0x60;
    }
  }
  return;
}



/* Entry: 0046944c; end: 004694b3;  */

long FUN_0046944c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_004694b4(alStack_38);
  uVar2 = param_1;
  func_0x00469504(param_1,&uStack_40,alStack_38[0] + 0x20);
  FUN_00469574(param_1,uStack_40,uVar2,alStack_38[0]);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  func_0x004695a4(alStack_38);
  return lVar1;
}



/* Entry: 004694b4; end: 00469573;  */

void FUN_004694b4(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 1;
  *(undefined8 *)(lVar1 + 0x20) = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = param_3[3];
  return;
}



/* Entry: 00469574; end: 004695c3;  */

void FUN_00469574(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0046cfe8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x0046d0f0();
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 004695c4; end: 0046967f;  */

void FUN_004695c4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00469680; end: 004696c3;  */

long FUN_00469680(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  FUN_0046cf40(&UNK_009e6580);
  *unaff_x20 = extraout_x8;
  func_0x00468fe8(lVar1 + 0x140);
  FUN_00468b24(param_1 + 0x98);
  func_0x004688ac(unaff_x20 + 6);
  return param_1;
}



/* Entry: 004696c4; end: 004696ff;  */

void FUN_004696c4(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004696f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000000b65da0 + 0x38))
              (plRam0000000000b65da0,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 00469700; end: 0046984f;  */

void FUN_00469700(byte *param_1)

{
  byte *pbVar1;
  
  if ((param_1[1] == 1) && ((*param_1 & 1) == 0)) {
    pbVar1 = param_1;
    func_0x0046cb14();
    (**(code **)(*(long *)pbVar1 + 0x58))();
    param_1[1] = 0;
  }
  return;
}



/* Entry: 00469850; end: 004699db;  */

long * FUN_00469850(long param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong *puVar3;
  byte *pbVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  code *extraout_x8_00;
  byte *unaff_x19;
  long lVar6;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0046cb00();
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = extraout_x8;
  if ((plVar2 != (long *)0x0) && ((*unaff_x19 & 1) == 0)) {
    iVar1 = *(int *)(unaff_x19 + 0x28);
    if (iVar1 == 0) {
      uStack_70 = uStack_70 & 0xffffffff00000000;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_40 = 0;
      uStack_48 = 0;
      FUN_00469ae8(plVar2,&uStack_70);
      FUN_00464a10(&uStack_70);
    }
    else {
      if (*(long *)(unaff_x19 + 0x30) == 0) {
        uVar5 = (ulong)unaff_x19[0x38];
        if (uVar5 != 0) {
          pbVar4 = unaff_x19 + 0x39;
          goto LAB_004698d8;
        }
LAB_004698e8:
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
      }
      else {
        uVar5 = *(ulong *)(unaff_x19 + 0x38);
        if (uVar5 == 0) goto LAB_004698e8;
        pbVar4 = *(byte **)(unaff_x19 + 0x40);
LAB_004698d8:
        FUN_00469c30(&uStack_88,pbVar4,pbVar4 + uVar5);
      }
      FUN_00469b30(auStack_a0,*(undefined8 *)(unaff_x19 + 0x10));
      FUN_00469348(&uStack_70,iVar1,&uStack_88,auStack_a0);
      FUN_00469ae8(*(undefined8 *)(unaff_x19 + 0x18),&uStack_70);
      FUN_00464a10(&uStack_70);
      func_0x0046d028();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        lVar6 = *(long *)(unaff_x19 + 8);
        FUN_00425cb4(&uStack_70);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar6 + 0x158,&uStack_70);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
        (**(code **)(*plRam0000000000b65da0 + 0x58))
                  (plRam0000000000b65da0,*(undefined8 *)(unaff_x19 + 0x20));
      }
    }
    uStack_68 = *(undefined8 *)(unaff_x19 + 0x38);
    uStack_70 = *(ulong *)(unaff_x19 + 0x30);
    uStack_58 = *(undefined8 *)(unaff_x19 + 0x48);
    uStack_60 = *(undefined8 *)(unaff_x19 + 0x40);
    plVar2 = plRam0000000000b65da0;
    (**(code **)(*plRam0000000000b65da0 + 0x150))(plRam0000000000b65da0,&uStack_70);
  }
  func_0x0046ca74(uStack_38);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0046cc64();
  FUN_00469d74(puVar3 + 0x28);
  FUN_00469d80(puVar3 + 6,puVar3 + 0x28);
  if (puVar3[0x10] != 0) {
    *(undefined1 *)(puVar3 + 0x2a) = 1;
    puVar3[0x10] = 0;
  }
  if ((char)puVar3[0x11] == '\x01') {
    *(undefined1 *)((long)puVar3 + 0x151) = 1;
  }
  else {
    puVar3[0x3f] = 0;
    puVar3[0x40] = 0;
  }
  if (puVar3[0x18] != 0) {
    *(undefined1 *)((long)puVar3 + 0x152) = 1;
    puVar3[0x18] = 0;
  }
  if (puVar3[0x2e] == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8_00)();
  }
  lVar6 = *(long *)(puVar3[0x2d] + 0x20);
  if (lVar6 == 0) {
    lVar6 = *(long *)(puVar3[0x2d] + 0x28);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == *(long *)(lVar6 + 0x28))) goto LAB_00469e78;
    func_0x0046a03c(puVar3 + 0x28);
  }
  else {
    if (*(long *)(lVar6 + 0x28) == *(long *)(lVar6 + 0x30)) {
LAB_00469e78:
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    FUN_00469ff0(puVar3 + 0x28);
  }
  return (long *)0x0;
}



/* Entry: 004699dc; end: 00469ae7;  */

undefined8 FUN_004699dc(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  FUN_00469d74(param_1 + 0x140);
  FUN_00469d80(param_1 + 0x30,param_1 + 0x140);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x150) = 1;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x151) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined1 *)(param_1 + 0x152) = 1;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(param_1 + 0x170) == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x0046a03c(param_1 + 0x140);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_00469ff0(param_1 + 0x140);
  }
  return 0;
}



/* Entry: 00469ae8; end: 00469b2f;  */

undefined4 * FUN_00469ae8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_004575b8(param_1 + 2,param_2 + 2);
  FUN_004575b8(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 00469b30; end: 00469c2f;  */

void FUN_00469b30(byte *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0046d210();
  if ((*param_1 & 1) == 0) {
    lVar3 = 0;
    for (lVar4 = *(long *)(unaff_x20 + 8); lVar4 != 0; lVar4 = lVar4 + -1) {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (*(long *)(lVar5 + lVar3) == 0) {
        lVar1 = lVar5 + lVar3 + 9;
        uVar2 = (ulong)*(byte *)(lVar5 + lVar3 + 8);
      }
      else {
        uVar2 = *(ulong *)(lVar5 + lVar3 + 8);
        lVar1 = *(long *)(lVar5 + lVar3 + 0x10);
      }
      _strncmp(lVar1,&UNK_00802269,uVar2);
      if ((int)lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00779b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_00998990)
                  ();
        return;
      }
      lVar3 = lVar3 + 0x60;
    }
  }
  else {
    puStack_50 = &UNK_00802269;
    uStack_48 = 0x17;
    lVar3 = unaff_x20 + 0x20;
    func_0x00469cc4(lVar3,&puStack_50);
    if (unaff_x20 + 0x28 != lVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
      return;
    }
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 00469c30; end: 00469c37;  */

undefined8 * FUN_00469c30(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (long)param_3 - (long)param_2;
  if (uVar4 < 0x7ffffffffffffff7) {
    puVar1 = param_1;
    if (uVar4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar4;
    }
    else {
      uVar3 = 0x19;
      if ((uVar4 | 7) != 0x17) {
        uVar3 = (uVar4 | 7) + 1;
      }
      FUN_0040d754();
      param_1[1] = uVar4;
      param_1[2] = uVar3 | 0x8000000000000000;
      *param_1 = puVar1;
      param_1 = puVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)param_1 = *param_2;
      param_1 = (undefined8 *)((long)param_1 + 1);
    }
    *(undefined1 *)param_1 = 0;
    return puVar1;
  }
  FUN_0040d740();
  puVar1 = param_1;
  FUN_00469d1c();
  if (param_1 + 1 != puVar1) {
    puVar2 = param_1 + 2;
    FUN_00464134(puVar2,param_2,puVar1 + 4);
    if ((int)puVar2 == 0) {
      return puVar1;
    }
  }
  return param_1 + 1;
}



/* Entry: 00469c38; end: 00469d1b;  */

undefined8 * FUN_00469c38(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (param_4 < 0x7ffffffffffffff7) {
    puVar1 = param_1;
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
    }
    else {
      uVar3 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar3 = (param_4 | 7) + 1;
      }
      FUN_0040d754();
      param_1[1] = param_4;
      param_1[2] = uVar3 | 0x8000000000000000;
      *param_1 = puVar1;
      param_1 = puVar1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)param_1 = *param_2;
      param_1 = (undefined8 *)((long)param_1 + 1);
    }
    *(undefined1 *)param_1 = 0;
    return puVar1;
  }
  FUN_0040d740();
  puVar1 = param_1;
  FUN_00469d1c();
  if (param_1 + 1 != puVar1) {
    puVar2 = param_1 + 2;
    FUN_00464134(puVar2,param_2,puVar1 + 4);
    if ((int)puVar2 == 0) {
      return puVar1;
    }
  }
  return param_1 + 1;
}



/* Entry: 00469d1c; end: 00469d73;  */

long FUN_00469d1c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x0046d258();
  while (param_3 != 0) {
    lVar2 = param_1 + 0x10;
    FUN_00464134(lVar2,unaff_x20 + 0x20);
    lVar1 = 8;
    if ((int)lVar2 == 0) {
      lVar1 = 0;
      param_4 = unaff_x20;
    }
    unaff_x20 = *(long *)(unaff_x20 + lVar1);
    param_3 = unaff_x20;
  }
  return param_4;
}



/* Entry: 00469d74; end: 00469d7f;  */

void FUN_00469d74(long param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x20) = 1;
  for (lVar1 = 0; lVar1 != 0xd; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + 8 + lVar1) = 0;
  }
  return;
}



/* Entry: 00469d80; end: 00469dfb;  */

undefined8 * FUN_00469d80(long *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0046cd28();
  func_0x0046cb34();
  if ((*param_1 != 0) || (unaff_x20[2] != 0)) {
    *(undefined1 *)(unaff_x19 + 10) = 1;
  }
  puVar1 = unaff_x20 + 2;
  func_0x00469a4c();
  *unaff_x20 = 0;
  *(long *)(unaff_x19 + 0x60) = (long)unaff_x20 + 9;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  func_0x0046d1c4();
  func_0x0046cee8();
  func_0x0046ca74(extraout_x8);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0046ce84();
  func_0x00469024();
  func_0x0046cc64();
  if (puVar1[6] == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8_00)();
  }
  lVar2 = *(long *)(puVar1[5] + 0x20);
  if (lVar2 == 0) {
    lVar2 = *(long *)(puVar1[5] + 0x28);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == *(long *)(lVar2 + 0x28))) goto LAB_00469e78;
    func_0x0046a03c(puVar1);
  }
  else {
    if (*(long *)(lVar2 + 0x28) == *(long *)(lVar2 + 0x30)) {
LAB_00469e78:
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    FUN_00469ff0(puVar1);
  }
  return (undefined8 *)0x0;
}



/* Entry: 00469dfc; end: 00469f1f;  */

undefined8 FUN_00469dfc(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    func_0x0046c9d0();
    func_0x0046cdb0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x0046a03c(param_1);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    FUN_00469ff0(param_1);
  }
  return 0;
}



/* Entry: 00469f20; end: 00469fef;  */

void FUN_00469f20(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  char *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long lVar5;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0046cb34();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8_00;
  if (!(bool)uVar1) {
    func_0x0046cd28();
    func_0x0046d070();
    if ((bool)uVar1) {
      uVar1 = extraout_x8_01 == unaff_x19;
      if ((bool)uVar1) {
        func_0x0046cd88();
        func_0x0046d1dc();
        func_0x0046cb78();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x0046cd88(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x0046d1bc();
        func_0x0046cb88();
        func_0x0046ce38();
        func_0x0046cdcc();
        func_0x0046ccac();
        param_1 = puVar2;
      }
      else {
        func_0x0046cd88();
        func_0x0046cdcc();
        func_0x0046cb78();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = extraout_x8_01 == unaff_x19;
      if ((bool)uVar1) {
        func_0x0046ce68();
        func_0x0046cb88();
        func_0x0046d060();
      }
      else {
        *(long *)(unaff_x20 + 0x18) = extraout_x8_01;
        *(undefined1 **)(unaff_x19 + 0x18) = param_1;
      }
    }
  }
  iVar4 = (int)param_2;
  func_0x0046ca74(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (param_1[0x20] == '\x01') {
    if (*(char *)(lVar3 + 0x40) == '\x01') {
      UNRECOVERED_JUMPTABLE = *(char **)(lVar3 + 0x48);
    }
    else {
      UNRECOVERED_JUMPTABLE =
           (char *)((*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 3) + -1);
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = (char *)0x0;
  }
  *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
  lVar5 = *(long *)(lVar3 + 0x28);
  if ((code *)(*(long *)(lVar3 + 0x30) - lVar5 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x0046c9d0();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8)();
    lVar5 = *(long *)(lVar3 + 0x28);
  }
  func_0x0046d21c(lVar5);
                    /* WARNING: Could not recover jumptable at 0x0046d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 00469ff0; end: 0046a073;  */

void FUN_00469ff0(long param_1)

{
  long lVar1;
  char *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(char *)(lVar1 + 0x40) == '\x01') {
      UNRECOVERED_JUMPTABLE = *(char **)(lVar1 + 0x48);
    }
    else {
      UNRECOVERED_JUMPTABLE =
           (char *)((*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x28) >> 3) + -1);
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = (char *)0x0;
  }
  *(char **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((code *)(*(long *)(lVar1 + 0x30) - lVar2 >> 3) <= UNRECOVERED_JUMPTABLE) {
    func_0x0046c9d0();
    UNRECOVERED_JUMPTABLE =
         "external/snap_client++snap_dependencies_extension+grpccpp/include/grpcpp/impl/codegen/client_interceptor.h"
    ;
    (*extraout_x8)();
    lVar2 = *(long *)(lVar1 + 0x28);
  }
  func_0x0046d21c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0046d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046a074; end: 0046a11f;  */

undefined8 FUN_0046a074(long param_1)

{
  ulong uVar1;
  code *extraout_x8;
  long lVar2;
  int extraout_w10;
  
  FUN_0046a120(param_1 + 0x140);
  *(long *)(param_1 + 0x168) = param_1 + 0x108;
  *(long *)(param_1 + 0x170) = param_1;
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 0x148) = 1;
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_0046a128(param_1 + 0x30,param_1 + 0x140);
  if (*(char *)(param_1 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x14c) = 1;
  }
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x80);
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x90);
    *(long *)(param_1 + 0x200) = param_1 + 0xa2;
  }
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = param_1 + 0x140;
  FUN_0046a1b0();
  if ((uVar1 & 1) == 0) {
    do {
      func_0x0046cbb4();
    } while (extraout_w10 != 0);
    if (*(long *)(param_1 + 0x170) == 0) {
      func_0x0046c9d0();
      func_0x0046cdb0();
      (*extraout_x8)();
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x168) + 0x20);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x168) + 0x28);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != *(long *)(lVar2 + 0x28))) {
        func_0x0046a03c(param_1 + 0x140);
        return 0;
      }
    }
    else if (*(long *)(lVar2 + 0x28) != *(long *)(lVar2 + 0x30)) {
      FUN_00469ff0(param_1 + 0x140);
      return 0;
    }
    return 1;
  }
  return 1;
}



/* Entry: 0046a120; end: 0046a127;  */

void FUN_0046a120(long param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x20) = 0;
  for (lVar1 = 0; lVar1 != 0xd; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + 8 + lVar1) = 0;
  }
  return;
}



/* Entry: 0046a128; end: 0046a1af;  */

long * FUN_0046a128(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x0046cd28();
  func_0x0046cb34();
  uStack_28 = extraout_x8;
  if ((*param_1 != 0) || (*(long *)(unaff_x20 + 0x10) != 0)) {
    *(undefined1 *)(unaff_x19 + 9) = 1;
    param_1 = alStack_48;
    func_0x00469ecc(param_1,unaff_x20 + 0x20);
    *(long *)(unaff_x19 + 0x58) = unaff_x20 + 0x10;
    *(long *)(unaff_x19 + 0x60) = unaff_x20 + 9;
    *(long *)(unaff_x19 + 0x68) = unaff_x20;
    func_0x0046d1c4();
    func_0x0046cee8();
  }
  func_0x0046ca74(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0046ce84();
  func_0x00469024();
  func_0x0046cc64();
  lVar1 = *(long *)(param_1[5] + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1[5] + 0x28);
    if (lVar1 == 0) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    lVar2 = *(long *)(lVar1 + 0x20);
    lVar1 = *(long *)(lVar1 + 0x28);
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x28);
    lVar1 = *(long *)(lVar1 + 0x30);
  }
  return (long *)(ulong)(lVar2 == lVar1);
}



/* Entry: 0046a1b0; end: 0046a1df;  */

bool FUN_0046a1b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    if (lVar1 == 0) {
      return true;
    }
    lVar2 = *(long *)(lVar1 + 0x20);
    lVar1 = *(long *)(lVar1 + 0x28);
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x28);
    lVar1 = *(long *)(lVar1 + 0x30);
  }
  return lVar2 == lVar1;
}



/* Entry: 0046a1e0; end: 0046a293;  */

void FUN_0046a1e0(byte *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [24];
  
  if ((param_1[1] == 1) && ((*param_1 & 1) == 0)) {
    lVar3 = *param_3;
    *param_3 = lVar3 + 1;
    puVar5 = (undefined4 *)(param_2 + lVar3 * 0x50);
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar5 = 0;
    puVar5[1] = uVar1;
    *(undefined8 *)(puVar5 + 2) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    FUN_00425cb4(auStack_48,"");
    FUN_0046a430(uVar4,param_1 + 8,auStack_48);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    func_0x0046ce54();
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(param_1 + 0x18);
    bVar2 = param_1[0x20];
    *(byte *)(puVar5 + 8) = bVar2;
    if (bVar2 == 1) {
      puVar5[9] = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return;
}



/* Entry: 0046a294; end: 0046a363;  */

long * FUN_0046a294(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  code *extraout_x8;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int aiStack_68 [14];
  
  func_0x0046cba4();
  if (*param_1 == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
      return param_1;
    }
    if ((*(byte *)(unaff_x19 + 8) & 1) != 0) goto LAB_0046a308;
  }
  else {
    if (*(char *)(unaff_x19 + 8) == '\x01') {
LAB_0046a308:
      plVar2 = (long *)(unaff_x19 + 0x20);
      plVar3 = *(long **)(unaff_x19 + 0x38);
      *(undefined8 *)(unaff_x19 + 0x38) = 0;
      if (plVar3 == plVar2) {
        uVar6 = 0x20;
      }
      else {
        if (plVar3 == (long *)0x0) {
          return plVar2;
        }
        uVar6 = 0x28;
      }
      func_0x0046cc44(uVar6,plVar3,0);
      return plVar2;
    }
    func_0x00469308(aiStack_68,unaff_x19 + 0x20);
    func_0x0046cdc4();
    if (aiStack_68[0] != 0) {
      func_0x0046c9d0();
      (*extraout_x8)();
    }
  }
  plVar2 = (long *)(unaff_x19 + 0x20);
  FUN_0046a5a8(plVar2,0);
  lVar4 = *unaff_x21;
  *unaff_x21 = lVar4 + 1;
  puVar5 = (undefined4 *)(unaff_x20 + lVar4 * 0x50);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x18);
  *puVar5 = 1;
  puVar5[1] = uVar1;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = uVar6;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  return plVar2;
}



/* Entry: 0046a364; end: 0046a42f;  */

void FUN_0046a364(byte *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && ((*param_1 & 1) == 0)) {
    lVar2 = *param_3;
    *param_3 = lVar2 + 1;
    puVar3 = (undefined8 *)(param_2 + lVar2 * 0x50);
    *puVar3 = 4;
    puVar3[1] = 0;
    puVar3[2] = lVar1 + 8;
  }
  return;
}



/* Entry: 0046a430; end: 0046a573;  */

long * FUN_0046a430(long param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long in_register_00005008;
  long in_register_00005028;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x0046cb34();
  lVar5 = param_3[2];
  uVar1 = param_5[1];
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
  }
  uVar3 = uVar1 == 0;
  if (!(bool)uVar3) {
    lVar5 = lVar5 + 1;
  }
  *param_4 = lVar5;
  uStack_48 = extraout_x8;
  if (lVar5 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = plRam0000000000b65da0;
    (**(code **)(*plRam0000000000b65da0 + 0x50))(plRam0000000000b65da0,lVar5 * 0x60);
    plVar7 = (long *)*param_3;
    plVar4 = plVar6;
    plVar8 = plVar6 + 4;
    while (plVar7 != param_3 + 1) {
      FUN_0046a574(auStack_68,plVar7 + 4);
      func_0x0046d0b4();
      plVar8[-3] = in_register_00005008;
      plVar8[-4] = param_1;
      plVar8[-1] = in_register_00005028;
      plVar8[-2] = param_2;
      FUN_0046a574(auStack_68,plVar7 + 7);
      func_0x0046d0b4();
      plVar8[1] = in_register_00005008;
      *plVar8 = param_1;
      plVar8[3] = in_register_00005028;
      plVar8[2] = param_2;
      FUN_004668e4();
      plVar4 = plVar7;
      plVar8 = plVar8 + 0xc;
    }
    bVar2 = *(byte *)((long)param_5 + 0x17);
    uVar3 = bVar2 == 0;
    uVar1 = param_5[1];
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    param_3 = plVar4;
    if (uVar1 != 0) {
      (**(code **)(*plRam0000000000b65da0 + 400))
                (auStack_68,plRam0000000000b65da0,&UNK_00802269,0x17);
      func_0x0046d0b4();
      plVar8[-3] = in_register_00005008;
      plVar8[-4] = param_1;
      plVar8[-1] = in_register_00005028;
      plVar8[-2] = param_2;
      FUN_0046a574(auStack_68);
      func_0x0046d0b4();
      plVar8[1] = in_register_00005008;
      *plVar8 = param_1;
      plVar8[3] = in_register_00005028;
      plVar8[2] = param_2;
      param_3 = param_5;
    }
  }
  func_0x0046ca74(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    uVar1 = param_3[1];
    plVar6 = (long *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      plVar6 = param_3;
    }
    plVar4 = plRam0000000000b65da0;
                    /* WARNING: Could not recover jumptable at 0x0046a5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000000b65da0 + 400))(plRam0000000000b65da0,plVar6,uVar1);
    return plVar4;
  }
  return plVar6;
}



/* Entry: 0046a574; end: 0046a5a7;  */

void FUN_0046a574(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0046a5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plRam0000000000b65da0 + 400))(plRam0000000000b65da0,puVar2,uVar1);
  return;
}



/* Entry: 0046a5a8; end: 0046a5e7;  */

long FUN_0046a5a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 == param_1) {
    uVar2 = 0x20;
  }
  else {
    if (lVar1 == 0) {
      return param_1;
    }
    uVar2 = 0x28;
  }
  func_0x0046cc44(uVar2);
  return param_1;
}



/* Entry: 0046a5e8; end: 0046a64b;  */

void FUN_0046a5e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x9;
  long unaff_x20;
  byte bStack_21;
  
  func_0x0046d210();
  *(int *)(param_1 + 0x18) = (int)param_3;
  *(char *)(param_1 + 0x1c) = (char)((ulong)param_3 >> 0x20);
  FUN_0046a64c(extraout_x9,param_1 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x0046a698(unaff_x20 + 0x10);
  }
  return;
}



/* Entry: 0046a64c; end: 0046a70b;  */

undefined4 *
FUN_0046a64c(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4)

{
  long extraout_x8;
  
  func_0x0046a6c8(param_3,param_2);
  *param_4 = 1;
  func_0x0046ca88();
  (**(code **)(extraout_x8 + 0x1b0))();
  *param_1 = *param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_3 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 8,param_3 + 8);
  return param_1;
}



/* Entry: 0046a70c; end: 0046a713;  */

void FUN_0046a70c(void)

{
  return;
}



/* Entry: 0046a714; end: 0046a737;  */

void FUN_0046a714(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e6850;
  return;
}



/* Entry: 0046a738; end: 0046a75f;  */

void FUN_0046a738(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009e6850;
  return;
}



/* Entry: 0046a760; end: 0046a797;  */

long FUN_0046a760(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_009e68c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0046a798; end: 0046a7e7;  */

undefined ** FUN_0046a798(void)

{
  return &PTR_DAT_009e68c0;
}



/* Entry: 0046a7e8; end: 0046a82f;  */

bool FUN_0046a7e8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar1 == uVar2) {
    return true;
  }
  if (-1 < (long)(uVar2 & uVar1)) {
    return false;
  }
  uVar1 = uVar1 & 0x7fffffffffffffff;
  _strcmp(uVar1,uVar2 & 0x7fffffffffffffff);
  return (int)uVar1 == 0;
}



/* Entry: 0046a830; end: 0046a8ff;  */

void FUN_0046a830(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  iVar2 = (int)param_2;
  func_0x0046cb34();
  uVar1 = CONCAT44(uVar3,iVar2) == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x0046cd28();
    func_0x0046d070();
    if ((bool)uVar1) {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        func_0x0046cd88();
        func_0x0046d1dc();
        func_0x0046cb78();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x0046cd88(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x0046d1bc();
        func_0x0046cb88();
        func_0x0046ce38();
        func_0x0046cdcc(auStack_40);
        func_0x0046ccac();
      }
      else {
        func_0x0046cd88();
        func_0x0046cdcc();
        func_0x0046cb78();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar1 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar1) {
        func_0x0046ce68();
        func_0x0046cb88();
        func_0x0046d060();
      }
      else {
        *(long *)(unaff_x20 + 0x18) = extraout_x8_00;
        *(long *)(unaff_x19 + 0x18) = param_1;
      }
    }
  }
  func_0x0046ca74(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  return;
}



/* Entry: 0046a900; end: 0046a907;  */

void FUN_0046a900(void)

{
  return;
}



/* Entry: 0046a908; end: 0046a92b;  */

void FUN_0046a908(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e68e0;
  return;
}



/* Entry: 0046a92c; end: 0046a953;  */

void FUN_0046a92c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_009e68e0;
  return;
}



/* Entry: 0046a954; end: 0046a98b;  */

long FUN_0046a954(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_009e6a68);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 0046a98c; end: 0046a9c3;  */

undefined ** FUN_0046a98c(void)

{
  return &PTR_DAT_009e6a68;
}



/* Entry: 0046a9c4; end: 0046aa8f;  */

void FUN_0046a9c4(long *param_1,undefined1 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long *param_6,long param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  iVar1 = (int)param_4;
  if (iVar1 == 0) {
    *(long *)(param_5 + 0xf8) = param_9;
    *param_2 = 1;
    *(undefined1 **)(param_5 + 0x78) = param_2 + 0xd0;
    *(long *)(param_5 + 0x88) = param_7;
    *(undefined1 *)(param_5 + 0x98) = 1;
    param_1 = (long *)(param_5 + 0xa0);
  }
  else {
    func_0x0046cb14();
    (**(code **)(*param_1 + 0x130))();
    func_0x0046aae8();
    *param_6 = (long)param_1;
    param_1[0x10] = param_9;
    param_1[2] = param_7;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1 = param_1 + 5;
  }
  func_0x0046d0fc(param_1,param_2);
  func_0x0046ce5c(*param_3);
                    /* WARNING: Could not recover jumptable at 0x0046aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)CONCAT44(uVar2,iVar1))();
  return;
}



/* Entry: 0046aa90; end: 0046ab1b;  */

void FUN_0046aa90(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 )

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x0046cb00();
  *(long *)(param_3 + 8) = param_4;
  *(long *)(param_3 + 0x10) = param_4 + 0x108;
  *(undefined8 *)(param_3 + 0x18) = param_5;
  uStack_28 = extraout_x8;
  func_0x0046ca88();
  (**(code **)(extraout_x8_00 + 0x140))(auStack_48);
  func_0x0046d0b4();
  *(undefined8 *)(unaff_x19 + 0x38) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  *(undefined8 *)(unaff_x19 + 0x48) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x40) = param_2;
  func_0x0046ca74(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0046d2c0();
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1f) = 0;
  *(undefined1 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  FUN_0046cf04(&UNK_009e6950);
  return;
}



/* Entry: 0046ab1c; end: 0046ab1f;  */

long FUN_0046ab1c(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  FUN_0046cf40(&UNK_009e6950);
  *unaff_x20 = extraout_x8;
  func_0x00468fe8(lVar1 + 0xc0);
  FUN_00468b24(unaff_x20 + 3);
  return param_1;
}



/* Entry: 0046ab20; end: 0046ab33;  */

void FUN_0046ab20(void)

{
  FUN_0046acc0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0046ab34; end: 0046abab;  */

void FUN_0046ab34(long param_1)

{
  long unaff_x19;
  undefined1 *unaff_x21;
  
  func_0x0046cba4();
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_004696c4(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x0046d2e4();
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x1a0);
  }
  else {
    func_0x0046d14c(unaff_x19 + 8);
    func_0x0046d154(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x1a0) = *unaff_x21;
    func_0x0046acfc();
    if ((int)unaff_x19 == 0) {
      return;
    }
    func_0x0046d2e4();
  }
  func_0x0046cb14();
  func_0x0046cbdc();
  return;
}



/* Entry: 0046abac; end: 0046abe7;  */

void FUN_0046abac(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x0046cc6c();
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0xb8) = 0;
  func_0x0046ca9c();
  func_0x0046cfb0();
  func_0x0046d230();
  func_0x0046ad44();
  if (iVar1 != 0) {
    func_0x0046cc88();
                    /* WARNING: Could not recover jumptable at 0x0046cdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 0046abe8; end: 0046ac1f;  */

undefined8 FUN_0046abe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 0046ac20; end: 0046ac7f;  */

void FUN_0046ac20(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x0046ca4c();
  func_0x0046a3a0();
  lVar2 = unaff_x19 + 0x28;
  func_0x0046cd70();
  func_0x0046a3dc();
  func_0x0046cd60();
  func_0x0046cb64();
  func_0x0046cab8();
  if ((int)lVar2 != 0) {
    func_0x0046c9e8();
  }
  func_0x0046ca74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 0xb8) = 1;
  func_0x0046cc78();
  iVar1 = (int)lVar2;
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046ac80; end: 0046acbf;  */

void FUN_0046ac80(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  func_0x0046cc78();
  func_0x0046cbe8();
  func_0x0046ca0c();
  if (iVar1 == 0) {
    return;
  }
  func_0x0046cadc();
                    /* WARNING: Could not recover jumptable at 0x0046cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 0046acc0; end: 0046adaf;  */

long FUN_0046acc0(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  
  lVar1 = param_1;
  FUN_0046cf40(&UNK_009e6950);
  *unaff_x20 = extraout_x8;
  func_0x00468fe8(lVar1 + 0xc0);
  FUN_00468b24(unaff_x20 + 3);
  return param_1;
}



/* Entry: 0046adb0; end: 0046ae7f;  */

void FUN_0046adb0(undefined1 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  iVar4 = (int)param_2;
  puVar3 = auStack_40;
  func_0x0046cb34();
  uVar2 = (undefined1 *)CONCAT44(uVar5,iVar4) == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar2) {
    func_0x0046cd28();
    func_0x0046d070();
    if ((bool)uVar2) {
      uVar2 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar2) {
        func_0x0046cd88();
        func_0x0046d1dc();
        func_0x0046cb78();
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        func_0x0046cd88(*(undefined8 *)(unaff_x19 + 0x18));
        func_0x0046d1bc();
        func_0x0046cb88();
        func_0x0046ce38();
        func_0x0046cdcc();
        func_0x0046ccac();
        param_1 = puVar3;
      }
      else {
        func_0x0046cd88();
        func_0x0046cdcc();
        func_0x0046cb78();
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      }
      *(long *)(unaff_x19 + 0x18) = unaff_x19;
    }
    else {
      uVar2 = extraout_x8_00 == unaff_x19;
      if ((bool)uVar2) {
        func_0x0046ce68();
        func_0x0046cb88();
        func_0x0046d060();
      }
      else {
        *(long *)(unaff_x20 + 0x18) = extraout_x8_00;
        *(undefined1 **)(unaff_x19 + 0x18) = param_1;
      }
    }
  }
  func_0x0046ca74(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  lVar1 = CONCAT44(uVar5,iVar4);
  puVar3 = param_1 + 0xb8;
  FUN_0046aeb4();
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *(undefined1 *)(lVar1 + 1) = 1;
  *(int *)(lVar1 + 4) = (int)param_1;
  *(undefined1 **)(lVar1 + 0x10) = puVar3;
  return;
}



/* Entry: 0046ae80; end: 0046aeb3;  */

void FUN_0046ae80(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_1;
  FUN_0046aeb4();
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(long *)(param_2 + 0x10) = param_1 + 0xb8;
  return;
}



/* Entry: 0046aeb4; end: 0046aecf;  */

uint FUN_0046aeb4(long param_1)

{
  return (uint)*(byte *)(param_1 + 1) << 5 | (uint)*(byte *)(param_1 + 2) << 7 |
         (uint)*(byte *)(param_1 + 0x150) << 8;
}



/* Entry: 0046aed0; end: 0046af5b;  */

void FUN_0046aed0(void)

{
  code *extraout_x8;
  code *extraout_x9;
  
  func_0x0046cd48();
  (*extraout_x9)();
  func_0x0046cb14();
  func_0x0046d080();
  (*extraout_x8)();
  func_0x0046d0cc();
  FUN_0046af88();
  return;
}



/* Entry: 0046af5c; end: 0046af87;  */

void FUN_0046af5c(undefined8 param_1)

{
  code *extraout_x8;
  
  func_0x0046c9d0();
  func_0x0046cca0(param_1,"false");
  (*extraout_x8)();
  return;
}



/* Entry: 0046af88; end: 0046b0db;  */

undefined8 *
FUN_0046af88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            int param_5,long param_6)

{
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_78 [14];
  
  *param_1 = &PTR_DAT_009e6a88;
  param_1[1] = &PTR_FUN_009e6ac8;
  param_1[2] = param_3;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  param_1[8] = param_2[5];
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(char *)(param_1 + 9) = (char)param_5;
  FUN_0046b308(param_1 + 10);
  func_0x0046b5d8(param_1 + 0x3f);
  func_0x0046b83c(param_1 + 0x68);
  func_0x0046bafc(param_1 + 0x95);
  FUN_004687a0(aiStack_78,param_1 + 0x10,param_4);
  func_0x0046cdc4();
  if (aiStack_78[0] != 0) {
    func_0x0046cc50(uRam0000000000b65da0);
    func_0x0046cca0();
    (*extraout_x8)();
  }
  *(undefined1 *)((long)param_1 + 0xc1) = 1;
  if (param_5 == 0) {
    if (param_6 != 0) {
      func_0x0046cc50(uRam0000000000b65da0);
      func_0x0046cca0();
      (*extraout_x8_00)();
    }
  }
  else {
    func_0x0046cd9c();
    FUN_0046b0dc();
  }
  return param_1;
}



/* Entry: 0046b0dc; end: 0046b137;  */

void FUN_0046b0dc(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar3;
  
  func_0x0046cd28();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  FUN_0046aeb4();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x59) = 1;
  *(int *)(unaff_x20 + 0x5c) = (int)lVar1;
  *(long *)(unaff_x20 + 0x68) = lVar3 + 0xb8;
  *(undefined8 *)(unaff_x20 + 0xd0) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0046cbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,unaff_x20 + 0x50,(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 0046b138; end: 0046b14f;  */

undefined8 * FUN_0046b138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e6df8;
  func_0x00468fe8(param_1 + 0x16);
  return param_1;
}


