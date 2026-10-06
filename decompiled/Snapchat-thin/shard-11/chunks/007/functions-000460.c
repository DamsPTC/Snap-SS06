/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108842b98; end: 108842bf7;  */

void FUN_108842b98(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lStack_40;
  long lStack_38;
  
  lStack_40 = param_5;
  lStack_38 = param_6;
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    FUN_108842bf8(&lStack_40,param_3);
  }
  *param_1 = param_3;
  param_1[2] = lStack_38;
  param_1[1] = lStack_40;
  return;
}



/* Entry: 108842bf8; end: 108842c2b;  */

undefined8 * FUN_108842bf8(undefined8 *param_1)

{
  func_0x000107c28084(*param_1);
  if (param_1[1] != 0) {
    func_0x00010549023c(*param_1);
  }
  return param_1;
}



/* Entry: 108842c2c; end: 108842ca7;  */

void FUN_108842c2c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,undefined8 param_8,
                  undefined8 param_9,byte *param_10,byte *param_11,byte *param_12)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = *param_7;
  bVar2 = *param_10;
  bVar3 = *param_11;
  bVar4 = *param_12;
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = &UNK_100697a48;
  param_1[4] = param_4;
  param_1[5] = FUN_108842ca8;
  param_1[6] = param_5;
  param_1[7] = FUN_108842cfc;
  param_1[8] = param_6;
  param_1[9] = &UNK_1059871fc;
  param_1[10] = (ulong)uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = param_8;
  param_1[0xd] = FUN_108842d6c;
  param_1[0xe] = param_9;
  param_1[0xf] = FUN_108842ddc;
  param_1[0x10] = (ulong)bVar2;
  param_1[0x11] = 0;
  param_1[0x12] = (ulong)bVar3;
  param_1[0x13] = 0;
  param_1[0x14] = (ulong)bVar4;
  param_1[0x15] = 0;
  return;
}



/* Entry: 108842ca8; end: 108842cfb;  */

void FUN_108842ca8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108843748();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108842cfc; end: 108842d4f;  */

void FUN_108842cfc(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108843880();
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000108843764(FUN_108842d50);
    func_0x000108843774();
  }
  else {
    func_0x000108843738();
  }
  func_0x000108843724();
  func_0x0001088437b0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108842d50; end: 108842d6b;  */

void FUN_108842d50(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108843748();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108842d6c; end: 108842dbf;  */

void FUN_108842d6c(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108843880();
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000108843764(FUN_108842dc0);
    func_0x000108843774();
  }
  else {
    func_0x000108843738();
  }
  func_0x000108843724();
  func_0x0001088437b0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108842dc0; end: 108842ddb;  */

void FUN_108842dc0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108843748();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108842ddc; end: 108842e2f;  */

void FUN_108842ddc(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108843880();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000108843764(FUN_108842e30);
    func_0x000108843774();
  }
  else {
    func_0x000108843738();
  }
  func_0x000108843724();
  func_0x0001088437b0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108842e30; end: 108842f6f;  */

void FUN_108842e30(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108843748();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108842f70; end: 108842f87;  */

ulong * FUN_108842f70(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 108842f88; end: 108842fdb;  */

void FUN_108842f88(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108843880();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000108843764(0x108842e4c);
    func_0x000108843774();
  }
  else {
    func_0x000108843738();
  }
  func_0x000108843724();
  func_0x0001088437b0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108842fdc; end: 10884305f;  */

void FUN_108842fdc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  func_0x0001088437a0();
  func_0x000107c28268();
  *param_3 = uVar1;
  return;
}



/* Entry: 108843060; end: 1088430b3;  */

void FUN_108843060(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108843880();
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000108843764(FUN_1088430b4);
    func_0x000108843774();
  }
  else {
    func_0x000108843738();
  }
  func_0x000108843724();
  func_0x0001088437b0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1088430b4; end: 108843113;  */

void FUN_1088430b4(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000108843880();
  lStack_30 = param_1 + 0x18;
  uStack_38 = 0x108842e4c;
  uStack_28 = 0x108842e4c;
  lStack_40 = param_1;
  func_0x000107c2793c(&UNK_10f4bdb41);
  func_0x000107c3173c(auStack_58);
  func_0x000108843724();
  func_0x0001088437b0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 108843114; end: 108843153;  */

void FUN_108843114(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = FUN_108842fdc;
  param_1[2] = param_3;
  param_1[3] = FUN_108842f88;
  param_1[4] = param_4;
  param_1[5] = FUN_108843060;
  param_1[6] = param_5;
  param_1[7] = FUN_108843154;
  param_1[8] = param_6;
  param_1[9] = FUN_1088431e8;
  return;
}



/* Entry: 108843154; end: 1088431a7;  */

void FUN_108843154(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108843880();
  if (*(char *)(param_1 + 4) == '\x01') {
    func_0x000108843764(FUN_1088431a8);
    func_0x000108843774();
  }
  else {
    func_0x000108843738();
  }
  func_0x000108843724();
  func_0x0001088437b0();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1088431a8; end: 1088431e7;  */

void FUN_1088431a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  func_0x0001088437a0();
  func_0x000107c28268();
  *param_3 = uVar1;
  return;
}



/* Entry: 1088431e8; end: 1088432db;  */

void FUN_1088431e8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [256];
  long lStack_50;
  code *pcStack_48;
  
  func_0x000105680760(auStack_168);
  plVar2 = (long *)(param_1 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lStack_50 = (long)(plVar2 + 2);
    pcStack_48 = FUN_1088432dc;
    func_0x000107c2793c(&UNK_10f3176d2);
    func_0x000107c3173c(auStack_180);
    func_0x000107c28084(auStack_158,auStack_180);
    func_0x0001088437f4();
  }
  uVar1 = *param_3;
  func_0x000105491b64(auStack_180,auStack_150);
  func_0x00010596eb90(uVar1,&UNK_10f315a70,auStack_180);
  func_0x0001088437f4();
  func_0x000105673d7c(auStack_168);
  *param_3 = uVar1;
  return;
}



/* Entry: 1088432dc; end: 10884332b;  */

void FUN_1088432dc(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108843880();
  func_0x000107c2793c(&UNK_10f3176d6);
  func_0x000108843804();
  func_0x000107c28264();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10884332c; end: 10884348b;  */

long FUN_10884332c(long *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char **ppcVar10;
  char *pcVar11;
  char *pcVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  char *pcStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  long *plStack_70;
  
  ppcVar10 = &pcStack_80;
  plVar7 = param_1;
  pcVar11 = param_3;
  func_0x000108843990();
  pcStack_80 = param_2;
  FUN_10884348c();
  iVar5 = (int)plVar7;
  if (iVar5 == 0x7b) {
    func_0x000108843790();
  }
  lVar15 = 0;
  bVar2 = 0;
  plVar9 = plVar7;
  do {
    uVar14 = (uint)lVar15;
    cVar13 = (char)plVar9;
    if (uVar14 == 4) {
      if (((uint)plVar9 & 0xff) == 0x2d) {
LAB_1088433ec:
        cVar13 = (char)plVar7;
        func_0x000108843790();
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar4 = (uVar14 & 0x7ffffffd) != 8;
      bVar1 = (uVar14 != 6 && bVar4) & bVar2;
      if ((uVar14 == 6 || !bVar4) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar9 & 0xff) == 0x2d) goto LAB_1088433ec;
        goto LAB_108843480;
      }
    }
    bVar2 = bVar1;
    plVar8 = param_1;
    func_0x000107c29dfc(param_1,(int)cVar13);
    plVar9 = plVar8;
    func_0x000108843790();
    plVar7 = param_1;
    ppcVar10 = (char **)plVar9;
    func_0x000107c29dfc();
    *(byte *)((long)&lStack_78 + lVar15) = (byte)plVar7 | (byte)((int)plVar8 << 4);
    lVar15 = lVar15 + 1;
    if (lVar15 != 0) {
      iVar6 = (int)plVar7;
      if (lVar15 == 0x10) {
        if (((iVar5 == 0x7b) && (func_0x000108843790(), iVar6 != 0x7d)) ||
           (bVar4 = pcStack_80 == param_3, !bVar4)) {
LAB_108843480:
          FUN_1088434b4(param_1);
        }
        else {
          func_0x0001088438dc(lStack_78);
          ppcVar10 = (char **)plStack_70;
          if (bVar4) {
            return lStack_78;
          }
        }
        ___stack_chk_fail();
        pcVar12 = *ppcVar10;
        if (pcVar12 == pcVar11) {
          pcStack_88 = FUN_10884348c;
          puStack_90 = &stack0xfffffffffffffff0;
          FUN_1088434b4();
          pcStack_98 = FUN_1088434b4;
          pcStack_b0 = param_3;
          plStack_a8 = param_1;
          puStack_a0 = (undefined1 *)&puStack_90;
          __ZNSt13runtime_errorC1EPKc(auStack_c0,&UNK_10f4bde09);
          puStack_d8 = &UNK_10f4bde1d;
          puStack_d0 = &UNK_10f4bde79;
          uStack_c8 = 0xc0;
          FUN_108843514(auStack_c0,&puStack_d8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x108843504);
          (*pcVar3)();
        }
        *ppcVar10 = pcVar12 + 1;
        return (long)*pcVar12;
      }
      func_0x000108843790();
      plVar9 = plVar7;
    }
  } while( true );
}



/* Entry: 10884348c; end: 1088434b3;  */

long FUN_10884348c(undefined8 param_1,long *param_2,char *param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 != param_3) {
    *param_2 = (long)(pcVar2 + 1);
    return (long)*pcVar2;
  }
  FUN_1088434b4();
  __ZNSt13runtime_errorC1EPKc(auStack_40,&UNK_10f4bde09);
  puStack_58 = &UNK_10f4bde1d;
  puStack_50 = &UNK_10f4bde79;
  uStack_48 = 0xc0;
  FUN_108843514(auStack_40,&puStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108843504);
  (*pcVar1)();
}



/* Entry: 1088434b4; end: 108843513;  */

void FUN_1088434b4(void)

{
  code *pcVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  __ZNSt13runtime_errorC1EPKc(auStack_30,&UNK_10f4bde09);
  puStack_48 = &UNK_10f4bde1d;
  puStack_40 = &UNK_10f4bde79;
  uStack_38 = 0xc0;
  FUN_108843514(auStack_30,&puStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108843504);
  (*pcVar1)();
}



/* Entry: 108843514; end: 10884354f;  */

undefined8 * FUN_108843514(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)0x40;
  ___cxa_allocate_exception();
  FUN_108843550();
  func_0x000108843824();
  func_0x000108843910();
  func_0x000108843814();
  *puVar1 = &PTR____cxa_pure_virtual_1108775d8;
  __ZNSt13runtime_errorC2ERKS_(puVar1 + 1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  func_0x000108843968();
  *puVar1 = extraout_x9;
  puVar1[1] = extraout_x10;
  puVar1[3] = extraout_x8 + 0x68;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)param_2[1];
  auVar2 = NEON_ext(*param_2,*param_2,8,1);
  puVar1[6] = auVar2._8_8_;
  puVar1[5] = auVar2._0_8_;
  return puVar1;
}



/* Entry: 108843550; end: 108843557;  */

undefined8 * FUN_108843550(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 auVar1 [16];
  
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x000108843968();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[3] = extraout_x8 + 0x68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_3[1];
  auVar1 = NEON_ext(*param_3,*param_3,8,1);
  param_1[6] = auVar1._8_8_;
  param_1[5] = auVar1._0_8_;
  return param_1;
}



