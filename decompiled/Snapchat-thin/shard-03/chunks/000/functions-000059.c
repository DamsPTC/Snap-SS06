/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10243a4e4; end: 10243a59f;  */

void FUN_10243a4e4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  if (param_3 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_2,param_3);
  }
  else {
    param_2 = 0;
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10243a5a0; end: 10243a8ef;  */

void FUN_10243a5a0(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = &UNK_110508620;
  func_0x000107c613fc(&UNK_110508620,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  puVar2[0x20] = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  puVar3 = &UNK_110508648;
  func_0x000107c613fc(&UNK_110508648,0x21,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  puVar3[0x20] = param_2;
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10243a728);
    (*pcVar1)();
  }
  func_0x000100cf1e4c(param_5,param_6);
  func_0x000100cf1e4c(param_5,param_6);
  func_0x000100cf1e4c(param_3,param_4);
  lVar4 = param_1;
  func_0x000107c507ec();
  if ((lVar4 != 6) && (lVar4 = param_1, func_0x000107c4a25c(), (int)lVar4 != 0)) {
    lVar4 = param_1;
    FUN_10243ae9c();
    lVar5 = lVar4;
    func_0x000107c50808();
    if ((lVar5 != 0) || (lVar5 = lVar4, func_0x000107c5ac7c(), (int)lVar5 != 0)) {
      func_0x000107c6157c(puVar2);
      func_0x000107c6157c(puVar3);
      func_0x00010243bfb8(lVar4,0x10243d258,puVar2,0x10243d1d8,puVar3);
      func_0x000107c61170(lVar4);
      goto LAB_10243a6f0;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  FUN_10243afa8(param_1,0x10243d258,puVar2,0x10243d1d8,puVar3);
LAB_10243a6f0:
  func_0x000107c61578(puVar2,2);
  func_0x000107c61578(puVar3,2);
  return;
}



/* Entry: 10243a8f0; end: 10243a9ab;  */

void FUN_10243a8f0(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  if ((param_1 & 1) == 0) {
    (*param_5)(param_4,param_7,param_8);
  }
  else if (param_2 != (code *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c6157c(param_3);
    func_0x000107c466bc(puVar1);
    (*param_2)(param_4,puVar1);
    func_0x000107c61170(puVar1);
    if (param_2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10243a9ac; end: 10243ab3b;  */

/* WARNING: Possible PIC construction at 0x00010243ab00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243ab18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243ab04) */
/* WARNING: Removing unreachable block (ram,0x00010243ab1c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10243a9ac(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 == (code *)0x0) {
    return;
  }
  if ((param_5 & 1) == 0) {
    func_0x0001000ab060(0);
    func_0x000100079360(0);
    func_0x00010099a028(0);
    uVar2 = param_4;
    func_0x000107c6157c(param_4);
    func_0x0001048b1f68();
    uVar1 = uVar2;
    func_0x00010099a09c();
    func_0x000107c61170(uVar2);
    uVar2 = 0;
    func_0x0001000aad1c(0);
    func_0x0001000aad3c();
    puVar3 = &UNK_110508a08;
    func_0x000107c613fc(&UNK_110508a08,0x30,7);
    *(code **)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    func_0x000100cf1e4c(param_3,param_4);
    func_0x000107c61174(param_1);
    func_0x000107c614b0(param_2);
    func_0x0001000ab368(uVar1,uVar2,0,0,FUN_10243d194,puVar3);
  }
  else {
    func_0x000107c6157c(param_4);
    (*param_3)(param_1,param_2);
  }
  if (param_3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_4);
    return;
  }
  return;
}



/* Entry: 10243ab3c; end: 10243ac4f; -[AdNetworkManagerSwift submit:useMainThread:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x00010243ac30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243ac34) */

void FUN_10243ab3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_1105087b0;
    func_0x000107c613fc(&UNK_1105087b0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_5;
    uVar1 = 0x10243d18c;
  }
  if (param_6 == 0) {
    puVar5 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar5 = &UNK_110508788;
    func_0x000107c613fc(&UNK_110508788,0x18,7);
    *(long *)(puVar5 + 0x10) = param_6;
    uVar4 = 0x10243d184;
  }
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10243a5a0(param_3,param_4,uVar1,puVar3,uVar4,puVar5);
  func_0x000100cf1eb8(uVar4,puVar5);
  func_0x000100cf1eb8(uVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10243ac50; end: 10243acc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243ac50(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112e99d78;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e99d78) != 0) {
    func_0x000107c3fae8();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c615e8(uVar2);
  lVar1 = _DAT_112e99d80;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e99d80) != 0) {
    func_0x000107c3fae8();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c615e8(uVar2);
  if (*(long *)(unaff_x20 + _DAT_112e99d88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112e99d88),PTR_s_cancelRequests_1125a9558);
    return;
  }
  return;
}



/* Entry: 10243acc4; end: 10243aceb; -[AdNetworkManagerSwift cleanup] */

void FUN_10243acc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10243ac50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10243acec; end: 10243acff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243acec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long in_x3;
  undefined8 in_x4;
  long in_x5;
  undefined8 in_x6;
  long unaff_x20;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar5 = &puStack_90;
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99dc8);
  if (in_x3 == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110508840;
    lStack_70 = in_x3;
    uStack_68 = in_x4;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(in_x4);
    func_0x000107c61574(uVar2);
  }
  puVar6 = (undefined1 *)0x0;
  if (in_x5 != 0) {
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101529788;
    puStack_78 = &UNK_110508818;
    lStack_70 = in_x5;
    uStack_68 = in_x6;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(in_x6);
    func_0x000107c61574(uVar2);
    puVar6 = (undefined1 *)ppuVar3;
  }
  func_0x000107c5c300(uVar4);
  func_0x000107c60bd0(puVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 10243ad00; end: 10243ae33; -[AdNetworkManagerSwift submitRetryRequest:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x00010243ae0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243ae10) */

void FUN_10243ad00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_110508760;
    func_0x000107c613fc(&UNK_110508760,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    uVar1 = 0x10243d178;
  }
  if (param_7 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_110508738;
    func_0x000107c613fc(&UNK_110508738,0x18,7);
    *(long *)(puVar4 + 0x10) = param_7;
    pcVar3 = FUN_10243d168;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_10243cf48(param_3,uVar1,puVar2,pcVar3,puVar4);
  func_0x000100cf1eb8(pcVar3,puVar4);
  func_0x000100cf1eb8(uVar1,puVar2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10243ae34; end: 10243ae57;  */

bool FUN_10243ae34(long param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    func_0x000107c50438();
    return (int)param_1 == 6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243ae58);
  (*pcVar1)();
}



/* Entry: 10243ae58; end: 10243ae9b; -[AdNetworkManagerSwift _shouldUseCustomUserAgent:] */

bool FUN_10243ae58(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    lVar2 = param_3;
    func_0x000107c50438();
    func_0x000107c61170(param_3);
    return (int)lVar2 == 6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243ae9c);
  (*pcVar1)();
}



/* Entry: 10243ae9c; end: 10243afa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10243ae9c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c50394();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar5 = 0;
    param_2 = 0;
  }
  else {
    lVar5 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e99d90);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e99d98);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5fadc(lVar5,param_2);
    func_0x000107c6142c(param_2);
  }
  puVar4 = PTR_PTR_1126c5460;
  func_0x000107c610f8();
  func_0x000107c4872c();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(lVar5);
  if (puVar4 != (undefined *)0x0) {
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243afa8);
  (*pcVar1)();
}



/* Entry: 10243afa8; end: 10243b143;  */

/* WARNING: Possible PIC construction at 0x00010243b3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243b700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243bce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243bcfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243b6d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243bd00) */
/* WARNING: Removing unreachable block (ram,0x00010243bce4) */
/* WARNING: Removing unreachable block (ram,0x00010243b704) */
/* WARNING: Removing unreachable block (ram,0x00010243b3d0) */
/* WARNING: Removing unreachable block (ram,0x00010243b6d4) */
/* WARNING: Removing unreachable block (ram,0x00010243b6d8) */
/* WARNING: Removing unreachable block (ram,0x00010243b6dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243afa8(long param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long unaff_x20;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  code *pcStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  long alStack_110 [9];
  undefined1 auStack_c8 [56];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_90;
  ppuVar16 = &puStack_90;
  lVar5 = param_1;
  func_0x000107c507ec();
  if (((lVar5 != 5) || (*(long *)(unaff_x20 + _DAT_112e99db8) == 0)) ||
     (*(long *)(unaff_x20 + _DAT_112e99dc0) == 0)) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e99dc8);
    func_0x000107c50438(param_1);
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    puVar13 = (undefined1 *)0x0;
    if (param_2 != 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1018d35c4;
      puStack_78 = &UNK_1105089d0;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(param_3);
      puVar13 = (undefined1 *)ppuVar3;
    }
    if (param_4 == (code *)0x0) {
      ppuVar16 = (undefined **)0x0;
    }
    else {
      puStack_90 = puVar10;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1018d366c;
      puStack_78 = &UNK_1105089a8;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c6157c(param_5);
      func_0x000107c61574(param_5);
    }
    func_0x000107c5c2cc(uVar8);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(puVar13);
    return;
  }
  lVar4 = 0;
  lStack_178 = param_2;
  uStack_170 = param_3;
  uStack_160 = param_5;
  func_0x000107c5eec8();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  puVar13 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36580;
  puVar10 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar13 - extraout_x8_00;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lStack_168 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112e99db8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112e99dc0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0 || uVar7 == 0) {
    if (param_4 != (code *)0x0) {
      lVar5 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar13 = auStack_c8;
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      puVar10 = PTR___sSSN_11034da80;
      *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
      *(undefined1 **)(lVar5 + 0x28) = puVar13;
      *(undefined8 *)(lVar5 + 0x30) = 0xd000000000000023;
      *(undefined8 *)(lVar5 + 0x38) = 0x800000010f09ccc0;
      lVar4 = lVar5;
      func_0x000100214a84(lVar5);
      func_0x000107c61588(lVar5);
      FUN_10243d070((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar8 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f09cca0);
      lVar5 = lVar4;
      func_0x000107c5f9dc(lVar4,puVar10,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar4);
      func_0x000107c466bc(puVar11);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar5);
      (*param_4)(0,puVar11);
      func_0x000107c61170(puVar11);
    }
    goto code_r0x000107c615e8;
  }
  lVar9 = param_1;
  pcStack_190 = param_4;
  lStack_188 = lVar6;
  uStack_180 = uVar7;
  func_0x000107c44350();
  uStack_198 = (ulong)(lVar9 == 1);
  lVar6 = param_1;
  func_0x000107c44370();
  func_0x000107c61180();
  if (lVar6 == 0) {
LAB_10243b544:
    (**(code **)(lVar15 + 0x38))(lVar17,1,1,lVar5);
  }
  else {
    lVar9 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    if (puVar10 == (undefined *)0x0) goto LAB_10243b544;
    func_0x000107c61434(puVar10);
    func_0x000107c5edd0(lVar17,lVar9,puVar10);
    func_0x000107c61430(puVar10,2);
    lVar6 = lVar17;
    (**(code **)(lVar15 + 0x30))(lVar17,1,lVar5);
    if ((int)lVar6 != 1) {
      (**(code **)(lVar15 + 0x20))(lStack_168,lVar17,lVar5);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
      lVar5 = param_1;
      puStack_120 = puVar10;
      func_0x000107c50438();
      if ((int)lVar5 == 6) {
        lVar5 = param_1;
        func_0x000107c44378();
        func_0x000107c61180();
        if (lVar5 == 0) {
          uVar8 = 0xea0000000000746e;
          func_0x0001014c4e50(0x6567412d72657355,0xea0000000000746e);
          func_0x000107c6142c(uVar8);
        }
        else {
          lVar6 = lVar5;
          func_0x000107c5faec();
          func_0x000107c61170(lVar5);
          puVar11 = puVar10;
          func_0x000107c61558(puVar10);
          puStack_150 = puVar10;
          func_0x00010018433c(lVar6,lVar17,0x6567412d72657355,0xea0000000000746e,puVar11);
          puStack_120 = puStack_150;
        }
      }
      lVar5 = param_1;
      func_0x000107c441ac();
      func_0x000107c61180();
      if (lVar5 == 0) {
        lVar5 = -0x10;
      }
      else {
        lVar6 = lVar5;
        func_0x000107c5f9e8();
        func_0x000107c61170(lVar5);
        puVar10 = puStack_120;
        puVar11 = puStack_120;
        func_0x000107c61558(puStack_120);
        puStack_150 = puVar10;
        FUN_10243ccd4(lVar6,&UNK_101391c9c,0,puVar11,&puStack_150);
        func_0x000107c6142c(lVar6);
        lVar5 = -0x40;
      }
      lVar5 = *(long *)((long)alStack_110 + lVar5);
      if (*(long *)(lVar5 + 0x10) == 0) {
        puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
      }
      else {
        func_0x000107c61434(lVar5);
        uVar12 = 0xef33080;
        func_0x000100029284(0xd000000000000013);
        puStack_1a0 = (undefined *)CONCAT44(puStack_1a0._4_4_,uVar12);
        func_0x000107c6142c(lVar5);
      }
      lVar6 = param_1;
      func_0x000107c43f30();
      func_0x000107c61180();
      if (lVar6 == 0) {
LAB_10243b8a0:
        uVar7 = 0xf000000000000000;
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c61168(PTR__OBJC_CLASS___NSData_1126ae778);
        lVar17 = lVar6;
        func_0x000107c6148c(lVar6,puVar10);
        if (lVar17 == 0) {
          func_0x000107c61170();
          goto LAB_10243b8a0;
        }
        uStack_148 = 0xf000000000000000;
        puStack_150 = (undefined *)0x0;
        func_0x000107c5ee2c();
        func_0x000107c61170();
        uVar7 = uStack_148;
        puVar10 = puStack_150;
        if (0xe < uStack_148 >> 0x3c) goto LAB_10243b8a0;
      }
      func_0x000107c5ed90();
      lVar17 = lVar5;
      lStack_1a8 = lVar6;
      func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      lStack_1d8 = lVar18;
      puStack_1d0 = puVar10;
      uStack_1c8 = uVar7;
      lStack_1c0 = lVar5;
      lStack_1b0 = lVar17;
      if (uVar7 >> 0x3c < 0xf) {
        func_0x00010006c00c(puVar10,uVar7);
        puVar11 = puVar10;
        func_0x000107c5ee20(puVar10,uVar7);
        puStack_1b8 = puVar11;
        func_0x0001000b44c0(puVar10,uVar7);
      }
      else {
        puStack_1b8 = (undefined *)0x0;
      }
      puVar10 = &UNK_110508670;
      func_0x000107c613fc(&UNK_110508670,0x11,7);
      puVar10[0x10] = (byte)puStack_1a0 & 1;
      puVar11 = &UNK_110508698;
      func_0x000107c613fc(&UNK_110508698,0x20,7);
      *(code **)(puVar11 + 0x10) = FUN_10243d0b0;
      *(undefined **)(puVar11 + 0x18) = puVar10;
      pcStack_130 = FUN_10243d0c4;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0x42000000;
      puStack_140 = &UNK_101365b04;
      puStack_138 = &UNK_1105086b0;
      ppuVar3 = &puStack_150;
      puStack_1a0 = puVar10;
      puStack_128 = puVar11;
      func_0x000107c60bc4(ppuVar3);
      puVar10 = puStack_128;
      func_0x000107c6157c(puVar11);
      func_0x000107c61574(puVar10);
      lVar6 = lStack_1a8;
      lVar5 = lStack_1b0;
      puVar10 = puStack_1b8;
      uVar7 = uStack_180;
      func_0x000107c3ecec();
      func_0x000107c61180();
      uStack_198 = uVar7;
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar10);
      pcVar14 = "";
      puVar10 = puVar11;
      func_0x000107c61544(puVar11,"",0x59,0x116,0xb,1);
      func_0x000107c61574(puVar11);
      if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10243bd68);
        (*pcVar2)();
      }
      puVar10 = PTR_PTR_1126b7220;
      func_0x000107c610f8(PTR_PTR_1126b7220);
      func_0x000107c453e4();
      func_0x000107c50394();
      func_0x000107c61180();
      lVar5 = lStack_1d8;
      if (param_1 == 0) {
        func_0x000107c5eec4(puVar13);
        func_0x000107c5eeac();
        (**(code **)(lVar5 + 8))(puVar13,lVar4);
      }
      else {
        lVar5 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        param_1 = lVar5;
      }
      func_0x000107c5fadc(param_1,pcVar14);
      func_0x000107c6142c(pcVar14);
      puVar11 = puVar10;
      func_0x000107c5e5a0(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(param_1);
      puVar10 = puVar11;
      func_0x000107c5e890(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      puVar11 = puVar10;
      func_0x000107c5e75c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = puVar11;
      func_0x000107c3ecc8(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      FUN_10243d100(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c61174(puVar10);
      func_0x000107c5ffdc();
      puVar10 = &UNK_1105086e8;
      func_0x000107c613fc(&UNK_1105086e8,0x30,7);
      uVar1 = uStack_160;
      uVar8 = uStack_170;
      lVar5 = lStack_178;
      pcVar2 = pcStack_190;
      *(code **)(puVar10 + 0x10) = pcStack_190;
      *(undefined8 *)(puVar10 + 0x18) = uStack_160;
      *(long *)(puVar10 + 0x20) = lStack_178;
      *(undefined8 *)(puVar10 + 0x28) = uStack_170;
      pcStack_130 = FUN_10243d140;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0x42000000;
      puStack_140 = &UNK_101365b40;
      puStack_138 = &UNK_110508700;
      puStack_128 = puVar10;
      func_0x000107c60bc4(&puStack_150);
      puVar10 = puStack_128;
      func_0x000100cf1e4c(pcVar2,uVar1);
      func_0x000100cf1e4c(lVar5,uVar8);
      func_0x000107c61574(puVar10);
      func_0x000107c5c2f4(lStack_188);
      func_0x000107c61180();
      goto code_r0x000107c615e8;
    }
  }
  FUN_10243d070(lVar17,0x112d36580,&UNK_10d9016d0);
  pcVar2 = pcStack_190;
  if (pcStack_190 != (code *)0x0) {
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar13 = auStack_118;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    puVar10 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar5 + 0x28) = puVar13;
    *(undefined8 *)(lVar5 + 0x30) = 0x2064696c61766e49;
    *(undefined8 *)(lVar5 + 0x38) = 0xeb000000004c5255;
    lVar4 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    FUN_10243d070((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar8 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f09cca0);
    lVar5 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar10,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar11);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar5);
    (*pcVar2)(0,puVar11);
    func_0x000107c61170(puVar11);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10243b144; end: 10243bd67;  */

/* WARNING: Possible PIC construction at 0x00010243b3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243b700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243bce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243bcfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243b6d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243bd00) */
/* WARNING: Removing unreachable block (ram,0x00010243bce4) */
/* WARNING: Removing unreachable block (ram,0x00010243b704) */
/* WARNING: Removing unreachable block (ram,0x00010243b3d0) */
/* WARNING: Removing unreachable block (ram,0x00010243b6d4) */
/* WARNING: Removing unreachable block (ram,0x00010243b6d8) */
/* WARNING: Removing unreachable block (ram,0x00010243b6dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243b144(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  code *pcStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  long alStack_110 [9];
  undefined1 auStack_c8 [88];
  
  lVar4 = 0;
  uStack_178 = param_2;
  uStack_170 = param_3;
  uStack_160 = param_5;
  func_0x000107c5eec8();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  puVar14 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36580;
  puVar10 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar14 - extraout_x8_00;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lStack_168 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112e99db8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112e99dc0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0 || uVar7 == 0) {
    if (param_4 != (code *)0x0) {
      lVar5 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar14 = auStack_c8;
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      puVar10 = PTR___sSSN_11034da80;
      *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
      *(undefined1 **)(lVar5 + 0x28) = puVar14;
      *(undefined8 *)(lVar5 + 0x30) = 0xd000000000000023;
      *(undefined8 *)(lVar5 + 0x38) = 0x800000010f09ccc0;
      lVar4 = lVar5;
      func_0x000100214a84(lVar5);
      func_0x000107c61588(lVar5);
      FUN_10243d070((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar8 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f09cca0);
      lVar5 = lVar4;
      func_0x000107c5f9dc(lVar4,puVar10,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar4);
      func_0x000107c466bc(puVar11);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar5);
      (*param_4)(0,puVar11);
      func_0x000107c61170(puVar11);
    }
    goto code_r0x000107c615e8;
  }
  lVar9 = param_1;
  pcStack_190 = param_4;
  lStack_188 = lVar6;
  uStack_180 = uVar7;
  func_0x000107c44350();
  uStack_198 = (ulong)(lVar9 == 1);
  lVar6 = param_1;
  func_0x000107c44370();
  func_0x000107c61180();
  if (lVar6 == 0) {
LAB_10243b544:
    (**(code **)(lVar16 + 0x38))(lVar17,1,1,lVar5);
  }
  else {
    lVar9 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    if (puVar10 == (undefined *)0x0) goto LAB_10243b544;
    func_0x000107c61434(puVar10);
    func_0x000107c5edd0(lVar17,lVar9,puVar10);
    func_0x000107c61430(puVar10,2);
    lVar6 = lVar17;
    (**(code **)(lVar16 + 0x30))(lVar17,1,lVar5);
    if ((int)lVar6 != 1) {
      (**(code **)(lVar16 + 0x20))(lStack_168,lVar17,lVar5);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
      lVar5 = param_1;
      puStack_120 = puVar10;
      func_0x000107c50438();
      if ((int)lVar5 == 6) {
        lVar5 = param_1;
        func_0x000107c44378();
        func_0x000107c61180();
        if (lVar5 == 0) {
          uVar8 = 0xea0000000000746e;
          func_0x0001014c4e50(0x6567412d72657355,0xea0000000000746e);
          func_0x000107c6142c(uVar8);
        }
        else {
          lVar6 = lVar5;
          func_0x000107c5faec();
          func_0x000107c61170(lVar5);
          puVar11 = puVar10;
          func_0x000107c61558(puVar10);
          puStack_150 = puVar10;
          func_0x00010018433c(lVar6,lVar17,0x6567412d72657355,0xea0000000000746e,puVar11);
          puStack_120 = puStack_150;
        }
      }
      lVar5 = param_1;
      func_0x000107c441ac();
      func_0x000107c61180();
      if (lVar5 == 0) {
        lVar5 = -0x10;
      }
      else {
        lVar6 = lVar5;
        func_0x000107c5f9e8();
        func_0x000107c61170(lVar5);
        puVar10 = puStack_120;
        puVar11 = puStack_120;
        func_0x000107c61558(puStack_120);
        puStack_150 = puVar10;
        FUN_10243ccd4(lVar6,&UNK_101391c9c,0,puVar11,&puStack_150);
        func_0x000107c6142c(lVar6);
        lVar5 = -0x40;
      }
      lVar5 = *(long *)((long)alStack_110 + lVar5);
      if (*(long *)(lVar5 + 0x10) == 0) {
        puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffff00000000);
      }
      else {
        func_0x000107c61434(lVar5);
        uVar13 = 0xef33080;
        func_0x000100029284(0xd000000000000013);
        puStack_1a0 = (undefined *)CONCAT44(puStack_1a0._4_4_,uVar13);
        func_0x000107c6142c(lVar5);
      }
      lVar6 = param_1;
      func_0x000107c43f30();
      func_0x000107c61180();
      if (lVar6 == 0) {
LAB_10243b8a0:
        uVar7 = 0xf000000000000000;
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c61168(PTR__OBJC_CLASS___NSData_1126ae778);
        lVar17 = lVar6;
        func_0x000107c6148c(lVar6,puVar10);
        if (lVar17 == 0) {
          func_0x000107c61170();
          goto LAB_10243b8a0;
        }
        uStack_148 = 0xf000000000000000;
        puStack_150 = (undefined *)0x0;
        func_0x000107c5ee2c();
        func_0x000107c61170();
        uVar7 = uStack_148;
        puVar10 = puStack_150;
        if (0xe < uStack_148 >> 0x3c) goto LAB_10243b8a0;
      }
      func_0x000107c5ed90();
      lVar17 = lVar5;
      lStack_1a8 = lVar6;
      func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      lStack_1d8 = lVar18;
      puStack_1d0 = puVar10;
      uStack_1c8 = uVar7;
      lStack_1c0 = lVar5;
      lStack_1b0 = lVar17;
      if (uVar7 >> 0x3c < 0xf) {
        func_0x00010006c00c(puVar10,uVar7);
        puVar11 = puVar10;
        func_0x000107c5ee20(puVar10,uVar7);
        puStack_1b8 = puVar11;
        func_0x0001000b44c0(puVar10,uVar7);
      }
      else {
        puStack_1b8 = (undefined *)0x0;
      }
      puVar10 = &UNK_110508670;
      func_0x000107c613fc(&UNK_110508670,0x11,7);
      puVar10[0x10] = (byte)puStack_1a0 & 1;
      puVar11 = &UNK_110508698;
      func_0x000107c613fc(&UNK_110508698,0x20,7);
      *(code **)(puVar11 + 0x10) = FUN_10243d0b0;
      *(undefined **)(puVar11 + 0x18) = puVar10;
      pcStack_130 = FUN_10243d0c4;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0x42000000;
      puStack_140 = &UNK_101365b04;
      puStack_138 = &UNK_1105086b0;
      ppuVar12 = &puStack_150;
      puStack_1a0 = puVar10;
      puStack_128 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar10 = puStack_128;
      func_0x000107c6157c(puVar11);
      func_0x000107c61574(puVar10);
      lVar6 = lStack_1a8;
      lVar5 = lStack_1b0;
      puVar10 = puStack_1b8;
      uVar7 = uStack_180;
      func_0x000107c3ecec();
      func_0x000107c61180();
      uStack_198 = uVar7;
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar10);
      pcVar15 = "";
      puVar10 = puVar11;
      func_0x000107c61544(puVar11,"",0x59,0x116,0xb,1);
      func_0x000107c61574(puVar11);
      if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10243bd68);
        (*pcVar3)();
      }
      puVar10 = PTR_PTR_1126b7220;
      func_0x000107c610f8(PTR_PTR_1126b7220);
      func_0x000107c453e4();
      func_0x000107c50394();
      func_0x000107c61180();
      lVar5 = lStack_1d8;
      if (param_1 == 0) {
        func_0x000107c5eec4(puVar14);
        func_0x000107c5eeac();
        (**(code **)(lVar5 + 8))(puVar14,lVar4);
      }
      else {
        lVar5 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        param_1 = lVar5;
      }
      func_0x000107c5fadc(param_1,pcVar15);
      func_0x000107c6142c(pcVar15);
      puVar11 = puVar10;
      func_0x000107c5e5a0(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(param_1);
      puVar10 = puVar11;
      func_0x000107c5e890(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      puVar11 = puVar10;
      func_0x000107c5e75c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = puVar11;
      func_0x000107c3ecc8(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      FUN_10243d100(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c61174(puVar10);
      func_0x000107c5ffdc();
      puVar10 = &UNK_1105086e8;
      func_0x000107c613fc(&UNK_1105086e8,0x30,7);
      uVar2 = uStack_160;
      uVar1 = uStack_170;
      uVar8 = uStack_178;
      pcVar3 = pcStack_190;
      *(code **)(puVar10 + 0x10) = pcStack_190;
      *(undefined8 *)(puVar10 + 0x18) = uStack_160;
      *(undefined8 *)(puVar10 + 0x20) = uStack_178;
      *(undefined8 *)(puVar10 + 0x28) = uStack_170;
      pcStack_130 = FUN_10243d140;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0x42000000;
      puStack_140 = &UNK_101365b40;
      puStack_138 = &UNK_110508700;
      puStack_128 = puVar10;
      func_0x000107c60bc4(&puStack_150);
      puVar10 = puStack_128;
      func_0x000100cf1e4c(pcVar3,uVar2);
      func_0x000100cf1e4c(uVar8,uVar1);
      func_0x000107c61574(puVar10);
      func_0x000107c5c2f4(lStack_188);
      func_0x000107c61180();
      goto code_r0x000107c615e8;
    }
  }
  FUN_10243d070(lVar17,0x112d36580,&UNK_10d9016d0);
  pcVar3 = pcStack_190;
  if (pcStack_190 != (code *)0x0) {
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar14 = auStack_118;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    puVar10 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar5 + 0x28) = puVar14;
    *(undefined8 *)(lVar5 + 0x30) = 0x2064696c61766e49;
    *(undefined8 *)(lVar5 + 0x38) = 0xeb000000004c5255;
    lVar4 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    FUN_10243d070((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar8 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f09cca0);
    lVar5 = lVar4;
    func_0x000107c5f9dc(lVar4,puVar10,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar11);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar5);
    (*pcVar3)(0,puVar11);
    func_0x000107c61170(puVar11);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10243bd68; end: 10243c4c7;  */

/* WARNING: Possible PIC construction at 0x00010243bf14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243bf34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243bf44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243bf38) */
/* WARNING: Removing unreachable block (ram,0x00010243bf18) */
/* WARNING: Removing unreachable block (ram,0x00010243bf48) */

void FUN_10243bd68(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  code *param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_b0 [80];
  
  puVar6 = auStack_b0;
  if (param_2 - 1U < 2) {
    if (param_7 != (code *)0x0) {
      (*param_7)(param_3,param_6);
    }
  }
  else if (param_2 == 0) {
    if (param_3 != 0) {
      lVar5 = param_3;
      func_0x000107c61174();
      lVar2 = lVar5;
      func_0x000107c5bd10();
      if (399 < lVar2) {
        if (param_7 != (code *)0x0) {
          func_0x000107c61174(lVar5);
          func_0x000107c5bd10();
          lVar5 = 0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          *(undefined8 *)(lVar5 + 0x18) = 2;
          *(undefined8 *)(lVar5 + 0x10) = 1;
          uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          func_0x000107c5faec();
          *(undefined8 *)(lVar5 + 0x20) = uVar3;
          puVar1 = PTR___sSSN_11034da80;
          *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
          *(undefined1 **)(lVar5 + 0x28) = puVar6;
          *(undefined8 *)(lVar5 + 0x30) = 0x7272652050545448;
          *(undefined8 *)(lVar5 + 0x38) = 0xea0000000000726f;
          lVar2 = lVar5;
          func_0x000100214a84(lVar5);
          func_0x000107c61588(lVar5);
          FUN_10243d070((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
          lVar5 = -0x2fffffffffffffee;
          func_0x000107c5fadc(0xd000000000000012,0x800000010f09cca0);
          func_0x000107c5f9dc(lVar2,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(lVar2);
          func_0x000107c466bc(puVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar5);
        return;
      }
      func_0x000107c61170(lVar5);
    }
    if (param_9 != (code *)0x0) {
      (*param_9)(param_3,param_4,param_5);
    }
  }
  return;
}



/* Entry: 10243c4c8; end: 10243c6bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10243c4c8(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  ulong uStack_38;
  
  lVar10 = 0;
  if ((long)param_1 < 3) {
    if (2 < param_1) {
LAB_10243c69c:
      uStack_38 = param_1;
      func_0x000107c60614(&UNK_110730aa0,&uStack_38,&UNK_110730aa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10243c6c0);
      (*pcVar5)();
    }
  }
  else {
    if (param_1 == 3) {
      plVar8 = (long *)&DAT_113043cc8;
    }
    else {
      if (param_1 == 5) goto LAB_10243c548;
      if (param_1 != 4) goto LAB_10243c69c;
      plVar8 = (long *)&DAT_113043cd0;
    }
    lVar10 = *(long *)(*(long *)(unaff_x20 + _DAT_112e99da0) + *plVar8);
    func_0x000107c5c734();
    func_0x000107c61180();
  }
LAB_10243c548:
  lVar6 = lVar10;
  func_0x000107c615f0(lVar10);
  FUN_10243c804();
  FUN_10243cb48(lVar10,lVar6);
  func_0x000107c6142c(lVar6);
  if (lVar10 == 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e99dc8);
    uVar1 = 0xea00000000003176;
    if (param_1 != 4) {
      uVar1 = 0xea00000000003276;
    }
    uVar4 = 0xee0031765f73656c;
    uVar7 = 0x62616b636f6c6e75;
    if (param_1 != 3) {
      uVar4 = uVar1;
      uVar7 = 0x5f6b636172746461;
    }
    uVar1 = 0xeb0000000032765f;
    uVar3 = 0x776569765f717467;
    if (param_1 != 1) {
      uVar1 = 0xef32765f6e6f6974;
      uVar3 = 0x616572635f717467;
    }
    uVar2 = 0x31765f717467;
    if (param_1 != 0) {
      uVar2 = uVar3;
    }
    uVar3 = 0xe600000000000000;
    if (param_1 != 0) {
      uVar3 = uVar1;
    }
    if ((long)param_1 < 3) {
      uVar4 = uVar3;
      uVar7 = uVar2;
    }
    func_0x000107c5fadc(uVar7,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c4be44(uVar9);
    func_0x000107c61170(uVar7);
  }
  else {
    func_0x000107c615e8(lVar10);
  }
  return lVar10;
}



/* Entry: 10243c6c0; end: 10243c6df;  */

void FUN_10243c6c0(void)

{
  func_0x000107c61168(&PTR_PTR_11283fd78);
  return;
}



/* Entry: 10243c6e0; end: 10243c6ef;  */

/* WARNING: Possible PIC construction at 0x00010243a8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243a8b4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10243c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  if ((*(byte *)(unaff_x20 + 0x20) & 1) == 0) {
    func_0x0001000ab060();
    func_0x000100079360(0);
    func_0x00010099a028(0);
    uVar6 = uVar3;
    func_0x000107c6157c();
    func_0x0001048b1f68();
    uVar5 = uVar6;
    func_0x00010099a09c();
    func_0x000107c61170(uVar6);
    uVar6 = 0;
    func_0x0001000aad1c(0);
    func_0x0001000aad3c();
    puVar7 = &UNK_110508a30;
    func_0x000107c613fc(&UNK_110508a30,0x48,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar2;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    *(undefined8 *)(puVar7 + 0x20) = param_1;
    *(code **)(puVar7 + 0x28) = pcVar1;
    *(undefined8 *)(puVar7 + 0x30) = uVar3;
    *(undefined8 *)(puVar7 + 0x38) = param_2;
    *(undefined8 *)(puVar7 + 0x40) = param_3;
    func_0x000100cf1e4c(pcVar1,uVar3);
    func_0x000100cf1e4c(uVar2,uVar4);
    func_0x000107c61174(param_1);
    func_0x000100de78a0(param_2,param_3);
    func_0x000100947c8c(uVar5,uVar6,0,0,FUN_10243d1bc,puVar7);
  }
  else {
    func_0x000107c6157c(uVar3);
    (*pcVar1)(param_1,param_2,param_3);
  }
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10243c6f0; end: 10243c717;  */

bool FUN_10243c6f0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c5bd10();
    return 499 < param_1;
  }
  return true;
}



/* Entry: 10243c718; end: 10243c803;  */

uint FUN_10243c718(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
  return (uint)param_2 & 1;
}



/* Entry: 10243c804; end: 10243c9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10243c804(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = &uStack_80;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e99d90);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5bd1c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    puVar3 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    uStack_80 = 0x2c;
    uStack_78 = 0xe100000000000000;
    puStack_70 = puVar3;
    uStack_68 = param_2;
    func_0x000100e8b654();
    func_0x000107c601dc(&uStack_80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar4,puVar4);
    func_0x000107c6142c(param_2);
    lVar8 = *(long *)((long)puVar5 + 0x10);
    if (lVar8 != 0) {
      puStack_70 = puVar7;
      func_0x0001002ecff4(0,lVar8,0);
      puVar9 = (undefined8 *)((long)puVar5 + 0x28);
      do {
        puVar7 = puStack_70;
        uVar6 = puVar9[-1];
        uVar2 = *puVar9;
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar6,uVar2);
        func_0x000107c49820();
        func_0x000107c61170(uVar6);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46ed0();
        func_0x000107c6142c(uVar2);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puStack_70 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x0001002ecff4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puVar9 + 2;
        *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_70 + uVar1 * 8 + 0x20) = puVar3;
        lVar8 = lVar8 + -1;
        puVar7 = puStack_70;
      } while (lVar8 != 0);
    }
    func_0x000107c6142c(puVar5);
  }
  return puVar7;
}



/* Entry: 10243c9ac; end: 10243ca07; -[AdNetworkManagerSwift init] */

void FUN_10243c9ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdNetworkManagerImpl.AdNetworkManagerSwift",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243c9d8);
  (*pcVar1)();
}



/* Entry: 10243ca08; end: 10243cacf; -[AdNetworkManagerSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010243ca24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243ca44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010243ca94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243ca48) */
/* WARNING: Removing unreachable block (ram,0x00010243ca28) */
/* WARNING: Removing unreachable block (ram,0x00010243ca98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243ca08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e99d78));
  return;
}



/* Entry: 10243cad0; end: 10243cb0b;  */

void FUN_10243cad0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10243cb0c; end: 10243cb1b;  */

/* WARNING: Possible PIC construction at 0x00010243a8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243a8b4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10243cb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  if ((*(byte *)(unaff_x20 + 0x20) & 1) == 0) {
    func_0x0001000ab060();
    func_0x000100079360(0);
    func_0x00010099a028(0);
    uVar6 = uVar3;
    func_0x000107c6157c();
    func_0x0001048b1f68();
    uVar5 = uVar6;
    func_0x00010099a09c();
    func_0x000107c61170(uVar6);
    uVar6 = 0;
    func_0x0001000aad1c(0);
    func_0x0001000aad3c();
    puVar7 = &UNK_110508a30;
    func_0x000107c613fc(&UNK_110508a30,0x48,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar2;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    *(undefined8 *)(puVar7 + 0x20) = param_1;
    *(code **)(puVar7 + 0x28) = pcVar1;
    *(undefined8 *)(puVar7 + 0x30) = uVar3;
    *(undefined8 *)(puVar7 + 0x38) = param_2;
    *(undefined8 *)(puVar7 + 0x40) = param_3;
    func_0x000100cf1e4c(pcVar1,uVar3);
    func_0x000100cf1e4c(uVar2,uVar4);
    func_0x000107c61174(param_1);
    func_0x000100de78a0(param_2,param_3);
    func_0x000100947c8c(uVar5,uVar6,0,0,FUN_10243d1bc,puVar7);
  }
  else {
    func_0x000107c6157c(uVar3);
    (*pcVar1)(param_1,param_2,param_3);
  }
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10243cb1c; end: 10243cb47;  */

void FUN_10243cb1c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10243cb48; end: 10243cc4f;  */

void FUN_10243cb48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    ppuVar2 = &puStack_80;
    ppuVar4 = &puStack_80;
    pcStack_60 = FUN_10243c6f0;
    puStack_58 = (undefined *)0x0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_10243c718;
    puStack_68 = &UNK_110508a48;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c59198(param_1);
    func_0x000107c60bd0(ppuVar2);
    puVar3 = &UNK_110508a80;
    func_0x000107c613fc(&UNK_110508a80,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    pcStack_60 = (code *)0x10243d1d0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_10243c718;
    puStack_68 = &UNK_110508a98;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c59188(param_1);
    func_0x000107c60bd0(ppuVar4);
  }
  return;
}



/* Entry: 10243cc50; end: 10243ccd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10243cc50(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112e99d88;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e99d88);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e99da0) + _DAT_113043cf0);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
    func_0x000107c615e8(uVar4);
    lVar2 = *(long *)(unaff_x20 + lVar1);
    if ((*(long *)(unaff_x20 + _DAT_112e99db0) != 0) && (lVar2 != 0)) {
      func_0x000107c57314();
      lVar2 = *(long *)(unaff_x20 + lVar1);
    }
  }
  return lVar2;
}



/* Entry: 10243ccd4; end: 10243cf47;  */

void FUN_10243ccd4(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10243cf34);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10243cf48);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10243cf38);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10243cf30);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10243cf48; end: 10243d06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243cf48(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar5 = &puStack_90;
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e99dc8);
  if (param_2 == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110508840;
    lStack_70 = param_2;
    uStack_68 = param_3;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar2);
  }
  puVar6 = (undefined1 *)0x0;
  if (param_4 != 0) {
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101529788;
    puStack_78 = &UNK_110508818;
    lStack_70 = param_4;
    uStack_68 = param_5;
    func_0x000107c60bc4(&puStack_90);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar2);
    puVar6 = (undefined1 *)ppuVar3;
  }
  func_0x000107c5c300(uVar4);
  func_0x000107c60bd0(puVar6);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 10243d070; end: 10243d0af;  */

