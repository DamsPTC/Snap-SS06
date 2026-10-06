/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10389adc0; end: 10389ae13;  */

void FUN_10389adc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10389ae14; end: 10389b163;  */

undefined1  [16] FUN_10389ae14(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  uVar1 = param_1;
  func_0x000107c3dc4c();
  func_0x000107c61180();
  if (uVar1 == 0) {
LAB_10389ae58:
    uVar2 = param_1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
  }
  else {
    uVar2 = uVar1;
    func_0x000107c4a950();
    func_0x000107c61180();
    if (uVar2 == 0) goto LAB_10389ae58;
  }
  uVar7 = uVar2;
  func_0x000107c5faec();
  uVar6 = param_2;
  func_0x000107c61170(uVar2);
  uVar2 = uVar7 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(param_2);
    dVar8 = 0.0;
    if (uVar1 == 0) goto LAB_10389b018;
LAB_10389af24:
    uVar2 = uVar1;
    func_0x000107c3f53c();
    func_0x000107c61180();
    dVar10 = 0.0;
    uVar7 = uVar6;
    if (uVar2 != 0) {
      uVar5 = uVar2;
      func_0x000107c5faec();
      uVar7 = uVar6;
      func_0x000107c61170(uVar2);
      if (uVar6 != 0) {
        uVar2 = uVar5 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar2 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          func_0x000107c6142c(uVar6);
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x000107c61434(uVar6);
          func_0x000107c5fadc(uVar5,uVar6);
          func_0x000107c48af4(puVar3);
          func_0x000107c61170(uVar5);
          dVar10 = 8.0;
          puVar4 = puVar3;
          func_0x000107c5af84(puVar3);
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          func_0x000107c5b078(puVar4);
          uVar7 = 2;
          func_0x000107c61430(uVar6);
          func_0x000107c61170(puVar4);
        }
      }
    }
    if (dVar10 < dVar8) {
      dVar10 = dVar8;
    }
    uVar2 = uVar1;
    func_0x000107c5af28();
    if ((uVar2 & 1) != 0) {
      dVar8 = 36.0;
      goto LAB_10389b0b0;
    }
    uVar2 = uVar1;
    func_0x000107c3f53c();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar6 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar7);
      uVar2 = uVar6 & 0xffffffffffff;
      if ((uVar7 & 0x2000000000000000) != 0) {
        uVar2 = uVar7 >> 0x38 & 0xf;
      }
      dVar8 = 24.0;
      if (uVar2 != 0) {
        dVar8 = 36.0;
      }
      goto LAB_10389b0b0;
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = param_2;
    func_0x000107c5fadc(uVar7);
    func_0x000107c48af4(puVar3);
    func_0x000107c61170(uVar7);
    dVar8 = 0.0;
    puVar4 = puVar3;
    func_0x000107c5af84(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5b078(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(param_2);
    if (uVar1 != 0) goto LAB_10389af24;
LAB_10389b018:
    dVar10 = 0.0;
    if (0.0 < dVar8) {
      dVar10 = dVar8;
    }
  }
  dVar8 = 24.0;
LAB_10389b0b0:
  dVar10 = dVar8 + dVar10;
  uVar2 = param_1;
  func_0x000107c5c8bc();
  func_0x000107c61180();
  if (uVar2 != 0) {
    func_0x000107c61170();
    dVar8 = 24.0;
    dVar10 = dVar10 + 24.0;
  }
  uVar2 = param_1;
  func_0x000107c40ee0();
  func_0x000107c3e620();
  func_0x000107c61180();
  if ((param_1 == 0) || (func_0x000107c61170(), (long)uVar2 < 1)) {
    func_0x000107c61170(uVar1);
  }
  else {
    FUN_103895b88(uVar2);
    func_0x000107c61170(uVar1);
    dVar10 = dVar10 + dVar8 + 4.0;
  }
  uVar9 = 0x4048000000000000;
  dVar8 = 48.0;
  if (48.0 < dVar10) {
    dVar8 = dVar10;
  }
  (**(code **)(unaff_x20 + 0xc0))();
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = dVar8;
  return auVar11;
}



/* Entry: 10389b164; end: 10389b4ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389b164(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x000107c3cf00();
    func_0x000107c61180();
    if (lVar7 == 0) {
      func_0x000107c5faec();
      uVar2 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      param_2 = uVar2;
    }
  }
  func_0x000107c520f4();
  func_0x000107c61170(lVar7);
  lVar7 = param_1;
  func_0x000107c3dc4c();
  func_0x000107c61180();
  lVar8 = lVar7;
  FUN_10389b560();
  uVar2 = *(undefined8 *)(lVar8 + _DAT_112fa5f80);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar8);
  if (lVar7 == 0) {
LAB_10389b230:
    if (param_1 != 0) {
      lVar8 = param_1;
      func_0x000107c4d3e4(param_1);
      func_0x000107c61180();
      goto LAB_10389b244;
    }
    lVar6 = 0;
  }
  else {
    lVar8 = lVar7;
    func_0x000107c4a950();
    func_0x000107c61180();
    if (lVar8 == 0) goto LAB_10389b230;
LAB_10389b244:
    lVar6 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
    uVar5 = param_2;
    func_0x000107c5fadc(lVar6,param_2);
    func_0x000107c6142c(param_2);
    param_2 = uVar5;
  }
  func_0x000107c59c6c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar6);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa6060);
  func_0x000107c61174(uVar2);
  if (lVar7 == 0) {
    lVar6 = 0;
    lVar8 = 0;
    param_2 = 0;
  }
  else {
    lVar6 = lVar7;
    func_0x000107c3f53c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      lVar8 = 0;
      param_2 = 0;
    }
    else {
      lVar8 = lVar6;
      func_0x000107c5faec();
      func_0x000107c61170(lVar6);
    }
    lVar6 = lVar7;
    func_0x000107c5af28(lVar7);
  }
  FUN_103898fb0(lVar8,param_2,lVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    lVar8 = param_1;
    func_0x000107c4a4c4();
    uVar1 = (uint)lVar8;
    lVar8 = param_1;
    func_0x000107c5c8bc();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa6090);
      *(long *)(unaff_x20 + _DAT_112fa6090) = lVar8;
      func_0x000107c61174();
      func_0x000107c61170(uVar2);
      lVar6 = param_1;
      func_0x000107c44f7c();
      func_0x000107c61180();
      uStack_60 = 0x10389bef4;
      uStack_58 = 0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_102146f74;
      puStack_68 = &UNK_1106a1f18;
      func_0x000107c60bc4(&puStack_80);
      lVar4 = lVar6;
      func_0x000107c4c280();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(lVar6);
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa6098);
      *(long *)(unaff_x20 + _DAT_112fa6098) = lVar4;
      goto LAB_10389b428;
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa6090);
  *(undefined8 *)(unaff_x20 + _DAT_112fa6090) = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa6098);
  *(undefined8 *)(unaff_x20 + _DAT_112fa6098) = 0;
LAB_10389b428:
  func_0x000107c61170(uVar2);
  if (uVar1 != *(byte *)(unaff_x20 + _DAT_112fa6078)) {
    *(char *)(unaff_x20 + _DAT_112fa6078) = (char)uVar1;
    FUN_10389bb1c();
  }
  if (param_1 != 0) {
    lVar8 = param_1;
    func_0x000107c3e620();
    func_0x000107c61180();
    if (lVar8 != 0) {
      lVar6 = lVar8;
      func_0x00010389b5d8();
      uVar2 = *(undefined8 *)(lVar6 + _DAT_112fa5ea0);
      *(long *)(lVar6 + _DAT_112fa5ea0) = lVar8;
      func_0x000107c61174(lVar8);
      func_0x000107c61174();
      FUN_103894e30(uVar2);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar2);
      FUN_10389b650(param_1);
      func_0x000107c61170(lVar8);
    }
  }
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 10389b4f0; end: 10389b54f;  */

