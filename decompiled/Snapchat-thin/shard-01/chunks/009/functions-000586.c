/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015e5f04; end: 1015e5f37;  */

void FUN_1015e5f04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1015e5f38; end: 1015e5f4b;  */

undefined1  [16] FUN_1015e5f38(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1015e5f48;
  return auVar1;
}



/* Entry: 1015e5f4c; end: 1015e5f73;  */

void FUN_1015e5f4c(void)

{
  FUN_1015e5ce8();
  return;
}



/* Entry: 1015e5f74; end: 1015e5f77;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015e5f74(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015e5f78; end: 1015e5faf;  */

uint FUN_1015e5f78(long param_1,long param_2)

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
  func_0x0001015ecd18();
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



/* Entry: 1015e5fb0; end: 1015e5ff7;  */

uint FUN_1015e5fb0(undefined8 *param_1)

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
  func_0x0001015e8bbc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015e5ff8; end: 1015e6097;  */

/* WARNING: Possible PIC construction at 0x0001015e6044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015e6054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015e6048) */
/* WARNING: Removing unreachable block (ram,0x0001015e6058) */

void FUN_1015e5ff8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db87f8 != -1) {
    func_0x000107c61568(0x112db87f8,FUN_1015e5ca0);
  }
  uVar5 = uRam0000000113801050;
  uVar4 = uRam0000000113801048;
  uVar3 = uRam0000000113801040;
  uVar2 = uRam0000000113801038;
  uVar1 = uRam0000000113801030;
  *param_1 = uRam0000000113801028;
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



/* Entry: 1015e6098; end: 1015e60d3;  */

void FUN_1015e6098(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8d18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8d18,&UNK_10d9691f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015e60d4; end: 1015e61f7;  */

void FUN_1015e60d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015e61f8; end: 1015e623b;  */

uint FUN_1015e61f8(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001015e8bbc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015e623c; end: 1015e6263;  */

void FUN_1015e623c(void)

{
  func_0x000107c5fb78(0x746954656761502e,0xea0000000000656c);
  uRam0000000113801058 = 0xd000000000000029;
  uRam0000000113801060 = 0x800000010efb3360;
  return;
}



/* Entry: 1015e6264; end: 1015e62ab;  */

void FUN_1015e6264(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d969271,0xe,2);
  uRam0000000113801070 = uStack_38;
  uRam0000000113801068 = uStack_40;
  uRam0000000113801080 = uStack_28;
  uRam0000000113801078 = uStack_30;
  uRam0000000113801090 = uStack_18;
  uRam0000000113801088 = uStack_20;
  return;
}



/* Entry: 1015e62ac; end: 1015e638f;  */

void FUN_1015e62ac(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x0001015ea138();
LAB_1015e6334:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        goto LAB_1015e6334;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015e6390; end: 1015e6443;  */

void FUN_1015e6390(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x0001015ea138();
    (*pcVar2)(&lStack_50,1,&UNK_1103e5830,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_1015e6444();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1015e6444; end: 1015e64c7;  */

void FUN_1015e6444(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x28);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e64c8; end: 1015e6513;  */

void FUN_1015e64c8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 1015e6514; end: 1015e6543;  */

undefined1  [16] FUN_1015e6514(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1015e6544; end: 1015e6577;  */

void FUN_1015e6544(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1015e6578; end: 1015e658b;  */

undefined1  [16] FUN_1015e6578(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1015e6588;
  return auVar1;
}



/* Entry: 1015e658c; end: 1015e659f;  */

void FUN_1015e658c(void)

{
  FUN_1015e62ac();
  return;
}



/* Entry: 1015e65a0; end: 1015e65d7;  */

void FUN_1015e65a0(void)

{
  FUN_1015e6390();
  return;
}



/* Entry: 1015e65d8; end: 1015e65db;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015e65d8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015e65dc; end: 1015e6613;  */

uint FUN_1015e65dc(long param_1,long param_2)

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
  func_0x0001015eccd8();
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



/* Entry: 1015e6614; end: 1015e665b;  */

uint FUN_1015e6614(undefined8 *param_1)

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
  FUN_1015e8e2c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015e665c; end: 1015e66fb;  */

/* WARNING: Possible PIC construction at 0x0001015e66a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015e66b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015e66ac) */
/* WARNING: Removing unreachable block (ram,0x0001015e66bc) */

void FUN_1015e665c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8818 != -1) {
    func_0x000107c61568(0x112db8818,FUN_1015e6264);
  }
  uVar5 = uRam0000000113801090;
  uVar4 = uRam0000000113801088;
  uVar3 = uRam0000000113801080;
  uVar2 = uRam0000000113801078;
  uVar1 = uRam0000000113801070;
  *param_1 = uRam0000000113801068;
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



/* Entry: 1015e66fc; end: 1015e6737;  */

void FUN_1015e66fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8d08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8d08,&UNK_10d9691e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015e6738; end: 1015e683b;  */

void FUN_1015e6738(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015e683c; end: 1015e6883;  */

uint FUN_1015e683c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015e8e2c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015e6884; end: 1015e68a3;  */

void FUN_1015e6884(void)

{
  func_0x000107c5fb78(0x656761502e,0xe500000000000000);
  uRam0000000113801098 = 0xd000000000000029;
  uRam00000001138010a0 = 0x800000010efb3360;
  return;
}



/* Entry: 1015e68a4; end: 1015e690b;  */

void FUN_1015e68a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd000000000000029;
  *param_5 = 0x800000010efb3360;
  return;
}



/* Entry: 1015e690c; end: 1015e6953;  */

void FUN_1015e690c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d969230,0x40,2);
  uRam00000001138010b0 = uStack_38;
  uRam00000001138010a8 = uStack_40;
  uRam00000001138010c0 = uStack_28;
  uRam00000001138010b8 = uStack_30;
  uRam00000001138010d0 = uStack_18;
  uRam00000001138010c8 = uStack_20;
  return;
}



/* Entry: 1015e6954; end: 1015e6ab3;  */

/* WARNING: Removing unreachable block (ram,0x0001015e6ab0) */

void FUN_1015e6954(undefined8 param_1,long param_2,long param_3)

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
          (**(code **)(param_3 + 0x150))();
        }
        else if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x0001015ea1b8();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1103e57a0;
          goto LAB_1015e69e0;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1015eaef0();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_1103e5c78;
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x78;
          puVar3 = &UNK_110790c80;
        }
        else {
          if (lVar1 != 10) goto LAB_1015e69f4;
          pcVar5 = *(code **)(param_3 + 0x1a0);
          func_0x0001015ea1f8();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1103e5938;
        }
LAB_1015e69e0:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1015e69f4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015e6ab4; end: 1015e6bf7;  */

void FUN_1015e6ab4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[2] != 0) {
      uStack_58 = (undefined1)unaff_x20[3];
      pcVar5 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[2];
      func_0x0001015ea1b8();
      (*pcVar5)(&uStack_60,2,&UNK_1103e57a0,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_1015e6bf8();
    if (unaff_x21 == 0) {
      puVar3 = unaff_x20;
      FUN_1015e6c8c();
      uVar4 = unaff_x20[4];
      if (*(long *)(uVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        func_0x0001015ea1f8();
        (*pcVar5)(uVar4,10,&UNK_1103e5938,puVar3,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1015e6bf8; end: 1015e6c8b;  */

void FUN_1015e6bf8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x60);
  if (lStack_58 != 1) {
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015eaef0();
    (*pcVar1)(&uStack_80,3,&UNK_1103e5c78,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e6c8c; end: 1015e6d0f;  */

void FUN_1015e6c8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x80);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015e6d10; end: 1015e6d83;  */

void FUN_1015e6d10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 1015e6d84; end: 1015e6db3;  */

undefined1  [16] FUN_1015e6d84(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1015e6db4; end: 1015e6de7;  */

void FUN_1015e6db4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1015e6de8; end: 1015e6dfb;  */

undefined1  [16] FUN_1015e6de8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1015e6df8;
  return auVar1;
}



/* Entry: 1015e6dfc; end: 1015e6e0f;  */

void FUN_1015e6dfc(void)

{
  FUN_1015e6954();
  return;
}



/* Entry: 1015e6e10; end: 1015e6e67;  */

void FUN_1015e6e10(void)

{
  FUN_1015e6ab4();
  return;
}



/* Entry: 1015e6e68; end: 1015e6e6b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015e6e68(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015e6e6c; end: 1015e6ea3;  */

uint FUN_1015e6e6c(long param_1,long param_2)

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
  FUN_1015ecc98();
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



/* Entry: 1015e6ea4; end: 1015e6f33;  */

uint FUN_1015e6ea4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_1015e9afc(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1015e6f34; end: 1015e6fd3;  */

/* WARNING: Possible PIC construction at 0x0001015e6f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015e6f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015e6f84) */
/* WARNING: Removing unreachable block (ram,0x0001015e6f94) */

void FUN_1015e6f34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8838 != -1) {
    func_0x000107c61568(0x112db8838,FUN_1015e690c);
  }
  uVar5 = uRam00000001138010d0;
  uVar4 = uRam00000001138010c8;
  uVar3 = uRam00000001138010c0;
  uVar2 = uRam00000001138010b8;
  uVar1 = uRam00000001138010b0;
  *param_1 = uRam00000001138010a8;
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



/* Entry: 1015e6fd4; end: 1015e700f;  */

void FUN_1015e6fd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8cf8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8cf8,&UNK_10d9691e0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015e7010; end: 1015e715b;  */

void FUN_1015e7010(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015e715c; end: 1015e71eb;  */

uint FUN_1015e715c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1015e9afc(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1015e71ec; end: 1015e7793;  */

byte * FUN_1015e71ec(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  int iVar16;
  ulong unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  ulong *puVar17;
  long lVar18;
  undefined1 auStack_2f8 [168];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 == *(long *)(param_2 + 0x10)) {
    if ((lVar18 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x23 = (ulong *)(param_2 + 0x48);
      puVar17 = (ulong *)(param_1 + 0x48);
      do {
        pbVar7 = (byte *)puVar17[-3];
        pbVar6 = (byte *)puVar17[-2];
        unaff_x22 = puVar17[-1];
        unaff_x19 = (byte *)*puVar17;
        pbVar2 = (byte *)unaff_x23[-2];
        uVar1 = unaff_x23[-1];
        unaff_x24 = *unaff_x23;
        if ((char)unaff_x23[-4] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001015e7294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)*(int *)(FUN_100cb6504 + unaff_x23[-5] * 4) + 0x1015e7288))();
          return pbVar7;
        }
        if ((puVar17[-5] != unaff_x23[-5]) ||
           (((pbVar7 != (byte *)unaff_x23[-3] || (pbVar6 != pbVar2)) &&
            (param_2 = pbVar6, func_0x000107c605b8(), unaff_x20 = pbVar2, ((ulong)pbVar7 & 1) == 0))
           )) goto LAB_1015e772c;
        uVar14 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar9 = uVar14 >> 0x1e;
        uVar3 = (uint)(unaff_x24 >> 0x20);
        uVar12 = uVar3 >> 0x1e;
        iVar16 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar11 = 0;
          if (((unaff_x22 != 0) || (unaff_x19 != (byte *)0xc000000000000000)) ||
             ((unaff_x24 >> 0x3e < 3 ||
              ((uVar11 = 0, uVar1 != 0 || (unaff_x24 != 0xc000000000000000))))))
          goto joined_r0x0001015e7510;
        }
        else {
          if (uVar14 >> 0x1e < 2) {
            if (uVar9 == 0) {
              uVar11 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar10 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar10,iVar16)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e7780);
                (*pcVar4)();
              }
              uVar11 = (ulong)(iVar10 - iVar16);
            }
joined_r0x0001015e7510:
            if (1 < uVar3 >> 0x1e) goto LAB_1015e732c;
LAB_1015e7360:
            if (uVar12 == 0) {
              uVar13 = unaff_x24 >> 0x30 & 0xff;
            }
            else {
              iVar10 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar10,(int)uVar1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e7778);
                (*pcVar4)();
              }
              uVar13 = (ulong)(iVar10 - (int)uVar1);
            }
          }
          else {
            if (uVar9 == 2) {
              uVar11 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e777c);
                (*pcVar4)();
              }
              goto joined_r0x0001015e7510;
            }
            uVar11 = 0;
            if (uVar12 < 2) goto LAB_1015e7360;
LAB_1015e732c:
            if (uVar12 != 2) {
              if (uVar11 == 0) goto LAB_1015e724c;
              goto LAB_1015e772c;
            }
            uVar13 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
            if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e7774);
              (*pcVar4)();
            }
          }
          if (uVar11 != uVar13) goto LAB_1015e772c;
          if (0 < (long)uVar11) {
            param_2 = unaff_x19;
            if (uVar9 < 2) {
              if (uVar9 != 0) {
                lVar15 = (long)iVar16;
                uStack_a8 = ((long)unaff_x22 >> 0x20) - lVar15;
                if ((long)unaff_x22 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e7784);
                  uStack_a0 = unaff_x21;
                  pbStack_98 = pbVar6;
                  pbStack_90 = pbVar2;
                  (*pcVar4)();
                }
                uStack_a0 = unaff_x21;
                pbStack_98 = pbVar6;
                pbStack_90 = pbVar2;
                func_0x000107c61434(pbVar6);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(pbStack_90);
                uVar13 = uVar1;
                func_0x00010006c00c(uVar1,unaff_x24);
                func_0x000107c5ec30();
                if (uVar13 == 0) {
                  func_0x000107c5ec38();
                  uVar11 = 0;
                  lVar15 = 0;
                }
                else {
                  uVar5 = uVar13;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar15,uVar5)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e7790);
                    (*pcVar4)();
                  }
                  uVar13 = (lVar15 - uVar5) + uVar13;
                  func_0x000107c5ec38();
                  if ((long)uStack_a8 <= (long)uVar5) {
                    uVar5 = uStack_a8;
                  }
                  uVar11 = 0;
                  if (uVar13 != 0) {
                    uVar11 = uVar13;
                  }
                  lVar15 = 0;
                  if (uVar13 != 0) {
                    lVar15 = uVar5 + uVar13;
                  }
                }
