/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015732a8; end: 1015732b3;  */

void FUN_1015732a8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1015793c8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015732b4; end: 1015733ab;  */

void FUN_1015732b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1015734d8(uVar1,*(undefined1 *)(unaff_x20 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 1015733ac; end: 1015733ff;  */

bool FUN_1015733ac(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  FUN_1015734d8(lVar2,(char)param_1[1]);
  FUN_1015734d8(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 101573400; end: 10157343f;  */

void FUN_101573400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db51b0;
  func_0x0001000285a8(0x112db51b0,&UNK_10d95fd58);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101573440; end: 10157344b;  */

void FUN_101573440(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x1015793d4)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10157344c; end: 10157348b;  */

void FUN_10157344c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db52b0;
  func_0x0001000285a8(0x112db52b0,&UNK_10d95fd60);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10157348c; end: 101573497;  */

void FUN_10157348c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1015793d4)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101573498; end: 1015734d7;  */

void FUN_101573498(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db5300;
  func_0x0001000285a8(0x112db5300,&UNK_10d95fd68);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015734d8; end: 1015734db;  */

void FUN_1015734d8(void)

{
  return;
}



/* Entry: 1015734dc; end: 10157355b;  */

void FUN_1015734dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db5370;
  func_0x0001000285a8(0x112db5370,&UNK_10d95fd80);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10157355c; end: 101573587;  */

void FUN_10157355c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_101579928();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101573588; end: 1015735c7;  */

void FUN_101573588(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db54c0;
  func_0x0001000285a8(0x112db54c0,&UNK_10d95fdd0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015735c8; end: 1015735f7;  */

void FUN_1015735c8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_101579928();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015735f8; end: 1015736eb;  */

void FUN_1015735f8(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  if ((char)lVar1 == '\x01') {
    lVar2 = *(long *)(&UNK_10d961bf8 + lVar2 * 8);
  }
  func_0x000107c60690(lVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015736ec; end: 101573727;  */

bool FUN_1015736ec(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10d961bf8 + lVar1 * 8);
  }
  lVar2 = *param_2;
  if ((char)param_2[1] == '\x01') {
    lVar2 = *(long *)(&UNK_10d961bf8 + lVar2 * 8);
  }
  return lVar1 == lVar2;
}



/* Entry: 101573728; end: 10157384b;  */

void FUN_101573728(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db5510;
  func_0x0001000285a8(0x112db5510,&UNK_10d95fdd8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10157384c; end: 101573893;  */

bool FUN_10157384c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 101573894; end: 101573903;  */

void FUN_101573894(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101573904; end: 10157390f;  */

void FUN_101573904(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101579958)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101573910; end: 1015739c7;  */

void FUN_101573910(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015739c8; end: 101573a0f;  */

void FUN_1015739c8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961bb0,0x3f,2);
  uRam00000001137ff780 = uStack_38;
  uRam00000001137ff778 = uStack_40;
  uRam00000001137ff790 = uStack_28;
  uRam00000001137ff788 = uStack_30;
  uRam00000001137ff7a0 = uStack_18;
  uRam00000001137ff798 = uStack_20;
  return;
}



/* Entry: 101573a10; end: 101573b33;  */

/* WARNING: Removing unreachable block (ram,0x000101573b30) */

void FUN_101573a10(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 2) goto LAB_101573aac;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000101579964();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_1103deab0;
        }
        else {
          if (lVar1 != 4) goto LAB_101573aac;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001015799a4();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1103dec58;
        }
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_101573aac:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 101573b34; end: 101573c57;  */

void FUN_101573b34(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  if ((*unaff_x20 == 0) ||
     ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = *(ulong *)(unaff_x20 + 2);
    uVar1 = *(ulong *)(unaff_x20 + 4);
    uVar3 = uVar2 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar3 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar3 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar2,uVar1,2,param_2,param_3), unaff_x21 == 0)) {
      uVar3 = *(ulong *)(unaff_x20 + 6);
      if (*(long *)(uVar3 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        FUN_101579964();
        (*pcVar5)(uVar3,3,&UNK_1103deab0,uVar2,param_2,param_3);
        uVar2 = uVar3;
        if (unaff_x21 != 0) {
          return;
        }
      }
      lVar4 = *(long *)(unaff_x20 + 8);
      if (*(long *)(lVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        func_0x0001015799a4();
        (*pcVar5)(lVar4,4,&UNK_1103dec58,uVar2,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),
                          param_2,param_3);
    }
  }
  return;
}



/* Entry: 101573c58; end: 101573cbb;  */

uint FUN_101573c58(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_1a0 [112];
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
  undefined8 uVar4;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if ((uVar2 == *(ulong *)(param_2 + 2) && *(long *)(param_1 + 4) == *(long *)(param_2 + 4)) ||
     (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 6);
    lVar5 = *(long *)(param_2 + 6);
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 == *(long *)(lVar5 + 0x10)) {
      if (lVar7 != 0 && lVar6 != lVar5) {
        puVar8 = (undefined8 *)(lVar6 + 0x20);
        puVar9 = (undefined8 *)(lVar5 + 0x20);
        do {
          uStack_128 = puVar8[1];
          uStack_130 = *puVar8;
          uStack_118 = puVar8[3];
          uStack_120 = puVar8[2];
          uStack_108 = puVar8[5];
          uStack_110 = puVar8[4];
          uStack_f8 = puVar8[7];
          uStack_100 = puVar8[6];
          uStack_e8 = puVar8[9];
          uStack_f0 = puVar8[8];
          uStack_d8 = puVar8[0xb];
          uStack_e0 = puVar8[10];
          uStack_c8 = puVar8[0xd];
          uStack_d0 = puVar8[0xc];
          uStack_68 = puVar9[0xb];
          uStack_70 = puVar9[10];
          uStack_58 = puVar9[0xd];
          uStack_60 = puVar9[0xc];
          uStack_88 = puVar9[7];
          uStack_90 = puVar9[6];
          uStack_78 = puVar9[9];
          uStack_80 = puVar9[8];
          uStack_b8 = puVar9[1];
          uStack_c0 = *puVar9;
          uStack_a8 = puVar9[3];
          uStack_b0 = puVar9[2];
          uStack_98 = puVar9[5];
          uStack_a0 = puVar9[4];
          FUN_10157f970(&uStack_130,auStack_1a0);
          FUN_10157f970(&uStack_c0,auStack_1a0);
          puVar3 = &uStack_130;
          FUN_10157aeb0(puVar3,&uStack_c0);
          func_0x00010157f9a4(&uStack_c0);
          func_0x00010157f9a4(&uStack_130);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10157b3b8;
          puVar9 = puVar9 + 0xe;
          puVar8 = puVar8 + 0xe;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar2 = *(ulong *)(param_1 + 8);
      FUN_101579148(uVar2,*(undefined8 *)(param_2 + 8));
      if ((uVar2 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 10);
        FUN_100e25fcc(uVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_2 + 10),
                      *(undefined8 *)(param_2 + 0xc));
        uVar1 = (uint)uVar4;
        goto LAB_10157b3bc;
      }
    }
  }
LAB_10157b3b8:
  uVar1 = 0;
LAB_10157b3bc:
  return uVar1 & 1;
}



/* Entry: 101573cbc; end: 101573ce3;  */

void FUN_101573cbc(void)

{
  FUN_101573a10();
  return;
}



/* Entry: 101573ce4; end: 101573d1b;  */

uint FUN_101573ce4(long param_1,long param_2)

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
  func_0x00010157f830();
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



/* Entry: 101573d1c; end: 101573d73;  */

uint FUN_101573d1c(undefined8 *param_1)

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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_10157b280(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101573d74; end: 101573e13;  */

/* WARNING: Possible PIC construction at 0x000101573dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101573dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101573dc4) */
/* WARNING: Removing unreachable block (ram,0x000101573dd4) */

void FUN_101573d74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db55d8 != -1) {
    func_0x000107c61568(0x112db55d8,FUN_1015739c8);
  }
  uVar5 = uRam00000001137ff7a0;
  uVar4 = uRam00000001137ff798;
  uVar3 = uRam00000001137ff790;
  uVar2 = uRam00000001137ff788;
  uVar1 = uRam00000001137ff780;
  *param_1 = uRam00000001137ff778;
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



/* Entry: 101573e14; end: 101573e27;  */

void FUN_101573e14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5b38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5b38,&UNK_10d961590);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101573e28; end: 101573f5b;  */

void FUN_101573e28(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = *(undefined8 *)(unaff_x20 + 2);
  uStack_48 = *(undefined8 *)(unaff_x20 + 8);
  uStack_50 = *(undefined8 *)(unaff_x20 + 6);
  uStack_58 = *(undefined8 *)(unaff_x20 + 4);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0xc);
  uStack_40 = *(undefined8 *)(unaff_x20 + 10);
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101573f5c; end: 101573ffb;  */

uint FUN_101573f5c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_10157b280(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101573ffc; end: 10157409b;  */

/* WARNING: Possible PIC construction at 0x000101574048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101574058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010157404c) */
/* WARNING: Removing unreachable block (ram,0x00010157405c) */

void FUN_101573ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db55f8 != -1) {
    func_0x000107c61568(0x112db55f8,0x101573fb4);
  }
  uVar5 = uRam00000001137ff7d0;
  uVar4 = uRam00000001137ff7c8;
  uVar3 = uRam00000001137ff7c0;
  uVar2 = uRam00000001137ff7b8;
  uVar1 = uRam00000001137ff7b0;
  *param_1 = uRam00000001137ff7a8;
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



/* Entry: 10157409c; end: 1015740e3;  */

void FUN_10157409c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961a30,0x50,2);
  uRam00000001137ff7e0 = uStack_38;
  uRam00000001137ff7d8 = uStack_40;
  uRam00000001137ff7f0 = uStack_28;
  uRam00000001137ff7e8 = uStack_30;
  uRam00000001137ff800 = uStack_18;
  uRam00000001137ff7f8 = uStack_20;
  return;
}



/* Entry: 1015740e4; end: 101574183;  */

/* WARNING: Possible PIC construction at 0x000101574130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101574140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101574134) */
/* WARNING: Removing unreachable block (ram,0x000101574144) */

void FUN_1015740e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5600 != -1) {
    func_0x000107c61568(0x112db5600,FUN_10157409c);
  }
  uVar5 = uRam00000001137ff800;
  uVar4 = uRam00000001137ff7f8;
  uVar3 = uRam00000001137ff7f0;
  uVar2 = uRam00000001137ff7e8;
  uVar1 = uRam00000001137ff7e0;
  *param_1 = uRam00000001137ff7d8;
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



/* Entry: 101574184; end: 1015741cb;  */

void FUN_101574184(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961910,0x113,2);
  uRam00000001137ff810 = uStack_38;
  uRam00000001137ff808 = uStack_40;
  uRam00000001137ff820 = uStack_28;
  uRam00000001137ff818 = uStack_30;
  uRam00000001137ff830 = uStack_18;
  uRam00000001137ff828 = uStack_20;
  return;
}



/* Entry: 1015741cc; end: 10157426b;  */

/* WARNING: Possible PIC construction at 0x000101574218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101574228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010157421c) */
/* WARNING: Removing unreachable block (ram,0x00010157422c) */

void FUN_1015741cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5608 != -1) {
    func_0x000107c61568(0x112db5608,FUN_101574184);
  }
  uVar5 = uRam00000001137ff830;
  uVar4 = uRam00000001137ff828;
  uVar3 = uRam00000001137ff820;
  uVar2 = uRam00000001137ff818;
  uVar1 = uRam00000001137ff810;
  *param_1 = uRam00000001137ff808;
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