/* WARNING: Possible PIC construction at 0x00010389b51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389b53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389bc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389bc14) */
/* WARNING: Removing unreachable block (ram,0x00010389b540) */
/* WARNING: Removing unreachable block (ram,0x00010389bb1c) */
/* WARNING: Removing unreachable block (ram,0x00010389bb50) */
/* WARNING: Removing unreachable block (ram,0x00010389bb48) */
/* WARNING: Removing unreachable block (ram,0x00010389bb58) */
/* WARNING: Removing unreachable block (ram,0x00010389bb88) */
/* WARNING: Removing unreachable block (ram,0x00010389bba0) */
/* WARNING: Removing unreachable block (ram,0x00010389bb98) */
/* WARNING: Removing unreachable block (ram,0x00010389bbc0) */
/* WARNING: Removing unreachable block (ram,0x00010389b520) */
/* WARNING: Removing unreachable block (ram,0x00010389bc24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389b4f0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fa6080);
  *(undefined8 *)(unaff_x20 + _DAT_112fa6080) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10389b550; end: 10389b55f;  */

/* WARNING: Possible PIC construction at 0x00010389bc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389bc14) */
/* WARNING: Removing unreachable block (ram,0x00010389bc24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389b550(undefined8 param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  *(char *)(unaff_x20 + _DAT_112fa60a0) = (char)param_1;
  lVar3 = _DAT_112fa6090;
  if (*(long *)(unaff_x20 + _DAT_112fa6090) == 0) {
    uVar5 = *(undefined1 *)(unaff_x20 + _DAT_112fa6078);
  }
  else {
    uVar5 = 2;
  }
  FUN_10389b560();
  uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112fa60a0);
  plVar1 = (long *)&DAT_112fa6088;
  if (*(char *)(unaff_x20 + _DAT_112fa6078) == '\0') {
    plVar1 = (long *)&DAT_112fa6080;
  }
  puVar7 = *(undefined **)(unaff_x20 + *plVar1);
  puVar4 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa6098);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(uVar8);
  FUN_1038984cc(uVar5,uVar2,puVar4,uVar8,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10389b560; end: 10389b64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10389b560(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa6060;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6060);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_10389938c();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10389b650; end: 10389b7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389b650(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1;
    func_0x000107c3e620();
    func_0x000107c61180();
    if (plVar1 != (long *)0x0) {
      uVar2 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fa6070);
      *(undefined8 *)(unaff_x20 + _DAT_112fa6070) = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar8);
      func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
      plVar3 = plVar1;
      func_0x0001000b637c();
      plVar4 = plVar3;
      func_0x00010109e534();
      func_0x000104884898();
      func_0x000107c61574(plVar3);
      puVar5 = &UNK_1106a1ed8;
      func_0x000107c613fc(&UNK_1106a1ed8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1106a1f00;
      func_0x000107c613fc(&UNK_1106a1f00,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long **)(puVar6 + 0x18) = param_1;
      pcVar9 = *(code **)(*plVar4 + 0x60);
      func_0x000107c61174(param_1);
      pcVar7 = FUN_10389c284;
      puVar5 = puVar6;
      (*pcVar9)(FUN_10389c284);
      func_0x000107c61574(plVar4);
      func_0x000107c61574(puVar6);
      pcVar9 = pcVar7;
      func_0x000107c614f0(pcVar7);
      (**(code **)(puVar5 + 0x10))(uVar2,pcVar9,puVar5);
      func_0x000107c61170(plVar1);
      func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar7);
      return;
    }
  }
  return;
}



/* Entry: 10389b7d8; end: 10389bb1b;  */

/* WARNING: Possible PIC construction at 0x00010389b830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389b8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389b8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389b930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389b950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389b998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389b9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389ba14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389ba60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389ba70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389bab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389baf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389bae4) */
/* WARNING: Removing unreachable block (ram,0x00010389bab8) */
/* WARNING: Removing unreachable block (ram,0x00010389ba64) */
/* WARNING: Removing unreachable block (ram,0x00010389ba18) */
/* WARNING: Removing unreachable block (ram,0x00010389ba74) */
/* WARNING: Removing unreachable block (ram,0x00010389ba9c) */
/* WARNING: Removing unreachable block (ram,0x00010389bab4) */
/* WARNING: Removing unreachable block (ram,0x00010389ba44) */
/* WARNING: Removing unreachable block (ram,0x00010389b9d4) */
/* WARNING: Removing unreachable block (ram,0x00010389b99c) */
/* WARNING: Removing unreachable block (ram,0x00010389b954) */
/* WARNING: Removing unreachable block (ram,0x00010389b934) */
/* WARNING: Removing unreachable block (ram,0x00010389b8e8) */
/* WARNING: Removing unreachable block (ram,0x00010389b8c8) */
/* WARNING: Removing unreachable block (ram,0x00010389b834) */
/* WARNING: Removing unreachable block (ram,0x00010389baf4) */

void FUN_10389b7d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c40510();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  FUN_10389b560();
  func_0x000107c3d89c(unaff_x20,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 10389bb1c; end: 10389bc3f;  */

/* WARNING: Possible PIC construction at 0x00010389bc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389bc14) */
/* WARNING: Removing unreachable block (ram,0x00010389bc24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389bb1c(undefined8 param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar3 = _DAT_112fa6090;
  if (*(long *)(unaff_x20 + _DAT_112fa6090) == 0) {
    uVar5 = *(undefined1 *)(unaff_x20 + _DAT_112fa6078);
  }
  else {
    uVar5 = 2;
  }
  FUN_10389b560();
  uVar2 = *(undefined1 *)(unaff_x20 + _DAT_112fa60a0);
  plVar1 = (long *)&DAT_112fa6088;
  if (*(char *)(unaff_x20 + _DAT_112fa6078) == '\0') {
    plVar1 = (long *)&DAT_112fa6080;
  }
  puVar7 = *(undefined **)(unaff_x20 + *plVar1);
  puVar4 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa6098);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(uVar8);
  FUN_1038984cc(uVar5,uVar2,puVar4,uVar8,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10389bc40; end: 10389bc4b;  */

undefined8 FUN_10389bc40(void)

{
  return 0x4042000000000000;
}



/* Entry: 10389bc4c; end: 10389bc7f; -[_TtC11SCARBarImpl19ARBarPickerTextCell initWithCoder:] */

undefined8 FUN_10389bc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010389c1c0();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10389bc80; end: 10389bd6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10389bc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffb0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6060) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6068) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6070) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa6078) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6080) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6088) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6090) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6098) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa60a0) = 0;
  FUN_10389c1a0();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_10389b7d8();
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 10389bd70; end: 10389bd8f; -[_TtC11SCARBarImpl19ARBarPickerTextCell initWithFrame:] */

void FUN_10389bd70(void)

{
  FUN_10389bc80();
  return;
}



