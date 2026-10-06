/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016227c4; end: 101622927;  */

int FUN_1016227c4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101622928; end: 101622967;  */

void FUN_101622928(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96dd54;
  func_0x000107c61520(&DAT_10d96dd54,&UNK_1103e96a0);
  puRam0000000112dba650 = puVar1;
  return;
}



/* Entry: 101622968; end: 101622977;  */

void FUN_101622968(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 101622978; end: 1016229a7;  */

void FUN_101622978(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_101622bd8();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1016229a8; end: 1016229af;  */

undefined8 FUN_1016229a8(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1016229b0; end: 101622a23;  */

void FUN_1016229b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dba6c0;
  func_0x0001000285a8(0x112dba6c0,&UNK_10d96df80);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101622a24; end: 101622a2f;  */

void FUN_101622a24(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101622a30; end: 101622adb;  */

void FUN_101622a30(void)

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



/* Entry: 101622adc; end: 101622aef;  */

bool FUN_101622adc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101622af0; end: 101622b37;  */

void FUN_101622af0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96e0f0,0x46,2);
  uRam00000001138018f0 = uStack_38;
  uRam00000001138018e8 = uStack_40;
  uRam0000000113801900 = uStack_28;
  uRam00000001138018f8 = uStack_30;
  uRam0000000113801910 = uStack_18;
  uRam0000000113801908 = uStack_20;
  return;
}



/* Entry: 101622b38; end: 101622bd7;  */

/* WARNING: Possible PIC construction at 0x000101622b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101622b94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101622b88) */
/* WARNING: Removing unreachable block (ram,0x000101622b98) */

void FUN_101622b38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba6c8 != -1) {
    func_0x000107c61568(0x112dba6c8,FUN_101622af0);
  }
  uVar5 = uRam0000000113801910;
  uVar4 = uRam0000000113801908;
  uVar3 = uRam0000000113801900;
  uVar2 = uRam00000001138018f8;
  uVar1 = uRam00000001138018f0;
  *param_1 = uRam00000001138018e8;
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



/* Entry: 101622bd8; end: 101622be3;  */

void FUN_101622bd8(void)

{
  return;
}



/* Entry: 101622be4; end: 101622c0f;  */

void FUN_101622be4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101622c10();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101622c50();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101622c10; end: 101622c8f;  */

void FUN_101622c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e020;
  func_0x000107c61520(&UNK_10d96e020,&UNK_1103e98f0);
  puRam0000000112dba6d0 = puVar1;
  return;
}



/* Entry: 101622c90; end: 101622c93;  */

void FUN_101622c90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dba6e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dba6e8;
  func_0x00010002969c(0x112dba6e8,&UNK_10d96dfa8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dba6e0 = puVar2;
  return;
}



/* Entry: 101622c94; end: 101622ce3;  */

void FUN_101622c94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dba6e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dba6e8;
  func_0x00010002969c(0x112dba6e8,&UNK_10d96dfa8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dba6e0 = puVar2;
  return;
}



/* Entry: 101622ce4; end: 101622ce7;  */

void FUN_101622ce4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e060;
  func_0x000107c61520(&UNK_10d96e060,&UNK_1103e98f0);
  puRam0000000112dba6f0 = puVar1;
  return;
}



/* Entry: 101622ce8; end: 101622d27;  */

void FUN_101622ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e060;
  func_0x000107c61520(&UNK_10d96e060,&UNK_1103e98f0);
  puRam0000000112dba6f0 = puVar1;
  return;
}



/* Entry: 101622d28; end: 101622dc7;  */

int FUN_101622d28(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101622dc8; end: 101622e07;  */

void FUN_101622dc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dba740;
  func_0x0001000285a8(0x112dba740,&UNK_10d96e140);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101622e08; end: 101622e27;  */

void FUN_101622e08(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101622e28; end: 101622e67;  */

void FUN_101622e28(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dba7a0;
  func_0x0001000285a8(0x112dba7a0,&UNK_10d96e148);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101622e68; end: 101622e8f;  */

void FUN_101622e68(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101622e90; end: 101622f3b;  */

void FUN_101622e90(void)

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



/* Entry: 101622f3c; end: 101622f4f;  */

bool FUN_101622f3c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101622f50; end: 101623033;  */

void FUN_101622f50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dba7f0;
  func_0x0001000285a8(0x112dba7f0,&UNK_10d96e150);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101623034; end: 10162306f;  */

bool FUN_101623034(ulong *param_1,ulong *param_2)

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



/* Entry: 101623070; end: 1016230a7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101623070(void)

{
  long in_x3;
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c6142c(in_x3);
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x5);
  return;
}



/* Entry: 1016230a8; end: 101623193;  */

bool FUN_1016230a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_c8 [56];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar7 = *(long *)(unaff_x20 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_90 = uVar1;
  uStack_88 = uVar2;
  uStack_80 = uVar3;
  lStack_78 = lVar7;
  uStack_70 = uVar4;
  uStack_68 = uVar5;
  uStack_60 = uVar6;
  if (lVar7 == 0) {
    func_0x000101624638(&uStack_90,auStack_c8,0x112dba7f8,&UNK_10d96e158);
  }
  else {
    func_0x000101624638(&uStack_90,auStack_c8,0x112dba7f8,&UNK_10d96e158);
    FUN_101623070(uVar1,uVar2,uVar3,lVar7,uVar4,uVar5,uVar6);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  FUN_101623070(uVar1,uVar2,uVar3,0,uVar4,uVar5,uVar6);
  return lVar7 != 0;
}



/* Entry: 101623194; end: 101623293;  */

bool FUN_101623194(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_1b0 [96];
  undefined8 uStack_150;
  long lStack_148;
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
  long lStack_88;
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
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_48 = *(undefined8 *)(unaff_x20 + 200);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0xd0);
  lVar3 = *(long *)(unaff_x20 + 0x88);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_90 = uStack_150;
  lStack_88 = lVar3;
  if (lVar3 == 0) {
    lStack_148 = 0;
    uStack_118 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_108 = *(undefined8 *)(unaff_x20 + 200);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0xa0);
    uVar1 = 0x112dba800;
    puVar2 = &UNK_10d96e160;
    func_0x000101624638(&uStack_90,auStack_1b0,0x112dba800,&UNK_10d96e160);
  }
  else {
    uStack_118 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_108 = *(undefined8 *)(unaff_x20 + 200);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_148 = lVar3;
    func_0x000101624638(&uStack_90,auStack_1b0,0x112dba800,&UNK_10d96e160);
    uVar1 = 0x112dba808;
    puVar2 = &UNK_10d96e168;
  }
  func_0x0001016246b4(&uStack_150,uVar1,puVar2);
  return lVar3 != 0;
}



/* Entry: 101623294; end: 1016232db;  */

void FUN_101623294(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96e900,0x2f,2);
  uRam0000000113801920 = uStack_38;
  uRam0000000113801918 = uStack_40;
  uRam0000000113801930 = uStack_28;
  uRam0000000113801928 = uStack_30;
  uRam0000000113801940 = uStack_18;
  uRam0000000113801938 = uStack_20;
  return;
}



/* Entry: 1016232dc; end: 10162337b;  */

/* WARNING: Possible PIC construction at 0x000101623328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101623338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162332c) */
/* WARNING: Removing unreachable block (ram,0x00010162333c) */

void FUN_1016232dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba810 != -1) {
    func_0x000107c61568(0x112dba810,FUN_101623294);
  }
  uVar5 = uRam0000000113801940;
  uVar4 = uRam0000000113801938;
  uVar3 = uRam0000000113801930;
  uVar2 = uRam0000000113801928;
  uVar1 = uRam0000000113801920;
  *param_1 = uRam0000000113801918;
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



/* Entry: 10162337c; end: 1016233c3;  */

void FUN_10162337c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96e8d0,0x27,2);
  uRam0000000113801950 = uStack_38;
  uRam0000000113801948 = uStack_40;
  uRam0000000113801960 = uStack_28;
  uRam0000000113801958 = uStack_30;
  uRam0000000113801970 = uStack_18;
  uRam0000000113801968 = uStack_20;
  return;
}



