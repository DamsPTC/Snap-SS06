/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018c0240; end: 1018c0277;  */

void FUN_1018c0240(undefined8 param_1)

{
  if (lRam000000011347a260 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e655cd0);
  return;
}



/* Entry: 1018c0278; end: 1018c0327;  */

void FUN_1018c0278(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_68 = PTR___sBOWV_11034d658 + 0x40;
  puStack_60 = &UNK_10d990950;
  puStack_58 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_50 = &UNK_10d990950;
  puStack_40 = PTR___sBbWV_11034d660 + 0x40;
  puStack_48 = &UNK_10d990950;
  puStack_38 = &UNK_10d990968;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d990950;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 1018c0328; end: 1018c037b;  */

void FUN_1018c0328(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018c037c; end: 1018c0497;  */

void FUN_1018c037c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0474);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  func_0x000103e03b1c(0);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0478);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0490);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0494);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    func_0x000107c61174(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0498);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 1018c0498; end: 1018c056f;  */

/* WARNING: Removing unreachable block (ram,0x0001018c0494) */

void FUN_1018c0498(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c054c);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)uVar9 < param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0564);
    (*pcVar6)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0568);
    (*pcVar6)();
  }
  lVar5 = 1 - (param_2 - param_1);
  if (!SBORROW8(1,param_2 - param_1)) {
    if (uVar10 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar10 & 0xffffffffffffff8;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar9 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar9,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0570);
      (*pcVar6)();
    }
    FUN_1018bf958(uVar9 + lVar5,1);
    lVar5 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0474);
      (*pcVar6)();
    }
    uVar9 = *unaff_x20;
    uVar10 = uVar9 & 0xffffffffffffff8;
    puVar1 = (undefined8 *)(uVar10 + 0x20 + param_1 * 8);
    uVar7 = 0;
    func_0x000103e03b1c(0);
    func_0x000107c61408(puVar1,lVar5,uVar7);
    lVar4 = 1 - lVar5;
    if (SBORROW8(1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0478);
      (*pcVar6)();
    }
    if (lVar4 != 0) {
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
        lVar5 = uVar8 - param_2;
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
        lVar5 = uVar8 - param_2;
      }
      if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0490);
        (*pcVar6)();
      }
      puVar2 = puVar1 + 1;
      puVar3 = (undefined8 *)(uVar10 + 0x20 + param_2 * 8);
      if (puVar2 != puVar3 || puVar3 + lVar5 <= puVar2) {
        func_0x000107c610b8(puVar2,puVar3,lVar5 << 3);
      }
      if (uVar9 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar8 = uVar10;
        if ((uVar9 & 0x8000000000000000) != 0) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar8,lVar4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c0494);
        (*pcVar6)();
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + lVar4;
    }
    *puVar1 = param_3;
    func_0x000107c61174(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1018c056c);
  (*pcVar6)();
}



/* Entry: 1018c0570; end: 1018c058b;  */

void FUN_1018c0570(long param_1,long param_2)

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



/* Entry: 1018c058c; end: 1018c0617;  */

void FUN_1018c058c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  return;
}



/* Entry: 1018c0618; end: 1018c06f7;  */

/* WARNING: Possible PIC construction at 0x0001018c0624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c0634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c0644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c0654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c0664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c0658) */
/* WARNING: Removing unreachable block (ram,0x0001018c0648) */
/* WARNING: Removing unreachable block (ram,0x0001018c0638) */
/* WARNING: Removing unreachable block (ram,0x0001018c0628) */
/* WARNING: Removing unreachable block (ram,0x0001018c0668) */

void FUN_1018c0618(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1018c06f8; end: 1018c071b;  */

void FUN_1018c06f8(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001003d1568();
  *param_1 = param_2;
  return;
}



/* Entry: 1018c071c; end: 1018c09cf;  */

void FUN_1018c071c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b7f68;
  func_0x000107c61168(PTR_PTR_1126b7f68);
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126a7c90;
  func_0x000107c610f8();
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  func_0x000107c4556c(puVar6,param_3,param_2,uVar7,uVar8,uVar9,uVar3,puVar4,uVar10,puVar5,uVar1,
                      uVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_2);
  *param_1 = puVar6;
  return;
}



/* Entry: 1018c09d0; end: 1018c0a37;  */

void FUN_1018c09d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 1018c0a38; end: 1018c0b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018c0a38(void)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113043d30);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_48);
  func_0x000107c61574(uVar1);
  uVar1 = auStack_48[0];
  func_0x000107c42594();
  func_0x000107c615e8(auStack_48[0]);
  lVar3 = _DAT_113091af0;
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61428(lVar2 + _DAT_113091af0,auStack_48,0,0);
    if ((*(long *)(lVar2 + lVar3) != 0) && (lVar3 = *(long *)(unaff_x20 + 0x40), lVar3 != 0)) {
      func_0x000107c6157c(lVar3);
      func_0x0001000d224c(&uStack_50);
      func_0x000107c61574(lVar3);
      func_0x000107c3fa38(uStack_50);
      func_0x000107c615e8(uStack_50);
    }
  }
  return 0;
}



/* Entry: 1018c0b10; end: 1018c0b47;  */

void FUN_1018c0b10(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7ca0;
  func_0x000107c610f8();
  func_0x000107c46868();
  *param_1 = puVar1;
  return;
}



/* Entry: 1018c0b48; end: 1018c0bf7;  */

void FUN_1018c0b48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1018c0bf8; end: 1018c0c1b;  */

void FUN_1018c0bf8(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001003d1104();
  *param_1 = param_2;
  return;
}



/* Entry: 1018c0c1c; end: 1018c0c3b;  */

void FUN_1018c0c1c(long param_1,long param_2)

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



/* Entry: 1018c0c3c; end: 1018c0cdb;  */

void FUN_1018c0c3c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c5da60();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5b44c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 == 0) {
      lVar4 = 0;
      param_2 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x10) = lVar4;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    func_0x000107c6142c(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c0cdc);
  (*pcVar1)();
}



/* Entry: 1018c0cdc; end: 1018c0ce7;  */

void FUN_1018c0cdc(long param_1,long param_2)

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



/* Entry: 1018c0ce8; end: 1018c0d6b;  */

undefined8 FUN_1018c0ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c610f8();
  FUN_1018c0e04(0x4014000000000000,param_1,param_2,param_3);
  uVar1 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,uVar1,0x68,7);
  return param_1;
}



/* Entry: 1018c0d6c; end: 1018c0e03; -[AdUserSwift initWithPersistedDataAdapter:grapheneRegistry:adConfigProvider:] */

undefined8
FUN_1018c0d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_1018c0e04(0x4014000000000000,param_3,param_4,param_5);
  uVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar1,0x68,7);
  return param_3;
}



/* Entry: 1018c0e04; end: 1018c110f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1018c0e04(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 auStack_c0 [2];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = _DAT_112dcec78;
  lVar10 = (long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar4;
  lVar6 = _DAT_112dcec68;
  *(undefined8 *)(unaff_x20 + _DAT_112dcec68) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112dcec70) = 0;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcec90);
  *plVar1 = 0;
  plVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112dcec98);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dceca8) = 0;
  *(long *)(unaff_x20 + lVar6) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dcec80) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dcec88) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dceca0) = param_1;
  (**(code **)(lVar9 + 0x68))
            (lVar10,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar3
            );
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c61174();
  auStack_c0[0] = param_3;
  func_0x000107c61174(param_4);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efbcf70);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar9 + 8))(lVar10);
  *(undefined **)(unaff_x20 + _DAT_112dcec60) = puVar5;
  if (param_2 != 0) {
    lVar6 = param_2;
    func_0x000107c43eb8();
    func_0x000107c61180();
    if (lVar6 != 0) {
      lVar9 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
      goto LAB_1018c1004;
    }
  }
  lVar9 = 0;
  lVar3 = 0;
LAB_1018c1004:
  lVar6 = plVar1[1];
  *plVar1 = lVar9;
  plVar1[1] = lVar3;
  func_0x000107c6142c(lVar6);
  puVar7 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  uVar4 = *(undefined8 *)(puVar7 + _DAT_112dcec60);
  puVar5 = &UNK_11040bfd8;
  func_0x000107c613fc(&UNK_11040bfd8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar7);
  uStack_90 = 0x1018c2114;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_11040c038;
  ppuVar8 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4(ppuVar8);
  puVar5 = puStack_88;
  func_0x000107c61174(puVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(auStack_c0[0]);
  func_0x000107c61170(param_4);
  return puVar7;
}



/* Entry: 1018c1110; end: 1018c1163;  */

