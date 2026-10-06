/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103646ee0; end: 103646f1f;  */

void FUN_103646ee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f816a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf19e8;
  func_0x000107c61520(&UNK_10dbf19e8,&UNK_110674b48);
  puRam0000000112f816a8 = puVar1;
  return;
}



/* Entry: 103646f20; end: 103646f43;  */

void FUN_103646f20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103646f44();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103646f44; end: 103646f83;  */

void FUN_103646f44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f816b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf19c0;
  func_0x000107c61520(&UNK_10dbf19c0,&UNK_110674b48);
  puRam0000000112f816b0 = puVar1;
  return;
}



/* Entry: 103646f84; end: 103646faf;  */

void FUN_103646f84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103646ee0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035eeb64();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103646fb0; end: 103646fb3;  */

void FUN_103646fb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f816b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1a28;
  func_0x000107c61520(&UNK_10dbf1a28,&UNK_110674b48);
  puRam0000000112f816b8 = puVar1;
  return;
}



/* Entry: 103646fb4; end: 103646ff3;  */

void FUN_103646fb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f816b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1a28;
  func_0x000107c61520(&UNK_10dbf1a28,&UNK_110674b48);
  puRam0000000112f816b8 = puVar1;
  return;
}



/* Entry: 103646ff4; end: 1036470af;  */

long FUN_103646ff4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1036470b0; end: 10364763b;  */

undefined8 * FUN_1036470b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  uVar3 = param_2[10];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar2 = param_2[9];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
  }
  else {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
  }
  uVar3 = param_2[0xd];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  else {
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xd] = param_2[0xd];
  }
  return param_1;
}



/* Entry: 10364763c; end: 10364770b;  */

int FUN_10364763c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10364770c; end: 10364774b;  */

void FUN_10364770c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f816c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf1994;
  func_0x000107c61520(&DAT_10dbf1994,&UNK_110674b48);
  puRam0000000112f816c8 = puVar1;
  return;
}



/* Entry: 10364774c; end: 10364775b;  */

void FUN_10364774c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10364775c; end: 10364778b;  */

void FUN_10364775c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103648970();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10364778c; end: 103647793;  */

undefined8 FUN_10364778c(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103647794; end: 103647807;  */

void FUN_103647794(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f817c8;
  func_0x0001000285a8(0x112f817c8,&UNK_10dbf1b28);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103647808; end: 103647813;  */

void FUN_103647808(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103647814; end: 1036478bf;  */

void FUN_103647814(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1036478c0; end: 10364793b;  */

bool FUN_1036478c0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10364793c; end: 103647983;  */

void FUN_10364793c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf1e70,0x117,2);
  uRam000000011380af88 = uStack_38;
  uRam000000011380af80 = uStack_40;
  uRam000000011380af98 = uStack_28;
  uRam000000011380af90 = uStack_30;
  uRam000000011380afa8 = uStack_18;
  uRam000000011380afa0 = uStack_20;
  return;
}



/* Entry: 103647984; end: 103647bab;  */

/* WARNING: Removing unreachable block (ram,0x000103647ba8) */
/* WARNING: Removing unreachable block (ram,0x000103647b68) */

void FUN_103647984(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x180);
        FUN_10364897c();
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000103524e74();
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015c5cfc();
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 0xb:
        (**(code **)(param_3 + 0x138))(unaff_x20 + 9,param_2,param_3);
        goto LAB_103647b98;
      case 0xc:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000103524e74();
        break;
      case 0xd:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      case 0xe:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        break;
      default:
        goto LAB_103647b98;
      }
      (*pcVar3)();
LAB_103647b98:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103647bac; end: 103647d8f;  */

void FUN_103647bac(undefined8 param_1,undefined8 param_2,long param_3)

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
    FUN_10364897c();
    (*pcVar2)(&lStack_50,1,&UNK_110674e10,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103647d90();
  if (unaff_x21 == 0) {
    FUN_103647e18();
    FUN_103647ea0();
    FUN_103647f28();
    FUN_103647fb0();
    FUN_103648038();
    FUN_1036480c0();
    FUN_103648148();
    FUN_1036481d0();
    if (*(char *)((long)unaff_x20 + 9) == '\x01') {
      (**(code **)(param_3 + 0x68))(1,0xb,param_2,param_3);
    }
    FUN_103648258();
    FUN_1036482e0();
    FUN_103648368();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103647d90; end: 103647e17;  */

void FUN_103647d90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x30);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103647e18; end: 103647e9f;  */

void FUN_103647e18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103524e74();
    (*pcVar1)(&uStack_60,3,&UNK_110790b80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103647ea0; end: 103647f27;  */

void FUN_103647ea0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103647f28; end: 103647faf;  */

void FUN_103647f28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103647fb0; end: 103648037;  */

void FUN_103647fb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x90);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,6,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103648038; end: 1036480bf;  */

void FUN_103648038(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,7,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036480c0; end: 103648147;  */

void FUN_1036480c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xc0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb8);
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,8,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103648148; end: 1036481cf;  */

void FUN_103648148(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xd8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,9,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036481d0; end: 103648257;  */

void FUN_1036481d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xe8);
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,10,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103648258; end: 1036482df;  */

void FUN_103648258(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x108);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x100);
    uStack_60 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103524e74();
    (*pcVar1)(&uStack_60,0xc,&UNK_110790b80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036482e0; end: 103648367;  */

void FUN_1036482e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x120);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x118);
    uStack_60 = *(undefined8 *)(param_1 + 0x110);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,0xd,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103648368; end: 1036483f3;  */

void FUN_103648368(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x138);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x130);
    uStack_60 = *(undefined8 *)(param_1 + 0x128);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,0xe,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036483f4; end: 103648483;  */