/* Entry: 10389bd90; end: 10389becb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389bd90(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  FUN_10389c1a0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_prepareForReuse_112620008);
  FUN_10389b560();
  uVar2 = *(undefined8 *)(puVar1 + _DAT_112fa5f80);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c59c6c(uVar2);
  func_0x000107c61170(uVar2);
  lVar3 = _DAT_112fa6060;
  func_0x000107c55258(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fa6060) + _DAT_112fa5f88));
  func_0x000107c550d8(*(undefined8 *)(*(long *)(unaff_x20 + lVar3) + _DAT_112fa5f88));
  uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c61174(uVar2);
  FUN_103898fb0(0,0,0);
  func_0x000107c61170(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112fa6098);
  *(undefined8 *)(unaff_x20 + _DAT_112fa6098) = 0;
  func_0x000107c61170();
  func_0x00010389b5d8();
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112fa5ea0);
  *(undefined8 *)(lVar3 + _DAT_112fa5ea0) = 0;
  FUN_103894e30(uVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fa6070);
  *(undefined8 *)(unaff_x20 + _DAT_112fa6070) = 0;
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 10389becc; end: 10389bf43; -[_TtC11SCARBarImpl19ARBarPickerTextCell prepareForReuse] */

void FUN_10389becc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10389bd90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10389bf44; end: 10389c06b;  */

void FUN_10389bf44(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_3 != 0) {
      func_0x000107c61174();
      lVar1 = param_3;
      func_0x000107c40ee0();
      lVar2 = lVar5;
      func_0x000107c49820();
      if (lVar1 != lVar2) {
        lVar1 = param_2;
        func_0x000107c5c42c();
        func_0x000107c61180();
        if (lVar1 != 0) {
          puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
          func_0x000107c61168(PTR__OBJC_CLASS___UICollectionView_1126afd20);
          lVar2 = lVar1;
          func_0x000107c6148c(lVar1,puVar3);
          lVar4 = param_2;
          if (lVar2 != 0) {
            func_0x000107c49820(lVar5);
            func_0x000107c53c6c(param_3);
            func_0x000107c3fda4(lVar2);
            func_0x000107c61180();
            func_0x000107c4990c();
            func_0x000107c61170(param_2);
            lVar4 = param_3;
            param_3 = lVar1;
          }
          param_2 = param_3;
          func_0x000107c61170(lVar4);
        }
      }
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10389c06c; end: 10389c117;  */

/* WARNING: Possible PIC construction at 0x00010389c080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389c0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389c0d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010389c084) */
/* WARNING: Removing unreachable block (ram,0x00010389c0d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389c06c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_112fa6060));
  return;
}



/* Entry: 10389c118; end: 10389c19f; -[_TtC11SCARBarImpl19ARBarPickerTextCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010389c134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389c164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389c184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389c168) */
/* WARNING: Removing unreachable block (ram,0x00010389c138) */
/* WARNING: Removing unreachable block (ram,0x00010389c188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389c118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa6060));
  return;
}



/* Entry: 10389c1a0; end: 10389c283;  */

void FUN_10389c1a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f8108);
  return;
}



/* Entry: 10389c284; end: 10389c2a7;  */

void FUN_10389c284(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *param_1;
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (lVar2 != 0) {
      func_0x000107c61174();
      lVar3 = lVar2;
      func_0x000107c40ee0();
      lVar4 = lVar7;
      func_0x000107c49820();
      if (lVar3 != lVar4) {
        lVar3 = lVar1;
        func_0x000107c5c42c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          puVar5 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
          func_0x000107c61168(PTR__OBJC_CLASS___UICollectionView_1126afd20);
          lVar4 = lVar3;
          func_0x000107c6148c(lVar3,puVar5);
          lVar6 = lVar1;
          if (lVar4 != 0) {
            func_0x000107c49820(lVar7);
            func_0x000107c53c6c(lVar2);
            func_0x000107c3fda4(lVar4);
            func_0x000107c61180();
            func_0x000107c4990c();
            func_0x000107c61170(lVar1);
            lVar6 = lVar2;
            lVar2 = lVar3;
          }
          lVar1 = lVar2;
          func_0x000107c61170(lVar6);
        }
      }
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10389c2a8; end: 10389c2e7;  */

void FUN_10389c2a8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10389c2e8; end: 10389c38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389c2e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_50 [32];
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar2,PTR_s_copyWithZone__1125b2238,param_2);
  func_0x000107c60234(auStack_50);
  func_0x000107c615e8(puVar2);
  func_0x000107c6147c(&lStack_68,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,7);
  *(undefined1 *)(lStack_68 + _DAT_112fa60d0) = *(undefined1 *)(unaff_x20 + _DAT_112fa60d0);
  param_1[3] = lVar1;
  *param_1 = lStack_68;
  return;
}



/* Entry: 10389c38c; end: 10389c3f3; -[_TtC11SCARBarImpl27ARBarPickerLayoutAttributes copyWithZone:] */

undefined1 * FUN_10389c38c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c61174();
  FUN_10389c2e8(auStack_40,param_3);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 10389c3f4; end: 10389c58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10389c3f4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  long extraout_x8;
  uint uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  long lStack_88;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar7 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar3 = &lStack_88;
    func_0x000107c6147c(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar3 & 1) != 0) {
      puVar6 = &stack0xffffffffffffff68;
      func_0x000107c61154(puVar6,PTR_s_isEqual__1125fa0c8,lStack_88);
      if ((int)puVar6 == 0) {
        func_0x000107c61170(lStack_88);
        uVar5 = 0;
      }
      else {
        bVar1 = *(byte *)(unaff_x20 + _DAT_112fa60d0);
        bVar2 = *(byte *)(lStack_88 + _DAT_112fa60d0);
        func_0x000107c61170(lStack_88);
        uVar5 = (bVar1 ^ bVar2) ^ 1;
      }
      goto LAB_10389c560;
    }
  }
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar7 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
    puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar7 + 0x10))(puVar4);
    puVar6 = puVar4;
    func_0x000107c605b0(puVar4,lStack_58);
    (**(code **)(lVar7 + 8))(puVar4,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar4,PTR_s_isEqual__1125fa0c8,puVar6);
  uVar5 = (uint)puVar4;
  func_0x000107c615e8(puVar6);
LAB_10389c560:
  return uVar5 & 1;
}



/* Entry: 10389c590; end: 10389c60f; -[_TtC11SCARBarImpl27ARBarPickerLayoutAttributes isEqual:] */

