/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015ae790; end: 1015ae873;  */

void FUN_1015ae790(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001015bc000();
LAB_1015ae818:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        goto LAB_1015ae818;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015ae874; end: 1015ae91f;  */

void FUN_1015ae874(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    uVar1 = param_1;
    func_0x0001015bc000();
    (*pcVar3)(lVar2,1,&UNK_1103e2cb0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_1015ae920();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1015ae920; end: 1015ae9a7;  */

void FUN_1015ae920(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ae9a8; end: 1015ae9f7;  */

void FUN_1015ae9a8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  return;
}



/* Entry: 1015ae9f8; end: 1015aea27;  */

undefined1  [16] FUN_1015ae9f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1015aea28; end: 1015aea5b;  */

void FUN_1015aea28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1015aea5c; end: 1015aea6f;  */

undefined1  [16] FUN_1015aea5c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1015aea6c;
  return auVar1;
}



/* Entry: 1015aea70; end: 1015aea83;  */

void FUN_1015aea70(void)

{
  FUN_1015ae790();
  return;
}



/* Entry: 1015aea84; end: 1015aeabb;  */

void FUN_1015aea84(void)

{
  FUN_1015ae874();
  return;
}



/* Entry: 1015aeabc; end: 1015aeaf3;  */

uint FUN_1015aeabc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015c5afc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015aeaf4; end: 1015aeb3b;  */

uint FUN_1015aeaf4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x0001015b6ef8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015aeb3c; end: 1015aebdb;  */

/* WARNING: Possible PIC construction at 0x0001015aeb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015aeb98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015aeb8c) */
/* WARNING: Removing unreachable block (ram,0x0001015aeb9c) */

void FUN_1015aeb3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7238 != -1) {
    func_0x000107c61568(0x112db7238,FUN_1015ae748);
  }
  uVar5 = uRam00000001138006b0;
  uVar4 = uRam00000001138006a8;
  uVar3 = uRam00000001138006a0;
  uVar2 = uRam0000000113800698;
  uVar1 = uRam0000000113800690;
  *param_1 = uRam0000000113800688;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015aebdc; end: 1015aebef;  */

void FUN_1015aebdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7e08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7e08,&UNK_10d966048);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015aebf0; end: 1015aed13;  */

void FUN_1015aebf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_38 = unaff_x20[5];
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015aed14; end: 1015aed57;  */

uint FUN_1015aed14(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  func_0x0001015b6ef8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015aed58; end: 1015aedef;  */

void FUN_1015aed58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7230 != -1) {
    func_0x000107c61568(0x112db7230,FUN_1015ae71c);
  }
  uVar2 = uRam0000000113800680;
  uVar1 = uRam0000000113800678;
  func_0x000107c61438(uRam0000000113800680,2);
  func_0x000107c5fb78(0x7765697665522e,0xe700000000000000);
  func_0x000107c6142c(uVar2);
  uRam00000001138006b8 = uVar1;
  uRam00000001138006c0 = uVar2;
  return;
}



/* Entry: 1015aedf0; end: 1015aee37;  */

void FUN_1015aedf0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966430,0x1c,2);
  uRam00000001138006d0 = uStack_38;
  uRam00000001138006c8 = uStack_40;
  uRam00000001138006e0 = uStack_28;
  uRam00000001138006d8 = uStack_30;
  uRam00000001138006f0 = uStack_18;
  uRam00000001138006e8 = uStack_20;
  return;
}



/* Entry: 1015aee38; end: 1015aef5b;  */

/* WARNING: Removing unreachable block (ram,0x0001015aef58) */

void FUN_1015aee38(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_110790980;
        }
        else {
          if (lVar1 != 2) goto LAB_1015aeec0;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5dbc();
          lVar2 = unaff_x20 + 0x48;
          puVar3 = &UNK_110734ce8;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 4) goto LAB_1015aeec0;
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        (*pcVar5)();
      }
LAB_1015aeec0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015aef5c; end: 1015af033;  */

void FUN_1015aef5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_1015af034();
  if (unaff_x21 == 0) {
    FUN_1015af0bc();
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,3,param_2,param_3);
    }
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,4,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 1015af034; end: 1015af0bb;  */

