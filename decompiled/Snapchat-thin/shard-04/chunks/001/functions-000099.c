/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031212b4; end: 1031212eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031212b4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f42b90);
  func_0x000107c61174();
  return;
}



/* Entry: 1031212ec; end: 1031212fb;  */

void FUN_1031212ec(undefined8 *param_1)

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
    func_0x000107c3ebcc(uVar2);
    FUN_103120a00();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1031212fc; end: 103121363;  */

void FUN_1031212fc(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 103121364; end: 1031215ff;  */

undefined8 FUN_103121364(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  
  lVar1 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5d2f0();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c414c4();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5d7e0();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c5edd0(puVar8,lVar2,puVar7);
        func_0x000107c6142c(puVar7);
        puVar4 = puVar8;
        (**(code **)(lVar10 + 0x30))(puVar8,1,lVar1);
        if ((int)puVar4 == 1) {
          func_0x0001000293e4(puVar8);
        }
        else {
          (**(code **)(lVar10 + 0x20))(lVar9,puVar8,lVar1);
          ppuVar5 = (undefined **)PTR_PTR_1126b1068;
          func_0x000107c610f8();
          ppuVar6 = ppuVar5;
          func_0x000107c5ed90();
          func_0x000107c48fe4();
          func_0x000107c61170(ppuVar6);
          ppuVar6 = ppuVar5;
          func_0x000107c42e38();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar5);
          if (ppuVar6 == (undefined **)0x0) {
            func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dc7978);
            puVar4 = puVar8;
          }
          else {
            ppuVar5 = ppuVar6;
            func_0x000107c5faec();
            puVar4 = puVar8;
            func_0x000107c61170(ppuVar6);
            ppuVar6 = &PTR____CFConstantStringClassReference_110dc7978;
            func_0x000107c5faec();
            if (puVar8 != (undefined1 *)0x0) {
              if ((ppuVar5 == ppuVar6) && (puVar8 == puVar4)) {
                func_0x000107c6142c(puVar8);
                func_0x000107c6142c(puVar4);
                (**(code **)(lVar10 + 8))(lVar9,lVar1);
              }
              else {
                func_0x000107c605b8(ppuVar5,puVar8,ppuVar6,puVar4,0);
                func_0x000107c6142c(puVar8);
                func_0x000107c6142c(puVar4);
                (**(code **)(lVar10 + 8))(lVar9,lVar1);
                if (((ulong)ppuVar5 & 1) == 0) {
                  return 0;
                }
              }
              return 1;
            }
          }
          (**(code **)(lVar10 + 8))(lVar9,lVar1);
          func_0x000107c6142c(puVar4);
        }
      }
    }
  }
  return 0;
}



/* Entry: 103121600; end: 103121617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103121600(void)

{
  long unaff_x20;
  
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f42b98) = *(undefined1 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 103121618; end: 103121de3;  */