uint FUN_10389c590(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_10389c3f4(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10389c610; end: 10389c657; -[_TtC11SCARBarImpl27ARBarPickerLayoutAttributes init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389c610(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112fa60d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10389c658; end: 10389c677;  */

void FUN_10389c658(void)

{
  func_0x000107c61168(&PTR_PTR_1128f8330);
  return;
}



/* Entry: 10389c678; end: 10389c68b; +[_TtC11SCARBarImpl27ARBarPickerCollectionLayout layoutAttributesClass] */

void FUN_10389c678(void)

{
  FUN_10389c658();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10389c68c; end: 10389c693; -[_TtC11SCARBarImpl27ARBarPickerCollectionLayout shouldInvalidateLayoutForBoundsChange:] */

undefined8 FUN_10389c68c(void)

{
  return 1;
}



/* Entry: 10389c694; end: 10389c7eb;  */

undefined1 * FUN_10389c694(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  
  puVar1 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  dVar6 = param_2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_invalidationContextForBoundsChan_112531598);
  func_0x000107c61180();
  func_0x000107c3fd94();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c51b7c();
    dVar5 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3);
    dVar5 = (dVar5 + -58.0) * 0.5;
    if (dVar6 != dVar5) {
      func_0x000107c404a0(unaff_x20);
      func_0x000107c404a4(puVar1);
      func_0x000107c53850(dVar5 - param_1,puVar1);
    }
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8;
    func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8);
    puVar3 = puVar1;
    func_0x000107c6148c(puVar1,puVar2);
    if (puVar3 != (undefined1 *)0x0) {
      puVar4 = puVar1;
      func_0x000107c61174(puVar1);
      func_0x000107c3ec60(unaff_x20);
      func_0x000107c554bc(puVar3);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(unaff_x20);
  }
  return puVar1;
}



/* Entry: 10389c7ec; end: 10389c84f; -[_TtC11SCARBarImpl27ARBarPickerCollectionLayout invalidationContextForBoundsChange:] */

void FUN_10389c7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_5;
  FUN_10389c694(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10389c850; end: 10389ca1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10389c850(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  double dVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar3 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_layoutAttributesForElementsInRec_112600c60);
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uVar4 = 0;
    func_0x000101005d6c(0);
    puVar6 = puVar3;
    func_0x000107c5fc54(puVar3,uVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c3fd94();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar3 = puVar6;
      FUN_10389ca20();
      if (puVar3 == (undefined1 *)0x0) {
        func_0x000107c61170(unaff_x20);
      }
      else {
        func_0x000107c404a0(unaff_x20);
        func_0x000107c3ec60(unaff_x20);
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar7 = *(undefined1 **)((undefined1 *)((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = puVar3;
          if (-1 < (long)puVar3) {
            puVar7 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
          }
          func_0x000107c60480();
        }
        if (puVar7 != (undefined1 *)0x0) {
          if ((long)puVar7 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10389ca20);
            (*pcVar2)();
          }
          puVar8 = (undefined1 *)0x0;
          param_3 = param_3 * 0.5;
          param_1 = param_1 + param_3;
          do {
            if (((ulong)puVar3 & 0xc000000000000001) == 0) {
              puVar5 = *(undefined1 **)(puVar3 + (long)puVar8 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar5 = puVar8;
              FUN_10388e404(puVar8,puVar3);
            }
            puVar8 = puVar8 + 1;
            func_0x000107c3f74c();
            dVar1 = param_3 - param_1;
            func_0x000107c5b078(puVar5);
            param_3 = param_3 * 0.5;
            puVar5[_DAT_112fa60d0] = ABS(dVar1) < param_3;
            func_0x000107c61170(puVar5);
          } while (puVar7 != puVar8);
        }
        func_0x000107c61170(unaff_x20);
        func_0x000107c6142c(puVar3);
      }
    }
  }
  return puVar6;
}



/* Entry: 10389ca20; end: 10389cba3;  */

undefined * FUN_10389ca20(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010389f204(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10389cb94);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        func_0x00010100fb8c(uVar8,param_1);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10389cb90);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      FUN_10389c658();
      uVar7 = uVar5;
      func_0x000107c61480(uVar5,uVar6);
      if (uVar7 == 0) {
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar5);
        return (undefined *)0x0;
      }
      uVar5 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar5) {
        func_0x00010389f204(1 < *(ulong *)(puVar2 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar5 + 1;
      *(ulong *)(puVar2 + uVar5 * 8 + 0x20) = uVar7;
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar4);
  }
  return puVar2;
}



/* Entry: 10389cba4; end: 10389cc33; -[_TtC11SCARBarImpl27ARBarPickerCollectionLayout layoutAttributesForElementsInRect:] */

void FUN_10389cba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_5;
  FUN_10389c850(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000101005d6c(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10389cc34; end: 10389cf87;  */

void FUN_10389cc34(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar11;
  
  dVar12 = param_2;
  uVar14 = param_3;
  uVar16 = param_4;
  func_0x000107c614f0();
  func_0x000107c3fd94();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff50,
                        PTR_s_targetContentOffsetForProposedCo_1126781a0);
  }
  else {
    func_0x000107c51b7c();
    func_0x000107c61174(unaff_x20);
    func_0x000107c3ec60();
    func_0x000107c3ec60(unaff_x20);
    puVar7 = &stack0xffffffffffffff40;
    uVar13 = 0;
    dVar11 = param_1;
    func_0x000107c61154(param_1,0,uVar14,puVar7,PTR_s_layoutAttributesForElementsInRec_112600c60);
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
      func_0x000107c61170(unaff_x20);
    }
    else {
      uVar3 = 0;
      func_0x000101005d6c(0);
      puVar4 = puVar7;
      func_0x000107c5fc54(puVar7,uVar3);
      func_0x000107c61170(puVar7);
      if ((ulong)puVar4 >> 0x3e == 0) {
        puVar7 = *(undefined1 **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar7 = (undefined1 *)((ulong)puVar4 & 0xffffffffffffff8);
        if ((undefined1 *)0x7fffffffffffffff < puVar4) {
          puVar7 = puVar4;
        }
        func_0x000107c60480();
      }
      if (puVar7 != (undefined1 *)0x0) {
        if (((ulong)puVar4 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10389cf88);
            (*pcVar2)();
          }
          puVar5 = *(undefined1 **)(puVar4 + 0x20);
          func_0x000107c61174(puVar5);
        }
        else {
          puVar5 = (undefined1 *)0x0;
          func_0x00010100fb8c(0,puVar4);
        }
        if (puVar7 != (undefined1 *)0x1) {
          puVar8 = (undefined1 *)0x1;
          do {
            while( true ) {
              if (((ulong)puVar4 & 0xc000000000000001) == 0) {
                if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10389cedc);
                  (*pcVar2)();
                }
                if (*(undefined1 **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10389cee0);
                  (*pcVar2)();
                }
                puVar6 = *(undefined1 **)(puVar4 + (long)puVar8 * 8 + 0x20);
                func_0x000107c61174(puVar6);
              }
              else {
                puVar6 = puVar8;
                func_0x00010100fb8c(puVar8,puVar4);
              }
              puVar1 = puVar8 + 1;
              if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10389ced8);
                (*pcVar2)();
              }
              func_0x000107c438d4(puVar6);
              fVar9 = (float)(dVar11 - (param_1 + dVar12));
              dVar11 = (double)(ulong)(uint)fVar9;
              func_0x000107c438d4(puVar5);
              fVar10 = ABS((float)(dVar11 - (param_1 + dVar12)));
              dVar11 = (double)(ulong)(uint)fVar10;
              if (ABS(fVar9) < fVar10) break;
              func_0x000107c61170(puVar6);
              puVar8 = puVar8 + 1;
              if (puVar1 == puVar7) goto LAB_10389ce34;
            }
            func_0x000107c61170(puVar5);
            puVar5 = puVar6;
            puVar8 = puVar1;
          } while (puVar1 != puVar7);
        }
LAB_10389ce34:
        func_0x000107c6142c(puVar4);
        func_0x000107c438d4(puVar5);
        dVar12 = dVar11;
        uVar3 = uVar13;
        uVar15 = uVar14;
        uVar17 = uVar16;
        func_0x000107c438d4(unaff_x20);
        func_0x000107c61170(unaff_x20);
        func_0x000107c609cc(dVar12,uVar3,uVar15,uVar17);
        func_0x000107c609cc(dVar11,uVar13,uVar14,uVar16);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(unaff_x20);
        return;
      }
      func_0x000107c61170(unaff_x20);
      func_0x000107c6142c(puVar4);
    }
    func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff30,
                        PTR_s_targetContentOffsetForProposedCo_1126781a0);
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 10389cf88; end: 10389cff3; -[_TtC11SCARBarImpl27ARBarPickerCollectionLayout targetContentOffsetForProposedContentOffset:withScrollingVelocity:] */