/* Entry: 108843558; end: 1088435b3;  */

undefined8 * FUN_108843558(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 auVar1 [16];
  
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x000108843968();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[3] = extraout_x8 + 0x68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_3[1];
  auVar1 = NEON_ext(*param_3,*param_3,8,1);
  param_1[6] = auVar1._8_8_;
  param_1[5] = auVar1._0_8_;
  return param_1;
}



/* Entry: 1088435b4; end: 108843617;  */

long FUN_1088435b4(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm(0x40);
  FUN_108843680();
  func_0x00010530126c(lVar1 + 0x18,param_1 + 0x18);
  return lVar1;
}



/* Entry: 108843618; end: 108843647;  */

void FUN_108843618(void)

{
  ___cxa_allocate_exception(0x40);
  func_0x00010884367c();
  func_0x000108843824();
  func_0x000108843910();
  func_0x000108843814();
  FUN_1088436f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108843648; end: 10884365b;  */

void FUN_108843648(void)

{
  FUN_1088436f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884365c; end: 10884367f;  */

long FUN_10884365c(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt13runtime_errorD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 108843680; end: 1088436f7;  */

undefined8 * FUN_108843680(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1,param_2 + 8);
  func_0x000105301370(param_1 + 3,param_2 + 0x18);
  func_0x000108843968();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[3] = extraout_x8 + 0x68;
  return param_1;
}



/* Entry: 1088436f8; end: 108843723;  */

long FUN_1088436f8(long param_1)

{
  func_0x0001053010fc(param_1 + 0x18);
  __ZNSt13runtime_errorD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 108843724; end: 1088439af;  */

void FUN_108843724(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000008;
  func_0x000100698fb0();
  func_0x0001005d466c(puVar1);
  func_0x000100698fbc();
  func_0x000100698fc8();
  return;
}



/* Entry: 1088439b0; end: 1088439ff;  */

void FUN_1088439b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c33f7c();
  func_0x000107c29edc(auStack_38,param_2);
  FUN_108843a00(param_1,auStack_38);
  func_0x000108843b14();
  return;
}



/* Entry: 108843a00; end: 108843a83;  */

void FUN_108843a00(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_38 [2];
  undefined8 uStack_28;
  
  plVar5 = param_2;
  func_0x000107c33f74();
  plVar6 = *(long **)((long)plVar5 + 8);
  if (-1 < (char)*(byte *)((long)plVar5 + 0x17)) {
    plVar6 = (long *)(ulong)*(byte *)((long)plVar5 + 0x17);
  }
  uStack_28 = extraout_x8;
  func_0x000107c29ed4();
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar3 = bVar2 == 0;
  uVar1 = param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 != 0) {
    uVar3 = bVar2 == 0;
    plVar5 = (long *)*param_2;
    if (-1 < (char)bVar2) {
      plVar5 = param_2;
    }
    plVar6 = alStack_38;
    _memmove(plVar6,plVar5);
  }
  func_0x000107c33f78();
  func_0x000107c33f6c(uStack_28);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_48 = FUN_108843a84;
    bVar4 = plVar6[1] - *plVar6 != 0x10;
    if (bVar4) {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    else {
      plStack_60 = param_2;
      uStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000107c29e04(&uStack_78);
      extraout_x8_00[1] = uStack_70;
      *extraout_x8_00 = uStack_78;
      extraout_x8_00[2] = uStack_68;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      func_0x000108843b14();
    }
    *(bool *)(extraout_x8_00 + 3) = !bVar4;
  }
  return;
}



/* Entry: 108843a84; end: 108843ae7;  */

void FUN_108843a84(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  bVar1 = param_2[1] - *param_2 != 0x10;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    func_0x000107c29e04(&uStack_38);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    func_0x000108843b14();
  }
  *(bool *)(param_1 + 3) = !bVar1;
  return;
}



/* Entry: 108843ae8; end: 108843b1b;  */

undefined * FUN_108843ae8(int *param_1)

{
  if (*param_1 - 1U < 0xc) {
    return (&PTR_DAT_110a7a818)[*param_1 - 1U];
  }
  return &UNK_10f4bdeb4;
}



/* Entry: 108843b1c; end: 108843b73;  */

void FUN_108843b1c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = 0;
  uVar5 = 0;
  do {
    if (2 < uVar5) break;
    FUN_108843b74();
    uVar5 = uVar5 + 1;
  } while (lVar2 == 0);
  puVar1 = PTR___tlv_bootstrap_11340e248;
  if ((lVar2 == 0) && (2 < uVar5)) {
    ppuVar4 = &PTR___tlv_bootstrap_11340e248;
    ppuVar3 = ppuVar4;
    (*(code *)PTR___tlv_bootstrap_11340e248)();
    if (((ulong)*ppuVar3 & 1) == 0) {
      func_0x000107c2a878(&uStack_50);
      __ZNSt3__113random_deviceclEv(&uStack_50);
      func_0x00010bcce454();
      func_0x000107c2a880();
      __ZNSt3__113random_deviceD1Ev(&uStack_50);
      (*(code *)puVar1)();
      *(undefined1 *)ppuVar4 = 1;
      ppuVar3 = ppuVar4;
    }
    uStack_50 = 1;
    uStack_48 = 0x7fffffffffffffff;
    func_0x00010bcce454();
    func_0x00010bcce324(&uStack_50,ppuVar3);
    return;
  }
  return;
}



/* Entry: 108843b74; end: 108843b9b;  */

undefined8 FUN_108843b74(void)

{
  undefined8 uStack_18;
  
  func_0x000107c2b3b8(&uStack_18,8);
  return uStack_18;
}



/* Entry: 108843b9c; end: 108843ba3;  */

void FUN_108843b9c(void)

{
  return;
}



/* Entry: 108843ba4; end: 108843d3b;  */

long FUN_108843ba4(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined4 in_stack_00000028;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_70 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_108848684(auStack_98);
  uStack_b8 = param_4[1];
  uStack_c0 = *param_4;
  uStack_b0 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uStack_a8 = *(undefined4 *)(param_4 + 3);
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3f800000;
  func_0x000107c29e90();
  FUN_10863693c(param_1,&uStack_80,auStack_98,param_3,&uStack_c0,auStack_e0,param_5,0,0,&uStack_110,
                1);
  FUN_108636b54(&uStack_110);
  func_0x000107c279c4(auStack_e0);
  func_0x000107c27914(&uStack_c0);
  func_0x000107c27914(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
  *(undefined1 *)(param_1 + 0x120) = 1;
  FUN_108781a74(param_1 + 0x128,param_6);
  *(undefined4 *)(param_1 + 0x158) = in_stack_00000028;
  return param_1;
}



/* Entry: 108843d3c; end: 108843dc3;  */

void FUN_108843d3c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  double dStack_48;
  
  if (*(char *)(param_3 + 1) == '\x01') {
    uVar1 = *param_3;
    if (*(char *)(param_1 + 0x120) != '\x01') {
      return;
    }
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x88) = param_2;
    *(undefined4 *)(param_1 + 0xb8) = 1;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x158);
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    *(undefined1 *)(param_1 + 200) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x120) != '\x01') {
      return;
    }
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x88) = param_2;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    if (*(char *)(param_1 + 200) == '\x01') {
      *(undefined1 *)(param_1 + 200) = 0;
    }
  }
  FUN_10875e624(param_1 + 0x128,param_1 + 0x158);
  lVar3 = *(long *)(param_1 + 0x88);
  lVar2 = param_1 + 0x128;
  FUN_108843ecc();
  *(long *)(param_1 + 0x80) = (long)((double)lVar3 + (double)lVar2 / -1000000.0);
  lVar3 = *(long *)(param_1 + 0x130);
  for (lVar2 = *(long *)(param_1 + 0x128); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    dStack_48 = (double)*(long *)(lVar2 + 8) / 1000000.0;
    FUN_108843ef4(param_1 + 0x90,lVar2,&dStack_48);
  }
  return;
}



/* Entry: 108843dc4; end: 108843e6b;  */

void FUN_108843dc4(long param_1)

{
  long lVar1;
  long lVar2;
  double dStack_48;
  
  FUN_10875e624(param_1 + 0x128,param_1 + 0x158);
  lVar2 = *(long *)(param_1 + 0x88);
  lVar1 = param_1 + 0x128;
  FUN_108843ecc();
  *(long *)(param_1 + 0x80) = (long)((double)lVar2 + (double)lVar1 / -1000000.0);
  lVar2 = *(long *)(param_1 + 0x130);
  for (lVar1 = *(long *)(param_1 + 0x128); lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    dStack_48 = (double)*(long *)(lVar1 + 8) / 1000000.0;
    FUN_108843ef4(param_1 + 0x90,lVar1,&dStack_48);
  }
  return;
}



/* Entry: 108843e6c; end: 108843eaf;  */

void FUN_108843e6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c29ed8(auStack_38,param_2);
  FUN_108843eb0(param_1,auStack_38);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 108843eb0; end: 108843ecb;  */

void FUN_108843eb0(long param_1)

{
  FUN_1086554b0(param_1 + 0x58);
  return;
}



/* Entry: 108843ecc; end: 108843ef3;  */

long FUN_108843ecc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  for (lVar2 = *param_1; lVar2 != param_1[1]; lVar2 = lVar2 + 0x10) {
    lVar1 = *(long *)(lVar2 + 8) + lVar1;
  }
  return lVar1;
}



/* Entry: 108843ef4; end: 108843f2b;  */

void FUN_108843ef4(void)

{
  func_0x000108843f0c();
  return;
}



/* Entry: 108843f2c; end: 108844153;  */

undefined1  [16] FUN_108843f2c(long *param_1,int *param_2,undefined4 *param_3,double *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  double dVar12;
  undefined1 auVar13 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar11 = (ulong)*param_2;
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar5 = uVar10 - 1;
    if ((uVar10 & uVar5) == 0) {
      unaff_x23 = uVar5 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar7 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_108843fdc;
          uVar7 = plVar9[1];
          if (uVar7 != uVar11) break;
          if ((int)plVar9[2] == *param_2) {
            uVar4 = 0;
            goto LAB_108844120;
          }
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          uVar3 = 0;
          if (uVar10 != 0) {
            uVar3 = uVar7 / uVar10;
          }
          uVar7 = uVar7 - uVar3 * uVar10;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_108843fdc:
  uVar2 = *param_3;
  dVar12 = *param_4;
  plVar1 = param_1 + 2;
  plVar9 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined4 *)(plVar9 + 2) = uVar2;
  plVar9[3] = (long)dVar12;
  plStack_68 = plVar9;
  plStack_60 = plVar1;
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    FUN_108636be8(param_1,uVar5);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x23 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar5 * uVar10;
      }
    }
  }
  plVar9 = plStack_68;
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar6 + unaff_x23 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar11 = *(ulong *)(*plStack_68 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar5 * uVar10;
      }
      *(long **)(lVar6 + uVar11 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar8;
    *plVar8 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108636de4(&plStack_68);
  uVar4 = 1;
LAB_108844120:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar9;
  return auVar13;
}



/* Entry: 108844154; end: 1088441fb;  */