undefined8 FUN_10243d070(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10243d0b0; end: 10243d0c3;  */

void FUN_10243d0b0(undefined8 param_1)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,6)
  ;
  return;
}



/* Entry: 10243d0c4; end: 10243d0e3;  */

void FUN_10243d0c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10243d0e4; end: 10243d0ff;  */

void FUN_10243d0e4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10243d100; end: 10243d13f;  */

void FUN_10243d100(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10243d140; end: 10243d167;  */

void FUN_10243d140(void)

{
  FUN_10243bd68();
  return;
}



/* Entry: 10243d168; end: 10243d193;  */

void FUN_10243d168(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010243d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10243d194; end: 10243d1bb;  */

void FUN_10243d194(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 10243d1bc; end: 10243d25f;  */

void FUN_10243d1bc(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((param_1 & 1) == 0) {
    (**(code **)(unaff_x20 + 0x28))
              (uVar2,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),uVar2,
               *(code **)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  }
  else if (pcVar1 != (code *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c6157c(uVar3);
    func_0x000107c466bc(puVar4);
    (*pcVar1)(uVar2,puVar4);
    func_0x000107c61170(puVar4);
    if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10243d260; end: 10243d383; +[_TtC12SCRetroUtils20SCRetroStringHelpers categoryTypeString:] */

void FUN_10243d260(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      uVar2 = 0xe600000000000000;
      uVar1 = 0x31765f717467;
      goto LAB_10243d360;
    }
    if (param_3 == 1) {
      uVar2 = 0xeb0000000032765f;
      uVar1 = 0x776569765f717467;
      goto LAB_10243d360;
    }
    if (param_3 == 2) {
      uVar2 = 0xef32765f6e6f6974;
      uVar1 = 0x616572635f717467;
      goto LAB_10243d360;
    }
  }
  else {
    if (param_3 == 3) {
      uVar2 = 0xee0031765f73656c;
      uVar1 = 0x62616b636f6c6e75;
      goto LAB_10243d360;
    }
    if (param_3 == 4) {
      uVar1 = 0x5f6b636172746461;
      uVar2 = 0xea00000000003176;
      goto LAB_10243d360;
    }
    if (param_3 == 5) {
      uVar1 = 0x5f6b636172746461;
      uVar2 = 0xea00000000003276;
      goto LAB_10243d360;
    }
  }
  uVar1 = 0;
  uVar2 = 0xe000000000000000;
LAB_10243d360:
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10243d384; end: 10243d3a3;  */

void FUN_10243d384(void)

{
  func_0x000107c61168(&PTR_PTR_11283ff50);
  return;
}



/* Entry: 10243d3a4; end: 10243d3df; -[_TtC12SCRetroUtils20SCRetroStringHelpers init] */

void FUN_10243d3a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_10243d384();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10243d3e0; end: 10243d40f;  */

void FUN_10243d3e0(void)

{
  FUN_10243d384();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10243d410; end: 10243d4ab; +[SCAdLateTrackSkipHelper shouldSkipLateTrackWithAdProductType:serveTimeStampMillis:isRetro:configAdapter:adConfigProviderV2:trackMetricsManager:] */

uint FUN_10243d410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  FUN_10243d51c(param_1,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  return (uint)param_4 & 1;
}



/* Entry: 10243d4ac; end: 10243d4e7; -[SCAdLateTrackSkipHelper init] */

void FUN_10243d4ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10243d4e8; end: 10243d51b;  */

void FUN_10243d4e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10243d51c; end: 10243d827;  */

bool FUN_10243d51c(double param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  
  if (param_1 <= 0.0) {
    return false;
  }
  if (0x16 < param_2) {
    return false;
  }
  if ((1L << (param_2 & 0x3f) & 0x6321e4U) == 0) {
    if (param_2 != 4) {
      if (param_2 != 9) {
        return false;
      }
      if (param_5 != 0) {
        uVar5 = 0xd000000000000023;
        func_0x000107c5fadc(0xd000000000000023,0x800000010f09ccf0);
        func_0x000107c3ebdc();
        func_0x000107c61170(uVar5);
        if ((int)param_5 != 0) {
          if (param_4 == 0) {
            param_4 = 0;
          }
          else {
            func_0x000107c4b3ec();
          }
          puVar6 = PTR_PTR_1126afec0;
          func_0x000107c61168(PTR_PTR_1126afec0);
          if (SUB168(SEXT816(param_4) * SEXT816(0x3c),8) != param_4 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10243d824);
            (*pcVar1)();
          }
          dVar7 = (double)(param_4 * 0x3c);
          func_0x000107c4cfa8();
          func_0x000107c51b38(puVar6);
          dVar8 = dVar7;
          func_0x000107c41018(puVar6);
          bVar2 = dVar7 < dVar8 - param_1;
          if (!bVar2 || param_6 == 0) {
            return bVar2;
          }
          goto LAB_10243d648;
        }
      }
      return false;
    }
    if (param_5 == 0) {
      return false;
    }
    uVar5 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f09cd20);
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar5);
    if ((int)param_5 == 0) {
      return false;
    }
    if (param_4 == 0) {
      param_4 = 0;
    }
    else {
      func_0x000107c5bfa8();
    }
    puVar6 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    if (SUB168(SEXT816(param_4) * SEXT816(0x3c),8) != param_4 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10243d828);
      (*pcVar1)();
    }
    dVar7 = (double)(param_4 * 0x3c);
    func_0x000107c4cfa8();
    func_0x000107c51b38(puVar6);
    dVar8 = dVar7;
    func_0x000107c41018(puVar6);
    bVar2 = dVar7 < dVar8 - param_1;
    if (!bVar2 || param_6 == 0) {
      return bVar2;
    }
    goto LAB_10243d648;
  }
  if (param_4 == 0) {
    param_4 = 0;
LAB_10243d5e4:
    puVar6 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    if (SUB168(SEXT816(param_4) * SEXT816(0x3c),8) != param_4 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10243d820);
      (*pcVar1)();
    }
    dVar7 = (double)(param_4 * 0x3c);
    func_0x000107c4cfa8();
    func_0x000107c51b38(puVar6);
    dVar8 = dVar7;
  }
  else {
    lVar3 = param_4;
    dVar8 = param_1;
    func_0x000107c3d4f0();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c42554();
    func_0x000107c615e8(lVar3);
    if ((int)lVar4 == 0) {
      func_0x000107c5b138();
      goto LAB_10243d5e4;
    }
    func_0x000107c3d4f0();
    func_0x000107c61180();
    func_0x000107c4c808();
    dVar7 = dVar8;
    func_0x000107c615e8(param_4);
    func_0x000107c61168(PTR_PTR_1126afec0);
  }
  func_0x000107c41018();
  bVar2 = dVar8 < dVar7 - param_1;
  if (!bVar2 || param_6 == 0) {
    return bVar2;
  }
LAB_10243d648:
  func_0x000107c4bc58(param_6);
  return true;
}



/* Entry: 10243d828; end: 10243d847;  */

void FUN_10243d828(void)

{
  func_0x000107c61168(&PTR_PTR_112840000);
  return;
}



/* Entry: 10243d848; end: 10243d8fb; -[AdSnapchatAdsDeviceInfoProviderSwift initWithAudioSessionServices:networkConnectivityMonitorServices:networkBandwidthEstimatorServices:appPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243d848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e99e48) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e99e50) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e99e58) = param_5;
  puVar1 = PTR_s_initWithAudioSessionServices_net_1125daf58;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10243d8fc; end: 10243d997; -[AdSnapchatAdsDeviceInfoProviderSwift getDeviceVolume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10243d8fc(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = *(long *)(param_2 + _DAT_112e99e48);
  func_0x000107c61174();
  func_0x000107c52030();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    func_0x000107c61170(param_2);
    dVar3 = 0.0;
  }
  else {
    func_0x000107c4e144(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
    dVar3 = (double)param_1;
  }
  return dVar3;
}



/* Entry: 10243d998; end: 10243da23; -[AdSnapchatAdsDeviceInfoProviderSwift isDeviceAudible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10243d998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112e99e48);
  func_0x000107c61174();
  func_0x000107c52030();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4a1d8(lVar1);
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 10243da24; end: 10243da37; -[AdSnapchatAdsDeviceInfoProviderSwift getBatteryData] */

void FUN_10243da24(void)

{
  FUN_10243dff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10243da38; end: 10243dad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10243da38(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112e99e50) + _DAT_113080ad0);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c61170(uVar1);
    uVar4 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x000107c40244();
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar1);
    if (uVar3 < 5) {
      uVar4 = *(undefined8 *)(&UNK_10daa6b58 + uVar3 * 8);
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
}