undefined1  [16]
FUN_10389cf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_10389cc34(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10389cff4; end: 10389d0eb;  */

void FUN_10389cff4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_prepareLayout_112620088);
  func_0x000107c3fd94();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60();
    func_0x000107c609cc();
    param_1 = param_1 + -58.0;
    dVar2 = param_1 * 0.5;
    func_0x000107c3ec60(unaff_x20);
    func_0x000107c61170(unaff_x20);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    dVar1 = (param_1 + -58.0) * 0.5;
    if (dVar1 < 0.0) {
      dVar1 = 0.0;
    }
    func_0x000107c58d84(dVar1,dVar2,dVar1,dVar2);
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 10389d0ec; end: 10389d113; -[_TtC11SCARBarImpl27ARBarPickerCollectionLayout prepareLayout] */

void FUN_10389d0ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10389cff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10389d114; end: 10389d14f; -[_TtC11SCARBarImpl27ARBarPickerCollectionLayout init] */

void FUN_10389d114(undefined8 param_1)

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



/* Entry: 10389d150; end: 10389d1cf; -[_TtC11SCARBarImpl27ARBarPickerCollectionLayout initWithCoder:] */

undefined1 * FUN_10389d150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10389d1d0; end: 10389d1d3;  */

void FUN_10389d1d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10389d1d4; end: 10389d227;  */

void FUN_10389d1d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10389d228; end: 10389d22f;  */

void FUN_10389d228(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10389d230; end: 10389d26f;  */

void FUN_10389d230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa6128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc19170;
  func_0x000107c61520(&UNK_10dc19170,&UNK_1106a1fe8);
  puRam0000000112fa6128 = puVar1;
  return;
}



/* Entry: 10389d270; end: 10389d283;  */

void FUN_10389d270(void)

{
  return;
}



/* Entry: 10389d284; end: 10389d307;  */

void FUN_10389d284(void)

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



/* Entry: 10389d308; end: 10389d4f7;  */

void FUN_10389d308(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x112d38c88;
  func_0x00010389f514(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xf;
  *(undefined8 *)(lVar1 + 0x10) = 7;
  uVar2 = 0;
  func_0x00010389fe74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c60108(0);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  func_0x000107c60108(0x3fbeb851eb851eb8);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  func_0x000107c60108(0x3fd0000000000000);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  func_0x000107c60108(0x3fe0000000000000);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  func_0x000107c60108(0x3fe8000000000000);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  func_0x000107c60108(0x3fec28f5c28f5c29);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  func_0x000107c60108(0x3ff0000000000000);
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  lRam0000000112fa61e0 = lVar1;
  return;
}



/* Entry: 10389d4f8; end: 10389d8af;  */

/* WARNING: Possible PIC construction at 0x00010389d608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d6dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389d680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389d7f4) */
/* WARNING: Removing unreachable block (ram,0x00010389d7e4) */
/* WARNING: Removing unreachable block (ram,0x00010389d814) */
/* WARNING: Removing unreachable block (ram,0x00010389d684) */
/* WARNING: Removing unreachable block (ram,0x00010389d800) */
/* WARNING: Removing unreachable block (ram,0x00010389d884) */
/* WARNING: Removing unreachable block (ram,0x00010389d874) */
/* WARNING: Removing unreachable block (ram,0x00010389d7a0) */
/* WARNING: Removing unreachable block (ram,0x00010389d6e0) */
/* WARNING: Removing unreachable block (ram,0x00010389d854) */
/* WARNING: Removing unreachable block (ram,0x00010389d85c) */
/* WARNING: Removing unreachable block (ram,0x00010389d6f4) */
/* WARNING: Removing unreachable block (ram,0x00010389d700) */
/* WARNING: Removing unreachable block (ram,0x00010389d724) */
/* WARNING: Removing unreachable block (ram,0x00010389d7a8) */
/* WARNING: Removing unreachable block (ram,0x00010389d728) */
/* WARNING: Removing unreachable block (ram,0x00010389d850) */
/* WARNING: Removing unreachable block (ram,0x00010389d734) */
/* WARNING: Removing unreachable block (ram,0x00010389d740) */
/* WARNING: Removing unreachable block (ram,0x00010389d84c) */
/* WARNING: Removing unreachable block (ram,0x00010389d74c) */
/* WARNING: Removing unreachable block (ram,0x00010389d710) */
/* WARNING: Removing unreachable block (ram,0x00010389d86c) */
/* WARNING: Removing unreachable block (ram,0x00010389d764) */
/* WARNING: Removing unreachable block (ram,0x00010389d654) */
/* WARNING: Removing unreachable block (ram,0x00010381e510) */
/* WARNING: Removing unreachable block (ram,0x00010381e538) */
/* WARNING: Removing unreachable block (ram,0x00010381e514) */
/* WARNING: Removing unreachable block (ram,0x00010389d640) */
/* WARNING: Removing unreachable block (ram,0x00010389d620) */
/* WARNING: Removing unreachable block (ram,0x00010389d638) */
/* WARNING: Removing unreachable block (ram,0x00010389d60c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x00010389d7cc) */
/* WARNING: Removing unreachable block (ram,0x00010389d820) */
/* WARNING: Removing unreachable block (ram,0x00010389d7d0) */
/* WARNING: Removing unreachable block (ram,0x00010389d68c) */
/* WARNING: Removing unreachable block (ram,0x00010389d690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389d4f8(ulong param_1,char param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112fa6178);
  uVar6 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  *puVar1 = param_1;
  *(char *)(puVar1 + 1) = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x00010389fe74(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174();
  func_0x00010388cd64(param_3,param_4);
  func_0x000107c61174();
  func_0x00010388cd64(param_3,param_4);
  uVar5 = param_1;
  func_0x000107c60118(param_1,uVar6);
  if (((uVar5 & 1) != 0) && ((char)uVar4 == param_2)) {
    if (param_3 == 0) {
      func_0x00010388cd64(uVar2,uVar3);
    }
    else if (uVar2 != 0) {
      func_0x00010388cd64(param_3,param_4);
      func_0x00010388cd64(uVar2,uVar3);
      FUN_1038a4f38(param_3,uVar2);
      if ((param_3 & 1) != 0) {
        func_0x0001038a518c(param_4,uVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10389d8b0; end: 10389d8d7; -[_TtC11SCARBarImpl15ARBarPickerView initWithCoder:] */

void FUN_10389d8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x00010389fb78();
  return;
}



/* Entry: 10389d8d8; end: 10389d9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389d8d8(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112fa6138;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa6140);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa6148);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112fa6150) = 0;
  *(undefined **)(unaff_x20 + _DAT_112fa6158) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112fa6160;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112fa6180) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa6188) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000017,0x800000010f0157b0,
                      "SCARBarImpl/ARBarPickerView.swift",0x21,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10389d9e0);
  (*pcVar3)();
}



/* Entry: 10389d9e0; end: 10389d9f3; -[_TtC11SCARBarImpl15ARBarPickerView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389d9e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  lVar2 = param_1;
  FUN_10389d8d8();
  lVar3 = lVar2;
  lStack_40 = param_1;
  FUN_10389e40c();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_50,puVar1);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112fa6198);
  func_0x000107c3ec60(lVar2);
  func_0x000107c54b80(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112fa6190);
  func_0x000107c3ec60(lVar2);
  func_0x000107c54b80(0,0,uVar4);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10389d9f4; end: 10389da87; -[_TtC11SCARBarImpl15ARBarPickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389d9f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_10389e40c();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fa6198);
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fa6190);
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(0,0,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10389da88; end: 10389dc3f;  */