void FUN_1015af034(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x40);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015af0bc; end: 1015af147;  */

void FUN_1015af0bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x60);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5dbc();
    (*pcVar1)(&uStack_60,2,&UNK_110734ce8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015af148; end: 1015af19f;  */

void FUN_1015af148(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf000000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf000000000000000;
  return;
}



/* Entry: 1015af1a0; end: 1015af1cf;  */

undefined1  [16] FUN_1015af1a0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1015af1d0; end: 1015af203;  */

void FUN_1015af1d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1015af204; end: 1015af217;  */

undefined1  [16] FUN_1015af204(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1015af214;
  return auVar1;
}



/* Entry: 1015af218; end: 1015af22b;  */

void FUN_1015af218(void)

{
  FUN_1015aee38();
  return;
}



/* Entry: 1015af22c; end: 1015af273;  */

void FUN_1015af22c(void)

{
  FUN_1015aef5c();
  return;
}



/* Entry: 1015af274; end: 1015af277;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015af274(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015af278; end: 1015af2af;  */

uint FUN_1015af278(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015c5abc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015af2b0; end: 1015af317;  */

uint FUN_1015af2b0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  func_0x0001015b6aac(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015af318; end: 1015af3b7;  */

/* WARNING: Possible PIC construction at 0x0001015af364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015af374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015af368) */
/* WARNING: Removing unreachable block (ram,0x0001015af378) */

void FUN_1015af318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7258 != -1) {
    func_0x000107c61568(0x112db7258,FUN_1015aedf0);
  }
  uVar5 = uRam00000001138006f0;
  uVar4 = uRam00000001138006e8;
  uVar3 = uRam00000001138006e0;
  uVar2 = uRam00000001138006d8;
  uVar1 = uRam00000001138006d0;
  *param_1 = uRam00000001138006c8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015af3b8; end: 1015af3f3;  */

void FUN_1015af3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7df8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7df8,&UNK_10d966040);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015af3f4; end: 1015af51f;  */

void FUN_1015af3f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015af520; end: 1015af587;  */

uint FUN_1015af520(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  func_0x0001015b6aac(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015af588; end: 1015af5af;  */

void FUN_1015af588(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7200 != -1) {
    func_0x000107c61568(0x112db7200,FUN_1015a91ac);
  }
  uVar2 = uRam0000000113800600;
  uVar1 = uRam00000001138005f8;
  func_0x000107c61438(uRam0000000113800600,2);
  func_0x000107c5fb78(0x6143646e4552412e,0xea00000000006472);
  func_0x000107c6142c(uVar2);
  uRam00000001138006f8 = uVar1;
  uRam0000000113800700 = uVar2;
  return;
}



/* Entry: 1015af5b0; end: 1015af5f7;  */

void FUN_1015af5b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9663e0,0x40,2);
  uRam0000000113800710 = uStack_38;
  uRam0000000113800708 = uStack_40;
  uRam0000000113800720 = uStack_28;
  uRam0000000113800718 = uStack_30;
  uRam0000000113800730 = uStack_18;
  uRam0000000113800728 = uStack_20;
  return;
}



/* Entry: 1015af5f8; end: 1015af70f;  */

/* WARNING: Removing unreachable block (ram,0x0001015af700) */

void FUN_1015af5f8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_1015af670;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_1015af660:
        (*pcVar3)();
      }
      else {
        if (lVar1 != 3) {
          if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 5) goto LAB_1015af670;
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          goto LAB_1015af660;
        }
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010159f674();
        (*pcVar3)(unaff_x20 + 0x50,&UNK_110734b68,lVar1,param_2,param_3);
      }
LAB_1015af670:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015af710; end: 1015af82f;  */

void FUN_1015af710(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_1015af830(), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,4,param_2,param_3);
      }
      uVar2 = unaff_x20[7];
      uVar1 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,5,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1015af830; end: 1015af8cb;  */

void FUN_1015af830(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x68);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,3,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015af8cc; end: 1015af92b;  */

void FUN_1015af8cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 1015af92c; end: 1015af95b;  */

undefined1  [16] FUN_1015af92c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1015af95c; end: 1015af98f;  */