/* Entry: 10243dad4; end: 10243db07; -[AdSnapchatAdsDeviceInfoProviderSwift getConnectivityType] */

undefined8 FUN_10243dad4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10243da38();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10243db08; end: 10243dbcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10243db08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e99e50) + _DAT_113080ae0);
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c40eec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar1);
    if (lVar3 == 0) {
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_10243dbb4;
    }
    uVar4 = *(undefined8 *)(lVar3 + _DAT_113080b48);
    uVar5 = ((undefined8 *)(lVar3 + _DAT_113080b48))[1];
    func_0x000107c61434(uVar5);
    lVar1 = lVar3;
  }
  func_0x000107c61170(lVar1);
LAB_10243dbb4:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 10243dbcc; end: 10243dbd7; -[AdSnapchatAdsDeviceInfoProviderSwift getCarrierName] */

void FUN_10243dbcc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10243db08();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10243dbd8; end: 10243dd57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10243dbd8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e99e50) + _DAT_113080ae0);
  func_0x000107c61174();
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c40eec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      lVar3 = ((undefined8 *)(lVar2 + _DAT_113080b50))[1];
      if (lVar3 == 0) {
        uVar4 = 0;
        lVar3 = -0x2000000000000000;
      }
      else {
        uVar4 = *(undefined8 *)(lVar2 + _DAT_113080b50);
        func_0x000107c61434(lVar3);
      }
      func_0x000107c5fb78(uVar4,lVar3);
      func_0x000107c6142c(lVar3);
      func_0x000107c5fb78(0x2d,0xe100000000000000);
      lVar3 = ((undefined8 *)(lVar2 + _DAT_113080b58))[1];
      if (lVar3 == 0) {
        uVar4 = 0;
        lVar3 = -0x2000000000000000;
      }
      else {
        uVar4 = *(undefined8 *)(lVar2 + _DAT_113080b58);
        func_0x000107c61434(lVar3);
      }
      goto LAB_10243dd18;
    }
  }
  lVar3 = -0x2000000000000000;
  func_0x000107c5fb78(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x2d,0xe100000000000000);
  lVar2 = 0;
  uVar4 = 0;
