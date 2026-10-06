/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10388130c; end: 1038814b7;  */

/* WARNING: Possible PIC construction at 0x000103881498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010388149c) */

void FUN_10388130c(void)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  
  uVar8 = *unaff_x20;
  pcVar1 = FUN_1038814b8;
  func_0x00010487de38(FUN_1038814b8,0);
  puVar2 = &UNK_1106a0ce8;
  func_0x000107c613fc(&UNK_1106a0ce8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  pcVar3 = FUN_103881f7c;
  func_0x0001000bfde0(FUN_103881f7c,puVar2,&UNK_1106a0cc0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106a0d10;
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_1106a0d10,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar8 = 0x103881f84;
  puVar7 = puVar4;
  (**(code **)(*(long *)pcVar3 + 0x60))(0x103881f84);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  uVar5 = uVar8;
  func_0x000107c614f0(uVar8);
  (**(code **)(puVar7 + 0x10))(unaff_x20[5],uVar5,puVar7);
  func_0x000107c615e8(uVar8);
  func_0x0001038810c0();
  func_0x000107c613fc(&UNK_1106a0d10,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar6 = 0;
  FUN_103881fd0(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar5 = 0x103881f8c;
  func_0x000100775358(0x103881f8c,puVar2,uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61574(uVar5);
  func_0x000107c5528c(uVar8);
  func_0x000107c61574(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1038814b8; end: 1038816a3;  */

uint FUN_1038814b8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar1 = *param_1;
  lVar4 = *param_2;
  if (lVar1 == 0) {
    if (lVar4 != 0) {
      plVar3 = (long *)0x0;
      lVar6 = 0;
      plVar2 = param_2;
      goto LAB_103881514;
    }
LAB_10388157c:
    uVar5 = 1;
    goto LAB_1038815b0;
  }
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar6 = lVar1;
  func_0x000107c5faec();
  plVar2 = param_2;
  func_0x000107c61170(lVar1);
  plVar3 = param_2;
  if (lVar4 == 0) {
    if (param_2 == (long *)0x0) goto LAB_10388157c;
LAB_103881564:
    uVar5 = 0;
    plVar2 = plVar3;
  }
  else {
LAB_103881514:
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar1 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    if (plVar3 == (long *)0x0) {
      if (plVar2 == (long *)0x0) goto LAB_10388157c;
      uVar5 = 0;
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_103881564;
      if ((lVar6 == lVar1) && (plVar3 == plVar2)) {
        func_0x000107c6142c(plVar3);
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8(lVar6,plVar3,lVar1,plVar2,0);
        uVar5 = (uint)lVar6;
        func_0x000107c6142c(plVar3);
      }
    }
  }
  func_0x000107c6142c(plVar2);
LAB_1038815b0:
  return uVar5 & 1;
}



/* Entry: 1038816a4; end: 10388176b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038816a4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar3 = param_1[2];
  uVar5 = param_1[3];
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar6 = param_2;
    FUN_103881050();
    func_0x000107c61574(param_2);
    puVar1 = (undefined8 *)(lVar6 + _DAT_112fa4e80);
    uVar7 = puVar1[1];
    uVar8 = puVar1[3];
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar3;
    puVar1[3] = uVar5;
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(uVar8);
    FUN_103880910();
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10388176c; end: 10388181f;  */

undefined1 * FUN_10388176c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar2 = &puStack_50;
  puVar3 = (undefined1 *)*param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puStack_50 = puVar1;
    func_0x000100854cb0(&puStack_50);
    func_0x000107c61170(puVar1);
  }
  else {
    FUN_103881820(puVar3);
    func_0x000107c61574(param_2);
    ppuVar2 = (undefined **)puVar3;
  }
  return (undefined1 *)ppuVar2;
}



/* Entry: 103881820; end: 10388198f;  */

undefined ** FUN_103881820(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined *puStack_58;
  
  uVar4 = *unaff_x20;
  func_0x0001000d224c(&puStack_58);
  puVar2 = puStack_58;
  if (puStack_58 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_58);
    if (puStack_58 != (undefined *)0x0) {
      if (param_2 != 0) {
        puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c61174();
        func_0x000107c4c194(puVar1);
        func_0x000107c61180();
        func_0x000107c51820();
        func_0x000107c61170(puVar1);
        puVar1 = &UNK_1106a0d38;
        func_0x000107c613fc(&UNK_1106a0d38,0x38,7);
        *(undefined **)(puVar1 + 0x10) = puVar2;
        *(long *)(puVar1 + 0x18) = param_2;
        *(undefined8 *)(puVar1 + 0x20) = param_1;
        *(undefined **)(puVar1 + 0x28) = puStack_58;
        *(undefined8 *)(puVar1 + 0x30) = uVar4;
        func_0x0001000285a8(0x112e15780,&UNK_10dc18400);
        func_0x000107c613fc();
        ppuVar3 = (undefined **)0x103881f94;
        func_0x0001000b64ac(0x103881f94,puVar1);
        return ppuVar3;
      }
      func_0x000107c615e8(puVar2);
      puVar2 = puStack_58;
    }
    func_0x000107c615e8(puVar2);
  }
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuVar3 = &puStack_58;
  puStack_58 = puVar2;
  func_0x000100854cb0(ppuVar3);
  func_0x000107c61170(puVar2);
  return ppuVar3;
}



/* Entry: 103881990; end: 1038819a3;  */

/* WARNING: Possible PIC construction at 0x000103881498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010388149c) */

void FUN_103881990(void)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  
  FUN_1038819a4();
  uVar8 = *unaff_x20;
  pcVar1 = FUN_1038814b8;
  func_0x00010487de38(FUN_1038814b8,0);
  puVar2 = &UNK_1106a0ce8;
  func_0x000107c613fc(&UNK_1106a0ce8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  pcVar3 = FUN_103881f7c;
  func_0x0001000bfde0(FUN_103881f7c,puVar2,&UNK_1106a0cc0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106a0d10;
  puVar4 = puVar2;
  func_0x000107c613fc(&UNK_1106a0d10,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar8 = 0x103881f84;
  puVar7 = puVar4;
  (**(code **)(*(long *)pcVar3 + 0x60))(0x103881f84);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  uVar5 = uVar8;
  func_0x000107c614f0(uVar8);
  (**(code **)(puVar7 + 0x10))(unaff_x20[5],uVar5,puVar7);
  func_0x000107c615e8(uVar8);
  func_0x0001038810c0();
  func_0x000107c613fc(&UNK_1106a0d10,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar6 = 0;
  FUN_103881fd0(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar5 = 0x103881f8c;
  func_0x000100775358(0x103881f8c,puVar2,uVar6);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61574(uVar5);
  func_0x000107c5528c(uVar8);
  func_0x000107c61574(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1038819a4; end: 103881c63;  */

/* WARNING: Possible PIC construction at 0x0001038819dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038819f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103881a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103881adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103881b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103881b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103881bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103881bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103881bb4) */
/* WARNING: Removing unreachable block (ram,0x000103881b80) */
/* WARNING: Removing unreachable block (ram,0x000103881b3c) */
/* WARNING: Removing unreachable block (ram,0x000103881ae0) */
/* WARNING: Removing unreachable block (ram,0x000103881a8c) */
/* WARNING: Removing unreachable block (ram,0x0001038819fc) */
/* WARNING: Removing unreachable block (ram,0x0001038819e0) */
/* WARNING: Removing unreachable block (ram,0x000103881c00) */

void FUN_1038819a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103881050();
  func_0x000107c3d89c(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103881c64; end: 103881dbf;  */

undefined1  [16]
FUN_103881c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c4045c(param_4);
  func_0x000107c61180();
  func_0x000107c4b1c0(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  puVar1 = &UNK_1106a0d60;
  func_0x000107c613fc(&UNK_1106a0d60,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  uStack_60 = 0x103881fa4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10134a1dc;
  puStack_68 = &UNK_1106a0d78;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c49824(param_5);
  func_0x000107c61180();
  func_0x000107c5dc64(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000b6d30(0);
  uVar3 = 0;
  func_0x000104885df0(0,0);
  func_0x000107c61170(param_3);
  auVar4._8_8_ = &PTR_DAT_1107aaa40;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 103881dc0; end: 103881f0f;  */

void FUN_103881dc0(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if (param_2 == (undefined *)0x0) {
    puStack_50 = (undefined *)0x0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(uStack_48);
    puStack_50 = (undefined *)0xd00000000000001a;
    uStack_48 = 0x800000010f1706e0;
    uStack_58 = param_3;
    func_0x000107c614b0(param_3);
    uVar2 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(&uStack_58,uVar2);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uStack_48);
    param_2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puStack_50 = param_2;
    func_0x000100087f6c(&puStack_50);
  }
  else {
    func_0x000107c61174();
    puVar1 = param_2;
    func_0x000107c51850(0x4046000000000000,0x4046000000000000,param_1);
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    puStack_50 = puVar1;
    func_0x000100087f6c(&puStack_50);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103881f10; end: 103881f7b;  */

void FUN_103881f10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103881f7c; end: 103881fcf;  */

void FUN_103881f7c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 0;
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar2 = 0;
      lVar3 = 0;
      lVar5 = lVar1;
    }
    else {
      lVar2 = lVar3;
      func_0x000107c5faec();
      lVar5 = lVar1;
      func_0x000107c61170(lVar3);
      lVar3 = lVar1;
    }
    func_0x000107c3fea4();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar1 = lVar4;
      func_0x000107c3e3a0();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar1 != 0) {
        lVar4 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        goto LAB_103881688;
      }
    }
    lVar4 = 0;
    lVar5 = 0;
  }
LAB_103881688:
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_1[2] = lVar4;
  param_1[3] = lVar5;
  return;
}



/* Entry: 103881fd0; end: 10388200f;  */

void FUN_103881fd0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103882010; end: 10388213f;  */

long FUN_103882010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return unaff_x20;
}



/* Entry: 103882140; end: 10388217f;  */

void FUN_103882140(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_103882950();
  uVar2 = uVar1;
  func_0x000107c610f8();
  func_0x000107c453e4();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1106a0df0;
  *param_1 = uVar2;
  return;
}



/* Entry: 103882180; end: 103882197;  */

void FUN_103882180(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 uStack_59;
  long lStack_58;
  
  if ((*(byte *)(unaff_x20 + 0x30) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    puVar1 = &UNK_1106a0db0;
    func_0x000107c613fc(&UNK_1106a0db0,0x18,7);
    *(long *)(puVar1 + 0x10) = lStack_58;
    func_0x000107c615f0(lStack_58);
    puVar7 = PTR___sSbN_11034dd40;
    pcVar2 = FUN_1038824f8;
    func_0x0001000bfde0(FUN_1038824f8,puVar1,PTR___sSbN_11034dd40);
    func_0x000107c61574(puVar1);
    pcVar3 = pcVar2;
    func_0x0001006c733c(pcVar2);
    pcVar4 = FUN_1038823a0;
    func_0x0001000bfde0(FUN_1038823a0,0,puVar7);
    func_0x000107c61574(pcVar3);
    uStack_59 = 0;
    puVar5 = &uStack_59;
    func_0x0001006c71a4(puVar5);
    func_0x000107c61574(pcVar4);
    plVar6 = (long *)PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068();
    func_0x000107c61574(puVar5);
    puVar1 = &UNK_1106a0dd8;
    func_0x000107c613fc(&UNK_1106a0dd8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    pcVar4 = FUN_103882530;
    puVar7 = puVar1;
    (**(code **)(*plVar6 + 0x60))(FUN_103882530);
    func_0x000107c61574(puVar1);
    pcVar3 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x38),pcVar3,puVar7);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61574(pcVar2);
    func_0x000107c61574(plVar6);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 103882198; end: 103882327;  */

void FUN_103882198(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 uStack_59;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    puVar1 = &UNK_1106a0db0;
    func_0x000107c613fc(&UNK_1106a0db0,0x18,7);
    *(long *)(puVar1 + 0x10) = lStack_58;
    func_0x000107c615f0(lStack_58);
    puVar7 = PTR___sSbN_11034dd40;
    pcVar2 = FUN_1038824f8;
    func_0x0001000bfde0(FUN_1038824f8,puVar1,PTR___sSbN_11034dd40);
    func_0x000107c61574(puVar1);
    pcVar3 = pcVar2;
    func_0x0001006c733c(pcVar2);
    pcVar4 = FUN_1038823a0;
    func_0x0001000bfde0(FUN_1038823a0,0,puVar7);
    func_0x000107c61574(pcVar3);
    uStack_59 = 0;
    puVar5 = &uStack_59;
    func_0x0001006c71a4(puVar5);
    func_0x000107c61574(pcVar4);
    plVar6 = (long *)PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068();
    func_0x000107c61574(puVar5);
    puVar1 = &UNK_1106a0dd8;
    func_0x000107c613fc(&UNK_1106a0dd8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    pcVar4 = FUN_103882530;
    puVar7 = puVar1;
    (**(code **)(*plVar6 + 0x60))(FUN_103882530);
    func_0x000107c61574(puVar1);
    pcVar3 = pcVar4;
    func_0x000107c614f0(pcVar4);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x38),pcVar3,puVar7);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61574(pcVar2);
    func_0x000107c61574(plVar6);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 103882328; end: 10388239f;  */

void FUN_103882328(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x18))(param_1,param_2,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 1038823a0; end: 1038823b7;  */

void FUN_1038823a0(byte *param_1,byte *param_2)

{
  *param_1 = *param_2 & (param_2[1] ^ 0xff) & 1;
  return;
}



/* Entry: 1038823b8; end: 103882413;  */

void FUN_1038823b8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103882414(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103882414; end: 103882493;  */

void FUN_103882414(ulong param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    pcVar1 = *(code **)(lStack_38 + 0x10);
  }
  else {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    pcVar1 = *(code **)(lStack_38 + 8);
  }
  (*pcVar1)(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103882494; end: 1038824f7;  */

void FUN_103882494(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038824f8; end: 10388252f;  */

void FUN_1038824f8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  long unaff_x20;
  
  if (*param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (undefined1)*(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c49bac();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103882530; end: 103882537;  */

void FUN_103882530(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_103882414(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 103882538; end: 1038825b3; -[_TtC21ARBarFeatureLEBrowser23ARBarLoadingOveralyView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103882538(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112fa5048) = 0;
  *(undefined8 *)(param_1 + _DAT_112fa5050) = 0;
  *(undefined8 *)(param_1 + _DAT_112fa5058) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "ARBarFeatureLEBrowser/ARBarLoadingOveralyView.swift",0x33,2,0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038825b4);
  (*pcVar1)();
}



/* Entry: 1038825b4; end: 103882793;  */

/* WARNING: Possible PIC construction at 0x00010388260c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103882628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038826dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103882730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038826e0) */
/* WARNING: Removing unreachable block (ram,0x00010388262c) */
/* WARNING: Removing unreachable block (ram,0x000103882610) */
/* WARNING: Removing unreachable block (ram,0x000103882734) */

void FUN_1038825b4(void)

{
  undefined *puVar1;
  
  func_0x000107c5a050();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103882794; end: 10388281f; -[_TtC21ARBarFeatureLEBrowser23ARBarLoadingOveralyView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103882794(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  plVar2 = &lStack_30;
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa5048) = 0;
  *(undefined8 *)(param_1 + _DAT_112fa5050) = 0;
  *(undefined8 *)(param_1 + _DAT_112fa5058) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(0,0,0,0,&lStack_30,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1038825b4();
  func_0x000107c61170(plVar2);
  return (undefined1 *)plVar2;
}



/* Entry: 103882820; end: 1038828a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103882820(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa5058;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112fa5058);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeff0;
    func_0x000107c610f8();
    func_0x000107c45eac();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1038828a8; end: 103882907; -[_TtC21ARBarFeatureLEBrowser23ARBarLoadingOveralyView initWithFrame:] */

void FUN_1038828a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarLoadingOveralyView",0x2d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038828d4);
  (*pcVar1)();
}



/* Entry: 103882908; end: 10388294f; -[_TtC21ARBarFeatureLEBrowser23ARBarLoadingOveralyView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103882924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103882928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103882908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa5048));
  return;
}



/* Entry: 103882950; end: 10388296f;  */

void FUN_103882950(void)

{
  func_0x000107c61168(&PTR_PTR_1128f6630);
  return;
}



/* Entry: 103882970; end: 103882c1b;  */

/* WARNING: Possible PIC construction at 0x0001038829e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103882a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103882ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103882b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103882b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103882bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103882b90) */
/* WARNING: Removing unreachable block (ram,0x000103882b3c) */
/* WARNING: Removing unreachable block (ram,0x000103882ae8) */
/* WARNING: Removing unreachable block (ram,0x000103882a94) */
/* WARNING: Removing unreachable block (ram,0x0001038829e8) */
/* WARNING: Removing unreachable block (ram,0x000103882bd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103882970(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa5048);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112fa5050);
    if (lVar2 != 0) {
      func_0x000107c61174();
      func_0x000107c61174(lVar2);
      func_0x000107c3d89c(lVar1);
      FUN_103882820();
      func_0x000107c5ba54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103882c1c; end: 103882c6f;  */

void FUN_103882c1c(void)

{
  FUN_103882970();
  return;
}



/* Entry: 103882c70; end: 103882cd3;  */

/* WARNING: Possible PIC construction at 0x000103882cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103882cb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103882c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar2 + _DAT_112fa5048);
  *(undefined8 *)(lVar2 + _DAT_112fa5048) = param_1;
  func_0x000107c61170(uVar1);
  *(undefined8 *)(lVar2 + _DAT_112fa5050) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 103882cd4; end: 103882d1b;  */

void FUN_103882cd4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112fa5090;
  plVar5 = (long *)&UNK_10dc184d8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103882df0(0,0x112fa4548,&PTR_PTR_1126ad7d8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103882d1c; end: 103882d93;  */

void FUN_103882d1c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103882df0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103882d94; end: 103882def;  */

void FUN_103882d94(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001038882d0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112fa5098;
  plVar5 = (long *)&UNK_10dc184e0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103882df0; end: 103882e2f;  */

void FUN_103882df0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103882e30; end: 103882f53;  */

void FUN_103882e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103882f54; end: 103882f67;  */

bool FUN_103882f54(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103882f68; end: 103883013;  */

void FUN_103882f68(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103883014; end: 103883017;  */

void FUN_103883014(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa50a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc18610;
  func_0x000107c61520(&UNK_10dc18610,&UNK_1106a0f28);
  puRam0000000112fa50a0 = puVar1;
  return;
}



/* Entry: 103883018; end: 103883057;  */

void FUN_103883018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa50a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc18610;
  func_0x000107c61520(&UNK_10dc18610,&UNK_1106a0f28);
  puRam0000000112fa50a0 = puVar1;
  return;
}



/* Entry: 103883058; end: 1038831bb;  */

int FUN_103883058(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038830d4;
        goto LAB_1038830b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038830b8:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1038830d4:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038831bc; end: 1038831fb;  */

void FUN_1038831bc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1038831fc(param_1,param_2);
  return;
}



/* Entry: 1038831fc; end: 103883367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038831fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_a0;
  func_0x000107c614f0();
  lVar2 = _DAT_112fa50a8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112fa50b0) = 0;
  uVar3 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa50b8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  func_0x000100bcb1dc(&uStack_50);
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  func_0x000100bcb1dc(&uStack_60);
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  puVar5 = &UNK_1106a0f80;
  func_0x000107c613fc(&UNK_1106a0f80,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar4);
  pcStack_80 = FUN_1038833f0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100b5ebe4;
  puStack_88 = &UNK_1106a0f98;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c61174(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c5dc64(param_2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  return puVar4;
}



/* Entry: 103883368; end: 1038833ef;  */

void FUN_103883368(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        FUN_1038833f8();
        func_0x000107c61170(param_3);
        func_0x000107c615e8(param_1);
        return;
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1038833f0; end: 1038833f7;  */

void FUN_1038833f0(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        FUN_1038833f8();
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(param_1);
        return;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1038833f8; end: 103883543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038833f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  func_0x0001000285a8(0x112dc1178,&UNK_10d97deb0);
  func_0x000107c4ae74(param_1);
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112dc1180;
  func_0x0001000285a8(0x112dc1180,&UNK_10d97deb8);
  pcVar3 = FUN_103883560;
  func_0x0001000d5158(FUN_103883560,0,uVar2);
  func_0x000107c61574(uVar1);
  pcVar4 = FUN_103883690;
  func_0x0001000bfde0(FUN_103883690,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(pcVar3);
  puVar5 = &UNK_1106a0f80;
  func_0x000107c613fc(&UNK_1106a0f80,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcVar3 = FUN_103883940;
  puVar6 = puVar5;
  (**(code **)(*(long *)pcVar4 + 0x60))(FUN_103883940);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112fa50a8),pcVar4,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 103883544; end: 10388355f;  */

void FUN_103883544(long param_1,long param_2)

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



/* Entry: 103883560; end: 10388368f;  */

void FUN_103883560(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_1106a0fd0;
  func_0x000107c613fc(&UNK_1106a0fd0,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_1106a0ff8;
  func_0x000107c613fc(&UNK_1106a0ff8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103883948;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_50 = 0x103883974;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1016c919c;
  puStack_58 = &UNK_1106a1010;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7d0(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6d,0x25,100,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103883690);
  (*pcVar2)();
}



/* Entry: 103883690; end: 10388378b;  */

void FUN_103883690(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_2;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103883754);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar8;
        func_0x0001016d284c(uVar8,uVar6);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103883750);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c519ec();
      if (uVar4 == 0) {
        uVar6 = uVar3;
        func_0x000107c3f6ac();
        func_0x000107c61170(uVar3);
        bVar5 = (long)uVar6 < 4;
        goto LAB_103883770;
      }
      func_0x000107c61170(uVar3);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
  bVar5 = false;
LAB_103883770:
  *(bool *)param_1 = bVar5;
  return;
}



/* Entry: 10388378c; end: 1038837e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388378c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112fa50b0) = uVar1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1038837e4; end: 103883883; -[_TtC21ARBarFeatureLEBrowser29ARBarItemScrollPolicyProvider shouldSuppressPreselectedItemScrollForCategoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038837e4(long param_1,ulong param_2,ulong param_3)

{
  undefined1 uVar1;
  
  func_0x000107c5faec();
  if (param_3 == *(ulong *)(param_1 + _DAT_112fa50b8) &&
      param_2 == ((ulong *)(param_1 + _DAT_112fa50b8))[1]) {
    func_0x000107c61174(param_1);
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c61174(param_1);
    func_0x000107c6142c(param_2);
    uVar1 = 0;
    if ((param_3 & 1) == 0) goto LAB_103883868;
  }
  uVar1 = *(undefined1 *)(param_1 + _DAT_112fa50b0);
LAB_103883868:
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103883884; end: 1038838e3; -[_TtC21ARBarFeatureLEBrowser29ARBarItemScrollPolicyProvider init] */

void FUN_103883884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarFeatureLEBrowser.ARBarItemScrollPolicyProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038838b0);
  (*pcVar1)();
}



/* Entry: 1038838e4; end: 10388391f; -[_TtC21ARBarFeatureLEBrowser29ARBarItemScrollPolicyProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038838e4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fa50b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa50a8));
  return;
}



/* Entry: 103883920; end: 10388393f;  */

void FUN_103883920(void)

{
  func_0x000107c61168(&PTR_PTR_1128f66f8);
  return;
}



/* Entry: 103883940; end: 103883947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103883940(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112fa50b0) = uVar1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103883948; end: 103883993;  */

void FUN_103883948(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103883994; end: 10388399b;  */

void FUN_103883994(long param_1,long param_2)

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



/* Entry: 10388399c; end: 1038839a3; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton arBarFeatureType] */

undefined8 FUN_10388399c(void)

{
  return 0;
}



/* Entry: 1038839a4; end: 1038839fb; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton currentPresentationType] */

void FUN_1038839a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar2 = 1;
  func_0x000107c5fe40(1);
  func_0x000107c4a8a4(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1038839fc; end: 103883a03; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton activationBehavior] */

undefined8 FUN_1038839fc(void)

{
  return 3;
}



/* Entry: 103883a04; end: 103883a47; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103883a04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa50e8;
  func_0x000107c61428(param_1 + _DAT_112fa50e8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103883a48; end: 103883a97; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton setIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103883a48(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa50e8;
  func_0x000107c61428(param_1 + _DAT_112fa50e8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103883a98; end: 103883acb; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton arBarItem] */

void FUN_103883a98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103883acc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103883acc; end: 103883c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103883acc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c4509c(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61428(unaff_x20 + _DAT_112fa50e8,auStack_58,0,0);
  puVar1 = PTR_PTR_1126c8d10;
  func_0x000107c610f8(PTR_PTR_1126c8d10);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0f29c0);
  func_0x000107c478d4(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 103883c4c; end: 103883cff; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton activateFromARBar:activationType:completion:] */

uint FUN_103883c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1106a1048;
    func_0x000107c613fc(&UNK_1106a1048,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    pcVar3 = FUN_103883e70;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103883dc0(param_3,pcVar3,puVar2);
  func_0x00010058d43c(pcVar3,puVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103883d00; end: 103883d3f; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton deactivateFromARBar:deactivationType:completion:] */

void FUN_103883d00(void)

{
  long in_x4;
  
  func_0x000107c60bc4();
  if (in_x4 != 0) {
    (**(code **)(in_x4 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x4);
    return;
  }
  return;
}



/* Entry: 103883d40; end: 103883d8b; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureCloseButton init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103883d40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112fa50e8) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103883d8c; end: 103883dbf;  */

void FUN_103883d8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103883dc0; end: 103883e4f;  */

undefined8 FUN_103883dc0(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c3d118();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c3e08c();
    if (lVar2 == 3) {
      func_0x000107c3d04c(param_1);
      func_0x000107c615e8(lVar1);
      goto joined_r0x000103883e34;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c3d068(param_1);
joined_r0x000103883e34:
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return 1;
}



/* Entry: 103883e50; end: 103883e6f;  */

void FUN_103883e50(void)

{
  func_0x000107c61168(&PTR_PTR_1128f67c8);
  return;
}



/* Entry: 103883e70; end: 103883e77;  */

void FUN_103883e70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103883e78; end: 103883e7f; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray arBarFeatureType] */

undefined8 FUN_103883e78(void)

{
  return 1;
}



/* Entry: 103883e80; end: 103883ed7; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray currentPresentationType] */

void FUN_103883e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar2 = 1;
  func_0x000107c5fe40(1);
  func_0x000107c4a8a4(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103883ed8; end: 103883edf; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray activationBehavior] */

undefined8 FUN_103883ed8(void)

{
  return 3;
}



/* Entry: 103883ee0; end: 103883f23; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103883ee0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa5118;
  func_0x000107c61428(param_1 + _DAT_112fa5118,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103883f24; end: 103883f73; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray setIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103883f24(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa5118;
  func_0x000107c61428(param_1 + _DAT_112fa5118,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103883f74; end: 103883fbf; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103883f74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112fa5118) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103883fc0; end: 103883ff3; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray arBarItem] */

void FUN_103883fc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103883ff4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103883ff4; end: 103884153;  */

/* WARNING: Removing unreachable block (ram,0x00010388414c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103883ff4(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5afb4(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010921dcd0();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103884154);
      (*pcVar2)();
    }
  }
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c61174(puVar3);
  func_0x000107c4a8a4(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  lVar1 = _DAT_112fa5118;
  ppuVar6 = &PTR____CFConstantStringClassReference_110e82b78;
  func_0x000107c61174();
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,0,0);
  puVar4 = PTR_PTR_1126c8d10;
  func_0x000107c610f8(PTR_PTR_1126c8d10);
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c478d4(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(ppuVar6);
  return puVar4;
}



/* Entry: 103884154; end: 103884173; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray activateFromARBar:activationType:completion:] */

undefined8 FUN_103884154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c3d04c(param_3,param_2,8);
  return 1;
}



/* Entry: 103884174; end: 103884177; -[_TtC21ARBarFeatureLEBrowser22ARBarFeatureExpandTray deactivateFromARBar:deactivationType:completion:] */

void FUN_103884174(void)

{
  return;
}



/* Entry: 103884178; end: 1038841cb;  */

void FUN_103884178(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038841cc; end: 1038841d3; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser arBarFeatureType] */

undefined8 FUN_1038841cc(void)

{
  return 4;
}



/* Entry: 1038841d4; end: 10388422b; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser currentPresentationType] */

void FUN_1038841d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar2 = 1;
  func_0x000107c5fe40(1);
  func_0x000107c4a8a4(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10388422c; end: 103884233; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser activationBehavior] */

undefined8 FUN_10388422c(void)

{
  return 3;
}



/* Entry: 103884234; end: 103884277; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103884234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa5148;
  func_0x000107c61428(param_1 + _DAT_112fa5148,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103884278; end: 1038842c7; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser setIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103884278(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa5148;
  func_0x000107c61428(param_1 + _DAT_112fa5148,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1038842c8; end: 1038842fb; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser arBarItem] */

void FUN_1038842c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038842fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038842fc; end: 10388446b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038842fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61428(unaff_x20 + _DAT_112fa5148,auStack_58,0,0);
  puVar1 = PTR_PTR_1126c8d10;
  func_0x000107c610f8(PTR_PTR_1126c8d10);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f1707b0);
  func_0x000107c478d4(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 10388446c; end: 10388448b; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser activateFromARBar:activationType:completion:] */

undefined8 FUN_10388446c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c3d04c(param_3,param_2,4);
  return 1;
}



/* Entry: 10388448c; end: 10388448f; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser deactivateFromARBar:deactivationType:completion:] */

void FUN_10388448c(void)

{
  return;
}



/* Entry: 103884490; end: 1038844db; -[_TtC21ARBarFeatureLEBrowser23ARBarFeatureHideBrowser init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103884490(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112fa5148) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038844dc; end: 10388452f;  */

void FUN_1038844dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103884530; end: 103884537; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch arBarFeatureType] */

undefined8 FUN_103884530(void)

{
  return 5;
}



/* Entry: 103884538; end: 10388458f; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch currentPresentationType] */

void FUN_103884538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar2 = 3;
  func_0x000107c5fe40(3);
  func_0x000107c4a8a4(puVar1,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103884590; end: 103884597; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch activationBehavior] */

undefined8 FUN_103884590(void)

{
  return 3;
}



/* Entry: 103884598; end: 1038845db; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103884598(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa5178;
  func_0x000107c61428(param_1 + _DAT_112fa5178,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1038845dc; end: 10388462b; -[_TtC21ARBarFeatureLEBrowser18ARBarFeatureSearch setIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038845dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa5178;
  func_0x000107c61428(param_1 + _DAT_112fa5178,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}