bool FUN_108844154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5,ulong param_6)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = (int)param_1 + 0x50;
  func_0x000107c29e78();
  if ((uVar2 & 0xfffffffb) != 1) {
    return false;
  }
  if (((param_6 & 1) == 0) &&
     (uVar3 = param_2, FUN_108844238(param_2,param_1 + 0x50,param_3), (int)uVar3 != 0)) {
    plVar4 = (long *)*param_4;
    (**(code **)(*plVar4 + 200))(plVar4,param_2,*(undefined8 *)(param_1 + 0x18));
    if ((int)plVar4 == 0) {
      return false;
    }
  }
  if ((*param_5 != 0) && (lVar5 = *(long *)(*param_5 + 0x10), lVar5 != 0)) {
    ppuVar1 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_1 + 0x80) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x80);
    }
    return lVar5 <= (long)ppuVar1[0x24];
  }
  return false;
}



/* Entry: 1088441fc; end: 108844237;  */

bool FUN_1088441fc(long *param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  if ((*param_1 != 0) && (lVar2 = *(long *)(*param_1 + 0x10), lVar2 != 0)) {
    ppuVar1 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_2 + 0x80) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x80);
    }
    return lVar2 <= (long)ppuVar1[0x24];
  }
  return false;
}



/* Entry: 108844238; end: 10884430f;  */

bool FUN_108844238(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((int)uVar1 < 6) {
    uVar6 = *(ulong *)(param_1 + 0x30);
    puVar7 = (ulong *)(param_1 + 0x30);
    if ((uVar6 & 1) != 0) {
      puVar7 = (ulong *)(uVar6 + 7);
    }
    for (lVar8 = (long)(int)uVar1 << 3; bVar2 = lVar8 == 0, lVar8 != 0; lVar8 = lVar8 + -8) {
      uVar6 = *puVar7;
      ppuVar5 = *(undefined ***)(uVar6 + 0x18);
      ppuVar4 = &PTR_PTR_11326cb58;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar4 = ppuVar5;
      }
      uVar3 = param_3;
      func_0x000107c287fc(param_3,ppuVar4);
      if ((uVar3 & 1) == 0) {
        ppuVar5 = *(undefined ***)(uVar6 + 0x18);
        ppuVar4 = &PTR_PTR_11326cb58;
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar4 = ppuVar5;
        }
        FUN_1086a2a3c(ppuVar4,param_2);
        if ((int)ppuVar4 == 0) {
          return bVar2;
        }
      }
      puVar7 = puVar7 + 1;
    }
  }
  else {
    ppuVar4 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_2 + 0x30);
    }
    bVar2 = (long)((ulong)uVar1 - 1) <= (long)*(int *)(ppuVar4 + 4);
  }
  return bVar2;
}



/* Entry: 108844310; end: 10884432f;  */

undefined8 FUN_108844310(void)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x9;
  long unaff_x23;
  undefined8 *unaff_x26;
  
  bVar3 = *(int *)(unaff_x23 + 0x108) == 0;
  bVar4 = *(int *)(unaff_x23 + 0x38) == 1;
  bVar2 = bVar3 && bVar4;
  if (!bVar3 || !bVar4) {
    return 0;
  }
  func_0x00010069b43c(*(undefined8 *)(unaff_x23 + 0x80));
  lVar7 = extraout_x9;
  if (!bVar2) {
    lVar7 = extraout_x8;
  }
  uVar6 = *unaff_x26;
  uVar1 = unaff_x26[1];
  func_0x0001006933dc();
  puVar5 = unaff_x26;
  func_0x0001006933dc();
  func_0x000100693448(uVar6,uVar1,unaff_x26,(long)puVar5 + lVar7);
  return uVar6;
}



/* Entry: 108844330; end: 10884440f;  */

void FUN_108844330(long param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 extraout_w8;
  undefined1 extraout_w9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c33fd4();
  if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x10);
  }
  func_0x000108847f80(*(undefined8 *)(unaff_x20 + 0x18),&uStack_48);
  func_0x000108847f80(*(undefined8 *)(unaff_x20 + 0x20),&uStack_60);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x4c);
  func_0x000108844324();
  ppuVar1 = &PTR_PTR_113405560;
  if (*(undefined ***)(unaff_x20 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(unaff_x20 + 0x38);
  }
  uVar2 = *(undefined1 *)(ppuVar1 + 2);
  unaff_x19[1] = uStack_40;
  *unaff_x19 = uStack_48;
  unaff_x19[2] = uStack_38;
  func_0x00010884809c(uVar2);
  *(undefined4 *)(unaff_x19 + 3) = uVar4;
  unaff_x19[5] = uStack_58;
  unaff_x19[4] = uStack_60;
  unaff_x19[6] = uStack_50;
  func_0x000107c34008();
  *(undefined1 *)(unaff_x19 + 7) = extraout_w9;
  *(undefined4 *)((long)unaff_x19 + 0x3c) = uVar3;
  *(undefined1 *)(unaff_x19 + 8) = extraout_w8;
  *(undefined8 *)((long)unaff_x19 + 0x44) = 0;
  func_0x000107c34024();
  func_0x000108847f68();
  return;
}



/* Entry: 108844410; end: 108844453;  */

void FUN_108844410(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108847f80(*(undefined8 *)(param_2 + 0x10),&uStack_38);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  func_0x000107c33fd0();
  return;
}



/* Entry: 108844454; end: 1088444bf;  */

void FUN_108844454(void)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000107c33fd4();
  FUN_1088444c0(extraout_x8);
  if (*(int *)(unaff_x20 + 0x1c) == 1) {
    *unaff_x19 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined1 *)(unaff_x19 + 1) = 1;
  }
  else if (*(int *)(unaff_x20 + 0x1c) == 2) {
    func_0x000107c27b98(unaff_x19 + 2,*(ulong *)(unaff_x20 + 0x10) & 0xfffffffffffffffc);
  }
  return;
}



/* Entry: 1088444c0; end: 1088444fb;  */

undefined8 * FUN_1088444c0(undefined8 *param_1)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x000107c279a4(auStack_40);
  return param_1;
}



/* Entry: 1088444fc; end: 1088445b3;  */

void FUN_1088444fc(long param_1)

{
  undefined8 *unaff_x20;
  undefined **ppuStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x000107c33fd4();
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    func_0x000107c3406c();
  }
  else {
    ppuStack_50 = &PTR_DAT_110a80a68;
    uStack_48 = 0;
    uStack_38 = 0;
    if (*(byte *)(param_1 + 0x28) == 0) {
      if (*(byte *)(param_1 + 8) != 0) {
        func_0x0001086b8ea0(&ppuStack_50,*unaff_x20);
      }
    }
    else {
      FUN_1088b82d4(&ppuStack_50);
      uStack_38 = CONCAT44(2,(undefined4)uStack_38);
      func_0x00010884805c();
      if ((uStack_48 & 1) != 0) {
        func_0x000108847f30();
      }
      func_0x000107c30248(auStack_40,unaff_x20 + 2);
    }
    FUN_10884757c();
    FUN_1088b8278(&ppuStack_50);
  }
  return;
}



/* Entry: 1088445b4; end: 10884470f;  */

void FUN_1088445b4(ulong *param_1,uint param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *extraout_x8;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  
  func_0x000107c34084();
  FUN_108847640(&stack0x00000050,param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  puVar1 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar1 = (ulong *)(*param_1 + 7);
  }
  lVar8 = in_stack_00000050;
  lVar4 = in_stack_00000058;
  lVar5 = in_stack_00000060;
  for (lVar9 = (long)(int)param_1[1] << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
    uVar10 = *puVar1;
    uVar3 = *(uint *)(uVar10 + 0x20);
    in_stack_00000050 = lVar8;
    in_stack_00000058 = lVar4;
    in_stack_00000060 = lVar5;
    if ((-1 < (int)uVar3) && ((int)uVar3 < (int)param_2)) {
      lVar8 = lVar8 + (ulong)uVar3 * 0x28;
      if ((*(byte *)(lVar8 + 0x20) & 1) == 0) {
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000020 = 0;
        in_stack_00000028 = 0;
        in_stack_00000018 = 0;
        in_stack_00000048 = 0;
        FUN_108844710(lVar8,&stack0x00000030);
        func_0x000107c27a04(&stack0x00000030);
        func_0x000107c27a04(&stack0x00000018);
      }
      ppuVar7 = *(undefined ***)(uVar10 + 0x18);
      ppuVar2 = &PTR_PTR_11326cb58;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar2 = ppuVar7;
      }
      func_0x000107c29ee0(&stack0x00000030,ppuVar2);
      puVar6 = &stack0x00000030;
      func_0x000107c28078(puVar6,param_3);
      if ((int)puVar6 != 0) {
        *(undefined1 *)(lVar8 + 0x18) = 1;
      }
      func_0x000107c27ac4(lVar8,&stack0x00000030);
      func_0x000108847f14();
    }
    puVar1 = puVar1 + 1;
    lVar8 = in_stack_00000050;
    lVar4 = in_stack_00000058;
    lVar5 = in_stack_00000060;
  }
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000050 = 0;
  extraout_x8[1] = lVar4;
  *extraout_x8 = lVar8;
  extraout_x8[2] = lVar5;
  func_0x000108847e50();
  func_0x000104be1340();
  func_0x000104be1340(&stack0x00000050);
  return;
}



/* Entry: 108844710; end: 108844743;  */

long FUN_108844710(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1088476e0();
  }
  else {
    func_0x000105295ae4();
  }
  return param_1;
}



/* Entry: 108844744; end: 108844803;  */

void FUN_108844744(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long lVar5;
  undefined1 auStack_70 [28];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x000107c27e9c(&uStack_50,(long)*(int *)(param_2 + 0x18));
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  uVar2 = uStack_50;
  uVar3 = uStack_48;
  for (lVar5 = (long)*(int *)(param_2 + 0x18) << 2; lVar5 != 0; lVar5 = lVar5 + -4) {
    uStack_54 = *puVar1;
    uStack_50 = uVar2;
    uStack_48 = uVar3;
    func_0x000107c27eac(&uStack_50,&uStack_54);
    puVar1 = puVar1 + 1;
    uVar2 = uStack_50;
    uVar3 = uStack_48;
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)*(uint *)(*(long *)(param_2 + 0x30) + 0x10) | 0x100000000;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  func_0x000108847e50(uVar4);
  param_1[2] = extraout_x9;
  param_1[3] = extraout_x8;
  func_0x000107c27a18(auStack_70);
  func_0x000107c27a18(&uStack_50);
  return;
}



/* Entry: 108844804; end: 108844823;  */

undefined4 FUN_108844804(undefined8 param_1)

{
  undefined4 uVar1;
  
  func_0x000107c29e4c();
  uVar1 = 0;
  if ((int)param_1 == 1) {
    uVar1 = (undefined4)((ulong)param_1 >> 0x20);
  }
  return uVar1;
}



/* Entry: 108844824; end: 108844937;  */

void FUN_108844824(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  func_0x000107c33fd4();
  auStack_50[0] = 0;
  uStack_38 = 0;
  puVar1 = (undefined *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(int *)(param_1 + 0x24) != 1) {
    puVar1 = &DAT_11383d918;
  }
  if ((char)puVar1[0x17] < '\0') {
    if (*(long *)(puVar1 + 8) == 0) goto LAB_108844890;
  }
  else if (puVar1[0x17] == '\0') goto LAB_108844890;
  func_0x000107c29ed8(auStack_68);
  FUN_1086554b0(auStack_50,auStack_68);
  func_0x000107c34030();
LAB_108844890:
  func_0x000104be0ccc(auStack_88,auStack_50);
  puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
  if (*(int *)(unaff_x20 + 0x24) != 2) {
    puVar1 = &DAT_11383d918;
  }
  func_0x000107c27f70(auStack_a8,puVar1);
  func_0x000105299660();
  func_0x000107c279a4(auStack_a8);
  func_0x000107c279c4(auStack_88);
  func_0x000107c279c4(auStack_50);
  return;
}