/* WARNING: Possible PIC construction at 0x0001031217a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103121d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103121d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103121d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103121d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103121d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103121dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103121dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031217dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031217c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031217e0) */
/* WARNING: Removing unreachable block (ram,0x000103121dc8) */
/* WARNING: Removing unreachable block (ram,0x000103121dd8) */
/* WARNING: Removing unreachable block (ram,0x000103121da0) */
/* WARNING: Removing unreachable block (ram,0x000103121dd4) */
/* WARNING: Removing unreachable block (ram,0x000103121d84) */
/* WARNING: Removing unreachable block (ram,0x000103121d5c) */
/* WARNING: Removing unreachable block (ram,0x000103121d4c) */
/* WARNING: Removing unreachable block (ram,0x000103121d34) */
/* WARNING: Removing unreachable block (ram,0x000103121d38) */
/* WARNING: Removing unreachable block (ram,0x0001031217a8) */
/* WARNING: Removing unreachable block (ram,0x0001031217c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103121618(undefined8 param_1,ulong param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  if (*(long *)(unaff_x20 + _DAT_112f42c08) != 0) {
    return;
  }
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f42be8);
  lVar6 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f42be0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) goto code_r0x000107c615e8;
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f42bf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 == 0) goto code_r0x000107c615e8;
  uVar13 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar4 = uVar13;
  func_0x000107c5faec();
  lVar12 = lVar6;
  func_0x000107c61170(uVar13);
  uVar13 = uVar1;
  func_0x000107c3dff4();
  func_0x000107c61180();
  if (uVar13 == 0) {
    func_0x000107c6142c(lVar6);
    goto code_r0x000107c615e8;
  }
  uVar5 = uVar13;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  uVar13 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  if (uVar4 == uVar13 && lVar6 == lVar12) {
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar12);
  }
  else {
    func_0x000107c605b8(uVar4,lVar6,uVar13,lVar12,0);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar12);
    if ((uVar4 & 1) == 0) goto code_r0x000107c615e8;
  }
  uVar13 = param_2;
  func_0x000107c4045c(param_2);
  func_0x000107c61180();
  func_0x000107c4b1bc();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (lVar2 == 0) {
    puStack_b8 = (undefined *)0x0;
  }
  else {
    lVar6 = lVar2;
    func_0x000107c3ab2c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      puStack_b8 = (undefined *)0x0;
    }
    else {
      uVar13 = param_2;
      func_0x000107c5d0f0();
      uVar11 = 0x4008000000000000;
      if (uVar13 == 1) {
        func_0x000107c51820(lVar2);
        uVar11 = param_1;
      }
      func_0x000107c450e0(lVar2);
      puStack_b8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c45afc(uVar11);
      func_0x000107c61170(lVar2);
      lVar2 = lVar6;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c5fadc(param_3);
  uVar13 = param_2;
  func_0x000107c44ea8();
  func_0x000107c61180();
  puVar7 = PTR___sSSSHsWP_11034da90;
  puVar15 = PTR___sSSN_11034da80;
  if (uVar13 == 0) {
    uVar13 = 0;
  }
  else {
    uVar4 = uVar13;
    func_0x000107c5f9e8();
    func_0x000107c61170(uVar13);
    uVar13 = uVar4;
    func_0x000107c5f9dc(uVar4,puVar15,puVar15,puVar7);
    func_0x000107c6142c(uVar4);
    param_4 = puVar15;
  }
  uVar4 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  puVar15 = param_4;
  if (uVar4 == 0) {
    func_0x000107c5faec();
    puVar15 = param_4;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_4);
  }
  uVar5 = uVar3;
  func_0x000107c4b864();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  if (uVar5 == 0) {
    uStack_c0 = 0;
    puVar15 = (undefined *)0x0;
  }
  else {
    uStack_c0 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
  }
  func_0x000107c5fadc(param_5);
  uVar13 = param_2;
  func_0x000107c44ea8();
  func_0x000107c61180();
  puVar10 = PTR___sSSSHsWP_11034da90;
  puVar7 = PTR___sSSN_11034da80;
  if (uVar13 == 0) {
    uVar13 = 0;
  }
  else {
    uVar4 = uVar13;
    func_0x000107c5f9e8();
    func_0x000107c61170(uVar13);
    uVar13 = uVar4;
    func_0x000107c5f9dc(uVar4,puVar7,puVar7,puVar10);
    func_0x000107c6142c(uVar4);
    param_6 = puVar7;
  }
  func_0x000107c4b1dc();
  func_0x000107c61180();
  puVar7 = param_6;
  if (param_2 == 0) {
    func_0x000107c5faec();
    puVar7 = param_6;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_6);
  }
  func_0x000107c4b864();
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(param_2);
  if (uVar3 == 0) {
    uVar13 = 0;
    puVar14 = (undefined *)0x0;
    puVar10 = puVar7;
  }
  else {
    uVar13 = uVar3;
    func_0x000107c5faec(uVar3);
    puVar10 = puVar7;
    func_0x000107c61170(uVar3);
    param_2 = uVar3;
    puVar14 = puVar7;
  }
  FUN_10312311c();
  puVar7 = &UNK_110610b80;
  func_0x000107c613fc(&UNK_110610b80,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  func_0x000107c6157c(puVar7);
  func_0x000107c5fadc(param_2,puVar10);
  func_0x000107c6142c(puVar10);
  uStack_80 = 0x103122548;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100de205c;
  puStack_88 = &UNK_110610c60;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_2);
  puVar10 = puStack_78;
  func_0x000107c61574(puVar7);
  func_0x000107c61574();
  func_0x000100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar10 + 0x18) = 3;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(undefined **)(puVar10 + 0x20) = puVar9;
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c61174(puStack_b8);
    func_0x000107c61174(puVar9);
    uStack_c0 = 0;
    if (puVar14 != (undefined *)0x0) goto LAB_103121c48;
LAB_103121c7c:
    uVar13 = 0;
  }
  else {
    func_0x000107c61174(puStack_b8);
    func_0x000107c61174(puVar9);
    func_0x000107c5fadc(uStack_c0,puVar15);
    func_0x000107c6142c(puVar15);
    if (puVar14 == (undefined *)0x0) goto LAB_103121c7c;
LAB_103121c48:
    func_0x000107c5fadc(uVar13,puVar14);
    func_0x000107c6142c(puVar14);
  }
  puVar15 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  uVar11 = 0;
  func_0x000100dfe1a0(0);
  puVar7 = puVar10;
  func_0x000107c5fc48(puVar10,uVar11);
  func_0x000107c61574(puVar10);
  func_0x000107c46dd4(puVar15);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar7);
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112f42bf8);
  if (uVar3 == 0) {
    func_0x000107c61170(puStack_b8);
    func_0x000107c61170(puVar9);
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar3 == 0) {
      func_0x000107c61170(puStack_b8);
      func_0x000107c61170(puVar9);
    }
    else {
      func_0x000107c4d068();
      func_0x000107c61180();
      uVar1 = uVar3;
    }
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103121de4; end: 103121ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103121de4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + _DAT_112f42c08);
    if (lVar3 == 0) {
      func_0x000107c61170();
    }
    else {
      puVar1 = &UNK_110610c98;
      func_0x000107c613fc(&UNK_110610c98,0x28,7);
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(long *)(puVar1 + 0x10) = param_2;
      uStack_58 = 0x1031225d4;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000b0c7c;
      puStack_60 = &UNK_110610cb0;
      ppuVar2 = &puStack_78;
      puStack_50 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_50;
      func_0x000107c615f0(lVar3);
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c41864(lVar3);
      func_0x000107c61170(param_2);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 103121ef4; end: 103121f53; -[_TtC38LensCarouselLensApplicatorServicesImpl23LensModalCardController init] */