/* Entry: 1016233c4; end: 101623463;  */

/* WARNING: Possible PIC construction at 0x000101623410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101623420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101623414) */
/* WARNING: Removing unreachable block (ram,0x000101623424) */

void FUN_1016233c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba818 != -1) {
    func_0x000107c61568(0x112dba818,FUN_10162337c);
  }
  uVar5 = uRam0000000113801970;
  uVar4 = uRam0000000113801968;
  uVar3 = uRam0000000113801960;
  uVar2 = uRam0000000113801958;
  uVar1 = uRam0000000113801950;
  *param_1 = uRam0000000113801948;
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



/* Entry: 101623464; end: 1016234ab;  */

void FUN_101623464(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96e880,0x43,2);
  uRam0000000113801980 = uStack_38;
  uRam0000000113801978 = uStack_40;
  uRam0000000113801990 = uStack_28;
  uRam0000000113801988 = uStack_30;
  uRam00000001138019a0 = uStack_18;
  uRam0000000113801998 = uStack_20;
  return;
}



/* Entry: 1016234ac; end: 10162354b;  */

/* WARNING: Possible PIC construction at 0x0001016234f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101623508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016234fc) */
/* WARNING: Removing unreachable block (ram,0x00010162350c) */

void FUN_1016234ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba820 != -1) {
    func_0x000107c61568(0x112dba820,FUN_101623464);
  }
  uVar5 = uRam00000001138019a0;
  uVar4 = uRam0000000113801998;
  uVar3 = uRam0000000113801990;
  uVar2 = uRam0000000113801988;
  uVar1 = uRam0000000113801980;
  *param_1 = uRam0000000113801978;
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



/* Entry: 10162354c; end: 101623593;  */

void FUN_10162354c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96e7c0,0xb6,2);
  uRam00000001138019b0 = uStack_38;
  uRam00000001138019a8 = uStack_40;
  uRam00000001138019c0 = uStack_28;
  uRam00000001138019b8 = uStack_30;
  uRam00000001138019d0 = uStack_18;
  uRam00000001138019c8 = uStack_20;
  return;
}



/* Entry: 101623594; end: 10162373f;  */

/* WARNING: Removing unreachable block (ram,0x00010162371c) */

void FUN_101623594(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar5 = *(code **)(param_3 + 0x180);
            FUN_1016246f4();
            lVar2 = unaff_x20 + 8;
            puVar3 = &UNK_1103e9cb0;
            goto LAB_10162361c;
          }
          if (lVar1 != 4) goto LAB_101623630;
          pcVar5 = *(code **)(param_3 + 0x138);
          goto LAB_10162370c;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x90);
          goto LAB_10162370c;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_101625398();
          lVar2 = unaff_x20 + 0x48;
          puVar3 = &UNK_1103e9e58;
          goto LAB_10162361c;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 != 5) {
            if (lVar1 != 6) goto LAB_101623630;
            pcVar5 = *(code **)(param_3 + 0x180);
            func_0x000101624734();
            lVar2 = unaff_x20 + 0x18;
            puVar3 = &UNK_1103e9d40;
LAB_10162361c:
            (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
            goto LAB_101623630;
          }
          pcVar5 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 == 7) {
            pcVar5 = *(code **)(param_3 + 0x198);
            func_0x000101625ebc();
            lVar2 = unaff_x20 + 0x80;
            puVar3 = &UNK_1103ea050;
            goto LAB_10162361c;
          }
          if (lVar1 != 0x6c) goto LAB_101623630;
          pcVar5 = *(code **)(param_3 + 0x168);
        }
LAB_10162370c:
        (*pcVar5)();
      }
LAB_101623630:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101623740; end: 10162391f;  */