LAB_10243dd18:
  func_0x000107c5fb78(uVar4,lVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c6142c(lVar3);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10243dd58; end: 10243dd63; -[AdSnapchatAdsDeviceInfoProviderSwift getCarrierMCCAndMNC] */

void FUN_10243dd58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10243dbd8();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10243dd64; end: 10243de83;  */

void FUN_10243dd64(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*param_3)();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10243de84; end: 10243deb7; -[AdSnapchatAdsDeviceInfoProviderSwift getCellularNetworkType] */

undefined8 FUN_10243de84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010243ddd0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10243deb8; end: 10243df5f; -[AdSnapchatAdsDeviceInfoProviderSwift getDownloadBandwidthBytesPerSecond] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243deb8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + _DAT_112e99e58) + _DAT_11307a4d0);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c42248();
    func_0x000107c615e8(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10243df60; end: 10243dfa7; -[AdSnapchatAdsDeviceInfoProviderSwift getDiskData] */

void FUN_10243df60(void)

{
  FUN_10243e170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10243dfa8; end: 10243dfef; -[AdSnapchatAdsDeviceInfoProviderSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010243dfc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010243dfc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243dfa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e99e48));
  return;
}



/* Entry: 10243dff0; end: 10243e16f;  */

ulong FUN_10243dff0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  byte bStack_51;
  
  ppuVar7 = &puStack_90;
  bStack_51 = 0;
  uStack_60 = 0;
  pcVar4 = "getBatteryData()";
  func_0x0001000c10c0("getBatteryData()");
  func_0x000107c61180();
  puVar5 = &UNK_110508cc8;
  func_0x000107c613fc(&UNK_110508cc8,0x20,7);
  *(undefined8 **)(puVar5 + 0x10) = &uStack_60;
  *(byte **)(puVar5 + 0x18) = &bStack_51;
  puVar6 = &UNK_110508cf0;
  func_0x000107c613fc(&UNK_110508cf0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10243e234;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_70 = FUN_10243e330;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_110508d08;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c4e530(pcVar4);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(pcVar4);
  uVar2 = uStack_60;
  uVar9 = (ulong)bStack_51;
  uVar8 = 0;
  func_0x000103fea4d0(0);
  func_0x000107c610f8();
  func_0x000103fea4f4(uVar2,uVar9,uVar8);
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x78,0x42,0x48,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return uVar9;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10243e170);
  (*pcVar3)();
}