void FUN_103121ef4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselLensApplicatorServicesImpl.LensModalCardController",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103121f20);
  (*pcVar1)();
}



/* Entry: 103121f54; end: 103121fcb; -[_TtC38LensCarouselLensApplicatorServicesImpl23LensModalCardController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103121f54(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42be0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42be8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42bf8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f42c00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f42c08));
  return;
}



/* Entry: 103121fcc; end: 103121feb;  */

void FUN_103121fcc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b91b0);
  return;
}



/* Entry: 103121fec; end: 10312210f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103121fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c614f0();
  puVar2 = &UNK_110610b80;
  func_0x000107c613fc(&UNK_110610b80,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110610c48;
  func_0x000107c613fc(&UNK_110610c48,0x50,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  *(undefined8 *)(puVar3 + 0x40) = param_6;
  *(undefined8 *)(puVar3 + 0x48) = param_7;
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(param_7);
  func_0x00010090569c(0x103122534,puVar3,uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 103122110; end: 1031221b7;  */

void FUN_103122110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103121618(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61170(param_1);
  }
  (*param_7)();
  return;
}



/* Entry: 1031221b8; end: 1031222a3; -[_TtC38LensCarouselLensApplicatorServicesImpl23LensModalCardController showModalCardForLens:headerId:descriptionId:completion:] */

