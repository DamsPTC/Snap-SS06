/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10357dda8; end: 10357ddef;  */

uint FUN_10357dda8(undefined8 *param_1)

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
  FUN_10357e018(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10357ddf0; end: 10357de8f;  */

/* WARNING: Possible PIC construction at 0x00010357de3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010357de4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010357de40) */
/* WARNING: Removing unreachable block (ram,0x00010357de50) */

void FUN_10357ddf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f79820 != -1) {
    func_0x000107c61568(0x112f79820,FUN_10357d9b8);
  }
  uVar5 = uRam0000000113808ae8;
  uVar4 = uRam0000000113808ae0;
  uVar3 = uRam0000000113808ad8;
  uVar2 = uRam0000000113808ad0;
  uVar1 = uRam0000000113808ac8;
  *param_1 = uRam0000000113808ac0;
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



/* Entry: 10357de90; end: 10357decb;  */

void FUN_10357de90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f79840;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f79840,&UNK_10dbddc98);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10357decc; end: 10357dfcf;  */

void FUN_10357decc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10357dfd0; end: 10357e017;  */

uint FUN_10357dfd0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10357e018(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10357e018; end: 10357e37f;  */

uint FUN_10357e018(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar3 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar3;
  uStack_98 = uVar9;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar6;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_10357e0f4;
    FUN_10357d970(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10357d970(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,0);
LAB_10357e198:
    uVar10 = param_1[6];
    uVar7 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar8 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar8;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar10;
    uStack_b0 = uVar3;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
LAB_10357e210:
        func_0x000101556278(uVar7,uVar10,uVar3);
        uVar3 = *param_1;
        func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar3;
        goto LAB_10357e35c;
      }
LAB_10357e238:
      FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar10,uVar3);
      uVar7 = uVar8;
      uVar10 = uVar11;
      uVar3 = uVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_10357e238;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar3,uVar11,uVar6);
        func_0x000101556278(uVar8,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_10357e210;
      }
      else {
        FUN_10357d970(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        FUN_10357d970(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar11,uVar6);
      }
    }
    func_0x000101556278(uVar7,uVar10,uVar3);
  }
  else if (lVar5 == 0) {
LAB_10357e0f4:
    FUN_10357d970(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10357d970(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    func_0x00010349f458(uVar3,uVar9,lVar5);
  }
  else {
    FUN_10357d970(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_10357d970(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar7;
    FUN_1035d8f6c(uVar7,uVar6,lVar4,uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    if ((uVar10 & 1) != 0) goto LAB_10357e198;
  }
  uVar1 = 0;
LAB_10357e35c:
  return uVar1 & 1;
}



/* Entry: 10357e380; end: 10357e3bf;  */

void FUN_10357e380(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddbc0;
  func_0x000107c61520(&UNK_10dbddbc0,&UNK_110666ae0);
  puRam0000000112f79828 = puVar1;
  return;
}



/* Entry: 10357e3c0; end: 10357e3e3;  */

void FUN_10357e3c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10357e3e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10357e3e4; end: 10357e423;  */

void FUN_10357e3e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddb98;
  func_0x000107c61520(&UNK_10dbddb98,&UNK_110666ae0);
  puRam0000000112f79830 = puVar1;
  return;
}



/* Entry: 10357e424; end: 10357e44f;  */

void FUN_10357e424(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10357e380();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502bd4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10357e450; end: 10357e453;  */

void FUN_10357e450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddc00;
  func_0x000107c61520(&UNK_10dbddc00,&UNK_110666ae0);
  puRam0000000112f79838 = puVar1;
  return;
}



/* Entry: 10357e454; end: 10357e493;  */

void FUN_10357e454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddc00;
  func_0x000107c61520(&UNK_10dbddc00,&UNK_110666ae0);
  puRam0000000112f79838 = puVar1;
  return;
}



/* Entry: 10357e494; end: 10357e51b;  */

long FUN_10357e494(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10357e51c; end: 10357e5db;  */

undefined8 * FUN_10357e51c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = param_2[4];
  }
  else {
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  cVar2 = *(char *)(param_2 + 5);
  if (cVar2 == '\x02') {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar2;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[6] = uVar4;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 10357e5dc; end: 10357e833;  */

undefined8 * FUN_10357e5dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  uVar7 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar1;
  func_0x00010006c090(uVar7,uVar2);
  if (param_1[4] == 0) {
    if (param_2[4] == 0) {
      uVar7 = param_2[3];
      uVar4 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar7;
      param_1[2] = uVar4;
    }
    else {
      uVar4 = param_2[2];
      uVar7 = param_2[3];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[2] = uVar4;
      param_1[3] = uVar7;
      param_1[4] = param_2[4];
      func_0x000107c6157c();
    }
  }
  else if (param_2[4] == 0) {
    FUN_103510d9c(param_1 + 2);
    uVar4 = param_2[4];
    uVar7 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar7;
    param_1[4] = uVar4;
  }
  else {
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[2];
    uVar2 = param_1[3];
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
    uVar4 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
  }
  pcVar5 = (char *)(param_1 + 5);
  pbVar6 = (byte *)(param_2 + 5);
  bVar3 = *pbVar6;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar7 = param_2[6];
      uVar4 = *(undefined8 *)pbVar6;
      param_1[7] = param_2[7];
      param_1[6] = uVar7;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 5) = bVar3;
      uVar4 = param_2[6];
      uVar7 = param_2[7];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[6] = uVar4;
      param_1[7] = uVar7;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[7];
    uVar7 = *(undefined8 *)pbVar6;
    param_1[6] = param_2[6];
    *(undefined8 *)pcVar5 = uVar7;
    param_1[7] = uVar4;
  }
  else {
    *(byte *)(param_1 + 5) = bVar3 & 1;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[6];
    uVar2 = param_1[7];
    param_1[6] = uVar4;
    param_1[7] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
  }
  return param_1;
}



/* Entry: 10357e834; end: 10357e903;  */

int FUN_10357e834(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10357e904; end: 10357e943;  */

void FUN_10357e904(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbddb6c;
  func_0x000107c61520(&DAT_10dbddb6c,&UNK_110666ae0);
  puRam0000000112f79848 = puVar1;
  return;
}



/* Entry: 10357e944; end: 10357ea77;  */

long FUN_10357e944(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = param_3 + 0x10;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar1 = *(long *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar5 = lVar1;
  if (lVar4 == 0) {
    FUN_1035ced54();
    lVar5 = lVar3;
  }
  FUN_103582d60(lVar1,uVar2,lVar4);
  return lVar5;
}



/* Entry: 10357ea78; end: 10357ea97;  */

void FUN_10357ea78(void)

{
  func_0x000107c61168(&PTR_PTR_112f798c8);
  return;
}



/* Entry: 10357ea98; end: 10357eb37;  */

bool FUN_10357ea98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  if (lVar3 == 0) {
    FUN_103582d60(uVar1,uVar2,0);
  }
  else {
    FUN_103582d60(uVar1,uVar2,lVar3);
    func_0x000103582d8c(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x000103582d8c(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 10357eb38; end: 10357ed2f;  */

void FUN_10357eb38(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x28,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  uVar1 = *(undefined8 *)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  *(ulong *)(lVar5 + 0x28) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x30) = param_2;
  *(undefined8 *)(lVar5 + 0x38) = param_3;
  func_0x000100d55fbc(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10357ed30; end: 10357edbf;  */

void FUN_10357ed30(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x70) = param_1;
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10357edc0; end: 10357efb3;  */

void FUN_10357edc0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x80,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x80);
  uVar1 = *(undefined8 *)(lVar5 + 0x88);
  uVar4 = *(undefined8 *)(lVar5 + 0x90);
  *(ulong *)(lVar5 + 0x80) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x88) = param_2;
  *(undefined8 *)(lVar5 + 0x90) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10357efb4; end: 10357f03f;  */

void FUN_10357efb4(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 200,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 200) = param_1;
  *(undefined1 *)(lVar3 + 0xd0) = param_2;
  return;
}



/* Entry: 10357f040; end: 10357f0e3;  */

void FUN_10357f040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0xd8,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0xd8);
  uVar1 = *(undefined8 *)(lVar5 + 0xe0);
  uVar4 = *(undefined8 *)(lVar5 + 0xe8);
  *(undefined8 *)(lVar5 + 0xd8) = param_1;
  *(undefined8 *)(lVar5 + 0xe0) = param_2;
  *(undefined8 *)(lVar5 + 0xe8) = param_3;
  func_0x000103582d8c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10357f0e4; end: 10357f16f;  */

void FUN_10357f0e4(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xf0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0xf0) = param_1;
  *(undefined1 *)(lVar3 + 0xf8) = param_2;
  return;
}



/* Entry: 10357f170; end: 10357f243;  */

void FUN_10357f170(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_2c0,param_1,0x140);
  func_0x000101618330(auStack_2c0);
  func_0x000107c61428(lVar2 + 0x100,auStack_2d8,1,0);
  func_0x000107c610b4(auStack_180,lVar2 + 0x100,0x140);
  func_0x000107c610b4(lVar2 + 0x100,auStack_2c0,0x140);
  func_0x000103582e08(auStack_180,0x112dba328,&UNK_10d96ce10);
  return;
}



/* Entry: 10357f244; end: 10357f2cf;  */

void FUN_10357f244(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x240,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x240) = param_1;
  *(undefined1 *)(lVar3 + 0x248) = param_2;
  return;
}