/* Entry: 10243e170; end: 10243e213;  */

/* WARNING: Removing unreachable block (ram,0x00010243e210) */
/* WARNING: Removing unreachable block (ram,0x00010243e20c) */

void FUN_10243e170(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b24e8;
  func_0x000107c61168(PTR_PTR_1126b24e8);
  puVar2 = puVar1;
  func_0x000107c5ccd4();
  func_0x000107c4392c(puVar1);
  uVar3 = 0;
  func_0x000103feaba4(0);
  func_0x000107c610f8();
  func_0x000103fea64c((double)((ulong)puVar2 / 0x400),0,(double)((ulong)puVar1 / 0x400),0,uVar3);
  return;
}



/* Entry: 10243e214; end: 10243e233;  */

void FUN_10243e214(void)

{
  func_0x000107c61168(&PTR_PTR_1128400b0);
  return;
}



/* Entry: 10243e234; end: 10243e32f;  */

void FUN_10243e234(float param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  pdVar1 = *(double **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c49a9c();
  func_0x000107c61170(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = puVar3;
    func_0x000107c40efc(puVar3);
    func_0x000107c61180();
    func_0x000107c52c24();
    func_0x000107c61170(puVar4);
  }
  puVar4 = puVar3;
  func_0x000107c40efc(puVar3);
  func_0x000107c61180();
  func_0x000107c3e70c();
  func_0x000107c61170(puVar4);
  *pdVar1 = (double)(param_1 * 100.0);
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3e720();
  func_0x000107c61170(puVar3);
  *(bool *)uVar2 = puVar4 == (undefined *)0x2;
  return;
}



/* Entry: 10243e330; end: 10243e34f;  */

void FUN_10243e330(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10243e350; end: 10243e36b;  */

void FUN_10243e350(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10243e36c; end: 10243e39f; +[SCAdSettingsRequestUtil requestLocaleString] */

void FUN_10243e36c(undefined8 param_1,undefined8 param_2)

{
  FUN_10243e488();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10243e3a0; end: 10243e413; +[SCAdSettingsRequestUtil generateRequestHeadersWithSnapToken:] */

void FUN_10243e3a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  FUN_10243e618();
  func_0x000107c6142c(param_2);
  lVar1 = param_3;
  func_0x000107c5f9dc(param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10243e414; end: 10243e44f; -[SCAdSettingsRequestUtil init] */

void FUN_10243e414(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10243e450; end: 10243e483;  */

void FUN_10243e450(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10243e484; end: 10243e487; -[SCAdSettingsRequestUtil .cxx_destruct] */

void FUN_10243e484(void)

{
  return;
}



/* Entry: 10243e488; end: 10243e617;  */

undefined1  [16] FUN_10243e488(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c5ef04(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ef00();
  (**(code **)(lVar8 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  lVar2 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  lVar6 = 0x70;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  lVar8 = lVar3;
  func_0x000107c4a970();
  func_0x000107c61180();
  lVar4 = lVar8;
  func_0x000107c5faec();
  lVar9 = lVar6;
  func_0x000107c61170();
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(long *)(lVar2 + 0x40) = lVar8;
  *(long *)(lVar2 + 0x20) = lVar4;
  *(long *)(lVar2 + 0x28) = lVar6;
  lVar4 = lVar3;
  func_0x000107c40860();
  func_0x000107c61180();
  if (lVar4 == 0) {
    *(undefined **)(lVar2 + 0x60) = puVar1;
    *(long *)(lVar2 + 0x68) = lVar8;
  }
  else {
    lVar6 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    *(undefined **)(lVar2 + 0x60) = puVar1;
    *(long *)(lVar2 + 0x68) = lVar8;
    if (lVar9 != 0) {
      *(long *)(lVar2 + 0x48) = lVar6;
      goto LAB_10243e5c8;
    }
  }
  *(undefined8 *)(lVar2 + 0x48) = 0x296c6c756e28;
  lVar9 = -0x1a00000000000000;
LAB_10243e5c8:
  *(long *)(lVar2 + 0x50) = lVar9;
  uVar5 = 0x40255f4025;
  uVar7 = 0xe500000000000000;
  func_0x000107c5fb00(0x40255f4025,0xe500000000000000,lVar2);
  func_0x000107c61170(lVar3);
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar5;
  return auVar10;
}



/* Entry: 10243e618; end: 10243e6f3;  */

void FUN_10243e618(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = param_1;
  func_0x00010848cc94();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c5f9e8();
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined *)0x0) goto LAB_10243e680;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
LAB_10243e680:
  if (param_2 != 0) {
    uVar1 = (ulong)param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61434(param_2);
      func_0x000107c61558(puVar3);
      func_0x00010018433c(param_1,param_2,0xd000000000000013,0x800000010ef33080,puVar3);
    }
  }
  return;
}



/* Entry: 10243e6f4; end: 10243e713;  */

void FUN_10243e6f4(void)

{
  func_0x000107c61168(&PTR_PTR_112840178);
  return;
}



/* Entry: 10243e714; end: 10243e77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243e714(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10243eb08();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e99eb8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10243e780; end: 10243e7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243e780(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e99eb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10243e7ec; end: 10243e84b; -[_TtC47SponsoredLensLaunchScopedFactoryServiceProvider33SponsoredLensLaunchScopedServices init] */

void FUN_10243e7ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensLaunchScopedFactoryServiceProvider.SponsoredLensLaunchScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10243e818);
  (*pcVar1)();
}



/* Entry: 10243e84c; end: 10243e85b; -[_TtC47SponsoredLensLaunchScopedFactoryServiceProvider33SponsoredLensLaunchScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243e84c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e99eb8));
  return;
}



/* Entry: 10243e85c; end: 10243e8c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10243e85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110508fa0;
  func_0x000107c613fc(&UNK_110508fa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10243eba0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10243e8c8; end: 10243e963;  */

void FUN_10243e8c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110508eb0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110508eb0;
  return;
}



/* Entry: 10243e964; end: 10243e99b;  */

void FUN_10243e964(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10243e99c; end: 10243e9a3;  */

undefined8 FUN_10243e99c(void)

{
  return 0x1b;
}



/* Entry: 10243e9a4; end: 10243ead7;  */

void FUN_10243e9a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110508fc8;
  func_0x000107c613fc(&UNK_110508fc8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10243eb78;
  func_0x00010058fa64(FUN_10243eb78,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10243ead8; end: 10243eb07;  */

undefined ** FUN_10243ead8(void)

{
  return &PTR_DAT_112f95f50;
}



/* Entry: 10243eb08; end: 10243eb27;  */

void FUN_10243eb08(void)

{
  func_0x000107c61168(&PTR_PTR_112840228);
  return;
}



/* Entry: 10243eb28; end: 10243eb77;  */

undefined1  [16] FUN_10243eb28(void)

{
  return ZEXT816(0x110508f00);
}



/* Entry: 10243eb78; end: 10243eb9f;  */

void FUN_10243eb78(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10243eba0; end: 10243eba3;  */

void FUN_10243eba0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10243eba4; end: 10243ec1f;  */

void FUN_10243eba4(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e99f28,&UNK_10daa6e30);
  func_0x000107c613fc();
  pcVar1 = FUN_10243efa0;
  func_0x0001000841fc(FUN_10243efa0,param_2);
  func_0x000100084214(&UNK_10daa6e00,0x2f,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10243ec20; end: 10243ec37;  */

void FUN_10243ec20(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e99f28,&UNK_10daa6e30);
  func_0x000107c613fc();
  pcVar1 = FUN_10243efa0;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10daa6e00,0x2f,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10243ec38; end: 10243ef9f;  */

void FUN_10243ec38(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e99f30,&UNK_10daa6e38);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10243fdbc();
  func_0x000100082720("SCCaaSCameraScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10243fe48();
  func_0x000100082720("SCCaaSCameraScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10243e964;
  func_0x0001000823a8(FUN_10243e964,0);
  func_0x000100082720("SponsoredLensLaunchScopedServicesCleanupRelayServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e99f38,&UNK_10daa6e50);
  puVar5 = &UNK_110509028;
  func_0x000107c613fc(&UNK_110509028,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10243efa8;
  func_0x0001000823a8(0x10243efa8,puVar5);
  func_0x000100082720("SponsoredLensCameraEntryPointWrapperServiceProvider",0x33,2);
  puVar6 = puVar2;
  FUN_10243fc70();
  func_0x000100082720("SponsoredLensLaunchScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e99f40,&UNK_10daa6e40);
  puVar5 = &UNK_110509050;
  func_0x000107c613fc(&UNK_110509050,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10243efb4;
  func_0x0001000823a8(0x10243efb4,puVar5);
  func_0x000100082720("SponsoredLensLaunchScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e99ec0,&UNK_10daa6bd0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10243efc0;
  func_0x0001000823a8(0x10243efc0,uVar7);
  func_0x000100082720("SponsoredLensLaunchScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e99eb0,&UNK_10daa6bc0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10243efc8;
  func_0x0001000823a8(0x10243efc8,uVar8);
  func_0x000100082720("SponsoredLensLaunchScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110509078;
  func_0x000107c613fc(&UNK_110509078,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10243efd0;
  func_0x0001000823a8(0x10243efd0,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SponsoredLensLaunchScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10243efa0; end: 10243efd7;  */

void FUN_10243efa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e99f30,&UNK_10daa6e38);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10243fdbc();
  func_0x000100082720("SCCaaSCameraScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10243fe48();
  func_0x000100082720("SCCaaSCameraScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10243e964;
  func_0x0001000823a8(FUN_10243e964,0);
  func_0x000100082720("SponsoredLensLaunchScopedServicesCleanupRelayServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e99f38,&UNK_10daa6e50);
  puVar5 = &UNK_110509028;
  func_0x000107c613fc(&UNK_110509028,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x10243efa8;
  func_0x0001000823a8(0x10243efa8,puVar5);
  func_0x000100082720("SponsoredLensCameraEntryPointWrapperServiceProvider",0x33,2);
  puVar6 = puVar2;
  FUN_10243fc70();
  func_0x000100082720("SponsoredLensLaunchScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e99f40,&UNK_10daa6e40);
  puVar5 = &UNK_110509050;
  func_0x000107c613fc(&UNK_110509050,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x10243efb4;
  func_0x0001000823a8(0x10243efb4,puVar5);
  func_0x000100082720("SponsoredLensLaunchScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e99ec0,&UNK_10daa6bd0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x10243efc0;
  func_0x0001000823a8(0x10243efc0,uVar7);
  func_0x000100082720("SponsoredLensLaunchScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e99eb0,&UNK_10daa6bc0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10243efc8;
  func_0x0001000823a8(0x10243efc8,uVar8);
  func_0x000100082720("SponsoredLensLaunchScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110509078;
  func_0x000107c613fc(&UNK_110509078,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x10243efd0;
  func_0x0001000823a8(0x10243efd0,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SponsoredLensLaunchScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10243efd8; end: 10243f103;  */

void FUN_10243efd8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_10243f328();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_60;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c6157c(uStack_68);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(param_2 + 0x18) = puVar3;
  FUN_102d3fdc0(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar3);
  uVar2 = uStack_58;
  func_0x000102d3fa7c(uStack_58,uVar1,puVar3);
  func_0x000107c61574(uStack_68);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10243f104; end: 10243f1ef;  */

long FUN_10243f104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e99f48,&UNK_10dabb4f0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar1 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_102d3fdc0(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x000102d3fa7c(param_1,param_2,puVar2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10243f1f0; end: 10243f223;  */

void FUN_10243f1f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10243f224; end: 10243f22b;  */

undefined8 FUN_10243f224(void)

{
  return 0x1b;
}



/* Entry: 10243f22c; end: 10243f2af;  */

void FUN_10243f22c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10243f368,param_2,FUN_10243f36c,param_2,FUN_10243f394,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