void FUN_1018c1110(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1018c116c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1018c1164; end: 1018c116b;  */

void FUN_1018c1164(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1018c116c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1018c116c; end: 1018c12a7;  */

/* WARNING: Possible PIC construction at 0x0001018c1230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c1278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c1234) */
/* WARNING: Removing unreachable block (ram,0x0001018c1240) */
/* WARNING: Removing unreachable block (ram,0x0001018c1250) */
/* WARNING: Removing unreachable block (ram,0x0001018c1274) */
/* WARNING: Removing unreachable block (ram,0x0001018c127c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c116c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c31904();
  *(char *)(unaff_x20 + _DAT_112dcec70) = (char)param_1;
  FUN_1018c1ebc();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c3ac54();
    func_0x000107c61180();
    lVar4 = param_2;
    if (lVar2 == 0) {
      func_0x000107c5faec();
      lVar4 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c5faec();
    plVar1 = (long *)(unaff_x20 + _DAT_112dcec90);
    lVar5 = plVar1[1];
    *plVar1 = lVar2;
    plVar1[1] = lVar4;
    func_0x000107c61434(lVar4);
    func_0x000107c6142c(lVar5);
    uVar3 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010efbcf40);
    func_0x000107c49cec(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1018c12a8; end: 1018c12c3;  */

void FUN_1018c12a8(long param_1,long param_2)

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



/* Entry: 1018c12c4; end: 1018c1423; -[AdUserSwift updateAdTrackingAdId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c12c4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dcec60);
  puVar1 = &UNK_11040bfd8;
  func_0x000107c613fc(&UNK_11040bfd8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_40 = 0x1018c2110;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11040c010;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1018c1424; end: 1018c1507; -[AdUserSwift setEncrypedUserData:] */

/* WARNING: Possible PIC construction at 0x0001018c1464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c1468) */

void FUN_1018c1424(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x000107c61174();
    func_0x0001018c1398(0,0xf000000000000000);
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  else {
    func_0x000107c61174();
    param_1 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c1508; end: 1018c157b; -[AdUserSwift getEncrypedUserData] */

void FUN_1018c1508(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001018c14a0();
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    func_0x000107c5ee20(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1018c157c; end: 1018c158b; -[AdUserSwift getEnableAdTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1018c157c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112dcec70);
}



/* Entry: 1018c158c; end: 1018c171b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018c158c(double param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_a0 [16];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  uVar5 = 0x800000010efbce20;
  uVar2 = 0xd000000000000018;
  func_0x0001000a9a18(0xd000000000000018);
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126afec0;
  func_0x000107c61168();
  puVar6 = puVar3;
  func_0x000107c4101c();
  dVar7 = param_1;
  FUN_1018c1ebc();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = puVar6;
    func_0x000107c3ac54();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
  }
  func_0x000100087bd4(FUN_1018c1fc0,auStack_a0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c4101c(puVar3);
  FUN_1018c171c(dVar7 - param_1,0x4f52465f44414552,0xee00414644495f4d);
  func_0x000107c61428(param_2,auStack_a0,0,0);
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = puVar6;
  return auVar8;
}



/* Entry: 1018c171c; end: 1018c182f;  */

/* WARNING: Possible PIC construction at 0x0001018c17a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c17b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c17f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c180c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c17b8) */
/* WARNING: Removing unreachable block (ram,0x0001018c17c8) */
/* WARNING: Removing unreachable block (ram,0x0001018c17d8) */
/* WARNING: Removing unreachable block (ram,0x0001018c17a8) */
/* WARNING: Removing unreachable block (ram,0x0001018c17f4) */
/* WARNING: Removing unreachable block (ram,0x0001018c1810) */
/* WARNING: Removing unreachable block (ram,0x0001018c17f8) */

void FUN_1018c171c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c5d8dc();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110dae878);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c1830);
  (*pcVar1)();
}



/* Entry: 1018c1830; end: 1018c183b; -[AdUserSwift getUserAdId] */

void FUN_1018c1830(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018c158c();
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



/* Entry: 1018c183c; end: 1018c1953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018c183c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_90 [16];
  code *pcStack_68;
  long lStack_60;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000020;
  func_0x0001000a9a18(0xd000000000000020,0x800000010efbce40);
  func_0x000107c61170(uVar1);
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  pcVar3 = FUN_1018c201c;
  func_0x000100087bd4(&pcStack_68,FUN_1018c201c,auStack_90,uVar1);
  if (lStack_60 == 0) {
    lVar4 = lStack_60;
    FUN_1018c158c();
    func_0x000107c61428(param_1,auStack_90,0,0);
    uVar1 = *param_1;
    func_0x000107c61174(uVar1);
    func_0x0001000aa0a8(uVar2);
    func_0x000107c61170(uVar1);
    pcStack_68 = pcVar3;
    lStack_60 = lVar4;
  }
  auVar5._8_8_ = lStack_60;
  auVar5._0_8_ = pcStack_68;
  return auVar5;
}



/* Entry: 1018c1954; end: 1018c1a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c1954(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112dcec98);
  lVar2 = ((undefined8 *)(param_2 + _DAT_112dcec98))[1];
  if (lVar2 != 0) {
    func_0x000107c61434(lVar2);
    puVar3 = (undefined8 *)0xd000000000000011;
    FUN_1018c171c(0,0xd000000000000011,0x800000010efbcf00);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar4 = *puVar3;
    func_0x000107c61174(uVar4);
    func_0x0001000aa0a8(param_3);
    func_0x000107c61170(uVar4);
  }
  *param_1 = uVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 1018c1a0c; end: 1018c1a17; -[AdUserSwift getCachedUserAdIdV2] */

void FUN_1018c1a0c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018c183c();
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



/* Entry: 1018c1a18; end: 1018c1b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018c1a18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_68;
  long lStack_60;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd00000000000001e;
  func_0x0001000a9a18(0xd00000000000001e,0x800000010efbce70);
  func_0x000107c61170(uVar1);
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar3 = 0x1018c2034;
  func_0x000100087bd4(&uStack_68,0x1018c2034,auStack_90,uVar1);
  if (lStack_60 == 0) {
    lVar4 = lStack_60;
    FUN_1018c158c();
    func_0x000107c61428(param_1,auStack_90,0,0);
    uVar1 = *param_1;
    func_0x000107c61174(uVar1);
    func_0x0001000aa0a8(uVar2);
    func_0x000107c61170(uVar1);
    uStack_68 = uVar3;
    lStack_60 = lVar4;
  }
  auVar5._8_8_ = lStack_60;
  auVar5._0_8_ = uStack_68;
  return auVar5;
}



/* Entry: 1018c1b30; end: 1018c1c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c1b30(undefined8 *param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010028941c();
  lVar3 = ((undefined8 *)(param_3 + _DAT_112dcec98))[1];
  if (((lVar3 == 0) || (param_2 = param_2 - *(double *)(param_3 + _DAT_112dceca8), param_2 < 0.0))
     || (*(double *)(param_3 + _DAT_112dceca0) <= param_2)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + _DAT_112dcec98);
    func_0x000107c61434(lVar3);
    puVar1 = (undefined8 *)0xd000000000000016;
    FUN_1018c171c(0,0xd000000000000016,0x800000010efbcee0);
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar2 = *puVar1;
    func_0x000107c61174(uVar2);
    func_0x0001000aa0a8(param_4);
    func_0x000107c61170(uVar2);
    *param_1 = uVar4;
    param_1[1] = lVar3;
  }
  return;
}



/* Entry: 1018c1c24; end: 1018c1c2f; -[AdUserSwift getCachedUserAdId] */

void FUN_1018c1c24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018c1a18();
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



/* Entry: 1018c1c30; end: 1018c1c9b;  */

void FUN_1018c1c30(undefined8 param_1,long param_2,code *param_3)

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



/* Entry: 1018c1c9c; end: 1018c1d5f; -[AdUserSwift prewarmCachedUserAdId] */

void FUN_1018c1c9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [48];
  
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar4 = 0x800000010efbce90;
  uVar3 = 0xd000000000000022;
  func_0x0001000a9a18(0xd000000000000022,0x800000010efbce90);
  func_0x000107c61170(uVar2);
  FUN_1018c158c();
  func_0x000107c6142c(uVar4);
  func_0x000107c61428(puVar1,auStack_60,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1018c1d60; end: 1018c1d7b; -[AdUserSwift getLast429ResponseTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018c1d60(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_112dcec68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfc6c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + _DAT_112dcec68),PTR_s_getLast429ResponseTimestamp_1125cf4a8);
    return param_1;
  }
  return 0;
}



/* Entry: 1018c1d7c; end: 1018c1d93; -[AdUserSwift setLast429ResponseTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c1d7c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dcec68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112dcec68),PTR_s_setLast429ResponseTimestamp__11264b7c0);
    return;
  }
  return;
}



/* Entry: 1018c1d94; end: 1018c1db3; -[AdUserSwift getPersistedDataAdapter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c1d94(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112dcec68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1018c1db4; end: 1018c1dcb; -[AdUserSwift cleanUserAdInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c1db4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dcec68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3a190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112dcec68),PTR_s_cleanUserAdInfo_1125ac208);
    return;
  }
  return;
}



/* Entry: 1018c1dcc; end: 1018c1e2b; -[AdUserSwift init] */

void FUN_1018c1dcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdUserInfoSwift.AdUserSwift",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c1df8);
  (*pcVar1)();
}



/* Entry: 1018c1e2c; end: 1018c1ebb; -[AdUserSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001018c1e9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c1ea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c1e2c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcec60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcec80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcec88));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcec78));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dcec68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dcec90 + 8))
  ;
  return;
}



/* Entry: 1018c1ebc; end: 1018c1fbf;  */

undefined8 FUN_1018c1ebc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efbcf20);
  puVar3 = puVar1;
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,puVar3);
    func_0x000107c615e8(puVar3);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    uStack_78 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001018c20bc(0);
    puVar4 = &uStack_78;
    func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if ((int)puVar4 == 0) {
      uStack_78 = 0;
    }
  }
  return uStack_78;
}



