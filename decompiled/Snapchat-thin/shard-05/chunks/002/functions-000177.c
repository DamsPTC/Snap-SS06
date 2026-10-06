/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c327a0; end: 103c327eb;  */

/* WARNING: Possible PIC construction at 0x000103c327c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c327cc) */

void FUN_103c327a0(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((long *)*param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_slowDealloc_11034f500)(param_1,0xffffffffffffffff,0xffffffffffffffff);
  return;
}



/* Entry: 103c327ec; end: 103c328e3;  */

void FUN_103c327ec(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long extraout_x8;
  long unaff_x20;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [16];
  
  puVar4 = &uStack_a0;
  lVar2 = param_3;
  func_0x000103c31028();
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_103c328b4;
      FUN_103c32ed8(unaff_x20 + 0x10,auStack_90);
      if (*(ulong *)(param_3 + 0x10) >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c328e4);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar4 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_98 = param_2 & 0xffffffffffffff;
      uStack_a0 = param_1;
      func_0x000103c32edc(unaff_x20 + 0x10,auStack_90);
      if (*(ulong *)(param_3 + 0x10) >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c328e0);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    }
    func_0x000108930fac(uVar3,puVar4,lVar2);
  }
  else {
LAB_103c328b4:
    func_0x000103c32f6c();
    func_0x000103c32f2c(0x103c32c84,auStack_70,param_1,param_2,extraout_x8 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c61590(lVar2,0xffffffffffffffff,0xffffffffffffffff);
  }
  return;
}



/* Entry: 103c328e4; end: 103c32963;  */

void FUN_103c328e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5)

{
  code *pcVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  if (*(ulong *)(param_4 + 0x10) >> 0x1f == 0) {
    (*param_5)(*(undefined8 *)(param_2 + 0x10),param_1,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c32964);
  (*pcVar1)();
}



/* Entry: 103c32964; end: 103c32a23;  */

void FUN_103c32964(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_103c32a08;
      FUN_103c32ed8(unaff_x20 + 0x10,auStack_70);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000103c32edc(param_3 + 0x10,auStack_88);
      uVar2 = *(undefined8 *)(param_3 + 0x10);
      puVar1 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_90 = param_2 & 0xffffffffffffff;
      uStack_98 = param_1;
      func_0x000103c32edc(unaff_x20 + 0x10,auStack_70);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000103c32edc(param_3 + 0x10,auStack_88);
      uVar2 = *(undefined8 *)(param_3 + 0x10);
      puVar1 = &uStack_98;
    }
    func_0x00010893104c(uVar3,puVar1,uVar2);
  }
  else {
LAB_103c32a08:
    func_0x000103c32f6c();
    func_0x000103c32f2c(0x103c32ca8,auStack_50);
  }
  return;
}



/* Entry: 103c32a24; end: 103c32a9b;  */