/* Entry: 108844938; end: 108844953;  */

undefined4 FUN_108844938(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined4 uVar3;
  long extraout_x8;
  long extraout_x9;
  
  func_0x000107c34040(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  uVar2 = *(uint *)(lVar1 + 0xa8);
  uVar3 = 0;
  if ((uVar2 < 0x26) && ((1L << ((ulong)uVar2 & 0x3f) & 0x3fffffff7fU) != 0)) {
    uVar3 = *(undefined4 *)(&UNK_10df61ad4 + (ulong)uVar2 * 4);
  }
  return uVar3;
}



/* Entry: 108844954; end: 1088449f3;  */

undefined4 FUN_108844954(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  func_0x000107c34034();
  if ((param_1 & 1) == 0) {
    func_0x000108847ec0();
    if ((param_1 & 1) == 0) {
      func_0x000108847ec0();
      if ((param_1 & 1) == 0) {
        func_0x000108847ec0();
        if ((param_1 & 1) == 0) {
          func_0x000108847ec0();
          iVar1 = (int)param_1;
          if ((param_1 & 1) == 0) {
            func_0x000108847ec0();
            uVar2 = 5;
            if (iVar1 == 0) {
              uVar2 = 3;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 1088449f4; end: 108844a1f;  */

void FUN_1088449f4(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  
  if (param_2 < 6) {
    puVar1 = (&PTR_DAT_110a7a8b8)[param_2];
  }
  else {
    puVar1 = &DAT_10f4bdff0;
  }
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 108844a20; end: 108844abf;  */

void FUN_108844a20(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010884809c();
  func_0x000107c34008();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x1a8) {
    lVar2 = lVar3;
    (*(code *)*param_3)(lVar3,param_3);
    if ((int)lVar2 != 0) {
      FUN_108844ac0(auStack_48,lVar3);
      FUN_108844c30(auStack_60,lVar3);
    }
  }
  FUN_108847754(param_1,auStack_48,auStack_60);
  func_0x000104be1594(auStack_60);
  func_0x000108847f60();
  return;
}



/* Entry: 108844ac0; end: 108844c2f;  */

void FUN_108844ac0(long *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  bool bVar5;
  long *plVar6;
  long extraout_x8;
  ulong uVar7;
  long *extraout_x8_00;
  long extraout_x9;
  long *extraout_x10;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 in_stack_00000024;
  undefined8 in_stack_00000028;
  long in_stack_00000058;
  
  func_0x000107c34084();
  lVar8 = 0;
  func_0x000107c34040(*(undefined8 *)(param_2 + 0x78));
  lVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  for (; lVar8 < *(int *)(lVar1 + 0x38); lVar8 = lVar8 + 1) {
    uVar7 = *(ulong *)(lVar1 + 0x30);
    bVar5 = (uVar7 & 1) == 0;
    puVar2 = (ulong *)(lVar1 + 0x30);
    if (!bVar5) {
      puVar2 = (ulong *)(uVar7 + lVar8 * 8 + 7);
    }
    func_0x000107c34004(*puVar2);
    plVar3 = extraout_x8_00;
    if (!bVar5) {
      plVar3 = extraout_x10;
    }
    for (lVar10 = (long)(int)extraout_x8_00[1] << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
      lVar11 = *plVar3;
      func_0x000107c3401c(&stack0x00000030);
      uVar9 = *(undefined8 *)(lVar11 + 0x40);
      in_stack_00000028 = uVar9;
      uVar4 = *(undefined4 *)(lVar11 + 0x4c);
      func_0x000107c33f88();
      in_stack_00000024 = uVar4;
      func_0x000107c29e64(&stack0x00000008,param_2,lVar8,uVar9);
      uVar7 = param_1[1];
      if (uVar7 < (ulong)param_1[2]) {
        func_0x000108847f1c();
        lVar11 = uVar7 + 0x58;
        param_1[1] = lVar11;
      }
      else {
        plVar6 = param_1;
        func_0x000107c27ef4(param_1,(long)(uVar7 - *param_1) / 0x58 + 1);
        func_0x000107c27ee4(&stack0x00000048,plVar6,(param_1[1] - *param_1) / 0x58,param_1 + 2);
        func_0x000108847f1c(in_stack_00000058);
        in_stack_00000058 = in_stack_00000058 + 0x58;
        func_0x000107c27ee0(param_1,&stack0x00000048);
        lVar11 = param_1[1];
        func_0x000107c27ef0(&stack0x00000048);
      }
      param_1[1] = lVar11;
      func_0x000107c33fd0();
      func_0x000108847f14();
      plVar3 = plVar3 + 1;
    }
  }
  return;
}



/* Entry: 108844c30; end: 108844c7f;  */

void FUN_108844c30(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x108) == '\x01') {
    lVar1 = *(long *)(param_2 + 0xf8);
    for (lVar2 = *(long *)(param_2 + 0xf0); lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      FUN_1086c2e14(param_1,lVar2);
    }
  }
  return;
}



/* Entry: 108844c80; end: 108844ceb;  */

void FUN_108844c80(void)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c33fd4();
  func_0x00010884809c();
  func_0x000107c34008();
  FUN_108844ac0(auStack_38);
  FUN_108844c30(auStack_50);
  FUN_108847754();
  func_0x000104be1594(auStack_50);
  func_0x000108847f60();
  return;
}



/* Entry: 108844cec; end: 108845527;  */

void FUN_108844cec(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **extraout_x9_01;
  undefined **extraout_x9_02;
  undefined **extraout_x9_03;
  undefined **extraout_x9_04;
  undefined **extraout_x9_05;
  undefined **extraout_x9_06;
  undefined **extraout_x9_07;
  undefined **extraout_x9_08;
  undefined **extraout_x9_09;
  undefined **extraout_x9_10;
  ulong extraout_x9_11;
  undefined **extraout_x9_12;
  undefined **extraout_x9_13;
  undefined **extraout_x9_14;
  undefined **extraout_x9_15;
  undefined **extraout_x9_16;
  undefined **extraout_x9_17;
  ulong extraout_x9_18;
  undefined **extraout_x11;
  undefined **extraout_x11_00;
  undefined **extraout_x11_01;
  undefined **extraout_x11_02;
  undefined **extraout_x11_03;
  undefined **extraout_x11_04;
  undefined **extraout_x11_05;
  undefined **extraout_x11_06;
  undefined **extraout_x11_07;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c29ee4(&ppuStack_68,param_2);
  FUN_1086a7b48(param_4);
  func_0x000107c287d0();
  pppuVar2 = &ppuStack_68;
  func_0x000107c2a2e0();
  *(undefined8 *)(param_4 + 0x30) = param_3;
  uVar1 = param_1 + -1 == 0xf;
  switch(param_1 + -1) {
  case 0:
    func_0x000108847da8(&UNK_110a95450);
    uVar1 = extraout_w8 == 4;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(4);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x000108847798();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_05;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_06;
        ppuStack_60 = extraout_x11_02;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891da48();
      }
    }
    FUN_10891d9a0(&ppuStack_68);
    break;
  case 1:
    func_0x000108847da8(&UNK_110a953b0);
    uVar1 = extraout_w8_03 == 5;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(5);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x0001088477cc();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_07;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_08;
        ppuStack_60 = extraout_x11_03;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891dca4();
      }
    }
    FUN_10891dbfc(&ppuStack_68);
    break;
  case 2:
    func_0x000108847e70(&UNK_110a95f90);
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_58 = 0;
    FUN_108804358();
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      uVar3 = *(ulong *)(param_4 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar3 == 0) {
        FUN_10891dfe4();
      }
      else {
        FUN_10891dfb4();
      }
    }
    FUN_10891de14(&ppuStack_68);
    break;
  case 3:
    func_0x000108847da8(&UNK_110a94f00);
    uVar1 = extraout_w8_06 == 7;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(7);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x000108847800();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_14;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_15;
        ppuStack_60 = extraout_x11_06;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891e56c();
      }
    }
    FUN_10891e4c4(&ppuStack_68);
    break;
  case 4:
    func_0x000108847da8(&UNK_110a95630);
    uVar1 = extraout_w8_07 == 8;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(8);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x000108847834();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_16;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_17;
        ppuStack_60 = extraout_x11_07;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891e71c();
      }
    }
    FUN_10891e674(&ppuStack_68);
    break;
  case 5:
    func_0x000108847da8(&UNK_110a95090);
    uVar1 = extraout_w8_01 == 0xb;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(0xb);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x000108847868();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_01;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_02;
        ppuStack_60 = extraout_x11_00;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891f984();
      }
    }
    FUN_10891f8dc(&ppuStack_68);
    break;
  case 6:
    func_0x000108847da8(&UNK_110a95130);
    uVar1 = extraout_w8_04 == 0xc;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(0xc);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x00010884789c();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_09;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_10;
        ppuStack_60 = extraout_x11_04;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891fb34();
      }
    }
    FUN_10891fa8c(&ppuStack_68);
    break;
  case 7:
    lStack_58 = 0;
    ppuStack_60 = (undefined **)0x0;
    ppuStack_68 = &PTR_DAT_110a95280;
    FUN_1086cf864();
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      uVar3 = *(ulong *)(param_4 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x000108847e5c();
        uVar3 = extraout_x9_11;
      }
      if (uVar3 == 0) {
        func_0x000108847fe0();
      }
      else {
        FUN_10891fd2c();
      }
    }
    FUN_10891fc3c(&ppuStack_68);
    break;
  case 9:
    func_0x000108847e70(&UNK_110a95860);
    lStack_58 = 0;
    uStack_50 = 0;
    FUN_1086ccd88();
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      uVar3 = *(ulong *)(param_4 + 8);
      if ((uVar3 & 1) != 0) {
        func_0x000108847e5c();
        uVar3 = extraout_x9_18;
      }
      if (uVar3 == 0) {
        func_0x000108847fe0();
        uStack_50 = *(undefined8 *)(param_4 + 0x18);
        *(undefined8 *)(param_4 + 0x18) = 0;
      }
      else {
        FUN_10892058c();
      }
    }
    FUN_108920444(&ppuStack_68);
    break;
  case 10:
    func_0x000108847e70(&UNK_110a94e60);
    lStack_58 = (ulong)(uint3)((uint)(undefined4)lStack_58 >> 8) << 8;
    func_0x000108847f98();
    FUN_108845528();
    pppuVar2 = &ppuStack_68;
    FUN_108920c9c();
    func_0x000108847f98();
    *(undefined1 *)(pppuVar2 + 2) = 0;
    break;
  case 0xb:
    func_0x000108847e70(&UNK_110a94e60);
    lStack_58 = (ulong)(uint3)((uint)(undefined4)lStack_58 >> 8) << 8;
    func_0x000108847f98();
    FUN_108845528();
    pppuVar2 = &ppuStack_68;
    FUN_108920c9c();
    func_0x000108847f98();
    *(undefined1 *)(pppuVar2 + 2) = 1;
    break;
  case 0xc:
    func_0x000108847da8(&UNK_110a955e0);
    uVar1 = extraout_w8_02 == 0x16;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(0x16);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x000108847958();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_03;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_04;
        ppuStack_60 = extraout_x11_01;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891e7f4();
      }
    }
    FUN_10891e74c(&ppuStack_68);
    break;
  case 0xd:
    lStack_58 = 0;
    ppuStack_60 = (undefined **)0x0;
    ppuStack_68 = &PTR_DAT_110a95ff0;
    func_0x00010884805c();
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001086d0ea8();
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      uVar3 = *(ulong *)(param_4 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar3 == 0) {
        FUN_10891f5d8();
      }
      else {
        FUN_10891f5a8();
      }
    }
    FUN_10891f33c(&ppuStack_68);
    break;
  case 0xe:
    func_0x000108847da8(&UNK_110a95590);
    uVar1 = extraout_w8_00 == 0x18;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(0x18);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x00010884798c();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_00;
        ppuStack_60 = extraout_x11;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891ecf0();
      }
    }
    FUN_10891ec48(&ppuStack_68);
    break;
  case 0xf:
    func_0x000108847da8(&UNK_110a94ff0);
    uVar1 = extraout_w8_05 == 0x19;
    if ((bool)uVar1) {
      pppuVar2 = *(undefined ****)(param_4 + 0x38);
    }
    else {
      func_0x000108847e48();
      func_0x000108847ed0(0x19);
      if (((ulong)pppuVar2 & 1) != 0) {
        func_0x000108847e88();
      }
      func_0x0001088479c0();
      *(undefined ****)(param_4 + 0x38) = pppuVar2;
    }
    func_0x000108847e7c();
    if (!(bool)uVar1) {
      ppuVar4 = pppuVar2[1];
      if (((ulong)ppuVar4 & 1) != 0) {
        func_0x000108847e5c();
        ppuVar4 = extraout_x9_12;
      }
      if (((ulong)ppuStack_60 & 1) != 0) {
        func_0x000108847eb4();
        ppuVar4 = extraout_x9_13;
        ppuStack_60 = extraout_x11_05;
      }
      if (ppuVar4 == ppuStack_60) {
        func_0x000108847f08();
      }
      else {
        FUN_10891f234();
      }
    }
    FUN_10891f18c(&ppuStack_68);
  }
  return;
}