/* Entry: 1018c1fc0; end: 1018c201b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c1fc0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112dcec98);
  uVar3 = puVar1[1];
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar1 = uVar5;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x00010028941c();
  *(undefined8 *)(lVar4 + _DAT_112dceca8) = uVar5;
  return;
}



/* Entry: 1018c201c; end: 1018c20ff;  */

void FUN_1018c201c(void)

{
  long unaff_x20;
  
  FUN_1018c1954(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1018c2100; end: 1018c2117;  */

void FUN_1018c2100(long param_1,long param_2)

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



/* Entry: 1018c2118; end: 1018c241f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1018c2118(ulong param_1,ulong param_2,long param_3,undefined1 *param_4,undefined8 param_5)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar5 = auStack_60;
  func_0x000107c610f8();
  puVar1 = (ulong *)(unaff_x20 + _DAT_112dcece8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(long *)(unaff_x20 + _DAT_112dcecf0) = param_3;
  *(undefined1 **)(unaff_x20 + _DAT_112dcecf8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dced00) = param_5;
  puVar3 = PTR_s_init_1125d9248;
  lVar4 = param_3;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61154(auStack_60,puVar3);
  if (param_2 != 0) {
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      if (param_3 == 0) {
        func_0x000107c6142c(param_2);
      }
      else {
        puVar6 = puVar5;
        func_0x000107c61174(puVar5);
        lVar7 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c6142c(param_2);
        }
        else {
          func_0x000107c5fadc(param_1,param_2);
          func_0x000107c6142c(param_2);
          func_0x000107c58b58(lVar7);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(param_1);
        }
        func_0x000107c61170(lVar4);
        func_0x000107c61170(param_4);
        param_4 = puVar6;
      }
      goto LAB_1018c2274;
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(lVar4);
LAB_1018c2274:
  func_0x000107c61170(param_4);
  return puVar5;
}



/* Entry: 1018c2420; end: 1018c24a3; -[UserAdIdProviderSwift initWithSAID:preferences:grapheneRegistry:initType:] */

void FUN_1018c2420(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x0001018c229c(param_3,param_2,param_4,param_5,param_6);
  return;
}



/* Entry: 1018c24a4; end: 1018c2513; -[UserAdIdProviderSwift said] */

void FUN_1018c24a4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1018c273c();
  func_0x000107c61434(param_2);
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



/* Entry: 1018c2514; end: 1018c268f;  */

/* WARNING: Possible PIC construction at 0x0001018c260c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c261c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c2658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018c2670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c2620) */
/* WARNING: Removing unreachable block (ram,0x0001018c2630) */
/* WARNING: Removing unreachable block (ram,0x0001018c2640) */
/* WARNING: Removing unreachable block (ram,0x0001018c2610) */
/* WARNING: Removing unreachable block (ram,0x0001018c265c) */
/* WARNING: Removing unreachable block (ram,0x0001018c2674) */
/* WARNING: Removing unreachable block (ram,0x0001018c2660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c2514(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  puVar5 = PTR_PTR_1126b8d98;
  func_0x000107c61168();
  func_0x000107c515d0();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112dced00);
    uVar2 = 0x6e776f6e6b6e75;
    if (lVar6 == 2) {
      uVar2 = 0x7265747369676572;
    }
    uVar1 = 0xe700000000000000;
    if (lVar6 == 2) {
      uVar1 = 0xe800000000000000;
    }
    uVar3 = 0x656d75736572;
    if (lVar6 != 3) {
      uVar3 = uVar2;
    }
    uVar2 = 0xe600000000000000;
    if (lVar6 != 3) {
      uVar2 = uVar1;
    }
    uVar1 = 0x6e695f676f6c;
    if (lVar6 != 1) {
      uVar1 = uVar3;
    }
    uVar3 = 0xe600000000000000;
    if (lVar6 != 1) {
      uVar3 = uVar2;
    }
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110daf4d8);
    func_0x000107c5fadc(uVar1,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c5e508(puVar5);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1018c2690);
  (*pcVar4)();
}



/* Entry: 1018c2690; end: 1018c26ef; -[UserAdIdProviderSwift init] */

void FUN_1018c2690(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdUserInfoSwift.UserAdIdProviderSwift",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c26bc);
  (*pcVar1)();
}



/* Entry: 1018c26f0; end: 1018c273b; -[UserAdIdProviderSwift .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c26f0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcecf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcecf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dcece8 + 8))
  ;
  return;
}



/* Entry: 1018c273c; end: 1018c2827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1018c273c(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112dcece8);
  uVar4 = puVar1[1];
  if (uVar4 == 0) {
LAB_1018c277c:
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112dcecf0);
    if (uVar2 == 0) {
LAB_1018c27d8:
      uVar2 = 0;
      uVar4 = 0;
    }
    else {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar2 == 0) goto LAB_1018c27d8;
      uVar3 = uVar2;
      func_0x000107c515cc();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar3 == 0) goto LAB_1018c27d8;
      uVar2 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
    }
    uVar3 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    func_0x000107c6142c(uVar3);
    uVar4 = puVar1[1];
    if (uVar4 != 0) goto LAB_1018c27f4;
  }
  else {
    uVar2 = *puVar1 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar2 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) goto LAB_1018c277c;
LAB_1018c27f4:
    uVar3 = *puVar1;
    uVar2 = uVar3 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar2 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) goto LAB_1018c2814;
  }
  FUN_1018c2514();
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
LAB_1018c2814:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1018c2828; end: 1018c2847;  */

void FUN_1018c2828(void)

{
  func_0x000107c61168(&PTR_PTR_1127ea110);
  return;
}



/* Entry: 1018c2848; end: 1018c29fb;  */

void FUN_1018c2848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_23;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x80) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_34;
  *(undefined8 *)(unaff_x20 + 0x90) = param_30;
  *(undefined8 *)(unaff_x20 + 0x98) = param_31;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_32;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_14;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_15;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_16;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_28;
  *(undefined8 *)(unaff_x20 + 200) = param_17;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_29;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_22;
  *(undefined8 *)(unaff_x20 + 0x20) = param_27;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x100) = param_25;
  *(undefined8 *)(unaff_x20 + 0x108) = param_33;
  *(undefined8 *)(unaff_x20 + 0x110) = param_24;
  *(undefined8 *)(unaff_x20 + 0x118) = param_26;
  *(undefined8 *)(unaff_x20 + 0x120) = param_35;
  *(undefined8 *)(unaff_x20 + 0x130) = param_37;
  *(undefined8 *)(unaff_x20 + 0x128) = param_36;
  *(undefined8 *)(unaff_x20 + 0x138) = param_38;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  return;
}