void FUN_1031221b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  uVar2 = param_2;
  func_0x000107c5faec(param_5);
  puVar1 = &UNK_110610c20;
  func_0x000107c613fc(&UNK_110610c20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103121fec(param_3,param_4,param_2,param_5,uVar2,0x1031225d0,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031222a4; end: 1031223d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031222a4(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112f42c08);
    if (lVar3 == 0) {
      (*param_2)();
      func_0x000107c61170(param_1);
    }
    else {
      puVar1 = &UNK_110610bd0;
      func_0x000107c613fc(&UNK_110610bd0,0x28,7);
      *(long *)(puVar1 + 0x10) = param_1;
      *(code **)(puVar1 + 0x18) = param_2;
      *(undefined8 *)(puVar1 + 0x20) = param_3;
      uStack_68 = 0x103122514;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000b0c7c;
      puStack_70 = &UNK_110610be8;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_60;
      func_0x000107c615f0(lVar3);
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar1);
      func_0x000107c41864(lVar3);
      func_0x000107c61170(param_1);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 1031223d8; end: 1031224fb; -[_TtC38LensCarouselLensApplicatorServicesImpl23LensModalCardController hideModalCardWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031223d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110610b58;
  func_0x000107c613fc(&UNK_110610b58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar3 = &UNK_110610b80;
  func_0x000107c613fc(&UNK_110610b80,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  puVar4 = &UNK_110610ba8;
  func_0x000107c613fc(&UNK_110610ba8,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(code **)(puVar4 + 0x18) = FUN_1031224fc;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x103122508,puVar4,uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031224fc; end: 10312254f;  */

void FUN_1031224fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103122504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103122550; end: 103122583;  */

void FUN_103122550(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103122584; end: 1031225bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122584(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f42c08);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f42c08) = 0;
  func_0x000107c615e8(uVar2);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1031225c0; end: 1031225d7;  */

void FUN_1031225c0(long param_1,long param_2)

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



/* Entry: 1031225d8; end: 10312261b;  */

void FUN_1031225d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10312261c; end: 10312264f;  */

undefined8 FUN_10312261c(void)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  return uStack_28;
}



/* Entry: 103122650; end: 10312289b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103122650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f42cf0;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f42cd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f42ce0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f42ce8) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2);
  func_0x000107c61180();
  func_0x00010312273c();
  func_0x000107c61170(puVar3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return puVar3;
}



/* Entry: 10312289c; end: 103122937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312289c(undefined8 param_1,long param_2)

{
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001000d224c(auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x18))(0,uStack_58,lStack_50);
    func_0x000107c61170(param_2);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 103122938; end: 103122ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122938(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_a8;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined1 auStack_68 [40];
  
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f42cd8);
  func_0x000107c6157c(uVar2);
  func_0x000104875e28(auStack_90);
  func_0x000107c61574(uVar2);
  if (lStack_78 == 0) {
    FUN_103123044(auStack_90);
  }
  else {
    FUN_10312308c(auStack_90,auStack_68);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f42ce8);
    func_0x000107c6157c(uVar2);
    func_0x0001000d224c(&uStack_a8);
    func_0x000107c61574(uVar2);
    uVar2 = uStack_a8;
    func_0x000107c614f0(uStack_a8);
    FUN_1031230a4(auStack_68,auStack_90);
    puVar1 = &UNK_110610d90;
    func_0x000107c613fc(&UNK_110610d90,0x38,7);
    FUN_10312308c(auStack_90,puVar1 + 0x10);
    func_0x00010090569c(FUN_1031230e8,puVar1,uVar2);
    func_0x000107c615e8(uStack_a8);
    func_0x000107c61574(puVar1);
    func_0x0001000834e4(auStack_68);
  }
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103122ae8; end: 103122b0b; -[_TtC38LensCarouselLensApplicatorServicesImpl34LensUIElementsVisibilityController dealloc] */

void FUN_103122ae8(void)

{
  func_0x000107c61174();
  FUN_103122938();
  return;
}



/* Entry: 103122b0c; end: 103122b63; -[_TtC38LensCarouselLensApplicatorServicesImpl34LensUIElementsVisibilityController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122b0c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f42cd8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f42ce0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f42ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f42cf0));
  return;
}



/* Entry: 103122b64; end: 103122baf; -[_TtC38LensCarouselLensApplicatorServicesImpl34LensUIElementsVisibilityController init] */

void FUN_103122b64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselLensApplicatorServicesImpl.LensUIElementsVisibilityController",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103122b90);
  (*pcVar1)();
}



/* Entry: 103122bb0; end: 103122c5f; -[_TtC38LensCarouselLensApplicatorServicesImpl34LensUIElementsVisibilityController showSnapButtonForLens:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122bb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c614f0(uStack_38);
  puVar2 = &UNK_110610d18;
  func_0x000107c613fc(&UNK_110610d18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(0x103123028,puVar2,uVar1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61578(puVar2,2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103122c60; end: 103122d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122c60(long param_1,uint param_2)

{
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000d224c(auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x18))(param_2 & 1,uStack_68,lStack_60);
    func_0x000107c61170(param_1);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 103122d08; end: 103122db7; -[_TtC38LensCarouselLensApplicatorServicesImpl34LensUIElementsVisibilityController hideSnapButtonWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122d08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c614f0(uStack_38);
  puVar2 = &UNK_110610d18;
  func_0x000107c613fc(&UNK_110610d18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(0x10312300c,puVar2,uVar1);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61578(puVar2,2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103122db8; end: 103122dcb; -[_TtC38LensCarouselLensApplicatorServicesImpl34LensUIElementsVisibilityController showAllInterfaceElementsForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  puVar3 = &UNK_110610d68;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_110610d18;
  func_0x000107c613fc(&UNK_110610d18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110610d68,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(0x103122ff0,puVar3,uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103122dcc; end: 103122e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122dcc(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f42cd8);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(auStack_80);
    func_0x000107c61574(uVar1);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 8))(param_3 & 1,param_2,uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 103122e8c; end: 103122e9f; -[_TtC38LensCarouselLensApplicatorServicesImpl34LensUIElementsVisibilityController hideAllInterfaceElementsForLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  
  puVar3 = &UNK_110610d40;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_110610d18;
  func_0x000107c613fc(&UNK_110610d18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110610d40,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(FUN_103122fa8,puVar3,uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103122ea0; end: 103122fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103122ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_58;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_110610d18;
  func_0x000107c613fc(&UNK_110610d18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined **)(param_4 + 0x10) = puVar2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(param_5,param_4,uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103122fa8; end: 103123043;  */

void FUN_103122fa8(void)

{
  long unaff_x20;
  
  FUN_103122dcc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),1);
  return;
}



/* Entry: 103123044; end: 10312308b;  */

undefined8 FUN_103123044(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f42d20;
  func_0x0001000285a8(0x112f42d20,&UNK_10db8f6e8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10312308c; end: 1031230a3;  */

undefined8 * FUN_10312308c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1031230a4; end: 1031230e7;  */

long FUN_1031230a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1031230e8; end: 10312311b;  */

void FUN_1031230e8(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(puVar2,uVar3);
  (**(code **)(lVar1 + 0x18))(0,uVar3,lVar1);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(puVar2,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010450e7f8();
  uVar3 = *puVar2;
  pcVar4 = *(code **)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  (*pcVar4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10312311c; end: 1031231eb;  */

undefined1  [16] FUN_10312311c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x61635f6c61646f6d;
  func_0x000107c5fadc(0x61635f6c61646f6d,0xef656e6f645f6472);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f126b00);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031231ec);
  (*pcVar1)();
}



/* Entry: 1031231ec; end: 1031231f7; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031231ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d28;
  func_0x000107c61428(param_1 + _DAT_112f42d28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031231f8; end: 103123203; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031231f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d28;
  func_0x000107c61428(param_1 + _DAT_112f42d28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123204; end: 10312320f; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123204(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d30;
  func_0x000107c61428(param_1 + _DAT_112f42d30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123210; end: 10312321b; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123210(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d30;
  func_0x000107c61428(param_1 + _DAT_112f42d30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10312321c; end: 103123227; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider cameraUIScopedLensProcessingCarouselServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312321c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d38;
  func_0x000107c61428(param_1 + _DAT_112f42d38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123228; end: 103123233; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setCameraUIScopedLensProcessingCarouselServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d38;
  func_0x000107c61428(param_1 + _DAT_112f42d38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123234; end: 10312323f; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider lensCTAButtonControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d40;
  func_0x000107c61428(param_1 + _DAT_112f42d40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123240; end: 10312324b; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setLensCTAButtonControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123240(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d40;
  func_0x000107c61428(param_1 + _DAT_112f42d40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10312324c; end: 103123257; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider lensModalCardControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312324c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d48;
  func_0x000107c61428(param_1 + _DAT_112f42d48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123258; end: 103123263; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setLensModalCardControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d48;
  func_0x000107c61428(param_1 + _DAT_112f42d48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123264; end: 10312326f; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider lensUIElementsVisibilityControllerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d50;
  func_0x000107c61428(param_1 + _DAT_112f42d50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123270; end: 10312327b; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setLensUIElementsVisibilityControllerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d50;
  func_0x000107c61428(param_1 + _DAT_112f42d50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10312327c; end: 103123287; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider lensCarouselLensDownloadingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312327c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d58;
  func_0x000107c61428(param_1 + _DAT_112f42d58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123288; end: 103123293; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setLensCarouselLensDownloadingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d58;
  func_0x000107c61428(param_1 + _DAT_112f42d58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123294; end: 10312329f; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider lensDataConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d60;
  func_0x000107c61428(param_1 + _DAT_112f42d60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031232a0; end: 1031232ab; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setLensDataConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031232a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d60;
  func_0x000107c61428(param_1 + _DAT_112f42d60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031232ac; end: 1031232b7; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider lensValidatingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031232ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42d68;
  func_0x000107c61428(param_1 + _DAT_112f42d68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031232b8; end: 1031232fb;  */

void FUN_1031232b8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031232fc; end: 103123307; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setLensValidatingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031232fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42d68;
  func_0x000107c61428(param_1 + _DAT_112f42d68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123308; end: 10312335b;  */

void FUN_103123308(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10312335c; end: 1031236a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10312335c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f0d0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3f29c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ae18();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4b29c();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c4b4e0();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c4ae9c();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                lVar1 = lVar6;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c4b024();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  lVar1 = lVar7;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c4b52c();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = 0;
                    FUN_10311e460();
                    func_0x000107c613fc();
                    *(long *)(lVar10 + 0x10) = lVar3;
                    *(long *)(lVar10 + 0x18) = lVar4;
                    *(long *)(lVar10 + 0x20) = lVar5;
                    *(long *)(lVar10 + 0x28) = lVar6;
                    *(long *)(lVar10 + 0x30) = lVar7;
                    *(long *)(lVar10 + 0x38) = lVar8;
                    *(long *)(lVar10 + 0x40) = lVar9;
                    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f42d70);
                    *(long *)(unaff_x20 + _DAT_112f42d70) = lVar10;
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174(lVar5);
                    func_0x000107c61174(lVar6);
                    func_0x000107c61174(lVar7);
                    func_0x000107c61174(lVar8);
                    func_0x000107c61174(lVar9);
                    func_0x000107c6157c(lVar10);
                    func_0x000107c61574(uVar11);
                    func_0x00010311dfa8();
                    func_0x000107c61170(lVar1);
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar5);
                    func_0x000107c61170(lVar6);
                    func_0x000107c61170(lVar7);
                    func_0x000107c61170(lVar8);
                    func_0x000107c61170(lVar9);
                    func_0x000107c61574(lVar10);
                    return;
                  }
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar7);
                  lVar1 = lVar8;
                }
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1031236a8; end: 103123733; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider provide] */