/* WARNING: Possible PIC construction at 0x00010389dafc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389db3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389db84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389db98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389dbe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389db9c) */
/* WARNING: Removing unreachable block (ram,0x00010389db88) */
/* WARNING: Removing unreachable block (ram,0x00010389db40) */
/* WARNING: Removing unreachable block (ram,0x00010389db00) */
/* WARNING: Removing unreachable block (ram,0x00010389dbe8) */

void FUN_10389da88(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106a2128;
  func_0x000107c613fc(&UNK_1106a2128,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x60))(FUN_10389fe38,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10389dc40; end: 10389dcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389dc40(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10389dcb0(uVar1,*(undefined8 *)(param_2 + _DAT_112fa6140),
                  *(undefined1 *)((undefined8 *)(param_2 + _DAT_112fa6140) + 1));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10389dcb0; end: 10389de03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389dcb0(undefined8 param_1,long param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  lVar3 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar2 = _DAT_112fa6158;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa6158);
  *(undefined8 *)(unaff_x20 + _DAT_112fa6158) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fa6190);
  func_0x000107c4fd7c(uVar6);
  if ((param_3 != '\x01') && (-1 < param_2)) {
    uVar5 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar5 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar4 = uVar5;
      }
      func_0x000107c60480();
    }
    if (param_2 < (long)uVar4) {
      plVar1 = (long *)(unaff_x20 + _DAT_112fa6140);
      *plVar1 = param_2;
      *(undefined1 *)(plVar1 + 1) = 0;
      func_0x000107c5efe8(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          param_2,0);
      func_0x000107c5efd4();
      (**(code **)(lVar7 + 8))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      func_0x000107c51a54(uVar6);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10389de04; end: 10389df0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389de04(undefined1 *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar1 = 3;
  }
  else {
    if (lVar2 == 3) {
      uVar1 = 2;
    }
    else if (lVar2 == 2) {
      uVar1 = *(undefined1 *)(param_3 + _DAT_112fa6168);
    }
    else {
      uVar1 = 3;
    }
    func_0x000107c61170();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10389df0c; end: 10389e123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389df0c(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112fa6198);
  if (*(char *)(unaff_x20 + _DAT_112fa6170) == '\x02') {
    if (lRam0000000112fa61d8 != -1) {
      func_0x000107c61568(0x112fa61d8,FUN_10389d308);
    }
    puVar6 = (undefined8 *)0x112fa61e0;
  }
  else {
    if (lRam0000000112fa6200 != -1) {
      func_0x000107c61568(0x112fa6200,0x10389d3f8);
    }
    puVar6 = (undefined8 *)0x112fa6208;
  }
  uVar10 = *puVar6;
  func_0x000107c61434(uVar10);
  uVar3 = 0;
  func_0x00010389fe74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar10;
  func_0x000107c5fc48(uVar10,uVar3);
  func_0x000107c6142c(uVar10);
  func_0x000107c56084(uVar9);
  func_0x000107c61170(uVar4);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112fa6190);
  func_0x000107c4fd7c(uVar9);
  func_0x000107c4abfc(uVar9);
  plVar1 = (long *)(unaff_x20 + _DAT_112fa6140);
  if (((char)plVar1[1] != '\x01') && (lVar5 = *plVar1, -1 < lVar5)) {
    uVar7 = *(ulong *)(unaff_x20 + _DAT_112fa6158);
    if (uVar7 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar8 = uVar7;
      }
      func_0x000107c60480();
    }
    if (lVar5 < (long)uVar8) {
      *plVar1 = lVar5;
      *(undefined1 *)(plVar1 + 1) = 0;
      func_0x000107c5efe8(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          lVar5,0);
      func_0x000107c5efd4();
      (**(code **)(lVar11 + 8))
                (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      func_0x000107c51a54(uVar9);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 10389e124; end: 10389e257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389e124(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112fa6140);
  if (((char)plVar1[1] == '\x01') || (*plVar1 != param_1)) {
    *plVar1 = param_1;
    *(undefined1 *)(plVar1 + 1) = 0;
    lVar2 = unaff_x20 + _DAT_112fa6138;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    lVar4 = lVar2 + _DAT_112fa6250;
    func_0x000107c61428(lVar4,auStack_58,0,0);
    lVar3 = lVar4;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_10389e238;
    lVar6 = 0x18;
  }
  else {
    lVar2 = unaff_x20 + _DAT_112fa6138;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    lVar4 = lVar2 + _DAT_112fa6250;
    func_0x000107c61428(lVar4,auStack_58,0,0);
    lVar3 = lVar4;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_10389e238;
    lVar6 = 0x20;
  }
  lVar5 = *(long *)(lVar4 + 8);
  lVar4 = lVar3;
  func_0x000107c614f0();
  (**(code **)(lVar5 + lVar6))(param_1,param_2,lVar4,lVar5);
  func_0x000107c615e8(lVar3);
LAB_10389e238:
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 10389e258; end: 10389e30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389e258(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112fa6148);
  if ((char)plVar1[1] != '\x01') {
    if (*plVar1 == param_1) {
      return;
    }
    if ((*(byte *)(unaff_x20 + _DAT_112fa6150) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112fa6150) = 1;
    }
    else if (*(long *)(unaff_x20 + _DAT_112fa6130) != 0) {
      func_0x000107c4e57c(*(long *)(unaff_x20 + _DAT_112fa6130),param_2,7);
    }
  }
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  lVar2 = unaff_x20 + _DAT_112fa6138;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10389e30c; end: 10389e367; -[_TtC11SCARBarImpl15ARBarPickerView initWithFrame:] */

void FUN_10389e30c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarImpl.ARBarPickerView",0x1b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10389e338);
  (*pcVar1)();
}



/* Entry: 10389e368; end: 10389e40b; -[_TtC11SCARBarImpl15ARBarPickerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010389e388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389e3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010389e3ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389e3d4) */
/* WARNING: Removing unreachable block (ram,0x00010389e38c) */
/* WARNING: Removing unreachable block (ram,0x00010389e3f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389e368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa6130));
  return;
}



/* Entry: 10389e40c; end: 10389e42b;  */

void FUN_10389e40c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f8498);
  return;
}