/* Entry: 10157426c; end: 1015742b3;  */

void FUN_10157426c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9618f0,0x1b,2);
  uRam00000001137ff840 = uStack_38;
  uRam00000001137ff838 = uStack_40;
  uRam00000001137ff850 = uStack_28;
  uRam00000001137ff848 = uStack_30;
  uRam00000001137ff860 = uStack_18;
  uRam00000001137ff858 = uStack_20;
  return;
}



/* Entry: 1015742b4; end: 101574353;  */

/* WARNING: Possible PIC construction at 0x000101574300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101574310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101574304) */
/* WARNING: Removing unreachable block (ram,0x000101574314) */

void FUN_1015742b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5610 != -1) {
    func_0x000107c61568(0x112db5610,FUN_10157426c);
  }
  uVar5 = uRam00000001137ff860;
  uVar4 = uRam00000001137ff858;
  uVar3 = uRam00000001137ff850;
  uVar2 = uRam00000001137ff848;
  uVar1 = uRam00000001137ff840;
  *param_1 = uRam00000001137ff838;
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



/* Entry: 101574354; end: 101574373;  */

void FUN_101574354(void)

{
  func_0x000107c5fb78(0x65746174532e,0xe600000000000000);
  uRam00000001137ff868 = 0xd00000000000002c;
  uRam00000001137ff870 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101574374; end: 1015743bb;  */

void FUN_101574374(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9618b0,0x32,2);
  uRam00000001137ff880 = uStack_38;
  uRam00000001137ff878 = uStack_40;
  uRam00000001137ff890 = uStack_28;
  uRam00000001137ff888 = uStack_30;
  uRam00000001137ff8a0 = uStack_18;
  uRam00000001137ff898 = uStack_20;
  return;
}



