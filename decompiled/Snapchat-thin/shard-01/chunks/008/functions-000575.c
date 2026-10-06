/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015b0f04; end: 1015b1017;  */

void FUN_1015b0f04(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015b1018; end: 1015b105b;  */

uint FUN_1015b1018(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015bc1c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015b105c; end: 1015b10f7;  */

void FUN_1015b105c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db7200 != -1) {
    func_0x000107c61568(0x112db7200,FUN_1015a91ac);
  }
  uVar2 = uRam0000000113800600;
  uVar1 = uRam00000001138005f8;
  func_0x000107c61438(uRam0000000113800600,2);
  func_0x000107c5fb78(0xd000000000000010,0x800000010efb3090);
  func_0x000107c6142c(uVar2);
  uRam00000001138007f8 = uVar1;
  uRam0000000113800800 = uVar2;
  return;
}



/* Entry: 1015b10f8; end: 1015b113f;  */

void FUN_1015b10f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966340,0x2a,2);
  uRam0000000113800810 = uStack_38;
  uRam0000000113800808 = uStack_40;
  uRam0000000113800820 = uStack_28;
  uRam0000000113800818 = uStack_30;
  uRam0000000113800830 = uStack_18;
  uRam0000000113800828 = uStack_20;
  return;
}



/* Entry: 1015b1140; end: 1015b117b;  */

undefined1  [16] FUN_1015b1140(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db72d0 != -1) {
    func_0x000107c61568(0x112db72d0,FUN_1015b105c);
  }
  auVar1._8_8_ = uRam0000000113800800;
  auVar1._0_8_ = uRam00000001138007f8;
  func_0x000107c61434(uRam0000000113800800);
  return auVar1;
}



/* Entry: 1015b117c; end: 1015b11b3;  */

uint FUN_1015b117c(long param_1,long param_2)

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
  func_0x0001015c597c();
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



/* Entry: 1015b11b4; end: 1015b1253;  */

/* WARNING: Possible PIC construction at 0x0001015b1200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b1210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b1204) */
/* WARNING: Removing unreachable block (ram,0x0001015b1214) */

void FUN_1015b11b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db72d8 != -1) {
    func_0x000107c61568(0x112db72d8,FUN_1015b10f8);
  }
  uVar5 = uRam0000000113800830;
  uVar4 = uRam0000000113800828;
  uVar3 = uRam0000000113800820;
  uVar2 = uRam0000000113800818;
  uVar1 = uRam0000000113800810;
  *param_1 = uRam0000000113800808;
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



/* Entry: 1015b1254; end: 1015b1267;  */

void FUN_1015b1254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7da8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7da8,&UNK_10d966018);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b1268; end: 1015b129f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015b1268(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_1015bd100();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 1015b12a0; end: 1015b12cb;  */

void FUN_1015b12a0(void)

{
  func_0x000107c5fb78(0x736572676f72502e,0xec00000072614273);
  uRam0000000113800838 = 0xd00000000000002a;
  uRam0000000113800840 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b12cc; end: 1015b1313;  */

void FUN_1015b12cc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9662d0,0x69,2);
  uRam0000000113800850 = uStack_38;
  uRam0000000113800848 = uStack_40;
  uRam0000000113800860 = uStack_28;
  uRam0000000113800858 = uStack_30;
  uRam0000000113800870 = uStack_18;
  uRam0000000113800868 = uStack_20;
  return;
}



/* Entry: 1015b1314; end: 1015b14a7;  */

/* WARNING: Removing unreachable block (ram,0x0001015b14a4) */

void FUN_1015b1314(undefined8 param_1,long param_2,long param_3)

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
      puVar3 = &UNK_110790900;
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x10;
        }
        else if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x28;
        }
        else {
          if (lVar1 != 3) goto LAB_1015b1494;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x40;
        }
LAB_1015b1480:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (5 < lVar1) {
          if (lVar1 == 6) {
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x0001015c5d3c();
            lVar2 = unaff_x20 + 0x88;
          }
          else {
            if (lVar1 != 7) goto LAB_1015b1494;
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
            lVar2 = unaff_x20 + 0xa0;
            puVar3 = &UNK_110790a00;
          }
          goto LAB_1015b1480;
        }
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x58;
          goto LAB_1015b1480;
        }
        if (lVar1 == 5) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x70;
          goto LAB_1015b1480;
        }
      }
LAB_1015b1494:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015b14a8; end: 1015b1593;  */