void FUN_1031236a8(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_10312335c();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensCarouselLensApplicatorServicesImpl/SCLensCarouselLensApplicatorOnCameraScopeServiceProvider.swift"
                      ,0x65,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103123734);
  (*pcVar1)();
}



/* Entry: 103123734; end: 103123767; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider __safeProvide] */

void FUN_103123734(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10312335c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103123768; end: 1031237ab; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider end] */

void FUN_103123768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031237ac; end: 103123c27;  */

void FUN_1031237ac(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0f0da70)) ||
             (func_0x000107c605b8(0xd00000000000002c,0x800000010f0f2590,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c530fc();
          }
          else {
            uVar2 = 0xd00000000000001f;
            if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef0ed9460)) ||
               (func_0x000107c605b8(0xd00000000000001f,0x800000010f126ba0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c00();
            }
            else {
              if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0ed9440)) {
                uVar2 = 0xd00000000000001f;
                func_0x000107c605b8(0xd00000000000001f,0x800000010f126bc0,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef0ed9420)) ||
                     (func_0x000107c605b8(0xd00000000000002a,0x800000010f126be0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55ed8();
                  }
                  else {
                    uVar2 = 0xd000000000000023;
                    if (((param_2 == -0x2fffffffffffffdd) && (param_3 == -0x7ffffffef0f24330)) ||
                       (func_0x000107c605b8(0xd000000000000023,0x800000010f0dbcd0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c55c48();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10dca60)) ||
                         (func_0x000107c605b8(0xd000000000000016,0x800000010ef235a0,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c55cdc();
                      }
                      else {
                        if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0ed93f0)) {
                          uVar2 = 0;
                          func_0x000107c605b8(0xd000000000000016,0x800000010f126c10,param_2,param_3,
                                              0);
                          if ((uVar2 & 1) == 0) {
                            func_0x000107c602fc(0x15);
                            func_0x000107c6142c(0xe000000000000000);
                            func_0x000107c5fb78(param_2,param_3);
                            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                0x800000010ef0fc20,
                                                "LensCarouselLensApplicatorServicesImpl/SCLensCarouselLensApplicatorOnCameraScopeServiceProvider.swift"
                                                ,0x65,2,0x4e,0);
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x103123c28);
                            (*pcVar1)();
                          }
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c55ef8();
                      }
                    }
                  }
                  goto LAB_103123840;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55dc4();
            }
          }
          goto LAB_103123840;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103123840;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103123840:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103123c28; end: 103123cd3; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider setValue:forIvarName:] */