/* Entry: 108845528; end: 1088455a3;  */

long FUN_108845528(long param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar4;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x11;
  
  if (param_1 != param_2) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = uVar2;
    if ((uVar2 & 1) != 0) {
      func_0x000108847e5c();
      uVar2 = extraout_x8;
      uVar3 = extraout_x9;
    }
    uVar4 = *(ulong *)(param_2 + 8);
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) {
      func_0x000108847eb4();
      uVar2 = extraout_x8_00;
      uVar3 = extraout_x9_00;
      uVar4 = extraout_x10;
      uVar5 = extraout_x11;
    }
    if (uVar3 == uVar5) {
      *(ulong *)(param_1 + 8) = uVar4;
      *(ulong *)(param_2 + 8) = uVar2;
      uVar1 = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      *(undefined1 *)(param_2 + 0x10) = uVar1;
    }
    else {
      FUN_108920d8c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1088455a4; end: 1088456b7;  */

void FUN_1088455a4(long param_1)

{
  int iVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c33fd4();
  *unaff_x19 = &PTR_DAT_110a91af0;
  unaff_x19[1] = 0;
  unaff_x19[4] = 0;
  *(undefined4 *)(unaff_x19 + 2) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x14) = 0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c29edc(auStack_48);
    if (*(int *)((long)unaff_x19 + 0x24) != 1) {
      FUN_10890b08c();
      *(undefined4 *)((long)unaff_x19 + 0x24) = 1;
      unaff_x19[3] = &DAT_11383d918;
    }
    if ((unaff_x19[1] & 1) != 0) {
      func_0x000108847f30();
    }
    func_0x000108847fa0(unaff_x19 + 3);
    func_0x000107c33fd0();
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    if (*(int *)((long)unaff_x19 + 0x24) != 2) {
      FUN_10890b08c();
      *(undefined4 *)((long)unaff_x19 + 0x24) = 2;
      unaff_x19[3] = &DAT_11383d918;
    }
    if ((unaff_x19[1] & 1) != 0) {
      func_0x000108847f30();
    }
    func_0x000107c30248(unaff_x19 + 3,unaff_x20 + 0x20);
  }
  iVar1 = *(int *)(unaff_x20 + 0x40);
  if (2 < iVar1 - 1U) {
    iVar1 = 0;
  }
  *(int *)(unaff_x19 + 2) = iVar1;
  *(undefined1 *)((long)unaff_x19 + 0x14) = *(undefined1 *)(unaff_x20 + 0x44);
  return;
}



/* Entry: 1088456b8; end: 108845753;  */

void FUN_1088456b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c3401c(&uStack_50);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  func_0x000108847f80(*(undefined8 *)(param_2 + 0x28),&uStack_68);
  func_0x000107c33f88();
  uVar2 = uStack_40;
  uVar1 = uStack_58;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar3;
  param_1[6] = uStack_60;
  param_1[5] = uStack_68;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  func_0x000107c33fd0();
  func_0x000108847ec8();
  return;
}



/* Entry: 108845754; end: 108845807;  */