/* Entry: 1018c29fc; end: 1018c2a4f;  */

void FUN_1018c29fc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
  func_0x0001048d9980(0xd00000000000003f,0x800000010efbd0c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c2a50);
  (*pcVar1)();
}



/* Entry: 1018c2a50; end: 1018c2acf;  */

void FUN_1018c2a50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x00010040e12c(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x0001034be044(uVar4,uVar2,uVar1,uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 1018c2ad0; end: 1018c2adb;  */

void FUN_1018c2ad0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1018c2adc; end: 1018c2b97;  */

void FUN_1018c2adc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7d18;
  func_0x000107c610f8();
  func_0x000107c45fac();
  *param_1 = puVar1;
  return;
}



/* Entry: 1018c2b98; end: 1018c2bef;  */

void FUN_1018c2b98(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7d10;
  func_0x000107c610f8();
  func_0x000107c45fb0();
  *param_1 = puVar1;
  return;
}



/* Entry: 1018c2bf0; end: 1018c2c73;  */

void FUN_1018c2bf0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7d08;
  func_0x000107c610f8();
  func_0x000107c45fb4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1018c2c74; end: 1018c2d0f;  */

void FUN_1018c2c74(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7d00;
  func_0x000107c610f8();
  func_0x000107c45fb8();
  *param_1 = puVar1;
  return;
}



/* Entry: 1018c2d10; end: 1018c2d1b;  */

void FUN_1018c2d10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1018c2d1c; end: 1018c46df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c2d1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  bool bVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  code *pcVar29;
  undefined8 uVar30;
  code *pcVar31;
  code *pcVar32;
  code *pcVar33;
  code *pcVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  code *pcVar37;
  undefined8 uVar38;
  code *pcVar39;
  code *pcVar40;
  undefined *puVar41;
  undefined8 uVar42;
  code *pcVar43;
  code *pcVar44;
  undefined8 *puVar45;
  undefined *puVar46;
  code *pcVar47;
  code *pcVar48;
  code *pcVar49;
  code *pcVar50;
  undefined8 uVar51;
  code *pcVar52;
  undefined *puVar53;
  long lVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  code *pcVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  code *pcVar63;
  code *pcVar64;
  code *pcVar65;
  undefined8 uVar66;
  code *pcVar67;
  code *pcVar68;
  code *pcVar69;
  code *pcVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  code *pcVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined *puVar81;
  long lVar82;
  long lVar83;
  undefined8 uVar84;
  undefined *puVar85;
  undefined *puVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  long unaff_x20;
  code *pcVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 in_stack_fffffffffffffba8;
  ulong uVar94;
  long lStack_280;
  long lStack_238;
  long lStack_1d8;
  long lStack_158;
  code *pcStack_150;
  code *pcStack_d0;
  code *pcStack_90;
  undefined8 auStack_80 [2];
  
  lVar82 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar51 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar83 = *(long *)(unaff_x20 + 0x50);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar38 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar42 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar80 = *(undefined8 *)(unaff_x20 + 0xa0);
  lVar54 = *(long *)(unaff_x20 + 0xa8);
  uVar92 = *(undefined8 *)(unaff_x20 + 0xb0);
  lStack_1d8 = *(long *)(unaff_x20 + 0xc0);
  uVar78 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar79 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar90 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar84 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x168);
  pcVar21 = (code *)PTR_PTR_1126b9188;
  func_0x000107c610f8();
  func_0x000107c45740();
  lVar22 = lVar82;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar22 != 0) {
    uVar23 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar24 = lVar22;
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar23);
    func_0x000107c615e8(lVar22);
    if ((int)lVar24 != 0) {
      puVar25 = (undefined *)0x0;
      func_0x00010243e214();
      bVar20 = true;
      goto LAB_1018c2eb4;
    }
  }
  bVar20 = false;
  puVar25 = PTR_PTR_1126c53b8;