LAB_1015e76ec:
                unaff_x21 = uStack_a0;
                unaff_x20 = (byte *)((ulong)unaff_x19 & 0x3fffffffffffffff);
                FUN_100e25bdc(abStack_80,uVar11,lVar15,uVar1,unaff_x24);
                func_0x000107c6142c(pbStack_90);
                func_0x00010006c090(uVar1,unaff_x24);
                func_0x000107c6142c(pbStack_98);
                func_0x00010006c090(unaff_x22);
                if ((abStack_80[0] & 1) != 0) goto LAB_1015e724c;
                goto LAB_1015e772c;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)(unaff_x22 >> 8);
              abStack_80[2] = (byte)(unaff_x22 >> 0x10);
              abStack_80[3] = (byte)(unaff_x22 >> 0x18);
              abStack_80[4] = (byte)(unaff_x22 >> 0x20);
              abStack_80[5] = (byte)(unaff_x22 >> 0x28);
              abStack_80[6] = (byte)(unaff_x22 >> 0x30);
              abStack_80[7] = (byte)(unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              unaff_x20 = abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff);
              pbStack_98 = pbVar6;
              func_0x000107c61434(pbVar6);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(pbVar2);
              func_0x00010006c00c(uVar1,unaff_x24);
              FUN_100e25bdc(&bStack_81,abStack_80,unaff_x20,uVar1,unaff_x24);
              func_0x000107c6142c(pbVar2);
              func_0x00010006c090(uVar1,unaff_x24);
              pbVar6 = pbStack_98;
            }
            else {
              if (uVar9 == 2) {
                lVar15 = *(long *)(unaff_x22 + 0x10);
                uStack_a8 = *(ulong *)(unaff_x22 + 0x18);
                uStack_a0 = unaff_x21;
                pbStack_98 = pbVar6;
                pbStack_90 = pbVar2;
                func_0x000107c61434(pbVar6);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(pbStack_90);
                uVar11 = uVar1;
                func_0x00010006c00c(uVar1,unaff_x24);
                func_0x000107c5ec30();
                uVar13 = uVar11;
                if (uVar11 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar15,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e778c);
                    (*pcVar4)();
                  }
                  uVar11 = (lVar15 - uVar13) + uVar11;
                }
                uVar5 = uStack_a8 - lVar15;
                if (SBORROW8(uStack_a8,lVar15)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1015e7788);
                  (*pcVar4)();
                }
                func_0x000107c5ec38();
                if (uVar11 == 0) {
                  lVar15 = 0;
                }
                else {
                  if ((long)uVar5 <= (long)uVar13) {
                    uVar13 = uVar5;
                  }
                  lVar15 = uVar13 + uVar11;
                }
                goto LAB_1015e76ec;
              }
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              pbStack_90 = pbVar2;
              func_0x000107c61434(pbVar6);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x20 = pbStack_90;
              func_0x000107c61434(pbStack_90);
              func_0x00010006c00c(uVar1,unaff_x24);
              FUN_100e25bdc(&bStack_81,abStack_80,abStack_80,uVar1,unaff_x24);
              func_0x000107c6142c(unaff_x20);
              func_0x00010006c090(uVar1,unaff_x24);
            }
            func_0x000107c6142c(pbVar6);
            func_0x00010006c090(unaff_x22);
            if ((bStack_81 & 1) == 0) goto LAB_1015e772c;
          }
        }