void FUN_108845754(long param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [88];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c33fd4();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010528f4a8(&uStack_48,(long)*(int *)(param_1 + 0x18));
  puVar1 = (undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c33fe0(*puVar1);
  for (; puVar1 != (undefined8 *)0x0; puVar1 = puVar1 + -1) {
    FUN_1088456b8(auStack_a0,*unaff_x21);
    func_0x00010528f5ec(&uStack_48,auStack_a0);
    func_0x000107c27a5c(auStack_a0);
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x000107c28c7c(auStack_c0,&uStack_48);
  func_0x000107c33f94();
  func_0x000107c27a50();
  func_0x000107c27a50(&uStack_48);
  return;
}



/* Entry: 108845808; end: 108845e73;  */

void FUN_108845808(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  int iVar5;
  byte bVar6;
  undefined1 uVar7;
  bool bVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint extraout_w8;
  uint uVar11;
  int extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  undefined *puVar12;
  ulong extraout_x8_00;
  long lVar13;
  undefined **extraout_x8_01;
  long lVar14;
  long extraout_x9;
  undefined4 uVar15;
  ulong extraout_x14;
  ulong uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  uint uStack_50c;
  ulong uStack_508;
  ulong uStack_500;
  undefined8 uStack_4f8;
  uint uStack_4f4;
  ulong uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [32];
  undefined1 auStack_438 [24];
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  byte bStack_3f8;
  undefined1 auStack_3f0 [32];
  uint uStack_3d0;
  undefined1 auStack_3c8 [40];
  undefined1 auStack_3a0 [24];
  undefined1 uStack_388;
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [32];
  undefined8 uStack_330;
  uint uStack_238;
  undefined1 uStack_234;
  ulong uStack_230;
  undefined1 uStack_228;
  ulong uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined4 uStack_204;
  long lStack_188;
  undefined1 uStack_180;
  undefined1 uStack_178;
  ulong uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined4 uStack_148;
  int iStack_120;
  undefined1 auStack_118 [32];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  byte bStack_70;
  undefined1 auStack_68 [24];
  undefined1 uStack_50;
  undefined1 auStack_48 [32];
  undefined1 uStack_28;
  undefined1 auStack_20 [32];
  
  func_0x000107c34068();
  ppuVar2 = &PTR_PTR_113278268;
  if (*(undefined ***)(param_2 + 0x48) != (undefined **)0x0) {
    ppuVar2 = *(undefined ***)(param_2 + 0x48);
  }
  if (*(int *)(ppuVar2 + 10) - 10U < 4) {
    puVar12 = ppuVar2[9];
    switch(*(int *)(ppuVar2 + 10)) {
    case 10:
      uVar10 = 5;
      if (puVar12[0x14] == '\0') {
        uVar10 = 1;
      }
      uVar18 = 1;
      switch(*(undefined4 *)(puVar12 + 0x10)) {
      case 1:
      case 2:
        break;
      case 3:
        uVar18 = 2;
        break;
      case 4:
        uVar18 = 3;
        break;
      case 5:
        uVar18 = 4;
        break;
      default:
        uVar18 = 0;
      }
      break;
    case 0xb:
      if (*(int *)(puVar12 + 0x10) - 1U < 0xb) {
        uVar18 = *(undefined8 *)(&UNK_10df61b70 + (ulong)(*(int *)(puVar12 + 0x10) - 1U) * 8);
      }
      else {
        uVar18 = 0;
      }
      uVar10 = 2;
      break;
    case 0xc:
      iVar5 = *(int *)(puVar12 + 0x10);
      uVar10 = 9;
      if (puVar12[0x14] != '\0') {
        uVar10 = 10;
      }
      uVar15 = 0x13;
      if (puVar12[0x14] == '\0') {
        uVar15 = 3;
      }
      if (iVar5 != 2) {
        uVar10 = uVar15;
      }
      uVar3 = 2;
      if (1 < iVar5 - 3U) {
        uVar3 = 0;
      }
      uVar18 = 1;
      if (1 < iVar5 - 1U) {
        uVar18 = uVar3;
      }
      break;
    case 0xd:
      if (*(int *)(puVar12 + 0x10) - 1U < 7) {
        uVar18 = *(undefined8 *)(&UNK_10df61bc8 + (ulong)(*(int *)(puVar12 + 0x10) - 1U) * 8);
      }
      else {
        uVar18 = 0;
      }
      uVar10 = 4;
    }
  }
  else {
    uVar10 = 0;
    uVar18 = 0xff;
  }
  lVar14 = param_2;
  FUN_108845e74();
  auStack_48[0] = 0;
  uStack_28 = 0;
  uVar11 = *(uint *)(param_2 + 0x10);
  if ((uVar11 >> 1 & 1) != 0) {
    func_0x000107c291e4(auStack_48,*(undefined8 *)(param_2 + 0x40));
    uVar11 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar11 >> 4 & 1) == 0) {
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    bVar8 = false;
    uVar16 = 0;
    uVar17 = 0;
    uStack_508 = 0;
    uStack_500 = 0;
    bVar6 = 0;
    uStack_4f4 = 0;
    uStack_4f0 = 0;
    uStack_50c = 0;
  }
  else {
    uVar11 = *(uint *)(*(long *)(param_2 + 0x58) + 0x34);
    uVar16 = (ulong)uVar11;
    func_0x000108848068();
    ppuVar1 = &PTR_PTR_113278360;
    if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x38);
    }
    uStack_4e8 = (ulong)ppuVar1[4] & 0xffffffffffffff00;
    bVar8 = uVar16 != 0;
    if (uVar11 == 0) {
      uStack_4e0 = 0;
    }
    else {
      uStack_4e0 = *(undefined8 *)(extraout_x9 + 0x38);
    }
    bVar6 = *(byte *)(extraout_x9 + 0x40);
    func_0x000108847fb0();
    uVar17 = 1;
    uStack_4f0 = extraout_x14;
    uVar11 = extraout_w8;
  }
  auStack_68[0] = 0;
  uStack_50 = 0;
  if ((uVar11 >> 5 & 1) != 0) {
    func_0x000107c29ee0(auStack_438,*(undefined8 *)(param_2 + 0x60));
    FUN_10869026c(auStack_68,auStack_438);
    func_0x000107c27914(auStack_438);
  }
  FUN_1088479f4(auStack_438,param_1);
  ppuVar1 = &PTR_PTR_113278360;
  if (*(undefined ***)(param_2 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x38);
  }
  puStack_420 = ppuVar1[4];
  uStack_418 = *(undefined8 *)(param_2 + 0x80);
  uStack_f8 = 1;
  puStack_410 = ppuVar2[7];
  uStack_f4 = 1;
  ppuVar1 = &PTR_PTR_113278268;
  if (*(undefined ***)(param_2 + 0x48) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x48);
  }
  uStack_408 = uVar10;
  uStack_400 = uVar18;
  switch(*(undefined4 *)(ppuVar1 + 10)) {
  case 10:
    func_0x000108848050();
    bStack_3f8 = (extraout_x8_00 & 0xfffffffd) != 0;
    break;
  case 0xb:
    func_0x000108848050();
    bStack_3f8 = (byte)(0x6aa >> (ulong)(extraout_w8_02 & 0x1f));
    if (10 < extraout_w8_02) {
      bStack_3f8 = 0;
    }
    break;
  case 0xc:
    func_0x000108848050();
    bStack_3f8 = (extraout_w8_00 - 1U & 0xfffffffd) == 0;
    break;
  case 0xd:
    func_0x000108848050();
    bStack_3f8 = extraout_w8_01 < 6 & (byte)extraout_w8_01;
    break;
  default:
    bStack_3f8 = 0;
  }
  bStack_3f8 = bStack_3f8 & 1;
  func_0x000107c27f70(auStack_458,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
  func_0x000107c27c5c(auStack_3f0,auStack_458);
  uStack_3d0 = (uint)(*(int *)(param_2 + 0x8c) == 1);
  uVar9 = (ulong)*(uint *)(param_2 + 0xa0);
  func_0x000107c29e30();
  uStack_f0 = (undefined4)uVar9;
  uStack_ec = (undefined1)(uVar9 >> 0x20);
  FUN_10871c4bc(auStack_3c8,auStack_48);
  func_0x000107c3407c(*(undefined8 *)(param_2 + 0x50));
  FUN_1088ee3d0(auStack_3a0);
  uStack_388 = *(undefined1 *)(param_2 + 0x89);
  func_0x000107c29e28(auStack_470,param_2 + 0x18);
  func_0x000107c295bc(auStack_380,auStack_470);
  func_0x000107c29e28(auStack_488,ppuVar2 + 3);
  func_0x000107c295bc(auStack_368,auStack_488);
  ppuVar1 = &PTR_PTR_11326cb58;
  ppuVar4 = ppuVar1;
  if ((undefined **)ppuVar2[6] != (undefined **)0x0) {
    ppuVar4 = (undefined **)ppuVar2[6];
  }
  lVar13 = (long)*(char *)(((ulong)ppuVar4[2] & 0xfffffffffffffffc) + 0x17);
  if (lVar13 < 0) {
    lVar13 = *(long *)(((ulong)ppuVar4[2] & 0xfffffffffffffffc) + 8);
  }
  if (lVar13 != 0x10) {
    uStack_4b0 = uStack_4b0 & 0xffffffffffffff00;
  }
  else {
    func_0x000107c29ee0(&uStack_4d0);
    uStack_4a8 = uStack_4c8;
    uStack_4b0 = uStack_4d0;
    uStack_4a0 = uStack_4c0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4d0 = 0;
    func_0x000107c27914(&uStack_4d0);
  }
  uStack_498 = lVar13 == 0x10;
  func_0x000107c28d24(auStack_350,&uStack_4b0);
  uStack_330 = 1;
  uStack_238 = uStack_4f4 | uStack_50c;
  uStack_230 = uStack_4f0 | uStack_508;
  uStack_220 = uStack_4e8 | uStack_500;
  uStack_204 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  lStack_188 = *(long *)(param_2 + 0x90);
  uStack_180 = lStack_188 != 0;
  uStack_178 = *(undefined1 *)(param_2 + 0x8a);
  uVar7 = !bVar8;
  uStack_170 = uVar16;
  if ((bool)uVar7) {
    uStack_170 = 0;
    uStack_4e0 = 0;
  }
  bStack_70 = bVar6 & 1;
  uStack_148 = 0;
  uStack_234 = uVar17;
  uStack_228 = uVar17;
  uStack_218 = uVar17;
  uStack_168 = bVar8;
  uStack_160 = uStack_4e0;
  uStack_158 = bVar8;
  iStack_120 = (int)lVar14;
  func_0x000107c28d24(auStack_118,auStack_68);
  if (*(char *)(param_2 + 0x10) < '\0') {
    func_0x000108847ff8(*(undefined8 *)(param_2 + 0x70));
    if (!(bool)uVar7) {
      ppuVar1 = extraout_x8_01;
    }
    func_0x000107c29ee0(auStack_20,ppuVar1);
    func_0x000108847e94();
    uStack_4b8 = 1;
  }
  else {
    uStack_4b8 = 0;
    uStack_4d0 = uStack_4d0 & 0xffffffffffffff00;
  }
  func_0x000108848030(auStack_438);
  func_0x000107c291e0(extraout_x8,auStack_438);
  func_0x000108847f78();
  func_0x000108847f70();
  func_0x000107c27a04(auStack_488);
  func_0x000107c27a04(auStack_470);
  func_0x000107c279a4(auStack_458);
  func_0x000107c288d0(auStack_438);
  if ((int)lVar14 == 2) {
    if (((*(byte *)(param_2 + 0x10) & 1) != 0) &&
       (lVar14 = *(long *)(*(long *)(param_2 + 0x38) + 0x28), lVar14 != 0)) {
      if ((*(byte *)(extraout_x8 + 0x118) & 1) == 0) {
        *(undefined1 *)(extraout_x8 + 0x118) = 1;
      }
      *(long *)(extraout_x8 + 0x110) = lVar14;
    }
    lVar14 = *(long *)(param_2 + 0x98);
    if (lVar14 != 0) {
      if ((*(byte *)(extraout_x8 + 0x128) & 1) == 0) {
        *(undefined1 *)(extraout_x8 + 0x128) = 1;
      }
      *(long *)(extraout_x8 + 0x120) = lVar14;
    }
  }
  func_0x000107c279dc(auStack_68);
  func_0x000107c288d4(auStack_48);
  return;
}



/* Entry: 108845e74; end: 108845eab;  */

undefined4 FUN_108845e74(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) {
    return 1;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0xa0);
  func_0x000107c29e30();
  bVar1 = false;
  bVar2 = true;
  if (uVar3 >> 0x20 != 0) {
    bVar2 = 7 < (uint)uVar3;
    bVar1 = (uint)uVar3 == 8;
  }
  if (bVar2 && !bVar1) {
    return 0;
  }
  return *(undefined4 *)(&UNK_10df61c00 + (uVar3 & 0xf) * 4);
}



/* Entry: 108845eac; end: 108845fb7;  */

void FUN_108845eac(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 *extraout_x8;
  undefined **extraout_x8_00;
  ulong uVar6;
  undefined **extraout_x8_01;
  undefined8 *extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar7;
  
  func_0x000107c33fd4();
  uVar4 = *(char *)(param_1 + 0x101) == '\0';
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  func_0x000107c27ab0();
  func_0x000107c34014();
  puVar1 = extraout_x8;
  if (!(bool)uVar4) {
    puVar1 = extraout_x10;
  }
  for (lVar7 = (long)*(int *)(extraout_x8 + 1) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    func_0x000108847ff8(*puVar1);
    ppuVar3 = &PTR_PTR_11326cb58;
    if (!(bool)uVar4) {
      ppuVar3 = extraout_x8_00;
    }
    func_0x000107c33ff4(ppuVar3);
    func_0x000108847df0();
    func_0x000107c33fcc();
    puVar1 = puVar1 + 1;
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x30);
  puVar2 = (ulong *)(unaff_x20 + 0x30);
  if ((uVar6 & 1) != 0) {
    puVar2 = (ulong *)(uVar6 + 7);
  }
  for (lVar7 = (long)*(int *)(unaff_x20 + 0x38) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    bVar5 = *(char *)(*puVar2 + 0x20) == '\x01';
    if (bVar5) {
      func_0x000108847ff8();
      ppuVar3 = &PTR_PTR_11326cb58;
      if (!bVar5) {
        ppuVar3 = extraout_x8_01;
      }
      func_0x000107c33ff4(ppuVar3);
      func_0x000108847df0();
      func_0x000107c33fcc();
    }
    puVar2 = puVar2 + 1;
  }
  return;
}



/* Entry: 108845fb8; end: 10884602b;  */

void FUN_108845fb8(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined1 auStack_40 [24];
  undefined *puStack_28;
  
  if ((((*(uint *)(param_2 + 0x10) & 1) == 0) || ((*(uint *)(param_2 + 0x10) >> 1 & 1) == 0)) ||
     (*(long *)(*(long *)(param_2 + 0x20) + 0x10) == 0)) {
    func_0x000107c3406c();
  }
  else {
    func_0x000108847fa8(*(undefined8 *)(param_2 + 0x18));
    ppuVar1 = &PTR_PTR_11326ab30;
    if (*(undefined ***)(param_2 + 0x20) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
    }
    puStack_28 = ppuVar1[2];
    func_0x000108847b88(param_1,auStack_40);
    func_0x000108847e04();
  }
  return;
}



/* Entry: 10884602c; end: 1088460db;  */

undefined1  [16] FUN_10884602c(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return ZEXT816(0);
  }
  func_0x0001088480a8(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18));
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1088460dc; end: 1088464bf;  */