/* Entry: 1015743bc; end: 10157451b;  */

/* WARNING: Removing unreachable block (ram,0x000101574518) */

void FUN_1015743bc(undefined8 param_1,long param_2,long param_3)

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
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_10157f930();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1103e0630;
          goto LAB_101574448;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_10157c6b8();
          lVar2 = unaff_x20 + 0x48;
          puVar3 = &UNK_1103deb40;
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x1a0);
          func_0x00010157b41c();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1103ded78;
        }
        else {
          if (lVar1 != 5) goto LAB_10157445c;
          pcVar5 = *(code **)(param_3 + 0x1a0);
          func_0x0001015799a4();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_1103dec58;
        }
LAB_101574448:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10157445c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10157451c; end: 101574653;  */

void FUN_10157451c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong *puVar3;
  ulong uVar4;
  code *pcVar5;
  
  uVar1 = unaff_x20[1];
  uVar4 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if (((uVar4 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_101574654(), unaff_x21 == 0)) {
    puVar2 = unaff_x20;
    FUN_1015746d4();
    puVar3 = (ulong *)unaff_x20[2];
    if (puVar3[2] != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      func_0x00010157b41c();
      (*pcVar5)(puVar3,4,&UNK_1103ded78,puVar2,param_2,param_3);
      puVar2 = puVar3;
    }
    uVar4 = unaff_x20[3];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      func_0x0001015799a4();
      (*pcVar5)(uVar4,5,&UNK_1103dec58,puVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 101574654; end: 1015746d3;  */

void FUN_101574654(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x40);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157f930();
    (*pcVar1)(&uStack_60,2,&UNK_1103e0630,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015746d4; end: 10157475f;  */

void FUN_1015746d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157c6b8();
    (*pcVar1)(&uStack_70,3,&UNK_1103deb40,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101574760; end: 1015747bb;  */

void FUN_101574760(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = puVar1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  return;
}



/* Entry: 1015747bc; end: 1015747eb;  */

undefined1  [16] FUN_1015747bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1015747ec; end: 10157481f;  */

void FUN_1015747ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 101574820; end: 101574833;  */

undefined1  [16] FUN_101574820(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x101574830;
  return auVar1;
}



/* Entry: 101574834; end: 101574847;  */

void FUN_101574834(void)

{
  FUN_1015743bc();
  return;
}



/* Entry: 101574848; end: 10157488f;  */

void FUN_101574848(void)

{
  FUN_10157451c();
  return;
}



/* Entry: 101574890; end: 101574893;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101574890(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101574894; end: 1015748cb;  */

uint FUN_101574894(long param_1,long param_2)

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
  func_0x00010157f7f0();
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



/* Entry: 1015748cc; end: 101574933;  */

uint FUN_1015748cc(undefined8 *param_1)

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
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
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
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_10157aeb0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101574934; end: 1015749d3;  */

/* WARNING: Possible PIC construction at 0x000101574980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101574990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101574984) */
/* WARNING: Removing unreachable block (ram,0x000101574994) */

void FUN_101574934(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5620 != -1) {
    func_0x000107c61568(0x112db5620,FUN_101574374);
  }
  uVar5 = uRam00000001137ff8a0;
  uVar4 = uRam00000001137ff898;
  uVar3 = uRam00000001137ff890;
  uVar2 = uRam00000001137ff888;
  uVar1 = uRam00000001137ff880;
  *param_1 = uRam00000001137ff878;
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



/* Entry: 1015749d4; end: 101574a0f;  */

void FUN_1015749d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5b28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5b28,&UNK_10d961588);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101574a10; end: 101574b3b;  */

void FUN_101574a10(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
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



/* Entry: 101574b3c; end: 101574b9f;  */

uint FUN_101574b3c(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
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
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_10157aeb0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101574ba0; end: 101574bcf;  */

void FUN_101574ba0(void)

{
  func_0x000107c5fb78(0x736572676f72502e,0xed00006365705373);
  uRam00000001137ff8a8 = 0xd00000000000002c;
  uRam00000001137ff8b0 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101574bd0; end: 101574c17;  */

void FUN_101574bd0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961890,0x16,2);
  uRam00000001137ff8c0 = uStack_38;
  uRam00000001137ff8b8 = uStack_40;
  uRam00000001137ff8d0 = uStack_28;
  uRam00000001137ff8c8 = uStack_30;
  uRam00000001137ff8e0 = uStack_18;
  uRam00000001137ff8d8 = uStack_20;
  return;
}



/* Entry: 101574c18; end: 101574ceb;  */

/* WARNING: Removing unreachable block (ram,0x000101574ce8) */

void FUN_101574c18(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x00010157b49c();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x60))(unaff_x20 + 0x10,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101574cec; end: 101574da7;  */

void FUN_101574cec(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x00010157b49c();
    (*pcVar2)(&lStack_50,1,&UNK_1103debe0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((unaff_x20[2] == 0) ||
     ((**(code **)(param_3 + 0x20))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 101574da8; end: 101574de3;  */

void FUN_101574da8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 101574de4; end: 101574e3f;  */

undefined1  [16]
FUN_101574de4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101574e40; end: 101574e5b;  */

undefined8 FUN_101574e40(void)

{
  return 1;
}



/* Entry: 101574e5c; end: 101574e83;  */

void FUN_101574e5c(void)

{
  FUN_101574c18();
  return;
}



/* Entry: 101574e84; end: 101574ebb;  */

uint FUN_101574e84(long param_1,long param_2)

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
  func_0x00010157f7b0();
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



/* Entry: 101574ebc; end: 101574f03;  */

uint FUN_101574ebc(undefined8 *param_1)

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
  FUN_10157940c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101574f04; end: 101574fa3;  */

/* WARNING: Possible PIC construction at 0x000101574f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101574f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101574f54) */
/* WARNING: Removing unreachable block (ram,0x000101574f64) */

void FUN_101574f04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5640 != -1) {
    func_0x000107c61568(0x112db5640,FUN_101574bd0);
  }
  uVar5 = uRam00000001137ff8e0;
  uVar4 = uRam00000001137ff8d8;
  uVar3 = uRam00000001137ff8d0;
  uVar2 = uRam00000001137ff8c8;
  uVar1 = uRam00000001137ff8c0;
  *param_1 = uRam00000001137ff8b8;
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



/* Entry: 101574fa4; end: 101574fb7;  */

void FUN_101574fa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5b18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5b18,&UNK_10d961580);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101574fb8; end: 1015750db;  */

void FUN_101574fb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined1 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  uStack_48 = unaff_x20[2];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015750dc; end: 10157516b;  */

uint FUN_1015750dc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10157940c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10157516c; end: 10157520b;  */

/* WARNING: Possible PIC construction at 0x0001015751b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015751c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015751bc) */
/* WARNING: Removing unreachable block (ram,0x0001015751cc) */

void FUN_10157516c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5658 != -1) {
    func_0x000107c61568(0x112db5658,0x101575124);
  }
  uVar5 = uRam00000001137ff910;
  uVar4 = uRam00000001137ff908;
  uVar3 = uRam00000001137ff900;
  uVar2 = uRam00000001137ff8f8;
  uVar1 = uRam00000001137ff8f0;
  *param_1 = uRam00000001137ff8e8;
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



/* Entry: 10157520c; end: 101575237;  */

void FUN_10157520c(void)

{
  func_0x000107c5fb78(0x7469736e6172542e,0xeb000000006e6f69);
  uRam00000001137ff918 = 0xd00000000000002c;
  uRam00000001137ff920 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101575238; end: 10157527f;  */

void FUN_101575238(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d961800,0x5b,2);
  uRam00000001137ff930 = uStack_38;
  uRam00000001137ff928 = uStack_40;
  uRam00000001137ff940 = uStack_28;
  uRam00000001137ff938 = uStack_30;
  uRam00000001137ff950 = uStack_18;
  uRam00000001137ff948 = uStack_20;
  return;
}



/* Entry: 101575280; end: 10157540f;  */

/* WARNING: Removing unreachable block (ram,0x0001015753ec) */

void FUN_101575280(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_10157c870();
        }
        else {
          if (lVar1 != 2) {
            if (lVar1 != 3) goto LAB_101575320;
            pcVar4 = *(code **)(param_3 + 0x150);
            lVar1 = unaff_x20 + 8;
            goto LAB_1015753dc;
          }
          pcVar4 = *(code **)(param_3 + 400);
          func_0x00010157b51c();
        }
LAB_10157530c:
        (*pcVar4)();
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar4 = *(code **)(param_3 + 0x1a0);
            func_0x00010157b41c();
          }
          else {
            if (lVar1 != 5) goto LAB_101575320;
            pcVar4 = *(code **)(param_3 + 0x198);
            FUN_10157d040();
          }
          goto LAB_10157530c;
        }
        if (lVar1 == 6) {
          pcVar4 = *(code **)(param_3 + 0x60);
          lVar1 = unaff_x20 + 0x20;
LAB_1015753dc:
          (*pcVar4)(lVar1,param_2,param_3);
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x60);
          lVar1 = unaff_x20 + 0x28;
          goto LAB_1015753dc;
        }
      }
LAB_101575320:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101575410; end: 101575587;  */

void FUN_101575410(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  
  plVar3 = unaff_x20;
  FUN_101575588();
  if (unaff_x21 == 0) {
    lVar5 = *unaff_x20;
    if (*(long *)(lVar5 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 400);
      func_0x00010157b51c();
      (*pcVar6)(lVar5,2,&UNK_1103de918,plVar3,param_2,param_3);
    }
    uVar4 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(uVar4,uVar2,3,param_2,param_3);
    }
    lVar5 = unaff_x20[3];
    if (*(long *)(lVar5 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      func_0x00010157b41c();
      (*pcVar6)(lVar5,4,&UNK_1103ded78,uVar4,param_2,param_3);
    }
    FUN_10157561c();
    if (unaff_x20[4] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[4],6,param_2,param_3);
    }
    if (unaff_x20[5] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[5],7,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 101575588; end: 10157561b;  */

void FUN_101575588(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_68 = *(long *)(param_1 + 0x58);
  if (lStack_68 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157c870();
    (*pcVar1)(&uStack_80,1,&UNK_1103decf0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10157561c; end: 1015756af;  */

void FUN_10157561c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x80);
    uStack_80 = *(undefined8 *)(param_1 + 0x78);
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10157d040();
    (*pcVar1)(&uStack_80,5,&UNK_1103df2d8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015756b0; end: 101575713;  */

void FUN_1015756b0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[3] = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xc000000000000000;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xf000000000000000;
  return;
}



/* Entry: 101575714; end: 101575743;  */

undefined1  [16] FUN_101575714(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 101575744; end: 101575777;  */

void FUN_101575744(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 101575778; end: 10157578b;  */

undefined1  [16] FUN_101575778(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x101575788;
  return auVar1;
}



/* Entry: 10157578c; end: 10157579f;  */

void FUN_10157578c(void)

{
  FUN_101575280();
  return;
}



/* Entry: 1015757a0; end: 1015757f7;  */

void FUN_1015757a0(void)

{
  FUN_101575410();
  return;
}



/* Entry: 1015757f8; end: 1015757fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015757f8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015757fc; end: 101575833;  */

uint FUN_1015757fc(long param_1,long param_2)

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
  func_0x00010157f770();
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



/* Entry: 101575834; end: 1015758c3;  */

uint FUN_101575834(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_28 = param_1[0x15];
  uStack_30 = param_1[0x14];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_f8 = unaff_x20[0x11];
  uStack_100 = unaff_x20[0x10];
  uStack_e8 = unaff_x20[0x13];
  uStack_f0 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[0x15];
  uStack_e0 = unaff_x20[0x14];
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  func_0x00010157a8e0(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1015758c4; end: 101575963;  */

/* WARNING: Possible PIC construction at 0x000101575910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101575920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101575914) */
/* WARNING: Removing unreachable block (ram,0x000101575924) */

void FUN_1015758c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5668 != -1) {
    func_0x000107c61568(0x112db5668,FUN_101575238);
  }
  uVar5 = uRam00000001137ff950;
  uVar4 = uRam00000001137ff948;
  uVar3 = uRam00000001137ff940;
  uVar2 = uRam00000001137ff938;
  uVar1 = uRam00000001137ff930;
  *param_1 = uRam00000001137ff928;
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



/* Entry: 101575964; end: 10157599f;  */

void FUN_101575964(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5b08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5b08,&UNK_10d961578);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015759a0; end: 101575aeb;  */

void FUN_1015759a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_128 [72];
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
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_48 = unaff_x20[0x13];
  uStack_50 = unaff_x20[0x12];
  uStack_38 = unaff_x20[0x15];
  uStack_40 = unaff_x20[0x14];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  func_0x000107c6068c(auStack_128,0);
  func_0x000107c5fa50(auStack_128,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101575aec; end: 101575b7b;  */

uint FUN_101575aec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_d8 = param_1[0x15];
  uStack_e0 = param_1[0x14];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_28 = param_2[0x15];
  uStack_30 = param_2[0x14];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  func_0x00010157a8e0(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 101575b7c; end: 101575b9f;  */

void FUN_101575b7c(void)

{
  func_0x000107c5fb78(0x726567676972542e,0xe800000000000000);
  uRam00000001137ff958 = 0xd00000000000002c;
  uRam00000001137ff960 = 0x800000010efb2ee0;
  return;
}



/* Entry: 101575ba0; end: 101575be7;  */

void FUN_101575ba0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9617e0,0x1a,2);
  uRam00000001137ff970 = uStack_38;
  uRam00000001137ff968 = uStack_40;
  uRam00000001137ff980 = uStack_28;
  uRam00000001137ff978 = uStack_30;
  uRam00000001137ff990 = uStack_18;
  uRam00000001137ff988 = uStack_20;
  return;
}



/* Entry: 101575be8; end: 101575ccf;  */

/* WARNING: Removing unreachable block (ram,0x000101575cc0) */

void FUN_101575be8(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x60);
        lVar1 = unaff_x20 + 0x20;
LAB_101575c50:
        (*pcVar4)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_101575c50;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010157b59c();
          (*pcVar4)();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101575cd0; end: 101575dbb;  */

void FUN_101575cd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x00010157b59c();
    (*pcVar4)(&lStack_50,1,&UNK_1103de888,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
     ((unaff_x20[4] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[4],3,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 101575dbc; end: 101575e1b;  */

void FUN_101575dbc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xc000000000000000;
  return;
}



/* Entry: 101575e1c; end: 101575e43;  */

void FUN_101575e1c(void)

{
  FUN_101575be8();
  return;
}



/* Entry: 101575e44; end: 101575e7b;  */

uint FUN_101575e44(long param_1,long param_2)

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
  func_0x00010157f730();
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



/* Entry: 101575e7c; end: 101575ed3;  */

uint FUN_101575e7c(undefined8 *param_1)

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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  func_0x0001015794b8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101575ed4; end: 101575f73;  */

/* WARNING: Possible PIC construction at 0x000101575f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101575f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101575f24) */
/* WARNING: Removing unreachable block (ram,0x000101575f34) */

void FUN_101575ed4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db5688 != -1) {
    func_0x000107c61568(0x112db5688,FUN_101575ba0);
  }
  uVar5 = uRam00000001137ff990;
  uVar4 = uRam00000001137ff988;
  uVar3 = uRam00000001137ff980;
  uVar2 = uRam00000001137ff978;
  uVar1 = uRam00000001137ff970;
  *param_1 = uRam00000001137ff968;
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


