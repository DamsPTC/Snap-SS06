/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010f26d8; end: 1010f2727;  */

void FUN_1010f26d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010f2ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010f2728; end: 1010f2773;  */

void FUN_1010f2728(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1010f27d8(&uStack_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
  }
  return;
}



/* Entry: 1010f2774; end: 1010f27d7;  */

ulong FUN_1010f2774(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1010f27d8; end: 1010f2adf;  */

/* WARNING: Removing unreachable block (ram,0x0001010f28d8) */
/* WARNING: Removing unreachable block (ram,0x0001010f2a08) */
/* WARNING: Removing unreachable block (ram,0x0001010f2968) */
/* WARNING: Removing unreachable block (ram,0x0001010f29b8) */
/* WARNING: Removing unreachable block (ram,0x0001010f2a68) */
/* WARNING: Removing unreachable block (ram,0x0001010f2920) */

void FUN_1010f27d8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  double dVar10;
  undefined1 auStack_90 [7];
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined7 uStack_87;
  
  lVar5 = 0x112d5d9c0;
  func_0x0001000285a8(0x112d5d9c0,&UNK_10d9241b0);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1010f2ae0();
  puVar7 = &UNK_1103842c0;
  func_0x000107c606e0(auStack_90 + -extraout_x8,&UNK_1103842c0,&UNK_1103842c0,lVar6,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_89 = 0;
    func_0x0001010f2b20();
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar1 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 1;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar2 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 2;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar3 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 3;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar4 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 4;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    dVar10 = 0.0;
    if ((double)CONCAT71(uStack_87,uStack_88) != 0.0) {
      dVar10 = ((double)CONCAT71(uStack_87,uStack_88) * 3.141592653589793) / 180.0;
    }
    uStack_88 = 5;
    puVar8 = &uStack_88;
    lVar6 = lVar5;
    func_0x000107c604f4();
    (**(code **)(lVar9 + 8))(auStack_90 + -extraout_x8,lVar5);
    func_0x0001000834e4(param_2);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = dVar10;
    param_1[5] = puVar8;
    param_1[6] = lVar6;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1010f2ae0; end: 1010f2b5f;  */

void FUN_1010f2ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9242b4;
  func_0x000107c61520(&UNK_10d9242b4,&UNK_1103842c0);
  puRam0000000112d5d9c8 = puVar1;
  return;
}



/* Entry: 1010f2b60; end: 1010f2cc7;  */

int FUN_1010f2b60(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1010f2bdc;
        goto LAB_1010f2bc0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010f2bc0:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1010f2bdc:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010f2cc8; end: 1010f2d07;  */

void FUN_1010f2cc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92428c;
  func_0x000107c61520(&UNK_10d92428c,&UNK_1103842c0);
  puRam0000000112d5d9d8 = puVar1;
  return;
}



/* Entry: 1010f2d08; end: 1010f2d0b;  */

void FUN_1010f2d08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9241ec;
  func_0x000107c61520(&UNK_10d9241ec,&UNK_1103842c0);
  puRam0000000112d5d9e0 = puVar1;
  return;
}



/* Entry: 1010f2d0c; end: 1010f2d4b;  */

void FUN_1010f2d0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9241ec;
  func_0x000107c61520(&UNK_10d9241ec,&UNK_1103842c0);
  puRam0000000112d5d9e0 = puVar1;
  return;
}



/* Entry: 1010f2d4c; end: 1010f2d4f;  */

void FUN_1010f2d4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9241c4;
  func_0x000107c61520(&UNK_10d9241c4,&UNK_1103842c0);
  puRam0000000112d5d9e8 = puVar1;
  return;
}



/* Entry: 1010f2d50; end: 1010f2d8f;  */

void FUN_1010f2d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5d9e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9241c4;
  func_0x000107c61520(&UNK_10d9241c4,&UNK_1103842c0);
  puRam0000000112d5d9e8 = puVar1;
  return;
}



/* Entry: 1010f2d90; end: 1010f2fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f2d90(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar1 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((*(char *)(unaff_x20 + _DAT_112d5dae0) == '\x01') &&
     (puVar7 = (undefined *)0x0, param_1[4] != 0)) {
    func_0x000107c5edd0(puVar11,param_1[3]);
    puVar7 = (undefined *)0x1;
    puVar2 = puVar11;
    (**(code **)(lVar12 + 0x30))(puVar11,1,lVar1);
    if ((int)puVar2 != 1) {
      lVar5 = lVar10;
      (**(code **)(lVar12 + 0x20))(lVar10,puVar11,lVar1);
      func_0x000107c5ed90();
      lVar6 = lVar5;
      func_0x000107c309fc();
      func_0x000107c61170(lVar5);
      if ((int)lVar6 == 0) {
        func_0x0001010f317c(param_1);
      }
      else {
        func_0x0001010f2ff0(param_1,lVar10);
      }
      (**(code **)(lVar12 + 8))(lVar10,lVar1);
      return;
    }
    func_0x0001000293e4(puVar11);
  }
  ppuVar3 = (undefined **)*param_1;
  if (ppuVar3 != (undefined **)0x0) {
    func_0x000107c3e318();
    func_0x000107c61180();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x000107c5faec();
      puVar8 = puVar7;
      func_0x000107c61170(ppuVar3);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e45458;
      func_0x000107c5faec();
      if (ppuVar3 == ppuVar4 && puVar8 == puVar7) {
        func_0x000107c6142c(puVar7);
        puVar7 = puVar8;
      }
      else {
        puVar9 = puVar8;
        func_0x000107c605b8();
        func_0x000107c6142c(puVar8);
        if (((ulong)ppuVar3 & 1) == 0) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e35d58;
          func_0x000107c5faec();
          if ((ppuVar3 == ppuVar4) && (puVar9 == puVar7)) {
            func_0x000107c6142c(puVar9);
            func_0x000107c6142c(puVar7);
          }
          else {
            func_0x000107c605b8();
            func_0x000107c6142c(puVar9);
            func_0x000107c6142c(puVar7);
            if (((ulong)ppuVar3 & 1) == 0) {
              return;
            }
          }
          FUN_1010f32a8(param_1);
          return;
        }
      }
      func_0x000107c6142c(puVar7);
      func_0x0001010f317c(param_1);
    }
  }
  return;
}



/* Entry: 1010f2ff0; end: 1010f32a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f2ff0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d5dac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5ed90();
    puVar3 = &UNK_1103843a0;
    func_0x000107c613fc(&UNK_1103843a0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uStack_48 = *param_1;
    uStack_58 = param_1[2];
    uStack_60 = param_1[1];
    uStack_68 = param_1[4];
    uStack_70 = param_1[3];
    puVar4 = &UNK_1103843c8;
    func_0x000107c613fc(&UNK_1103843c8,0x40,7);
    uVar6 = *param_1;
    uVar8 = param_1[3];
    uVar7 = param_1[2];
    *(undefined8 *)(puVar4 + 0x20) = param_1[1];
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x30) = uVar8;
    *(undefined8 *)(puVar4 + 0x28) = uVar7;
    *(undefined8 *)(puVar4 + 0x38) = param_1[4];
    pcStack_80 = FUN_1010f428c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    uStack_90 = 0x1010f39c4;
    puStack_88 = &UNK_1103843e0;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_78;
    FUN_1010f42b4(&uStack_48,auStack_b0,0x112d5db10,&UNK_10d924330);
    func_0x000100402194(&uStack_60,auStack_b0);
    FUN_1010f42b4(&uStack_70,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c61574(puVar3);
    func_0x000107c4462c(lVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1010f32a8; end: 1010f34ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f32a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar10 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x000107c414c4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5d7e0();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        func_0x000107c5faec(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c5edd0(puVar6,lVar2,puVar7);
        func_0x000107c6142c(puVar7);
        puVar4 = puVar6;
        (**(code **)(lVar11 + 0x30))(puVar6,1,lVar1);
        if ((int)puVar4 == 1) {
          func_0x0001000293e4(puVar6);
        }
        else {
          uVar5 = uVar10;
          (**(code **)(lVar11 + 0x20))(uVar10,puVar6,lVar1);
          func_0x000107c5edc8();
          if (puVar6 != (undefined1 *)0x0) {
            puVar4 = puVar6;
            puVar8 = puVar6;
            func_0x000107c6142c();
            uVar5 = uVar5 & 0xffffffffffff;
            if (((ulong)puVar6 & 0x2000000000000000) != 0) {
              uVar5 = (ulong)puVar6 >> 0x38 & 0xf;
            }
            if ((uVar5 != 0) && (func_0x000107c5edbc(), puVar8 != (undefined1 *)0x0)) {
              puVar6 = puVar8;
              func_0x000107c6142c();
              uVar5 = (ulong)puVar4 & 0xffffffffffff;
              if (((ulong)puVar8 & 0x2000000000000000) != 0) {
                uVar5 = (ulong)puVar8 >> 0x38 & 0xf;
              }
              if (uVar5 != 0) {
                func_0x000107c5ed90();
                puVar4 = puVar6;
                func_0x000107c309fc();
                func_0x000107c61170(puVar6);
                if ((int)puVar4 != 0) {
                  FUN_1010f2ff0(param_1,uVar10);
                  (**(code **)(lVar11 + 8))(uVar10,lVar1);
                  return;
                }
              }
            }
          }
          (**(code **)(lVar11 + 8))(uVar10,lVar1);
        }
      }
    }
  }
  lVar1 = param_1[1];
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d5dac8) + 0x18);
  func_0x000107c5fadc(lVar1,param_1[2]);
  func_0x000104eba074(uVar9,lVar1,1);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1010f34f0; end: 1010f37bb;  */