LAB_1015e724c:
        unaff_x23 = unaff_x23 + 6;
        puVar17 = puVar17 + 6;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    pbVar7 = (byte *)0x1;
  }
  else {
LAB_1015e772c:
    pbVar7 = (byte *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar7;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_1015e7794;
  lVar18 = *(long *)(pbVar7 + 0x10);
  if (lVar18 == *(long *)(param_2 + 0x10)) {
    if ((lVar18 == 0) || (pbVar7 == param_2)) {
      uVar14 = 1;
    }
    else {
      pbVar7 = pbVar7 + 0x20;
      param_2 = param_2 + 0x20;
      uStack_f0 = unaff_x24;
      puStack_e8 = unaff_x23;
      uStack_e0 = unaff_x22;
      uStack_d8 = unaff_x21;
      pbStack_d0 = unaff_x20;
      pbStack_c8 = unaff_x19;
      puStack_c0 = &stack0xfffffffffffffff0;
      do {
        lVar18 = lVar18 + -1;
        uStack_1c8 = *(undefined8 *)(pbVar7 + 0x88);
        uStack_1d0 = *(undefined8 *)(pbVar7 + 0x80);
        uStack_1b8 = *(undefined8 *)(pbVar7 + 0x98);
        uStack_1c0 = *(undefined8 *)(pbVar7 + 0x90);
        uStack_1b0 = *(undefined8 *)(pbVar7 + 0xa0);
        uStack_208 = *(undefined8 *)(pbVar7 + 0x48);
        uStack_210 = *(undefined8 *)(pbVar7 + 0x40);
        uStack_1f8 = *(undefined8 *)(pbVar7 + 0x58);
        uStack_200 = *(undefined8 *)(pbVar7 + 0x50);
        uStack_1e8 = *(undefined8 *)(pbVar7 + 0x68);
        uStack_1f0 = *(undefined8 *)(pbVar7 + 0x60);
        uStack_1d8 = *(undefined8 *)(pbVar7 + 0x78);
        uStack_1e0 = *(undefined8 *)(pbVar7 + 0x70);
        uStack_248 = *(undefined8 *)(pbVar7 + 8);
        uStack_250 = *(undefined8 *)pbVar7;
        uStack_238 = *(undefined8 *)(pbVar7 + 0x18);
        uStack_240 = *(undefined8 *)(pbVar7 + 0x10);
        uStack_228 = *(undefined8 *)(pbVar7 + 0x28);
        uStack_230 = *(undefined8 *)(pbVar7 + 0x20);
        uStack_218 = *(undefined8 *)(pbVar7 + 0x38);
        uStack_220 = *(undefined8 *)(pbVar7 + 0x30);
        uStack_118 = *(undefined8 *)(param_2 + 0x88);
        uStack_120 = *(undefined8 *)(param_2 + 0x80);
        uStack_108 = *(undefined8 *)(param_2 + 0x98);
        uStack_110 = *(undefined8 *)(param_2 + 0x90);
        uStack_100 = *(undefined8 *)(param_2 + 0xa0);
        uStack_158 = *(undefined8 *)(param_2 + 0x48);
        uStack_160 = *(undefined8 *)(param_2 + 0x40);
        uStack_148 = *(undefined8 *)(param_2 + 0x58);
        uStack_150 = *(undefined8 *)(param_2 + 0x50);
        uStack_138 = *(undefined8 *)(param_2 + 0x68);
        uStack_140 = *(undefined8 *)(param_2 + 0x60);
        uStack_128 = *(undefined8 *)(param_2 + 0x78);
        uStack_130 = *(undefined8 *)(param_2 + 0x70);
        uStack_198 = *(undefined8 *)(param_2 + 8);
        uStack_1a0 = *(undefined8 *)param_2;
        uStack_188 = *(undefined8 *)(param_2 + 0x18);
        uStack_190 = *(undefined8 *)(param_2 + 0x10);
        uStack_178 = *(undefined8 *)(param_2 + 0x28);
        uStack_180 = *(undefined8 *)(param_2 + 0x20);
        uStack_168 = *(undefined8 *)(param_2 + 0x38);
        uStack_170 = *(undefined8 *)(param_2 + 0x30);
        FUN_101554434(&uStack_250,auStack_2f8);
        FUN_101554434(&uStack_1a0,auStack_2f8);
        puVar8 = &uStack_250;
        FUN_1015e917c(puVar8,&uStack_1a0);
        uVar14 = (uint)puVar8;
        func_0x000101554470(&uStack_1a0);
        func_0x000101554470(&uStack_250);
        if (((ulong)puVar8 & 1) == 0) break;
        param_2 = param_2 + 0xa8;
        pbVar7 = pbVar7 + 0xa8;
      } while (lVar18 != 0);
    }
  }
  else {
    uVar14 = 0;
  }
  return (byte *)(ulong)(uVar14 & 1);
}



/* Entry: 1015e7794; end: 1015e78b3;  */

uint FUN_1015e7794(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_248 [168];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_118 = puVar4[0x11];
        uStack_120 = puVar4[0x10];
        uStack_108 = puVar4[0x13];
        uStack_110 = puVar4[0x12];
        uStack_100 = puVar4[0x14];
        uStack_158 = puVar4[9];
        uStack_160 = puVar4[8];
        uStack_148 = puVar4[0xb];
        uStack_150 = puVar4[10];
        uStack_138 = puVar4[0xd];
        uStack_140 = puVar4[0xc];
        uStack_128 = puVar4[0xf];
        uStack_130 = puVar4[0xe];
        uStack_198 = puVar4[1];
        uStack_1a0 = *puVar4;
        uStack_188 = puVar4[3];
        uStack_190 = puVar4[2];
        uStack_178 = puVar4[5];
        uStack_180 = puVar4[4];
        uStack_168 = puVar4[7];
        uStack_170 = puVar4[6];
        uStack_68 = puVar5[0x11];
        uStack_70 = puVar5[0x10];
        uStack_58 = puVar5[0x13];
        uStack_60 = puVar5[0x12];
        uStack_50 = puVar5[0x14];
        uStack_a8 = puVar5[9];
        uStack_b0 = puVar5[8];
        uStack_98 = puVar5[0xb];
        uStack_a0 = puVar5[10];
        uStack_88 = puVar5[0xd];
        uStack_90 = puVar5[0xc];
        uStack_78 = puVar5[0xf];
        uStack_80 = puVar5[0xe];
        uStack_e8 = puVar5[1];
        uStack_f0 = *puVar5;
        uStack_d8 = puVar5[3];
        uStack_e0 = puVar5[2];
        uStack_c8 = puVar5[5];
        uStack_d0 = puVar5[4];
        uStack_b8 = puVar5[7];
        uStack_c0 = puVar5[6];
        FUN_101554434(&uStack_1a0,auStack_248);
        FUN_101554434(&uStack_f0,auStack_248);
        puVar1 = &uStack_1a0;
        FUN_1015e917c(puVar1,&uStack_f0);
        uVar3 = (uint)puVar1;
        func_0x000101554470(&uStack_f0);
        func_0x000101554470(&uStack_1a0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x15;
        puVar4 = puVar4 + 0x15;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1015e78b4; end: 1015e81b3;  */

undefined8 FUN_1015e78b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 auStack_160 [80];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar9 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar11 = (ulong *)(param_1 + 0x20);
  puVar10 = (ulong *)(param_2 + 0x20);
  do {
    lVar9 = lVar9 + -1;
    uStack_e8 = puVar11[5];
    uStack_f0 = puVar11[4];
    uStack_d8 = puVar11[7];
    uStack_e0 = puVar11[6];
    uStack_c8 = puVar11[9];
    uStack_d0 = puVar11[8];
    uStack_108 = puVar11[1];
    uVar12 = *puVar11;
    uStack_f8 = puVar11[3];
    uStack_100 = puVar11[2];
    uStack_98 = puVar10[5];
    uStack_a0 = puVar10[4];
    uStack_88 = puVar10[7];
    uStack_90 = puVar10[6];
    uStack_78 = puVar10[9];
    uStack_80 = puVar10[8];
    uStack_b8 = puVar10[1];
    uStack_c0 = *puVar10;
    uStack_a8 = puVar10[3];
    uStack_b0 = puVar10[2];
    uStack_110 = uVar12;
    if (((uVar12 != uStack_c0) || (uStack_108 != uStack_b8)) &&
       (func_0x000107c605b8(), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar7 = uStack_78;
    uVar6 = uStack_80;
    uVar5 = uStack_88;
    uVar4 = uStack_90;
    uVar3 = uStack_c8;
    uVar2 = uStack_d0;
    uVar1 = uStack_d8;
    uVar12 = uStack_e0;
    if ((char)uStack_a8 == '\x01') {
      if ((long)uStack_b0 < 2) {
        if (uStack_b0 == 0) {
          if (uStack_100 != 0) {
            return 0;
          }
        }
        else if (uStack_100 != 1) {
          return 0;
        }
      }
      else if (uStack_b0 == 2) {
        if (uStack_100 != 2) {
          return 0;
        }
      }
      else if (uStack_100 != 3) {
        return 0;
      }
    }
    else if (uStack_100 != uStack_b0) {
      return 0;
    }
    if (uStack_d8 == 0) {
      if (uStack_88 != 0) {
LAB_1015e7b2c:
        FUN_101597350(uStack_e0,uStack_d8,uStack_d0,uStack_c8);
        FUN_101597350(uVar4,uVar5,uVar6,uVar7);
        FUN_101597ae4(uVar12,uVar1,uVar2,uVar3);
        FUN_101597ae4(uVar4,uVar5,uVar6,uVar7);
        return 0;
      }
      FUN_1015eced8(&uStack_110,auStack_160);
      FUN_1015eced8(&uStack_c0,auStack_160);
      FUN_101597350(uVar12,0,uVar2,uVar3);
      FUN_101597350(uVar4,0,uVar6,uVar7);
    }
    else {
      if (uStack_88 == 0) goto LAB_1015e7b2c;
      if (((uStack_e0 != uStack_90) || (uStack_d8 != uStack_88)) &&
         (uVar8 = uStack_e0, func_0x000107c605b8(uStack_e0,uStack_d8,uStack_90,uStack_88,0),
         (uVar8 & 1) == 0)) {
        FUN_1015eced8(&uStack_110,auStack_160);
        FUN_1015eced8(&uStack_c0,auStack_160);
        FUN_101597350(uVar12,uVar1,uVar2,uVar3);
        FUN_101597350(uVar4,uVar5,uVar6,uVar7);
        FUN_101597ae4(uVar4,uVar5,uVar6,uVar7);
LAB_1015e7c0c:
        FUN_101597ae4(uVar12,uVar1,uVar2,uVar3);
        func_0x0001015ecf0c(&uStack_c0);
        func_0x0001015ecf0c(&uStack_110);
        return 0;
      }
      FUN_1015eced8(&uStack_110,auStack_160);
      FUN_1015eced8(&uStack_c0,auStack_160);
      FUN_101597350(uVar12,uVar1,uVar2,uVar3);
      FUN_101597350(uVar4,uVar5,uVar6,uVar7);
      uVar8 = uVar2;
      FUN_100e25fcc(uVar2,uVar3,uVar6,uVar7);
      FUN_101597ae4(uVar4,uVar5,uVar6,uVar7);
      if ((uVar8 & 1) == 0) goto LAB_1015e7c0c;
    }
    FUN_101597ae4(uVar12,uVar1,uVar2,uVar3);
    uVar12 = uStack_f0;
    FUN_100e25fcc(uStack_f0,uStack_e8,uStack_a0,uStack_98);
    func_0x0001015ecf0c(&uStack_c0);
    func_0x0001015ecf0c(&uStack_110);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    if (lVar9 == 0) {
      return 1;
    }
    puVar11 = puVar11 + 10;
    puVar10 = puVar10 + 10;
  } while( true );
}



/* Entry: 1015e81b4; end: 1015e82d3;  */

uint FUN_1015e81b4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_218 [152];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_118 = puVar4[0xd];
        uStack_120 = puVar4[0xc];
        uStack_108 = puVar4[0xf];
        uStack_110 = puVar4[0xe];
        uStack_f8 = puVar4[0x11];
        uStack_100 = puVar4[0x10];
        uStack_f0 = puVar4[0x12];
        uStack_158 = puVar4[5];
        uStack_160 = puVar4[4];
        uStack_148 = puVar4[7];
        uStack_150 = puVar4[6];
        uStack_138 = puVar4[9];
        uStack_140 = puVar4[8];
        uStack_128 = puVar4[0xb];
        uStack_130 = puVar4[10];
        uStack_178 = puVar4[1];
        uStack_180 = *puVar4;
        uStack_168 = puVar4[3];
        uStack_170 = puVar4[2];
        uStack_78 = puVar5[0xd];
        uStack_80 = puVar5[0xc];
        uStack_68 = puVar5[0xf];
        uStack_70 = puVar5[0xe];
        uStack_58 = puVar5[0x11];
        uStack_60 = puVar5[0x10];
        uStack_50 = puVar5[0x12];
        uStack_b8 = puVar5[5];
        uStack_c0 = puVar5[4];
        uStack_a8 = puVar5[7];
        uStack_b0 = puVar5[6];
        uStack_98 = puVar5[9];
        uStack_a0 = puVar5[8];
        uStack_88 = puVar5[0xb];
        uStack_90 = puVar5[10];
        uStack_d8 = puVar5[1];
        uStack_e0 = *puVar5;
        uStack_c8 = puVar5[3];
        uStack_d0 = puVar5[2];
        func_0x0001015ecfb8(&uStack_180,auStack_218);
        func_0x0001015ecfb8(&uStack_e0,auStack_218);
        puVar1 = &uStack_180;
        FUN_1015e9afc(puVar1,&uStack_e0);
        uVar3 = (uint)puVar1;
        func_0x0001015ecfec(&uStack_e0);
        func_0x0001015ecfec(&uStack_180);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x13;
        puVar4 = puVar4 + 0x13;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1015e82d4; end: 1015e8b4b;  */

void FUN_1015e82d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar15 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar15 = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar14 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar12 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *puVar6 = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined1 *)(unaff_x20 + 0xf8) = 1;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined1 *)(unaff_x20 + 0x108) = 1;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined1 *)(unaff_x20 + 0x218) = 1;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined1 *)(unaff_x20 + 0x228) = 1;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined **)(unaff_x20 + 0x250) = puVar4;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined1 *)(unaff_x20 + 0x260) = 1;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar15,auStack_98,1,0);
  *puVar15 = uVar8;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar11;
  func_0x000107c61428(param_1 + 0x20,auStack_b0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar14,auStack_c8,1,0);
  *puVar14 = uVar16;
  func_0x000107c61428(param_1 + 0x28,auStack_e0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61428(puVar12,auStack_f8,1,0);
  *puVar12 = uVar8;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar13;
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar13);
  func_0x000107c61428(param_1 + 0x38,auStack_110,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar20 = *(undefined8 *)(param_1 + 0x40);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar21 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar9,auStack_128,1,0);
  uVar10 = *puVar9;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar9 = uVar8;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar21;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
  FUN_1015e8cf0(uVar8,uVar20,uVar11,uVar21,uVar13,uVar5,uVar7);
  func_0x0001015e8d48(uVar10,uVar16,uVar17,uVar18,uVar1,uVar19,uVar2);
  func_0x000107c61428(param_1 + 0x70,auStack_140,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  uVar19 = *(undefined8 *)(param_1 + 0x88);
  uVar17 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_158,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar19;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar17;
  func_0x000101541428(uVar8,uVar18,uVar11,uVar19,uVar17);
  FUN_101553bdc(uVar13,uVar20,uVar16,uVar21,uVar5);
  func_0x000107c61428(param_1 + 0x98,auStack_170,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  uVar18 = *(undefined8 *)(param_1 + 0xa0);
  uVar11 = *(undefined8 *)(param_1 + 0xa8);
  uVar19 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  func_0x000107c61428(puVar6,auStack_188,1,0);
  uVar17 = *puVar6;
  uVar13 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xb8);
  *puVar6 = uVar8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar18;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar19;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar5;
  func_0x000101541428(uVar8,uVar18,uVar11,uVar19,uVar5);
  FUN_101553bdc(uVar17,uVar13,uVar20,uVar16,uVar21);
  func_0x000107c61428(param_1 + 0xc0,auStack_1a0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  uVar20 = *(undefined8 *)(param_1 + 200);
  uVar11 = *(undefined8 *)(param_1 + 0xd0);
  uVar21 = *(undefined8 *)(param_1 + 0xd8);
  uVar13 = *(undefined8 *)(param_1 + 0xe0);
  uVar5 = *(undefined8 *)(param_1 + 0xe8);
  func_0x000107c61428(unaff_x20 + 0xc0,auStack_1b8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar17 = *(undefined8 *)(unaff_x20 + 200);
  uVar18 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar8;
  *(undefined8 *)(unaff_x20 + 200) = uVar20;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar21;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar5;
  FUN_1015e8b4c(uVar8,uVar20,uVar11,uVar21,uVar13,uVar5);
  func_0x0001015e8b84(uVar16,uVar17,uVar18,uVar1,uVar19,uVar2);
  func_0x000107c61428(param_1 + 0xf0,auStack_1d0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0xf0);
  uVar3 = *(undefined1 *)(param_1 + 0xf8);
  func_0x000107c61428(unaff_x20 + 0xf0,auStack_1e8,1,0);
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar8;
  *(undefined1 *)(unaff_x20 + 0xf8) = uVar3;
  func_0x000107c61428(param_1 + 0x100,auStack_200,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x100);
  uVar3 = *(undefined1 *)(param_1 + 0x108);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_218,1,0);
  *(undefined8 *)(unaff_x20 + 0x100) = uVar8;
  *(undefined1 *)(unaff_x20 + 0x108) = uVar3;
  func_0x000107c61428(param_1 + 0x110,auStack_230,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x110);
  uVar18 = *(undefined8 *)(param_1 + 0x118);
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  uVar19 = *(undefined8 *)(param_1 + 0x128);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_248,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar19;
  FUN_101597350(uVar8,uVar18,uVar11,uVar19);
  FUN_101597ae4(uVar13,uVar20,uVar16,uVar21);
  func_0x000107c61428(param_1 + 0x130,auStack_260,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  uVar20 = *(undefined8 *)(param_1 + 0x138);
  uVar11 = *(undefined8 *)(param_1 + 0x140);
  uVar21 = *(undefined8 *)(param_1 + 0x148);
  uVar13 = *(undefined8 *)(param_1 + 0x150);
  uVar5 = *(undefined8 *)(param_1 + 0x158);
  uVar10 = *(undefined8 *)(param_1 + 0x160);
  func_0x000107c61428(unaff_x20 + 0x130,auStack_278,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined8 *)(unaff_x20 + 0x130) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x140) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar21;
  *(undefined8 *)(unaff_x20 + 0x150) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x158) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x160) = uVar10;
  FUN_1015e8cf0(uVar8,uVar20,uVar11,uVar21,uVar13,uVar5,uVar10);
  func_0x0001015e8d48(uVar16,uVar17,uVar18,uVar1,uVar19,uVar2,uVar7);
  func_0x000107c61428(param_1 + 0x168,auStack_290,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x168);
  uVar20 = *(undefined8 *)(param_1 + 0x170);
  uVar11 = *(undefined8 *)(param_1 + 0x178);
  uVar21 = *(undefined8 *)(param_1 + 0x180);
  uVar13 = *(undefined8 *)(param_1 + 0x188);
  uVar5 = *(undefined8 *)(param_1 + 400);
  uVar10 = *(undefined8 *)(param_1 + 0x198);
  func_0x000107c61428(unaff_x20 + 0x168,auStack_2a8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x20 + 400);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x20 + 0x168) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x170) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x180) = uVar21;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar13;
  *(undefined8 *)(unaff_x20 + 400) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x198) = uVar10;
  FUN_1015e8cf0(uVar8,uVar20,uVar11,uVar21,uVar13,uVar5,uVar10);
  func_0x0001015e8d48(uVar16,uVar17,uVar18,uVar1,uVar19,uVar2,uVar7);
  func_0x000107c61428(param_1 + 0x1a0,auStack_2c0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1a0);
  uVar20 = *(undefined8 *)(param_1 + 0x1a8);
  uVar11 = *(undefined8 *)(param_1 + 0x1b0);
  uVar21 = *(undefined8 *)(param_1 + 0x1b8);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar5 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x000107c61428(unaff_x20 + 0x1a0,auStack_2d8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x1d0);
  *(undefined8 *)(unaff_x20 + 0x1a0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar21;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar10;
  FUN_1015e8cf0(uVar8,uVar20,uVar11,uVar21,uVar13,uVar5,uVar10);
  func_0x0001015e8d48(uVar16,uVar17,uVar18,uVar1,uVar19,uVar2,uVar7);
  func_0x000107c61428(param_1 + 0x1d8,auStack_2f0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x1d8);
  uVar20 = *(undefined8 *)(param_1 + 0x1e0);
  uVar11 = *(undefined8 *)(param_1 + 0x1e8);
  uVar21 = *(undefined8 *)(param_1 + 0x1f0);
  uVar13 = *(undefined8 *)(param_1 + 0x1f8);
  uVar5 = *(undefined8 *)(param_1 + 0x200);
  uVar10 = *(undefined8 *)(param_1 + 0x208);
  func_0x000107c61428(unaff_x20 + 0x1d8,auStack_308,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x200);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x208);
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar20;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uVar21;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x200) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x208) = uVar10;
  FUN_1015e8cf0(uVar8,uVar20,uVar11,uVar21,uVar13,uVar5,uVar10);
  func_0x0001015e8d48(uVar16,uVar17,uVar18,uVar1,uVar19,uVar2,uVar7);
  func_0x000107c61428(param_1 + 0x210,auStack_320,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x210);
  uVar3 = *(undefined1 *)(param_1 + 0x218);
  func_0x000107c61428(unaff_x20 + 0x210,auStack_338,1,0);
  *(undefined8 *)(unaff_x20 + 0x210) = uVar8;
  *(undefined1 *)(unaff_x20 + 0x218) = uVar3;
  func_0x000107c61428(param_1 + 0x220,auStack_350,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x220);
  uVar3 = *(undefined1 *)(param_1 + 0x228);
  func_0x000107c61428(unaff_x20 + 0x220,auStack_368,1,0);
  *(undefined8 *)(unaff_x20 + 0x220) = uVar8;
  *(undefined1 *)(unaff_x20 + 0x228) = uVar3;
  func_0x000107c61428(param_1 + 0x230,auStack_380,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x230);
  uVar11 = *(undefined8 *)(param_1 + 0x238);
  uVar13 = *(undefined8 *)(param_1 + 0x240);
  uVar16 = *(undefined8 *)(param_1 + 0x248);
  func_0x000107c61428(unaff_x20 + 0x230,auStack_398,1,0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x240);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x248);
  *(undefined8 *)(unaff_x20 + 0x230) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x238) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x240) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x248) = uVar16;
  FUN_101597350(uVar8,uVar11,uVar13,uVar16);
  FUN_101597ae4(uVar18,uVar19,uVar20,uVar21);
  func_0x000107c61428(param_1 + 0x250,auStack_3b0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x250);
  func_0x000107c61428(unaff_x20 + 0x250,auStack_3c8,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x250);
  *(undefined8 *)(unaff_x20 + 0x250) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c6142c(uVar11);
  func_0x000107c61428(param_1 + 600,auStack_3e0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 600);
  uVar3 = *(undefined1 *)(param_1 + 0x260);
  func_0x000107c61428(unaff_x20 + 600,auStack_3f8,1,0);
  *(undefined8 *)(unaff_x20 + 600) = uVar8;
  *(undefined1 *)(unaff_x20 + 0x260) = uVar3;
  return;
}