long * FUN_1036483f4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_388 [3];
  long lStack_370;
  ulong uStack_368;
  ulong uStack_360;
  long lStack_350;
  ulong uStack_348;
  ulong uStack_340;
  long lStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_310;
  ulong uStack_308;
  ulong uStack_300;
  long lStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  long lStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
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
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001036489e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dbf1b0e)[*param_2] * 4 + 0x1036489e8))();
    return param_1;
  }
  if (*param_1 != *param_2) {
    return (long *)0x0;
  }
  uVar13 = param_1[5];
  lVar11 = param_1[4];
  uVar5 = param_1[6];
  uVar14 = param_2[5];
  lVar12 = param_2[4];
  uVar8 = param_2[6];
  lStack_b0 = lVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar8;
  lStack_90 = lVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103648bd0;
    if (lVar11 == lVar12) {
      FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      FUN_103648928(&lStack_b0,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar11,uVar14,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103648aa0;
    }
    else {
      uVar9 = 0x112db6f48;
      puVar10 = &UNK_10d969b40;
      FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
LAB_103648e50:
      FUN_103648928(plVar3,plVar4,uVar9,puVar10);
      func_0x000100d57178(lVar12,uVar14,uVar8);
    }
LAB_1036496e0:
    func_0x000100d57178(lVar11,uVar13,uVar5);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_103648bd0:
      uVar9 = 0x112db6f48;
      puVar10 = &UNK_10d969b40;
      FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
      uVar2 = uVar5;
      uVar6 = uVar13;
      lVar7 = lVar11;
      uVar5 = uVar8;
      uVar13 = uVar14;
      lVar11 = lVar12;
LAB_1036496b8:
      FUN_103648928(plVar3,plVar4,uVar9,puVar10);
      func_0x000100d57178(lVar7,uVar6,uVar2);
      goto LAB_1036496e0;
    }
    FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
    FUN_103648928(&lStack_b0,&lStack_d0,0x112db6f48,&UNK_10d969b40);