LAB_1018c2eb4:
  func_0x000107c610f8();
  func_0x000107c45860();
  puVar26 = PTR_PTR_1126b91a8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c45578();
  uVar91 = *(undefined8 *)(lVar83 + _DAT_113010c10);
  uVar23 = uVar27;
  func_0x000107c44f4c(uVar27);
  func_0x000107c61180();
  func_0x000107c44f60(uVar27);
  func_0x000107c61180();
  puVar28 = PTR_PTR_1126b91b0;
  func_0x000107c610f8();
  func_0x000107c45588();
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar23);
  pcStack_90 = (code *)PTR_PTR_1126a7cb8;
  func_0x000107c610f8();
  func_0x000107c47de8();
  pcVar29 = (code *)PTR_PTR_1126a7cb8;
  func_0x000107c610f8();
  func_0x000107c47de8();
  uVar30 = *(undefined8 *)(lVar83 + _DAT_113010bd8);
  uVar27 = uVar30;
  func_0x000107c5c734();
  func_0x000107c61180();
  pcVar31 = (code *)PTR_PTR_1126a7cc0;
  func_0x000107c610f8();
  func_0x000107c487f4();
  func_0x000107c615e8(uVar27);
  pcStack_d0 = (code *)PTR_PTR_1126a7ca0;
  func_0x000107c610f8();
  func_0x000107c46868();
  pcVar32 = (code *)PTR_PTR_1126b91b8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c45724();
  pcVar33 = (code *)PTR_PTR_1126b91c0;
  func_0x000107c610f8();
  uVar23 = uVar8;
  func_0x000107c61174();
  func_0x000107c47a2c();
  pcVar34 = (code *)PTR_PTR_1126b91c0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c47a2c();
  func_0x000107c61170(uVar23);
  func_0x000107c61170(puVar28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = uVar7;
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  uVar93 = *(undefined8 *)(lVar83 + _DAT_113010bd0);
  uVar35 = uVar93;
  func_0x000107c5c734(uVar93);
  func_0x000107c61180();
  uVar36 = *(undefined8 *)(lVar83 + _DAT_113010be8);
  func_0x000107c5c734(uVar36);
  func_0x000107c61180();
  pcVar37 = (code *)PTR_PTR_1126c7d60;
  func_0x000107c610f8();
  func_0x000107c47a64();
  func_0x000107c615e8(uVar36);
  func_0x000107c615e8(uVar35);
  func_0x000107c615e8(uVar27);
  func_0x000107c61170(pcVar32);
  func_0x000107c61170(pcVar33);
  func_0x000107c5c734(uVar38);
  func_0x000107c61180();
  pcVar39 = (code *)PTR_PTR_1126b91c8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c45478();
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(pcVar32);
  func_0x000107c615e8(uVar38);
  pcVar40 = (code *)PTR_PTR_1126a7cc8;
  func_0x000107c610f8();
  func_0x000107c45580();
  puVar41 = &UNK_11040c258;
  func_0x000107c613fc(&UNK_11040c258,0x28,7);
  *(undefined8 *)(puVar41 + 0x10) = uVar42;
  *(undefined8 *)(puVar41 + 0x18) = uVar7;
  *(undefined8 *)(puVar41 + 0x20) = uVar80;
  func_0x0001000285a8(0x112dcef80,&UNK_10d990d50);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar42);
  uVar42 = uVar7;
  func_0x000107c61174();
  func_0x000107c61174(uVar80);
  pcVar43 = FUN_1018c4a4c;
  func_0x0001000bdd8c(FUN_1018c4a4c,puVar41);
  pcVar44 = pcVar43;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar43);
  pcVar89 = *(code **)(*(long *)(lVar54 + 0x138) + _DAT_113011788);
  pcVar43 = pcVar89;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  func_0x000107c61574();
  func_0x000104308e34();
  uVar27 = *(undefined8 *)pcVar89;
  puVar19 = *(undefined8 **)(pcVar89 + 8);
  puVar45 = puVar19;
  func_0x000107c61434();
  func_0x000104308e40();
  uVar38 = *puVar45;
  uVar80 = puVar45[1];
  puVar41 = &UNK_11040c280;
  func_0x000107c613fc(&UNK_11040c280,0x29,7);
  *(undefined8 *)(puVar41 + 0x10) = uVar92;
  *(undefined8 *)(puVar41 + 0x18) = uVar27;
  *(undefined8 **)(puVar41 + 0x20) = puVar19;
  puVar41[0x28] = 0;
  puVar46 = &UNK_11040c2a8;
  func_0x000107c613fc(&UNK_11040c2a8,0x29,7);
  *(undefined8 *)(puVar46 + 0x10) = uVar92;
  *(undefined8 *)(puVar46 + 0x18) = uVar38;
  *(undefined8 *)(puVar46 + 0x20) = uVar80;
  puVar46[0x28] = 0;
  func_0x000107c61580(uVar92,2);
  func_0x000107c61434(uVar80);
  func_0x000107c61174();
  func_0x0001000d224c(auStack_80);
  uVar27 = auStack_80[0];
  func_0x000107c4545c(auStack_80[0]);
  func_0x000107c615e8(uVar27);
  func_0x000104309264(0);
  func_0x000107c610f8();
  pcVar89 = pcVar21;
  func_0x000104308f10(param_2,pcVar21,FUN_1018c4b34,puVar41,0x1018c4c0c,puVar46,FUN_1018c46e0,0);
  if (bVar20) {
    puVar41 = &UNK_11040c2f8;
    func_0x000107c613fc(&UNK_11040c2f8,0x18,7);
    *(long *)(puVar41 + 0x10) = lStack_1d8;
    func_0x0001000285a8(0x112dcef88,&UNK_10d997110);
    func_0x000107c613fc();
    func_0x000107c615f0(lStack_1d8);
    pcVar47 = pcVar44;
    func_0x000107c61174();
    uVar27 = 0x1018c4c00;
    func_0x0001000bdd8c(0x1018c4c00,puVar41);
    uVar38 = uVar27;
    func_0x0001000bf56c();
    func_0x000107c61574(uVar27);
    func_0x000107c61174();
    uVar27 = uVar93;
    func_0x000107c5c734(uVar93);
    func_0x000107c61180();
    FUN_1018c50e4(0);
    func_0x000107c610f8();
    uVar80 = uVar38;
    func_0x0001018c4d74(uVar38,uVar27);
    func_0x0001000d224c(auStack_80);
    pcVar49 = pcVar39;
    func_0x000107c418b0(pcVar39);
    func_0x000107c61180();
    pcVar50 = pcVar39;
    func_0x000107c3df9c(pcVar39);
    func_0x000107c61180();
    puVar41 = PTR_PTR_1126a7cd8;
    func_0x000107c610f8();
    func_0x000107c46538();
    func_0x000107c61170(pcVar50);
    func_0x000107c615e8(pcVar49);
    puVar46 = PTR_PTR_1126a7780;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61174();
    pcVar48 = pcVar37;
    func_0x000107c61174();
    func_0x000107c61174();
    lVar54 = lVar82;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lStack_1d8 == 0) {
      lStack_280 = 0;
    }
    else {
      lStack_280 = lStack_1d8;
      func_0x000107c3de48();
      func_0x000107c61180();
    }
    uVar27 = uVar93;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar92 = uVar30;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar55 = *(undefined8 *)(lVar83 + _DAT_113010be0);
    uVar87 = *(undefined8 *)(lVar83 + _DAT_113010bf0);
    uVar35 = uVar55;
    func_0x000107c61174();
    uVar36 = uVar87;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar88 = *(undefined8 *)(lVar83 + _DAT_113010c30);
    uVar56 = uVar91;
    func_0x000107c61174(uVar91);
    uVar57 = uVar80;
    func_0x000107c61174();
    pcVar58 = pcVar40;
    func_0x000107c61174();
    func_0x000107c615f0(auStack_80[0]);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar59 = *(undefined8 *)(lVar83 + _DAT_113010c38);
    uVar60 = uVar59;
    func_0x000107c61174();
    uVar61 = uVar84;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar62 = 0;
    FUN_1018c8fc0();
    func_0x000107c610f8();
    func_0x000107c61174(uVar18);
    puVar53 = puVar46;
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar63 = pcVar33;
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar64 = pcVar21;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(pcVar48);
    pcVar52 = pcVar39;
    func_0x000107c61174();
    func_0x000107c61174(uVar35);
    func_0x000107c61174(uVar56);
    func_0x000107c61174();
    func_0x000107c61174(uVar60);
    func_0x000107c61174();
    func_0x000107c615f0(uVar51);
    pcVar65 = pcVar43;
    func_0x000107c61174();
    uVar35 = uVar17;
    func_0x000107c61174();
    uVar56 = uVar5;
    func_0x000107c61174();
    uVar60 = uVar16;
    func_0x000107c61174();
    uVar66 = uVar10;
    func_0x000107c61174();
    func_0x000107c615f0(uVar79);
    pcVar67 = pcStack_d0;
    func_0x000107c61174();
    pcVar68 = pcVar31;
    func_0x000107c61174();
    pcVar69 = pcVar89;
    func_0x000107c61174();
    pcVar70 = pcStack_90;
    func_0x000107c61174();
    puVar81 = puVar41;
    func_0x000107c61174();
    func_0x000107c61174(uVar78);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar90);
    func_0x000107c615f0(uVar11);
    func_0x000107c61174(uVar1);
    uVar71 = uVar12;
    func_0x000107c61174();
    uVar72 = uVar13;
    func_0x000107c61174();
    uVar73 = uVar2;
    func_0x000107c61174();
    func_0x000107c61174(uVar14);
    uVar74 = uVar15;
    func_0x000107c61174();
    uVar75 = uVar4;
    func_0x000107c61174();
    uVar76 = uVar6;
    func_0x000107c61174();
    uVar94 = CONCAT71((int7)((ulong)in_stack_fffffffffffffba8 >> 8),1);
    pcVar77 = pcVar33;
    func_0x0001018c7c8c(pcVar33,pcVar48,pcVar39,puVar46,pcStack_90,puVar41,uVar7,lVar54,pcVar89,
                        uVar8,lStack_280,pcVar21,uVar27,uVar92,uVar55,uVar36,uVar91,uVar94,pcVar31,
                        pcStack_d0,uVar80,pcVar40,auStack_80[0],uVar88,uVar78,uVar9,uVar79,uVar10,
                        pcVar44,uVar90,uVar11,uVar1,uVar59,uVar12,uVar61,uVar13,uVar2,uVar14,uVar15,
                        uVar4,uVar16,uVar5,uVar17,uVar6,uVar18,pcVar43,uVar51);
    func_0x000107c61174();
    func_0x000107c61174();
    lVar54 = lVar82;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lStack_1d8 == 0) {
      lStack_1d8 = 0;
    }
    else {
      func_0x000107c3de48();
      func_0x000107c61180();
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c610f8(uVar62);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar23);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(uVar51);
    func_0x000107c61174();
    func_0x000107c61174(uVar35);
    func_0x000107c61174(uVar56);
    func_0x000107c61174();
    func_0x000107c61174(uVar66);
    func_0x000107c615f0(uVar79);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(puVar81);
    func_0x000107c615f0(uVar11);
    func_0x000107c61174(uVar71);
    func_0x000107c61174(uVar72);
    func_0x000107c61174(uVar73);
    func_0x000107c61174(uVar74);
    func_0x000107c61174(uVar75);
    func_0x000107c61174(uVar76);
    pcStack_150 = pcVar34;
    func_0x000107c61174();
    pcVar49 = pcVar29;
    func_0x000107c61174(pcVar29);
    pcVar50 = pcVar34;
    func_0x0001018c7c8c(pcVar34,0,pcVar39,puVar46,pcVar29,puVar41,uVar7,lVar54,pcVar89,uVar8,
                        lStack_1d8,0,uVar93,uVar30,uVar55,uVar87,uVar91,uVar94 & 0xffffffffffffff00,
                        pcVar31,pcStack_d0,uVar80,pcVar40,0,0,0,0,uVar79,uVar10,pcVar44,0,uVar11,0,
                        uVar59,uVar12,uVar84,uVar13,uVar2,uVar3,uVar15,uVar4,uVar16,uVar5,uVar17,
                        uVar6,0,pcVar43,uVar51);
    FUN_1018c6374(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar42);
    func_0x000107c61174(pcVar49);
    func_0x0001018c51a4(pcVar77,pcVar50,uVar42,pcVar49);
    func_0x000107c61170(puVar53);
    func_0x000107c61170(puVar81);
    func_0x000107c615e8(auStack_80[0]);
    func_0x000107c61170(uVar57);
    func_0x000107c61170(uVar38);
    func_0x000107c61170(pcVar47);
    FUN_1018c746c();
    func_0x000107c610f8();
    pcVar43 = pcVar32;
    func_0x000107c61174(pcVar32);
    func_0x000107c61174(pcVar64);
    func_0x000107c61174();
    func_0x000107c61174(pcVar67);
    func_0x000107c61174(pcVar68);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar50 = pcVar77;
    func_0x0001018c65b0(pcVar77,pcVar21,puVar25,puVar26,pcVar32,puVar28,pcVar31,pcStack_d0,pcVar70,
                        pcVar29,pcVar48,pcVar39,pcVar33,pcVar34,pcVar40,lVar83,lVar82,uVar60);
    pcVar40 = pcVar63;
    pcVar39 = pcVar67;
    pcVar29 = pcVar58;
    pcVar34 = pcVar64;
    pcVar33 = pcVar47;
    pcStack_d0 = pcVar65;
    pcStack_90 = pcVar69;
  }
  else {
    puVar41 = &UNK_11040c2d0;
    func_0x000107c613fc(&UNK_11040c2d0,0x18,7);
    *(long *)(puVar41 + 0x10) = lStack_1d8;
    func_0x0001000285a8(0x112dcef88,&UNK_10d997110);
    func_0x000107c613fc();
    func_0x000107c615f0(lStack_1d8);
    func_0x000107c61174();
    pcVar49 = FUN_1018c4bf4;
    func_0x0001000bdd8c(FUN_1018c4bf4,puVar41);
    pcVar50 = pcVar49;
    func_0x0001000bf56c();
    func_0x000107c61574(pcVar49);
    func_0x000107c61174();
    uVar51 = uVar93;
    func_0x000107c5c734(uVar93);
    func_0x000107c61180();
    puVar41 = PTR_PTR_1126a7cd0;
    func_0x000107c610f8();
    func_0x000107c45dd0();
    func_0x000107c615e8(uVar51);
    func_0x000107c61170(pcVar50);
    func_0x0001000d224c(auStack_80);
    pcVar49 = pcVar39;
    func_0x000107c418b0(pcVar39);
    func_0x000107c61180();
    pcVar52 = pcVar39;
    func_0x000107c3df9c(pcVar39);
    func_0x000107c61180();
    puVar46 = PTR_PTR_1126a7cd8;
    func_0x000107c610f8();
    func_0x000107c46538();
    func_0x000107c61170(pcVar52);
    func_0x000107c615e8(pcVar49);
    puVar53 = PTR_PTR_1126a7780;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61174();
    pcVar49 = pcVar37;
    func_0x000107c61174();
    func_0x000107c61174();
    lVar54 = lVar82;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lStack_1d8 == 0) {
      lStack_238 = 0;
    }
    else {
      lStack_238 = lStack_1d8;
      func_0x000107c3de48();
      func_0x000107c61180();
    }
    uVar51 = uVar93;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar27 = uVar30;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar78 = *(undefined8 *)(lVar83 + _DAT_113010be0);
    uVar90 = *(undefined8 *)(lVar83 + _DAT_113010bf0);
    func_0x000107c61174();
    uVar38 = uVar90;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar92 = *(undefined8 *)(lVar83 + _DAT_113010c30);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(auStack_80[0]);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar79 = *(undefined8 *)(lVar83 + _DAT_113010c38);
    func_0x000107c61174();
    uVar80 = uVar84;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar81 = PTR_PTR_1126a7ce0;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c47a58();
    func_0x000107c615e8(uVar80);
    func_0x000107c61170(uVar79);
    func_0x000107c615e8(uVar92);
    func_0x000107c615e8(auStack_80[0]);
    func_0x000107c61170(puVar41);
    func_0x000107c61170(uVar91);
    func_0x000107c615e8(uVar38);
    func_0x000107c61170(uVar78);
    func_0x000107c615e8(uVar27);
    func_0x000107c615e8(uVar51);
    func_0x000107c615e8(lStack_238);
    func_0x000107c615e8(lVar54);
    func_0x000107c61170(puVar46);
    func_0x000107c61170(puVar53);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lStack_1d8 == 0) {
      lStack_158 = 0;
    }
    else {
      func_0x000107c3de48();
      func_0x000107c61180();
      lStack_158 = lStack_1d8;
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar85 = PTR_PTR_1126a7ce0;
    func_0x000107c610f8(PTR_PTR_1126a7ce0);
    func_0x000107c61174();
    func_0x000107c47a58(puVar85);
    func_0x000107c615e8(uVar84);
    func_0x000107c61170(uVar79);
    func_0x000107c61170(puVar41);
    func_0x000107c61170(uVar91);
    func_0x000107c615e8(uVar90);
    func_0x000107c61170(uVar78);
    func_0x000107c615e8(uVar30);
    func_0x000107c615e8(uVar93);
    func_0x000107c615e8(lStack_158);
    func_0x000107c615e8(lVar82);
    func_0x000107c61170(puVar46);
    func_0x000107c61170(puVar53);
    puVar86 = PTR_PTR_1126a7ce8;
    func_0x000107c610f8();
    func_0x000107c480d0();
    func_0x000107c61170(puVar85);
    func_0x000107c61170(puVar81);
    func_0x000107c61170(puVar53);
    func_0x000107c61170(puVar46);
    func_0x000107c615e8(auStack_80[0]);
    func_0x000107c61170(puVar41);
    func_0x000107c61170(pcVar50);
    func_0x000107c61170(pcVar44);
    pcVar50 = (code *)PTR_PTR_1126a7cf0;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(puVar26);
    func_0x000107c61174(pcVar32);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c4560c();
    func_0x000107c61170(pcStack_d0);
    func_0x000107c61170(pcVar31);
    func_0x000107c61170(pcVar31);
    func_0x000107c61170(puVar28);
    func_0x000107c61170(pcVar32);
    func_0x000107c61170(pcVar32);
    func_0x000107c61170(puVar26);
    func_0x000107c61170(puVar26);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(pcVar21);
    func_0x000107c61170(pcVar21);
    func_0x000107c61170(puVar86);
    func_0x000107c61170(pcVar44);
    func_0x000107c61170(pcVar89);
    func_0x000107c61170(pcVar43);
    pcVar68 = pcVar39;
    pcVar52 = pcVar34;
    pcVar43 = pcVar40;
    pcVar77 = pcVar33;
    pcStack_150 = pcVar29;
  }
  func_0x000107c61170(pcVar40);
  func_0x000107c61170(pcVar43);
  func_0x000107c61170(pcVar34);
  func_0x000107c61170(pcVar52);
  func_0x000107c61170(pcVar33);
  func_0x000107c61170(pcVar77);
  func_0x000107c61170(pcVar68);
  func_0x000107c61170(pcVar39);
  func_0x000107c61170(pcVar49);
  func_0x000107c61170(pcVar37);
  func_0x000107c61170(pcStack_150);
  func_0x000107c61170(pcVar29);
  func_0x000107c61170(pcStack_90);
  func_0x000107c61170(pcStack_d0);
  *param_1 = pcVar50;
  return;
}