void FUN_103123c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1031237ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103123cd4; end: 103123dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123cd4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f42d28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42d68,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f42d70) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103123dd4; end: 103123df3; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider init] */

void FUN_103123dd4(void)

{
  FUN_103123cd4();
  return;
}



/* Entry: 103123df4; end: 103123e27;  */

void FUN_103123df4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103123e28; end: 103123edf; -[SCLensCarouselLensApplicatorOnCameraScopeServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123e28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f42d28);
  func_0x000107c61610(param_1 + _DAT_112f42d30);
  func_0x000107c61610(param_1 + _DAT_112f42d38);
  func_0x000107c61610(param_1 + _DAT_112f42d40);
  func_0x000107c61610(param_1 + _DAT_112f42d48);
  func_0x000107c61610(param_1 + _DAT_112f42d50);
  func_0x000107c61610(param_1 + _DAT_112f42d58);
  func_0x000107c61610(param_1 + _DAT_112f42d60);
  func_0x000107c61610(param_1 + _DAT_112f42d68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f42d70));
  return;
}



/* Entry: 103123ee0; end: 103123eff;  */

void FUN_103123ee0(void)

{
  func_0x000107c61168(&PTR_PTR_112f42db8);
  return;
}



/* Entry: 103123f00; end: 103123f0b; -[SCLensCTAButtonControllerServicesEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e58;
  func_0x000107c61428(param_1 + _DAT_112f42e58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123f0c; end: 103123f17; -[SCLensCTAButtonControllerServicesEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e58;
  func_0x000107c61428(param_1 + _DAT_112f42e58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123f18; end: 103123f23; -[SCLensCTAButtonControllerServicesEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e60;
  func_0x000107c61428(param_1 + _DAT_112f42e60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123f24; end: 103123f2f; -[SCLensCTAButtonControllerServicesEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e60;
  func_0x000107c61428(param_1 + _DAT_112f42e60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123f30; end: 103123f3b; -[SCLensCTAButtonControllerServicesEntryPoint lensesFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e68;
  func_0x000107c61428(param_1 + _DAT_112f42e68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123f3c; end: 103123f47; -[SCLensCTAButtonControllerServicesEntryPoint setLensesFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e68;
  func_0x000107c61428(param_1 + _DAT_112f42e68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123f48; end: 103123f53; -[SCLensCTAButtonControllerServicesEntryPoint lensCTACarouselServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e70;
  func_0x000107c61428(param_1 + _DAT_112f42e70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123f54; end: 103123f5f; -[SCLensCTAButtonControllerServicesEntryPoint setLensCTACarouselServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e70;
  func_0x000107c61428(param_1 + _DAT_112f42e70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123f60; end: 103123f6b; -[SCLensCTAButtonControllerServicesEntryPoint ctaHandlingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e78;
  func_0x000107c61428(param_1 + _DAT_112f42e78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123f6c; end: 103123f77; -[SCLensCTAButtonControllerServicesEntryPoint setCtaHandlingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e78;
  func_0x000107c61428(param_1 + _DAT_112f42e78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123f78; end: 103123f83; -[SCLensCTAButtonControllerServicesEntryPoint lensURLBrowsingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e80;
  func_0x000107c61428(param_1 + _DAT_112f42e80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123f84; end: 103123f8f; -[SCLensCTAButtonControllerServicesEntryPoint setLensURLBrowsingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e80;
  func_0x000107c61428(param_1 + _DAT_112f42e80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123f90; end: 103123f9b; -[SCLensCTAButtonControllerServicesEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e88;
  func_0x000107c61428(param_1 + _DAT_112f42e88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123f9c; end: 103123fa7; -[SCLensCTAButtonControllerServicesEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e88;
  func_0x000107c61428(param_1 + _DAT_112f42e88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103123fa8; end: 103123fb3; -[SCLensCTAButtonControllerServicesEntryPoint miniCameraActivationStateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123fa8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e90;
  func_0x000107c61428(param_1 + _DAT_112f42e90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123fb4; end: 103123ff7;  */