LAB_103648aa0:
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[8];
    lVar11 = param_1[7];
    uVar5 = param_1[9];
    uVar14 = param_2[8];
    lVar12 = param_2[7];
    uVar8 = param_2[9];
    lStack_f0 = lVar12;
    uStack_e8 = uVar14;
    uStack_e0 = uVar8;
    lStack_d0 = lVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103648c84;
      if ((int)lVar11 != (int)lVar12) {
        uVar9 = 0x112f75e88;
        puVar10 = &UNK_10dbe41c0;
        FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
        plVar3 = &lStack_f0;
        plVar4 = &lStack_110;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
      FUN_103648928(&lStack_f0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103648c84:
        uVar9 = 0x112f75e88;
        puVar10 = &UNK_10dbe41c0;
        FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
        plVar3 = &lStack_f0;
        plVar4 = &lStack_110;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
      FUN_103648928(&lStack_f0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0xb];
    lVar11 = param_1[10];
    uVar5 = param_1[0xc];
    uVar14 = param_2[0xb];
    lVar12 = param_2[10];
    uVar8 = param_2[0xc];
    lStack_130 = lVar12;
    uStack_128 = uVar14;
    uStack_120 = uVar8;
    lStack_110 = lVar11;
    uStack_108 = uVar13;
    uStack_100 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103648df4;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_130;
        plVar4 = &lStack_150;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_130,&lStack_150,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103648df4:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_130;
        plVar4 = &lStack_150;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_130,&lStack_150,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0xe];
    lVar11 = param_1[0xd];
    uVar5 = param_1[0xf];
    uVar14 = param_2[0xe];
    lVar12 = param_2[0xd];
    uVar8 = param_2[0xf];
    lStack_170 = lVar12;
    uStack_168 = uVar14;
    uStack_160 = uVar8;
    lStack_150 = lVar11;
    uStack_148 = uVar13;
    uStack_140 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103648f8c;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_170;
        plVar4 = &lStack_190;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_170,&lStack_190,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103648f8c:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_170;
        plVar4 = &lStack_190;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_170,&lStack_190,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x11];
    lVar11 = param_1[0x10];
    uVar5 = param_1[0x12];
    uVar14 = param_2[0x11];
    lVar12 = param_2[0x10];
    uVar8 = param_2[0x12];
    lStack_1b0 = lVar12;
    uStack_1a8 = uVar14;
    uStack_1a0 = uVar8;
    lStack_190 = lVar11;
    uStack_188 = uVar13;
    uStack_180 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_1036490f0;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1b0;
        plVar4 = &lStack_1d0;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1b0,&lStack_1d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_1036490f0:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1b0;
        plVar4 = &lStack_1d0;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1b0,&lStack_1d0,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x14];
    lVar11 = param_1[0x13];
    uVar5 = param_1[0x15];
    uVar14 = param_2[0x14];
    lVar12 = param_2[0x13];
    uVar8 = param_2[0x15];
    lStack_1f0 = lVar12;
    uStack_1e8 = uVar14;
    uStack_1e0 = uVar8;
    lStack_1d0 = lVar11;
    uStack_1c8 = uVar13;
    uStack_1c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103649250;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1f0;
        plVar4 = &lStack_210;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1f0,&lStack_210,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103649250:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1f0;
        plVar4 = &lStack_210;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1f0,&lStack_210,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x17];
    lVar11 = param_1[0x16];
    uVar5 = param_1[0x18];
    uVar14 = param_2[0x17];
    lVar12 = param_2[0x16];
    uVar8 = param_2[0x18];
    lStack_230 = lVar12;
    uStack_228 = uVar14;
    uStack_220 = uVar8;
    lStack_210 = lVar11;
    uStack_208 = uVar13;
    uStack_200 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103649444;
      if (lVar11 != lVar12) {
        uVar9 = 0x112db6f48;
        puVar10 = &UNK_10d969b40;
        FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
        plVar3 = &lStack_230;
        plVar4 = &lStack_250;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
      FUN_103648928(&lStack_230,&lStack_250,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar11,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103649444:
        uVar9 = 0x112db6f48;
        puVar10 = &UNK_10d969b40;
        FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
        plVar3 = &lStack_230;
        plVar4 = &lStack_250;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
      FUN_103648928(&lStack_230,&lStack_250,0x112db6f48,&UNK_10d969b40);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x1a];
    lVar11 = param_1[0x19];
    uVar5 = param_1[0x1b];
    uVar14 = param_2[0x1a];
    lVar12 = param_2[0x19];
    uVar8 = param_2[0x1b];
    lStack_270 = lVar12;
    uStack_268 = uVar14;
    uStack_260 = uVar8;
    lStack_250 = lVar11;
    uStack_248 = uVar13;
    uStack_240 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103649520;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_270;
        plVar4 = &lStack_290;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_270,&lStack_290,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103649520:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_270;
        plVar4 = &lStack_290;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_270,&lStack_290,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x1d];
    lVar11 = param_1[0x1c];
    uVar5 = param_1[0x1e];
    uVar14 = param_2[0x1d];
    lVar12 = param_2[0x1c];
    uVar8 = param_2[0x1e];
    lStack_2b0 = lVar12;
    uStack_2a8 = uVar14;
    uStack_2a0 = uVar8;
    lStack_290 = lVar11;
    uStack_288 = uVar13;
    uStack_280 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_10364968c;
      uVar9 = 0x112db6358;
      puVar10 = &UNK_10d961e20;
      if ((float)lVar11 != (float)lVar12) {
        FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_2b0;
        plVar4 = &lStack_2d0;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_2b0,&lStack_2d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_10364968c:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_2b0;
        plVar4 = &lStack_2d0;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_2b0,&lStack_2d0,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    if (((*(byte *)((long)param_1 + 9) ^ *(byte *)((long)param_2 + 9)) & 1) == 0) {
      uVar13 = param_1[0x20];
      lVar11 = param_1[0x1f];
      uVar5 = param_1[0x21];
      uVar14 = param_2[0x20];
      lVar12 = param_2[0x1f];
      uVar8 = param_2[0x21];
      lStack_2f0 = lVar12;
      uStack_2e8 = uVar14;
      uStack_2e0 = uVar8;
      lStack_2d0 = lVar11;
      uStack_2c8 = uVar13;
      uStack_2c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036498f4;
        uVar9 = 0x112f75e88;
        puVar10 = &UNK_10dbe41c0;
        if ((int)lVar11 != (int)lVar12) {
          FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_2f0;
          plVar4 = &lStack_310;
          goto LAB_103648e50;
        }
        FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
        FUN_103648928(&lStack_2f0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
        func_0x000100d57178(lVar12,uVar14,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036496e0;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036498f4:
          uVar9 = 0x112f75e88;
          puVar10 = &UNK_10dbe41c0;
          FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_2f0;
          plVar4 = &lStack_310;
          uVar2 = uVar5;
          uVar6 = uVar13;
          lVar7 = lVar11;
          uVar5 = uVar8;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1036496b8;
        }
        FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
        FUN_103648928(&lStack_2f0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d57178(lVar11,uVar13,uVar5);
      uVar13 = param_1[0x23];
      lVar11 = param_1[0x22];
      uVar5 = param_1[0x24];
      uVar14 = param_2[0x23];
      lVar12 = param_2[0x22];
      uVar8 = param_2[0x24];
      lStack_330 = lVar12;
      uStack_328 = uVar14;
      uStack_320 = uVar8;
      lStack_310 = lVar11;
      uStack_308 = uVar13;
      uStack_300 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036499a0;
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        if ((float)lVar11 != (float)lVar12) {
          FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_330;
          plVar4 = &lStack_350;
          goto LAB_103648e50;
        }
        FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_330,&lStack_350,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
        func_0x000100d57178(lVar12,uVar14,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036496e0;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036499a0:
          uVar9 = 0x112db6358;
          puVar10 = &UNK_10d961e20;
          FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_330;
          plVar4 = &lStack_350;
          uVar2 = uVar5;
          uVar6 = uVar13;
          lVar7 = lVar11;
          uVar5 = uVar8;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1036496b8;
        }
        FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_330,&lStack_350,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d57178(lVar11,uVar13,uVar5);
      uVar13 = param_1[0x26];
      lVar11 = param_1[0x25];
      uVar5 = param_1[0x27];
      uVar14 = param_2[0x26];
      lVar12 = param_2[0x25];
      uVar8 = param_2[0x27];
      lStack_370 = lVar12;
      uStack_368 = uVar14;
      uStack_360 = uVar8;
      lStack_350 = lVar11;
      uStack_348 = uVar13;
      uStack_340 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103649af8;
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        if ((float)lVar11 != (float)lVar12) {
          FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_370;
          plVar4 = alStack_388;
          goto LAB_103648e50;
        }
        FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_370,alStack_388,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
        func_0x000100d57178(lVar12,uVar14,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036496e0;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103649af8:
          uVar9 = 0x112db6358;
          puVar10 = &UNK_10d961e20;
          FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_370;
          plVar4 = alStack_388;
          uVar2 = uVar5;
          uVar6 = uVar13;
          lVar7 = lVar11;
          uVar5 = uVar8;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1036496b8;
        }
        FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_370,alStack_388,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d57178(lVar11,uVar13,uVar5);
      lVar11 = param_1[2];
      func_0x000100e25fcc(lVar11,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar11;
      goto LAB_1036496e8;
    }
  }
  uVar1 = 0;
LAB_1036496e8:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 103648484; end: 1036484b3;  */

undefined1  [16] FUN_103648484(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1036484b4; end: 1036484e7;  */

void FUN_1036484b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1036484e8; end: 1036484fb;  */

undefined1  [16] FUN_1036484e8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1036484f8;
  return auVar1;
}



/* Entry: 1036484fc; end: 10364850f;  */

void FUN_1036484fc(void)

{
  FUN_103647984();
  return;
}



/* Entry: 103648510; end: 103648577;  */

void FUN_103648510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_180);
  FUN_103647bac(param_1,param_2,param_3);
  return;
}



/* Entry: 103648578; end: 10364857b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103648578(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10364857c; end: 1036485b3;  */

uint FUN_10364857c(long param_1,long param_2)

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
  FUN_10364b0a0();
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



/* Entry: 1036485b4; end: 103648603;  */

uint FUN_1036485b4(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_160,param_1,0x140);
  func_0x000107c610b4(auStack_2a0);
  FUN_1036489bc(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 103648604; end: 1036486a3;  */

/* WARNING: Possible PIC construction at 0x000103648650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103648660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103648654) */
/* WARNING: Removing unreachable block (ram,0x000103648664) */

void FUN_103648604(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f817d0 != -1) {
    func_0x000107c61568(0x112f817d0,FUN_10364793c);
  }
  uVar5 = uRam000000011380afa8;
  uVar4 = uRam000000011380afa0;
  uVar3 = uRam000000011380af98;
  uVar2 = uRam000000011380af90;
  uVar1 = uRam000000011380af88;
  *param_1 = uRam000000011380af80;
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



/* Entry: 1036486a4; end: 1036486df;  */

void FUN_1036486a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81828;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81828,&UNK_10dbf1db0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036486e0; end: 1036487eb;  */

void FUN_1036486e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [320];
  
  func_0x000107c610b4(auStack_170);
  func_0x000107c6068c(auStack_1b8,0);
  func_0x000107c5fa50(auStack_1b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1036487ec; end: 10364883f;  */

uint FUN_1036487ec(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2a0,param_1,0x140);
  func_0x000107c610b4(auStack_160,param_2,0x140);
  FUN_1036489bc(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 103648840; end: 103648887;  */

void FUN_103648840(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf1dc0,0xa2,2);
  uRam000000011380afb8 = uStack_38;
  uRam000000011380afb0 = uStack_40;
  uRam000000011380afc8 = uStack_28;
  uRam000000011380afc0 = uStack_30;
  uRam000000011380afd8 = uStack_18;
  uRam000000011380afd0 = uStack_20;
  return;
}



/* Entry: 103648888; end: 103648927;  */

/* WARNING: Possible PIC construction at 0x0001036488d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036488e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036488d8) */
/* WARNING: Removing unreachable block (ram,0x0001036488e8) */

void FUN_103648888(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f817e8 != -1) {
    func_0x000107c61568(0x112f817e8,FUN_103648840);
  }
  uVar5 = uRam000000011380afd8;
  uVar4 = uRam000000011380afd0;
  uVar3 = uRam000000011380afc8;
  uVar2 = uRam000000011380afc0;
  uVar1 = uRam000000011380afb8;
  *param_1 = uRam000000011380afb0;
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



/* Entry: 103648928; end: 10364896f;  */

undefined8 FUN_103648928(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103648970; end: 10364897b;  */

void FUN_103648970(void)

{
  return;
}



/* Entry: 10364897c; end: 1036489bb;  */

void FUN_10364897c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f817d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf1b30;
  func_0x000107c61520(&DAT_10dbf1b30,&UNK_110674e10);
  puRam0000000112f817d8 = puVar1;
  return;
}



/* Entry: 1036489bc; end: 103649bdf;  */

long * FUN_1036489bc(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_388 [3];
  long lStack_370;
  ulong uStack_368;
  ulong uStack_360;
  long lStack_350;
  ulong uStack_348;
  ulong uStack_340;
  long lStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_310;
  ulong uStack_308;
  ulong uStack_300;
  long lStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  long lStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
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
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001036489e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dbf1b0e)[*param_2] * 4 + 0x1036489e8))();
    return param_1;
  }
  if (*param_1 != *param_2) {
    return (long *)0x0;
  }
  uVar13 = param_1[5];
  lVar11 = param_1[4];
  uVar5 = param_1[6];
  uVar14 = param_2[5];
  lVar12 = param_2[4];
  uVar8 = param_2[6];
  lStack_b0 = lVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar8;
  lStack_90 = lVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103648bd0;
    if (lVar11 == lVar12) {
      FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      FUN_103648928(&lStack_b0,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar11,uVar14,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103648aa0;
    }
    else {
      uVar9 = 0x112db6f48;
      puVar10 = &UNK_10d969b40;
      FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
LAB_103648e50:
      FUN_103648928(plVar3,plVar4,uVar9,puVar10);
      func_0x000100d57178(lVar12,uVar14,uVar8);
    }
LAB_1036496e0:
    func_0x000100d57178(lVar11,uVar13,uVar5);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_103648bd0:
      uVar9 = 0x112db6f48;
      puVar10 = &UNK_10d969b40;
      FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
      uVar2 = uVar5;
      uVar6 = uVar13;
      lVar7 = lVar11;
      uVar5 = uVar8;
      uVar13 = uVar14;
      lVar11 = lVar12;
LAB_1036496b8:
      FUN_103648928(plVar3,plVar4,uVar9,puVar10);
      func_0x000100d57178(lVar7,uVar6,uVar2);
      goto LAB_1036496e0;
    }
    FUN_103648928(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
    FUN_103648928(&lStack_b0,&lStack_d0,0x112db6f48,&UNK_10d969b40);
LAB_103648aa0:
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[8];
    lVar11 = param_1[7];
    uVar5 = param_1[9];
    uVar14 = param_2[8];
    lVar12 = param_2[7];
    uVar8 = param_2[9];
    lStack_f0 = lVar12;
    uStack_e8 = uVar14;
    uStack_e0 = uVar8;
    lStack_d0 = lVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103648c84;
      if ((int)lVar11 != (int)lVar12) {
        uVar9 = 0x112f75e88;
        puVar10 = &UNK_10dbe41c0;
        FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
        plVar3 = &lStack_f0;
        plVar4 = &lStack_110;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
      FUN_103648928(&lStack_f0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103648c84:
        uVar9 = 0x112f75e88;
        puVar10 = &UNK_10dbe41c0;
        FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
        plVar3 = &lStack_f0;
        plVar4 = &lStack_110;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
      FUN_103648928(&lStack_f0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0xb];
    lVar11 = param_1[10];
    uVar5 = param_1[0xc];
    uVar14 = param_2[0xb];
    lVar12 = param_2[10];
    uVar8 = param_2[0xc];
    lStack_130 = lVar12;
    uStack_128 = uVar14;
    uStack_120 = uVar8;
    lStack_110 = lVar11;
    uStack_108 = uVar13;
    uStack_100 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103648df4;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_130;
        plVar4 = &lStack_150;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_130,&lStack_150,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103648df4:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_130;
        plVar4 = &lStack_150;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_130,&lStack_150,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0xe];
    lVar11 = param_1[0xd];
    uVar5 = param_1[0xf];
    uVar14 = param_2[0xe];
    lVar12 = param_2[0xd];
    uVar8 = param_2[0xf];
    lStack_170 = lVar12;
    uStack_168 = uVar14;
    uStack_160 = uVar8;
    lStack_150 = lVar11;
    uStack_148 = uVar13;
    uStack_140 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103648f8c;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_170;
        plVar4 = &lStack_190;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_170,&lStack_190,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103648f8c:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_170;
        plVar4 = &lStack_190;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_170,&lStack_190,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x11];
    lVar11 = param_1[0x10];
    uVar5 = param_1[0x12];
    uVar14 = param_2[0x11];
    lVar12 = param_2[0x10];
    uVar8 = param_2[0x12];
    lStack_1b0 = lVar12;
    uStack_1a8 = uVar14;
    uStack_1a0 = uVar8;
    lStack_190 = lVar11;
    uStack_188 = uVar13;
    uStack_180 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_1036490f0;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1b0;
        plVar4 = &lStack_1d0;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1b0,&lStack_1d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_1036490f0:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1b0;
        plVar4 = &lStack_1d0;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1b0,&lStack_1d0,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x14];
    lVar11 = param_1[0x13];
    uVar5 = param_1[0x15];
    uVar14 = param_2[0x14];
    lVar12 = param_2[0x13];
    uVar8 = param_2[0x15];
    lStack_1f0 = lVar12;
    uStack_1e8 = uVar14;
    uStack_1e0 = uVar8;
    lStack_1d0 = lVar11;
    uStack_1c8 = uVar13;
    uStack_1c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103649250;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1f0;
        plVar4 = &lStack_210;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1f0,&lStack_210,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103649250:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_1f0;
        plVar4 = &lStack_210;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_1f0,&lStack_210,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x17];
    lVar11 = param_1[0x16];
    uVar5 = param_1[0x18];
    uVar14 = param_2[0x17];
    lVar12 = param_2[0x16];
    uVar8 = param_2[0x18];
    lStack_230 = lVar12;
    uStack_228 = uVar14;
    uStack_220 = uVar8;
    lStack_210 = lVar11;
    uStack_208 = uVar13;
    uStack_200 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103649444;
      if (lVar11 != lVar12) {
        uVar9 = 0x112db6f48;
        puVar10 = &UNK_10d969b40;
        FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
        plVar3 = &lStack_230;
        plVar4 = &lStack_250;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
      FUN_103648928(&lStack_230,&lStack_250,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar11,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103649444:
        uVar9 = 0x112db6f48;
        puVar10 = &UNK_10d969b40;
        FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
        plVar3 = &lStack_230;
        plVar4 = &lStack_250;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_210,&lStack_250,0x112db6f48,&UNK_10d969b40);
      FUN_103648928(&lStack_230,&lStack_250,0x112db6f48,&UNK_10d969b40);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x1a];
    lVar11 = param_1[0x19];
    uVar5 = param_1[0x1b];
    uVar14 = param_2[0x1a];
    lVar12 = param_2[0x19];
    uVar8 = param_2[0x1b];
    lStack_270 = lVar12;
    uStack_268 = uVar14;
    uStack_260 = uVar8;
    lStack_250 = lVar11;
    uStack_248 = uVar13;
    uStack_240 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103649520;
      uVar9 = 0x112db6358;
      if ((float)lVar11 != (float)lVar12) {
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_270;
        plVar4 = &lStack_290;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_270,&lStack_290,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103649520:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_270;
        plVar4 = &lStack_290;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_250,&lStack_290,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_270,&lStack_290,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    uVar13 = param_1[0x1d];
    lVar11 = param_1[0x1c];
    uVar5 = param_1[0x1e];
    uVar14 = param_2[0x1d];
    lVar12 = param_2[0x1c];
    uVar8 = param_2[0x1e];
    lStack_2b0 = lVar12;
    uStack_2a8 = uVar14;
    uStack_2a0 = uVar8;
    lStack_290 = lVar11;
    uStack_288 = uVar13;
    uStack_280 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_10364968c;
      uVar9 = 0x112db6358;
      puVar10 = &UNK_10d961e20;
      if ((float)lVar11 != (float)lVar12) {
        FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_2b0;
        plVar4 = &lStack_2d0;
        goto LAB_103648e50;
      }
      FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_2b0,&lStack_2d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
      func_0x000100d57178(lVar12,uVar14,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_1036496e0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_10364968c:
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
        plVar3 = &lStack_2b0;
        plVar4 = &lStack_2d0;
        uVar2 = uVar5;
        uVar6 = uVar13;
        lVar7 = lVar11;
        uVar5 = uVar8;
        uVar13 = uVar14;
        lVar11 = lVar12;
        goto LAB_1036496b8;
      }
      FUN_103648928(&lStack_290,&lStack_2d0,0x112db6358,&UNK_10d961e20);
      FUN_103648928(&lStack_2b0,&lStack_2d0,0x112db6358,&UNK_10d961e20);
    }
    func_0x000100d57178(lVar11,uVar13,uVar5);
    if (((*(byte *)((long)param_1 + 9) ^ *(byte *)((long)param_2 + 9)) & 1) == 0) {
      uVar13 = param_1[0x20];
      lVar11 = param_1[0x1f];
      uVar5 = param_1[0x21];
      uVar14 = param_2[0x20];
      lVar12 = param_2[0x1f];
      uVar8 = param_2[0x21];
      lStack_2f0 = lVar12;
      uStack_2e8 = uVar14;
      uStack_2e0 = uVar8;
      lStack_2d0 = lVar11;
      uStack_2c8 = uVar13;
      uStack_2c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036498f4;
        uVar9 = 0x112f75e88;
        puVar10 = &UNK_10dbe41c0;
        if ((int)lVar11 != (int)lVar12) {
          FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_2f0;
          plVar4 = &lStack_310;
          goto LAB_103648e50;
        }
        FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
        FUN_103648928(&lStack_2f0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
        func_0x000100d57178(lVar12,uVar14,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036496e0;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036498f4:
          uVar9 = 0x112f75e88;
          puVar10 = &UNK_10dbe41c0;
          FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_2f0;
          plVar4 = &lStack_310;
          uVar2 = uVar5;
          uVar6 = uVar13;
          lVar7 = lVar11;
          uVar5 = uVar8;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1036496b8;
        }
        FUN_103648928(&lStack_2d0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
        FUN_103648928(&lStack_2f0,&lStack_310,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d57178(lVar11,uVar13,uVar5);
      uVar13 = param_1[0x23];
      lVar11 = param_1[0x22];
      uVar5 = param_1[0x24];
      uVar14 = param_2[0x23];
      lVar12 = param_2[0x22];
      uVar8 = param_2[0x24];
      lStack_330 = lVar12;
      uStack_328 = uVar14;
      uStack_320 = uVar8;
      lStack_310 = lVar11;
      uStack_308 = uVar13;
      uStack_300 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036499a0;
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        if ((float)lVar11 != (float)lVar12) {
          FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_330;
          plVar4 = &lStack_350;
          goto LAB_103648e50;
        }
        FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_330,&lStack_350,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
        func_0x000100d57178(lVar12,uVar14,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036496e0;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036499a0:
          uVar9 = 0x112db6358;
          puVar10 = &UNK_10d961e20;
          FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_330;
          plVar4 = &lStack_350;
          uVar2 = uVar5;
          uVar6 = uVar13;
          lVar7 = lVar11;
          uVar5 = uVar8;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1036496b8;
        }
        FUN_103648928(&lStack_310,&lStack_350,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_330,&lStack_350,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d57178(lVar11,uVar13,uVar5);
      uVar13 = param_1[0x26];
      lVar11 = param_1[0x25];
      uVar5 = param_1[0x27];
      uVar14 = param_2[0x26];
      lVar12 = param_2[0x25];
      uVar8 = param_2[0x27];
      lStack_370 = lVar12;
      uStack_368 = uVar14;
      uStack_360 = uVar8;
      lStack_350 = lVar11;
      uStack_348 = uVar13;
      uStack_340 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103649af8;
        uVar9 = 0x112db6358;
        puVar10 = &UNK_10d961e20;
        if ((float)lVar11 != (float)lVar12) {
          FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_370;
          plVar4 = alStack_388;
          goto LAB_103648e50;
        }
        FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_370,alStack_388,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar8);
        func_0x000100d57178(lVar12,uVar14,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036496e0;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103649af8:
          uVar9 = 0x112db6358;
          puVar10 = &UNK_10d961e20;
          FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_370;
          plVar4 = alStack_388;
          uVar2 = uVar5;
          uVar6 = uVar13;
          lVar7 = lVar11;
          uVar5 = uVar8;
          uVar13 = uVar14;
          lVar11 = lVar12;
          goto LAB_1036496b8;
        }
        FUN_103648928(&lStack_350,alStack_388,0x112db6358,&UNK_10d961e20);
        FUN_103648928(&lStack_370,alStack_388,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d57178(lVar11,uVar13,uVar5);
      lVar11 = param_1[2];
      func_0x000100e25fcc(lVar11,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar11;
      goto LAB_1036496e8;
    }
  }
  uVar1 = 0;
LAB_1036496e8:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 103649be0; end: 103649c1f;  */

void FUN_103649be0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f817e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1ca0;
  func_0x000107c61520(&UNK_10dbf1ca0,&UNK_110674d40);
  puRam0000000112f817e0 = puVar1;
  return;
}



/* Entry: 103649c20; end: 103649c33;  */

void FUN_103649c20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103649c34();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103649c74)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103649c34; end: 103649cb3;  */

void FUN_103649c34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f817f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1bc8;
  func_0x000107c61520(&UNK_10dbf1bc8,&UNK_110674e10);
  puRam0000000112f817f0 = puVar1;
  return;
}



/* Entry: 103649cb4; end: 103649cb7;  */

void FUN_103649cb4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f81800 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f81808;
  func_0x00010002969c(0x112f81808,&UNK_10dbf1b50);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f81800 = puVar2;
  return;
}