/* Entry: 1015e8b4c; end: 1015e8cef;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015e8b4c(void)

{
  long in_x3;
  ulong in_x4;
  ulong in_x5;
  uint uVar1;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c61434(in_x3);
  uVar1 = (uint)(in_x5 >> 0x3e);
  if (uVar1 == 1) {
    in_x4 = in_x5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x4);
  return;
}



/* Entry: 1015e8cf0; end: 1015e8d9f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015e8cf0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_5);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_6);
  return;
}



/* Entry: 1015e8da0; end: 1015e8db7;  */

void FUN_1015e8da0(void)

{
  return;
}



/* Entry: 1015e8db8; end: 1015e8e2b;  */

undefined8 FUN_1015e8db8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015e8e2c; end: 1015e90fb;  */

uint FUN_1015e8e2c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 < 3) {
      if (lVar4 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else if (lVar4 == 1) {
        if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar3 != 2) {
        return 0;
      }
    }
    else if (lVar4 < 5) {
      if (lVar4 == 3) {
        if (lVar3 != 3) {
          return 0;
        }
      }
      else if (lVar3 != 4) {
        return 0;
      }
    }
    else if (lVar4 == 5) {
      if (lVar3 != 5) {
        return 0;
      }
    }
    else if (lVar3 != 6) {
      return 0;
    }
  }
  else if (lVar3 != lVar4) {
    return 0;
  }
  lVar3 = param_1[5];
  uVar5 = param_1[4];
  lVar4 = param_1[7];
  uVar8 = param_1[6];
  lVar7 = param_2[5];
  uVar6 = param_2[4];
  lVar10 = param_2[7];
  uVar9 = param_2[6];
  uStack_a0 = uVar6;
  lStack_98 = lVar7;
  uStack_90 = uVar9;
  lStack_88 = lVar10;
  uStack_80 = uVar5;
  lStack_78 = lVar3;
  uStack_70 = uVar8;
  lStack_68 = lVar4;
  if (lVar3 == 0) {
    if (lVar7 == 0) {
      FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_1015e904c:
      FUN_101597ae4(uVar5,lVar3,uVar8,lVar4);
      lVar3 = param_1[2];
      FUN_100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar3;
      goto LAB_1015e90d8;
    }
LAB_1015e8f6c:
    FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_101597ae4(uVar5,lVar3,uVar8,lVar4);
    uVar5 = uVar6;
    lVar3 = lVar7;
    uVar8 = uVar9;
    lVar4 = lVar10;
  }
  else {
    if (lVar7 == 0) goto LAB_1015e8f6c;
    if (((uVar5 == uVar6) && (lVar3 == lVar7)) ||
       (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar6,lVar7,0), (uVar2 & 1) != 0)) {
      FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar8;
      FUN_100e25fcc(uVar8,lVar4,uVar9,lVar10);
      FUN_101597ae4(uVar6,lVar7,uVar9,lVar10);
      if ((uVar2 & 1) != 0) goto LAB_1015e904c;
    }
    else {
      FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_101597ae4(uVar6,lVar7,uVar9,lVar10);
    }
  }
  FUN_101597ae4(uVar5,lVar3,uVar8,lVar4);
  uVar1 = 0;