void FUN_1015af95c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 1015af990; end: 1015af9a3;  */

undefined1  [16] FUN_1015af990(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1015af9a0;
  return auVar1;
}



/* Entry: 1015af9a4; end: 1015af9b7;  */

void FUN_1015af9a4(void)

{
  FUN_1015af5f8();
  return;
}



/* Entry: 1015af9b8; end: 1015afa07;  */

void FUN_1015af9b8(void)

{
  FUN_1015af710();
  return;
}



/* Entry: 1015afa08; end: 1015afa0b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015afa08(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015afa0c; end: 1015afa43;  */

uint FUN_1015afa0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015c5a7c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015afa44; end: 1015afac3;  */

uint FUN_1015afa44(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  func_0x0001015b7470(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1015afac4; end: 1015afb63;  */

/* WARNING: Possible PIC construction at 0x0001015afb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015afb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015afb14) */
/* WARNING: Removing unreachable block (ram,0x0001015afb24) */

void FUN_1015afac4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7270 != -1) {
    func_0x000107c61568(0x112db7270,FUN_1015af5b0);
  }
  uVar5 = uRam0000000113800730;
  uVar4 = uRam0000000113800728;
  uVar3 = uRam0000000113800720;
  uVar2 = uRam0000000113800718;
  uVar1 = uRam0000000113800710;
  *param_1 = uRam0000000113800708;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015afb64; end: 1015afb9f;  */

void FUN_1015afb64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7de8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7de8,&UNK_10d966038);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015afba0; end: 1015afcdb;  */

void FUN_1015afba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015afcdc; end: 1015afd5b;  */

uint FUN_1015afcdc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  func_0x0001015b7470(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1015afd5c; end: 1015afd8b;  */

void FUN_1015afd5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7200 != -1) {
    func_0x000107c61568(0x112db7200,FUN_1015a91ac);
  }
  uVar2 = uRam0000000113800600;
  uVar1 = uRam00000001138005f8;
  func_0x000107c61438(uRam0000000113800600,2);
  func_0x000107c5fb78(0x736e65657263532e,0xef64726143746f68);
  func_0x000107c6142c(uVar2);
  uRam0000000113800738 = uVar1;
  uRam0000000113800740 = uVar2;
  return;
}



/* Entry: 1015afd8c; end: 1015afdd3;  */

void FUN_1015afd8c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9663a0,0x39,2);
  uRam0000000113800750 = uStack_38;
  uRam0000000113800748 = uStack_40;
  uRam0000000113800760 = uStack_28;
  uRam0000000113800758 = uStack_30;
  uRam0000000113800770 = uStack_18;
  uRam0000000113800768 = uStack_20;
  return;
}



/* Entry: 1015afdd4; end: 1015afebb;  */

/* WARNING: Removing unreachable block (ram,0x0001015afeb8) */

void FUN_1015afdd4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        (*pcVar3)(unaff_x20 + 0x28,&UNK_110790a00,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 1) goto LAB_1015afe60;
          pcVar3 = *(code **)(param_3 + 0x160);
        }
        (*pcVar3)();
      }
LAB_1015afe60:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015afebc; end: 1015aff6f;  */

void FUN_1015afebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*(long *)(*unaff_x20 + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x100))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[1] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_1015b1eb0(), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1015aff70; end: 1015affc7;  */

void FUN_1015aff70(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  return;
}



/* Entry: 1015affc8; end: 1015afff7;  */

undefined1  [16] FUN_1015affc8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1015afff8; end: 1015b002b;  */

void FUN_1015afff8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1015b002c; end: 1015b003f;  */

undefined1  [16] FUN_1015b002c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1015b003c;
  return auVar1;
}



/* Entry: 1015b0040; end: 1015b0053;  */

void FUN_1015b0040(void)

{
  FUN_1015afdd4();
  return;
}



/* Entry: 1015b0054; end: 1015b008b;  */

void FUN_1015b0054(void)

{
  FUN_1015afebc();
  return;
}



/* Entry: 1015b008c; end: 1015b00c3;  */

uint FUN_1015b008c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015c5a3c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015b00c4; end: 1015b010b;  */

uint FUN_1015b00c4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x0001015b71d8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015b010c; end: 1015b01ab;  */