/* Entry: 103649cb8; end: 103649d07;  */

void FUN_103649cb8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f81800 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f81808;
  func_0x00010002969c(0x112f81808,&UNK_10dbf1b50);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f81800 = puVar2;
  return;
}



/* Entry: 103649d08; end: 103649d0b;  */

void FUN_103649d08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1c08;
  func_0x000107c61520(&UNK_10dbf1c08,&UNK_110674e10);
  puRam0000000112f81810 = puVar1;
  return;
}



/* Entry: 103649d0c; end: 103649d4b;  */

void FUN_103649d0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1c08;
  func_0x000107c61520(&UNK_10dbf1c08,&UNK_110674e10);
  puRam0000000112f81810 = puVar1;
  return;
}



/* Entry: 103649d4c; end: 103649d6f;  */

void FUN_103649d4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103649d70();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103649d70; end: 103649daf;  */

void FUN_103649d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1c78;
  func_0x000107c61520(&UNK_10dbf1c78,&UNK_110674d40);
  puRam0000000112f81818 = puVar1;
  return;
}



/* Entry: 103649db0; end: 103649dc3;  */

void FUN_103649db0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103649be0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e0bb8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103649dc4; end: 103649df3;  */

void FUN_103649dc4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103649df4; end: 103649df7;  */