void FUN_103c32a24(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
  func_0x00010893104c(uVar1,param_1,*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Entry: 103c32a9c; end: 103c32b6f;  */

void FUN_103c32a9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103c32b7c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103c32b70; end: 103c32b7b;  */

ulong FUN_103c32b70(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_x8;
  
  puVar3 = PTR__swift_bridgeObjectRelease_11034f258;
  if (((param_3 & 1) != 0) &&
     (uVar6 = *(ulong *)(param_4 + 0x18) >> 1, bVar1 = (long)uVar6 < (long)param_2, param_2 = uVar6,
     bVar1)) {
    if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103c32c60);
      (*pcVar4)();
    }
    func_0x000103c32f34();
    param_2 = extraout_x8;
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)param_2 <= (long)uVar6) {
    param_2 = uVar6;
  }
  if (param_2 == 0) {
    func_0x000103c32f78();
  }
  else {
    lVar5 = 0x112ffa170;
    func_0x0001000285a8(0x112ffa170,&UNK_10dc68c30);
    func_0x000103c32f0c(param_2 << 3);
    func_0x000103c32f44();
    *(ulong *)(param_2 + 0x10) = uVar6;
    *(long *)(param_2 + 0x18) = (lVar5 + -0x20) / 8 << 1;
  }
  uVar2 = param_2 + 0x20;
  lVar5 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(uVar2,lVar5,uVar6 << 3);
  }
  else {
    if (param_2 != param_4 || lVar5 + uVar6 * 8 <= uVar2) {
      func_0x000107c610b8(uVar2,lVar5,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar3)(param_4);
  return param_2;
}



/* Entry: 103c32b7c; end: 103c32c5f;  */

ulong FUN_103c32b7c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong extraout_x8;
  
  if (((param_3 & 1) != 0) &&
     (uVar5 = *(ulong *)(param_4 + 0x18) >> 1, bVar1 = (long)uVar5 < (long)param_2, param_2 = uVar5,
     bVar1)) {
    if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c32c60);
      (*pcVar3)();
    }
    func_0x000103c32f34();
    param_2 = extraout_x8;
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)param_2 <= (long)uVar5) {
    param_2 = uVar5;
  }
  if (param_2 == 0) {
    func_0x000103c32f78();
  }
  else {
    lVar4 = 0x112ffa170;
    func_0x0001000285a8(0x112ffa170,&UNK_10dc68c30);
    func_0x000103c32f0c(param_2 << 3);
    func_0x000103c32f44();
    *(ulong *)(param_2 + 0x10) = uVar5;
    *(long *)(param_2 + 0x18) = (lVar4 + -0x20) / 8 << 1;
  }
  uVar2 = param_2 + 0x20;
  lVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(uVar2,lVar4,uVar5 << 3);
  }
  else {
    if (param_2 != param_4 || lVar4 + uVar5 * 8 <= uVar2) {
      func_0x000107c610b8(uVar2,lVar4,uVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return param_2;
}



/* Entry: 103c32c60; end: 103c32cdf;  */

void FUN_103c32c60(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103c328e4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&SUB_108930f00);
  return;
}



/* Entry: 103c32ce0; end: 103c32ceb;  */

ulong FUN_103c32ce0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong extraout_x8;
  
  puVar3 = PTR__swift_bridgeObjectRelease_11034f258;
  if (((param_3 & 1) != 0) &&
     (uVar6 = *(ulong *)(param_4 + 0x18) >> 1, bVar1 = (long)uVar6 < (long)param_2, param_2 = uVar6,
     bVar1)) {
    if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103c32dd0);
      (*pcVar4)();
    }
    func_0x000103c32f34();
    param_2 = extraout_x8;
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)param_2 <= (long)uVar6) {
    param_2 = uVar6;
  }
  if (param_2 == 0) {
    func_0x000103c32f78();
  }
  else {
    lVar5 = 0x112ffa178;
    func_0x0001000285a8(0x112ffa178,&UNK_10dc68c40);
    func_0x000103c32f0c(param_2 << 4);
    func_0x000103c32f44();
    *(ulong *)(param_2 + 0x10) = uVar6;
    *(long *)(param_2 + 0x18) = (lVar5 + -0x20) / 0x10 << 1;
  }
  uVar2 = param_2 + 0x20;
  lVar5 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(uVar2,lVar5,uVar6 << 4);
  }
  else {
    if (param_2 != param_4 || lVar5 + uVar6 * 0x10 <= uVar2) {
      func_0x000107c610b8(uVar2,lVar5,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar3)(param_4);
  return param_2;
}



/* Entry: 103c32cec; end: 103c32ed7;  */

ulong FUN_103c32cec(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong extraout_x8;
  
  if (((param_3 & 1) != 0) &&
     (uVar5 = *(ulong *)(param_4 + 0x18) >> 1, bVar1 = (long)uVar5 < (long)param_2, param_2 = uVar5,
     bVar1)) {
    if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c32dd0);
      (*pcVar3)();
    }
    func_0x000103c32f34();
    param_2 = extraout_x8;
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)param_2 <= (long)uVar5) {
    param_2 = uVar5;
  }
  if (param_2 == 0) {
    func_0x000103c32f78();
  }
  else {
    lVar4 = 0x112ffa178;
    func_0x0001000285a8(0x112ffa178,&UNK_10dc68c40);
    func_0x000103c32f0c(param_2 << 4);
    func_0x000103c32f44();
    *(ulong *)(param_2 + 0x10) = uVar5;
    *(long *)(param_2 + 0x18) = (lVar4 + -0x20) / 0x10 << 1;
  }
  uVar2 = param_2 + 0x20;
  lVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(uVar2,lVar4,uVar5 << 4);
  }
  else {
    if (param_2 != param_4 || lVar4 + uVar5 * 0x10 <= uVar2) {
      func_0x000107c610b8(uVar2,lVar4,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return param_2;
}



/* Entry: 103c32ed8; end: 103c32f83;  */

void FUN_103c32ed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103c32f84; end: 103c32fdb;  */

undefined8 FUN_103c32f84(void)

{
  undefined8 unaff_x20;
  
  func_0x000103c39a74();
  FUN_103c33294();
  return unaff_x20;
}



/* Entry: 103c32fdc; end: 103c330c7;  */

undefined1  [16] FUN_103c32fdc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  if (*(char *)(unaff_x20 + 4) == '\0') {
    func_0x000107c61434(uVar2);
  }
  else {
    if (*(char *)(unaff_x20 + 4) == '\x01') {
      func_0x000103c39ad4();
      func_0x000107c602fc(0x1c);
      func_0x000107c6142c(uStack_48);
      func_0x000103c39d14("Unknown exception calling ");
      func_0x000103c39f04();
    }
    else {
      func_0x000103c39ad4();
      func_0x000107c602fc(0x1f);
      func_0x000107c6142c(uStack_48);
      func_0x000103c39d14("Invalid enum type: ");
      func_0x000103c39f04();
      func_0x000107c5fb78();
      func_0x000107c5fb78(0x203a65756c617620,0xe800000000000000);
      func_0x000103c39a88();
    }
    func_0x000107c5fb78();
    uVar1 = uStack_50;
    uVar2 = uStack_48;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 103c330c8; end: 103c330e7;  */

void FUN_103c330c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c330e8; end: 103c33117;  */

void FUN_103c330e8(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000103c39bac();
  func_0x000103c39a74();
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 103c33118; end: 103c33123;  */

void FUN_103c33118(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 103c33124; end: 103c33167;  */

void FUN_103c33124(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000108933c0c();
  }
  func_0x000100d6984c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c33168; end: 103c33207;  */

void FUN_103c33168(long param_1,uint param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  if (pcVar2 == (code *)0x0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (lVar3 == 0) {
      FUN_103c33444(0xd000000000000040,0x800000010f1b06f0);
    }
    else {
      func_0x000103c397e4(param_1 + 0x10,auStack_48);
      func_0x000108933c18(lVar3,*(undefined8 *)(param_1 + 0x10),param_2 & 1);
    }
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000103c398dc();
    (*pcVar2)(param_1);
    func_0x000100d6984c(pcVar2,uVar1);
  }
  return;
}



/* Entry: 103c33208; end: 103c3322b;  */

undefined8 FUN_103c33208(void)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Entry: 103c3322c; end: 103c3325f;  */

void FUN_103c3322c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103c33260; end: 103c3328f;  */

undefined1  [16] FUN_103c33260(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_103c33290;
  return auVar1;
}



/* Entry: 103c33290; end: 103c33293;  */

void FUN_103c33290(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103c33294; end: 103c332bf;  */

void FUN_103c33294(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000108932f9c();
  if (param_1 != 0) {
    *(long *)(unaff_x20 + 0x10) = param_1;
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c332c0);
  (*pcVar1)();
}



/* Entry: 103c332c0; end: 103c332cb;  */

void FUN_103c332c0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 103c332cc; end: 103c33343;  */

void FUN_103c332cc(void)

{
  func_0x000107c61168(&PTR_PTR_112ffa2b0);
  return;
}



/* Entry: 103c33344; end: 103c3334f;  */

void FUN_103c33344(void)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  (*(code *)&UNK_108933004)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c33350; end: 103c33377;  */

void FUN_103c33350(void)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  func_0x00010893300c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c33378; end: 103c333a7;  */

void FUN_103c33378(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  func_0x000108933010(*(undefined8 *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103c333a8; end: 103c33443;  */

void FUN_103c333a8(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  
  func_0x000103c39718();
  iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  func_0x000108933014();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000108933028();
    if (lVar2 == 0) {
      plVar5 = (long *)0x800000010f1b0740;
      lVar2 = -0x2fffffffffffffd8;
      plVar4 = param_2;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c61174();
      func_0x000107c5faec();
      plVar4 = param_2;
      func_0x000107c61170(lVar3);
      plVar5 = param_2;
    }
    func_0x000100e49460();
    func_0x000103c39700();
    *plVar4 = lVar2;
    plVar4[1] = (long)plVar5;
    func_0x000103c39790();
  }
  return;
}



/* Entry: 103c33444; end: 103c334df;  */

void FUN_103c33444(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  long unaff_x20;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [32];
  
  puVar2 = &uStack_60;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_103c334bc;
      func_0x000103c397e4(unaff_x20 + 0x10,auStack_50);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar2 = (ulong *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_58 = param_2 & 0xffffffffffffff;
      uStack_60 = param_1;
      func_0x000103c397e4(unaff_x20 + 0x10,auStack_50);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    }
    func_0x0001089330a4(uVar1,puVar2);
  }
  else {
LAB_103c334bc:
    func_0x000107c602f0(FUN_103c33538);
  }
  return;
}



/* Entry: 103c334e0; end: 103c33537;  */

void FUN_103c334e0(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  func_0x0001089330a4(*(undefined8 *)(param_2 + 0x10),param_1);
  return;
}



/* Entry: 103c33538; end: 103c3354f;  */

void FUN_103c33538(void)

{
  FUN_103c334e0();
  return;
}



/* Entry: 103c33550; end: 103c335f7;  */

undefined1  [16] FUN_103c33550(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar3 [16];
  
  func_0x000103c39718();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x0001089330ac(lVar1,param_1,(uint)param_2 & 1);
  if (lVar1 == 0) {
    func_0x000103c39920();
    if (unaff_x21 == 0) {
      func_0x000103c3985c("ValdiMarshaller.toString unknown error");
      func_0x000103c39700();
      func_0x000103c39778(0x26);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61174();
    func_0x000107c5faec(lVar1);
    func_0x000107c61170(lVar2);
    unaff_x20 = lVar1;
    param_2 = param_1;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = unaff_x20;
  return auVar3;
}



/* Entry: 103c335f8; end: 103c33603;  */

void FUN_103c335f8(undefined8 param_1)

{
  code *unaff_x19;
  long unaff_x20;
  
  func_0x000103c39bac(param_1,&UNK_108933b24);
  func_0x000103c3973c();
  func_0x000107c61428();
  (*unaff_x19)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c33604; end: 103c33653;  */

long FUN_103c33604(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  
  func_0x000103c39bac();
  FUN_103c33654();
  func_0x000103c39a74();
  *(undefined8 *)(param_1 + 0x10) = unaff_x21;
  *(undefined8 *)(param_1 + 0x18) = unaff_x19;
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x000103c399b0();
  lVar1 = param_1;
  FUN_103c335f8(param_1);
  func_0x000107c61574(param_1);
  return lVar1;
}



/* Entry: 103c33654; end: 103c33673;  */

void FUN_103c33654(void)

{
  func_0x000107c61168(&PTR_PTR_112ffa1f8);
  return;
}



/* Entry: 103c33674; end: 103c3368b;  */

void FUN_103c33674(undefined8 param_1)

{
  code *unaff_x19;
  long unaff_x20;
  
  func_0x000103c39bac(param_1,&UNK_108933104);
  func_0x000103c3973c();
  func_0x000107c61428();
  (*unaff_x19)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c3368c; end: 103c336bf;  */

void FUN_103c3368c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  func_0x000108933134(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c336c0; end: 103c336cb;  */

void FUN_103c336c0(undefined8 param_1)

{
  code *unaff_x19;
  long unaff_x20;
  
  func_0x000103c39bac(param_1,&UNK_10893314c);
  func_0x000103c3973c();
  func_0x000107c61428();
  (*unaff_x19)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c336cc; end: 103c3370b;  */

void FUN_103c336cc(void)

{
  code *unaff_x19;
  long unaff_x20;
  
  func_0x000103c39bac();
  func_0x000103c3973c();
  func_0x000107c61428();
  (*unaff_x19)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c3370c; end: 103c33773;  */

void FUN_103c3370c(uint param_1)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  func_0x000108933164(*(undefined8 *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103c33774; end: 103c3386b;  */

undefined8 FUN_103c33774(undefined8 *****param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  long unaff_x20;
  ulong uVar3;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [24];
  
  if ((param_2 >> 0x3c & 1) != 0) {
    func_0x000107c5fb28();
    ppppuVar2 = param_1[2];
    func_0x000103c397e4(unaff_x20 + 0x10,auStack_48);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000108933194(uVar1,param_1 + 4,(long)ppppuVar2 + -1);
    func_0x000107c61574(param_1);
    return uVar1;
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
      uVar3 = param_2;
      if (param_1 == (undefined8 *****)0x0) {
        func_0x000103c397e4(unaff_x20 + 0x10,auStack_48);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
        param_1 = (undefined8 *****)0x0;
        uVar3 = 0;
        goto LAB_103c337e0;
      }
    }
    else {
      uVar3 = (ulong)param_1 & 0xffffffffffff;
      param_1 = (undefined8 *****)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    func_0x000103c397e4(unaff_x20 + 0x10,auStack_48);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  else {
    uVar3 = param_2 >> 0x38 & 0xf;
    uStack_50 = param_2 & 0xffffffffffffff;
    ppppuStack_58 = param_1;
    func_0x000103c397e4(unaff_x20 + 0x10,auStack_48);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    param_1 = &ppppuStack_58;
  }
LAB_103c337e0:
  func_0x000108933194(uVar1,param_1,uVar3);
  return uVar1;
}



/* Entry: 103c3386c; end: 103c33a4b;  */

void FUN_103c3386c(undefined8 param_1,ulong param_2)

{
  long extraout_x8;
  
  func_0x000103c39bac(param_2 >> 0x3e);
                    /* WARNING: Could not recover jumptable at 0x000103c338b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&UNK_100d6985c + extraout_x8 * 4) + 0x103c338a8))();
  return;
}



/* Entry: 103c33a4c; end: 103c33a63;  */

void FUN_103c33a4c(void)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  (*(code *)&UNK_1089331e8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c33a64; end: 103c33a93;  */

void FUN_103c33a64(code *param_1)

{
  long unaff_x20;
  
  func_0x000103c3973c();
  func_0x000107c61428();
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103c33a94; end: 103c33b3f;  */

void FUN_103c33a94(long param_1)

{
  undefined4 uStack_34;
  
  func_0x0001000a8868(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000103c39e74(&uStack_34);
  func_0x000103c33740(uStack_34);
  return;
}



/* Entry: 103c33b40; end: 103c33c8b;  */

long FUN_103c33b40(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (lRam0000000112ffa050 != -1) {
    func_0x000107c61568(0x112ffa050,FUN_103c31fa0);
  }
  lVar1 = lRam000000011380d138;
  func_0x000103c397a0(lRam000000011380d138 + 0x10,auStack_68);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  lVar1 = unaff_x20 + 0x10;
  func_0x000103c397a0(lVar1,auStack_80);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000103c39974();
  func_0x000107c5fb28();
  lVar2 = lVar1;
  FUN_103c30f3c();
  func_0x000107c61574(lVar1);
  func_0x000108933364(lVar4,uVar5,lVar2);
  if (lVar4 < 0) {
    func_0x000103c39ad4();
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_88);
    func_0x000103c39974();
    func_0x000107c5fb78();
    puVar3 = (undefined8 *)0xea0000000000646e;
    func_0x000107c5fb78(0x756f6620746f6e20);
    func_0x000100e49460();
    func_0x000103c39700();
    *puVar3 = 0x6373207373616c43;
    puVar3[1] = 0xed000020616d6568;
    func_0x000103c39790();
  }
  return lVar4;
}



/* Entry: 103c33c8c; end: 103c33cc7;  */

void FUN_103c33c8c(void)

{
  long unaff_x22;
  
  func_0x000103c39874();
  func_0x000107c614f0();
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c33cc8; end: 103c33da7;  */

ulong FUN_103c33cc8(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong unaff_x20;
  undefined1 auStack_50 [24];
  undefined *puStack_38;
  
  func_0x000103c3999c();
  puStack_38 = PTR_DAT_11269cbe8;
  func_0x000107c615f0();
  puVar2 = (undefined8 *)0x1;
  func_0x000107c61494();
  if (param_1 == 0) {
    func_0x000103c399a8();
    func_0x000103c3985c("pushObjCObject object must be a SCValdiMarshallableObject");
    func_0x000103c39700();
    *puVar2 = 0xd000000000000039;
    puVar2[1] = unaff_x20;
    func_0x000103c39790();
  }
  else {
    uVar1 = param_1;
    func_0x000107c61150();
    if ((uVar1 & 1) == 0) {
      func_0x000103c3985c("pushToValdiMarshaller is nil");
      func_0x000103c39700();
      func_0x000103c39778(0x1c);
      func_0x000103c399a8();
    }
    else {
      func_0x000103c397a0(unaff_x20 + 0x10,auStack_50);
      func_0x000107c4f6d8(param_1);
      func_0x000103c399a8();
      unaff_x20 = param_1;
    }
  }
  return unaff_x20;
}



/* Entry: 103c33da8; end: 103c33dfb;  */

void FUN_103c33da8(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (*param_2)();
  if (unaff_x21 == 0) {
    func_0x000103c3972c(unaff_x20 + 0x10);
    func_0x000108933434(*(undefined8 *)(unaff_x20 + 0x10),param_1);
  }
  return;
}



/* Entry: 103c33dfc; end: 103c33e37;  */

void FUN_103c33dfc(void)

{
  long unaff_x22;
  
  func_0x000103c39874();
  func_0x000107c614f0();
  (**(code **)(*(long *)(unaff_x22 + 8) + 8))();
  return;
}



/* Entry: 103c33e38; end: 103c33e5b;  */

void FUN_103c33e38(undefined8 param_1)

{
  FUN_103c3a5a4(param_1);
  return;
}



/* Entry: 103c33e5c; end: 103c33e97;  */

void FUN_103c33e5c(undefined8 param_1)

{
  FUN_103c36cc8(param_1,&UNK_108933624);
  return;
}



/* Entry: 103c33e98; end: 103c33ee7;  */

void FUN_103c33e98(void)

{
  code *in_x3;
  long unaff_x21;
  
  func_0x000103c39bc4();
  (*in_x3)();
  if (unaff_x21 == 0) {
    func_0x000103c399b8();
    FUN_103c372ec();
  }
  return;
}



/* Entry: 103c33ee8; end: 103c33f07;  */

uint FUN_103c33ee8(undefined8 param_1)

{
  FUN_103c33f08(param_1,&UNK_108933640);
  return (uint)param_1 & 1;
}



/* Entry: 103c33f08; end: 103c33f57;  */

undefined8 FUN_103c33f08(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000103c39718();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_2)(uVar1,param_1);
  func_0x000103c399e4();
  return uVar1;
}



/* Entry: 103c33f58; end: 103c33f93;  */

undefined8 FUN_103c33f58(undefined8 param_1)

{
  func_0x000103c3999c();
  func_0x000103c39718();
  func_0x000103c39cfc();
  func_0x000108933670();
  func_0x000103c39920();
  return param_1;
}



/* Entry: 103c33f94; end: 103c33faf;  */

void FUN_103c33f94(undefined8 param_1)

{
  FUN_103c36cc8(param_1,&UNK_1089336a0);
  return;
}



/* Entry: 103c33fb0; end: 103c33ff3;  */

undefined8 FUN_103c33fb0(undefined8 param_1)

{
  func_0x000103c3999c();
  func_0x000103c39718();
  func_0x000103c39cfc();
  func_0x0001089336d0();
  func_0x000103c39920();
  return param_1;
}



/* Entry: 103c33ff4; end: 103c34183;  */

undefined1  [16] FUN_103c33ff4(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000107c5fb10();
  func_0x000103c39c70(*(undefined8 *)(lVar2 + -8));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000103c398b0();
  lVar2 = 0;
  func_0x000107c5edec();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000103c398b0();
  func_0x000103c397a0(unaff_x20 + 0x10,auStack_68);
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000108933708();
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)0xe000000000000000;
  }
  else {
    puVar5 = puVar3;
    func_0x00010893414c();
    if (param_1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      param_1 = (undefined8 *)0xe000000000000000;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c34184);
        (*pcVar1)();
      }
      (**(code **)(lVar6 + 0x68))
                (extraout_x9_00 - extraout_x8_00,
                 *(undefined4 *)PTR___s10Foundation4DataV11DeallocatorO4noneyA2EmFWC_1103509d8,lVar2
                );
      puVar4 = puVar5;
      func_0x000107c5edf4(puVar5,param_1,extraout_x9_00 - extraout_x8_00);
      func_0x000107c5fb04(extraout_x9 - extraout_x8);
      func_0x000103c399b8(puVar4);
      func_0x000107c5faf0();
      if (param_1 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x800000010f1b0800;
        func_0x000100e49460();
        func_0x000103c39700();
        *param_1 = 0xd000000000000021;
        param_1[1] = 0x800000010f1b0800;
        func_0x000103c39790();
        func_0x000103c39d60();
        func_0x0001089341bc(puVar3);
        goto LAB_103c34158;
      }
      func_0x000103c39d60();
    }
    func_0x0001089341bc(puVar3);
    puVar5 = param_1;
  }
LAB_103c34158:
  auVar7._8_8_ = puVar5;
  auVar7._0_8_ = puVar4;
  return auVar7;
}



/* Entry: 103c34184; end: 103c34203;  */

void FUN_103c34184(long param_1)

{
  long unaff_x21;
  
  func_0x000103c3999c();
  func_0x000103c39718();
  func_0x000103c39cfc();
  func_0x000108933758();
  if (param_1 == 0) {
    func_0x000103c39920();
  }
  else {
    func_0x000103c39cfc();
    func_0x0001089337c0();
    func_0x000103c39920();
    if (unaff_x21 == 0) {
      func_0x000103c39a88();
      func_0x000107c5ee38();
    }
  }
  return;
}



/* Entry: 103c34204; end: 103c3424f;  */

void FUN_103c34204(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)(param_4 + 0x10) + 8);
  func_0x000103c398dc();
  (*pcVar1)(param_1);
  return;
}



/* Entry: 103c34250; end: 103c342cf;  */

void FUN_103c34250(long param_1)

{
  long lVar1;
  long unaff_x21;
  
  func_0x000103c3999c();
  func_0x000103c39718();
  func_0x000103c39cfc();
  func_0x000108933bcc();
  if (param_1 == 0) {
    func_0x000103c3985c("Function not found");
    func_0x000103c39700();
    func_0x000103c39778(0x12);
  }
  else {
    lVar1 = param_1;
    func_0x000103c39920();
    if (unaff_x21 == 0) {
      FUN_103c33654();
      func_0x000103c39ba0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(long *)(lVar1 + 0x20) = param_1;
    }
  }
  return;
}



/* Entry: 103c342d0; end: 103c3430f;  */

void FUN_103c342d0(void)

{
  func_0x000103c3999c();
  func_0x000103c39e40();
  func_0x000103c398dc();
  FUN_103c39f18();
  return;
}



/* Entry: 103c34310; end: 103c34367;  */

undefined8 FUN_103c34310(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(*(long *)(param_3 + 8) + 8);
  func_0x000103c398dc();
  (*pcVar1)(&uStack_38);
  return uStack_38;
}



/* Entry: 103c34368; end: 103c343b3;  */

void FUN_103c34368(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_4 + 8);
  func_0x000103c398dc();
  (*pcVar1)(param_1);
  return;
}



/* Entry: 103c343b4; end: 103c344f3;  */

void FUN_103c343b4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  long lStack_38;
  
  uVar3 = 0;
  puVar4 = &uStack_80;
  uVar5 = 0xd000000000000016;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000108933568(lVar2,param_2);
  if (lVar2 == 0) {
    pcVar1 = "Proxy object not found";
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_103c333a8();
    if (unaff_x21 != 0) {
      return;
    }
    func_0x000107c615f0(lVar2);
    lStack_38 = lVar2;
    func_0x000107c6147c(&uStack_80,&lStack_38,PTR___syXlN_11034f1a0 + 8,PTR___sypN_11034f1a8 + 8,6);
    if ((uVar3 & 1) != 0) {
      func_0x000100102924(&uStack_80,param_1);
      return;
    }
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_103c39598(&uStack_80,0x112d387f8,&UNK_10d902650);
    pcVar1 = "Proxy object is not of type Any";
    uVar5 = 0xd00000000000001f;
  }
  func_0x000100e49460();
  func_0x000107c613f8(&UNK_1106ed6c0,puVar4,0,0);
  *puVar4 = uVar5;
  puVar4[1] = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 4) = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 103c344f4; end: 103c3466f;  */

void FUN_103c344f4(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c60188();
  lVar1 = *(long *)(lVar1 + -8);
  func_0x000103c39bfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = auStack_80 + -extraout_x8;
  func_0x000103c397a0(unaff_x20 + 0x10,auStack_68);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000108933568();
  if (uVar2 == 0) {
    uStack_70 = 0x800000010f1b0850;
    uVar2 = 0xd000000000000016;
  }
  else {
    FUN_103c333a8();
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = uVar2;
    func_0x000107c615f0();
    uStack_78 = uVar2;
    func_0x000103c39b70(PTR___syXlN_11034f1a0);
    if ((uVar3 & 1) != 0) {
      func_0x000103c39930(puVar4,0);
      func_0x000103c39ee0();
      func_0x000103c39d08();
      func_0x000103c39b84();
      return;
    }
    param_1 = (undefined8 *)0x1;
    func_0x000103c39930(puVar4);
    func_0x000103c39d90(*(undefined8 *)(lVar1 + 8),puVar4);
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(uStack_70);
    func_0x000103c39d14("Proxy object is not of type ");
    uStack_78 = 0xd00000000000001c;
    uStack_70 = extraout_x8_00;
    func_0x000103c39e10();
    func_0x000107c5fb78();
    func_0x000103c39ac4();
    uVar2 = uStack_78;
  }
  func_0x000100e49460();
  func_0x000103c39700();
  *param_1 = uVar2;
  param_1[1] = uStack_70;
  func_0x000103c39790();
  return;
}



/* Entry: 103c34670; end: 103c3481b;  */

void FUN_103c34670(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x20;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *in_stack_00000008;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_18 [24];
  
  func_0x000103c39bd0();
  lVar2 = 0;
  func_0x000107c60188();
  lVar2 = *(long *)(lVar2 + -8);
  func_0x000103c39bfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = auStack_40 + -extraout_x8_00;
  in_stack_00000008 = PTR_DAT_11269cbe8;
  puVar3 = (undefined8 *)0x1;
  func_0x000107c6149c(param_2,1,&stack0x00000008);
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_30 = 0xe000000000000000;
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(uStack_30);
    func_0x000103c39d14("Not a marshallable object ");
    uStack_38 = 0xd00000000000001a;
    uStack_30 = extraout_x8_01;
  }
  else {
    func_0x000103c397a0(unaff_x20 + 0x10,auStack_18);
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    func_0x000107c614e8(param_2);
    func_0x00010b967778(uVar4,param_1,param_2);
    func_0x000107c61180();
    func_0x000107c60234(&uStack_38);
    func_0x000103c39e80();
    func_0x000103c39b70(PTR___sypN_11034f1a8);
    if ((uVar4 & 1) != 0) {
      func_0x000103c39930(puVar5,0);
      func_0x000103c39ee0();
      func_0x000103c39b84(extraout_x8,puVar5);
      return;
    }
    puVar3 = (undefined8 *)0x1;
    func_0x000103c39930(puVar5);
    func_0x000103c39d90(*(undefined8 *)(lVar2 + 8),puVar5);
    uStack_38 = 0;
    uStack_30 = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(uStack_30);
    func_0x000103c39d14("Proxy object is not of type ");
    uStack_38 = 0xd00000000000001c;
    uStack_30 = extraout_x8_02;
  }
  func_0x000103c39e10();
  func_0x000107c5fb78();
  func_0x000103c39ac4();
  uVar1 = uStack_38;
  func_0x000100e49460();
  func_0x000103c39700();
  *puVar3 = uVar1;
  puVar3[1] = uStack_30;
  func_0x000103c39790();
  return;
}



/* Entry: 103c3481c; end: 103c348f3;  */

void FUN_103c3481c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_58;
  
  lVar1 = param_3;
  lVar2 = param_3;
  FUN_103c38f28(param_3,param_3,&DAT_10e7bafc0);
  if (lVar1 == 0) {
    FUN_103c344f4(param_1,param_2,param_3);
  }
  else {
    func_0x000103c398dc();
    func_0x000103c39d84(&uStack_58);
    if (unaff_x21 == 0) {
      uStack_70 = uStack_58;
      lStack_68 = lVar2;
      func_0x000103c398ec();
      func_0x000107c6147c(param_1,&uStack_70,lVar1,param_3,7);
    }
  }
  return;
}



/* Entry: 103c348f4; end: 103c34ccf;  */

void FUN_103c348f4(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  code *pcVar10;
  ulong uStack_a0;
  undefined *puStack_98;
  ulong uStack_88;
  undefined *puStack_80;
  ulong auStack_78 [3];
  undefined *puStack_58;
  
  puVar8 = &uStack_a0;
  puVar5 = &uStack_a0;
  uVar3 = param_3;
  func_0x000103c39ab4(param_3,PTR___sSbN_11034dd40);
  if (uVar3 == 0) {
    func_0x000103c39ab4();
    if (uVar3 == 0) {
      func_0x000103c39ab4();
      if (uVar3 == 0) {
        puVar6 = PTR___sSdN_11034dd90;
        func_0x000103c39ab4();
        if (uVar3 == 0) {
          func_0x000103c39bb8();
          func_0x000103c39ab4();
          if (uVar3 == 0) {
            puVar6 = PTR___s10Foundation4DataVN_110350ae0;
            func_0x000103c39ab4();
            if (uVar3 == 0) {
              func_0x000103c39aa8();
              if (uVar3 == 0) {
                func_0x000103c39aa8();
                if (uVar3 == 0) {
                  func_0x000103c39aa8();
                  if (uVar3 == 0) {
                    puStack_58 = PTR_DAT_11269cbe8;
                    uVar3 = param_4;
                    func_0x000107c6149c(param_4,1,&puStack_58);
                    if (uVar3 == 0) {
                      func_0x000103c39ad4();
                      func_0x000107c602fc(0x37);
                      func_0x000107c5fb78(0xd000000000000018,0x800000010f1b08b0);
                      auStack_78[0] = param_4;
                      func_0x000107c614e4(param_4);
                      func_0x000107c5fb18(auStack_78,param_4);
                      func_0x000107c5fb78();
                      func_0x000103c39ac4();
                      puVar8 = (ulong *)0x800000010f1b08d0;
                      func_0x000107c5fb78(0xd00000000000001d);
                      func_0x000100e49460();
                      func_0x000103c39700();
                      *puVar8 = uStack_a0;
                      puVar8[1] = (ulong)puStack_98;
                      func_0x000103c39790();
                      return;
                    }
                    func_0x000103c397a0(unaff_x20 + 0x10,auStack_78);
                    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
                    func_0x000107c614e8(uVar3);
                    func_0x00010b967778(uVar9,param_3,uVar3);
                    func_0x000107c61180();
                    func_0x000107c60234(&uStack_a0);
                    func_0x000103c39e80();
                    puVar4 = PTR___sypN_11034f1a8 + 8;
                    goto LAB_103c34b1c;
                  }
                  pcVar10 = *(code **)(puVar6 + 8);
                  uStack_88 = uVar3;
                  puStack_80 = puVar6;
                  func_0x0001000c5db4(&uStack_a0);
                  func_0x000103c398dc();
                  (*pcVar10)(puVar5);
                  if (unaff_x21 != 0) goto LAB_103c34a98;
                  puVar4 = (undefined *)0x112ffa188;
                  puVar7 = &UNK_10dc68c50;
                }
                else {
                  func_0x000103c398dc();
                  func_0x000103c39d84(auStack_78);
                  if (unaff_x21 != 0) {
                    return;
                  }
                  uStack_a0 = auStack_78[0];
                  puVar4 = (undefined *)0x112ffa180;
                  puVar7 = &UNK_10dc68c48;
                  puStack_98 = puVar6;
                }
              }
              else {
                pcVar10 = *(code **)(*(long *)(puVar6 + 0x10) + 8);
                uStack_88 = uVar3;
                puStack_80 = puVar6;
                func_0x0001000c5db4(&uStack_a0);
                func_0x000103c398dc();
                (*pcVar10)(puVar8);
                if (unaff_x21 != 0) {
LAB_103c34a98:
                  func_0x0001014b0bdc(&uStack_a0);
                  return;
                }
                puVar4 = (undefined *)0x112ffa190;
                puVar7 = &UNK_10dc68c58;
              }
              func_0x0001000285a8(puVar4,puVar7);
              goto LAB_103c34b1c;
            }
            func_0x000103c39be8();
            FUN_103c34184();
            uStack_a0 = uVar3;
            puVar4 = PTR___s10Foundation4DataVN_110350ae0;
            puStack_98 = puVar6;
          }
          else {
            func_0x000103c39be8();
            FUN_103c33ff4();
            uStack_a0 = uVar3;
            puVar4 = PTR___sSSN_11034da80;
            puStack_98 = puVar6;
          }
        }
        else {
          func_0x000103c39be8();
          FUN_103c33fb0();
          uStack_a0 = param_2;
          puVar4 = PTR___sSdN_11034dd90;
        }
      }
      else {
        func_0x000103c39be8();
        FUN_103c33f94();
        uStack_a0 = uVar3;
        puVar4 = PTR___ss5Int64VN_11034ee50;
      }
      if (unaff_x21 != 0) {
        return;
      }
    }
    else {
      func_0x000103c39be8();
      uVar2 = (undefined4)uVar3;
      FUN_103c33f58();
      if (unaff_x21 != 0) {
        return;
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar2);
      puVar4 = PTR___ss5Int32VN_11034ee20;
    }
  }
  else {
    func_0x000103c39be8();
    uVar1 = (undefined1)uVar3;
    FUN_103c33ee8();
    if (unaff_x21 != 0) {
      return;
    }
    uStack_a0 = CONCAT71(uStack_a0._1_7_,uVar1) & 0xffffffffffffff01;
    puVar4 = PTR___sSbN_11034dd40;
  }
LAB_103c34b1c:
  func_0x000107c6147c(param_1,&uStack_a0,puVar4,param_4,7);
  return;
}



/* Entry: 103c34cd0; end: 103c34d1f;  */

/* WARNING: Removing unreachable block (ram,0x000103c34cfc) */

uint FUN_103c34cd0(void)

{
  long unaff_x21;
  uint unaff_w22;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c39c28();
    FUN_103c33ee8();
    func_0x000103c39e60();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  return unaff_w22 & 1;
}



/* Entry: 103c34d20; end: 103c34d6f;  */

/* WARNING: Removing unreachable block (ram,0x000103c34d4c) */

void FUN_103c34d20(void)

{
  long unaff_x21;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c39c28();
    FUN_103c33f58();
    func_0x000103c39e60();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  return;
}



/* Entry: 103c34d70; end: 103c34dbb;  */

/* WARNING: Removing unreachable block (ram,0x000103c34d9c) */

void FUN_103c34d70(void)

{
  long unaff_x21;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c39c28();
    FUN_103c33f94();
    func_0x000103c39c20();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  func_0x000103c39980();
  return;
}



/* Entry: 103c34dbc; end: 103c34e1b;  */

/* WARNING: Removing unreachable block (ram,0x000103c34dec) */

undefined8 FUN_103c34dbc(undefined8 param_1)

{
  long unaff_x21;
  undefined8 unaff_d8;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c39c28();
    FUN_103c33fb0();
    FUN_103c33350();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
    param_1 = unaff_d8;
  }
  return param_1;
}



/* Entry: 103c34e1c; end: 103c34e53;  */

void FUN_103c34e1c(undefined8 param_1,undefined8 param_2)

{
  FUN_103c34e54(param_1,param_2,FUN_103c33ff4);
  return;
}



/* Entry: 103c34e54; end: 103c34eaf;  */

/* WARNING: Removing unreachable block (ram,0x000103c34e8c) */

void FUN_103c34e54(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x21;
  
  func_0x000103c398d0();
  func_0x000103c39de8();
  if (unaff_x21 == 0) {
    func_0x000103c39c28();
    (*param_3)();
    func_0x000103c39dd0();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  func_0x000103c39d08();
  return;
}



/* Entry: 103c34eb0; end: 103c34f03;  */

/* WARNING: Removing unreachable block (ram,0x000103c34ee0) */

void FUN_103c34eb0(void)

{
  long unaff_x21;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c398dc();
    func_0x000103c39884();
    FUN_103c38348();
    func_0x000103c39e60();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  return;
}



/* Entry: 103c34f04; end: 103c34f57;  */

/* WARNING: Removing unreachable block (ram,0x000103c34f34) */

void FUN_103c34f04(void)

{
  long unaff_x21;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c398dc();
    func_0x000103c39884();
    FUN_103c383b8();
    func_0x000103c39c20();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  return;
}



/* Entry: 103c34f58; end: 103c34f8f;  */

void FUN_103c34f58(undefined8 param_1,undefined8 param_2)

{
  FUN_103c34f90(param_1,param_2,FUN_103c38428);
  return;
}



/* Entry: 103c34f90; end: 103c35003;  */

/* WARNING: Removing unreachable block (ram,0x000103c34fcc) */

undefined1  [16] FUN_103c34f90(code *param_1,undefined8 param_2,code *param_3)

{
  long unaff_x21;
  undefined8 unaff_x23;
  undefined1 auVar1 [16];
  
  func_0x000103c398d0();
  func_0x000103c39de8();
  if (unaff_x21 == 0) {
    func_0x000103c398dc();
    func_0x000103c39884();
    (*param_3)();
    FUN_103c33350();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
    param_1 = param_3;
    param_2 = unaff_x23;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 103c35004; end: 103c3505b;  */

/* WARNING: Removing unreachable block (ram,0x000103c35038) */

void FUN_103c35004(void)

{
  long unaff_x21;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c398dc();
    func_0x000103c39884();
    FUN_103c38530();
    func_0x000103c39dd0();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  func_0x000103c39d08();
  return;
}



/* Entry: 103c3505c; end: 103c35077;  */

void FUN_103c3505c(undefined8 param_1,undefined8 param_2)

{
  FUN_103c34e54(param_1,param_2,FUN_103c37c50);
  return;
}



/* Entry: 103c35078; end: 103c350af;  */

void FUN_103c35078(void)

{
  func_0x000103c39874();
  func_0x000103c39b1c();
  FUN_103c350b0();
  func_0x000103c399c4();
  func_0x000103c39aec();
  return;
}



/* Entry: 103c350b0; end: 103c35113;  */

undefined1  [16] FUN_103c350b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1106ed7a8;
  func_0x000107c613fc(&UNK_1106ed7a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = 0x103c396ec;
  return auVar2;
}



/* Entry: 103c35114; end: 103c3515b;  */

void FUN_103c35114(void)

{
  func_0x000103c39bc4();
  func_0x000103c39b1c();
  FUN_103c3515c();
  func_0x000103c39b48();
  func_0x000103c39a00();
  func_0x000103c39e68();
  return;
}



/* Entry: 103c3515c; end: 103c351bf;  */

undefined1  [16] FUN_103c3515c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1106ed780;
  func_0x000107c613fc(&UNK_1106ed780,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_103c3965c;
  return auVar2;
}



/* Entry: 103c351c0; end: 103c35227;  */

undefined8 FUN_103c351c0(void)

{
  undefined8 uStack_48;
  
  func_0x000103c39d2c();
  func_0x000103c3998c();
  func_0x000103c39b1c();
  FUN_103c35228();
  func_0x000103c39a64(&uStack_48);
  func_0x000103c39da4();
  return uStack_48;
}



/* Entry: 103c35228; end: 103c3528b;  */

undefined1  [16] FUN_103c35228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1106ed758;
  func_0x000107c613fc(&UNK_1106ed758,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_103c39640;
  return auVar2;
}



/* Entry: 103c3528c; end: 103c352ff;  */

undefined8 FUN_103c3528c(void)

{
  undefined8 uStack_48;
  
  func_0x000103c39d2c();
  func_0x000103c3998c();
  func_0x000103c39b1c();
  FUN_103c35300();
  func_0x000107c60188(0);
  func_0x000103c39a64(&uStack_48);
  func_0x000103c39da4();
  return uStack_48;
}



/* Entry: 103c35300; end: 103c35363;  */

undefined1  [16] FUN_103c35300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1106ed730;
  func_0x000107c613fc(&UNK_1106ed730,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_103c39624;
  return auVar2;
}



/* Entry: 103c35364; end: 103c3539f;  */

void FUN_103c35364(void)

{
  func_0x000103c39874();
  FUN_103c353a0();
  func_0x000103c399c4();
  func_0x000103c39aec();
  return;
}



/* Entry: 103c353a0; end: 103c353fb;  */

undefined1  [16] FUN_103c353a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1106ed708;
  func_0x000107c613fc(&UNK_1106ed708,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_103c39608;
  return auVar2;
}



/* Entry: 103c353fc; end: 103c35447;  */

void FUN_103c353fc(void)

{
  func_0x000103c39bc4();
  FUN_103c35448();
  func_0x000103c39b48();
  func_0x000103c39a00();
  func_0x000103c39e68();
  return;
}



/* Entry: 103c35448; end: 103c354a3;  */

undefined1  [16] FUN_103c35448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1106ed6e0;
  func_0x000107c613fc(&UNK_1106ed6e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_103c395ec;
  return auVar2;
}



/* Entry: 103c354a4; end: 103c354ef;  */

/* WARNING: Removing unreachable block (ram,0x000103c354d0) */

void FUN_103c354a4(void)

{
  long unaff_x21;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c39c28();
    FUN_103c34250();
    func_0x000103c39c20();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  func_0x000103c39980();
  return;
}



/* Entry: 103c354f0; end: 103c3553f;  */

/* WARNING: Removing unreachable block (ram,0x000103c35520) */

void FUN_103c354f0(void)

{
  long unaff_x21;
  
  func_0x000103c397ac();
  func_0x000103c39840();
  if (unaff_x21 == 0) {
    func_0x000103c398dc();
    func_0x000103c39884();
    FUN_103c385b0();
    func_0x000103c39c20();
    func_0x000103c398e4();
  }
  else {
    func_0x000103c398e4();
  }
  func_0x000103c39980();
  return;
}



/* Entry: 103c35540; end: 103c3558b;  */

void FUN_103c35540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000103c398d0();
  FUN_103c3370c(param_3);
  func_0x000103c39718();
  func_0x000103c397d4();
  func_0x000103c39920();
  func_0x000103c3996c();
  func_0x000103c398e4();
  return;
}



/* Entry: 103c3558c; end: 103c355d7;  */

void FUN_103c3558c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000103c398d0();
  func_0x000103c33740(param_3);
  func_0x000103c39718();
  func_0x000103c397d4();
  func_0x000103c39920();
  func_0x000103c3996c();
  func_0x000103c398e4();
  return;
}