/* WARNING: Possible PIC construction at 0x0001015b0158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b0168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b015c) */
/* WARNING: Removing unreachable block (ram,0x0001015b016c) */

void FUN_1015b010c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7288 != -1) {
    func_0x000107c61568(0x112db7288,FUN_1015afd8c);
  }
  uVar5 = uRam0000000113800770;
  uVar4 = uRam0000000113800768;
  uVar3 = uRam0000000113800760;
  uVar2 = uRam0000000113800758;
  uVar1 = uRam0000000113800750;
  *param_1 = uRam0000000113800748;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015b01ac; end: 1015b01bf;  */

void FUN_1015b01ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7dd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7dd8,&UNK_10d966030);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b01c0; end: 1015b02c3;  */

void FUN_1015b01c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015b02c4; end: 1015b030b;  */

uint FUN_1015b02c4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  func_0x0001015b71d8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015b030c; end: 1015b0337;  */

void FUN_1015b030c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7200 != -1) {
    func_0x000107c61568(0x112db7200,FUN_1015a91ac);
  }
  uVar2 = uRam0000000113800600;
  uVar1 = uRam00000001138005f8;
  func_0x000107c61438(uRam0000000113800600,2);
  func_0x000107c5fb78(0x646e456c6c6f502e,0xec00000064726143);
  func_0x000107c6142c(uVar2);
  uRam0000000113800778 = uVar1;
  uRam0000000113800780 = uVar2;
  return;
}



/* Entry: 1015b0338; end: 1015b03df;  */

void FUN_1015b0338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7200 != -1) {
    func_0x000107c61568(0x112db7200,FUN_1015a91ac);
  }
  uVar2 = uRam0000000113800600;
  uVar1 = uRam00000001138005f8;
  func_0x000107c61438(uRam0000000113800600,2);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c6142c(uVar2);
  *param_4 = uVar1;
  *param_5 = uVar2;
  return;
}



/* Entry: 1015b03e0; end: 1015b0427;  */

void FUN_1015b03e0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966380,0x1e,2);
  uRam0000000113800790 = uStack_38;
  uRam0000000113800788 = uStack_40;
  uRam00000001138007a0 = uStack_28;
  uRam0000000113800798 = uStack_30;
  uRam00000001138007b0 = uStack_18;
  uRam00000001138007a8 = uStack_20;
  return;
}



/* Entry: 1015b0428; end: 1015b0523;  */

/* WARNING: Removing unreachable block (ram,0x0001015b04e0) */
/* WARNING: Removing unreachable block (ram,0x0001015b0520) */