LAB_1015e90d8:
  return uVar1 & 1;
}



/* Entry: 1015e90fc; end: 1015e917b;  */

void FUN_1015e90fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968858;
  func_0x000107c61520(&UNK_10d968858,&UNK_1103e5558);
  puRam0000000112db8720 = puVar1;
  return;
}



/* Entry: 1015e917c; end: 1015e966b;  */

uint FUN_1015e917c(byte *param_1,byte *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_340 [80];
  ulong uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x38);
  uStack_148 = *(undefined8 *)(param_2 + 0x50);
  uStack_150 = *(undefined8 *)(param_2 + 0x48);
  uStack_138 = *(undefined8 *)(param_2 + 0x60);
  uStack_140 = *(undefined8 *)(param_2 + 0x58);
  uStack_128 = *(undefined8 *)(param_2 + 0x70);
  uStack_130 = *(undefined8 *)(param_2 + 0x68);
  uStack_118 = *(undefined8 *)(param_2 + 0x80);
  uStack_120 = *(undefined8 *)(param_2 + 0x78);
  uStack_158 = *(undefined8 *)(param_2 + 0x40);
  uStack_160 = *(undefined8 *)(param_2 + 0x38);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f0 = *(ulong *)(param_1 + 0x48);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x58);
  lStack_1c8 = *(long *)(param_1 + 0x70);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x78);
  lStack_1f8 = *(long *)(param_1 + 0x40);
  uStack_200 = *(ulong *)(param_1 + 0x38);
  uStack_238 = *(undefined8 *)(param_2 + 0x50);
  uStack_240 = *(undefined8 *)(param_2 + 0x48);
  uStack_228 = *(undefined8 *)(param_2 + 0x60);
  uStack_230 = *(undefined8 *)(param_2 + 0x58);
  lStack_218 = *(long *)(param_2 + 0x70);
  uStack_220 = *(undefined8 *)(param_2 + 0x68);
  uStack_208 = *(undefined8 *)(param_2 + 0x80);
  uStack_210 = *(undefined8 *)(param_2 + 0x78);
  uStack_248 = *(undefined8 *)(param_2 + 0x40);
  uStack_250 = *(undefined8 *)(param_2 + 0x38);
  uStack_1b0 = uStack_250;
  uStack_1a8 = uStack_248;
  uStack_1a0 = uStack_240;
  uStack_198 = uStack_238;
  uStack_190 = uStack_230;
  uStack_188 = uStack_228;
  uStack_180 = uStack_220;
  lStack_178 = lStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  if (lStack_1c8 == 1) {
    if (lStack_218 == 1) {
      uStack_288 = *(undefined8 *)(param_1 + 0x50);
      uStack_290 = *(undefined8 *)(param_1 + 0x48);
      uStack_278 = *(undefined8 *)(param_1 + 0x60);
      uStack_280 = *(undefined8 *)(param_1 + 0x58);
      lStack_268 = *(long *)(param_1 + 0x70);
      uStack_270 = *(undefined8 *)(param_1 + 0x68);
      uStack_258 = *(undefined8 *)(param_1 + 0x80);
      uStack_260 = *(undefined8 *)(param_1 + 0x78);
      uStack_298 = *(undefined8 *)(param_1 + 0x40);
      uStack_2a0 = *(ulong *)(param_1 + 0x38);
      FUN_1015e8db8(&uStack_110,&uStack_c0,0x112db3ea0,&UNK_10d95e3f0);
      FUN_1015e8db8(&uStack_160,&uStack_c0,0x112db3ea0,&UNK_10d95e3f0);
      FUN_1015ecf78(&uStack_2a0,0x112db3ea0,&UNK_10d95e3f0);
LAB_1015e93e4:
      if (((*param_1 ^ *param_2) & 1) == 0) {
        uVar3 = *(ulong *)(param_1 + 8);
        if (((uVar3 == *(ulong *)(param_2 + 8)) &&
            (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) ||
           (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
          uVar3 = *(ulong *)(param_1 + 0x18);
          FUN_10142cfc4(uVar3,*(undefined8 *)(param_2 + 0x18));
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(param_1 + 0x20);
            FUN_1015e78b4(uVar3,*(undefined8 *)(param_2 + 0x20));
            if ((uVar3 & 1) != 0) {
              lVar6 = *(long *)(param_1 + 0x90);
              uVar3 = *(ulong *)(param_1 + 0x88);
              uVar10 = *(undefined8 *)(param_1 + 0xa0);
              uVar8 = *(ulong *)(param_1 + 0x98);
              lVar7 = *(long *)(param_2 + 0x90);
              uVar5 = *(ulong *)(param_2 + 0x88);
              uVar11 = *(undefined8 *)(param_2 + 0xa0);
              uVar9 = *(ulong *)(param_2 + 0x98);
              uStack_2f0 = uVar5;
              lStack_2e8 = lVar7;
              uStack_2e0 = uVar9;
              uStack_2d8 = uVar11;
              uStack_200 = uVar3;
              lStack_1f8 = lVar6;
              uStack_1f0 = uVar8;
              uStack_1e8 = uVar10;
              if (lVar6 == 0) {
                if (lVar7 == 0) {
                  FUN_1015e8db8(&uStack_200,auStack_340,0x112db6f40,&UNK_10d9681d0);
                  FUN_1015e8db8(&uStack_2f0,auStack_340,0x112db6f40,&UNK_10d9681d0);
LAB_1015e95e8:
                  FUN_101597ae4(uVar3,lVar6,uVar8,uVar10);
                  uVar10 = *(undefined8 *)(param_1 + 0x28);
                  FUN_100e25fcc(uVar10,*(undefined8 *)(param_1 + 0x30),
                                *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
                  uVar1 = (uint)uVar10;
                  goto LAB_1015e951c;
                }
LAB_1015e9544:
                FUN_1015e8db8(&uStack_200,auStack_340,0x112db6f40,&UNK_10d9681d0);
                FUN_1015e8db8(&uStack_2f0,auStack_340,0x112db6f40,&UNK_10d9681d0);
                FUN_101597ae4(uVar3,lVar6,uVar8,uVar10);
                uVar3 = uVar5;
                lVar6 = lVar7;
                uVar8 = uVar9;
                uVar10 = uVar11;
              }
              else {
                if (lVar7 == 0) goto LAB_1015e9544;
                if (((uVar3 == uVar5) && (lVar6 == lVar7)) ||
                   (uVar4 = uVar3, func_0x000107c605b8(uVar3,lVar6,uVar5,lVar7,0), (uVar4 & 1) != 0)
                   ) {
                  FUN_1015e8db8(&uStack_200,auStack_340,0x112db6f40,&UNK_10d9681d0);
                  FUN_1015e8db8(&uStack_2f0,auStack_340,0x112db6f40,&UNK_10d9681d0);
                  uVar4 = uVar8;
                  FUN_100e25fcc(uVar8,uVar10,uVar9,uVar11);
                  FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
                  if ((uVar4 & 1) != 0) goto LAB_1015e95e8;
                }
                else {
                  FUN_1015e8db8(&uStack_200,auStack_340,0x112db6f40,&UNK_10d9681d0);
                  FUN_1015e8db8(&uStack_2f0,auStack_340,0x112db6f40,&UNK_10d9681d0);
                  FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
                }
              }
              FUN_101597ae4(uVar3,lVar6,uVar8,uVar10);
              uVar1 = 0;
              goto LAB_1015e951c;
            }
          }
        }
      }
LAB_1015e9518:
      uVar1 = 0;
      goto LAB_1015e951c;
    }
  }
  else if (lStack_218 != 1) {
    uStack_2d8 = *(undefined8 *)(param_2 + 0x50);
    uStack_2e0 = *(ulong *)(param_2 + 0x48);
    uStack_2c8 = *(undefined8 *)(param_2 + 0x60);
    uStack_2d0 = *(undefined8 *)(param_2 + 0x58);
    uStack_2b8 = *(undefined8 *)(param_2 + 0x70);
    uStack_2c0 = *(undefined8 *)(param_2 + 0x68);
    uStack_2a8 = *(undefined8 *)(param_2 + 0x80);
    uStack_2b0 = *(undefined8 *)(param_2 + 0x78);
    lStack_2e8 = *(long *)(param_2 + 0x40);
    uStack_2f0 = *(ulong *)(param_2 + 0x38);
    uStack_b8 = *(undefined8 *)(param_1 + 0x40);
    uStack_c0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x50);
    uStack_b0 = *(undefined8 *)(param_1 + 0x48);
    uStack_98 = *(undefined8 *)(param_1 + 0x60);
    uStack_a0 = *(undefined8 *)(param_1 + 0x58);
    uStack_88 = *(undefined8 *)(param_1 + 0x70);
    uStack_90 = *(undefined8 *)(param_1 + 0x68);
    uStack_78 = *(undefined8 *)(param_1 + 0x80);
    uStack_80 = *(undefined8 *)(param_1 + 0x78);
    uStack_2a0 = uStack_2f0;
    uStack_298 = lStack_2e8;
    uStack_290 = uStack_2e0;
    uStack_288 = uStack_2d8;
    uStack_280 = uStack_2d0;
    uStack_278 = uStack_2c8;
    uStack_270 = uStack_2c0;
    lStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    FUN_1015e8db8(&uStack_110,auStack_340,0x112db3ea0,&UNK_10d95e3f0);
    FUN_1015e8db8(&uStack_160,auStack_340,0x112db3ea0,&UNK_10d95e3f0);
    puVar2 = &uStack_c0;
    func_0x00010352f1f4(puVar2,&uStack_2a0);
    FUN_1015ecf78(&uStack_2f0,0x112db3ea0,&UNK_10d95e3f0);
    FUN_1015ecf78(&uStack_200,0x112db3ea0,&UNK_10d95e3f0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1015e93e4;
    goto LAB_1015e9518;
  }
  uStack_2a0 = uStack_200;
  uStack_298 = lStack_1f8;
  uStack_290 = uStack_1f0;
  uStack_288 = uStack_1e8;
  uStack_280 = uStack_1e0;
  uStack_278 = uStack_1d8;
  uStack_270 = uStack_1d0;
  lStack_268 = lStack_1c8;
  uStack_260 = uStack_1c0;
  uStack_258 = uStack_1b8;
  FUN_1015e8db8(&uStack_110,&uStack_c0,0x112db3ea0,&UNK_10d95e3f0);
  FUN_1015e8db8(&uStack_160,&uStack_c0,0x112db3ea0,&UNK_10d95e3f0);
  FUN_1015ecf78(&uStack_2a0,0x112db86f0,&UNK_10d9681c8);
  uVar1 = 0;
LAB_1015e951c:
  return uVar1 & 1;
}



/* Entry: 1015e966c; end: 1015e972b;  */

void FUN_1015e966c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968990;
  func_0x000107c61520(&UNK_10d968990,&UNK_1103e5938);
  puRam0000000112db8770 = puVar1;
  return;
}