/* Entry: 10389e42c; end: 10389e45b; -[_TtC11SCARBarImpl15ARBarPickerView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10389e42c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112fa6158);
  if (uVar2 >> 0x3e == 0) {
    return *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  uVar1 = uVar2 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < uVar2) {
    uVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss18_CocoaArrayWrapperV8endIndexSivg_11034e8f0)(uVar1);
  return uVar1;
}



/* Entry: 10389e45c; end: 10389e697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10389e45c(ulong *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uStack_48;
  
  if (*(char *)(unaff_x20 + _DAT_112fa6170) == '\0') {
    uVar2 = 0;
    FUN_10389c1a0();
  }
  else if (*(char *)(unaff_x20 + _DAT_112fa6170) == '\x01') {
    uVar2 = 0;
    func_0x00010389adf4();
  }
  else {
    uVar2 = 0;
    FUN_103897568();
  }
  uVar3 = 0x112d6cac8;
  uStack_48 = uVar2;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  puVar4 = &uStack_48;
  func_0x000107c5fb18(puVar4,uVar3);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c5efd4();
  func_0x000107c417e0();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  uVar2 = 0;
  func_0x0001038960dc(0);
  puVar5 = param_1;
  func_0x000107c61480(param_1,uVar2);
  puVar6 = puVar5;
  if (puVar5 == (ulong *)0x0) {
    func_0x000107c61170();
    puVar6 = param_1;
  }
  func_0x000107c5efe4();
  lVar1 = _DAT_112fa6158;
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112fa6158);
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  if ((long)puVar6 < (long)uVar9) {
    func_0x000107c5efe4();
    uVar8 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar8 & 0xc000000000000001) == 0) {
      if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10389e694);
        (*pcVar10)();
      }
      if (*(ulong **)((uVar8 & 0xffffffffffffff8) + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10389e698);
        (*pcVar10)();
      }
      puVar6 = *(ulong **)(uVar8 + (long)puVar6 * 8 + 0x20);
      func_0x000107c61174(puVar6);
    }
    else {
      func_0x000107c61434(uVar8);
      FUN_10388e5a0(puVar6,uVar8);
      func_0x000107c6142c(uVar8);
    }
    if (puVar5 != (ulong *)0x0) {
      pcVar10 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x58);
      func_0x000107c61174(puVar5);
      puVar7 = puVar6;
      func_0x000107c61174(puVar6);
      (*pcVar10)(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar7);
      return puVar5;
    }
    func_0x000107c61170();
  }
  else if (puVar5 != (ulong *)0x0) {
    return puVar5;
  }
  puVar6 = (ulong *)PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
  func_0x000107c453e4();
  return puVar6;
}



/* Entry: 10389e698; end: 10389e75f; -[_TtC11SCARBarImpl15ARBarPickerView collectionView:cellForItemAtIndexPath:] */

void FUN_10389e698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10389e45c(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10389e760; end: 10389e873; -[_TtC11SCARBarImpl15ARBarPickerView collectionView:didSelectItemAtIndexPath:] */

void FUN_10389e760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_1;
  func_0x000107c5efd4();
  func_0x000107c41814(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c5efd4();
  func_0x000107c51a54(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c5efe4();
  FUN_10389e124();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 10389e874; end: 10389e9cb; -[_TtC11SCARBarImpl15ARBarPickerView collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389e874(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long extraout_x8;
  long lVar5;
  code *pcVar6;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5)
  ;
  uVar3 = 0;
  func_0x0001038960dc(0);
  puVar4 = param_4;
  func_0x000107c61480(param_4,uVar3);
  puVar1 = PTR__swift_isaMask_11034f488;
  if (puVar4 != (ulong *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112fa6178);
    pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x60);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174();
    func_0x000107c61174(uVar3);
    (*pcVar6)();
    func_0x000107c61170(uVar3);
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x68))(*(undefined1 *)(param_1 + _DAT_112fa6180));
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
  }
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Entry: 10389e9cc; end: 10389eb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389e9cc(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar5 - extraout_x12;
  func_0x000107c3f74c(param_3);
  dVar7 = param_1;
  func_0x000107c404a0(param_3);
  func_0x000107c3f74c(param_3);
  dVar8 = param_2;
  func_0x000107c404a0(param_3);
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6190);
  func_0x000107c45350(param_1 + dVar7,param_2 + dVar8);
  func_0x000107c61180();
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x000107c5eff8();
  }
  else {
    func_0x000107c5efdc(puVar5);
    func_0x000107c61170(lVar2);
    lVar2 = 0;
    func_0x000107c5eff8();
  }
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x38))(puVar5,bVar1,1,lVar2);
  func_0x00010100ac24(puVar5,lVar4);
  func_0x000107c5eff8(0);
  lVar3 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001020f8fb8(lVar4);
  }
  else {
    func_0x000107c5efe4();
    (**(code **)(lVar6 + 8))(lVar4,lVar2);
    FUN_10389e258(lVar3);
  }
  return;
}



/* Entry: 10389eb64; end: 10389ebb3; -[_TtC11SCARBarImpl15ARBarPickerView scrollViewDidScroll:] */

/* WARNING: Possible PIC construction at 0x00010389eb9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389eba0) */

void FUN_10389eb64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10389e9cc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10389ebb4; end: 10389ed4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389ebb4(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar5 - extraout_x12;
  func_0x000107c3f74c(param_3);
  dVar7 = param_1;
  func_0x000107c404a0(param_3);
  func_0x000107c3f74c(param_3);
  dVar8 = param_2;
  func_0x000107c404a0(param_3);
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6190);
  func_0x000107c45350(param_1 + dVar7,param_2 + dVar8);
  func_0x000107c61180();
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x000107c5eff8();
  }
  else {
    func_0x000107c5efdc(puVar5);
    func_0x000107c61170(lVar2);
    lVar2 = 0;
    func_0x000107c5eff8();
  }
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x38))(puVar5,bVar1,1,lVar2);
  func_0x00010100ac24(puVar5,lVar4);
  func_0x000107c5eff8(0);
  lVar3 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001020f8fb8(lVar4);
  }
  else {
    func_0x000107c5efe4();
    (**(code **)(lVar6 + 8))(lVar4,lVar2);
    FUN_10389e124(lVar3,1);
  }
  return;
}



/* Entry: 10389ed50; end: 10389ed9f; -[_TtC11SCARBarImpl15ARBarPickerView scrollViewDidEndDecelerating:] */

/* WARNING: Possible PIC construction at 0x00010389ed88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389ed8c) */