/* Entry: 1018c46e0; end: 1018c4767;  */

undefined8 FUN_1018c46e0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return param_1;
}



/* Entry: 1018c4768; end: 1018c4a27;  */

/* WARNING: Possible PIC construction at 0x0001018c48a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c48a8) */

void FUN_1018c4768(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x140));
  return;
}



/* Entry: 1018c4a28; end: 1018c4a4b;  */

void FUN_1018c4a28(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010040cc40();
  *param_1 = param_2;
  return;
}



/* Entry: 1018c4a4c; end: 1018c4b33;  */

void FUN_1018c4a4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar1 = PTR_PTR_1126aeea8;
    func_0x000107c610f8(PTR_PTR_1126aeea8);
    func_0x000107c6157c(lVar6);
    func_0x000107c453e4(puVar1);
    puVar2 = puVar1;
    func_0x0001000bf56c();
    puVar5 = PTR_PTR_1126a7cf8;
    func_0x000107c610f8();
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar4);
    func_0x000107c45fc8(puVar5,param_3,uVar3,uVar4,puVar2,puVar1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(lVar6);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1018c4b34; end: 1018c4b37;  */

undefined1 FUN_1018c4b34(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_51;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c614f0(uStack_50);
  uStack_68 = uVar1;
  uStack_60 = uVar4;
  uStack_58 = uVar2;
  (**(code **)(lStack_48 + 8))
            (&uStack_51,&uStack_68,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar3,lStack_48);
  func_0x000107c615e8(uStack_50);
  return uStack_51;
}



/* Entry: 1018c4b38; end: 1018c4b63;  */

void FUN_1018c4b38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018c4b64; end: 1018c4bf3;  */

undefined1 FUN_1018c4b64(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_51;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c614f0(uStack_50);
  uStack_68 = uVar1;
  uStack_60 = uVar4;
  uStack_58 = uVar2;
  (**(code **)(lStack_48 + 8))
            (&uStack_51,&uStack_68,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar3,lStack_48);
  func_0x000107c615e8(uStack_50);
  return uStack_51;
}



/* Entry: 1018c4bf4; end: 1018c4c0f;  */

void FUN_1018c4bf4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1018c4c10; end: 1018c4c1f; -[AdTrackBindingsParserServices adTrackParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c4c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dcef98));
  return;
}