/* Entry: 1015e972c; end: 1015e99fb;  */

uint FUN_1015e972c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar2 = param_1[2];
    uVar4 = param_2[2];
    if ((char)param_2[3] == '\x01') {
      if ((long)uVar4 < 2) {
        if (uVar4 == 0) {
          if (uVar2 == 0) {
LAB_1015e97ac:
            uVar4 = param_1[7];
            uVar2 = param_1[6];
            uVar9 = param_1[9];
            uVar7 = param_1[8];
            uVar6 = param_2[7];
            uVar5 = param_2[6];
            uVar10 = param_2[9];
            uVar8 = param_2[8];
            uStack_a0 = uVar5;
            uStack_98 = uVar6;
            uStack_90 = uVar8;
            uStack_88 = uVar10;
            uStack_80 = uVar2;
            uStack_78 = uVar4;
            uStack_70 = uVar7;
            uStack_68 = uVar9;
            if (uVar4 == 0) {
              if (uVar6 == 0) {
                FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
                FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_1015e9958:
                FUN_101597ae4(uVar2,uVar4,uVar7,uVar9);
                uVar2 = param_1[4];
                FUN_100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
                uVar1 = (uint)uVar2;
                goto LAB_1015e9978;
              }
LAB_1015e989c:
              FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
              FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
              FUN_101597ae4(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else {
              if (uVar6 == 0) goto LAB_1015e989c;
              if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                 (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0))
              {
                FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
                FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
                uVar3 = uVar7;
                FUN_100e25fcc(uVar7,uVar9,uVar8,uVar10);
                FUN_101597ae4(uVar5,uVar6,uVar8,uVar10);
                if ((uVar3 & 1) != 0) goto LAB_1015e9958;
              }
              else {
                FUN_1015e8db8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
                FUN_1015e8db8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
                FUN_101597ae4(uVar5,uVar6,uVar8,uVar10);
              }
            }
            FUN_101597ae4(uVar2,uVar4,uVar7,uVar9);
            uVar1 = 0;
            goto LAB_1015e9978;
          }
        }
        else if (uVar2 == 1) goto LAB_1015e97ac;
      }
      else if (uVar4 == 2) {
        if (uVar2 == 2) goto LAB_1015e97ac;
      }
      else if (uVar2 == 3) goto LAB_1015e97ac;
    }
    else if (uVar2 == uVar4) goto LAB_1015e97ac;
  }
  uVar1 = 0;