void FUN_1088460dc(undefined8 param_1,undefined8 param_2,int param_3,long param_4,long param_5,
                  uint param_6)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  uint extraout_w8;
  uint uVar7;
  undefined8 extraout_x8;
  long extraout_x9;
  ulong extraout_x14;
  undefined1 uVar8;
  ulong uVar9;
  uint uStack_4dc;
  ulong uStack_4d8;
  ulong uStack_4d0;
  uint uStack_4c4;
  ulong uStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4a8;
  undefined1 auStack_480 [24];
  undefined1 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [32];
  undefined1 auStack_428 [24];
  undefined8 uStack_410;
  long lStack_408;
  long lStack_400;
  undefined4 uStack_3f8;
  ulong uStack_3f0;
  undefined1 uStack_3e8;
  undefined1 auStack_3e0 [32];
  uint uStack_3c0;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [32];
  undefined8 uStack_320;
  uint uStack_228;
  undefined1 uStack_224;
  ulong uStack_220;
  undefined1 uStack_218;
  ulong uStack_210;
  undefined1 uStack_208;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  undefined *puStack_178;
  undefined1 uStack_170;
  undefined1 uStack_168;
  ulong uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined4 uStack_138;
  undefined **ppuStack_130;
  undefined1 uStack_128;
  undefined **ppuStack_120;
  undefined1 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [32];
  uint uStack_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  byte bStack_60;
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [32];
  
  func_0x000107c34068();
  FUN_108845eac(auStack_38,param_5);
  uVar7 = *(uint *)(param_5 + 0x10);
  if ((uVar7 >> 4 & 1) == 0) {
    uStack_4a8 = 0;
    bVar2 = false;
    uVar9 = 0;
    uVar8 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4dc = 0;
    uStack_4c4 = 0;
    bVar1 = 0;
  }
  else {
    uVar7 = *(uint *)(*(long *)(param_5 + 0x88) + 0x34);
    uVar9 = (ulong)uVar7;
    func_0x000108848068();
    uStack_4b8 = *(ulong *)(param_5 + 0xe0) & 0xffffffffffffff00;
    bVar2 = uVar9 != 0;
    if (uVar7 == 0) {
      uStack_4a8 = 0;
    }
    else {
      uStack_4a8 = *(undefined8 *)(extraout_x9 + 0x38);
    }
    bVar1 = *(byte *)(extraout_x9 + 0x40);
    func_0x000108847fb0();
    uVar8 = 1;
    uVar7 = extraout_w8;
    uStack_4c0 = extraout_x14;
  }
  ppuVar5 = &PTR_PTR_11327ab60;
  if (*(undefined ***)(param_5 + 0x80) != (undefined **)0x0) {
    ppuVar5 = *(undefined ***)(param_5 + 0x80);
  }
  auStack_58[0] = 0;
  uStack_40 = 0;
  if ((uVar7 >> 7 & 1) != 0) {
    func_0x000107c29ee0(auStack_428,*(undefined8 *)(param_5 + 0xa0));
    FUN_10869026c(auStack_58,auStack_428);
    func_0x000107c27914(auStack_428);
  }
  FUN_1088479f4(auStack_428,param_1);
  lStack_408 = param_4 / 1000;
  uStack_e8 = (uint)(param_3 != 2);
  uStack_3f8 = 2;
  uStack_3f0 = (ulong)(param_6 ^ 1);
  uStack_3e8 = 1;
  uStack_410 = param_2;
  lStack_400 = lStack_408;
  uStack_e4 = uStack_e8;
  func_0x000107c27f70(auStack_448,*(ulong *)(param_5 + 0x60) & 0xfffffffffffffffc);
  func_0x000107c27c5c(auStack_3e0,auStack_448);
  uStack_3c0 = (uint)(*(int *)(param_5 + 0xf0) == 1);
  uVar3 = (ulong)*(uint *)(param_5 + 0x104);
  func_0x000107c29e30();
  uStack_e0 = (undefined4)uVar3;
  uStack_dc = (undefined1)(uVar3 >> 0x20);
  func_0x000107c295bc(auStack_370,auStack_38);
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  func_0x000107c295bc(auStack_358,&uStack_460);
  auStack_480[0] = 0;
  uStack_468 = 0;
  uStack_128 = SUB81(auStack_480,0);
  func_0x000107c28d24(auStack_340);
  uStack_320 = 1;
  uStack_228 = uStack_4c4 | uStack_4dc;
  uStack_220 = uStack_4c0 | uStack_4d8;
  uStack_210 = uStack_4b8 | uStack_4d0;
  ppuVar4 = ppuVar5;
  uStack_224 = uVar8;
  uStack_218 = uVar8;
  uStack_208 = uVar8;
  func_0x000108846074();
  uStack_200 = SUB84(ppuVar4,0);
  ppuVar4 = &PTR_PTR_11327ab60;
  if (*(undefined ***)(param_5 + 0x80) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(param_5 + 0x80);
  }
  iStack_1fc = *(int *)(ppuVar4 + 10);
  if (2 < iStack_1fc - 1U) {
    iStack_1fc = 0;
  }
  uStack_1f8 = ppuVar4[0xc] != (undefined *)0x0;
  uStack_1f4 = 1;
  if (*(int *)(ppuVar4 + 0xe) - 1U < 3) {
    uStack_1f4 = *(undefined4 *)(&UNK_10df61c24 + (ulong)(*(int *)(ppuVar4 + 0xe) - 1U) * 4);
  }
  puStack_178 = ppuVar4[0xd];
  uStack_170 = puStack_178 != (undefined *)0x0;
  uStack_168 = *(undefined1 *)(param_5 + 0x101);
  uStack_160 = uVar9;
  if (!bVar2) {
    uStack_160 = 0;
    uStack_4a8 = 0;
  }
  bStack_60 = bVar1 & 1;
  ppuVar4 = ppuVar5;
  uStack_158 = bVar2;
  uStack_150 = uStack_4a8;
  uStack_148 = bVar2;
  func_0x0001088460ac();
  uStack_138 = SUB84(ppuVar4,0);
  ppuVar4 = ppuVar5;
  func_0x00010884602c();
  ppuStack_130 = ppuVar4;
  uStack_118 = uStack_128;
  func_0x000108846050();
  lVar6 = param_5;
  ppuStack_120 = ppuVar5;
  func_0x000107c29e74();
  uStack_110 = (undefined4)lVar6;
  func_0x000107c28d24(auStack_108,auStack_58);
  if ((*(byte *)(param_5 + 0x11) >> 3 & 1) != 0) {
    func_0x000107c33f9c(*(undefined8 *)(*(long *)(param_5 + 0xc0) + 0x18));
    func_0x000107c29ee0(auStack_20);
    func_0x000108847e94();
  }
  func_0x000108848030(auStack_428);
  func_0x000107c291e0(extraout_x8,auStack_428);
  func_0x000108847f78();
  func_0x000108847f70();
  func_0x000107c27a04(&uStack_460);
  func_0x000107c279a4(auStack_448);
  func_0x000107c288d0(auStack_428);
  func_0x000107c279dc(auStack_58);
  func_0x000107c34048();
  return;
}



/* Entry: 1088464c0; end: 10884653f;  */

long FUN_1088464c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_50 [32];
  
  iVar1 = *(int *)(param_1 + 0x44);
  lVar2 = param_1;
  func_0x000108847fc8();
  if (*(char *)(lVar2 + 600) == '\x01') {
    func_0x000107316780();
    func_0x000107316780();
    func_0x000108848018();
  }
  func_0x000107c29e80(*(undefined4 *)(param_1 + 0x18),iVar1 == 2,auStack_50);
  func_0x000108848024();
  return param_1;
}



/* Entry: 108846540; end: 1088465bf;  */

long FUN_108846540(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_50 [32];
  
  iVar1 = *(int *)(param_1 + 0x68);
  lVar2 = param_1;
  func_0x000108847fc8();
  if (*(char *)(lVar2 + 0x100) == '\x01') {
    func_0x000107316780();
    func_0x000107316780();
    func_0x000108848018();
  }
  func_0x000107c29e80(*(undefined4 *)(param_1 + 0xb0),iVar1 == 2,auStack_50);
  func_0x000108848024();
  return param_1;
}



/* Entry: 1088465c0; end: 10884668b;  */

int FUN_1088465c0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 0x18;
  if (2 < *(int *)(param_1 + 0x10) - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 10884668c; end: 1088467b7;  */

void FUN_10884668c(undefined4 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  long extraout_x8;
  undefined **ppuVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000113828050 & 1) == 0) {
    iVar1 = 0x13828050;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108848684(&uStack_50);
      uRam0000000113828038 = uStack_48;
      uRam0000000113828030 = uStack_50;
      uRam0000000113828040 = uStack_40;
      func_0x000108847e50();
      *(undefined1 *)(extraout_x8 + 0x18) = 1;
      func_0x000108847e04();
      ___cxa_guard_release(0x113828050);
    }
  }
  ppuVar3 = *(undefined ***)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x1c) != 2) {
    ppuVar3 = &PTR_PTR_113280af8;
  }
  if (*(int *)((long)ppuVar3 + 0x1c) == 6) {
    ppuVar4 = (undefined **)ppuVar3[2];
  }
  else {
    ppuVar4 = &PTR_PTR_113280990;
  }
  if (((ulong)ppuVar4[2] & 1) != 0) {
    if (*(int *)((long)ppuVar3 + 0x1c) == 6) {
      ppuVar3 = (undefined **)ppuVar3[2];
    }
    else {
      ppuVar3 = &PTR_PTR_113280990;
    }
    func_0x000107c3407c(ppuVar3[3]);
    func_0x000107c287fc();
    if ((param_3 & 1) == 0) {
      uVar2 = 0x12;
      goto LAB_108846738;
    }
  }
  uVar2 = 0x11;
LAB_108846738:
  *param_1 = uVar2;
  func_0x000107c279d4(param_1 + 2,0x113828030);
  return;
}



/* Entry: 1088467b8; end: 1088467ff;  */

void FUN_1088467b8(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_108846800(&uStack_40,param_3);
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = uStack_38;
  *(undefined8 *)(param_1 + 2) = uStack_40;
  *(undefined8 *)(param_1 + 6) = uStack_30;
  func_0x000107c34008();
  func_0x000108847e04();
  return;
}



/* Entry: 108846800; end: 108846867;  */

void FUN_108846800(long param_1)

{
  undefined **ppuVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  ppuVar1 = &PTR_PTR_113278360;
  if (*(undefined ***)(param_1 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x38);
  }
  func_0x000107c33f9c(ppuVar1[3]);
  func_0x000107c29ee0(auStack_38);
  func_0x000107c27994(auStack_50,auStack_38);
  func_0x000107c33f94();
  func_0x000107c27914();
  func_0x000107c34028();
  return;
}



/* Entry: 108846868; end: 108846887;  */

undefined4 FUN_108846868(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&UNK_10df61c30 + (ulong)param_1 * 4);
  }
  return 0x120094;
}



/* Entry: 108846888; end: 108846a5b;  */

void FUN_108846888(long param_1)

{
  byte bVar1;
  undefined **extraout_x8;
  undefined **ppuVar2;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  undefined **ppuVar5;
  undefined **extraout_x10;
  undefined **extraout_x11;
  undefined ***unaff_x19;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined4 uStack_38;
  
  func_0x000107c33fd4();
  ppuStack_60 = &PTR_FUN_110a80b10;
  ppuStack_58 = (undefined **)0x0;
  func_0x00010884805c();
  uStack_38 = 0;
  ppuStack_50 = extraout_x8;
  ppuStack_48 = extraout_x8;
  ppuStack_40 = extraout_x8;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c29edc(auStack_78,unaff_x20 + 8);
    if (((ulong)ppuStack_58 & 1) != 0) {
      func_0x000108847f30();
    }
    func_0x000108847fa0(&ppuStack_50);
    func_0x000107c33fd0();
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x000107c29edc(auStack_78,unaff_x20 + 0x60);
    if (((ulong)ppuStack_58 & 1) != 0) {
      func_0x000108847f30();
    }
    func_0x000108847fa0(&ppuStack_40);
    func_0x000107c33fd0();
    func_0x000107c29edc(auStack_78,unaff_x20 + 0x48);
    if (((ulong)ppuStack_58 & 1) != 0) {
      func_0x000108847f30();
    }
    func_0x000108847fa0(&ppuStack_48);
    func_0x000107c33fd0();
    bVar1 = *(byte *)(unaff_x20 + 0x78) ^ 1;
  }
  else {
    bVar1 = 1;
  }
  *unaff_x19 = &PTR_FUN_110a80bb0;
  unaff_x19[1] = (undefined **)0x0;
  unaff_x19[4] = (undefined **)0x0;
  *(byte *)(unaff_x19 + 2) = bVar1 & *(int *)(unaff_x20 + 4) != 1;
  func_0x0001087f48a0();
  if (unaff_x19 != &ppuStack_60) {
    ppuVar2 = unaff_x19[1];
    ppuVar3 = ppuVar2;
    if (((ulong)ppuVar2 & 1) != 0) {
      func_0x000108847e5c();
      ppuVar2 = extraout_x8_00;
      ppuVar3 = extraout_x9;
    }
    ppuVar5 = ppuStack_58;
    ppuVar4 = ppuStack_58;
    if (((ulong)ppuStack_58 & 1) != 0) {
      func_0x000108847eb4();
      ppuVar2 = extraout_x8_01;
      ppuVar3 = extraout_x9_00;
      ppuVar5 = extraout_x10;
      ppuVar4 = extraout_x11;
    }
    if (ppuVar3 == ppuVar4) {
      unaff_x19[1] = ppuVar5;
      ppuVar3 = unaff_x19[2];
      ppuVar5 = unaff_x19[3];
      unaff_x19[2] = ppuStack_50;
      unaff_x19[3] = ppuStack_48;
      ppuVar4 = unaff_x19[4];
      unaff_x19[4] = ppuStack_40;
      ppuStack_58 = ppuVar2;
      ppuStack_50 = ppuVar3;
      ppuStack_48 = ppuVar5;
      ppuStack_40 = ppuVar4;
    }
    else {
      FUN_1088b8fe8();
    }
  }
  func_0x000107c2a280(&ppuStack_60);
  return;
}