/* Entry: 1018c4c20; end: 1018c4ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1018c4c20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dcef90) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112dcef98) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1018c4ca4; end: 1018c4cd7;  */

void FUN_1018c4ca4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1018c4cd8; end: 1018c4d0f; -[AdTrackBindingsParserServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c4cd8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dcef90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dcef98));
  return;
}



/* Entry: 1018c4d10; end: 1018c4dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c4d10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dcefc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dcefd0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018c4dd8; end: 1018c4e4f; -[AdCircumstanceEngineAdapterImpl initWithCircumstanceEngine:commonMetricsManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c4dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dcefc8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112dcefd0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1018c4e50; end: 1018c4f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c4e50(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcefc8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112dcefd0) != 0) {
      func_0x000107c4ba48();
    }
    if (param_1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c4f68);
      (*pcVar1)();
    }
    (*param_1)(0,0);
  }
  else {
    puVar3 = &UNK_11040c488;
    func_0x000107c613fc(&UNK_11040c488,0x20,7);
    *(code **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcStack_50 = FUN_1018c4f68;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1013ef96c;
    puStack_58 = &UNK_11040c4a0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x0001018c4fb0(param_1,param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4010c(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1018c4f68; end: 1018c4f93;  */

void FUN_1018c4f68(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c4f94);
  (*pcVar1)();
}



/* Entry: 1018c4f94; end: 1018c4fbf;  */

void FUN_1018c4f94(long param_1,long param_2)

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



/* Entry: 1018c4fc0; end: 1018c504b; -[AdCircumstanceEngineAdapterImpl configsTokenWithCompletion:] */

void FUN_1018c4fc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_11040c4d8;
    func_0x000107c613fc(&UNK_11040c4d8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_1018c5104;
  }
  func_0x000107c61174(param_1);
  FUN_1018c4e50(pcVar2,puVar1);
  func_0x00010140d504(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c504c; end: 1018c50ab; -[AdCircumstanceEngineAdapterImpl init] */

void FUN_1018c504c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdDataServiceSwift.AdCircumstanceEngineAdapterImpl",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018c5078);
  (*pcVar1)();
}



/* Entry: 1018c50ac; end: 1018c50e3; -[AdCircumstanceEngineAdapterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c50ac(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dcefc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dcefd0));
  return;
}



/* Entry: 1018c50e4; end: 1018c5103;  */

void FUN_1018c50e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ea2b0);
  return;
}



/* Entry: 1018c5104; end: 1018c510b;  */