LAB_1015e9978:
  return uVar1 & 1;
}



/* Entry: 1015e99fc; end: 1015e9afb;  */

void FUN_1015e99fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db87a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968b40;
  func_0x000107c61520(&UNK_10d968b40,&UNK_1103e5a58);
  puRam0000000112db87a8 = puVar1;
  return;
}



/* Entry: 1015e9afc; end: 1015e9fdb;  */

uint FUN_1015e9afc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_2b0 [64];
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar2 = param_1[2];
    uVar5 = param_2[2];
    if ((char)param_2[3] == '\x01') {
      if ((long)uVar5 < 2) {
        if (uVar5 == 0) {
          if (uVar2 == 0) {
LAB_1015e9b78:
            uStack_e8 = param_1[8];
            uStack_f0 = param_1[7];
            uStack_d8 = param_1[10];
            uStack_e0 = param_1[9];
            uStack_c8 = param_1[0xc];
            uStack_d0 = param_1[0xb];
            uStack_b8 = param_1[0xe];
            uStack_c0 = param_1[0xd];
            uStack_128 = param_2[8];
            uStack_130 = param_2[7];
            uStack_118 = param_2[10];
            uStack_120 = param_2[9];
            uStack_108 = param_2[0xc];
            uStack_110 = param_2[0xb];
            uStack_f8 = param_2[0xe];
            uStack_100 = param_2[0xd];
            uStack_188 = param_1[0xc];
            uStack_190 = param_1[0xb];
            uStack_1a8 = param_1[8];
            uStack_1b0 = param_1[7];
            uStack_198 = param_1[10];
            uStack_1a0 = param_1[9];
            uStack_178 = param_1[0xe];
            uStack_180 = param_1[0xd];
            uStack_1c8 = param_2[0xc];
            uStack_1d0 = param_2[0xb];
            uStack_1e8 = param_2[8];
            uStack_1f0 = param_2[7];
            uStack_1d8 = param_2[10];
            uStack_1e0 = param_2[9];
            uStack_1b8 = param_2[0xe];
            uStack_1c0 = param_2[0xd];
            uStack_170 = uStack_1f0;
            uStack_168 = uStack_1e8;
            uStack_160 = uStack_1e0;
            uStack_158 = uStack_1d8;
            uStack_150 = uStack_1d0;
            uStack_148 = uStack_1c8;
            uStack_140 = uStack_1c0;
            uStack_138 = uStack_1b8;
            if (uStack_188 == 1) {
              if (uStack_1c8 == 1) {
                uStack_228 = param_1[8];
                uStack_230 = param_1[7];
                uStack_218 = param_1[10];
                uStack_220 = param_1[9];
                uStack_208 = param_1[0xc];
                uStack_210 = param_1[0xb];
                uStack_1f8 = param_1[0xe];
                uStack_200 = param_1[0xd];
                FUN_1015e8db8(&uStack_f0,&uStack_b0,0x112db86f8,&UNK_10d9681d8);
                FUN_1015e8db8(&uStack_130,&uStack_b0,0x112db86f8,&UNK_10d9681d8);
                FUN_1015ecf78(&uStack_230,0x112db86f8,&UNK_10d9681d8);
LAB_1015e9da0:
                uVar5 = param_1[0x10];
                uVar2 = param_1[0xf];
                uVar10 = param_1[0x12];
                uVar8 = param_1[0x11];
                uVar7 = param_2[0x10];
                uVar6 = param_2[0xf];
                uVar11 = param_2[0x12];
                uVar9 = param_2[0x11];
                uStack_270 = uVar6;
                uStack_268 = uVar7;
                uStack_260 = uVar9;
                uStack_258 = uVar11;
                uStack_1b0 = uVar2;
                uStack_1a8 = uVar5;
                uStack_1a0 = uVar8;
                uStack_198 = uVar10;
                if (uVar5 == 0) {
                  if (uVar7 == 0) {
                    FUN_1015e8db8(&uStack_1b0,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
                    FUN_1015e8db8(&uStack_270,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
LAB_1015e9f48:
                    FUN_101597ae4(uVar2,uVar5,uVar8,uVar10);
                    uVar2 = param_1[4];
                    FUN_1015e7794(uVar2,param_2[4]);
                    if ((uVar2 & 1) != 0) {
                      uVar2 = param_1[5];
                      FUN_100e25fcc(uVar2,param_1[6],param_2[5],param_2[6]);
                      uVar1 = (uint)uVar2;
                      goto LAB_1015e9ee8;
                    }
                    goto LAB_1015e9ee4;
                  }
LAB_1015e9e84:
                  FUN_1015e8db8(&uStack_1b0,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
                  FUN_1015e8db8(&uStack_270,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
                  FUN_101597ae4(uVar2,uVar5,uVar8,uVar10);
                  uVar2 = uVar6;
                  uVar5 = uVar7;
                  uVar8 = uVar9;
                  uVar10 = uVar11;
                }
                else {
                  if (uVar7 == 0) goto LAB_1015e9e84;
                  if (((uVar2 == uVar6) && (uVar5 == uVar7)) ||
                     (uVar4 = uVar2, func_0x000107c605b8(uVar2,uVar5,uVar6,uVar7,0),
                     (uVar4 & 1) != 0)) {
                    FUN_1015e8db8(&uStack_1b0,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
                    FUN_1015e8db8(&uStack_270,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
                    uVar4 = uVar8;
                    FUN_100e25fcc(uVar8,uVar10,uVar9,uVar11);
                    FUN_101597ae4(uVar6,uVar7,uVar9,uVar11);
                    if ((uVar4 & 1) != 0) goto LAB_1015e9f48;
                  }
                  else {
                    FUN_1015e8db8(&uStack_1b0,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
                    FUN_1015e8db8(&uStack_270,auStack_2b0,0x112db6f40,&UNK_10d9681d0);
                    FUN_101597ae4(uVar6,uVar7,uVar9,uVar11);
                  }
                }
                FUN_101597ae4(uVar2,uVar5,uVar8,uVar10);
              }
              else {
LAB_1015e9c70:
                uStack_230 = uStack_1b0;
                uStack_228 = uStack_1a8;
                uStack_220 = uStack_1a0;
                uStack_218 = uStack_198;
                uStack_210 = uStack_190;
                uStack_208 = uStack_188;
                uStack_200 = uStack_180;
                uStack_1f8 = uStack_178;
                FUN_1015e8db8(&uStack_f0,&uStack_b0,0x112db86f8,&UNK_10d9681d8);
                FUN_1015e8db8(&uStack_130,&uStack_b0,0x112db86f8,&UNK_10d9681d8);
                FUN_1015ecf78(&uStack_230,0x112db8700,&UNK_10d9681e0);
              }
            }
            else {
              if (uStack_1c8 == 1) goto LAB_1015e9c70;
              uStack_268 = param_2[8];
              uStack_270 = param_2[7];
              uStack_258 = param_2[10];
              uStack_260 = param_2[9];
              uStack_248 = param_2[0xc];
              uStack_250 = param_2[0xb];
              uStack_238 = param_2[0xe];
              uStack_240 = param_2[0xd];
              uStack_a8 = param_1[8];
              uStack_b0 = param_1[7];
              uStack_98 = param_1[10];
              uStack_a0 = param_1[9];
              uStack_88 = param_1[0xc];
              uStack_90 = param_1[0xb];
              uStack_78 = param_1[0xe];
              uStack_80 = param_1[0xd];
              uStack_230 = uStack_270;
              uStack_228 = uStack_268;
              uStack_220 = uStack_260;
              uStack_218 = uStack_258;
              uStack_210 = uStack_250;
              uStack_208 = uStack_248;
              uStack_200 = uStack_240;
              uStack_1f8 = uStack_238;
              FUN_1015e8db8(&uStack_f0,auStack_2b0,0x112db86f8,&UNK_10d9681d8);
              FUN_1015e8db8(&uStack_130,auStack_2b0,0x112db86f8,&UNK_10d9681d8);
              puVar3 = &uStack_b0;
              FUN_1015e8e2c(puVar3,&uStack_230);
              FUN_1015ecf78(&uStack_270,0x112db86f8,&UNK_10d9681d8);
              FUN_1015ecf78(&uStack_1b0,0x112db86f8,&UNK_10d9681d8);
              if (((ulong)puVar3 & 1) != 0) goto LAB_1015e9da0;
            }
          }
        }
        else if (uVar2 == 1) goto LAB_1015e9b78;
      }
      else if (uVar5 == 2) {
        if (uVar2 == 2) goto LAB_1015e9b78;
      }
      else if (uVar2 == 3) goto LAB_1015e9b78;
    }
    else if (uVar2 == uVar5) goto LAB_1015e9b78;
  }
LAB_1015e9ee4:
  uVar1 = 0;
LAB_1015e9ee8:
  return uVar1 & 1;
}



/* Entry: 1015e9fdc; end: 1015ea077;  */

/* WARNING: Possible PIC construction at 0x0001015ea014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015ea018) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015e9fdc(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 == param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
    uVar13 = param_1[4];
    (*param_3)(uVar13,param_2[4]);
    if ((uVar13 & 1) != 0) {
      pbVar10 = (byte *)param_1[5];
      pbVar25 = (byte *)param_1[6];
      lVar24 = param_2[5];
      uVar13 = param_2[6];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar13 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar20 < 1) goto LAB_100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto LAB_100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto LAB_100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto LAB_100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(code **)(puVar7 + -0x88) = FUN_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar24 = *(long *)pbVar14;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)pbVar14;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar24 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar24 = *(long *)(pbVar14 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar14 + 0x20);
            lVar24 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar24;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar26;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar14 + 0x20);
          lVar24 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar24;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar26;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 1015ea078; end: 1015ea277;  */

void FUN_1015ea078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db87e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968cf0;
  func_0x000107c61520(&UNK_10d968cf0,&UNK_1103e5b68);
  puRam0000000112db87e8 = puVar1;
  return;
}



/* Entry: 1015ea278; end: 1015ea28b;  */

void FUN_1015ea278(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea28c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015ea2cc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ea28c; end: 1015ea337;  */

void FUN_1015ea28c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968280;
  func_0x000107c61520(&UNK_10d968280,&UNK_1103e55f0);
  puRam0000000112db8858 = puVar1;
  return;
}



/* Entry: 1015ea338; end: 1015ea33b;  */

void FUN_1015ea338(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9682c0;
  func_0x000107c61520(&UNK_10d9682c0,&UNK_1103e55f0);
  puRam0000000112db8878 = puVar1;
  return;
}



/* Entry: 1015ea33c; end: 1015ea37b;  */

void FUN_1015ea33c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9682c0;
  func_0x000107c61520(&UNK_10d9682c0,&UNK_1103e55f0);
  puRam0000000112db8878 = puVar1;
  return;
}



/* Entry: 1015ea37c; end: 1015ea38f;  */

void FUN_1015ea37c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea390();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015ea3d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ea390; end: 1015ea43b;  */

void FUN_1015ea390(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968380;
  func_0x000107c61520(&UNK_10d968380,&UNK_1103e5680);
  puRam0000000112db8880 = puVar1;
  return;
}



/* Entry: 1015ea43c; end: 1015ea43f;  */

void FUN_1015ea43c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9683c0;
  func_0x000107c61520(&UNK_10d9683c0,&UNK_1103e5680);
  puRam0000000112db88a0 = puVar1;
  return;
}



/* Entry: 1015ea440; end: 1015ea47f;  */

void FUN_1015ea440(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9683c0;
  func_0x000107c61520(&UNK_10d9683c0,&UNK_1103e5680);
  puRam0000000112db88a0 = puVar1;
  return;
}



/* Entry: 1015ea480; end: 1015ea493;  */

void FUN_1015ea480(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea494();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015ea4d4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ea494; end: 1015ea53f;  */

void FUN_1015ea494(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968480;
  func_0x000107c61520(&UNK_10d968480,&UNK_1103e5710);
  puRam0000000112db88a8 = puVar1;
  return;
}



/* Entry: 1015ea540; end: 1015ea543;  */

void FUN_1015ea540(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9684c0;
  func_0x000107c61520(&UNK_10d9684c0,&UNK_1103e5710);
  puRam0000000112db88c8 = puVar1;
  return;
}



/* Entry: 1015ea544; end: 1015ea583;  */

void FUN_1015ea544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9684c0;
  func_0x000107c61520(&UNK_10d9684c0,&UNK_1103e5710);
  puRam0000000112db88c8 = puVar1;
  return;
}



/* Entry: 1015ea584; end: 1015ea597;  */

void FUN_1015ea584(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea598();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015ea5d8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ea598; end: 1015ea643;  */

void FUN_1015ea598(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968580;
  func_0x000107c61520(&UNK_10d968580,&UNK_1103e57a0);
  puRam0000000112db88d0 = puVar1;
  return;
}



/* Entry: 1015ea644; end: 1015ea647;  */

void FUN_1015ea644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9685c0;
  func_0x000107c61520(&UNK_10d9685c0,&UNK_1103e57a0);
  puRam0000000112db88f0 = puVar1;
  return;
}



/* Entry: 1015ea648; end: 1015ea687;  */

void FUN_1015ea648(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9685c0;
  func_0x000107c61520(&UNK_10d9685c0,&UNK_1103e57a0);
  puRam0000000112db88f0 = puVar1;
  return;
}



/* Entry: 1015ea688; end: 1015ea69b;  */

void FUN_1015ea688(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea69c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015ea6dc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ea69c; end: 1015ea747;  */

void FUN_1015ea69c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db88f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968680;
  func_0x000107c61520(&UNK_10d968680,&UNK_1103e5830);
  puRam0000000112db88f8 = puVar1;
  return;
}



/* Entry: 1015ea748; end: 1015ea74b;  */

void FUN_1015ea748(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9686c0;
  func_0x000107c61520(&UNK_10d9686c0,&UNK_1103e5830);
  puRam0000000112db8918 = puVar1;
  return;
}



/* Entry: 1015ea74c; end: 1015ea78b;  */

void FUN_1015ea74c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9686c0;
  func_0x000107c61520(&UNK_10d9686c0,&UNK_1103e5830);
  puRam0000000112db8918 = puVar1;
  return;
}



/* Entry: 1015ea78c; end: 1015ea79f;  */

void FUN_1015ea78c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea7a0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015ea7e0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ea7a0; end: 1015ea84b;  */

void FUN_1015ea7a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968780;
  func_0x000107c61520(&UNK_10d968780,&UNK_1103e58c0);
  puRam0000000112db8920 = puVar1;
  return;
}