void FUN_101623740(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar9;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar4 = &lStack_50;
  if ((*unaff_x20 != 0) &&
     ((**(code **)(param_3 + 0x30))(*unaff_x20,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  plVar5 = unaff_x20;
  FUN_101623920();
  if (unaff_x21 != 0) {
    return;
  }
  if (unaff_x20[1] != 0) {
    uStack_48 = (undefined1)unaff_x20[2];
    pcVar9 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[1];
    FUN_1016246f4();
    (*pcVar9)(&lStack_50,3,&UNK_1103e9cb0,plVar5,param_2,param_3);
    plVar5 = plVar4;
  }
  if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
    plVar5 = (long *)0x1;
    (**(code **)(param_3 + 0x68))(1,4,param_2,param_3);
  }
  if (*(char *)((long)unaff_x20 + 0x12) == '\x01') {
    plVar5 = (long *)0x1;
    (**(code **)(param_3 + 0x68))(1,5,param_2,param_3);
  }
  if (unaff_x20[3] != 0) {
    uStack_48 = (undefined1)unaff_x20[4];
    pcVar9 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[3];
    func_0x000101624734();
    (*pcVar9)(&lStack_50,6,&UNK_1103e9d40,plVar5,param_2,param_3);
  }
  FUN_1016239b4();
  lVar1 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar7 = (long)(int)lVar1;
      lVar8 = lVar1 >> 0x20;
      goto LAB_1016238e8;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_101623908;
  }
  else {
    if (uVar6 != 2) goto LAB_101623908;
    lVar7 = *(long *)(lVar1 + 0x10);
    lVar8 = *(long *)(lVar1 + 0x18);
LAB_1016238e8:
    if (lVar7 == lVar8) goto LAB_101623908;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,0x6c,param_2,param_3);
LAB_101623908:
  func_0x000100076224(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  return;
}



/* Entry: 101623920; end: 1016239b3;  */

void FUN_101623920(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_68 = *(long *)(param_1 + 0x60);
  if (lStack_68 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101625398();
    (*pcVar1)(&uStack_80,2,&UNK_1103e9e58,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1016239b4; end: 101623a47;  */

void FUN_1016239b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  long lStack_98;
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
  
  lStack_98 = *(long *)(param_1 + 0x88);
  if (lStack_98 != 0) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x80);
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    uStack_70 = *(undefined8 *)(param_1 + 0xb0);
    uStack_58 = *(undefined8 *)(param_1 + 200);
    uStack_60 = *(undefined8 *)(param_1 + 0xc0);
    uStack_48 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xd0);
    uStack_88 = *(undefined8 *)(param_1 + 0x98);
    uStack_90 = *(undefined8 *)(param_1 + 0x90);
    uStack_78 = *(undefined8 *)(param_1 + 0xa8);
    uStack_80 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101625ebc();
    (*pcVar1)(&uStack_a0,7,&UNK_1103ea050,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101623a48; end: 101623ac7;  */

uint FUN_101623a48(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auStack_3f0 [96];
  ulong uStack_390;
  long lStack_388;
  ulong uStack_380;
  long lStack_378;
  ulong uStack_370;
  long lStack_368;
  ulong uStack_360;
  long lStack_358;
  ulong uStack_350;
  long lStack_348;
  ulong uStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  byte bStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  byte bStack_80;
  long lStack_78;
  long lStack_70;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar15 = param_1[10];
  lVar8 = param_1[9];
  lVar25 = param_1[0xc];
  lVar19 = param_1[0xb];
  lVar16 = param_1[0xe];
  lVar9 = param_1[0xd];
  lVar6 = param_1[0xf];
  lVar17 = param_2[10];
  lVar10 = param_2[9];
  lVar26 = param_2[0xc];
  lVar20 = param_2[0xb];
  lVar18 = param_2[0xe];
  lVar11 = param_2[0xd];
  lVar7 = param_2[0xf];
  lStack_150 = lVar10;
  lStack_148 = lVar17;
  lStack_140 = lVar20;
  lStack_138 = lVar26;
  lStack_130 = lVar11;
  lStack_128 = lVar18;
  lStack_120 = lVar7;
  lStack_110 = lVar8;
  lStack_108 = lVar15;
  lStack_100 = lVar19;
  lStack_f8 = lVar25;
  lStack_f0 = lVar9;
  lStack_e8 = lVar16;
  lStack_e0 = lVar6;
  if (lVar25 == 0) {
    if (lVar26 != 0) goto LAB_1016248e8;
    func_0x000101624638(&lStack_110,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    func_0x000101624638(&lStack_150,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    FUN_101623070(lVar8,lVar15,lVar19,0,lVar9,lVar16,lVar6);
LAB_101624a04:
    lVar6 = param_1[1];
    lVar7 = param_2[1];
    if ((char)param_2[2] == '\x01') {
      if (lVar7 == 0) {
        if (lVar6 == 0) goto LAB_101624a50;
      }
      else if (lVar7 == 1) {
        if (lVar6 == 1) {
LAB_101624a50:
          if ((((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0) &&
             (((*(byte *)((long)param_1 + 0x12) ^ *(byte *)((long)param_2 + 0x12)) & 1) == 0)) {
            uVar30 = (ulong)(param_1[3] != 0);
            if ((char)param_1[4] != '\x01') {
              uVar30 = param_1[3];
            }
            if ((char)param_2[4] == '\x01') {
              if (param_2[3] == 0) {
                if (uVar30 == 0) goto LAB_101624ab8;
              }
              else if (uVar30 == 1) {
LAB_101624ab8:
                lVar7 = param_1[0x15];
                uVar21 = param_1[0x14];
                lStack_178 = param_1[0x17];
                lStack_180 = param_1[0x16];
                lVar9 = param_1[0x13];
                uVar28 = param_1[0x12];
                lStack_188 = param_1[0x15];
                lStack_190 = param_1[0x14];
                lVar8 = param_1[0x17];
                uVar27 = param_1[0x16];
                lStack_168 = param_1[0x19];
                lStack_170 = param_1[0x18];
                lVar10 = param_1[0x19];
                uVar29 = param_1[0x18];
                lStack_158 = param_1[0x1b];
                lStack_160 = param_1[0x1a];
                lStack_1a8 = param_1[0x11];
                lStack_1b0 = param_1[0x10];
                lStack_198 = param_1[0x13];
                lStack_1a0 = param_1[0x12];
                lStack_2c8 = param_1[0x11];
                uVar30 = param_1[0x10];
                lStack_248 = param_2[0x15];
                lStack_250 = param_2[0x14];
                lStack_1d8 = param_2[0x17];
                lStack_1e0 = param_2[0x16];
                lStack_258 = param_2[0x13];
                lStack_260 = param_2[0x12];
                lStack_1e8 = param_2[0x15];
                lStack_1f0 = param_2[0x14];
                lStack_238 = param_2[0x17];
                lStack_240 = param_2[0x16];
                lStack_1c8 = param_2[0x19];
                lStack_1d0 = param_2[0x18];
                lStack_228 = param_2[0x19];
                lStack_230 = param_2[0x18];
                lStack_1b8 = param_2[0x1b];
                lStack_1c0 = param_2[0x1a];
                lStack_208 = param_2[0x11];
                lStack_210 = param_2[0x10];
                lStack_1f8 = param_2[0x13];
                lStack_200 = param_2[0x12];
                lStack_268 = param_2[0x11];
                lStack_270 = param_2[0x10];
                lVar6 = param_1[0x1b];
                uVar12 = param_1[0x1a];
                lStack_218 = param_2[0x1b];
                lStack_220 = param_2[0x1a];
                uStack_2d0 = uVar30;
                uStack_2c0 = uVar28;
                lStack_2b8 = lVar9;
                uStack_2b0 = uVar21;
                lStack_2a8 = lVar7;
                uStack_2a0 = uVar27;
                lStack_298 = lVar8;
                uStack_290 = uVar29;
                lStack_288 = lVar10;
                uStack_280 = uVar12;
                lStack_278 = lVar6;
                if (lStack_2c8 == 0) {
                  if (lStack_268 != 0) goto LAB_101624cc8;
                  func_0x000101624638(&lStack_1b0,&uStack_390,0x112dba800,&UNK_10d96e160);
                  func_0x000101624638(&lStack_210,&uStack_390,0x112dba800,&UNK_10d96e160);
LAB_101624ddc:
                  func_0x0001016246b4(&uStack_2d0,0x112dba800,&UNK_10d96e160);
                  uVar30 = param_1[5];
                  FUN_100e25fcc(uVar30,param_1[6],param_2[5],param_2[6]);
                  if ((uVar30 & 1) != 0) {
                    lVar6 = param_1[7];
                    FUN_100e25fcc(lVar6,param_1[8],param_2[7],param_2[8]);
                    uVar1 = (uint)lVar6;
                    goto LAB_101624978;
                  }
                }
                else {
                  if (lStack_268 == 0) {
LAB_101624cc8:
                    uStack_390 = uVar30;
                    lStack_388 = lStack_2c8;
                    uStack_380 = uVar28;
                    lStack_378 = lVar9;
                    uStack_370 = uVar21;
                    lStack_368 = lVar7;
                    uStack_360 = uVar27;
                    lStack_358 = lVar8;
                    uStack_350 = uVar29;
                    lStack_348 = lVar10;
                    uStack_340 = uVar12;
                    lStack_338 = lVar6;
                    lStack_330 = lStack_270;
                    lStack_328 = lStack_268;
                    lStack_320 = lStack_260;
                    lStack_318 = lStack_258;
                    lStack_310 = lStack_250;
                    lStack_308 = lStack_248;
                    lStack_300 = lStack_240;
                    lStack_2f8 = lStack_238;
                    lStack_2f0 = lStack_230;
                    lStack_2e8 = lStack_228;
                    lStack_2e0 = lStack_220;
                    lStack_2d8 = lStack_218;
                    func_0x000101624638(&lStack_1b0,auStack_3f0,0x112dba800,&UNK_10d96e160);
                    func_0x000101624638(&lStack_210,auStack_3f0,0x112dba800,&UNK_10d96e160);
                    uVar4 = 0x112dba808;
                    puVar5 = &UNK_10d96e168;
                    puVar3 = &uStack_390;
                  }
                  else {
                    lStack_388 = param_2[0x11];
                    uStack_390 = param_2[0x10];
                    lVar16 = param_2[0x13];
                    uVar22 = param_2[0x12];
                    lVar11 = param_2[0x15];
                    uVar13 = param_2[0x14];
                    lVar17 = param_2[0x17];
                    uVar23 = param_2[0x16];
                    lVar15 = param_2[0x19];
                    uVar14 = param_2[0x18];
                    lVar18 = param_2[0x1b];
                    uVar24 = param_2[0x1a];
                    uStack_380 = uVar22;
                    lStack_378 = lVar16;
                    uStack_370 = uVar13;
                    lStack_368 = lVar11;
                    uStack_360 = uVar23;
                    lStack_358 = lVar17;
                    uStack_350 = uVar14;
                    lStack_348 = lVar15;
                    uStack_340 = uVar24;
                    lStack_338 = lVar18;
                    if ((((((uVar30 == uStack_390) && (lStack_388 == lStack_2c8)) ||
                          (func_0x000107c605b8(), (uVar30 & 1) != 0)) &&
                         (((uVar28 == uVar22 && (lVar9 == lVar16)) ||
                          (func_0x000107c605b8(uVar28,lVar9,uVar22,lVar16,0), (uVar28 & 1) != 0))))
                        && (((uVar21 == uVar13 && (lVar7 == lVar11)) ||
                            (func_0x000107c605b8(uVar21,lVar7,uVar13,lVar11,0), (uVar21 & 1) != 0)))
                        ) && ((((uVar27 == uVar23 && (lVar8 == lVar17)) ||
                               (func_0x000107c605b8(uVar27,lVar8,uVar23,lVar17,0), (uVar27 & 1) != 0
                               )) && (((uVar29 == uVar14 && (lVar10 == lVar15)) ||
                                      (func_0x000107c605b8(), (uVar29 & 1) != 0)))))) {
                      func_0x000101624638(&lStack_1b0,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      func_0x000101624638(&lStack_210,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      FUN_100e25fcc(uVar12,lVar6,uVar24,lVar18);
                      func_0x0001016246b4(&uStack_390,0x112dba800,&UNK_10d96e160);
                      if ((uVar12 & 1) != 0) goto LAB_101624ddc;
                      uVar4 = 0x112dba800;
                      puVar5 = &UNK_10d96e160;
                      puVar3 = &uStack_2d0;
                    }
                    else {
                      uVar4 = 0x112dba800;
                      puVar5 = &UNK_10d96e160;
                      func_0x000101624638(&lStack_1b0,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      func_0x000101624638(&lStack_210,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      func_0x0001016246b4(&uStack_390,0x112dba800,&UNK_10d96e160);
                      puVar3 = &uStack_2d0;
                    }
                  }
                  func_0x0001016246b4(puVar3,uVar4,puVar5);
                }
              }
            }
            else if (uVar30 == param_2[3]) goto LAB_101624ab8;
          }
        }
      }
      else if (lVar6 == 2) goto LAB_101624a50;
    }
    else if (lVar6 == lVar7) goto LAB_101624a50;
  }
  else {
    if (lVar26 != 0) {
      uStack_98 = (undefined1)lVar17;
      bStack_80 = (byte)lVar11 & 1;
      uStack_d0 = (undefined1)lVar15;
      bStack_b8 = (byte)lVar9 & 1;
      lStack_d8 = lVar8;
      lStack_c8 = lVar19;
      lStack_c0 = lVar25;
      lStack_b0 = lVar16;
      lStack_a8 = lVar6;
      lStack_a0 = lVar10;
      lStack_90 = lVar20;
      lStack_88 = lVar26;
      lStack_78 = lVar18;
      lStack_70 = lVar7;
      func_0x000101624638(&lStack_110,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
      func_0x000101624638(&lStack_150,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
      plVar2 = &lStack_d8;
      func_0x000101624574(plVar2,&lStack_a0);
      FUN_101623070(lVar10,lVar17,lVar20,lVar26,lVar11,lVar18,lVar7);
      FUN_101623070(lVar8,lVar15,lVar19,lVar25,lVar9,lVar16,lVar6);
      if (((ulong)plVar2 & 1) != 0) goto LAB_101624a04;
      goto LAB_101624974;
    }
LAB_1016248e8:
    func_0x000101624638(&lStack_110,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    func_0x000101624638(&lStack_150,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    FUN_101623070(lVar8,lVar15,lVar19,lVar25,lVar9,lVar16,lVar6);
    FUN_101623070(lVar10,lVar17,lVar20,lVar26,lVar11,lVar18,lVar7);
  }
LAB_101624974:
  uVar1 = 0;
LAB_101624978:
  return uVar1 & 1;
}



/* Entry: 101623ac8; end: 101623af7;  */

undefined1  [16] FUN_101623ac8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 101623af8; end: 101623b2b;  */

void FUN_101623af8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 101623b2c; end: 101623b3f;  */

undefined1  [16] FUN_101623b2c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x101623b3c;
  return auVar1;
}



/* Entry: 101623b40; end: 101623b53;  */

void FUN_101623b40(void)

{
  FUN_101623594();
  return;
}



/* Entry: 101623b54; end: 101623bb3;  */

void FUN_101623b54(void)

{
  FUN_101623740();
  return;
}



/* Entry: 101623bb4; end: 101623bb7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101623bb4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101623bb8; end: 101623bef;  */

uint FUN_101623bb8(long param_1,long param_2)

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
  func_0x000101625e7c();
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



/* Entry: 101623bf0; end: 101623c8f;  */

uint FUN_101623bf0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_28 = param_1[0x1b];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_108 = unaff_x20[0x1b];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  FUN_101624774(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 101623c90; end: 101623d2f;  */

/* WARNING: Possible PIC construction at 0x000101623cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101623cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101623ce0) */
/* WARNING: Removing unreachable block (ram,0x000101623cf0) */

void FUN_101623c90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba828 != -1) {
    func_0x000107c61568(0x112dba828,FUN_10162354c);
  }
  uVar5 = uRam00000001138019d0;
  uVar4 = uRam00000001138019c8;
  uVar3 = uRam00000001138019c0;
  uVar2 = uRam00000001138019b8;
  uVar1 = uRam00000001138019b0;
  *param_1 = uRam00000001138019a8;
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



/* Entry: 101623d30; end: 101623d6b;  */

void FUN_101623d30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba910;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba910,&UNK_10d96e770);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101623d6c; end: 101623ec7;  */

void FUN_101623d6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_38 = unaff_x20[0x1b];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101623ec8; end: 101623f67;  */

uint FUN_101623ec8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_108 = param_1[0x1b];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_28 = param_2[0x1b];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_101624774(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 101623f68; end: 101623faf;  */

void FUN_101623f68(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96e780,0x3a,2);
  uRam00000001138019e0 = uStack_38;
  uRam00000001138019d8 = uStack_40;
  uRam00000001138019f0 = uStack_28;
  uRam00000001138019e8 = uStack_30;
  uRam0000000113801a00 = uStack_18;
  uRam00000001138019f8 = uStack_20;
  return;
}



/* Entry: 101623fb0; end: 101624097;  */

/* WARNING: Removing unreachable block (ram,0x000101624088) */

void FUN_101623fb0(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 99) {
        pcVar4 = *(code **)(param_3 + 0x138);
        lVar1 = unaff_x20 + 0x20;
LAB_101624018:
        (*pcVar4)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 0x62) {
          pcVar4 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_101624018;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000101624e64();
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



/* Entry: 101624098; end: 10162418b;  */

void FUN_101624098(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000101624e64();
    (*pcVar4)(&lStack_50,1,&UNK_1103e9c20,uVar3,param_2,param_3);
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
      ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,0x62,param_2,param_3), unaff_x21 == 0)) &&
     (((char)unaff_x20[4] != '\x01' ||
      ((**(code **)(param_3 + 0x68))(1,99,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 10162418c; end: 1016241d7;  */

void FUN_10162418c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 1016241d8; end: 101624207;  */

undefined1  [16] FUN_1016241d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 101624208; end: 10162423b;  */

void FUN_101624208(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 10162423c; end: 10162424f;  */

undefined1  [16] FUN_10162423c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x10162424c;
  return auVar1;
}



/* Entry: 101624250; end: 101624277;  */

void FUN_101624250(void)

{
  FUN_101623fb0();
  return;
}



/* Entry: 101624278; end: 10162427b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101624278(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10162427c; end: 1016242b3;  */

uint FUN_10162427c(long param_1,long param_2)

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
  FUN_101625e3c();
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



/* Entry: 1016242b4; end: 10162430b;  */

uint FUN_1016242b4(undefined8 *param_1)

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
  FUN_101624574(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10162430c; end: 1016243ab;  */

/* WARNING: Possible PIC construction at 0x000101624358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101624368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162435c) */
/* WARNING: Removing unreachable block (ram,0x00010162436c) */

void FUN_10162430c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba848 != -1) {
    func_0x000107c61568(0x112dba848,FUN_101623f68);
  }
  uVar5 = uRam0000000113801a00;
  uVar4 = uRam00000001138019f8;
  uVar3 = uRam00000001138019f0;
  uVar2 = uRam00000001138019e8;
  uVar1 = uRam00000001138019e0;
  *param_1 = uRam00000001138019d8;
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



/* Entry: 1016243ac; end: 1016243e7;  */

void FUN_1016243ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba900;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba900,&UNK_10d96e768);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016243e8; end: 10162451b;  */

void FUN_1016243e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = *(undefined1 *)(unaff_x20 + 1);
  uStack_58 = unaff_x20[2];
  uStack_50 = unaff_x20[3];
  uStack_48 = *(undefined1 *)(unaff_x20 + 4);
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162451c; end: 101624573;  */

uint FUN_10162451c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101624574(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101624574; end: 1016246f3;  */

/* WARNING: Possible PIC construction at 0x0001016245f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001016245f4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101624574(ulong *param_1,ulong *param_2)

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
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  
  uVar15 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar15 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar15 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar15 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar15 != *param_2) {
    return (byte *)0x0;
  }
  pbVar12 = (byte *)param_1[2];
  pbVar14 = (byte *)param_1[3];
  pbVar16 = (byte *)param_2[2];
  pbVar18 = (byte *)param_2[3];
  if ((byte *)param_1[2] != (byte *)param_2[2] || (byte *)param_1[3] != (byte *)param_2[3]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar16,pbVar18,0);
    return pbVar12;
  }
  if ((((byte)param_1[4] ^ (byte)param_2[4]) & 1) != 0) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[5];
  pbVar26 = (byte *)param_1[6];
  uVar15 = param_2[5];
  uVar17 = param_2[6];
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
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar15 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)(uVar15 >> 0x20);
      if (SBORROW4(iVar20,(int)uVar15)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)uVar15)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
        if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,uVar15,uVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar25 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar13 + 8);
        pbVar18 = *(byte **)(pbVar13 + 0x10);
        lVar25 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar13;
        pbVar18 = *(byte **)(pbVar13 + 8);
        lVar25 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 != (byte *)0x0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar25);
            func_0x000107c61174();
            pbVar12 = pbVar24;
            func_0x000107c60118();
            func_0x000107c61170(pbVar24);
            func_0x000107c61170(lVar25);
            pbVar24 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar13;
        pbVar18 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar24, pbVar16 = *(byte **)(pbVar13 + 0x10),
           pbVar18 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar13 + 0x10);
      lVar25 = *(long *)(pbVar13 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar13 + 0x18),lVar25,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar24 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar13 + 0x20);
        lVar25 = *(long *)(pbVar13 + 0x18);
        bVar28 = pbVar13[8] | (byte)lVar25;
        bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar13[0x10] | (byte)lVar27;
        bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
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
      lVar27 = *(long *)(pbVar13 + 0x20);
      lVar25 = *(long *)(pbVar13 + 0x18);
      bVar28 = pbVar13[8] | (byte)lVar25;
      bVar29 = pbVar13[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar13[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar13[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar13[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar13[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar13[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar13[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar13[0x10] | (byte)lVar27;
      bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar15 = *(ulong *)(pbVar13 + 8);
    uVar17 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar11);
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



/* Entry: 1016246f4; end: 101624773;  */

void FUN_1016246f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96e270;
  func_0x000107c61520(&DAT_10d96e270,&UNK_1103e9cb0);
  puRam0000000112dba830 = puVar1;
  return;
}



/* Entry: 101624774; end: 101624e23;  */

uint FUN_101624774(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auStack_3f0 [96];
  ulong uStack_390;
  long lStack_388;
  ulong uStack_380;
  long lStack_378;
  ulong uStack_370;
  long lStack_368;
  ulong uStack_360;
  long lStack_358;
  ulong uStack_350;
  long lStack_348;
  ulong uStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  byte bStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  byte bStack_80;
  long lStack_78;
  long lStack_70;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar15 = param_1[10];
  lVar8 = param_1[9];
  lVar25 = param_1[0xc];
  lVar19 = param_1[0xb];
  lVar16 = param_1[0xe];
  lVar9 = param_1[0xd];
  lVar6 = param_1[0xf];
  lVar17 = param_2[10];
  lVar10 = param_2[9];
  lVar26 = param_2[0xc];
  lVar20 = param_2[0xb];
  lVar18 = param_2[0xe];
  lVar11 = param_2[0xd];
  lVar7 = param_2[0xf];
  lStack_150 = lVar10;
  lStack_148 = lVar17;
  lStack_140 = lVar20;
  lStack_138 = lVar26;
  lStack_130 = lVar11;
  lStack_128 = lVar18;
  lStack_120 = lVar7;
  lStack_110 = lVar8;
  lStack_108 = lVar15;
  lStack_100 = lVar19;
  lStack_f8 = lVar25;
  lStack_f0 = lVar9;
  lStack_e8 = lVar16;
  lStack_e0 = lVar6;
  if (lVar25 == 0) {
    if (lVar26 != 0) goto LAB_1016248e8;
    func_0x000101624638(&lStack_110,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    func_0x000101624638(&lStack_150,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    FUN_101623070(lVar8,lVar15,lVar19,0,lVar9,lVar16,lVar6);
LAB_101624a04:
    lVar6 = param_1[1];
    lVar7 = param_2[1];
    if ((char)param_2[2] == '\x01') {
      if (lVar7 == 0) {
        if (lVar6 == 0) goto LAB_101624a50;
      }
      else if (lVar7 == 1) {
        if (lVar6 == 1) {
LAB_101624a50:
          if ((((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0) &&
             (((*(byte *)((long)param_1 + 0x12) ^ *(byte *)((long)param_2 + 0x12)) & 1) == 0)) {
            uVar30 = (ulong)(param_1[3] != 0);
            if ((char)param_1[4] != '\x01') {
              uVar30 = param_1[3];
            }
            if ((char)param_2[4] == '\x01') {
              if (param_2[3] == 0) {
                if (uVar30 == 0) goto LAB_101624ab8;
              }
              else if (uVar30 == 1) {
LAB_101624ab8:
                lVar7 = param_1[0x15];
                uVar21 = param_1[0x14];
                lStack_178 = param_1[0x17];
                lStack_180 = param_1[0x16];
                lVar9 = param_1[0x13];
                uVar28 = param_1[0x12];
                lStack_188 = param_1[0x15];
                lStack_190 = param_1[0x14];
                lVar8 = param_1[0x17];
                uVar27 = param_1[0x16];
                lStack_168 = param_1[0x19];
                lStack_170 = param_1[0x18];
                lVar10 = param_1[0x19];
                uVar29 = param_1[0x18];
                lStack_158 = param_1[0x1b];
                lStack_160 = param_1[0x1a];
                lStack_1a8 = param_1[0x11];
                lStack_1b0 = param_1[0x10];
                lStack_198 = param_1[0x13];
                lStack_1a0 = param_1[0x12];
                lStack_2c8 = param_1[0x11];
                uVar30 = param_1[0x10];
                lStack_248 = param_2[0x15];
                lStack_250 = param_2[0x14];
                lStack_1d8 = param_2[0x17];
                lStack_1e0 = param_2[0x16];
                lStack_258 = param_2[0x13];
                lStack_260 = param_2[0x12];
                lStack_1e8 = param_2[0x15];
                lStack_1f0 = param_2[0x14];
                lStack_238 = param_2[0x17];
                lStack_240 = param_2[0x16];
                lStack_1c8 = param_2[0x19];
                lStack_1d0 = param_2[0x18];
                lStack_228 = param_2[0x19];
                lStack_230 = param_2[0x18];
                lStack_1b8 = param_2[0x1b];
                lStack_1c0 = param_2[0x1a];
                lStack_208 = param_2[0x11];
                lStack_210 = param_2[0x10];
                lStack_1f8 = param_2[0x13];
                lStack_200 = param_2[0x12];
                lStack_268 = param_2[0x11];
                lStack_270 = param_2[0x10];
                lVar6 = param_1[0x1b];
                uVar12 = param_1[0x1a];
                lStack_218 = param_2[0x1b];
                lStack_220 = param_2[0x1a];
                uStack_2d0 = uVar30;
                uStack_2c0 = uVar28;
                lStack_2b8 = lVar9;
                uStack_2b0 = uVar21;
                lStack_2a8 = lVar7;
                uStack_2a0 = uVar27;
                lStack_298 = lVar8;
                uStack_290 = uVar29;
                lStack_288 = lVar10;
                uStack_280 = uVar12;
                lStack_278 = lVar6;
                if (lStack_2c8 == 0) {
                  if (lStack_268 != 0) goto LAB_101624cc8;
                  func_0x000101624638(&lStack_1b0,&uStack_390,0x112dba800,&UNK_10d96e160);
                  func_0x000101624638(&lStack_210,&uStack_390,0x112dba800,&UNK_10d96e160);
LAB_101624ddc:
                  func_0x0001016246b4(&uStack_2d0,0x112dba800,&UNK_10d96e160);
                  uVar30 = param_1[5];
                  FUN_100e25fcc(uVar30,param_1[6],param_2[5],param_2[6]);
                  if ((uVar30 & 1) != 0) {
                    lVar6 = param_1[7];
                    FUN_100e25fcc(lVar6,param_1[8],param_2[7],param_2[8]);
                    uVar1 = (uint)lVar6;
                    goto LAB_101624978;
                  }
                }
                else {
                  if (lStack_268 == 0) {
LAB_101624cc8:
                    uStack_390 = uVar30;
                    lStack_388 = lStack_2c8;
                    uStack_380 = uVar28;
                    lStack_378 = lVar9;
                    uStack_370 = uVar21;
                    lStack_368 = lVar7;
                    uStack_360 = uVar27;
                    lStack_358 = lVar8;
                    uStack_350 = uVar29;
                    lStack_348 = lVar10;
                    uStack_340 = uVar12;
                    lStack_338 = lVar6;
                    lStack_330 = lStack_270;
                    lStack_328 = lStack_268;
                    lStack_320 = lStack_260;
                    lStack_318 = lStack_258;
                    lStack_310 = lStack_250;
                    lStack_308 = lStack_248;
                    lStack_300 = lStack_240;
                    lStack_2f8 = lStack_238;
                    lStack_2f0 = lStack_230;
                    lStack_2e8 = lStack_228;
                    lStack_2e0 = lStack_220;
                    lStack_2d8 = lStack_218;
                    func_0x000101624638(&lStack_1b0,auStack_3f0,0x112dba800,&UNK_10d96e160);
                    func_0x000101624638(&lStack_210,auStack_3f0,0x112dba800,&UNK_10d96e160);
                    uVar4 = 0x112dba808;
                    puVar5 = &UNK_10d96e168;
                    puVar3 = &uStack_390;
                  }
                  else {
                    lStack_388 = param_2[0x11];
                    uStack_390 = param_2[0x10];
                    lVar16 = param_2[0x13];
                    uVar22 = param_2[0x12];
                    lVar11 = param_2[0x15];
                    uVar13 = param_2[0x14];
                    lVar17 = param_2[0x17];
                    uVar23 = param_2[0x16];
                    lVar15 = param_2[0x19];
                    uVar14 = param_2[0x18];
                    lVar18 = param_2[0x1b];
                    uVar24 = param_2[0x1a];
                    uStack_380 = uVar22;
                    lStack_378 = lVar16;
                    uStack_370 = uVar13;
                    lStack_368 = lVar11;
                    uStack_360 = uVar23;
                    lStack_358 = lVar17;
                    uStack_350 = uVar14;
                    lStack_348 = lVar15;
                    uStack_340 = uVar24;
                    lStack_338 = lVar18;
                    if ((((((uVar30 == uStack_390) && (lStack_388 == lStack_2c8)) ||
                          (func_0x000107c605b8(), (uVar30 & 1) != 0)) &&
                         (((uVar28 == uVar22 && (lVar9 == lVar16)) ||
                          (func_0x000107c605b8(uVar28,lVar9,uVar22,lVar16,0), (uVar28 & 1) != 0))))
                        && (((uVar21 == uVar13 && (lVar7 == lVar11)) ||
                            (func_0x000107c605b8(uVar21,lVar7,uVar13,lVar11,0), (uVar21 & 1) != 0)))
                        ) && ((((uVar27 == uVar23 && (lVar8 == lVar17)) ||
                               (func_0x000107c605b8(uVar27,lVar8,uVar23,lVar17,0), (uVar27 & 1) != 0
                               )) && (((uVar29 == uVar14 && (lVar10 == lVar15)) ||
                                      (func_0x000107c605b8(), (uVar29 & 1) != 0)))))) {
                      func_0x000101624638(&lStack_1b0,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      func_0x000101624638(&lStack_210,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      FUN_100e25fcc(uVar12,lVar6,uVar24,lVar18);
                      func_0x0001016246b4(&uStack_390,0x112dba800,&UNK_10d96e160);
                      if ((uVar12 & 1) != 0) goto LAB_101624ddc;
                      uVar4 = 0x112dba800;
                      puVar5 = &UNK_10d96e160;
                      puVar3 = &uStack_2d0;
                    }
                    else {
                      uVar4 = 0x112dba800;
                      puVar5 = &UNK_10d96e160;
                      func_0x000101624638(&lStack_1b0,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      func_0x000101624638(&lStack_210,auStack_3f0,0x112dba800,&UNK_10d96e160);
                      func_0x0001016246b4(&uStack_390,0x112dba800,&UNK_10d96e160);
                      puVar3 = &uStack_2d0;
                    }
                  }
                  func_0x0001016246b4(puVar3,uVar4,puVar5);
                }
              }
            }
            else if (uVar30 == param_2[3]) goto LAB_101624ab8;
          }
        }
      }
      else if (lVar6 == 2) goto LAB_101624a50;
    }
    else if (lVar6 == lVar7) goto LAB_101624a50;
  }
  else {
    if (lVar26 != 0) {
      uStack_98 = (undefined1)lVar17;
      bStack_80 = (byte)lVar11 & 1;
      uStack_d0 = (undefined1)lVar15;
      bStack_b8 = (byte)lVar9 & 1;
      lStack_d8 = lVar8;
      lStack_c8 = lVar19;
      lStack_c0 = lVar25;
      lStack_b0 = lVar16;
      lStack_a8 = lVar6;
      lStack_a0 = lVar10;
      lStack_90 = lVar20;
      lStack_88 = lVar26;
      lStack_78 = lVar18;
      lStack_70 = lVar7;
      func_0x000101624638(&lStack_110,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
      func_0x000101624638(&lStack_150,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
      plVar2 = &lStack_d8;
      func_0x000101624574(plVar2,&lStack_a0);
      FUN_101623070(lVar10,lVar17,lVar20,lVar26,lVar11,lVar18,lVar7);
      FUN_101623070(lVar8,lVar15,lVar19,lVar25,lVar9,lVar16,lVar6);
      if (((ulong)plVar2 & 1) != 0) goto LAB_101624a04;
      goto LAB_101624974;
    }
LAB_1016248e8:
    func_0x000101624638(&lStack_110,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    func_0x000101624638(&lStack_150,&uStack_2d0,0x112dba7f8,&UNK_10d96e158);
    FUN_101623070(lVar8,lVar15,lVar19,lVar25,lVar9,lVar16,lVar6);
    FUN_101623070(lVar10,lVar17,lVar20,lVar26,lVar11,lVar18,lVar7);
  }
LAB_101624974:
  uVar1 = 0;
LAB_101624978:
  return uVar1 & 1;
}



/* Entry: 101624e24; end: 101624ee3;  */

void FUN_101624e24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e510;
  func_0x000107c61520(&UNK_10d96e510,&UNK_1103e9db8);
  puRam0000000112dba840 = puVar1;
  return;
}



/* Entry: 101624ee4; end: 101624ef7;  */

void FUN_101624ee4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101624ef8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101624f38)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101624ef8; end: 101624fa3;  */

void FUN_101624ef8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e208;
  func_0x000107c61520(&UNK_10d96e208,&UNK_1103e9c20);
  puRam0000000112dba860 = puVar1;
  return;
}



/* Entry: 101624fa4; end: 101624fa7;  */

void FUN_101624fa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e248;
  func_0x000107c61520(&UNK_10d96e248,&UNK_1103e9c20);
  puRam0000000112dba880 = puVar1;
  return;
}



/* Entry: 101624fa8; end: 101624fe7;  */

void FUN_101624fa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e248;
  func_0x000107c61520(&UNK_10d96e248,&UNK_1103e9c20);
  puRam0000000112dba880 = puVar1;
  return;
}



/* Entry: 101624fe8; end: 101624ffb;  */

void FUN_101624fe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101624ffc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10162503c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101624ffc; end: 1016250a7;  */

void FUN_101624ffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e308;
  func_0x000107c61520(&UNK_10d96e308,&UNK_1103e9cb0);
  puRam0000000112dba888 = puVar1;
  return;
}



/* Entry: 1016250a8; end: 1016250ab;  */

void FUN_1016250a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e348;
  func_0x000107c61520(&UNK_10d96e348,&UNK_1103e9cb0);
  puRam0000000112dba8a8 = puVar1;
  return;
}



/* Entry: 1016250ac; end: 1016250eb;  */

void FUN_1016250ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e348;
  func_0x000107c61520(&UNK_10d96e348,&UNK_1103e9cb0);
  puRam0000000112dba8a8 = puVar1;
  return;
}



/* Entry: 1016250ec; end: 1016250ff;  */

void FUN_1016250ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101625100();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101625140)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101625100; end: 1016251ab;  */

void FUN_101625100(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e408;
  func_0x000107c61520(&UNK_10d96e408,&UNK_1103e9d40);
  puRam0000000112dba8b0 = puVar1;
  return;
}



/* Entry: 1016251ac; end: 1016251ef;  */

void FUN_1016251ac(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1016251f0; end: 1016251f3;  */

void FUN_1016251f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e448;
  func_0x000107c61520(&UNK_10d96e448,&UNK_1103e9d40);
  puRam0000000112dba8d0 = puVar1;
  return;
}



/* Entry: 1016251f4; end: 101625233;  */

void FUN_1016251f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e448;
  func_0x000107c61520(&UNK_10d96e448,&UNK_1103e9d40);
  puRam0000000112dba8d0 = puVar1;
  return;
}



/* Entry: 101625234; end: 101625257;  */

void FUN_101625234(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101625258();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101625258; end: 101625297;  */

void FUN_101625258(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e4e8;
  func_0x000107c61520(&UNK_10d96e4e8,&UNK_1103e9db8);
  puRam0000000112dba8d8 = puVar1;
  return;
}



/* Entry: 101625298; end: 1016252af;  */

void FUN_101625298(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101624e24();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101618680)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016252b0; end: 1016252ef;  */

void FUN_1016252b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e550;
  func_0x000107c61520(&UNK_10d96e550,&UNK_1103e9db8);
  puRam0000000112dba8e0 = puVar1;
  return;
}



/* Entry: 1016252f0; end: 101625313;  */

void FUN_1016252f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101625314();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101625314; end: 101625353;  */

void FUN_101625314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e5c0;
  func_0x000107c61520(&UNK_10d96e5c0,&UNK_1103e9e58);
  puRam0000000112dba8e8 = puVar1;
  return;
}



/* Entry: 101625354; end: 101625367;  */

void FUN_101625354(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101624ea4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101625398();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101625368; end: 101625397;  */

void FUN_101625368(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101625398; end: 1016253d7;  */

void FUN_101625398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96e578;
  func_0x000107c61520(&DAT_10d96e578,&UNK_1103e9e58);
  puRam0000000112dba8f0 = puVar1;
  return;
}



/* Entry: 1016253d8; end: 1016253db;  */

void FUN_1016253d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e628;
  func_0x000107c61520(&UNK_10d96e628,&UNK_1103e9e58);
  puRam0000000112dba8f8 = puVar1;
  return;
}



/* Entry: 1016253dc; end: 10162541b;  */

void FUN_1016253dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba8f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e628;
  func_0x000107c61520(&UNK_10d96e628,&UNK_1103e9e58);
  puRam0000000112dba8f8 = puVar1;
  return;
}



/* Entry: 10162541c; end: 101625457;  */

void FUN_10162541c(void)

{
  return;
}



/* Entry: 101625458; end: 1016254d7;  */

/* WARNING: Possible PIC construction at 0x000101625470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162548c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101625474) */
/* WARNING: Removing unreachable block (ram,0x000101625490) */
/* WARNING: Removing unreachable block (ram,0x0001016254cc) */
/* WARNING: Removing unreachable block (ram,0x000101625498) */
/* WARNING: Removing unreachable block (ram,0x000101625484) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101625458(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1016254d8; end: 10162598b;  */

undefined8 * FUN_1016254d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)((long)param_2 + 0x11);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  func_0x00010006c00c(uVar5,uVar6);
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  func_0x00010006c00c(uVar5,uVar6);
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  lVar4 = param_2[0xc];
  if (lVar4 == 0) {
    uVar5 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0xf] = param_2[0xf];
    lVar4 = param_2[0x11];
  }
  else {
    param_1[9] = param_2[9];
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar4;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    uVar5 = param_2[0xe];
    uVar6 = param_2[0xf];
    func_0x000107c61434();
    func_0x00010006c00c(uVar5,uVar6);
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar6;
    lVar4 = param_2[0x11];
  }
  if (lVar4 == 0) {
    uVar5 = param_2[0x14];
    uVar7 = param_2[0x17];
    uVar6 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar5;
    param_1[0x17] = uVar7;
    param_1[0x16] = uVar6;
    uVar5 = param_2[0x18];
    uVar7 = param_2[0x1b];
    uVar6 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar5;
    param_1[0x1b] = uVar7;
    param_1[0x1a] = uVar6;
    uVar5 = param_2[0x10];
    uVar7 = param_2[0x13];
    uVar6 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar5;
    param_1[0x13] = uVar7;
    param_1[0x12] = uVar6;
  }
  else {
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = lVar4;
    uVar6 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar6;
    uVar7 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar7;
    uVar1 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar1;
    uVar2 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar2;
    uVar5 = param_2[0x1a];
    uVar3 = param_2[0x1b];
    func_0x000107c61434();
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0x1a] = uVar5;
    param_1[0x1b] = uVar3;
  }
  return param_1;
}