/* Entry: 10357f2d0; end: 10357f4d7;  */

void FUN_10357f2d0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x250,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x250);
  uVar3 = *(undefined8 *)(lVar5 + 600);
  uVar4 = *(undefined8 *)(lVar5 + 0x260);
  *(ulong *)(lVar5 + 0x250) = param_1 & 1;
  *(undefined8 *)(lVar5 + 600) = param_2;
  *(undefined8 *)(lVar5 + 0x260) = param_3;
  func_0x000101556278(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10357f4d8; end: 10357f587;  */

void FUN_10357f4d8(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x298,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x298);
  uVar3 = *(undefined8 *)(lVar5 + 0x2a0);
  uVar4 = *(undefined8 *)(lVar5 + 0x2a8);
  *(ulong *)(lVar5 + 0x298) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x2a0) = param_2;
  *(undefined8 *)(lVar5 + 0x2a8) = param_3;
  func_0x000100d55fbc(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 10357f588; end: 10357f5e3;  */

undefined8 FUN_10357f588(void)

{
  if (lRam0000000112f79858 != -1) {
    func_0x000107c61568(0x112f79858,FUN_10357f62c);
  }
  func_0x000107c6157c(uRam0000000112f79860);
  return 0;
}



/* Entry: 10357f5e4; end: 10357f62b;  */

void FUN_10357f5e4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbddee0,0x1b8,2);
  uRam0000000113808af8 = uStack_38;
  uRam0000000113808af0 = uStack_40;
  uRam0000000113808b08 = uStack_28;
  uRam0000000113808b00 = uStack_30;
  uRam0000000113808b18 = uStack_18;
  uRam0000000113808b10 = uStack_20;
  return;
}



/* Entry: 10357f62c; end: 10357f667;  */

void FUN_10357f62c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10357ea78();
  func_0x000107c613fc();
  FUN_10357f668();
  uRam0000000112f79860 = uVar1;
  return;
}



/* Entry: 10357f668; end: 10357f72f;  */

void FUN_10357f668(void)

{
  long unaff_x20;
  undefined1 auStack_178 [328];
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 2;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 2;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined1 *)(unaff_x20 + 0xf8) = 1;
  func_0x0001016182b8(auStack_178);
  func_0x000107c610b4(unaff_x20 + 0x100,auStack_178,0x140);
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined1 *)(unaff_x20 + 0x248) = 1;
  *(undefined8 *)(unaff_x20 + 0x250) = 2;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0xf000000000000000;
  return;
}



/* Entry: 10357f730; end: 10357fe83;  */