void FUN_1010f34f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    pcStack_b0 = FUN_1010f37bc;
    puStack_a8 = (undefined *)0x0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_10006eb60;
    puStack_b8 = &UNK_110384408;
    ppuVar2 = &puStack_d0;
    func_0x000107c60bc4();
    puVar3 = puStack_a8;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    uStack_78 = *param_3;
    uStack_88 = param_3[2];
    uStack_90 = param_3[1];
    uStack_98 = param_3[4];
    uStack_a0 = param_3[3];
    puVar3 = &UNK_110384440;
    func_0x000107c613fc(&UNK_110384440,0x40,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    uVar8 = *param_3;
    uVar10 = param_3[3];
    uVar9 = param_3[2];
    *(undefined8 *)(puVar3 + 0x20) = param_3[1];
    *(undefined8 *)(puVar3 + 0x18) = uVar8;
    *(undefined8 *)(puVar3 + 0x30) = uVar10;
    *(undefined8 *)(puVar3 + 0x28) = uVar9;
    *(undefined8 *)(puVar3 + 0x38) = param_3[4];
    puVar4 = &UNK_110384468;
    func_0x000107c613fc(&UNK_110384468,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1010f42fc;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_b0 = FUN_1010f4308;
    puStack_d0 = puVar1;
    uStack_c8 = 0x42000000;
    puStack_c0 = (undefined *)0x1010f3860;
    puStack_b8 = &UNK_110384480;
    ppuVar5 = &puStack_d0;
    puStack_a8 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_a8;
    func_0x000107c6157c(param_2);
    FUN_1010f42b4(&uStack_78,auStack_e0,0x112d5db10,&UNK_10d924330);
    func_0x000100402194(&uStack_90,auStack_e0);
    FUN_1010f42b4(&uStack_a0,auStack_e0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_1103844b8;
    func_0x000107c613fc(&UNK_1103844b8,0x40,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    uVar8 = *param_3;
    uVar10 = param_3[3];
    uVar9 = param_3[2];
    *(undefined8 *)(puVar4 + 0x20) = param_3[1];
    *(undefined8 *)(puVar4 + 0x18) = uVar8;
    *(undefined8 *)(puVar4 + 0x30) = uVar10;
    *(undefined8 *)(puVar4 + 0x28) = uVar9;
    *(undefined8 *)(puVar4 + 0x38) = param_3[4];
    puVar6 = &UNK_1103844e0;
    func_0x000107c613fc(&UNK_1103844e0,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1010f4364;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_b0 = FUN_1010f4370;
    puStack_d0 = puVar1;
    uStack_c8 = 0x42000000;
    puStack_c0 = (undefined *)0x100e27b38;
    puStack_b8 = &UNK_1103844f8;
    ppuVar7 = &puStack_d0;
    puStack_a8 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar1 = puStack_a8;
    func_0x000107c6157c(param_2);
    FUN_1010f42b4(&uStack_78,auStack_e0,0x112d5db10,&UNK_10d924330);
    func_0x000100402194(&uStack_90,auStack_e0);
    FUN_1010f42b4(&uStack_a0,auStack_e0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c61574(puVar1);
    func_0x000107c4c654(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1010f37bc; end: 1010f37bf;  */

void FUN_1010f37bc(void)

{
  return;
}



/* Entry: 1010f37c0; end: 1010f3a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f37c0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + _DAT_112d5dac8);
    func_0x000107c6157c(lVar3);
    func_0x000107c61170(param_2);
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(param_3 + 0x10));
    func_0x000104eba074(uVar2,uVar1,1);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1010f3a14; end: 1010f4017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f3a14(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  long extraout_x12;
  code *pcVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long alStack_130 [7];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar1 + -8);
  lVar15 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = auStack_f0 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar14 - extraout_x8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar12 - extraout_x12;
  lVar2 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar13 = (undefined *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pcVar9 = *(code **)(lVar16 + 0x38);
  (*pcVar9)(lVar17,1,1,lVar1);
  (*pcVar9)(lVar12,1,1,lVar1);
  lVar2 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar11,1,1,lVar2);
  puVar13[-8] = 0;
  *(undefined8 *)(puVar13 + -0x10) = 0;
  *(undefined8 *)(puVar13 + -0x18) = 0;
  *(undefined8 *)(puVar13 + -0x20) = 0;
  *(undefined8 *)(puVar13 + -0x28) = 0;
  *(undefined8 *)(puVar13 + -0x30) = 0;
  *(undefined8 *)(puVar13 + -0x38) = 0;
  *(long *)(puVar13 + -0x40) = lVar11;
  func_0x000104638e24(puVar13,9,lVar17,0,lVar12,0,0,0,0);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90();
  puVar3 = PTR_PTR_1126ae560;
  puStack_e8 = puVar13;
  func_0x000107c610f8(PTR_PTR_1126ae560);
  func_0x000107c453e4();
  puVar4 = puVar3;
  func_0x000107c43bf4();
  func_0x000107c61180();
  puVar13 = &UNK_1103843a0;
  func_0x000107c613fc(&UNK_1103843a0,0x18,7);
  func_0x000107c61614(puVar13 + 0x10,unaff_x20);
  uStack_68 = *param_1;
  uStack_78 = param_1[2];
  uStack_80 = param_1[1];
  uStack_88 = param_1[4];
  uStack_90 = param_1[3];
  (**(code **)(lVar16 + 0x10))(puVar14,param_2,lVar1);
  uVar8 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar10 = uVar8 + 0x40 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &UNK_110384530;
  func_0x000107c613fc(&UNK_110384530,uVar10 + lVar15,uVar8 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar13;
  uVar7 = *param_1;
  uVar19 = param_1[3];
  uVar18 = param_1[2];
  *(undefined8 *)(puVar5 + 0x20) = param_1[1];
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined8 *)(puVar5 + 0x30) = uVar19;
  *(undefined8 *)(puVar5 + 0x28) = uVar18;
  *(undefined8 *)(puVar5 + 0x38) = param_1[4];
  (**(code **)(lVar16 + 0x20))(puVar5 + uVar10,puVar14,lVar1);
  pcStack_a0 = FUN_1010f4390;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_100e38b5c;
  puStack_a8 = &UNK_110384548;
  ppuVar6 = &puStack_c0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar13 = puStack_98;
  func_0x000100402194(&uStack_80,auStack_d0);
  FUN_1010f42b4(&uStack_68,auStack_d0,0x112d5db10,&UNK_10d924330);
  FUN_1010f42b4(&uStack_90,auStack_d0,0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c61574(puVar13);
  func_0x000107c5dc64(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar4);
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112d5dab0) + _DAT_1130385c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar13 = puStack_e8;
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4d068();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      uVar7 = 0;
      func_0x0001000956f0(0);
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar5 = puVar13;
      func_0x000103c5d254(puVar13,puVar3,lVar1,unaff_x20,0,0,0,0);
      func_0x000107c61170(uVar7);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d5daa8));
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar1);
      puVar3 = puVar5;
      goto LAB_1010f3e48;
    }
  }
  func_0x000107c61170(puVar13);
LAB_1010f3e48:
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1010f4018; end: 1010f40ff;  */

/* WARNING: Possible PIC construction at 0x0001010f40b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f40e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010f40bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4018(long param_1,long param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  if ((param_1 == 0) || (param_2 != 0)) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    func_0x000107c6157c(*(undefined8 *)(param_3 + _DAT_112d5dac8));
  }
  else {
    param_3 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010f4100; end: 1010f415f; -[_TtC27SCLensTappableLinkApiPlugin23LensTappableLinkWebView init] */

void FUN_1010f4100(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensTappableLinkApiPlugin.LensTappableLinkWebView",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f412c);
  (*pcVar1)();
}



/* Entry: 1010f4160; end: 1010f41e7; -[_TtC27SCLensTappableLinkApiPlugin23LensTappableLinkWebView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4160(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5daa8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5dab0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5dab8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5dac0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5dac8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5dad0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d5dad8));
  return;
}



/* Entry: 1010f41e8; end: 1010f4207;  */

void FUN_1010f41e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127af780);
  return;
}



/* Entry: 1010f4208; end: 1010f428b; -[_TtC27SCLensTappableLinkApiPlugin23LensTappableLinkWebView webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001010f4244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010f4248) */
/* WARNING: Removing unreachable block (ram,0x0001010f4264) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4208(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1010f428c; end: 1010f42b3;  */

void FUN_1010f428c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    pcStack_b0 = FUN_1010f37bc;
    puStack_a8 = (undefined *)0x0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_10006eb60;
    puStack_b8 = &UNK_110384408;
    ppuVar3 = &puStack_d0;
    func_0x000107c60bc4();
    puVar4 = puStack_a8;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    uStack_78 = *puVar1;
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x30);
    puVar4 = &UNK_110384440;
    func_0x000107c613fc(&UNK_110384440,0x40,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar9;
    uVar10 = *puVar1;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(puVar4 + 0x18) = uVar10;
    *(undefined8 *)(puVar4 + 0x30) = uVar12;
    *(undefined8 *)(puVar4 + 0x28) = uVar11;
    *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    puVar5 = &UNK_110384468;
    func_0x000107c613fc(&UNK_110384468,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_1010f42fc;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_b0 = FUN_1010f4308;
    puStack_d0 = puVar2;
    uStack_c8 = 0x42000000;
    puStack_c0 = (undefined *)0x1010f3860;
    puStack_b8 = &UNK_110384480;
    ppuVar6 = &puStack_d0;
    puStack_a8 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_a8;
    func_0x000107c6157c(uVar9);
    FUN_1010f42b4(&uStack_78,auStack_e0,0x112d5db10,&UNK_10d924330);
    func_0x000100402194(&uStack_90,auStack_e0);
    FUN_1010f42b4(&uStack_a0,auStack_e0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1103844b8;
    func_0x000107c613fc(&UNK_1103844b8,0x40,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    uVar10 = *puVar1;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(puVar5 + 0x18) = uVar10;
    *(undefined8 *)(puVar5 + 0x30) = uVar12;
    *(undefined8 *)(puVar5 + 0x28) = uVar11;
    *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
    puVar7 = &UNK_1103844e0;
    func_0x000107c613fc(&UNK_1103844e0,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_1010f4364;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_b0 = FUN_1010f4370;
    puStack_d0 = puVar2;
    uStack_c8 = 0x42000000;
    puStack_c0 = (undefined *)0x100e27b38;
    puStack_b8 = &UNK_1103844f8;
    ppuVar8 = &puStack_d0;
    puStack_a8 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar2 = puStack_a8;
    func_0x000107c6157c(uVar9);
    FUN_1010f42b4(&uStack_78,auStack_e0,0x112d5db10,&UNK_10d924330);
    func_0x000100402194(&uStack_90,auStack_e0);
    FUN_1010f42b4(&uStack_a0,auStack_e0,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c61574(puVar2);
    func_0x000107c4c654(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1010f42b4; end: 1010f42fb;  */

undefined8 FUN_1010f42b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1010f42fc; end: 1010f4307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f42fc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + _DAT_112d5dac8);
    func_0x000107c6157c(lVar4);
    func_0x000107c61170(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
    func_0x000104eba074(uVar3,uVar1,1);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1010f4308; end: 1010f4327;  */

void FUN_1010f4308(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010f4328; end: 1010f4363;  */

void FUN_1010f4328(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010f4364; end: 1010f436f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4364(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + _DAT_112d5dac8);
    func_0x000107c6157c(lVar4);
    func_0x000107c61170(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x28));
    func_0x000104eba074(uVar3,uVar1,1);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1010f4370; end: 1010f438f;  */

void FUN_1010f4370(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010f4390; end: 1010f43e3;  */

/* WARNING: Possible PIC construction at 0x0001010f40b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f40e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010f40bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4390(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if ((param_1 == 0) || (param_2 != 0)) {
    func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0,
                        unaff_x20 + (uVar2 + 0x40 & (uVar2 ^ 0xffffffffffffffff)));
    lVar1 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c6157c(*(undefined8 *)(lVar1 + _DAT_112d5dac8));
  }
  else {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1010f43e4; end: 1010f4403;  */

void FUN_1010f43e4(long param_1,long param_2)

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



/* Entry: 1010f4404; end: 1010f444f;  */

void FUN_1010f4404(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010f4450; end: 1010f445b; -[SCLensTappableLinkApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4450(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbc0;
  func_0x000107c61428(param_1 + _DAT_112d5dbc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f445c; end: 1010f4467; -[SCLensTappableLinkApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f445c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbc0;
  func_0x000107c61428(param_1 + _DAT_112d5dbc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f4468; end: 1010f4473; -[SCLensTappableLinkApiPluginEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4468(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbc8;
  func_0x000107c61428(param_1 + _DAT_112d5dbc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f4474; end: 1010f447f; -[SCLensTappableLinkApiPluginEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4474(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbc8;
  func_0x000107c61428(param_1 + _DAT_112d5dbc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f4480; end: 1010f448b; -[SCLensTappableLinkApiPluginEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4480(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbd0;
  func_0x000107c61428(param_1 + _DAT_112d5dbd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f448c; end: 1010f4497; -[SCLensTappableLinkApiPluginEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f448c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbd0;
  func_0x000107c61428(param_1 + _DAT_112d5dbd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f4498; end: 1010f44a3; -[SCLensTappableLinkApiPluginEntryPoint lensPreviewConfiguringServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4498(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbd8;
  func_0x000107c61428(param_1 + _DAT_112d5dbd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f44a4; end: 1010f44af; -[SCLensTappableLinkApiPluginEntryPoint setLensPreviewConfiguringServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbd8;
  func_0x000107c61428(param_1 + _DAT_112d5dbd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f44b0; end: 1010f44bb; -[SCLensTappableLinkApiPluginEntryPoint carouselFeatureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbe0;
  func_0x000107c61428(param_1 + _DAT_112d5dbe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f44bc; end: 1010f44c7; -[SCLensTappableLinkApiPluginEntryPoint setCarouselFeatureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbe0;
  func_0x000107c61428(param_1 + _DAT_112d5dbe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f44c8; end: 1010f44d3; -[SCLensTappableLinkApiPluginEntryPoint sessionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbe8;
  func_0x000107c61428(param_1 + _DAT_112d5dbe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f44d4; end: 1010f44df; -[SCLensTappableLinkApiPluginEntryPoint setSessionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbe8;
  func_0x000107c61428(param_1 + _DAT_112d5dbe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f44e0; end: 1010f44eb; -[SCLensTappableLinkApiPluginEntryPoint deepLinkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbf0;
  func_0x000107c61428(param_1 + _DAT_112d5dbf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f44ec; end: 1010f44f7; -[SCLensTappableLinkApiPluginEntryPoint setDeepLinkingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbf0;
  func_0x000107c61428(param_1 + _DAT_112d5dbf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f44f8; end: 1010f4503; -[SCLensTappableLinkApiPluginEntryPoint studySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f44f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dbf8;
  func_0x000107c61428(param_1 + _DAT_112d5dbf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f4504; end: 1010f450f; -[SCLensTappableLinkApiPluginEntryPoint setStudySettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4504(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dbf8;
  func_0x000107c61428(param_1 + _DAT_112d5dbf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f4510; end: 1010f451b; -[SCLensTappableLinkApiPluginEntryPoint blizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4510(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dc00;
  func_0x000107c61428(param_1 + _DAT_112d5dc00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010f451c; end: 1010f455f;  */

void FUN_1010f451c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010f4560; end: 1010f456b; -[SCLensTappableLinkApiPluginEntryPoint setBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4560(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dc00;
  func_0x000107c61428(param_1 + _DAT_112d5dc00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f456c; end: 1010f45bf;  */

void FUN_1010f456c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010f45c0; end: 1010f4607; -[SCLensTappableLinkApiPluginEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f45c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5dc08;
  func_0x000107c61428(param_1 + _DAT_112d5dc08,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1010f4608; end: 1010f466b; -[SCLensTappableLinkApiPluginEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f4608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5dc08;
  func_0x000107c61428(param_1 + _DAT_112d5dc08,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010f466c; end: 1010f4a4f;  */

/* WARNING: Possible PIC construction at 0x0001010f4830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f49f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f49b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f49c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f49d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f49e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f49a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f4910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f48f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010f4914) */
/* WARNING: Removing unreachable block (ram,0x0001010f4904) */
/* WARNING: Removing unreachable block (ram,0x0001010f4934) */
/* WARNING: Removing unreachable block (ram,0x0001010f4924) */
/* WARNING: Removing unreachable block (ram,0x0001010f4964) */
/* WARNING: Removing unreachable block (ram,0x0001010f4954) */
/* WARNING: Removing unreachable block (ram,0x0001010f49a4) */
/* WARNING: Removing unreachable block (ram,0x0001010f4994) */
/* WARNING: Removing unreachable block (ram,0x0001010f4984) */
/* WARNING: Removing unreachable block (ram,0x0001010f49e4) */
/* WARNING: Removing unreachable block (ram,0x0001010f49d4) */
/* WARNING: Removing unreachable block (ram,0x0001010f49c4) */
/* WARNING: Removing unreachable block (ram,0x0001010f49b4) */
/* WARNING: Removing unreachable block (ram,0x0001010f4a24) */
/* WARNING: Removing unreachable block (ram,0x0001010f4a14) */
/* WARNING: Removing unreachable block (ram,0x0001010f4a04) */
/* WARNING: Removing unreachable block (ram,0x0001010f49f4) */
/* WARNING: Removing unreachable block (ram,0x0001010f4874) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010f4864) */
/* WARNING: Removing unreachable block (ram,0x0001010f4854) */
/* WARNING: Removing unreachable block (ram,0x0001010f4844) */
/* WARNING: Removing unreachable block (ram,0x0001010f4834) */
/* WARNING: Removing unreachable block (ram,0x0001010f48f4) */

void FUN_1010f466c(void)

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
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3f2a4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3f284();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4b338();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c3f68c();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c5207c();
            func_0x000107c61180();
            if (lVar5 != 0) {
              lVar6 = unaff_x20;
              func_0x000107c5e1d0();
              func_0x000107c61180();
              if (lVar6 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar7 = unaff_x20;
                func_0x000107c41518();
                func_0x000107c61180();
                if (lVar7 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar8 = unaff_x20;
                  func_0x000107c5c220();
                  func_0x000107c61180();
                  if (lVar8 != 0) {
                    func_0x000107c3ead8();
                    func_0x000107c61180();
                    if (unaff_x20 != 0) {
                      lVar9 = 0;
                      FUN_1010f0394();
                      func_0x000107c613fc();
                      *(long *)(lVar9 + 0x10) = lVar1;
                      *(long *)(lVar9 + 0x18) = lVar2;
                      *(long *)(lVar9 + 0x20) = lVar4;
                      *(long *)(lVar9 + 0x28) = lVar3;
                      *(long *)(lVar9 + 0x30) = lVar5;
                      *(long *)(lVar9 + 0x38) = lVar6;
                      *(long *)(lVar9 + 0x40) = lVar7;
                      *(long *)(lVar9 + 0x48) = lVar8;
                      *(long *)(lVar9 + 0x50) = unaff_x20;
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174(lVar4);
                      func_0x000107c61174(lVar5);
                      func_0x000107c61174(lVar6);
                      func_0x000107c61174(lVar7);
                      func_0x000107c61174(lVar8);
                      func_0x000107c61174(unaff_x20);
                      func_0x0001010efc1c();
                      lVar1 = unaff_x20;
                    }
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
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1010f4a50; end: 1010f4a77; -[SCLensTappableLinkApiPluginEntryPoint begin] */

void FUN_1010f4a50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010f466c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010f4a78; end: 1010f4abb; -[SCLensTappableLinkApiPluginEntryPoint end] */

void FUN_1010f4a78(undefined8 param_1)

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



/* Entry: 1010f4abc; end: 1010f4fb3;  */

void FUN_1010f4abc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecf90)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x49556172656d6163;
          if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
             (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c530ec();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10dbb20)) ||
               (func_0x000107c605b8(0xd00000000000001e,0x800000010ef244e0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55e08();
            }
            else {
              uVar2 = 0xd000000000000017;
              if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10d9830)) ||
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef267d0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53238();
              }
              else {
                uVar2 = 0x4c6e6f6973736573;
                if (((param_2 == 0x4c6e6f6973736573) && (param_3 == -0x12ffff8d9a989891)) ||
                   (func_0x000107c605b8(0x4c6e6f6973736573,0xed0000726567676f,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c58fd0();
                }
                else {
                  uVar2 = 0xd000000000000013;
                  if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10d9810)) ||
                     (func_0x000107c605b8(0xd000000000000013,0x800000010ef267f0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53f2c();
                  }
                  else {
                    uVar2 = 0xd000000000000015;
                    if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10d97f0)) ||
                       (func_0x000107c605b8(0xd000000000000015,0x800000010ef26810,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c59a28();
                    }
                    else {
                      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10d97d0)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000010,0x800000010ef26830,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990))
                          {
                            uVar2 = 0xd000000000000017;
                            func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "SCLensTappableLinkApiPlugin/SCLensTappableLinkApiPluginEntryPoint.swift"
                                                  ,0x47,2,0x52,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f4fb4);
                              (*pcVar1)();
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c5a68c();
                          goto LAB_1010f4b4c;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c52d80();
                    }
                  }
                }
              }
            }
          }
          goto LAB_1010f4b4c;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53104();
      goto LAB_1010f4b4c;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1010f4b4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010f4fb4; end: 1010f505f; -[SCLensTappableLinkApiPluginEntryPoint setValue:forIvarName:] */

void FUN_1010f4fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010f4abc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010f5060; end: 1010f516b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f5060(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbe0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbe8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbf0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dbf8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5dc00,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5dc08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5dc10) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010f516c; end: 1010f518b; -[SCLensTappableLinkApiPluginEntryPoint init] */

void FUN_1010f516c(void)

{
  FUN_1010f5060();
  return;
}



/* Entry: 1010f518c; end: 1010f51bf;  */

void FUN_1010f518c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010f51c0; end: 1010f5287; -[SCLensTappableLinkApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f51c0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5dbc0);
  func_0x000107c61610(param_1 + _DAT_112d5dbc8);
  func_0x000107c61610(param_1 + _DAT_112d5dbd0);
  func_0x000107c61610(param_1 + _DAT_112d5dbd8);
  func_0x000107c61610(param_1 + _DAT_112d5dbe0);
  func_0x000107c61610(param_1 + _DAT_112d5dbe8);
  func_0x000107c61610(param_1 + _DAT_112d5dbf0);
  func_0x000107c61610(param_1 + _DAT_112d5dbf8);
  func_0x000107c61610(param_1 + _DAT_112d5dc00);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d5dc08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5dc10));
  return;
}



/* Entry: 1010f5288; end: 1010f52a7;  */

void FUN_1010f5288(void)

{
  func_0x000107c61168(&PTR_PTR_1127af878);
  return;
}



/* Entry: 1010f52a8; end: 1010f546f;  */

undefined * FUN_1010f52a8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_a0 [80];
  
  puVar10 = auStack_a0;
  uVar2 = *(undefined8 *)PTR__CIDetectorTypeFace_11034ac78;
  func_0x000107c61174(uVar2);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1010fe1c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar4 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x000107c610f8(PTR__OBJC_CLASS___CIContext_1126b3120);
  uVar5 = 0;
  func_0x0001010f6448(0);
  uVar8 = 0x112d5dce8;
  FUN_1010f6544(0x112d5dce8,&UNK_10d9244d4);
  puVar1 = PTR___sypN_11034f1a8;
  puVar6 = puVar3;
  func_0x000107c5f9dc(puVar3,uVar5,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(puVar3);
  func_0x000107c47c98(puVar4);
  func_0x000107c61170(puVar6);
  lVar7 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  uVar8 = *(undefined8 *)PTR__CIDetectorAccuracy_11034ac30;
  func_0x000107c5faec();
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  *(undefined1 **)(lVar7 + 0x28) = puVar10;
  uVar8 = *(undefined8 *)PTR__CIDetectorAccuracyLow_11034ac40;
  func_0x000107c5faec();
  puVar3 = PTR___sSSN_11034da80;
  *(undefined **)(lVar7 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar7 + 0x30) = uVar8;
  *(undefined1 **)(lVar7 + 0x38) = puVar10;
  lVar9 = lVar7;
  func_0x000100214a84(lVar7);
  func_0x000107c61588(lVar7);
  FUN_1010f6498((undefined8 *)(lVar7 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  lVar7 = lVar9;
  func_0x000107c5f9dc(lVar9,puVar3,puVar1 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar9);
  puVar3 = PTR__OBJC_CLASS___CIDetector_1126bd658;
  func_0x000107c61168(PTR__OBJC_CLASS___CIDetector_1126bd658);
  func_0x000107c41898();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar7);
  return puVar3;
}



/* Entry: 1010f5470; end: 1010f59d7;  */

undefined * FUN_1010f5470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *apuStack_90 [4];
  undefined *puStack_70;
  
  puVar18 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar18 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  puVar4 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c4635c();
  func_0x000107c61170(param_1);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar18);
    return (undefined *)0x0;
  }
  puStack_70 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar5 = puVar4;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  puVar9 = PTR___sypN_11034f1a8;
  puVar19 = puVar5;
  puVar15 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8();
  func_0x000107c61170(puVar5);
  lVar6 = *(long *)PTR__kCGImagePropertyOrientation_110349d48;
  func_0x000107c5faec(lVar6);
  if (*(long *)(puVar19 + 0x10) == 0) {
LAB_1010f5638:
    uStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
    func_0x000107c6142c(puVar15);
    func_0x000107c6142c(puVar19);
  }
  else {
    func_0x000107c61434(puVar19);
    puVar5 = puVar15;
    func_0x000100029284(lVar6);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(puVar19);
      goto LAB_1010f5638;
    }
    func_0x0001000bb420(*(long *)(puVar19 + 0x38) + lVar6 * 0x20,&puStack_b0);
    func_0x000107c6142c(puVar15);
    func_0x000107c61430(puVar19,2);
    if (lStack_98 != 0) {
      ppuVar16 = apuStack_90;
      func_0x000100102924(&puStack_b0,ppuVar16);
      uVar7 = *(undefined8 *)PTR__CIDetectorImageOrientation_11034ac50;
      func_0x000107c5faec(uVar7);
      func_0x0001000bb420(apuStack_90,&puStack_b0);
      uStack_e8 = uStack_a8;
      puStack_f0 = puStack_b0;
      lStack_d8 = lStack_98;
      uStack_e0 = uStack_a0;
      if (lStack_98 == 0) {
        FUN_1010f6498(&puStack_f0,0x112d387f8,&UNK_10d902650);
        func_0x000100216878(auStack_d0,uVar7,ppuVar16);
        func_0x000107c6142c(ppuVar16);
        FUN_1010f6498(auStack_d0,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(&puStack_f0,auStack_d0);
        puVar5 = puVar8;
        func_0x000107c61558(puVar8);
        puStack_f0 = puVar8;
        func_0x0001001029e8(auStack_d0,uVar7,ppuVar16,puVar5);
        func_0x000107c6142c(ppuVar16);
        puStack_70 = puStack_f0;
      }
      puVar8 = puStack_70;
      func_0x000100183ab8(apuStack_90);
      goto LAB_1010f5670;
    }
  }
  FUN_1010f6498(&puStack_b0,0x112d387f8,&UNK_10d902650);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
LAB_1010f5670:
  puVar5 = puVar8;
  func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,puVar9 + 8,PTR___sSSSHsWP_11034da90);
  puVar19 = puVar18;
  func_0x000107c42ef4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar9 = (undefined *)0x0;
  FUN_1010f5d98();
  puVar5 = puVar19;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar19);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar19 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar19 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar19 = puVar5;
    }
    func_0x000107c60480();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar15;
  if (puVar19 != (undefined *)0x0) {
    uStack_f8 = (ulong)puVar5 & 0xffffffffffffff8;
    puVar20 = *(undefined **)PTR__CIFeatureTypeFace_11034ac80;
    puVar14 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_f8 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010f5948);
            (*pcVar3)();
          }
          puVar10 = *(undefined **)(puVar5 + (long)puVar14 * 8 + 0x20);
          func_0x000107c61174();
          puVar13 = puVar9;
        }
        else {
          puVar10 = puVar14;
          puVar13 = puVar5;
          FUN_1010f5f54();
        }
        puVar1 = puVar14 + 1;
        if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1010f5944);
          (*pcVar3)();
        }
        puVar9 = puVar10;
        func_0x000107c5d0f0();
        func_0x000107c61180();
        puVar11 = puVar9;
        func_0x000107c5faec();
        puVar17 = puVar13;
        func_0x000107c61170(puVar9);
        puVar12 = puVar20;
        func_0x000107c5faec();
        if ((puVar11 == puVar12) && (puVar13 == puVar17)) break;
        puVar9 = puVar13;
        func_0x000107c605b8(puVar11,puVar13,puVar12,puVar17,0);
        func_0x000107c6142c(puVar13);
        func_0x000107c6142c(puVar17);
        if (((ulong)puVar11 & 1) != 0) goto LAB_1010f57f0;
LAB_1010f5724:
        func_0x000107c61170(puVar10);
        puVar14 = puVar14 + 1;
        if (puVar1 == puVar19) goto LAB_1010f5970;
      }
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(puVar17);
LAB_1010f57f0:
      puVar9 = PTR__OBJC_CLASS___CIFaceFeature_1126bd5e0;
      func_0x000107c61168();
      puVar13 = puVar10;
      func_0x000107c6148c();
      if (puVar13 == (undefined *)0x0) goto LAB_1010f5724;
      puVar11 = puVar10;
      func_0x000107c61174();
      puVar12 = puVar13;
      func_0x000107c44914();
      if (((int)puVar12 == 0) || (puVar12 = puVar13, func_0x000107c44ab0(), (int)puVar12 == 0)) {
        func_0x000107c61170(puVar11);
        goto LAB_1010f5724;
      }
      func_0x000107c4499c();
      func_0x000107c61170(puVar11);
      if (((ulong)puVar13 & 1) == 0) goto LAB_1010f5724;
      puVar14 = puVar15;
      func_0x000107c61558();
      apuStack_90[0] = puVar15;
      if (((ulong)puVar14 & 1) == 0) {
        puVar9 = (undefined *)(*(long *)(puVar15 + 0x10) + 1);
        FUN_1010f6108(0,puVar9,1);
      }
      uVar2 = *(ulong *)(apuStack_90[0] + 0x10);
      puVar15 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar2) {
        puVar9 = puVar15;
        FUN_1010f6108(1 < *(ulong *)(apuStack_90[0] + 0x18),puVar15,1);
      }
      *(undefined **)(apuStack_90[0] + 0x10) = puVar15;
      *(undefined **)(apuStack_90[0] + uVar2 * 8 + 0x20) = puVar11;
      puVar15 = apuStack_90[0];
      puVar14 = puVar1;
    } while (puVar1 != puVar19);
  }
LAB_1010f5970:
  func_0x000107c6142c(puVar5);
  if (((long)puVar15 < 0) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
    puVar9 = puVar15;
    func_0x000107c60480(puVar15);
  }
  else {
    puVar9 = *(undefined **)(puVar15 + 0x10);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar18);
  func_0x000107c6142c(puVar8);
  func_0x000107c61574(puVar15);
  return puVar9;
}



/* Entry: 1010f59d8; end: 1010f59fb;  */

void FUN_1010f59d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010f59fc; end: 1010f5a1b;  */

void FUN_1010f59fc(void)

{
  FUN_1010f5470();
  return;
}



/* Entry: 1010f5a1c; end: 1010f5a23;  */

void FUN_1010f5a1c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1010f5a24; end: 1010f5b53;  */

void FUN_1010f5a24(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1010f5b54; end: 1010f5bcb;  */

undefined8 FUN_1010f5b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 1010f5bcc; end: 1010f5d03;  */

undefined1 * FUN_1010f5bcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1010f5d04; end: 1010f5d2b;  */

void FUN_1010f5d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1010f5d2c; end: 1010f5d97;  */

void FUN_1010f5d2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d5dce8;
  FUN_1010f6544(0x112d5dce8,&UNK_10d9244d4);
  uVar2 = 0x112d5dd10;
  FUN_1010f6544(0x112d5dd10,&UNK_10db28560);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1010f5d98; end: 1010f5ddb;  */

void FUN_1010f5d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5dc40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___CIFeature_1126a6370;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5dc40 = puVar1;
  return;
}



/* Entry: 1010f5ddc; end: 1010f5e5b;  */

undefined1  [16] FUN_1010f5ddc(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_1010f5f34;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_1010f5f34:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 1010f5e5c; end: 1010f5f53;  */

undefined1  [16] FUN_1010f5e5c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_1010f5f34;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_1010f5f34:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 1010f5f54; end: 1010f6107;  */

ulong FUN_1010f5f54(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f6038);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f603c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___CIFeature_1126a6370;
    func_0x000107c61168(PTR__OBJC_CLASS___CIFeature_1126a6370);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___CIFeature_1126a6370;
    func_0x000107c61168(PTR__OBJC_CLASS___CIFeature_1126a6370);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1010f5d98(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f6108);
  (*pcVar2)();
}



/* Entry: 1010f6108; end: 1010f613f;  */

void FUN_1010f6108(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010fbfe4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1010f6140; end: 1010f6277;  */

void FUN_1010f6140(undefined8 *param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar9 = *unaff_x20;
  lVar2 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f6234);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar5) {
    func_0x0001010fc6cc(lVar5,param_4 & 1);
    uVar8 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f61e0);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001010fc52c();
    lVar5 = *unaff_x20;
    goto joined_r0x0001010f6248;
  }
  lVar5 = *unaff_x20;
joined_r0x0001010f6248:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x28);
    uVar10 = *puVar7;
    uVar3 = puVar7[2];
    *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(param_1 + 4);
    uVar11 = *param_1;
    uVar13 = param_1[3];
    uVar12 = param_1[2];
    puVar7[1] = param_1[1];
    *puVar7 = uVar11;
    puVar7[3] = uVar13;
    puVar7[2] = uVar12;
    func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
  FUN_1010fbf88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1010f6278; end: 1010f6427;  */

void FUN_1010f6278(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar11);
      puVar5 = auStack_a8;
      func_0x000107c5fb58(puVar5,uVar10,uVar11);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar11);
      uVar7 = (ulong)puVar5 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar7 < uVar9) {
LAB_1010f636c:
          if ((long)param_1 < (long)uVar7) goto LAB_1010f62f4;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
        if (((long)param_1 < (long)uVar8) || (puVar3 + 2 <= puVar2 || param_1 != uVar8)) {
          uVar10 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x20);
        if ((((long)param_1 < (long)uVar8) || (puVar3 + 4 <= puVar2)) || (param_1 != uVar8)) {
          uVar10 = *puVar3;
          uVar12 = puVar3[3];
          uVar11 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
          puVar2[3] = uVar12;
          puVar2[2] = uVar11;
          param_1 = uVar8;
        }
      }
      else if (uVar9 <= uVar7) goto LAB_1010f636c;
LAB_1010f62f4:
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1010f6428);
  (*pcVar4)();
}



/* Entry: 1010f6428; end: 1010f6497;  */

void FUN_1010f6428(void)

{
  func_0x000107c61168(&PTR_PTR_112d5dc88);
  return;
}



/* Entry: 1010f6498; end: 1010f64d7;  */

undefined8 FUN_1010f6498(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1010f64d8; end: 1010f6543;  */

void FUN_1010f64d8(void)

{
  FUN_1010f6544(0x112d5dcf8,&UNK_10d92445c);
  return;
}



/* Entry: 1010f6544; end: 1010f65bb;  */

void FUN_1010f6544(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001010f6448(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1010f65bc; end: 1010f6f93;  */

void FUN_1010f65bc(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112d5dd18 != -1) {
    func_0x000107c61568(0x112d5dd18,0x1010f6584);
  }
  uVar4 = uRam00000001137ff248;
  *(undefined8 *)(param_1 + 0x20) = uRam00000001137ff248;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f6794);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_1010f6728;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010f6790);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1010f6728:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam00000001137ff250 = lVar3;
  return;
}



/* Entry: 1010f6f94; end: 1010f6f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f6f94(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = 0;
  plStack_70 = param_1;
  func_0x000107c5eb44();
  lStack_88 = *(long *)(lVar2 + -8);
  lStack_80 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar14 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_90 = lVar14;
  func_0x000107c5eb14();
  lStack_a0 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eb0c();
  lStack_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar2 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d5ddd0,&UNK_10d924580);
  func_0x000107c40430();
  func_0x000107c61180();
  uVar3 = uVar10;
  func_0x0001000bda74();
  uStack_68 = uVar3;
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112d5ddd8,&UNK_10d924588);
  func_0x000107c40454();
  func_0x000107c61180();
  uVar10 = uVar4;
  func_0x0001000bda74();
  uStack_a8 = uVar10;
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112d5dde0,&UNK_10d924590);
  func_0x000107c4e6e8();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d5dde8,&UNK_10d924598);
  func_0x000107c613fc();
  pcVar6 = FUN_1010f6f98;
  func_0x0001000bdd8c(FUN_1010f6f98,0);
  uVar13 = *(undefined8 *)(lVar1 + _DAT_112e1d220);
  pcStack_c8 = pcVar6;
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  func_0x0001000285a8(0x112d5ddf0,&UNK_10d9245a8);
  uVar9 = *(undefined8 *)(lVar11 + _DAT_113034738);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d5ddf8,&UNK_10d9245b0);
  uVar10 = *(undefined8 *)(lVar11 + _DAT_113034730);
  func_0x0001000bda74();
  uStack_d0 = uVar10;
  func_0x0001000285a8(0x112d5de00,&UNK_10d9245b8);
  uVar10 = uStack_c0;
  func_0x000107c4ae48();
  func_0x000107c61180();
  uVar4 = uVar10;
  func_0x0001000bda74();
  uStack_c0 = uVar4;
  func_0x000107c61170(uVar10);
  lVar11 = 0;
  FUN_1010fe468();
  func_0x000107c613fc();
  uVar10 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  (**(code **)(lStack_b8 + 0x68))
            (lVar2,*(undefined4 *)
                    PTR___s10Foundation11JSONDecoderC19KeyDecodingStrategyO14useDefaultKeysyA2EmFWC_110350308
             ,lStack_b0);
  func_0x000107c5eb10(lVar2);
  (**(code **)(lStack_a0 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyO16secondsSince1970yA2EmFWC_110350320
             ,lStack_98);
  func_0x000107c5eb18(lVar14);
  *(undefined8 *)(lVar11 + 0x10) = uVar10;
  uVar10 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  lVar1 = lStack_90;
  (**(code **)(lStack_88 + 0x68))
            (lStack_90,
             *(undefined4 *)
              PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO16secondsSince1970yA2EmFWC_1103503b0
             ,lStack_80);
  func_0x000107c5eb48(lVar1);
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  *(undefined8 *)(lVar11 + 0x78) = 0;
  *(undefined8 *)(lVar11 + 0x70) = 0;
  *(undefined8 *)(lVar11 + 0x88) = 0;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(undefined8 *)(lVar11 + 0x98) = 0;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010fe2ec();
  uVar7 = uStack_78;
  uVar5 = uStack_a8;
  uVar4 = uStack_c0;
  pcVar6 = pcStack_c8;
  uVar10 = uStack_d0;
  *(undefined **)(lVar11 + 0xa0) = puVar12;
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  *(undefined8 *)(lVar11 + 0x20) = uVar8;
  *(undefined8 *)(lVar11 + 0x28) = uStack_68;
  *(undefined8 *)(lVar11 + 0x30) = uStack_a8;
  *(undefined8 *)(lVar11 + 0x38) = uVar3;
  *(code **)(lVar11 + 0x40) = pcStack_c8;
  *(undefined8 *)(lVar11 + 0x48) = uVar13;
  *(undefined8 *)(lVar11 + 0x50) = uStack_78;
  *(undefined8 *)(lVar11 + 0x58) = uVar9;
  *(undefined8 *)(lVar11 + 0x60) = uStack_d0;
  *(undefined8 *)(lVar11 + 0x68) = uStack_c0;
  func_0x000107c6157c();
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar4);
  FUN_1010f7474();
  func_0x000107c61574(uStack_68);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar4);
  *plStack_70 = lVar11;
  return;
}



/* Entry: 1010f6f98; end: 1010f6fef;  */

void FUN_1010f6f98(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  FUN_1010f6428();
  lVar2 = lVar1;
  func_0x000107c613fc();
  lVar3 = lVar2;
  FUN_1010f52a8();
  *(long *)(lVar2 + 0x10) = lVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110384618;
  *param_1 = lVar2;
  return;
}



/* Entry: 1010f6ff0; end: 1010f6ffb;  */

void FUN_1010f6ff0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1010f6ffc; end: 1010f70d3;  */

undefined8 FUN_1010f6ffc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar2);
  func_0x000104875e28(&lStack_48);
  func_0x000107c61574(uVar2);
  if (lStack_48 != 0) {
    FUN_1010f756c();
    lVar3 = *(long *)(lStack_48 + 0x70);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lStack_48 + 0x78);
      lVar1 = lVar3;
      func_0x000107c614f0(lVar3);
      pcVar5 = *(code **)(lVar4 + 8);
      func_0x000107c615f0(lVar3);
      (*pcVar5)(lVar1,lVar4);
      func_0x000107c615e8(lVar3);
    }
    lVar3 = *(long *)(lStack_48 + 0x80);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lStack_48 + 0x88);
      lVar1 = lVar3;
      func_0x000107c614f0(lVar3);
      pcVar5 = *(code **)(lVar4 + 8);
      func_0x000107c615f0(lVar3);
      (*pcVar5)(lVar1,lVar4);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61574(lStack_48);
  }
  return 0;
}



/* Entry: 1010f70d4; end: 1010f70f7;  */

void FUN_1010f70d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010f70f8; end: 1010f70fb;  */

void FUN_1010f70f8(void)

{
  return;
}



/* Entry: 1010f70fc; end: 1010f711f;  */

undefined8 FUN_1010f70fc(void)

{
  FUN_1010f6ffc();
  return 0;
}



/* Entry: 1010f7120; end: 1010f717b;  */

void FUN_1010f7120(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010f717c; end: 1010f718f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010f717c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = 0;
  plStack_70 = param_1;
  func_0x000107c5eb44();
  lStack_88 = *(long *)(lVar2 + -8);
  lStack_80 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar14 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_90 = lVar14;
  func_0x000107c5eb14();
  lStack_a0 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eb0c();
  lStack_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar2 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d5ddd0,&UNK_10d924580);
  func_0x000107c40430();
  func_0x000107c61180();
  uVar3 = uVar10;
  func_0x0001000bda74();
  uStack_68 = uVar3;
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112d5ddd8,&UNK_10d924588);
  func_0x000107c40454();
  func_0x000107c61180();
  uVar10 = uVar4;
  func_0x0001000bda74();
  uStack_a8 = uVar10;
  func_0x000107c61170(uVar4);
  func_0x0001000285a8(0x112d5dde0,&UNK_10d924590);
  func_0x000107c4e6e8();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d5dde8,&UNK_10d924598);
  func_0x000107c613fc();
  pcVar6 = FUN_1010f6f98;
  func_0x0001000bdd8c(FUN_1010f6f98,0);
  uVar13 = *(undefined8 *)(lVar1 + _DAT_112e1d220);
  pcStack_c8 = pcVar6;
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  func_0x0001000285a8(0x112d5ddf0,&UNK_10d9245a8);
  uVar9 = *(undefined8 *)(lVar11 + _DAT_113034738);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d5ddf8,&UNK_10d9245b0);
  uVar10 = *(undefined8 *)(lVar11 + _DAT_113034730);
  func_0x0001000bda74();
  uStack_d0 = uVar10;
  func_0x0001000285a8(0x112d5de00,&UNK_10d9245b8);
  uVar10 = uStack_c0;
  func_0x000107c4ae48();
  func_0x000107c61180();
  uVar4 = uVar10;
  func_0x0001000bda74();
  uStack_c0 = uVar4;
  func_0x000107c61170(uVar10);
  lVar11 = 0;
  FUN_1010fe468();
  func_0x000107c613fc();
  uVar10 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  (**(code **)(lStack_b8 + 0x68))
            (lVar2,*(undefined4 *)
                    PTR___s10Foundation11JSONDecoderC19KeyDecodingStrategyO14useDefaultKeysyA2EmFWC_110350308
             ,lStack_b0);
  func_0x000107c5eb10(lVar2);
  (**(code **)(lStack_a0 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyO16secondsSince1970yA2EmFWC_110350320
             ,lStack_98);
  func_0x000107c5eb18(lVar14);
  *(undefined8 *)(lVar11 + 0x10) = uVar10;
  uVar10 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  lVar1 = lStack_90;
  (**(code **)(lStack_88 + 0x68))
            (lStack_90,
             *(undefined4 *)
              PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO16secondsSince1970yA2EmFWC_1103503b0
             ,lStack_80);
  func_0x000107c5eb48(lVar1);
  *(undefined8 *)(lVar11 + 0x18) = uVar10;
  *(undefined8 *)(lVar11 + 0x78) = 0;
  *(undefined8 *)(lVar11 + 0x70) = 0;
  *(undefined8 *)(lVar11 + 0x88) = 0;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(undefined8 *)(lVar11 + 0x98) = 0;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010fe2ec();
  uVar7 = uStack_78;
  uVar5 = uStack_a8;
  uVar4 = uStack_c0;
  pcVar6 = pcStack_c8;
  uVar10 = uStack_d0;
  *(undefined **)(lVar11 + 0xa0) = puVar12;
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  *(undefined8 *)(lVar11 + 0x20) = uVar8;
  *(undefined8 *)(lVar11 + 0x28) = uStack_68;
  *(undefined8 *)(lVar11 + 0x30) = uStack_a8;
  *(undefined8 *)(lVar11 + 0x38) = uVar3;
  *(code **)(lVar11 + 0x40) = pcStack_c8;
  *(undefined8 *)(lVar11 + 0x48) = uVar13;
  *(undefined8 *)(lVar11 + 0x50) = uStack_78;
  *(undefined8 *)(lVar11 + 0x58) = uVar9;
  *(undefined8 *)(lVar11 + 0x60) = uStack_d0;
  *(undefined8 *)(lVar11 + 0x68) = uStack_c0;
  func_0x000107c6157c();
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar4);
  FUN_1010f7474();
  func_0x000107c61574(uStack_68);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar4);
  *plStack_70 = lVar11;
  return;
}



/* Entry: 1010f7190; end: 1010f71af;  */

void FUN_1010f7190(void)

{
  func_0x000107c61168(&PTR_PTR_112d5dd70);
  return;
}



/* Entry: 1010f71b0; end: 1010f7473;  */

long FUN_1010f71b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_88 = param_10;
  uStack_a0 = param_9;
  lVar8 = 0;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  uStack_98 = param_2;
  uStack_90 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_8;
  uStack_70 = param_1;
  uStack_68 = param_7;
  func_0x000107c5eb44();
  lVar17 = *(long *)(lVar8 + -8);
  lStack_b8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  func_0x000107c5eb14();
  lVar18 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar15 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  func_0x000107c5eb0c();
  lVar13 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  uVar10 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  (**(code **)(lVar13 + 0x68))
            (lVar16,*(undefined4 *)
                     PTR___s10Foundation11JSONDecoderC19KeyDecodingStrategyO14useDefaultKeysyA2EmFWC_110350308
             ,lVar9);
  func_0x000107c5eb10(lVar16);
  (**(code **)(lVar18 + 0x68))
            (lVar15,*(undefined4 *)
                     PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyO16secondsSince1970yA2EmFWC_110350320
             ,lVar8);
  func_0x000107c5eb18(lVar15);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar10;
  uVar10 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  (**(code **)(lVar17 + 0x68))
            (puVar14,*(undefined4 *)
                      PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO16secondsSince1970yA2EmFWC_1103503b0
             ,lStack_b8);
  func_0x000107c5eb48(puVar14);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001010fe2ec();
  uVar7 = uStack_68;
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  uVar12 = uStack_98;
  uVar2 = uStack_a0;
  uVar1 = uStack_a8;
  uVar10 = uStack_b0;
  *(undefined **)(unaff_x20 + 0xa0) = puVar11;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_88;
  func_0x000107c6157c();
  func_0x000107c61174(uVar12);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  FUN_1010f7474();
  func_0x000107c61574(uStack_70);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uStack_68);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar4);
  return unaff_x20;
}



/* Entry: 1010f7474; end: 1010f756b;  */

void FUN_1010f7474(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plStack_48;
  
  if (*(long *)(unaff_x20 + 0x80) == 0) {
    func_0x0001000d224c(&plStack_48);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48;
      func_0x000107c3dff8();
      func_0x000107c61180();
      func_0x000107c615e8(plStack_48);
      func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
      plVar2 = plVar1;
      func_0x0001000b637c();
      puVar3 = &UNK_110384710;
      func_0x000107c613fc(&UNK_110384710,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      pcVar4 = FUN_1010ffae0;
      puVar6 = puVar3;
      (**(code **)(*plVar2 + 0x60))();
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(plVar1);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
      *(code **)(unaff_x20 + 0x80) = pcVar4;
      *(undefined **)(unaff_x20 + 0x88) = puVar6;
      func_0x000107c615e8(uVar5);
    }
  }
  return;
}



/* Entry: 1010f756c; end: 1010f77b7;  */

void FUN_1010f756c(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0xa0,auStack_78,1,0);
  lVar11 = *(long *)(unaff_x20 + 0xa0);
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar14 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *puVar12;
  func_0x000107c61438(lVar11,2);
  lVar13 = 0;
  lVar2 = lVar13;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar1 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar5 = *(undefined8 *)
               (*(long *)(lVar11 + 0x38) +
               (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar13 << 6) * 0x28);
      func_0x000107c61174();
      puVar7 = puVar8;
      func_0x000107c61550();
      if (((((ulong)puVar7 & 1) == 0) || ((long)puVar8 < 0)) ||
         (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar6 = puVar8;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        FUN_1010fc9b4(0,puVar6 + 1,1,puVar8);
      }
      uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar9 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_1010fc9b4(puVar8,uVar1 + 1,1,puVar7);
        uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar9 + uVar1 * 8 + 0x20) = uVar5;
      lVar2 = lVar13;
    }
    bVar4 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar13) {
      func_0x000107c6142c(lVar11);
      FUN_1010ffa98(lVar11,puVar12,~uVar10,lVar2,0);
      func_0x0001000d224c(&lStack_80);
      if (lStack_80 == 0) {
        func_0x000107c6142c(puVar8);
      }
      else {
        uVar5 = 0;
        FUN_1010ffb00(0,0x112d5dfd0,&PTR_PTR_1126b08b8);
        puVar7 = puVar8;
        func_0x000107c5fc48(puVar8,uVar5);
        func_0x000107c6142c(puVar8);
        func_0x000107c4fec8(lStack_80);
        func_0x000107c615e8(lStack_80);
        func_0x000107c61170(puVar7);
      }
      uVar5 = *(undefined8 *)(unaff_x20 + 0xa0);
      *(undefined **)(unaff_x20 + 0xa0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      func_0x000107c6142c(uVar5);
      return;
    }
    uVar14 = puVar12[lVar13];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010f77b8);
  (*pcVar3)();
}