/* Entry: 1015ea84c; end: 1015ea88f;  */

void FUN_1015ea84c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1015ea890; end: 1015ea893;  */

void FUN_1015ea890(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9687c0;
  func_0x000107c61520(&UNK_10d9687c0,&UNK_1103e58c0);
  puRam0000000112db8940 = puVar1;
  return;
}



/* Entry: 1015ea894; end: 1015ea8d3;  */

void FUN_1015ea894(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9687c0;
  func_0x000107c61520(&UNK_10d9687c0,&UNK_1103e58c0);
  puRam0000000112db8940 = puVar1;
  return;
}



/* Entry: 1015ea8d4; end: 1015ea8f7;  */

void FUN_1015ea8d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea8f8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015ea8f8; end: 1015ea937;  */

void FUN_1015ea8f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968830;
  func_0x000107c61520(&UNK_10d968830,&UNK_1103e5558);
  puRam0000000112db8948 = puVar1;
  return;
}



/* Entry: 1015ea938; end: 1015ea94f;  */

void FUN_1015ea938(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015e90fc();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101553758();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ea950; end: 1015ea98f;  */

void FUN_1015ea950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968898;
  func_0x000107c61520(&UNK_10d968898,&UNK_1103e5558);
  puRam0000000112db8950 = puVar1;
  return;
}



/* Entry: 1015ea990; end: 1015ea9b3;  */

void FUN_1015ea990(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ea9b4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015ea9b4; end: 1015ea9f3;  */

void FUN_1015ea9b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d968968;
  func_0x000107c61520(&UNK_10d968968,&UNK_1103e5938);
  puRam0000000112db8958 = puVar1;
  return;
}



/* Entry: 1015ea9f4; end: 1015eaa0b;  */

void FUN_1015ea9f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015e966c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015ea1f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015eaa0c; end: 1015eaa4b;  */

void FUN_1015eaa0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9689d0;
  func_0x000107c61520(&UNK_10d9689d0,&UNK_1103e5938);
  puRam0000000112db8960 = puVar1;
  return;
}



/* Entry: 1015eaa4c; end: 1015eaa6f;  */

void FUN_1015eaa4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015eaa70();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