void FUN_103649df4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1ce0;
  func_0x000107c61520(&UNK_10dbf1ce0,&UNK_110674d40);
  puRam0000000112f81820 = puVar1;
  return;
}



/* Entry: 103649df8; end: 103649e37;  */

void FUN_103649df8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1ce0;
  func_0x000107c61520(&UNK_10dbf1ce0,&UNK_110674d40);
  puRam0000000112f81820 = puVar1;
  return;
}



/* Entry: 103649e38; end: 103649fb3;  */

long FUN_103649e38(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103649fb4; end: 10364af03;  */

undefined8 * FUN_103649fb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  else {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[6] = param_2[6];
  }
  uVar3 = param_2[9];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[9] = param_2[9];
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
  }
  else {
    uVar2 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  uVar3 = param_2[0xf];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar2 = param_2[0xe];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
  }
  else {
    uVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    param_1[0xf] = param_2[0xf];
  }
  uVar3 = param_2[0x12];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar2 = param_2[0x11];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
  }
  else {
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x12] = param_2[0x12];
  }
  uVar3 = param_2[0x15];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar2 = param_2[0x14];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar3;
  }
  else {
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    param_1[0x15] = param_2[0x15];
  }
  uVar3 = param_2[0x18];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x17] = uVar2;
    param_1[0x18] = uVar3;
  }
  else {
    uVar2 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x18] = param_2[0x18];
  }
  uVar3 = param_2[0x1b];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar2 = param_2[0x1a];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
  }
  else {
    uVar2 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar2;
    param_1[0x1b] = param_2[0x1b];
  }
  uVar3 = param_2[0x1e];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = param_2[0x1d];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1d] = uVar2;
    param_1[0x1e] = uVar3;
  }
  else {
    uVar2 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1e] = param_2[0x1e];
  }
  uVar3 = param_2[0x21];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    uVar2 = param_2[0x20];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x20] = uVar2;
    param_1[0x21] = uVar3;
  }
  else {
    uVar2 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar2;
    param_1[0x21] = param_2[0x21];
  }
  uVar3 = param_2[0x24];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
    uVar2 = param_2[0x23];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x23] = uVar2;
    param_1[0x24] = uVar3;
  }
  else {
    uVar2 = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar2;
    param_1[0x24] = param_2[0x24];
  }
  uVar3 = param_2[0x27];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
    uVar2 = param_2[0x26];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x26] = uVar2;
    param_1[0x27] = uVar3;
  }
  else {
    uVar2 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar2;
    param_1[0x27] = param_2[0x27];
  }
  return param_1;
}