/* Entry: 108846a5c; end: 108846b13;  */

void FUN_108846a5c(long param_1)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000107c33fd4();
  *(undefined8 *)(extraout_x8 + 0x10) = 0;
  *unaff_x19 = &PTR_DAT_110a98b40;
  unaff_x19[1] = 0;
  unaff_x19[5] = 0;
  *(undefined2 *)(unaff_x19 + 3) = 0;
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined4 *)((long)unaff_x19 + 0x14) = *unaff_x20;
  }
  if (*(char *)(unaff_x20 + 10) == '\x01') {
    FUN_108928e90();
    func_0x00010884805c();
    unaff_x19[4] = extraout_x8_00;
    *(undefined4 *)((long)unaff_x19 + 0x2c) = 6;
    if ((unaff_x19[1] & 1) != 0) {
      func_0x000108847f30();
    }
    func_0x000107c30248();
  }
  *(undefined1 *)(unaff_x19 + 3) = *(undefined1 *)(unaff_x20 + 0xc);
  *(byte *)((long)unaff_x19 + 0x19) =
       *(byte *)((long)unaff_x20 + 0x32) & *(byte *)((long)unaff_x20 + 0x31);
  return;
}



/* Entry: 108846b14; end: 108846b5f;  */

undefined4 FUN_108846b14(int param_1)

{
  if (param_1 - 1U < 6) {
    return *(undefined4 *)(&UNK_10df61c68 + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 108846b60; end: 108846b9f;  */

void FUN_108846b60(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_250 [552];
  undefined1 uStack_28;
  
  auStack_250[0] = 0;
  uStack_28 = 0;
  *param_1 = param_2;
  func_0x000104be6f78(param_1 + 2,auStack_250);
  func_0x000104be1500(auStack_250);
  return;
}



/* Entry: 108846ba0; end: 108846c87;  */

void FUN_108846ba0(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_6d8 [560];
  undefined1 auStack_4a8 [552];
  undefined1 auStack_280 [48];
  undefined1 auStack_250 [504];
  undefined1 uStack_58;
  
  uVar1 = param_2;
  func_0x000107c28e64();
  if ((int)uVar1 != 0) {
    auStack_250[0] = 0;
    *param_1 = 4;
    func_0x000104be6f78(param_1 + 2,auStack_250);
    func_0x000104be1500(auStack_250);
    return;
  }
  if (param_4 == 1) {
    FUN_108846c88(auStack_4a8,param_2,param_3,param_5,param_6);
    func_0x0001052984e0(auStack_280,auStack_4a8);
    func_0x000104be1520(auStack_4a8);
  }
  else {
    auStack_280[0] = 0;
    uStack_58 = 0;
  }
  func_0x000104be6f78(auStack_6d8,auStack_280);
  *param_1 = param_4;
  func_0x000104be6f78(param_1 + 2,auStack_6d8);
  func_0x000104be1500(auStack_6d8);
  func_0x000104be1500(auStack_280);
  return;
}



/* Entry: 108846c88; end: 1088470c7;  */

void FUN_108846c88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_298 [104];
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  char cStack_218;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined1 auStack_1f8 [40];
  undefined1 auStack_1d0 [48];
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined1 auStack_180 [64];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  char cStack_18;
  
  func_0x000107c34068();
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_1 + 0x80) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x80);
  }
  iVar5 = *(int *)(ppuVar1 + 10);
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_1 + 0x78) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x78);
  }
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  cStack_18 = '\0';
  if ((*(byte *)(param_1 + 0x60) >> 6 & 1) != 0) {
    FUN_1088470c8(&uStack_230,*(undefined8 *)(param_1 + 0x98));
    if (cStack_18 == '\x01') {
      FUN_10869e9e0(&uStack_40,&uStack_230);
    }
    else {
      uStack_40 = uStack_40 & 0xffffffffffffff00;
      uStack_28 = cStack_218 == '\x01';
      if ((bool)uStack_28) {
        uStack_38 = uStack_228;
        uStack_40 = uStack_230;
        uStack_30 = uStack_220;
        uStack_228 = 0;
        uStack_220 = 0;
        uStack_230 = 0;
      }
      uStack_20 = uStack_210;
      uStack_1c = uStack_20c;
      cStack_18 = '\x01';
    }
    func_0x000107c279a4(&uStack_230);
  }
  func_0x000107c3401c(auStack_58);
  uVar6 = *(uint *)(ppuVar1 + 0x15);
  func_0x000107c29e60(&uStack_a0,param_1,0);
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  uStack_70 = uStack_90;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_68 = 1;
  auStack_c0[0] = 0;
  uStack_a8 = 0;
  if (*(char *)(param_1 + 0x108) == '\x01') {
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    lVar3 = *(long *)(param_1 + 0xf8);
    for (lVar8 = *(long *)(param_1 + 0xf0); lVar8 != lVar3; lVar8 = lVar8 + 0x18) {
      FUN_1086c2e14(&uStack_1a0,lVar8);
    }
    uStack_228 = uStack_198;
    uStack_230 = uStack_1a0;
    uStack_220 = uStack_190;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    cStack_218 = '\x01';
    FUN_10869e32c(auStack_c0,&uStack_230);
    func_0x000107c27a3c(&uStack_230);
    func_0x000104be1594(&uStack_1a0);
  }
  func_0x000107c29e5c(auStack_d8,ppuVar1);
  func_0x000107c27994(auStack_f0,param_1);
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar9 = *(ulong *)(param_1 + 0x28);
  func_0x000107c33f9c(*(undefined8 *)(param_1 + 0x68));
  func_0x000107c29ee0(auStack_108);
  func_0x000107c29e2c(auStack_128,param_1 + 0x50);
  func_0x000107c29e6c(auStack_140,param_1);
  func_0x000107c29ea4(auStack_180,ppuVar1);
  func_0x000107c29e4c(param_1 + 0x50,param_2,param_3);
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  uStack_188 = 0;
  func_0x000107c28bd0(auStack_1d0,&uStack_40);
  func_0x000107c3407c(ppuVar1[0x14]);
  func_0x000107c29270(&uStack_230);
  func_0x000107c29ea8(auStack_1f8,&uStack_230);
  func_0x000107c29e44(auStack_298,param_1,param_2,param_4);
  uVar7 = (ulong)uVar6;
  func_0x000107c29e58(uVar7);
  if ((uVar9 & 1) == 0) {
    uVar4 = uVar2 | 0x4000000000000000;
  }
  func_0x000105298bb8(extraout_x8,auStack_58,uVar7,&uStack_80,auStack_c0,auStack_d8,auStack_f0,uVar2
                      ,uVar4,auStack_108,iVar5 != 0);
  func_0x000107c27a14(auStack_298);
  func_0x000107c27a24(auStack_1f8);
  func_0x000107c29274(&uStack_230);
  func_0x000107c27a28(auStack_1d0);
  func_0x000107c27a2c(auStack_180);
  func_0x000107c27a04(auStack_140);
  func_0x000107c279a4(auStack_128);
  func_0x000107c27914(auStack_108);
  func_0x000107c27914(auStack_f0);
  func_0x000107c27a30(auStack_d8);
  func_0x000107c27a3c(auStack_c0);
  func_0x000107c27a40(&uStack_80);
  func_0x000107c27a44(&uStack_a0);
  func_0x000107c27914(auStack_58);
  func_0x000107c27a28(&uStack_40);
  return;
}



/* Entry: 1088470c8; end: 108847163;  */

void FUN_1088470c8(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar3;
  int extraout_w9;
  int extraout_w9_00;
  int iVar4;
  ulong extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000107c33fd4();
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar2 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_108847108;
  }
  else if (cVar1 == '\0') {
LAB_108847108:
    uStack_40 = 0;
    uStack_28 = 0;
    goto LAB_108847114;
  }
  func_0x000107c27f70(&uStack_40);
LAB_108847114:
  func_0x000107c34070(*(undefined1 *)(unaff_x20 + 0x1c));
  iVar4 = extraout_w9;
  uVar3 = extraout_w8;
  if ((extraout_x10 & 1) != 0) {
    unaff_x19[1] = uStack_38;
    *unaff_x19 = CONCAT71(uStack_3f,uStack_40);
    unaff_x19[2] = uStack_30;
    func_0x000108847e50();
    *(undefined1 *)(unaff_x19 + 3) = 1;
    iVar4 = extraout_w9_00;
    uVar3 = extraout_w8_00;
  }
  *(uint *)(unaff_x19 + 4) = (uint)(iVar4 == 1);
  *(undefined1 *)((long)unaff_x19 + 0x24) = uVar3;
  func_0x000107c279a4(&uStack_40);
  return;
}



/* Entry: 108847164; end: 108847237;  */

void FUN_108847164(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c27994(auStack_40,param_2);
  func_0x00010868c9c4(auStack_58,auStack_40,1);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x0001052916b0(param_1,auStack_58,&uStack_70,&uStack_88,&uStack_a0);
  func_0x000104bee7a0(&uStack_a0);
  func_0x000104bee7dc(&uStack_88);
  func_0x000104bee864(&uStack_70);
  func_0x000107c27a04(auStack_58);
  func_0x000107c27914();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27914(auStack_40);
  func_0x000108847dfc();
  func_0x000108847f44();
  func_0x000107c33f94();
  func_0x000107c27914();
  return;
}



/* Entry: 108847238; end: 10884725b;  */

void FUN_108847238(void)

{
  func_0x000108847f44();
  func_0x000107c33f94();
  func_0x000107c27914();
  return;
}



/* Entry: 10884725c; end: 108847297;  */

void FUN_10884725c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  func_0x000107c33fcc();
  return;
}



/* Entry: 108847298; end: 1088472bb;  */

void FUN_108847298(void)

{
  func_0x000108847f44();
  func_0x000107c33f94();
  func_0x000107c27914();
  return;
}



/* Entry: 1088472bc; end: 1088472ef;  */

int FUN_1088472bc(uint *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 < 5) {
    iVar1 = *param_1 + 1;
  }
  return iVar1;
}



/* Entry: 1088472f0; end: 108847407;  */

void FUN_1088472f0(undefined8 *param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c29ee0(&uStack_70);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[2] = uStack_60;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  func_0x000108847f14();
  return;
}