void FUN_10357f730(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [24];
  undefined1 auStack_820 [24];
  undefined1 auStack_808 [24];
  undefined1 auStack_7f0 [24];
  undefined1 auStack_7d8 [24];
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [320];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [320];
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar13 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xe000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x80);
  *puVar2 = 2;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + 0x98);
  *puVar3 = 2;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *puVar4 = 0;
  *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *puVar5 = 0;
  *(undefined1 *)(unaff_x20 + 0xf8) = 1;
  func_0x0001016182b8(auStack_428);
  func_0x000107c610b4(unaff_x20 + 0x100,auStack_428,0x140);
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined1 *)(unaff_x20 + 0x248) = 1;
  *(undefined8 *)(unaff_x20 + 0x250) = 2;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0xf000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_440,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar13,auStack_458,1,0);
  uVar10 = *puVar13;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar13 = uVar6;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar7;
  FUN_103582d60(uVar6,uVar8,uVar7);
  func_0x000103582d8c(uVar10,uVar9,uVar11);
  func_0x000107c61428(param_1 + 0x28,auStack_470,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_488,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
  func_0x000100d55fa0(uVar6,uVar8,uVar7);
  func_0x000100d55fbc(uVar9,uVar11,uVar10);
  func_0x000107c61428(param_1 + 0x40,auStack_4a0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar12,auStack_4b8,1,0);
  uVar10 = *puVar12;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar12 = uVar6;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
  func_0x000100d55fa0(uVar6,uVar8,uVar7);
  func_0x000100d55fbc(uVar10,uVar9,uVar11);
  func_0x000107c61428(param_1 + 0x58,auStack_4d0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(unaff_x20 + 0x58,auStack_4e8,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar7;
  func_0x000101541464(uVar6,uVar8,uVar7);
  func_0x000101556278(uVar9,uVar11,uVar10);
  func_0x000107c61428(param_1 + 0x70,auStack_500,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_518,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar8);
  func_0x000107c61428(param_1 + 0x80,auStack_530,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61428(puVar2,auStack_548,1,0);
  uVar10 = *puVar2;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x90);
  *puVar2 = uVar6;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar7;
  func_0x000101541464(uVar6,uVar8,uVar7);
  func_0x000101556278(uVar10,uVar9,uVar11);
  func_0x000107c61428(param_1 + 0x98,auStack_560,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(puVar3,auStack_578,1,0);
  uVar10 = *puVar3;
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xa8);
  *puVar3 = uVar6;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar7;
  func_0x000101541464(uVar6,uVar8,uVar7);
  func_0x000101556278(uVar10,uVar9,uVar11);
  func_0x000107c61428(param_1 + 0xb0,auStack_590,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uVar8 = *(undefined8 *)(param_1 + 0xb8);
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar4,auStack_5a8,1,0);
  uVar10 = *puVar4;
  uVar9 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar4 = uVar6;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar7;
  FUN_103582d60(uVar6,uVar8,uVar7);
  func_0x000103582d8c(uVar10,uVar9,uVar11);
  func_0x000107c61428(param_1 + 200,auStack_5c0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 200);
  uVar1 = *(undefined1 *)(param_1 + 0xd0);
  func_0x000107c61428(unaff_x20 + 200,auStack_5d8,1,0);
  *(undefined8 *)(unaff_x20 + 200) = uVar6;
  *(undefined1 *)(unaff_x20 + 0xd0) = uVar1;
  func_0x000107c61428(param_1 + 0xd8,auStack_5f0,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  uVar8 = *(undefined8 *)(param_1 + 0xe0);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  func_0x000107c61428(puVar5,auStack_608,1,0);
  uVar10 = *puVar5;
  uVar9 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xe8);
  *puVar5 = uVar6;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar7;
  FUN_103582d60(uVar6,uVar8,uVar7);
  func_0x000103582d8c(uVar10,uVar9,uVar11);
  func_0x000107c61428(param_1 + 0xf0,auStack_620,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  uVar1 = *(undefined1 *)(param_1 + 0xf8);
  func_0x000107c61428(unaff_x20 + 0xf0,auStack_638,1,0);
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar6;
  *(undefined1 *)(unaff_x20 + 0xf8) = uVar1;
  func_0x000107c61428(param_1 + 0x100,auStack_650,0,0);
  func_0x000107c610b4(auStack_2e8,param_1 + 0x100,0x140);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_668,1,0);
  func_0x000107c610b4(auStack_1a8,unaff_x20 + 0x100,0x140);
  func_0x000107c610b4(unaff_x20 + 0x100,auStack_2e8,0x140);
  func_0x000103582db8(auStack_2e8,auStack_7a8);
  func_0x000103582e08(auStack_1a8,0x112dba328,&UNK_10d96ce10);
  func_0x000107c61428(param_1 + 0x240,auStack_7a8,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x240);
  uVar1 = *(undefined1 *)(param_1 + 0x248);
  func_0x000107c61428(unaff_x20 + 0x240,auStack_7c0,1,0);
  *(undefined8 *)(unaff_x20 + 0x240) = uVar6;
  *(undefined1 *)(unaff_x20 + 0x248) = uVar1;
  func_0x000107c61428(param_1 + 0x250,auStack_7d8,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x250);
  uVar9 = *(undefined8 *)(param_1 + 600);
  uVar8 = *(undefined8 *)(param_1 + 0x260);
  func_0x000107c61428(unaff_x20 + 0x250,auStack_7f0,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x250);
  uVar7 = *(undefined8 *)(unaff_x20 + 600);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x260);
  *(undefined8 *)(unaff_x20 + 0x250) = uVar6;
  *(undefined8 *)(unaff_x20 + 600) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x260) = uVar8;
  func_0x000101541464(uVar6,uVar9,uVar8);
  func_0x000101556278(uVar11,uVar7,uVar10);
  func_0x000107c61428(param_1 + 0x268,auStack_808,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x268);
  uVar9 = *(undefined8 *)(param_1 + 0x270);
  uVar8 = *(undefined8 *)(param_1 + 0x278);
  func_0x000107c61428(unaff_x20 + 0x268,auStack_820,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x278);
  *(undefined8 *)(unaff_x20 + 0x268) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x270) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x278) = uVar8;
  func_0x000100d55fa0(uVar6,uVar9,uVar8);
  func_0x000100d55fbc(uVar11,uVar7,uVar10);
  func_0x000107c61428(param_1 + 0x280,auStack_838,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x280);
  uVar9 = *(undefined8 *)(param_1 + 0x288);
  uVar8 = *(undefined8 *)(param_1 + 0x290);
  func_0x000107c61428(unaff_x20 + 0x280,auStack_850,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x280);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x290);
  *(undefined8 *)(unaff_x20 + 0x280) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x288) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x290) = uVar8;
  func_0x000100d55fa0(uVar6,uVar9,uVar8);
  func_0x000100d55fbc(uVar11,uVar7,uVar10);
  func_0x000107c61428(param_1 + 0x298,auStack_868,0,0);
  uVar11 = *(undefined8 *)(param_1 + 0x298);
  uVar7 = *(undefined8 *)(param_1 + 0x2a0);
  uVar10 = *(undefined8 *)(param_1 + 0x2a8);
  func_0x000100d55fa0(uVar11,uVar7,uVar10);
  func_0x000107c61574(param_1);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x298),auStack_880,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined8 *)(unaff_x20 + 0x298) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar10;
  func_0x000100d55fbc(uVar6,uVar9,uVar8);
  return;
}



/* Entry: 10357fe84; end: 10357ff73;  */

void FUN_10357fe84(void)