/* Entry: 10364af04; end: 10364b09f;  */

int FUN_10364af04(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0x50] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 9)) {
    uVar1 = *(byte *)((long)param_1 + 9) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10364b0a0; end: 10364b0df;  */

void FUN_10364b0a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf1c4c;
  func_0x000107c61520(&DAT_10dbf1c4c,&UNK_110674d40);
  puRam0000000112f81830 = puVar1;
  return;
}



/* Entry: 10364b0e0; end: 10364b0f3;  */

void FUN_10364b0e0(void)

{
  return;
}



/* Entry: 10364b0f4; end: 10364b123;  */

void FUN_10364b0f4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10364b354();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10364b124; end: 10364b12b;  */

undefined8 FUN_10364b124(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10364b12c; end: 10364b19f;  */

void FUN_10364b12c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f818b0;
  func_0x0001000285a8(0x112f818b0,&UNK_10dbf1f90);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10364b1a0; end: 10364b1ab;  */

void FUN_10364b1a0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10364b1ac; end: 10364b257;  */

void FUN_10364b1ac(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10364b258; end: 10364b26b;  */

bool FUN_10364b258(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10364b26c; end: 10364b2b3;  */

void FUN_10364b26c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf2100,0x3f,2);
  uRam000000011380afe8 = uStack_38;
  uRam000000011380afe0 = uStack_40;
  uRam000000011380aff8 = uStack_28;
  uRam000000011380aff0 = uStack_30;
  uRam000000011380b008 = uStack_18;
  uRam000000011380b000 = uStack_20;
  return;
}



/* Entry: 10364b2b4; end: 10364b353;  */

/* WARNING: Possible PIC construction at 0x00010364b300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010364b310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364b304) */
/* WARNING: Removing unreachable block (ram,0x00010364b314) */

void FUN_10364b2b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f818b8 != -1) {
    func_0x000107c61568(0x112f818b8,FUN_10364b26c);
  }
  uVar5 = uRam000000011380b008;
  uVar4 = uRam000000011380b000;
  uVar3 = uRam000000011380aff8;
  uVar2 = uRam000000011380aff0;
  uVar1 = uRam000000011380afe8;
  *param_1 = uRam000000011380afe0;
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