void FUN_1015b0428(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001015bc140();
        lVar2 = unaff_x20 + 0x10;
LAB_1015b0508:
        (*pcVar4)(lVar2,&UNK_1103e2ee0,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015bc140();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1015b0508;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015b0524; end: 1015b05ff;  */

void FUN_1015b0524(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar1 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if (((uVar3 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 == 0)) &&
     (puVar2 = unaff_x20, FUN_1015b0600(), unaff_x21 == 0)) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x0001015bc140();
      (*pcVar4)(uVar3,3,&UNK_1103e2ee0,puVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 1015b0600; end: 1015b0687;  */

void FUN_1015b0600(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x30);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015bc140();
    (*pcVar1)(&uStack_70,2,&UNK_1103e2ee0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b0688; end: 1015b06e3;  */

void FUN_1015b0688(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  return;
}



/* Entry: 1015b06e4; end: 1015b0713;  */

undefined1  [16] FUN_1015b06e4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1015b0714; end: 1015b0747;  */

void FUN_1015b0714(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1015b0748; end: 1015b075b;  */

undefined1  [16] FUN_1015b0748(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1015b0758;
  return auVar1;
}



/* Entry: 1015b075c; end: 1015b076f;  */

void FUN_1015b075c(void)

{
  FUN_1015b0428();
  return;
}



/* Entry: 1015b0770; end: 1015b07b7;  */

void FUN_1015b0770(void)

{
  FUN_1015b0524();
  return;
}



/* Entry: 1015b07b8; end: 1015b07ef;  */

uint FUN_1015b07b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015c59fc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015b07f0; end: 1015b0857;  */

uint FUN_1015b07f0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x0001015b777c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1015b0858; end: 1015b08f7;  */

/* WARNING: Possible PIC construction at 0x0001015b08a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b08b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b08a8) */
/* WARNING: Removing unreachable block (ram,0x0001015b08b8) */

void FUN_1015b0858(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db72a0 != -1) {
    func_0x000107c61568(0x112db72a0,FUN_1015b03e0);
  }
  uVar5 = uRam00000001138007b0;
  uVar4 = uRam00000001138007a8;
  uVar3 = uRam00000001138007a0;
  uVar2 = uRam0000000113800798;
  uVar1 = uRam0000000113800790;
  *param_1 = uRam0000000113800788;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015b08f8; end: 1015b090b;  */

void FUN_1015b08f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7dc8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7dc8,&UNK_10d966028);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b090c; end: 1015b0a2f;  */

void FUN_1015b090c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015b0a30; end: 1015b0a97;  */

uint FUN_1015b0a30(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x0001015b777c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1015b0a98; end: 1015b0b33;  */

void FUN_1015b0a98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7298 != -1) {
    func_0x000107c61568(0x112db7298,FUN_1015b030c);
  }
  uVar2 = uRam0000000113800780;
  uVar1 = uRam0000000113800778;
  func_0x000107c61438(uRam0000000113800780,2);
  func_0x000107c5fb78(0x7865546c6c6f502e,0xe900000000000074);
  func_0x000107c6142c(uVar2);
  uRam00000001138007b8 = uVar1;
  uRam00000001138007c0 = uVar2;
  return;
}



/* Entry: 1015b0b34; end: 1015b0b7b;  */

void FUN_1015b0b34(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96636b,0xb,2);
  uRam00000001138007d0 = uStack_38;
  uRam00000001138007c8 = uStack_40;
  uRam00000001138007e0 = uStack_28;
  uRam00000001138007d8 = uStack_30;
  uRam00000001138007f0 = uStack_18;
  uRam00000001138007e8 = uStack_20;
  return;
}



/* Entry: 1015b0b7c; end: 1015b0c13;  */

void FUN_1015b0b7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1015b0bd0:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001015b0bec;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1015b0bb8;
code_r0x0001015b0bec:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1015b0bb8:
    (*pcVar3)();
  }
  goto LAB_1015b0bd0;
}



/* Entry: 1015b0c14; end: 1015b0cb7;  */

void FUN_1015b0c14(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1015b0cb8; end: 1015b0cfb;  */

void FUN_1015b0cb8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1015b0cfc; end: 1015b0d2b;  */

undefined1  [16] FUN_1015b0cfc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1015b0d2c; end: 1015b0d5f;  */

void FUN_1015b0d2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1015b0d60; end: 1015b0d73;  */

undefined1  [16] FUN_1015b0d60(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1015b0d70;
  return auVar1;
}



/* Entry: 1015b0d74; end: 1015b0d9b;  */

void FUN_1015b0d74(void)

{
  FUN_1015b0b7c();
  return;
}



/* Entry: 1015b0d9c; end: 1015b0dd3;  */

uint FUN_1015b0d9c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015c59bc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015b0dd4; end: 1015b0e1b;  */

uint FUN_1015b0dd4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_1015bc1c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015b0e1c; end: 1015b0ebb;  */

/* WARNING: Possible PIC construction at 0x0001015b0e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b0e78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b0e6c) */
/* WARNING: Removing unreachable block (ram,0x0001015b0e7c) */

void FUN_1015b0e1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db72c0 != -1) {
    func_0x000107c61568(0x112db72c0,FUN_1015b0b34);
  }
  uVar5 = uRam00000001138007f0;
  uVar4 = uRam00000001138007e8;
  uVar3 = uRam00000001138007e0;
  uVar2 = uRam00000001138007d8;
  uVar1 = uRam00000001138007d0;
  *param_1 = uRam00000001138007c8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015b0ebc; end: 1015b0ecf;  */

void FUN_1015b0ebc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7db8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7db8,&UNK_10d966020);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b0ed0; end: 1015b0f03;  */

void FUN_1015b0ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}