void FUN_103123fb4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103123ff8; end: 103124003; -[SCLensCTAButtonControllerServicesEntryPoint setMiniCameraActivationStateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103123ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e90;
  func_0x000107c61428(param_1 + _DAT_112f42e90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103124004; end: 103124057;  */

void FUN_103124004(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103124058; end: 10312409f; -[SCLensCTAButtonControllerServicesEntryPoint lensCTAButtonControllerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103124058(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f42e98;
  func_0x000107c61428(param_1 + _DAT_112f42e98,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031240a0; end: 103124103; -[SCLensCTAButtonControllerServicesEntryPoint setLensCTAButtonControllerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031240a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f42e98;
  func_0x000107c61428(param_1 + _DAT_112f42e98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103124104; end: 103124687;  */

/* WARNING: Possible PIC construction at 0x00010312426c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103124298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103124408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031244bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031244cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031244dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031244ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031244fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312450c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312462c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312463c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312464c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312465c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031245fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312460c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312461c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031245cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031245dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312459c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031245ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312457c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312458c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010312456c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103124590) */
/* WARNING: Removing unreachable block (ram,0x000103124580) */
/* WARNING: Removing unreachable block (ram,0x0001031245b0) */
/* WARNING: Removing unreachable block (ram,0x0001031245a0) */
/* WARNING: Removing unreachable block (ram,0x0001031245e0) */
/* WARNING: Removing unreachable block (ram,0x0001031245d0) */
/* WARNING: Removing unreachable block (ram,0x000103124620) */
/* WARNING: Removing unreachable block (ram,0x000103124610) */
/* WARNING: Removing unreachable block (ram,0x000103124600) */
/* WARNING: Removing unreachable block (ram,0x000103124660) */
/* WARNING: Removing unreachable block (ram,0x000103124650) */
/* WARNING: Removing unreachable block (ram,0x000103124640) */
/* WARNING: Removing unreachable block (ram,0x000103124630) */
/* WARNING: Removing unreachable block (ram,0x000103124510) */
/* WARNING: Removing unreachable block (ram,0x000103124500) */
/* WARNING: Removing unreachable block (ram,0x0001031244f0) */
/* WARNING: Removing unreachable block (ram,0x0001031244e0) */
/* WARNING: Removing unreachable block (ram,0x0001031244d0) */
/* WARNING: Removing unreachable block (ram,0x0001031244c0) */
/* WARNING: Removing unreachable block (ram,0x00010312440c) */
/* WARNING: Removing unreachable block (ram,0x00010312429c) */
/* WARNING: Removing unreachable block (ram,0x000103124270) */
/* WARNING: Removing unreachable block (ram,0x000103124570) */

void FUN_103124104(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c4b59c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    else {
      lVar4 = unaff_x20;
      func_0x000107c4ae20();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c40df8();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar6 = unaff_x20;
          func_0x000107c4b4e8();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4af24();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar2);
              lVar2 = lVar3;
            }
            else {
              lVar6 = unaff_x20;
              func_0x000107c4cf58();
              func_0x000107c61180();
              if (lVar6 == 0) {
                func_0x000107c61170(lVar2);
                lVar2 = lVar3;
              }
              else {
                func_0x000107c4ae1c();
                func_0x000107c61180();
                if (unaff_x20 != 0) {
                  FUN_10311def0();
                  func_0x000107c613fc();
                  func_0x000107c5d198();
                  func_0x000107c61180();
                  func_0x000107c40e10();
                  func_0x000107c61180();
                  if (lVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x103124688);
                    (*pcVar1)();
                  }
                  func_0x000107c4ae28();
                  func_0x000107c61180();
                  func_0x000107c4ae24();
                  func_0x000107c61180();
                  lVar2 = lVar5;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103124688; end: 10312468f;  */

void FUN_103124688(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110610ab8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 103124690; end: 1031246b7; -[SCLensCTAButtonControllerServicesEntryPoint begin] */

void FUN_103124690(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103124104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031246b8; end: 103124be3; -[SCLensCTAButtonControllerServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031246b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112f42ea0);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    func_0x00010311de08();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_10312474c;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_10312474c:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103124be4; end: 103124c8f; -[SCLensCTAButtonControllerServicesEntryPoint setValue:forIvarName:] */

void FUN_103124be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x00010312476c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103124c90; end: 103124d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103124c90(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f42e58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42e60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42e68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42e70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42e78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42e80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42e88,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f42e90,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f42e98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f42ea0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103124d88; end: 103124da7; -[SCLensCTAButtonControllerServicesEntryPoint init] */

void FUN_103124d88(void)

{
  FUN_103124c90();
  return;
}



/* Entry: 103124da8; end: 103124ddb;  */

void FUN_103124da8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103124ddc; end: 103124e93; -[SCLensCTAButtonControllerServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103124ddc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f42e58);
  func_0x000107c61610(param_1 + _DAT_112f42e60);
  func_0x000107c61610(param_1 + _DAT_112f42e68);
  func_0x000107c61610(param_1 + _DAT_112f42e70);
  func_0x000107c61610(param_1 + _DAT_112f42e78);
  func_0x000107c61610(param_1 + _DAT_112f42e80);
  func_0x000107c61610(param_1 + _DAT_112f42e88);
  func_0x000107c61610(param_1 + _DAT_112f42e90);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f42e98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f42ea0));
  return;
}