/* Entry: 10364b354; end: 10364b35f;  */

void FUN_10364b354(void)

{
  return;
}



/* Entry: 10364b360; end: 10364b38b;  */

void FUN_10364b360(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10364b38c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010364b3cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10364b38c; end: 10364b40b;  */

void FUN_10364b38c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f818c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2030;
  func_0x000107c61520(&UNK_10dbf2030,&UNK_110674fc0);
  puRam0000000112f818c0 = puVar1;
  return;
}



/* Entry: 10364b40c; end: 10364b40f;  */

void FUN_10364b40c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f818d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f818d8;
  func_0x00010002969c(0x112f818d8,&UNK_10dbf1fb8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f818d0 = puVar2;
  return;
}



/* Entry: 10364b410; end: 10364b45f;  */

void FUN_10364b410(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f818d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f818d8;
  func_0x00010002969c(0x112f818d8,&UNK_10dbf1fb8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f818d0 = puVar2;
  return;
}



/* Entry: 10364b460; end: 10364b463;  */

void FUN_10364b460(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f818e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2070;
  func_0x000107c61520(&UNK_10dbf2070,&UNK_110674fc0);
  puRam0000000112f818e0 = puVar1;
  return;
}



/* Entry: 10364b464; end: 10364b4a3;  */

void FUN_10364b464(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f818e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2070;
  func_0x000107c61520(&UNK_10dbf2070,&UNK_110674fc0);
  puRam0000000112f818e0 = puVar1;
  return;
}



/* Entry: 10364b4a4; end: 10364b543;  */

int FUN_10364b4a4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10364b544; end: 10364b58b;  */

void FUN_10364b544(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf2280,0xe4,2);
  uRam000000011380b018 = uStack_38;
  uRam000000011380b010 = uStack_40;
  uRam000000011380b028 = uStack_28;
  uRam000000011380b020 = uStack_30;
  uRam000000011380b038 = uStack_18;
  uRam000000011380b030 = uStack_20;
  return;
}