{
  long unaff_x20;
  
  func_0x000103582d8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100d55fbc(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100d55fbc(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000103582d8c(*(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000103582d8c(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000103582e08(unaff_x20 + 0x100,0x112dba328,&UNK_10d96ce10);
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x250),*(undefined8 *)(unaff_x20 + 600),
                      *(undefined8 *)(unaff_x20 + 0x260));
  func_0x000100d55fbc(*(undefined8 *)(unaff_x20 + 0x268),*(undefined8 *)(unaff_x20 + 0x270),
                      *(undefined8 *)(unaff_x20 + 0x278));
  func_0x000100d55fbc(*(undefined8 *)(unaff_x20 + 0x280),*(undefined8 *)(unaff_x20 + 0x288),
                      *(undefined8 *)(unaff_x20 + 0x290));
  func_0x000100d55fbc(*(undefined8 *)(unaff_x20 + 0x298),*(undefined8 *)(unaff_x20 + 0x2a0),
                      *(undefined8 *)(unaff_x20 + 0x2a8));
  return;
}



/* Entry: 10357ff74; end: 103580003;  */

void FUN_10357ff74(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_10357ea78(0);
    func_0x000107c613fc();
    FUN_10357f730(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_103580004();
  return;
}



/* Entry: 103580004; end: 1035802a7;  */

/* WARNING: Removing unreachable block (ram,0x0001035800d4) */
/* WARNING: Removing unreachable block (ram,0x0001035801a8) */
/* WARNING: Removing unreachable block (ram,0x000103580154) */
/* WARNING: Removing unreachable block (ram,0x00010358026c) */
/* WARNING: Removing unreachable block (ram,0x0001035802a4) */
/* WARNING: Removing unreachable block (ram,0x000103580288) */
/* WARNING: Removing unreachable block (ram,0x000103580170) */
/* WARNING: Removing unreachable block (ram,0x0001035800f0) */
/* WARNING: Removing unreachable block (ram,0x000103580250) */
/* WARNING: Removing unreachable block (ram,0x00010358010c) */
/* WARNING: Removing unreachable block (ram,0x00010358018c) */
/* WARNING: Removing unreachable block (ram,0x0001035801fc) */
/* WARNING: Removing unreachable block (ram,0x000103580234) */
/* WARNING: Removing unreachable block (ram,0x0001035801e0) */
/* WARNING: Removing unreachable block (ram,0x000103580218) */
/* WARNING: Removing unreachable block (ram,0x0001035801c4) */

void FUN_103580004(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 auStack_68 [24];
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1035802a8(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_10358033c(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_1035803d0(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_103580464(param_2,param_1,param_3,param_4);
        break;
      case 5:
        func_0x000107c61428(param_1 + 0x70,auStack_68,0x21,0);
        (**(code **)(param_4 + 0x150))(param_1 + 0x70,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 6:
        FUN_1035804f8(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_10358058c(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_103580620(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1035806b4(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_103580748(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_1035807dc(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_103580870(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_103580904(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_103580998(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_103580a2c(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_103580ac0(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_103580b54(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035802a8; end: 10358033b;  */

void FUN_1035802a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103510fbc();
  (*pcVar2)(param_2 + 0x10,&UNK_11066abb0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358033c; end: 1035803cf;  */

void FUN_10358033c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x28,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035803d0; end: 103580463;  */

void FUN_1035803d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x40,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580464; end: 1035804f7;  */

void FUN_103580464(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x58,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035804f8; end: 10358058b;  */

void FUN_1035804f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x80,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10358058c; end: 10358061f;  */

void FUN_10358058c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x98,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580620; end: 1035806b3;  */

void FUN_103580620(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103502854();
  (*pcVar2)(param_2 + 0xb0,&UNK_11066a9c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035806b4; end: 103580747;  */

void FUN_1035806b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 200;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035831d4();
  (*pcVar2)(param_2 + 200,&UNK_110668568,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580748; end: 1035807db;  */

void FUN_103580748(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035027d4();
  (*pcVar2)(param_2 + 0xd8,&UNK_110667f00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035807dc; end: 10358086f;  */

void FUN_1035807dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103583194();
  (*pcVar2)(param_2 + 0xf0,&UNK_1106670c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580870; end: 103580903;  */

void FUN_103580870(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x100;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101618238();
  (*pcVar2)(param_2 + 0x100,&UNK_110676400,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580904; end: 103580997;  */

void FUN_103580904(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103583154();
  (*pcVar2)(param_2 + 0x240,&UNK_110666e90,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580998; end: 103580a2b;  */

void FUN_103580998(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x250;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x250,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580a2c; end: 103580abf;  */

void FUN_103580a2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x268;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x268,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580ac0; end: 103580b53;  */

void FUN_103580ac0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x280;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x280,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580b54; end: 103580be7;  */

void FUN_103580b54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x298;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x298,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103580be8; end: 103580c53;  */

void FUN_103580be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_103580c54(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 103580c54; end: 103580f6b;  */

/* WARNING: Removing unreachable block (ram,0x000103580e00) */
/* WARNING: Removing unreachable block (ram,0x000103580ea4) */

void FUN_103580c54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  code *pcVar5;
  long lStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  long lStack_98;
  undefined1 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_103580f6c();
  if (unaff_x21 == 0) {
    FUN_10358100c(param_1,param_2,param_3,param_4);
    FUN_1035810b4(param_1,param_2,param_3,param_4);
    FUN_10358115c(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x70,auStack_68,0,0);
    uVar2 = *(ulong *)(param_1 + 0x70);
    uVar3 = *(ulong *)(param_1 + 0x78);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar5 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar3);
      (*pcVar5)(uVar2,uVar3,5,param_3,param_4);
      func_0x000107c6142c(uVar3);
    }
    FUN_103581204(param_1,param_2,param_3,param_4);
    FUN_1035812ac(param_1,param_2,param_3,param_4);
    FUN_103581354(param_1,param_2,param_3,param_4);
    lVar4 = param_1 + 200;
    func_0x000107c61428(lVar4,auStack_80,0,0);
    if (*(long *)(param_1 + 200) != 0) {
      uStack_90 = *(undefined1 *)(param_1 + 0xd0);
      pcVar5 = *(code **)(param_4 + 0x80);
      lStack_98 = *(long *)(param_1 + 200);
      func_0x0001035831d4();
      (*pcVar5)(&lStack_98,9,&UNK_110668568,lVar4,param_3,param_4);
    }
    FUN_1035813f4(param_1,param_2,param_3,param_4);
    lVar4 = param_1 + 0xf0;
    func_0x000107c61428(lVar4,&lStack_98,0,0);
    if (*(long *)(param_1 + 0xf0) != 0) {
      uStack_a8 = *(undefined1 *)(param_1 + 0xf8);
      pcVar5 = *(code **)(param_4 + 0x80);
      lStack_b0 = *(long *)(param_1 + 0xf0);
      func_0x000103583194();
      (*pcVar5)(&lStack_b0,0xb,&UNK_1106670c0,lVar4,param_3,param_4);
    }
    FUN_103581494(param_1,param_2,param_3,param_4);
    lVar4 = param_1 + 0x240;
    func_0x000107c61428(lVar4,&lStack_b0,0,0);
    if (*(long *)(param_1 + 0x240) != 0) {
      uStack_b8 = *(undefined1 *)(param_1 + 0x248);
      pcVar5 = *(code **)(param_4 + 0x80);
      lStack_c0 = *(long *)(param_1 + 0x240);
      func_0x000103583154();
      (*pcVar5)(&lStack_c0,0xd,&UNK_110666e90,lVar4,param_3,param_4);
    }
    FUN_103581560(param_1,param_2,param_3,param_4);
    FUN_10358160c(param_1,param_2,param_3,param_4);
    FUN_1035816b8(param_1,param_2,param_3,param_4);
    FUN_103581760(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 103580f6c; end: 10358100b;  */

void FUN_103580f6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0x20);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar2)(&uStack_70,1,&UNK_11066abb0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358100c; end: 1035810b3;  */

void FUN_10358100c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x38);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,2,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035810b4; end: 10358115b;  */

void FUN_1035810b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x50);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x40);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,3,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358115c; end: 103581203;  */

void FUN_10358115c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x58) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x58) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,4,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103581204; end: 1035812ab;  */

void FUN_103581204(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x80) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x80) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,6,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035812ac; end: 103581353;  */

void FUN_1035812ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x98;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x98) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x98) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xa0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,7,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103581354; end: 1035813f3;  */

void FUN_103581354(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0xc0);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    uStack_70 = *(undefined8 *)(param_1 + 0xb0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103502854();
    (*pcVar2)(&uStack_70,8,&UNK_11066a9c0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035813f4; end: 103581493;  */

void FUN_1035813f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0xe8);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0xe0);
    uStack_70 = *(undefined8 *)(param_1 + 0xd8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001035027d4();
    (*pcVar2)(&uStack_70,10,&UNK_110667f00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103581494; end: 10358155f;  */

void FUN_103581494(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_418 [320];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c61428(param_1 + 0x100,auStack_2d8,0,0);
  func_0x000107c610b4(auStack_2c0,param_1 + 0x100,0x140);
  func_0x000107c610b4(auStack_180,param_1 + 0x100,0x140);
  iVar1 = (int)auStack_2c0;
  func_0x00010161830c();
  if (iVar1 != 1) {
    puVar2 = auStack_418;
    func_0x000107c610b4(puVar2,auStack_180,0x140);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000101618238();
    (*pcVar3)(auStack_418,0xc,&UNK_110676400,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103581560; end: 10358160b;  */

void FUN_103581560(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x250;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x250) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x250) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x260);
    uStack_68 = *(undefined8 *)(param_1 + 600);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0xe,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358160c; end: 1035816b7;  */

void FUN_10358160c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x268);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x278);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x270);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0xf,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035816b8; end: 10358175f;  */

void FUN_1035816b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x280;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x290);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x288);
    uStack_70 = *(undefined8 *)(param_1 + 0x280);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x10,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103581760; end: 10358180b;  */

void FUN_103581760(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x298;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x2a8);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x2a0);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x298);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,0x11,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10358180c; end: 1035818bb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10358180c(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
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
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_1035818bc(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1035818bc; end: 1035828bf;  */

undefined8 FUN_1035818bc(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_fa8 [320];
  undefined1 auStack_e68 [320];
  undefined1 auStack_d28 [320];
  undefined1 auStack_be8 [24];
  undefined1 auStack_bd0 [24];
  undefined1 auStack_bb8 [24];
  undefined1 auStack_ba0 [24];
  undefined1 auStack_b88 [24];
  undefined1 auStack_b70 [24];
  undefined1 auStack_b58 [640];
  undefined1 auStack_8d8 [320];
  undefined1 auStack_798 [320];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [320];
  undefined1 auStack_4e8 [320];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [320];
  
  func_0x000107c61428(param_1 + 0x10,auStack_1c8,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_1e0,0,0);
  uVar11 = *(ulong *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  lVar14 = *(long *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x20);
  if (lVar14 == 0) {
    if (lVar15 != 0) goto LAB_103581994;
    FUN_103582d60(uVar11,uVar7,0);
    FUN_103582d60(uVar13,uVar6,0);
    func_0x000103582d8c(uVar11,uVar7,0);
  }
  else {
    if (lVar15 == 0) goto LAB_103581994;
    FUN_103582d60(uVar11,uVar7,lVar14);
    FUN_103582d60(uVar13,uVar6,lVar15);
    uVar8 = uVar11;
    FUN_1035d8f6c(uVar11,uVar7,lVar14,uVar13,uVar6,lVar15);
    func_0x000103582d8c(uVar13,uVar6,lVar15);
    func_0x000103582d8c(uVar11,uVar7,lVar14);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x28,auStack_1f8,0,0);
  func_0x000107c61428(param_2 + 0x28,auStack_210,0,0);
  lVar14 = *(long *)(param_1 + 0x28);
  uVar11 = *(ulong *)(param_1 + 0x30);
  uVar5 = *(ulong *)(param_1 + 0x38);
  lVar15 = *(long *)(param_2 + 0x28);
  uVar8 = *(ulong *)(param_2 + 0x30);
  uVar12 = *(ulong *)(param_2 + 0x38);
  uVar3 = uVar5;
  uVar9 = uVar11;
  lVar10 = lVar14;
  if (uVar5 >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      func_0x000100d55fa0(lVar14,uVar11,uVar5);
      func_0x000100d55fa0(lVar15,uVar8,uVar12);
      if ((int)lVar14 == (int)lVar15) {
        uVar3 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar8,uVar12);
        func_0x000100d55fbc(lVar15,uVar8,uVar12);
        if ((uVar3 & 1) == 0) goto LAB_1035827b4;
        goto LAB_103581a78;
      }
LAB_103582798:
      func_0x000100d55fbc(lVar15,uVar8,uVar12);
      goto LAB_1035827b4;
    }
  }
  else if (0xe < uVar12 >> 0x3c) {
    func_0x000100d55fa0(lVar14,uVar11,uVar5);
    func_0x000100d55fa0(lVar15,uVar8,uVar12);
LAB_103581a78:
    func_0x000100d55fbc(lVar14,uVar11,uVar5);
    func_0x000107c61428(param_1 + 0x40,auStack_228,0,0);
    func_0x000107c61428(param_2 + 0x40,auStack_240,0,0);
    lVar14 = *(long *)(param_1 + 0x40);
    uVar11 = *(ulong *)(param_1 + 0x48);
    uVar5 = *(ulong *)(param_1 + 0x50);
    lVar15 = *(long *)(param_2 + 0x40);
    uVar8 = *(ulong *)(param_2 + 0x48);
    uVar12 = *(ulong *)(param_2 + 0x50);
    uVar3 = uVar5;
    uVar9 = uVar11;
    lVar10 = lVar14;
    if (uVar5 >> 0x3c < 0xf) {
      if (uVar12 >> 0x3c < 0xf) {
        func_0x000100d55fa0(lVar14,uVar11,uVar5);
        func_0x000100d55fa0(lVar15,uVar8,uVar12);
        if ((int)lVar14 != (int)lVar15) goto LAB_103582798;
        uVar3 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar8,uVar12);
        func_0x000100d55fbc(lVar15,uVar8,uVar12);
        if ((uVar3 & 1) == 0) goto LAB_1035827b4;
        goto LAB_103581af8;
      }
    }
    else if (0xe < uVar12 >> 0x3c) {
      func_0x000100d55fa0(lVar14,uVar11,uVar5);
      func_0x000100d55fa0(lVar15,uVar8,uVar12);
LAB_103581af8:
      func_0x000100d55fbc(lVar14,uVar11,uVar5);
      func_0x000107c61428(param_1 + 0x58,auStack_258,0,0);
      func_0x000107c61428(param_2 + 0x58,auStack_270,0,0);
      uVar11 = *(ulong *)(param_1 + 0x58);
      uVar5 = *(ulong *)(param_1 + 0x60);
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      uVar8 = *(ulong *)(param_2 + 0x58);
      uVar12 = *(ulong *)(param_2 + 0x60);
      uVar13 = *(undefined8 *)(param_2 + 0x68);
      uVar7 = uVar6;
      uVar3 = uVar5;
      uVar9 = uVar11;
      if ((uVar11 & 0xff) == 2) {
        if ((uVar8 & 0xff) == 2) {
          func_0x000101541464(uVar11,uVar5,uVar6);
          func_0x000101541464(uVar8,uVar12,uVar13);
LAB_103581b78:
          func_0x000101556278(uVar11,uVar5,uVar6);
          func_0x000107c61428(param_1 + 0x70,auStack_288,0,0);
          func_0x000107c61428(param_2 + 0x70,auStack_8d8,0x20,0);
          uVar11 = *(ulong *)(param_1 + 0x70);
          if ((uVar11 == *(ulong *)(param_2 + 0x70)) &&
             (*(long *)(param_1 + 0x78) == *(long *)(param_2 + 0x78))) {
            func_0x000107c614a8(auStack_8d8);
          }
          else {
            func_0x000107c605b8();
            func_0x000107c614a8(auStack_8d8);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
          }
          func_0x000107c61428(param_1 + 0x80,auStack_2a0,0,0);
          func_0x000107c61428(param_2 + 0x80,auStack_2b8,0,0);
          uVar11 = *(ulong *)(param_1 + 0x80);
          uVar5 = *(ulong *)(param_1 + 0x88);
          uVar6 = *(undefined8 *)(param_1 + 0x90);
          uVar8 = *(ulong *)(param_2 + 0x80);
          uVar12 = *(ulong *)(param_2 + 0x88);
          uVar13 = *(undefined8 *)(param_2 + 0x90);
          uVar7 = uVar6;
          uVar3 = uVar5;
          uVar9 = uVar11;
          if ((uVar11 & 0xff) == 2) {
            if ((uVar8 & 0xff) == 2) {
              func_0x000101541464(uVar11,uVar5,uVar6);
              func_0x000101541464(uVar8,uVar12,uVar13);
LAB_103581de0:
              func_0x000101556278(uVar11,uVar5,uVar6);
              func_0x000107c61428(param_1 + 0x98,auStack_2d0,0,0);
              func_0x000107c61428(param_2 + 0x98,auStack_2e8,0,0);
              uVar11 = *(ulong *)(param_1 + 0x98);
              uVar5 = *(ulong *)(param_1 + 0xa0);
              uVar6 = *(undefined8 *)(param_1 + 0xa8);
              uVar8 = *(ulong *)(param_2 + 0x98);
              uVar12 = *(ulong *)(param_2 + 0xa0);
              uVar13 = *(undefined8 *)(param_2 + 0xa8);
              uVar7 = uVar6;
              uVar3 = uVar5;
              uVar9 = uVar11;
              if ((uVar11 & 0xff) == 2) {
                if ((uVar8 & 0xff) == 2) {
                  func_0x000101541464(uVar11,uVar5,uVar6);
                  func_0x000101541464(uVar8,uVar12,uVar13);
LAB_103581e60:
                  func_0x000101556278(uVar11,uVar5,uVar6);
                  func_0x000107c61428(param_1 + 0xb0,auStack_300,0,0);
                  func_0x000107c61428(param_2 + 0xb0,auStack_318,0,0);
                  uVar11 = *(ulong *)(param_1 + 0xb0);
                  uVar7 = *(undefined8 *)(param_1 + 0xb8);
                  lVar14 = *(long *)(param_1 + 0xc0);
                  uVar13 = *(undefined8 *)(param_2 + 0xb0);
                  uVar6 = *(undefined8 *)(param_2 + 0xb8);
                  lVar15 = *(long *)(param_2 + 0xc0);
                  if (lVar14 == 0) {
                    if (lVar15 != 0) goto LAB_103581994;
                    FUN_103582d60(uVar11,uVar7,0);
                    FUN_103582d60(uVar13,uVar6,0);
                    func_0x000103582d8c(uVar11,uVar7,0);
                  }
                  else {
                    if (lVar15 == 0) goto LAB_103581994;
                    FUN_103582d60(uVar11,uVar7,lVar14);
                    FUN_103582d60(uVar13,uVar6,lVar15);
                    uVar8 = uVar11;
                    FUN_1035c9484(uVar11,uVar7,lVar14,uVar13,uVar6,lVar15);
                    func_0x000103582d8c(uVar13,uVar6,lVar15);
                    func_0x000103582d8c(uVar11,uVar7,lVar14);
                    if ((uVar8 & 1) == 0) {
                      return 0;
                    }
                  }
                  func_0x000107c61428(param_1 + 200,auStack_330,0,0);
                  lVar15 = *(long *)(param_1 + 200);
                  func_0x000107c61428(param_2 + 200,auStack_348,0,0);
                  lVar14 = *(long *)(param_2 + 200);
                  if (*(char *)(param_2 + 0xd0) == '\x01') {
                    if (lVar14 == 0) {
                      if (lVar15 != 0) {
                        return 0;
                      }
                    }
                    else if (lVar14 == 1) {
                      if (lVar15 != 1) {
                        return 0;
                      }
                    }
                    else if (lVar15 != 2) {
                      return 0;
                    }
                  }
                  else if (lVar15 != lVar14) {
                    return 0;
                  }
                  func_0x000107c61428(param_1 + 0xd8,auStack_360,0,0);
                  func_0x000107c61428(param_2 + 0xd8,auStack_378,0,0);
                  uVar11 = *(ulong *)(param_1 + 0xd8);
                  uVar7 = *(undefined8 *)(param_1 + 0xe0);
                  lVar14 = *(long *)(param_1 + 0xe8);
                  uVar13 = *(undefined8 *)(param_2 + 0xd8);
                  uVar6 = *(undefined8 *)(param_2 + 0xe0);
                  lVar15 = *(long *)(param_2 + 0xe8);
                  if (lVar14 == 0) {
                    if (lVar15 != 0) {
LAB_103581994:
                      FUN_103582d60(uVar11,uVar7,lVar14);
                      FUN_103582d60(uVar13,uVar6,lVar15);
                      func_0x000103582d8c(uVar11,uVar7,lVar14);
                      func_0x000103582d8c(uVar13,uVar6,lVar15);
                      return 0;
                    }
                    FUN_103582d60(uVar11,uVar7,0);
                    FUN_103582d60(uVar13,uVar6,0);
                    func_0x000103582d8c(uVar11,uVar7,0);
                  }
                  else {
                    if (lVar15 == 0) goto LAB_103581994;
                    FUN_103582d60(uVar11,uVar7,lVar14);
                    FUN_103582d60(uVar13,uVar6,lVar15);
                    uVar8 = uVar11;
                    FUN_103598e38(uVar11,uVar7,lVar14,uVar13,uVar6,lVar15);
                    func_0x000103582d8c(uVar13,uVar6,lVar15);
                    func_0x000103582d8c(uVar11,uVar7,lVar14);
                    if ((uVar8 & 1) == 0) {
                      return 0;
                    }
                  }
                  func_0x000107c61428(param_1 + 0xf0,auStack_390,0,0);
                  uVar8 = *(ulong *)(param_1 + 0xf0);
                  cVar1 = *(char *)(param_1 + 0xf8);
                  func_0x000107c61428(param_2 + 0xf0,auStack_3a8,0,0);
                  uVar11 = (ulong)(uVar8 != 0);
                  if (cVar1 != '\x01') {
                    uVar11 = uVar8;
                  }
                  if (*(char *)(param_2 + 0xf8) == '\x01') {
                    if (*(ulong *)(param_2 + 0xf0) == 0) {
                      if (uVar11 != 0) {
                        return 0;
                      }
                    }
                    else if (uVar11 != 1) {
                      return 0;
                    }
                  }
                  else if (uVar11 != *(ulong *)(param_2 + 0xf0)) {
                    return 0;
                  }
                  func_0x000107c61428(param_1 + 0x100,auStack_640,0,0);
                  func_0x000107c61428(param_2 + 0x100,auStack_658,0,0);
                  func_0x000107c610b4(auStack_628,param_1 + 0x100,0x140);
                  func_0x000107c610b4(auStack_8d8,param_1 + 0x100,0x140);
                  func_0x000107c610b4(auStack_4e8,param_2 + 0x100,0x140);
                  func_0x000107c610b4(auStack_798,param_2 + 0x100,0x140);
                  iVar2 = (int)auStack_8d8;
                  func_0x00010161830c();
                  if (iVar2 == 1) {
                    iVar2 = (int)auStack_798;
                    func_0x00010161830c();
                    if (iVar2 != 1) {
LAB_1035822f8:
                      func_0x000107c610b4(auStack_b58,auStack_8d8,0x280);
                      func_0x000103582db8(auStack_628,auStack_1b0);
                      func_0x000103582db8(auStack_4e8,auStack_1b0);
                      func_0x000103582e08(auStack_b58,0x112f79850,&UNK_10dbddcf0);
                      return 0;
                    }
                    func_0x000107c610b4(auStack_b58,auStack_8d8,0x140);
                    func_0x000103582db8(auStack_628,auStack_1b0);
                    func_0x000103582db8(auStack_4e8,auStack_1b0);
                    func_0x000103582e08(auStack_b58,0x112dba328,&UNK_10d96ce10);
                  }
                  else {
                    func_0x000107c610b4(auStack_d28,auStack_8d8,0x140);
                    iVar2 = (int)auStack_798;
                    func_0x00010161830c();
                    if (iVar2 == 1) goto LAB_1035822f8;
                    func_0x000107c610b4(auStack_e68,auStack_798,0x140);
                    func_0x000107c610b4(auStack_b58,auStack_798,0x140);
                    func_0x000107c610b4(auStack_1b0,auStack_d28,0x140);
                    func_0x000103582db8(auStack_628,auStack_fa8);
                    func_0x000103582db8(auStack_4e8,auStack_fa8);
                    puVar4 = auStack_1b0;
                    FUN_103667fe0(puVar4,auStack_b58);
                    func_0x000103582e08(auStack_e68,0x112dba328,&UNK_10d96ce10);
                    func_0x000103582e08(auStack_8d8,0x112dba328,&UNK_10d96ce10);
                    if (((ulong)puVar4 & 1) == 0) {
                      return 0;
                    }
                  }
                  func_0x000107c61428(param_1 + 0x240,auStack_8d8,0,0);
                  lVar15 = *(long *)(param_1 + 0x240);
                  func_0x000107c61428(param_2 + 0x240,auStack_d28,0,0);
                  lVar14 = *(long *)(param_2 + 0x240);
                  if (*(char *)(param_2 + 0x248) == '\x01') {
                    if (lVar14 < 2) {
                      if (lVar14 == 0) {
                        if (lVar15 != 0) {
                          return 0;
                        }
                      }
                      else if (lVar15 != 1) {
                        return 0;
                      }
                    }
                    else if (lVar14 == 2) {
                      if (lVar15 != 2) {
                        return 0;
                      }
                    }
                    else if (lVar15 != 3) {
                      return 0;
                    }
                  }
                  else if (lVar15 != lVar14) {
                    return 0;
                  }
                  func_0x000107c61428(param_1 + 0x250,auStack_e68,0,0);
                  func_0x000107c61428(param_2 + 0x250,auStack_fa8,0,0);
                  uVar11 = *(ulong *)(param_1 + 0x250);
                  uVar5 = *(ulong *)(param_1 + 600);
                  uVar6 = *(undefined8 *)(param_1 + 0x260);
                  uVar8 = *(ulong *)(param_2 + 0x250);
                  uVar12 = *(ulong *)(param_2 + 600);
                  uVar13 = *(undefined8 *)(param_2 + 0x260);
                  uVar7 = uVar6;
                  uVar3 = uVar5;
                  uVar9 = uVar11;
                  if ((uVar11 & 0xff) == 2) {
                    if ((uVar8 & 0xff) == 2) {
                      func_0x000101541464(uVar11,uVar5,uVar6);
                      func_0x000101541464(uVar8,uVar12,uVar13);
LAB_103582498:
                      func_0x000101556278(uVar11,uVar5,uVar6);
                      func_0x000107c61428(param_1 + 0x268,auStack_b70,0,0);
                      func_0x000107c61428(param_2 + 0x268,auStack_b88,0,0);
                      lVar14 = *(long *)(param_1 + 0x268);
                      uVar11 = *(ulong *)(param_1 + 0x270);
                      uVar5 = *(ulong *)(param_1 + 0x278);
                      lVar15 = *(long *)(param_2 + 0x268);
                      uVar8 = *(ulong *)(param_2 + 0x270);
                      uVar12 = *(ulong *)(param_2 + 0x278);
                      uVar3 = uVar5;
                      uVar9 = uVar11;
                      lVar10 = lVar14;
                      if (uVar5 >> 0x3c < 0xf) {
                        if (uVar12 >> 0x3c < 0xf) {
                          func_0x000100d55fa0(lVar14,uVar11,uVar5);
                          if (lVar14 == lVar15) {
                            func_0x000100d55fa0(lVar14,uVar8,uVar12);
                            uVar3 = uVar11;
                            func_0x000100e25fcc(uVar11,uVar5,uVar8,uVar12);
                            func_0x000100d55fbc(lVar14,uVar8,uVar12);
                            if ((uVar3 & 1) == 0) goto LAB_1035827b4;
                            goto LAB_103582520;
                          }
LAB_103582788:
                          func_0x000100d55fa0(lVar15,uVar8,uVar12);
                          goto LAB_103582798;
                        }
                      }
                      else if (0xe < uVar12 >> 0x3c) {
                        func_0x000100d55fa0(lVar14,uVar11,uVar5);
                        func_0x000100d55fa0(lVar15,uVar8,uVar12);
LAB_103582520:
                        func_0x000100d55fbc(lVar14,uVar11,uVar5);
                        func_0x000107c61428(param_1 + 0x280,auStack_ba0,0,0);
                        func_0x000107c61428(param_2 + 0x280,auStack_bb8,0,0);
                        lVar14 = *(long *)(param_1 + 0x280);
                        uVar11 = *(ulong *)(param_1 + 0x288);
                        uVar5 = *(ulong *)(param_1 + 0x290);
                        lVar15 = *(long *)(param_2 + 0x280);
                        uVar8 = *(ulong *)(param_2 + 0x288);
                        uVar12 = *(ulong *)(param_2 + 0x290);
                        uVar3 = uVar5;
                        uVar9 = uVar11;
                        lVar10 = lVar14;
                        if (uVar5 >> 0x3c < 0xf) {
                          if (uVar12 >> 0x3c < 0xf) {
                            func_0x000100d55fa0(lVar14,uVar11,uVar5);
                            if (lVar14 != lVar15) goto LAB_103582788;
                            func_0x000100d55fa0(lVar14,uVar8,uVar12);
                            uVar3 = uVar11;
                            func_0x000100e25fcc(uVar11,uVar5,uVar8,uVar12);
                            func_0x000100d55fbc(lVar14,uVar8,uVar12);
                            if ((uVar3 & 1) == 0) goto LAB_1035827b4;
                            goto LAB_1035825a8;
                          }
                        }
                        else if (0xe < uVar12 >> 0x3c) {
                          func_0x000100d55fa0(lVar14,uVar11,uVar5);
                          func_0x000100d55fa0(lVar15,uVar8,uVar12);
LAB_1035825a8:
                          func_0x000100d55fbc(lVar14,uVar11,uVar5);
                          func_0x000107c61428(param_1 + 0x298,auStack_bd0,0,0);
                          func_0x000107c61428(param_2 + 0x298,auStack_be8,0,0);
                          lVar14 = *(long *)(param_1 + 0x298);
                          uVar11 = *(ulong *)(param_1 + 0x2a0);
                          uVar5 = *(ulong *)(param_1 + 0x2a8);
                          lVar15 = *(long *)(param_2 + 0x298);
                          uVar12 = *(ulong *)(param_2 + 0x2a0);
                          uVar8 = *(ulong *)(param_2 + 0x2a8);
                          if (uVar5 >> 0x3c < 0xf) {
                            if (uVar8 >> 0x3c < 0xf) {
                              func_0x000100d55fa0(lVar14,uVar11,uVar5);
                              func_0x000100d55fa0(lVar15,uVar12,uVar8);
                              if ((float)lVar14 == (float)lVar15) {
                                uVar3 = uVar11;
                                func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
                                func_0x000100d55fbc(lVar15,uVar12,uVar8);
                                if ((uVar3 & 1) != 0) goto LAB_103582888;
                              }
                              else {
                                func_0x000100d55fbc(lVar15,uVar12,uVar8);
                              }
                              goto LAB_1035827b4;
                            }
                          }
                          else if (0xe < uVar8 >> 0x3c) {
                            func_0x000100d55fa0(lVar14,uVar11,uVar5);
                            func_0x000100d55fa0(lVar15,uVar12,uVar8);
LAB_103582888:
                            func_0x000100d55fbc(lVar14,uVar11,uVar5);
                            return 1;
                          }
                          func_0x000100d55fa0(lVar14,uVar11,uVar5);
                          func_0x000100d55fa0(lVar15,uVar12,uVar8);
                          func_0x000100d55fbc(lVar14,uVar11,uVar5);
                          lVar14 = lVar15;
                          uVar11 = uVar12;
                          uVar5 = uVar8;
                          goto LAB_1035827b4;
                        }
                      }
                      goto LAB_103581c3c;
                    }
                  }
                  else if ((uVar8 & 0xff) != 2) {
                    func_0x000101541464(uVar11,uVar5,uVar6);
                    func_0x000101541464(uVar8,uVar12,uVar13);
                    if ((((uint)uVar8 ^ (uint)uVar11) & 1) != 0) goto LAB_103581d44;
                    func_0x000100e25fcc(uVar5,uVar6,uVar12,uVar13);
                    func_0x000101556278(uVar8,uVar12,uVar13);
                    if ((uVar3 & 1) == 0) goto LAB_103581f50;
                    goto LAB_103582498;
                  }
                }
              }
              else if ((uVar8 & 0xff) != 2) {
                func_0x000101541464(uVar11,uVar5,uVar6);
                func_0x000101541464(uVar8,uVar12,uVar13);
                if ((((uint)uVar8 ^ (uint)uVar11) & 1) != 0) goto LAB_103581d44;
                func_0x000100e25fcc(uVar5,uVar6,uVar12,uVar13);
                func_0x000101556278(uVar8,uVar12,uVar13);
                if ((uVar3 & 1) == 0) goto LAB_103581f50;
                goto LAB_103581e60;
              }
            }
          }
          else if ((uVar8 & 0xff) != 2) {
            func_0x000101541464(uVar11,uVar5,uVar6);
            func_0x000101541464(uVar8,uVar12,uVar13);
            if ((((uint)uVar8 ^ (uint)uVar11) & 1) != 0) goto LAB_103581d44;
            func_0x000100e25fcc(uVar5,uVar6,uVar12,uVar13);
            func_0x000101556278(uVar8,uVar12,uVar13);
            if ((uVar3 & 1) == 0) goto LAB_103581f50;
            goto LAB_103581de0;
          }
        }
      }
      else if ((uVar8 & 0xff) != 2) {
        func_0x000101541464(uVar11,uVar5,uVar6);
        func_0x000101541464(uVar8,uVar12,uVar13);
        if ((((uint)uVar8 ^ (uint)uVar11) & 1) == 0) {
          func_0x000100e25fcc(uVar5,uVar6,uVar12,uVar13);
          func_0x000101556278(uVar8,uVar12,uVar13);
          if ((uVar3 & 1) == 0) goto LAB_103581f50;
          goto LAB_103581b78;
        }
LAB_103581d44:
        func_0x000101556278(uVar8,uVar12,uVar13);
        goto LAB_103581f50;
      }
      uVar11 = uVar8;
      uVar5 = uVar12;
      uVar6 = uVar13;
      func_0x000101541464(uVar9,uVar3,uVar7);
      func_0x000101541464(uVar11,uVar5,uVar6);
      func_0x000101556278(uVar9,uVar3,uVar7);
LAB_103581f50:
      func_0x000101556278(uVar11,uVar5,uVar6);
      return 0;
    }
  }
LAB_103581c3c:
  lVar14 = lVar15;
  uVar11 = uVar8;
  uVar5 = uVar12;
  func_0x000100d55fa0(lVar10,uVar9,uVar3);
  func_0x000100d55fa0(lVar14,uVar11,uVar5);
  func_0x000100d55fbc(lVar10,uVar9,uVar3);
LAB_1035827b4:
  func_0x000100d55fbc(lVar14,uVar11,uVar5);
  return 0;
}



/* Entry: 1035828c0; end: 10358291f;  */

void FUN_1035828c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f79858 != -1) {
    func_0x000107c61568(0x112f79858,FUN_10357f62c);
  }
  uVar1 = uRam0000000112f79860;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103582920; end: 103582943;  */

undefined1  [16] FUN_103582920(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155c50;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 103582944; end: 103582973;  */

undefined1  [16] FUN_103582944(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103582974; end: 1035829a7;  */

void FUN_103582974(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035829a8; end: 1035829bb;  */

undefined8 FUN_1035829a8(void)

{
  return 0x1035829b8;
}



/* Entry: 1035829bc; end: 1035829f3;  */

void FUN_1035829bc(void)

{
  FUN_10357ff74();
  return;
}



/* Entry: 1035829f4; end: 1035829f7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035829f4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035829f8; end: 103582a2f;  */

uint FUN_1035829f8(long param_1,long param_2)

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
  FUN_103583114();
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



/* Entry: 103582a30; end: 103582ad7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103582a30(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1035818bc(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103582ad8; end: 103582b77;  */

/* WARNING: Possible PIC construction at 0x000103582b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103582b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103582b28) */
/* WARNING: Removing unreachable block (ram,0x000103582b38) */

void FUN_103582ad8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f79868 != -1) {
    func_0x000107c61568(0x112f79868,FUN_10357f5e4);
  }
  uVar5 = uRam0000000113808b18;
  uVar4 = uRam0000000113808b10;
  uVar3 = uRam0000000113808b08;
  uVar2 = uRam0000000113808b00;
  uVar1 = uRam0000000113808af8;
  *param_1 = uRam0000000113808af0;
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



/* Entry: 103582b78; end: 103582bb3;  */

void FUN_103582b78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f79b48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f79b48,&UNK_10dbdded0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103582bb4; end: 103582cb7;  */

void FUN_103582bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103582cb8; end: 103582d5f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103582cb8(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_1035818bc(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103582d60; end: 103582e47;  */

void FUN_103582d60(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3);
    return;
  }
  return;
}



/* Entry: 103582e48; end: 103582e87;  */

void FUN_103582e48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddd68;
  func_0x000107c61520(&UNK_10dbddd68,&UNK_110666c90);
  puRam0000000112f79870 = puVar1;
  return;
}



/* Entry: 103582e88; end: 103582eab;  */

void FUN_103582e88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103582eac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103582eac; end: 103582eeb;  */

void FUN_103582eac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddd40;
  func_0x000107c61520(&UNK_10dbddd40,&UNK_110666c90);
  puRam0000000112f79878 = puVar1;
  return;
}



/* Entry: 103582eec; end: 103582f17;  */

void FUN_103582eec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103582e48();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502994();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103582f18; end: 103582f1b;  */

void FUN_103582f18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddda8;
  func_0x000107c61520(&UNK_10dbddda8,&UNK_110666c90);
  puRam0000000112f79880 = puVar1;
  return;
}



/* Entry: 103582f1c; end: 103582f5b;  */

void FUN_103582f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbddda8;
  func_0x000107c61520(&UNK_10dbddda8,&UNK_110666c90);
  puRam0000000112f79880 = puVar1;
  return;
}



/* Entry: 103582f5c; end: 103582f87;  */

void FUN_103582f5c(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103582f88; end: 103583033;  */

undefined8 * FUN_103582f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103583034; end: 10358307b;  */

undefined8 * FUN_103583034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10358307c; end: 103583113;  */

int FUN_10358307c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103583114; end: 103583213;  */

void FUN_103583114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f79b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbddd14;
  func_0x000107c61520(&DAT_10dbddd14,&UNK_110666c90);
  puRam0000000112f79b50 = puVar1;
  return;
}



/* Entry: 103583214; end: 10358322b;  */

undefined8 * FUN_103583214(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10358322c; end: 10358325b;  */

void FUN_10358322c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103589530();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10358325c; end: 103583263;  */

undefined8 FUN_10358325c(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103583264; end: 1035832d7;  */

void FUN_103583264(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f79bd8;
  func_0x0001000285a8(0x112f79bd8,&UNK_10dbde0e8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}