void FUN_1015b14a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b1594();
  if (unaff_x21 == 0) {
    FUN_1015b161c();
    FUN_1015b16a4();
    FUN_1015b172c();
    FUN_1015b17b4();
    FUN_1015b183c();
    FUN_1015b18c4();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b1594; end: 1015b161b;  */

void FUN_1015b1594(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,1,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b161c; end: 1015b16a3;  */

void FUN_1015b161c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,2,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b16a4; end: 1015b172b;  */

void FUN_1015b16a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,3,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b172c; end: 1015b17b3;  */

void FUN_1015b172c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,4,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b17b4; end: 1015b183b;  */

void FUN_1015b17b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,5,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b183c; end: 1015b18c3;  */

void FUN_1015b183c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x98);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,6,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b18c4; end: 1015b194b;  */

void FUN_1015b18c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xb0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,7,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b194c; end: 1015b19c7;  */

void FUN_1015b194c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xf000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xf000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xf000000000000000;
  return;
}



/* Entry: 1015b19c8; end: 1015b19db;  */

void FUN_1015b19c8(void)

{
  FUN_1015b1314();
  return;
}



/* Entry: 1015b19dc; end: 1015b1a3b;  */

void FUN_1015b19dc(void)

{
  FUN_1015b14a8();
  return;
}



/* Entry: 1015b1a3c; end: 1015b1a73;  */

uint FUN_1015b1a3c(long param_1,long param_2)

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
  func_0x0001015c593c();
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



/* Entry: 1015b1a74; end: 1015b1b13;  */

uint FUN_1015b1a74(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  func_0x0001015b84bc(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1015b1b14; end: 1015b1bb3;  */

/* WARNING: Possible PIC construction at 0x0001015b1b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b1b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b1b64) */
/* WARNING: Removing unreachable block (ram,0x0001015b1b74) */

void FUN_1015b1b14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db72f0 != -1) {
    func_0x000107c61568(0x112db72f0,FUN_1015b12cc);
  }
  uVar5 = uRam0000000113800870;
  uVar4 = uRam0000000113800868;
  uVar3 = uRam0000000113800860;
  uVar2 = uRam0000000113800858;
  uVar1 = uRam0000000113800850;
  *param_1 = uRam0000000113800848;
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



/* Entry: 1015b1bb4; end: 1015b1bc7;  */

void FUN_1015b1bb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d98,&UNK_10d966010);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b1bc8; end: 1015b1d23;  */

void FUN_1015b1bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015b1d24; end: 1015b1dc3;  */

uint FUN_1015b1d24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  func_0x0001015b84bc(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1015b1dc4; end: 1015b1def;  */

void FUN_1015b1dc4(void)

{
  func_0x000107c5fb78(0x6c50616964654d2e,0xec00000072657961);
  uRam0000000113800878 = 0xd00000000000002a;
  uRam0000000113800880 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b1df0; end: 1015b1e37;  */

void FUN_1015b1df0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966290,0x32,2);
  uRam0000000113800890 = uStack_38;
  uRam0000000113800888 = uStack_40;
  uRam00000001138008a0 = uStack_28;
  uRam0000000113800898 = uStack_30;
  uRam00000001138008b0 = uStack_18;
  uRam00000001138008a8 = uStack_20;
  return;
}



/* Entry: 1015b1e38; end: 1015b1eaf;  */

void FUN_1015b1e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b31c0();
  if (unaff_x21 == 0) {
    FUN_1015b1eb0();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b1eb0; end: 1015b1f3f;  */

void FUN_1015b1eb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,param_5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b1f40; end: 1015b1f7b;  */

undefined1  [16] FUN_1015b1f40(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db7300 != -1) {
    func_0x000107c61568(0x112db7300,FUN_1015b1dc4);
  }
  auVar1._8_8_ = uRam0000000113800880;
  auVar1._0_8_ = uRam0000000113800878;
  func_0x000107c61434(uRam0000000113800880);
  return auVar1;
}



/* Entry: 1015b1f7c; end: 1015b1fb3;  */

uint FUN_1015b1f7c(long param_1,long param_2)

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
  func_0x0001015c58fc();
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



/* Entry: 1015b1fb4; end: 1015b2053;  */

/* WARNING: Possible PIC construction at 0x0001015b2000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b2010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b2004) */
/* WARNING: Removing unreachable block (ram,0x0001015b2014) */