void FUN_10389ed50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10389ebb4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10389eda0; end: 10389ee97; -[_TtC11SCARBarImpl15ARBarPickerView collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_10389eda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar2,param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  FUN_10389fc80(param_5,puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10389ee98; end: 10389f143;  */

int FUN_10389ee98(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10389ef14;
        goto LAB_10389eef8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10389eef8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10389ef14:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10389f144; end: 10389f183;  */

void FUN_10389f144(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa61c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc192ac;
  func_0x000107c61520(&UNK_10dc192ac,&UNK_1106a2108);
  puRam0000000112fa61c8 = puVar1;
  return;
}



/* Entry: 10389f184; end: 10389f187;  */

void FUN_10389f184(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa61d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc19314;
  func_0x000107c61520(&UNK_10dc19314,&UNK_1106a2078);
  puRam0000000112fa61d0 = puVar1;
  return;
}



/* Entry: 10389f188; end: 10389f21f;  */

void FUN_10389f188(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa61d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc19314;
  func_0x000107c61520(&UNK_10dc19314,&UNK_1106a2078);
  puRam0000000112fa61d0 = puVar1;
  return;
}



/* Entry: 10389f220; end: 10389f36b;  */

undefined *
FUN_10389f220(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10389f36c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    func_0x00010389f514(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x00010389fe74(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10389f36c; end: 10389f4a7;  */

code * FUN_10389f36c(ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10389f4a8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = FUN_10389c658;
    FUN_10389f4a8(FUN_10389c658,0x112fa6210,&UNK_10dc19358);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    FUN_10389c658(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 10389f4a8; end: 10389f58b;  */

void FUN_10389f4a8(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10389f58c; end: 10389f5f3;  */

/* WARNING: Possible PIC construction at 0x00010389f5bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010389f5c0) */
/* WARNING: Removing unreachable block (ram,0x00010389f5c4) */

void FUN_10389f58c(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112fa6218;
    plVar5 = (long *)&UNK_10dc19360;
  }
  else {
    puVar3 = (ulong *)0x112fa6220;
    plVar5 = (long *)&UNK_10dc19590;
    unaff_x30 = 0x10389f5c0;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 10389f5f4; end: 10389fa5f;  */

undefined * FUN_10389f5f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x00010389d208(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c58cd0();
  func_0x000107c566f4(0,uVar1);
  func_0x000107c566fc(0,uVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x000107c469ac(0,0,0,0);
  func_0x000107c61174();
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f170c00);
  func_0x000107c520f4(puVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61174(puVar2);
  func_0x000107c5928c();
  func_0x000107c59284(puVar2);
  func_0x000107c53e7c(*(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8,puVar2);
  func_0x000107c61170(puVar2);
  uVar5 = 0;
  FUN_10389c1a0();
  func_0x000107c614e8();
  uVar3 = 0x112fa61e8;
  uStack_48 = uVar5;
  func_0x0001000285a8(0x112fa61e8,&UNK_10dc19340);
  puVar6 = &uStack_48;
  func_0x000107c5fb18(puVar6,uVar3);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(puVar6);
  uVar5 = 0;
  func_0x00010389adf4();
  func_0x000107c614e8();
  uVar3 = 0x112fa61f0;
  uStack_48 = uVar5;
  func_0x0001000285a8(0x112fa61f0,&UNK_10dc19348);
  puVar6 = &uStack_48;
  func_0x000107c5fb18(puVar6,uVar3);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(puVar6);
  uVar5 = 0;
  FUN_103897568();
  func_0x000107c614e8();
  uVar3 = 0x112fa61f8;
  uStack_48 = uVar5;
  func_0x0001000285a8(0x112fa61f8,&UNK_10dc19350);
  puVar6 = &uStack_48;
  func_0x000107c5fb18(puVar6,uVar3);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c4fbd8(puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar6);
  return puVar2;
}



/* Entry: 10389fa60; end: 10389fc7f;  */

undefined * FUN_10389fa60(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  func_0x00010389f864(param_1);
  uVar2 = param_1;
  FUN_1033d92b8();
  func_0x000107c6142c(param_1);
  uVar3 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar2);
  func_0x000107c535a0(puVar1);
  func_0x000107c61170(uVar3);
  if (lRam0000000112fa61d8 != -1) {
    func_0x000107c61568(0x112fa61d8,FUN_10389d308);
  }
  uVar2 = uRam0000000112fa61e0;
  uVar3 = 0;
  func_0x00010389fe74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c5fc48(uVar2,uVar3);
  func_0x000107c56084(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c597c4(0,0x3fe0000000000000,puVar1);
  func_0x000107c54598(0x3ff0000000000000,0x3fe0000000000000,puVar1);
  return puVar1;
}



/* Entry: 10389fc80; end: 10389fe37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10389fc80(double param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  lVar3 = param_2;
  func_0x000107c5efe4();
  lVar1 = _DAT_112fa6158;
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112fa6158);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  if (lVar3 < (long)uVar6) {
    if (*(char *)(unaff_x20 + _DAT_112fa6170) == '\0') {
      uVar5 = 0;
      FUN_10389c1a0();
    }
    else if (*(char *)(unaff_x20 + _DAT_112fa6170) == '\x01') {
      uVar5 = 0;
      func_0x00010389adf4();
    }
    else {
      uVar5 = 0;
      FUN_103897568();
    }
    uVar4 = 0;
    func_0x0001038960dc(0);
    func_0x000107c61488(uVar5,uVar4);
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c5efe4();
      uVar7 = *(ulong *)(unaff_x20 + lVar1);
      if ((uVar7 & 0xc000000000000001) == 0) {
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10389fe34);
          (*pcVar2)();
        }
        if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10389fe38);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar7 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        func_0x000107c61434(uVar7);
        FUN_10388e5a0(uVar6,uVar7);
        func_0x000107c6142c(uVar7);
      }
      (**(code **)(uVar5 + 0x50))(uVar6);
      uVar7 = 0;
      FUN_103897568();
      dVar8 = param_1 + 8.0;
      if (uVar5 != uVar7) {
        dVar8 = param_1;
      }
      dVar9 = dVar8;
      if (dVar8 <= 58.0) {
        dVar9 = 58.0;
      }
      func_0x000107c3ec60(param_2);
      func_0x000107c609b0();
      func_0x000107c61170(uVar6);
      uVar4 = NEON_fminnm(dVar8,0x404d000000000000);
      goto LAB_10389fdec;
    }
  }
  dVar9 = 58.0;
  uVar4 = 0x404d000000000000;
LAB_10389fdec:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = dVar9;
  return auVar10;
}



/* Entry: 10389fe38; end: 10389fe4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10389fe38(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10389dcb0(uVar2,*(undefined8 *)(lVar1 + _DAT_112fa6140),
                  *(undefined1 *)((undefined8 *)(lVar1 + _DAT_112fa6140) + 1));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10389fe50; end: 10389feb3;  */

undefined8 FUN_10389fe50(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10389feb4; end: 10389ff0b;  */

undefined1 FUN_10389feb4(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10389ff0c; end: 10389ff93;  */

undefined8 FUN_10389ff0c(void)

{
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x0001000bdd8c(0x10383130c,0);
  return 0x10001;
}



/* Entry: 10389ff94; end: 10389ff9b;  */

void FUN_10389ff94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10389ff9c; end: 1038a009f;  */

undefined1 * FUN_10389ff9c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 1038a00a0; end: 1038a0137;  */

int FUN_1038a00a0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038a0138; end: 1038a043f;  */

void FUN_1038a0138(void)

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



/* Entry: 1038a0440; end: 1038a04c7;  */

void FUN_1038a0440(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar5 = 0x800000010f170c90;
  uVar3 = 0xd000000000000012;
  if (bVar2 != 2) {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x656c6269736976;
  }
  uVar1 = 0xea0000000000656c;
  uVar4 = 0x6269736956746f6e;
  if (bVar2 != 0) {
    uVar1 = 0x800000010f170cb0;
    uVar4 = 0xd000000000000014;
  }
  if (bVar2 < 2) {
    uVar5 = uVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 1038a04c8; end: 1038a055b; -[_TtC11SCARBarImpl13ARBarViewImpl overrideTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a04c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa6230;
  func_0x000107c61428(param_1 + _DAT_112fa6230,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1038a055c; end: 1038a0613; -[_TtC11SCARBarImpl13ARBarViewImpl setOverrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a055c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa6230;
  func_0x000107c61428(param_1 + _DAT_112fa6230,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1038a0614; end: 1038a0653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038a0614(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fa6230;
  func_0x000107c61428(unaff_x20 + _DAT_112fa6230,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1038a0654;
  return auVar2;
}



/* Entry: 1038a0654; end: 1038a0657;  */

void FUN_1038a0654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1038a0658; end: 1038a06db; -[_TtC11SCARBarImpl13ARBarViewImpl dimUnselectedIcons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038a0658(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa6238;
  func_0x000107c61428(param_1 + _DAT_112fa6238,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1038a06dc; end: 1038a0777; -[_TtC11SCARBarImpl13ARBarViewImpl setDimUnselectedIcons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a06dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa6238;
  func_0x000107c61428(param_1 + _DAT_112fa6238,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1038a0778; end: 1038a07b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038a0778(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fa6238;
  func_0x000107c61428(unaff_x20 + _DAT_112fa6238,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1038a4ebc;
  return auVar2;
}



/* Entry: 1038a07b8; end: 1038a07e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038a07b8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
    return *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112fa6240) + _DAT_112fa6180);
  }
  return 0;
}