/* Entry: 10364b58c; end: 10364b6e3;  */

/* WARNING: Removing unreachable block (ram,0x00010364b6e0) */

void FUN_10364b58c(undefined8 param_1,long param_2,long param_3)

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
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10364b6b8;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_10364b6b8;
        }
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x40;
          goto LAB_10364b6b8;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x58;
        }
        else if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x70;
        }
        else {
          if (lVar1 != 6) goto LAB_10364b6d0;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x88;
        }
LAB_10364b6b8:
        (*pcVar4)(lVar2,&UNK_110790980,lVar1,param_2,param_3);
      }
LAB_10364b6d0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10364b6e4; end: 10364b7b7;  */

void FUN_10364b6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10364b7b8();
  if (unaff_x21 == 0) {
    FUN_10364b840();
    FUN_10364b8c8();
    FUN_10364b950();
    FUN_10364b9d8();
    FUN_10364ba60();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10364b7b8; end: 10364b83f;  */

void FUN_10364b7b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364b840; end: 10364b8c7;  */

void FUN_10364b840(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364b8c8; end: 10364b94f;  */

void FUN_10364b8c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364b950; end: 10364b9d7;  */

void FUN_10364b950(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364b9d8; end: 10364ba5f;  */

void FUN_10364b9d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364ba60; end: 10364bae7;  */

void FUN_10364ba60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,6,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364bae8; end: 10364bb47;  */

uint FUN_10364bae8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_208 [3];
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_10364c008;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10364c074;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10364c57c:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_10364c074:
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_f0 = uVar10;
      uStack_e8 = uVar12;
      uStack_e0 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c0e8;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c0e8:
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[9];
      uVar9 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[9];
      uVar10 = param_2[8];
      uVar8 = param_2[10];
      uStack_130 = uVar10;
      uStack_128 = uVar12;
      uStack_120 = uVar8;
      uStack_110 = uVar9;
      uStack_108 = uVar11;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c1d8;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c1d8:
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar8 = param_2[0xd];
      uStack_170 = uVar10;
      uStack_168 = uVar12;
      uStack_160 = uVar8;
      uStack_150 = uVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c2cc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_150,&uStack_190);
        func_0x00010161ef18(&uStack_170,&uStack_190);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c2cc:
          func_0x00010161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_150,&uStack_190);
        func_0x00010161ef18(&uStack_170,&uStack_190);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xf];
      uVar9 = param_1[0xe];
      uVar5 = param_1[0x10];
      uVar12 = param_2[0xf];
      uVar10 = param_2[0xe];
      uVar8 = param_2[0x10];
      uStack_1b0 = uVar10;
      uStack_1a8 = uVar12;
      uStack_1a0 = uVar8;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      uStack_180 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c3c0;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c3c0:
          func_0x00010161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x12];
      uVar9 = param_1[0x11];
      uVar5 = param_1[0x13];
      uVar12 = param_2[0x12];
      uVar10 = param_2[0x11];
      uVar8 = param_2[0x13];
      uStack_1f0 = uVar10;
      uStack_1e8 = uVar12;
      uStack_1e0 = uVar8;
      uStack_1d0 = uVar9;
      uStack_1c8 = uVar11;
      uStack_1c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c4b4;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_1d0,auStack_208);
          puVar3 = &uStack_1f0;
          puVar4 = auStack_208;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_1d0,auStack_208);
        func_0x00010161ef18(&uStack_1f0,auStack_208);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c4b4:
          func_0x00010161ef18(&uStack_1d0,auStack_208);
          puVar3 = &uStack_1f0;
          puVar4 = auStack_208;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_1d0,auStack_208);
        func_0x00010161ef18(&uStack_1f0,auStack_208);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10364c5a4;
    }
LAB_10364c008:
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_10364c4c8:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_10364c59c:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_10364c5a4:
  return uVar1 & 1;
}



/* Entry: 10364bb48; end: 10364bb77;  */

undefined1  [16] FUN_10364bb48(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10364bb78; end: 10364bbab;  */

void FUN_10364bb78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10364bbac; end: 10364bbbf;  */

undefined8 FUN_10364bbac(void)

{
  return 0x10364bbbc;
}



/* Entry: 10364bbc0; end: 10364bbd3;  */

void FUN_10364bbc0(void)

{
  FUN_10364b58c();
  return;
}



/* Entry: 10364bbd4; end: 10364bc23;  */

void FUN_10364bbd4(void)

{
  FUN_10364b6e4();
  return;
}