void FUN_1015b1fb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7308 != -1) {
    func_0x000107c61568(0x112db7308,FUN_1015b1df0);
  }
  uVar5 = uRam00000001138008b0;
  uVar4 = uRam00000001138008a8;
  uVar3 = uRam00000001138008a0;
  uVar2 = uRam0000000113800898;
  uVar1 = uRam0000000113800890;
  *param_1 = uRam0000000113800888;
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



/* Entry: 1015b2054; end: 1015b2067;  */

void FUN_1015b2054(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d88,&UNK_10d966008);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b2068; end: 1015b209f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015b2068(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_1015bd2f8();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 1015b20a0; end: 1015b20cb;  */

void FUN_1015b20a0(void)

{
  func_0x000107c5fb78(0x6e6f69747061432e,0xeb00000000617443);
  uRam00000001138008b8 = 0xd00000000000002a;
  uRam00000001138008c0 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b20cc; end: 1015b2113;  */

void FUN_1015b20cc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966210,0x7b,2);
  uRam00000001138008d0 = uStack_38;
  uRam00000001138008c8 = uStack_40;
  uRam00000001138008e0 = uStack_28;
  uRam00000001138008d8 = uStack_30;
  uRam00000001138008f0 = uStack_18;
  uRam00000001138008e8 = uStack_20;
  return;
}



/* Entry: 1015b2114; end: 1015b2267;  */

void FUN_1015b2114(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d7c();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110672b98;
          goto LAB_1015b219c;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010159f6b4();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_110672a00;
          goto LAB_1015b219c;
        }
      }
      else {
        puVar3 = &UNK_110790a00;
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x48;
        }
        else if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x60;
        }
        else {
          if (lVar1 != 5) goto LAB_1015b21b0;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x78;
        }
LAB_1015b219c:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1015b21b0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1015b2268; end: 1015b2323;  */