void FUN_1018c5104(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1018c510c; end: 1018c523b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c510c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dcf000) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf008) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf010) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112dcf018) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dcf020) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1018c523c; end: 1018c52f7; -[AdCompositeAdSource initWithPrimaryAdSource:shadowAdSource:configAdapter:shadowAdResponseDataStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c523c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112dcf000) = param_3;
  *(undefined8 *)(param_1 + _DAT_112dcf008) = param_4;
  *(undefined8 *)(param_1 + _DAT_112dcf010) = param_5;
  *(undefined1 *)(param_1 + _DAT_112dcf018) = 0;
  *(undefined8 *)(param_1 + _DAT_112dcf020) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 1018c52f8; end: 1018c543f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c52f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lVar4;
  
  ppuVar6 = &puStack_80;
  lVar3 = *(long *)(unaff_x20 + _DAT_112dcf010);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c4267c();
    uVar2 = (undefined1)lVar4;
    func_0x000107c615e8(lVar3);
  }
  lVar3 = _DAT_112dcf018;
  *(undefined1 *)(unaff_x20 + _DAT_112dcf018) = uVar2;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dcf000);
  if (param_2 == 0) {
    func_0x000107c615f0(uVar5);
    ppuVar6 = (undefined **)0x0;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1018c5440;
    puStack_68 = &UNK_11040c4f0;
    lStack_60 = param_2;
    uStack_58 = param_3;
    func_0x000107c60bc4(&puStack_80);
    uVar1 = uStack_58;
    func_0x000107c615f0(uVar5);
    func_0x000100cbdcd4(param_2,param_3);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c49690(uVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(uVar5);
  if (*(char *)(unaff_x20 + lVar3) == '\x01') {
    func_0x000107c49690(*(undefined8 *)(unaff_x20 + _DAT_112dcf008));
  }
  return;
}



/* Entry: 1018c5440; end: 1018c54ab;  */

void FUN_1018c5440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1018c54ac; end: 1018c54c7;  */

void FUN_1018c54ac(long param_1,long param_2)

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



/* Entry: 1018c54c8; end: 1018c5573; -[AdCompositeAdSource initializeWithMetadata:completion:] */

/* WARNING: Possible PIC construction at 0x0001018c5558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c555c) */

void FUN_1018c54c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_11040c730;
    func_0x000107c613fc(&UNK_11040c730,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x1018c63b4;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c52f8(param_3,uVar2,puVar1);
  func_0x000100cbdd5c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018c5574; end: 1018c5917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018c5574(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar5;
  byte bVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lVar4;
  
  lVar5 = _DAT_112dcf010;
  lVar3 = *(long *)(unaff_x20 + _DAT_112dcf010);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c4267c();
    uVar2 = (undefined1)lVar4;
    func_0x000107c615e8(lVar3);
  }
  lVar3 = _DAT_112dcf018;
  *(undefined1 *)(unaff_x20 + _DAT_112dcf018) = uVar2;
  lVar5 = *(long *)(unaff_x20 + lVar5);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x000107c42158();
    func_0x000107c615e8(lVar5);
    if ((int)lVar4 != 0) {
      bVar6 = *(byte *)(unaff_x20 + lVar3);
      goto LAB_1018c5628;
    }
  }
  bVar6 = 0;
LAB_1018c5628:
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dcf000);
  if (param_2 == 0) {
    func_0x000107c615f0(uVar7);
    ppuVar8 = (undefined **)0x0;
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1018c5918;
    puStack_78 = &UNK_11040c5b8;
    ppuVar8 = &puStack_90;
    lStack_70 = param_2;
    uStack_68 = param_3;
    func_0x000107c60bc4(ppuVar8);
    uVar1 = uStack_68;
    func_0x000107c615f0(uVar7);
    func_0x000100cbdcd4(param_2,param_3);
    func_0x000107c61574(uVar1);
  }
  if ((bVar6 & 1) == 0) {
    if (param_4 == 0) {
      ppuVar9 = (undefined **)0x0;
    }
    else {
      uStack_88 = 0x42000000;
      pcStack_80 = (code *)0x1018c5954;
      puStack_78 = &UNK_11040c590;
      ppuVar9 = &puStack_90;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_70 = param_4;
      uStack_68 = param_5;
      func_0x000107c60bc4(ppuVar9);
      uVar1 = uStack_68;
      func_0x000107c6157c(param_5);
      func_0x000107c61574(uVar1);
    }
    if (param_6 == 0) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      uStack_88 = 0x42000000;
      pcStack_80 = (code *)0x1018c63f4;
      puStack_78 = &UNK_11040c568;
      ppuVar10 = &puStack_90;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_70 = param_6;
      uStack_68 = param_7;
      func_0x000107c60bc4(ppuVar10);
      uVar1 = uStack_68;
      func_0x000107c6157c(param_7);
      func_0x000107c61574(uVar1);
    }
  }
  else {
    ppuVar10 = (undefined **)0x0;
    ppuVar9 = (undefined **)0x0;
  }
  func_0x000107c50304(uVar7);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(uVar7);
  if (*(char *)(unaff_x20 + lVar3) == '\x01') {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112dcf008);
    if (bVar6 == 0) {
      func_0x000107c615f0(uVar7);
      ppuVar9 = (undefined **)0x0;
      ppuVar8 = (undefined **)0x0;
    }
    else {
      if (param_4 == 0) {
        func_0x000107c615f0(uVar7);
        ppuVar8 = (undefined **)0x0;
      }
      else {
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = (code *)0x1018c5954;
        puStack_78 = &UNK_11040c540;
        ppuVar8 = &puStack_90;
        lStack_70 = param_4;
        uStack_68 = param_5;
        func_0x000107c60bc4(ppuVar8);
        uVar1 = uStack_68;
        func_0x000100cbdcd4(param_4,param_5);
        func_0x000107c615f0(uVar7);
        func_0x000107c61574(uVar1);
      }
      ppuVar9 = (undefined **)0x0;
      if (param_6 != 0) {
        uStack_88 = 0x42000000;
        pcStack_80 = (code *)0x1018c63f4;
        puStack_78 = &UNK_11040c518;
        ppuVar9 = &puStack_90;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        lStack_70 = param_6;
        uStack_68 = param_7;
        func_0x000107c60bc4(ppuVar9);
        uVar1 = uStack_68;
        func_0x000107c6157c(param_7);
        func_0x000107c61574(uVar1);
      }
    }
    func_0x000107c50304(uVar7);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 1018c5918; end: 1018c59b3;  */

void FUN_1018c5918(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1018c59b4; end: 1018c5b17; -[AdCompositeAdSource request:willMakeRequest:successBlock:failureBlock:] */

/* WARNING: Possible PIC construction at 0x0001018c5af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018c5af8) */

void FUN_1018c59b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar3 = &UNK_11040c708;
    func_0x000107c613fc(&UNK_11040c708,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar1 = 0x1018c63ac;
  }
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar5 = &UNK_11040c6e0;
    func_0x000107c613fc(&UNK_11040c6e0,0x18,7);
    *(long *)(puVar5 + 0x10) = param_5;
    uVar2 = 0x1018c63a4;
  }
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar6 = &UNK_11040c6b8;
    func_0x000107c613fc(&UNK_11040c6b8,0x18,7);
    *(long *)(puVar6 + 0x10) = param_6;
    uVar4 = 0x1018c639c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1018c5574(param_3,uVar1,puVar3,uVar2,puVar5,uVar4,puVar6);
  func_0x000100cbdd5c(uVar4,puVar6);
  func_0x000100cbdd5c(uVar2,puVar5);
  func_0x000100cbdd5c(uVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1018c5b18; end: 1018c5b9f;  */

void FUN_1018c5b18(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar4 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)(param_2,lVar4);
  func_0x0001000b44c0(param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}