void FUN_1015b2268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b2324();
  if (unaff_x21 == 0) {
    FUN_1015b23b0();
    FUN_1015b2438();
    FUN_1015b24c0();
    FUN_1015b2548();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b2324; end: 1015b23af;  */

void FUN_1015b2324(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x28);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d7c();
    (*pcVar1)(&uStack_60,1,&UNK_110672b98,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b23b0; end: 1015b2437;  */

void FUN_1015b23b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010159f6b4();
    (*pcVar1)(&uStack_60,2,&UNK_110672a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b2438; end: 1015b24bf;  */

void FUN_1015b2438(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x58);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b24c0; end: 1015b2547;  */

void FUN_1015b24c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x70);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,4,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b2548; end: 1015b25cf;  */

void FUN_1015b2548(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x88);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b25d0; end: 1015b262f;  */

uint FUN_1015b25d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long alStack_1c8 [3];
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar13 = param_1[3];
  uVar7 = param_1[2];
  uVar15 = param_1[5];
  uVar9 = param_1[4];
  uVar14 = param_2[3];
  uVar10 = param_2[2];
  uVar17 = param_2[5];
  uVar16 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar14;
  uStack_a0 = uVar16;
  uStack_98 = uVar17;
  uStack_90 = uVar7;
  uStack_88 = uVar13;
  uStack_80 = uVar9;
  uStack_78 = uVar15;
  if (uVar15 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_1015b9250;
    if (((((int)uVar7 == (int)uVar10) && ((uVar10 ^ uVar7) >> 0x20 == 0)) &&
        ((int)uVar13 == (int)uVar14)) && ((uVar14 ^ uVar13) >> 0x20 == 0)) {
      FUN_1015bbdcc(&uStack_90,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
      FUN_1015bbdcc(&uStack_b0,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar15,uVar16,uVar17);
      func_0x000100cb6208(uVar10,uVar14,uVar16,uVar17);
      if ((uVar2 & 1) != 0) goto LAB_1015b9000;
    }
    else {
      FUN_1015bbdcc(&uStack_90,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
      FUN_1015bbdcc(&uStack_b0,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
      func_0x000100cb6208(uVar10,uVar14,uVar16,uVar17);
    }
LAB_1015b93a8:
    func_0x000100cb6208(uVar7,uVar13,uVar9,uVar15);
  }
  else {
    if (uVar17 >> 0x3c < 0xf) {
LAB_1015b9250:
      FUN_1015bbdcc(&uStack_90,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
      FUN_1015bbdcc(&uStack_b0,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
      func_0x000100cb6208(uVar7,uVar13,uVar9,uVar15);
      uVar7 = uVar10;
      uVar13 = uVar14;
      uVar9 = uVar16;
      uVar15 = uVar17;
      goto LAB_1015b93a8;
    }
    FUN_1015bbdcc(&uStack_90,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
    FUN_1015bbdcc(&uStack_b0,&lStack_1b0,0x112db7168,&UNK_10d9649b0);
LAB_1015b9000:
    func_0x000100cb6208(uVar7,uVar13,uVar9,uVar15);
    uVar13 = param_1[7];
    lVar11 = param_1[6];
    uVar7 = param_1[8];
    uVar15 = param_2[7];
    lVar12 = param_2[6];
    uVar9 = param_2[8];
    lStack_1b0 = lVar11;
    uStack_1a8 = uVar13;
    uStack_1a0 = uVar7;
    lStack_d0 = lVar12;
    uStack_c8 = uVar15;
    uStack_c0 = uVar9;
    if (uVar7 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_1015b93b8;
      if (((float)lVar11 == (float)lVar12) &&
         ((float)((ulong)lVar11 >> 0x20) == (float)((ulong)lVar12 >> 0x20))) {
        FUN_1015bbdcc(&lStack_1b0,&lStack_f0,0x112db5cb0,&UNK_10d964910);
        FUN_1015bbdcc(&lStack_d0,&lStack_f0,0x112db5cb0,&UNK_10d964910);
        uVar10 = uVar13;
        FUN_100e25fcc(uVar13,uVar7,uVar15,uVar9);
        func_0x000100cb61c8(lVar12,uVar15,uVar9);
        if ((uVar10 & 1) != 0) goto LAB_1015b9090;
      }
      else {
        uVar5 = 0x112db5cb0;
        puVar6 = &UNK_10d964910;
        FUN_1015bbdcc(&lStack_1b0,&lStack_f0,0x112db5cb0,&UNK_10d964910);
        plVar3 = &lStack_d0;
        plVar4 = &lStack_f0;
LAB_1015b94a4:
        FUN_1015bbdcc(plVar3,plVar4,uVar5,puVar6);
        func_0x000100cb61c8(lVar12,uVar15,uVar9);
      }
    }
    else {
      if (uVar9 >> 0x3c < 0xf) {
LAB_1015b93b8:
        uVar5 = 0x112db5cb0;
        puVar6 = &UNK_10d964910;
        FUN_1015bbdcc(&lStack_1b0,&lStack_f0,0x112db5cb0,&UNK_10d964910);
        plVar3 = &lStack_d0;
        plVar4 = &lStack_f0;
        uVar10 = uVar7;
        uVar14 = uVar13;
        lVar8 = lVar11;
        uVar7 = uVar9;
        uVar13 = uVar15;
        lVar11 = lVar12;
      }
      else {
        FUN_1015bbdcc(&lStack_1b0,&lStack_f0,0x112db5cb0,&UNK_10d964910);
        FUN_1015bbdcc(&lStack_d0,&lStack_f0,0x112db5cb0,&UNK_10d964910);
LAB_1015b9090:
        func_0x000100cb61c8(lVar11,uVar13,uVar7);
        uVar13 = param_1[10];
        lVar11 = param_1[9];
        uVar7 = param_1[0xb];
        uVar15 = param_2[10];
        lVar12 = param_2[9];
        uVar9 = param_2[0xb];
        lStack_110 = lVar12;
        uStack_108 = uVar15;
        uStack_100 = uVar9;
        lStack_f0 = lVar11;
        uStack_e8 = uVar13;
        uStack_e0 = uVar7;
        if (uVar7 >> 0x3c < 0xf) {
          if (uVar9 >> 0x3c < 0xf) {
            if (lVar11 != lVar12) {
              uVar5 = 0x112db6f48;
              puVar6 = &UNK_10d969b40;
              FUN_1015bbdcc(&lStack_f0,&lStack_130,0x112db6f48,&UNK_10d969b40);
              plVar3 = &lStack_110;
              plVar4 = &lStack_130;
              goto LAB_1015b94a4;
            }
            FUN_1015bbdcc(&lStack_f0,&lStack_130,0x112db6f48,&UNK_10d969b40);
            FUN_1015bbdcc(&lStack_110,&lStack_130,0x112db6f48,&UNK_10d969b40);
            uVar10 = uVar13;
            FUN_100e25fcc(uVar13,uVar7,uVar15,uVar9);
            func_0x000100cb61c8(lVar11,uVar15,uVar9);
            if ((uVar10 & 1) == 0) goto LAB_1015b96b8;
            goto LAB_1015b9118;
          }
        }
        else if (0xe < uVar9 >> 0x3c) {
          FUN_1015bbdcc(&lStack_f0,&lStack_130,0x112db6f48,&UNK_10d969b40);
          FUN_1015bbdcc(&lStack_110,&lStack_130,0x112db6f48,&UNK_10d969b40);
LAB_1015b9118:
          func_0x000100cb61c8(lVar11,uVar13,uVar7);
          uVar13 = param_1[0xd];
          lVar11 = param_1[0xc];
          uVar7 = param_1[0xe];
          uVar15 = param_2[0xd];
          lVar12 = param_2[0xc];
          uVar9 = param_2[0xe];
          lStack_150 = lVar12;
          uStack_148 = uVar15;
          uStack_140 = uVar9;
          lStack_130 = lVar11;
          uStack_128 = uVar13;
          uStack_120 = uVar7;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar9 >> 0x3c) goto LAB_1015b9588;
            if (lVar11 != lVar12) {
              uVar5 = 0x112db6f48;
              puVar6 = &UNK_10d969b40;
              FUN_1015bbdcc(&lStack_130,&lStack_170,0x112db6f48,&UNK_10d969b40);
              plVar3 = &lStack_150;
              plVar4 = &lStack_170;
              goto LAB_1015b94a4;
            }
            FUN_1015bbdcc(&lStack_130,&lStack_170,0x112db6f48,&UNK_10d969b40);
            FUN_1015bbdcc(&lStack_150,&lStack_170,0x112db6f48,&UNK_10d969b40);
            uVar10 = uVar13;
            FUN_100e25fcc(uVar13,uVar7,uVar15,uVar9);
            func_0x000100cb61c8(lVar11,uVar15,uVar9);
            if ((uVar10 & 1) == 0) goto LAB_1015b96b8;
          }
          else {
            if (uVar9 >> 0x3c < 0xf) {
LAB_1015b9588:
              uVar5 = 0x112db6f48;
              puVar6 = &UNK_10d969b40;
              FUN_1015bbdcc(&lStack_130,&lStack_170,0x112db6f48,&UNK_10d969b40);
              plVar3 = &lStack_150;
              plVar4 = &lStack_170;
              uVar10 = uVar7;
              uVar14 = uVar13;
              lVar8 = lVar11;
              uVar7 = uVar9;
              uVar13 = uVar15;
              lVar11 = lVar12;
              goto LAB_1015b9690;
            }
            FUN_1015bbdcc(&lStack_130,&lStack_170,0x112db6f48,&UNK_10d969b40);
            FUN_1015bbdcc(&lStack_150,&lStack_170,0x112db6f48,&UNK_10d969b40);
          }
          func_0x000100cb61c8(lVar11,uVar13,uVar7);
          uVar13 = param_1[0x10];
          lVar11 = param_1[0xf];
          uVar7 = param_1[0x11];
          uVar15 = param_2[0x10];
          lVar12 = param_2[0xf];
          uVar9 = param_2[0x11];
          lStack_190 = lVar12;
          uStack_188 = uVar15;
          uStack_180 = uVar9;
          lStack_170 = lVar11;
          uStack_168 = uVar13;
          uStack_160 = uVar7;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar9 >> 0x3c) goto LAB_1015b9664;
            if (lVar11 != lVar12) {
              uVar5 = 0x112db6f48;
              puVar6 = &UNK_10d969b40;
              FUN_1015bbdcc(&lStack_170,alStack_1c8,0x112db6f48,&UNK_10d969b40);
              plVar3 = &lStack_190;
              plVar4 = alStack_1c8;
              goto LAB_1015b94a4;
            }
            FUN_1015bbdcc(&lStack_170,alStack_1c8,0x112db6f48,&UNK_10d969b40);
            FUN_1015bbdcc(&lStack_190,alStack_1c8,0x112db6f48,&UNK_10d969b40);
            uVar10 = uVar13;
            FUN_100e25fcc(uVar13,uVar7,uVar15,uVar9);
            func_0x000100cb61c8(lVar11,uVar15,uVar9);
            if ((uVar10 & 1) == 0) goto LAB_1015b96b8;
          }
          else {
            if (uVar9 >> 0x3c < 0xf) {
LAB_1015b9664:
              uVar5 = 0x112db6f48;
              puVar6 = &UNK_10d969b40;
              FUN_1015bbdcc(&lStack_170,alStack_1c8,0x112db6f48,&UNK_10d969b40);
              plVar3 = &lStack_190;
              plVar4 = alStack_1c8;
              uVar10 = uVar7;
              uVar14 = uVar13;
              lVar8 = lVar11;
              uVar7 = uVar9;
              uVar13 = uVar15;
              lVar11 = lVar12;
              goto LAB_1015b9690;
            }
            FUN_1015bbdcc(&lStack_170,alStack_1c8,0x112db6f48,&UNK_10d969b40);
            FUN_1015bbdcc(&lStack_190,alStack_1c8,0x112db6f48,&UNK_10d969b40);
          }
          func_0x000100cb61c8(lVar11,uVar13,uVar7);
          uVar5 = *param_1;
          FUN_100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar5;
          goto LAB_1015b96c0;
        }
        uVar5 = 0x112db6f48;
        puVar6 = &UNK_10d969b40;
        FUN_1015bbdcc(&lStack_f0,&lStack_130,0x112db6f48,&UNK_10d969b40);
        plVar3 = &lStack_110;
        plVar4 = &lStack_130;
        uVar10 = uVar7;
        uVar14 = uVar13;
        lVar8 = lVar11;
        uVar7 = uVar9;
        uVar13 = uVar15;
        lVar11 = lVar12;
      }
LAB_1015b9690:
      FUN_1015bbdcc(plVar3,plVar4,uVar5,puVar6);
      func_0x000100cb61c8(lVar8,uVar14,uVar10);
    }
LAB_1015b96b8:
    func_0x000100cb61c8(lVar11,uVar13,uVar7);
  }
  uVar1 = 0;
LAB_1015b96c0:
  return uVar1 & 1;
}



/* Entry: 1015b2630; end: 1015b265f;  */

undefined1  [16] FUN_1015b2630(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015b2660; end: 1015b2693;  */

void FUN_1015b2660(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015b2694; end: 1015b26a7;  */

undefined8 FUN_1015b2694(void)

{
  return 0x1015b26a4;
}



/* Entry: 1015b26a8; end: 1015b26bb;  */

void FUN_1015b26a8(void)

{
  FUN_1015b2114();
  return;
}



/* Entry: 1015b26bc; end: 1015b270b;  */

void FUN_1015b26bc(void)

{
  FUN_1015b2268();
  return;
}



/* Entry: 1015b270c; end: 1015b270f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015b270c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015b2710; end: 1015b2747;  */

uint FUN_1015b2710(long param_1,long param_2)

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
  func_0x0001015c58bc();
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



/* Entry: 1015b2748; end: 1015b27c7;  */

uint FUN_1015b2748(undefined8 *param_1)

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
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_28 = param_1[0x11];
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
  uStack_b8 = unaff_x20[0x11];
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
  func_0x0001015b8f64(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1015b27c8; end: 1015b2867;  */

/* WARNING: Possible PIC construction at 0x0001015b2814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b2824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b2818) */
/* WARNING: Removing unreachable block (ram,0x0001015b2828) */

void FUN_1015b27c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7320 != -1) {
    func_0x000107c61568(0x112db7320,FUN_1015b20cc);
  }
  uVar5 = uRam00000001138008f0;
  uVar4 = uRam00000001138008e8;
  uVar3 = uRam00000001138008e0;
  uVar2 = uRam00000001138008d8;
  uVar1 = uRam00000001138008d0;
  *param_1 = uRam00000001138008c8;
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



/* Entry: 1015b2868; end: 1015b28a3;  */

void FUN_1015b2868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d78,&UNK_10d966000);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b28a4; end: 1015b29df;  */

void FUN_1015b28a4(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
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



/* Entry: 1015b29e0; end: 1015b2a5f;  */

uint FUN_1015b29e0(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
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
  uStack_28 = param_2[0x11];
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
  func_0x0001015b8f64(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1015b2a60; end: 1015b2a87;  */

void FUN_1015b2a60(void)

{
  func_0x000107c5fb78(0x557055656b61572e,0xe900000000000069);
  uRam00000001138008f8 = 0xd00000000000002a;
  uRam0000000113800900 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b2a88; end: 1015b2acf;  */

void FUN_1015b2a88(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9661f0,0x17,2);
  uRam0000000113800910 = uStack_38;
  uRam0000000113800908 = uStack_40;
  uRam0000000113800920 = uStack_28;
  uRam0000000113800918 = uStack_30;
  uRam0000000113800930 = uStack_18;
  uRam0000000113800928 = uStack_20;
  return;
}



/* Entry: 1015b2ad0; end: 1015b2b7f;  */

void FUN_1015b2ad0(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      pcVar4 = *(code **)(param_3 + 0x198);
      (*param_4)();
      (*pcVar4)(unaff_x20 + 0x10,param_5,lVar1,param_2,param_3);
    }
  }
  return;
}



/* Entry: 1015b2b80; end: 1015b2bdf;  */

void FUN_1015b2b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  (*param_4)();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b2be0; end: 1015b2c67;  */

void FUN_1015b2be0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,1,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b2c68; end: 1015b2ca3;  */

undefined1  [16] FUN_1015b2c68(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db7330 != -1) {
    func_0x000107c61568(0x112db7330,FUN_1015b2a60);
  }
  auVar1._8_8_ = uRam0000000113800900;
  auVar1._0_8_ = uRam00000001138008f8;
  func_0x000107c61434(uRam0000000113800900);
  return auVar1;
}



/* Entry: 1015b2ca4; end: 1015b2cc7;  */

void FUN_1015b2ca4(void)

{
  FUN_1015b2ad0();
  return;
}



/* Entry: 1015b2cc8; end: 1015b2d07;  */

void FUN_1015b2cc8(void)

{
  FUN_1015b2b80();
  return;
}



/* Entry: 1015b2d08; end: 1015b2d3f;  */

uint FUN_1015b2d08(long param_1,long param_2)

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
  func_0x0001015c587c();
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



/* Entry: 1015b2d40; end: 1015b2d87;  */

uint FUN_1015b2d40(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  func_0x0001015b99d8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015b2d88; end: 1015b2e27;  */

/* WARNING: Possible PIC construction at 0x0001015b2dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b2de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b2dd8) */
/* WARNING: Removing unreachable block (ram,0x0001015b2de8) */

void FUN_1015b2d88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7338 != -1) {
    func_0x000107c61568(0x112db7338,FUN_1015b2a88);
  }
  uVar5 = uRam0000000113800930;
  uVar4 = uRam0000000113800928;
  uVar3 = uRam0000000113800920;
  uVar2 = uRam0000000113800918;
  uVar1 = uRam0000000113800910;
  *param_1 = uRam0000000113800908;
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



/* Entry: 1015b2e28; end: 1015b2e3b;  */

void FUN_1015b2e28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d68,&UNK_10d965ff8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b2e3c; end: 1015b2e6f;  */

void FUN_1015b2e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1015b2e70; end: 1015b2f73;  */

void FUN_1015b2e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015b2f74; end: 1015b2fbb;  */

uint FUN_1015b2f74(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  func_0x0001015b99d8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015b2fbc; end: 1015b302b;  */

void FUN_1015b2fbc(void)

{
  func_0x000107c5fb78(0xd000000000000012,0x800000010efb3070);
  uRam0000000113800938 = 0xd00000000000002a;
  uRam0000000113800940 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b302c; end: 1015b3073;  */

void FUN_1015b302c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9661b0,0x34,2);
  uRam0000000113800950 = uStack_38;
  uRam0000000113800948 = uStack_40;
  uRam0000000113800960 = uStack_28;
  uRam0000000113800958 = uStack_30;
  uRam0000000113800970 = uStack_18;
  uRam0000000113800968 = uStack_20;
  return;
}



/* Entry: 1015b3074; end: 1015b314b;  */

void FUN_1015b3074(undefined8 param_1,long param_2,long param_3,code *param_4,undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
LAB_1015b30f0:
  lVar2 = param_2;
  lVar1 = param_3;
  (*pcVar5)();
  if ((unaff_x21 != 0) || (((uint)lVar1 & 0xff) == 1)) {
    return;
  }
  if (lVar2 != 1) goto code_r0x0001015b310c;
  pcVar4 = *(code **)(param_3 + 0x198);
  func_0x0001015c5cfc();
  lVar1 = unaff_x20 + 0x10;
  puVar3 = &UNK_110790a00;
  goto LAB_1015b30d4;
code_r0x0001015b310c:
  if (lVar2 == 2) {
    pcVar4 = *(code **)(param_3 + 0x198);
    (*param_4)();
    lVar1 = unaff_x20 + 0x28;
    puVar3 = param_5;
LAB_1015b30d4:
    (*pcVar4)(lVar1,puVar3,lVar2,param_2,param_3);
  }
  goto LAB_1015b30f0;
}



/* Entry: 1015b314c; end: 1015b31bf;  */

void FUN_1015b314c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b31c0();
  if (unaff_x21 == 0) {
    FUN_1015b3248();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b31c0; end: 1015b3247;  */

void FUN_1015b31c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,1,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b3248; end: 1015b32cf;  */

void FUN_1015b3248(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,2,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b32d0; end: 1015b330b;  */

undefined1  [16] FUN_1015b32d0(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db7348 != -1) {
    func_0x000107c61568(0x112db7348,FUN_1015b2fbc);
  }
  auVar1._8_8_ = uRam0000000113800940;
  auVar1._0_8_ = uRam0000000113800938;
  func_0x000107c61434(uRam0000000113800940);
  return auVar1;
}



/* Entry: 1015b330c; end: 1015b332f;  */

void FUN_1015b330c(void)

{
  FUN_1015b3074();
  return;
}



/* Entry: 1015b3330; end: 1015b3367;  */

void FUN_1015b3330(void)

{
  FUN_1015b314c();
  return;
}



/* Entry: 1015b3368; end: 1015b339f;  */

uint FUN_1015b3368(long param_1,long param_2)

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
  func_0x0001015c583c();
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



/* Entry: 1015b33a0; end: 1015b33e7;  */

uint FUN_1015b33a0(undefined8 *param_1)

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
  func_0x0001015b9bf4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015b33e8; end: 1015b3487;  */

/* WARNING: Possible PIC construction at 0x0001015b3434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015b3444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015b3438) */
/* WARNING: Removing unreachable block (ram,0x0001015b3448) */

void FUN_1015b33e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db7350 != -1) {
    func_0x000107c61568(0x112db7350,FUN_1015b302c);
  }
  uVar5 = uRam0000000113800970;
  uVar4 = uRam0000000113800968;
  uVar3 = uRam0000000113800960;
  uVar2 = uRam0000000113800958;
  uVar1 = uRam0000000113800950;
  *param_1 = uRam0000000113800948;
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



/* Entry: 1015b3488; end: 1015b349b;  */

void FUN_1015b3488(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db7d58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db7d58,&UNK_10d965ff0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015b349c; end: 1015b34cf;  */

void FUN_1015b349c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1015b34d0; end: 1015b35d3;  */

void FUN_1015b34d0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015b35d4; end: 1015b361b;  */

uint FUN_1015b35d4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001015b9bf4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015b361c; end: 1015b368b;  */

void FUN_1015b361c(void)

{
  func_0x000107c5fb78(0xd000000000000013,0x800000010efb3050);
  uRam0000000113800978 = 0xd00000000000002a;
  uRam0000000113800980 = 0x800000010efb3020;
  return;
}



/* Entry: 1015b368c; end: 1015b36d3;  */

void FUN_1015b368c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966120,0x80,2);
  uRam0000000113800990 = uStack_38;
  uRam0000000113800988 = uStack_40;
  uRam00000001138009a0 = uStack_28;
  uRam0000000113800998 = uStack_30;
  uRam00000001138009b0 = uStack_18;
  uRam00000001138009a8 = uStack_20;
  return;
}



/* Entry: 1015b36d4; end: 1015b381f;  */

void FUN_1015b36d4(undefined8 param_1,long param_2,long param_3)

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
      puVar3 = &UNK_110790c80;
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110790a00;
          goto LAB_1015b375c;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1015b375c;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x48;
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x68;
        }
        else {
          if (lVar1 != 5) goto LAB_1015b3770;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x88;
        }
LAB_1015b375c:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1015b3770:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015b3820; end: 1015b38db;  */

void FUN_1015b3820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015b38dc();
  if (unaff_x21 == 0) {
    FUN_1015b3964();
    FUN_1015b39e8();
    FUN_1015b3a6c();
    FUN_1015b3af0();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015b38dc; end: 1015b3963;  */

void FUN_1015b38dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,1,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b3964; end: 1015b39e7;  */

void FUN_1015b3964(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x30);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b39e8; end: 1015b3a6b;  */

void FUN_1015b39e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x50);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b3a6c; end: 1015b3aef;  */

void FUN_1015b3a6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x70);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015b3af0; end: 1015b3b73;  */

void FUN_1015b3af0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x90);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,5,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}


