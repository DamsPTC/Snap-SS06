/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035c8830; end: 1035c88c3;  */

void FUN_1035c8830(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x288;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035cb27c();
  (*pcVar2)(param_2 + 0x288,&UNK_110675618,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035c88c4; end: 1035c892f;  */

void FUN_1035c88c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_1035c8930(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1035c8930; end: 1035c8b1b;  */

/* WARNING: Removing unreachable block (ram,0x0001035c8ab0) */

void FUN_1035c8930(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  FUN_1035c8b1c();
  if (unaff_x21 == 0) {
    FUN_1035c8bbc(param_1,param_2,param_3,param_4);
    FUN_1035c8c64(param_1,param_2,param_3,param_4);
    FUN_1035c8d0c(param_1,param_2,param_3,param_4);
    FUN_1035c8db4(param_1,param_2,param_3,param_4);
    FUN_1035c8e5c(param_1,param_2,param_3,param_4);
    FUN_1035c8f04(param_1,param_2,param_3,param_4);
    FUN_1035c8fac(param_1,param_2,param_3,param_4);
    FUN_1035c9054(param_1,param_2,param_3,param_4);
    FUN_1035c90fc(param_1,param_2,param_3,param_4);
    lVar1 = param_1 + 0x100;
    func_0x000107c61428(lVar1,auStack_58,0,0);
    if (*(long *)(param_1 + 0x100) != 0) {
      uStack_60 = *(undefined1 *)(param_1 + 0x108);
      pcVar2 = *(code **)(param_4 + 0x80);
      lStack_68 = *(long *)(param_1 + 0x100);
      func_0x0001035cb23c();
      (*pcVar2)(&lStack_68,0xb,&UNK_11066a948,lVar1,param_3,param_4);
    }
    FUN_1035c919c(param_1,param_2,param_3,param_4);
    FUN_1035c9240(param_1,param_2,param_3,param_4);
    FUN_1035c92ec(param_1,param_2,param_3,param_4);
    FUN_1035c93b8(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1035c8b1c; end: 1035c8bbb;  */

void FUN_1035c8b1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035c8bbc; end: 1035c8c63;  */

void FUN_1035c8bbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x28) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x28) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,2,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c8c64; end: 1035c8d0b;  */

void FUN_1035c8c64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x40) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x40) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,3,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c8d0c; end: 1035c8db3;  */

void FUN_1035c8d0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x68);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,4,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c8db4; end: 1035c8e5b;  */

void FUN_1035c8db4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x70) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x70) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,5,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c8e5c; end: 1035c8f03;  */

void FUN_1035c8e5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x98);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x90);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0x88);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar2)(auStack_70,6,&UNK_110790b00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c8f04; end: 1035c8fab;  */

void FUN_1035c8f04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xa0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xb0);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0xa8);
    auStack_70[0] = (undefined4)*(undefined8 *)(param_1 + 0xa0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar2)(auStack_70,7,&UNK_110790980,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c8fac; end: 1035c9053;  */

void FUN_1035c8fac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xb8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xb8) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0xb8) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 200);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,8,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c9054; end: 1035c90fb;  */

void FUN_1035c9054(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0xd0) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0xd0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    uStack_68 = *(undefined8 *)(param_1 + 0xd8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,9,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c90fc; end: 1035c919b;  */

void FUN_1035c90fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_60 = *(long *)(param_1 + 0xf8);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xe8);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001035c4674();
    (*pcVar2)(&uStack_70,10,&UNK_110675968,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c919c; end: 1035c923f;  */

void FUN_1035c919c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x118);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x110);
    uStack_60 = *(undefined8 *)(param_1 + 0x128);
    uStack_68 = *(undefined8 *)(param_1 + 0x120);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0xc,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c9240; end: 1035c92eb;  */

void FUN_1035c9240(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x130;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x130) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x130) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x140);
    uStack_68 = *(undefined8 *)(param_1 + 0x138);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0xd,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035c92ec; end: 1035c93b7;  */

void FUN_1035c92ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_418 [320];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  func_0x000107c61428(param_1 + 0x148,auStack_2d8,0,0);
  func_0x000107c610b4(auStack_2c0,param_1 + 0x148,0x140);
  func_0x000107c610b4(auStack_180,param_1 + 0x148,0x140);
  iVar1 = (int)auStack_2c0;
  func_0x00010161830c();
  if (iVar1 != 1) {
    puVar2 = auStack_418;
    func_0x000107c610b4(puVar2,auStack_180,0x140);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000101618238();
    (*pcVar3)(auStack_418,0xe,&UNK_110676400,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035c93b8; end: 1035c9483;  */

void FUN_1035c93b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_3b8 [288];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [288];
  undefined1 auStack_160 [288];
  
  func_0x000107c61428(param_1 + 0x288,auStack_298,0,0);
  func_0x000107c610b4(auStack_280,param_1 + 0x288,0x120);
  func_0x000107c610b4(auStack_160,param_1 + 0x288,0x120);
  iVar1 = (int)auStack_280;
  FUN_1035cac44();
  if (iVar1 != 1) {
    puVar2 = auStack_3b8;
    func_0x000107c610b4(puVar2,auStack_160,0x120);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001035cb27c();
    (*pcVar3)(auStack_3b8,0xf,&UNK_110675618,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1035c9484; end: 1035c9533;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035c9484(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    FUN_1035c9534(param_3,param_6);
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



/* Entry: 1035c9534; end: 1035ca71f;  */

undefined8 FUN_1035c9534(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_1448 [320];
  undefined1 auStack_1308 [320];
  undefined1 auStack_11c8 [288];
  undefined1 auStack_10a8 [288];
  undefined1 auStack_f88 [288];
  undefined1 auStack_e68 [24];
  undefined1 auStack_e50 [24];
  undefined1 auStack_e38 [288];
  undefined1 auStack_d18 [640];
  undefined1 auStack_a98 [288];
  undefined1 auStack_978 [32];
  undefined1 auStack_958 [320];
  undefined1 auStack_818 [24];
  undefined1 auStack_800 [24];
  undefined1 auStack_7e8 [320];
  undefined1 auStack_6a8 [320];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [320];
  undefined1 auStack_1b8 [328];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_310,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_328,0,0);
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  lVar13 = *(long *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  lVar14 = *(long *)(param_2 + 0x20);
  if (lVar13 == 0) {
    if (lVar14 != 0) goto LAB_1035c9628;
    FUN_1035cabec(uVar3,uVar9,0);
    FUN_1035cabec(uVar11,uVar7,0);
    func_0x0001035cac18(uVar3,uVar9,0);
  }
  else {
    if (lVar14 == 0) goto LAB_1035c9628;
    FUN_1035cabec(uVar3,uVar9,lVar13);
    FUN_1035cabec(uVar11,uVar7,lVar14);
    uVar8 = uVar3;
    FUN_1035d8f6c(uVar3,uVar9,lVar13,uVar11,uVar7,lVar14);
    func_0x0001035cac18(uVar11,uVar7,lVar14);
    func_0x0001035cac18(uVar3,uVar9,lVar13);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x28,auStack_340,0,0);
  func_0x000107c61428(param_2 + 0x28,auStack_358,0,0);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(ulong *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(ulong *)(param_2 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x30);
  uVar11 = *(undefined8 *)(param_2 + 0x38);
  uVar9 = uVar7;
  uVar2 = uVar12;
  uVar10 = uVar3;
  if ((uVar3 & 0xff) == 2) {
    if ((uVar8 & 0xff) == 2) {
      func_0x000101541464(uVar3,uVar12,uVar7);
      func_0x000101541464(uVar8,uVar4,uVar11);
LAB_1035c9714:
      func_0x000101556278(uVar3,uVar12,uVar7);
      func_0x000107c61428(param_1 + 0x40,auStack_370,0,0);
      func_0x000107c61428(param_2 + 0x40,auStack_388,0,0);
      uVar3 = *(ulong *)(param_1 + 0x40);
      uVar12 = *(ulong *)(param_1 + 0x48);
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      uVar8 = *(ulong *)(param_2 + 0x40);
      uVar4 = *(ulong *)(param_2 + 0x48);
      uVar11 = *(undefined8 *)(param_2 + 0x50);
      uVar9 = uVar7;
      uVar2 = uVar12;
      uVar10 = uVar3;
      if ((uVar3 & 0xff) == 2) {
        if ((uVar8 & 0xff) == 2) {
          func_0x000101541464(uVar3,uVar12,uVar7);
          func_0x000101541464(uVar8,uVar4,uVar11);
LAB_1035c979c:
          func_0x000101556278(uVar3,uVar12,uVar7);
          func_0x000107c61428(param_1 + 0x58,auStack_3a0,0,0);
          func_0x000107c61428(param_2 + 0x58,auStack_3b8,0,0);
          uVar11 = *(undefined8 *)(param_1 + 0x58);
          uVar3 = *(ulong *)(param_1 + 0x60);
          uVar8 = *(ulong *)(param_1 + 0x68);
          uVar9 = *(undefined8 *)(param_2 + 0x58);
          uVar7 = *(undefined8 *)(param_2 + 0x60);
          uVar12 = *(ulong *)(param_2 + 0x68);
          if (uVar8 >> 0x3c < 0xf) {
            if (0xe < uVar12 >> 0x3c) goto LAB_1035c994c;
            func_0x000100d56234(uVar11,uVar3,uVar8);
            func_0x000100d56234(uVar9,uVar7,uVar12);
            if ((float)uVar11 == (float)uVar9) {
              uVar4 = uVar3;
              func_0x000100e25fcc(uVar3,uVar8,uVar7,uVar12);
              func_0x000100d56250(uVar9,uVar7,uVar12);
              if ((uVar4 & 1) == 0) goto LAB_1035c9ea4;
              goto LAB_1035c9a1c;
            }
LAB_1035c9e94:
            func_0x000100d56250(uVar9,uVar7,uVar12);
LAB_1035c9ea4:
            func_0x000100d56250(uVar11,uVar3,uVar8);
            return 0;
          }
          if (uVar12 >> 0x3c < 0xf) goto LAB_1035c994c;
          func_0x000100d56234(uVar11,uVar3,uVar8);
          func_0x000100d56234(uVar9,uVar7,uVar12);
LAB_1035c9a1c:
          func_0x000100d56250(uVar11,uVar3,uVar8);
          func_0x000107c61428(param_1 + 0x70,auStack_3d0,0,0);
          func_0x000107c61428(param_2 + 0x70,auStack_3e8,0,0);
          uVar3 = *(ulong *)(param_1 + 0x70);
          uVar12 = *(ulong *)(param_1 + 0x78);
          uVar7 = *(undefined8 *)(param_1 + 0x80);
          uVar8 = *(ulong *)(param_2 + 0x70);
          uVar4 = *(ulong *)(param_2 + 0x78);
          uVar11 = *(undefined8 *)(param_2 + 0x80);
          uVar9 = uVar7;
          uVar2 = uVar12;
          uVar10 = uVar3;
          if ((uVar3 & 0xff) == 2) {
            if ((uVar8 & 0xff) == 2) {
              func_0x000101541464(uVar3,uVar12,uVar7);
              func_0x000101541464(uVar8,uVar4,uVar11);
LAB_1035c9aa4:
              func_0x000101556278(uVar3,uVar12,uVar7);
              func_0x000107c61428(param_1 + 0x88,auStack_400,0,0);
              func_0x000107c61428(param_2 + 0x88,auStack_418,0,0);
              uVar11 = *(undefined8 *)(param_1 + 0x88);
              uVar3 = *(ulong *)(param_1 + 0x90);
              uVar8 = *(ulong *)(param_1 + 0x98);
              uVar9 = *(undefined8 *)(param_2 + 0x88);
              uVar7 = *(undefined8 *)(param_2 + 0x90);
              uVar12 = *(ulong *)(param_2 + 0x98);
              if (uVar8 >> 0x3c < 0xf) {
                if (0xe < uVar12 >> 0x3c) goto LAB_1035c994c;
                func_0x000100d56234(uVar11,uVar3,uVar8);
                func_0x000100d56234(uVar9,uVar7,uVar12);
                if ((int)uVar11 != (int)uVar9) goto LAB_1035c9e94;
                uVar4 = uVar3;
                func_0x000100e25fcc(uVar3,uVar8,uVar7,uVar12);
                func_0x000100d56250(uVar9,uVar7,uVar12);
                if ((uVar4 & 1) == 0) goto LAB_1035c9ea4;
              }
              else {
                if (uVar12 >> 0x3c < 0xf) goto LAB_1035c994c;
                func_0x000100d56234(uVar11,uVar3,uVar8);
                func_0x000100d56234(uVar9,uVar7,uVar12);
              }
              func_0x000100d56250(uVar11,uVar3,uVar8);
              func_0x000107c61428(param_1 + 0xa0,auStack_430,0,0);
              func_0x000107c61428(param_2 + 0xa0,auStack_448,0,0);
              uVar11 = *(undefined8 *)(param_1 + 0xa0);
              uVar3 = *(ulong *)(param_1 + 0xa8);
              uVar8 = *(ulong *)(param_1 + 0xb0);
              uVar9 = *(undefined8 *)(param_2 + 0xa0);
              uVar7 = *(undefined8 *)(param_2 + 0xa8);
              uVar12 = *(ulong *)(param_2 + 0xb0);
              if (uVar8 >> 0x3c < 0xf) {
                if (0xe < uVar12 >> 0x3c) goto LAB_1035c994c;
                func_0x000100d56234(uVar11,uVar3,uVar8);
                func_0x000100d56234(uVar9,uVar7,uVar12);
                if ((float)uVar11 != (float)uVar9) goto LAB_1035c9e94;
                uVar4 = uVar3;
                func_0x000100e25fcc(uVar3,uVar8,uVar7,uVar12);
                func_0x000100d56250(uVar9,uVar7,uVar12);
                if ((uVar4 & 1) == 0) goto LAB_1035c9ea4;
              }
              else {
                if (uVar12 >> 0x3c < 0xf) {
LAB_1035c994c:
                  func_0x000100d56234(uVar11,uVar3,uVar8);
                  func_0x000100d56234(uVar9,uVar7,uVar12);
                  func_0x000100d56250(uVar11,uVar3,uVar8);
                  func_0x000100d56250(uVar9,uVar7,uVar12);
                  return 0;
                }
                func_0x000100d56234(uVar11,uVar3,uVar8);
                func_0x000100d56234(uVar9,uVar7,uVar12);
              }
              func_0x000100d56250(uVar11,uVar3,uVar8);
              func_0x000107c61428(param_1 + 0xb8,auStack_460,0,0);
              func_0x000107c61428(param_2 + 0xb8,auStack_478,0,0);
              uVar3 = *(ulong *)(param_1 + 0xb8);
              uVar12 = *(ulong *)(param_1 + 0xc0);
              uVar7 = *(undefined8 *)(param_1 + 200);
              uVar8 = *(ulong *)(param_2 + 0xb8);
              uVar4 = *(ulong *)(param_2 + 0xc0);
              uVar11 = *(undefined8 *)(param_2 + 200);
              uVar9 = uVar7;
              uVar2 = uVar12;
              uVar10 = uVar3;
              if ((uVar3 & 0xff) == 2) {
                if ((uVar8 & 0xff) == 2) {
                  func_0x000101541464(uVar3,uVar12,uVar7);
                  func_0x000101541464(uVar8,uVar4,uVar11);
LAB_1035c9d5c:
                  func_0x000101556278(uVar3,uVar12,uVar7);
                  func_0x000107c61428(param_1 + 0xd0,auStack_490,0,0);
                  func_0x000107c61428(param_2 + 0xd0,auStack_4a8,0,0);
                  uVar3 = *(ulong *)(param_1 + 0xd0);
                  uVar12 = *(ulong *)(param_1 + 0xd8);
                  uVar7 = *(undefined8 *)(param_1 + 0xe0);
                  uVar8 = *(ulong *)(param_2 + 0xd0);
                  uVar4 = *(ulong *)(param_2 + 0xd8);
                  uVar11 = *(undefined8 *)(param_2 + 0xe0);
                  uVar9 = uVar7;
                  uVar2 = uVar12;
                  uVar10 = uVar3;
                  if ((uVar3 & 0xff) == 2) {
                    if ((uVar8 & 0xff) == 2) {
                      func_0x000101541464(uVar3,uVar12,uVar7);
                      func_0x000101541464(uVar8,uVar4,uVar11);
LAB_1035c9ddc:
                      func_0x000101556278(uVar3,uVar12,uVar7);
                      func_0x000107c61428(param_1 + 0xe8,auStack_4c0,0,0);
                      func_0x000107c61428(param_2 + 0xe8,auStack_4d8,0,0);
                      uVar3 = *(ulong *)(param_1 + 0xe8);
                      uVar9 = *(undefined8 *)(param_1 + 0xf0);
                      lVar13 = *(long *)(param_1 + 0xf8);
                      uVar11 = *(undefined8 *)(param_2 + 0xe8);
                      uVar7 = *(undefined8 *)(param_2 + 0xf0);
                      lVar14 = *(long *)(param_2 + 0xf8);
                      if (lVar13 == 0) {
                        if (lVar14 != 0) goto LAB_1035c9628;
                        FUN_1035cabec(uVar3,uVar9,0);
                        FUN_1035cabec(uVar11,uVar7,0);
                        func_0x0001035cac18(uVar3,uVar9,0);
                      }
                      else {
                        if (lVar14 == 0) {
LAB_1035c9628:
                          FUN_1035cabec(uVar3,uVar9,lVar13);
                          FUN_1035cabec(uVar11,uVar7,lVar14);
                          func_0x0001035cac18(uVar3,uVar9,lVar13);
                          func_0x0001035cac18(uVar11,uVar7,lVar14);
                          return 0;
                        }
                        FUN_1035cabec(uVar3,uVar9,lVar13);
                        FUN_1035cabec(uVar11,uVar7,lVar14);
                        uVar8 = uVar3;
                        FUN_1036561f0(uVar3,uVar9,lVar13,uVar11,uVar7,lVar14);
                        func_0x0001035cac18(uVar11,uVar7,lVar14);
                        func_0x0001035cac18(uVar3,uVar9,lVar13);
                        if ((uVar8 & 1) == 0) {
                          return 0;
                        }
                      }
                      func_0x000107c61428(param_1 + 0x100,auStack_4f0,0,0);
                      lVar14 = *(long *)(param_1 + 0x100);
                      func_0x000107c61428(param_2 + 0x100,auStack_508,0,0);
                      lVar13 = *(long *)(param_2 + 0x100);
                      if (*(char *)(param_2 + 0x108) == '\x01') {
                        if (lVar13 < 3) {
                          if (lVar13 == 0) {
                            if (lVar14 != 0) {
                              return 0;
                            }
                          }
                          else if (lVar13 == 1) {
                            if (lVar14 != 1) {
                              return 0;
                            }
                          }
                          else if (lVar14 != 2) {
                            return 0;
                          }
                        }
                        else if (lVar13 == 3) {
                          if (lVar14 != 3) {
                            return 0;
                          }
                        }
                        else if (lVar13 == 4) {
                          if (lVar14 != 4) {
                            return 0;
                          }
                        }
                        else if (lVar14 != 5) {
                          return 0;
                        }
                      }
                      else if (lVar14 != lVar13) {
                        return 0;
                      }
                      func_0x000107c61428(param_1 + 0x110,auStack_520,0,0);
                      func_0x000107c61428(param_2 + 0x110,auStack_538,0,0);
                      uVar3 = *(ulong *)(param_1 + 0x110);
                      lVar13 = *(long *)(param_1 + 0x118);
                      uVar8 = *(ulong *)(param_1 + 0x120);
                      uVar9 = *(undefined8 *)(param_1 + 0x128);
                      uVar12 = *(ulong *)(param_2 + 0x110);
                      lVar14 = *(long *)(param_2 + 0x118);
                      uVar11 = *(undefined8 *)(param_2 + 0x120);
                      uVar7 = *(undefined8 *)(param_2 + 0x128);
                      if (lVar13 == 0) {
                        if (lVar14 != 0) goto LAB_1035ca0fc;
                        func_0x000101597350(uVar3,0,uVar8,uVar9);
                        func_0x000101597350(uVar12,0,uVar11,uVar7);
                      }
                      else {
                        if (lVar14 == 0) {
LAB_1035ca0fc:
                          func_0x000101597350(uVar3,lVar13,uVar8,uVar9);
                          func_0x000101597350(uVar12,lVar14,uVar11,uVar7);
                          func_0x000101597ae4(uVar3,lVar13,uVar8,uVar9);
                          func_0x000101597ae4(uVar12,lVar14,uVar11,uVar7);
                          return 0;
                        }
                        if (((uVar3 != uVar12) || (lVar13 != lVar14)) &&
                           (uVar4 = uVar3, func_0x000107c605b8(uVar3,lVar13,uVar12,lVar14,0),
                           (uVar4 & 1) == 0)) {
                          func_0x000101597350(uVar3,lVar13,uVar8,uVar9);
                          func_0x000101597350(uVar12,lVar14,uVar11,uVar7);
                          func_0x000101597ae4(uVar12,lVar14,uVar11,uVar7);
LAB_1035ca3c4:
                          func_0x000101597ae4(uVar3,lVar13,uVar8,uVar9);
                          return 0;
                        }
                        func_0x000101597350(uVar3,lVar13,uVar8,uVar9);
                        func_0x000101597350(uVar12,lVar14,uVar11,uVar7);
                        uVar4 = uVar8;
                        func_0x000100e25fcc(uVar8,uVar9,uVar11,uVar7);
                        func_0x000101597ae4(uVar12,lVar14,uVar11,uVar7);
                        if ((uVar4 & 1) == 0) goto LAB_1035ca3c4;
                      }
                      func_0x000101597ae4(uVar3,lVar13,uVar8,uVar9);
                      func_0x000107c61428(param_1 + 0x130,auStack_550,0,0);
                      func_0x000107c61428(param_2 + 0x130,auStack_568,0,0);
                      uVar3 = *(ulong *)(param_1 + 0x130);
                      uVar12 = *(ulong *)(param_1 + 0x138);
                      uVar7 = *(undefined8 *)(param_1 + 0x140);
                      uVar8 = *(ulong *)(param_2 + 0x130);
                      uVar4 = *(ulong *)(param_2 + 0x138);
                      uVar11 = *(undefined8 *)(param_2 + 0x140);
                      uVar9 = uVar7;
                      uVar2 = uVar12;
                      uVar10 = uVar3;
                      if ((uVar3 & 0xff) == 2) {
                        if ((uVar8 & 0xff) == 2) {
                          func_0x000101541464(uVar3,uVar12,uVar7);
                          func_0x000101541464(uVar8,uVar4,uVar11);
LAB_1035ca228:
                          func_0x000101556278(uVar3,uVar12,uVar7);
                          func_0x000107c61428(param_1 + 0x148,auStack_800,0,0);
                          func_0x000107c61428(param_2 + 0x148,auStack_818,0,0);
                          func_0x000107c610b4(auStack_7e8,param_1 + 0x148,0x140);
                          func_0x000107c610b4(auStack_a98,param_1 + 0x148,0x140);
                          func_0x000107c610b4(auStack_6a8,param_2 + 0x148,0x140);
                          func_0x000107c610b4(auStack_958,param_2 + 0x148,0x140);
                          iVar1 = (int)auStack_a98;
                          func_0x00010161830c();
                          if (iVar1 == 1) {
                            iVar1 = (int)auStack_958;
                            func_0x00010161830c();
                            if (iVar1 != 1) {
LAB_1035ca3fc:
                              func_0x000107c610b4(auStack_d18,auStack_a98,0x280);
                              FUN_1035cac6c(auStack_7e8,auStack_1b8,0x112dba328,&UNK_10d96ce10);
                              FUN_1035cac6c(auStack_6a8,auStack_1b8,0x112dba328,&UNK_10d96ce10);
                              uVar11 = 0x112f79850;
                              puVar6 = &UNK_10dbddcf0;
                              goto LAB_1035ca670;
                            }
                            func_0x000107c610b4(auStack_d18,auStack_a98,0x140);
                            FUN_1035cac6c(auStack_7e8,auStack_1b8,0x112dba328,&UNK_10d96ce10);
                            FUN_1035cac6c(auStack_6a8,auStack_1b8,0x112dba328,&UNK_10d96ce10);
                            FUN_1035cad0c(auStack_d18,0x112dba328,&UNK_10d96ce10);
                          }
                          else {
                            func_0x000107c610b4(auStack_d18,auStack_a98,0x140);
                            iVar1 = (int)auStack_958;
                            func_0x00010161830c();
                            if (iVar1 == 1) goto LAB_1035ca3fc;
                            func_0x000107c610b4(auStack_1308,auStack_958,0x140);
                            func_0x000107c610b4(auStack_1b8,auStack_958,0x140);
                            func_0x000107c610b4(auStack_2f8,auStack_d18,0x140);
                            FUN_1035cac6c(auStack_7e8,auStack_1448,0x112dba328,&UNK_10d96ce10);
                            FUN_1035cac6c(auStack_6a8,auStack_1448,0x112dba328,&UNK_10d96ce10);
                            puVar5 = auStack_2f8;
                            FUN_103667fe0(puVar5,auStack_1b8);
                            FUN_1035cad0c(auStack_1308,0x112dba328,&UNK_10d96ce10);
                            FUN_1035cad0c(auStack_a98,0x112dba328,&UNK_10d96ce10);
                            if (((ulong)puVar5 & 1) == 0) {
                              return 0;
                            }
                          }
                          func_0x000107c61428(param_1 + 0x288,auStack_e50,0,0);
                          func_0x000107c61428(param_2 + 0x288,auStack_e68,0,0);
                          func_0x000107c610b4(auStack_e38,param_1 + 0x288,0x120);
                          func_0x000107c610b4(auStack_a98,param_1 + 0x288,0x120);
                          func_0x000107c610b4(auStack_1448,param_2 + 0x288,0x120);
                          func_0x000107c610b4(auStack_978,param_2 + 0x288,0x120);
                          iVar1 = (int)auStack_a98;
                          FUN_1035cac44();
                          if (iVar1 == 1) {
                            iVar1 = (int)auStack_978;
                            FUN_1035cac44();
                            if (iVar1 == 1) {
                              func_0x000107c610b4(auStack_d18,auStack_a98,0x120);
                              FUN_1035cac6c(auStack_e38,auStack_1308,0x112f7bc88,&UNK_10dbe2db8);
                              FUN_1035cac6c(auStack_1448,auStack_1308,0x112f7bc88,&UNK_10dbe2db8);
                              FUN_1035cad0c(auStack_d18,0x112f7bc88,&UNK_10dbe2db8);
                              return 1;
                            }
                          }
                          else {
                            func_0x000107c610b4(auStack_f88,auStack_a98,0x120);
                            iVar1 = (int)auStack_978;
                            FUN_1035cac44();
                            if (iVar1 != 1) {
                              func_0x000107c610b4(auStack_10a8,auStack_978,0x120);
                              func_0x000107c610b4(auStack_d18,auStack_978,0x120);
                              func_0x000107c610b4(auStack_1308,auStack_f88,0x120);
                              FUN_1035cac6c(auStack_e38,auStack_11c8,0x112f7bc88,&UNK_10dbe2db8);
                              FUN_1035cac6c(auStack_1448,auStack_11c8,0x112f7bc88,&UNK_10dbe2db8);
                              puVar5 = auStack_1308;
                              FUN_10364e2c8(puVar5,auStack_d18);
                              FUN_1035cad0c(auStack_10a8,0x112f7bc88,&UNK_10dbe2db8);
                              FUN_1035cad0c(auStack_a98,0x112f7bc88,&UNK_10dbe2db8);
                              if (((ulong)puVar5 & 1) == 0) {
                                return 0;
                              }
                              return 1;
                            }
                          }
                          func_0x000107c610b4(auStack_d18,auStack_a98,0x240);
                          FUN_1035cac6c(auStack_e38,auStack_1308,0x112f7bc88,&UNK_10dbe2db8);
                          FUN_1035cac6c(auStack_1448,auStack_1308,0x112f7bc88,&UNK_10dbe2db8);
                          uVar11 = 0x112f7bc90;
                          puVar6 = &UNK_10dbe2dc0;
LAB_1035ca670:
                          FUN_1035cad0c(auStack_d18,uVar11,puVar6);
                          return 0;
                        }
                      }
                      else if ((uVar8 & 0xff) != 2) {
                        func_0x000101541464(uVar3,uVar12,uVar7);
                        func_0x000101541464(uVar8,uVar4,uVar11);
                        if ((((uint)uVar8 ^ (uint)uVar3) & 1) != 0) goto LAB_1035c98f8;
                        func_0x000100e25fcc(uVar12,uVar7,uVar4,uVar11);
                        func_0x000101556278(uVar8,uVar4,uVar11);
                        if ((uVar2 & 1) == 0) goto LAB_1035c9914;
                        goto LAB_1035ca228;
                      }
                    }
                  }
                  else if ((uVar8 & 0xff) != 2) {
                    func_0x000101541464(uVar3,uVar12,uVar7);
                    func_0x000101541464(uVar8,uVar4,uVar11);
                    if ((((uint)uVar8 ^ (uint)uVar3) & 1) != 0) goto LAB_1035c98f8;
                    func_0x000100e25fcc(uVar12,uVar7,uVar4,uVar11);
                    func_0x000101556278(uVar8,uVar4,uVar11);
                    if ((uVar2 & 1) == 0) goto LAB_1035c9914;
                    goto LAB_1035c9ddc;
                  }
                }
              }
              else if ((uVar8 & 0xff) != 2) {
                func_0x000101541464(uVar3,uVar12,uVar7);
                func_0x000101541464(uVar8,uVar4,uVar11);
                if ((((uint)uVar8 ^ (uint)uVar3) & 1) != 0) goto LAB_1035c98f8;
                func_0x000100e25fcc(uVar12,uVar7,uVar4,uVar11);
                func_0x000101556278(uVar8,uVar4,uVar11);
                if ((uVar2 & 1) == 0) goto LAB_1035c9914;
                goto LAB_1035c9d5c;
              }
            }
          }
          else if ((uVar8 & 0xff) != 2) {
            func_0x000101541464(uVar3,uVar12,uVar7);
            func_0x000101541464(uVar8,uVar4,uVar11);
            if ((((uint)uVar8 ^ (uint)uVar3) & 1) != 0) goto LAB_1035c98f8;
            func_0x000100e25fcc(uVar12,uVar7,uVar4,uVar11);
            func_0x000101556278(uVar8,uVar4,uVar11);
            if ((uVar2 & 1) == 0) goto LAB_1035c9914;
            goto LAB_1035c9aa4;
          }
        }
      }
      else if ((uVar8 & 0xff) != 2) {
        func_0x000101541464(uVar3,uVar12,uVar7);
        func_0x000101541464(uVar8,uVar4,uVar11);
        if ((((uint)uVar8 ^ (uint)uVar3) & 1) != 0) goto LAB_1035c98f8;
        func_0x000100e25fcc(uVar12,uVar7,uVar4,uVar11);
        func_0x000101556278(uVar8,uVar4,uVar11);
        if ((uVar2 & 1) == 0) goto LAB_1035c9914;
        goto LAB_1035c979c;
      }
    }
  }
  else if ((uVar8 & 0xff) != 2) {
    func_0x000101541464(uVar3,uVar12,uVar7);
    func_0x000101541464(uVar8,uVar4,uVar11);
    if ((((uint)uVar8 ^ (uint)uVar3) & 1) == 0) {
      func_0x000100e25fcc(uVar12,uVar7,uVar4,uVar11);
      func_0x000101556278(uVar8,uVar4,uVar11);
      if ((uVar2 & 1) == 0) goto LAB_1035c9914;
      goto LAB_1035c9714;
    }
LAB_1035c98f8:
    func_0x000101556278(uVar8,uVar4,uVar11);
    goto LAB_1035c9914;
  }
  uVar3 = uVar8;
  uVar12 = uVar4;
  uVar7 = uVar11;
  func_0x000101541464(uVar10,uVar2,uVar9);
  func_0x000101541464(uVar3,uVar12,uVar7);
  func_0x000101556278(uVar10,uVar2,uVar9);
LAB_1035c9914:
  func_0x000101556278(uVar3,uVar12,uVar7);
  return 0;
}



/* Entry: 1035ca720; end: 1035ca77f;  */

void FUN_1035ca720(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f7bc98 != -1) {
    func_0x000107c61568(0x112f7bc98,FUN_1035c7438);
  }
  uVar1 = uRam0000000112f7bca0;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1035ca780; end: 1035ca7a3;  */

undefined1  [16] FUN_1035ca780(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156310;
  auVar1._0_8_ = 0xd000000000000038;
  return auVar1;
}



/* Entry: 1035ca7a4; end: 1035ca7d3;  */

undefined1  [16] FUN_1035ca7a4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035ca7d4; end: 1035ca807;  */

void FUN_1035ca7d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035ca808; end: 1035ca81b;  */

undefined8 FUN_1035ca808(void)

{
  return 0x1035ca818;
}



/* Entry: 1035ca81c; end: 1035ca853;  */

void FUN_1035ca81c(void)

{
  FUN_1035c7d58();
  return;
}



/* Entry: 1035ca854; end: 1035ca857;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035ca854(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035ca858; end: 1035ca88f;  */

uint FUN_1035ca858(long param_1,long param_2)

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
  FUN_1035cb1fc();
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



/* Entry: 1035ca890; end: 1035ca937;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035ca890(long *param_1)

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
    FUN_1035c9534(uVar25,uVar26);
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



/* Entry: 1035ca938; end: 1035ca9d7;  */

/* WARNING: Possible PIC construction at 0x0001035ca984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ca994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ca988) */
/* WARNING: Removing unreachable block (ram,0x0001035ca998) */

void FUN_1035ca938(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7bcb0 != -1) {
    func_0x000107c61568(0x112f7bcb0,FUN_1035c73f0);
  }
  uVar5 = uRam0000000113809328;
  uVar4 = uRam0000000113809320;
  uVar3 = uRam0000000113809318;
  uVar2 = uRam0000000113809310;
  uVar1 = uRam0000000113809308;
  *param_1 = uRam0000000113809300;
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



/* Entry: 1035ca9d8; end: 1035caa13;  */

void FUN_1035ca9d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7bf78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7bf78,&UNK_10dbe30d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035caa14; end: 1035cab17;  */

void FUN_1035caa14(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035cab18; end: 1035cabbf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035cab18(undefined8 *param_1,long *param_2)

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
    FUN_1035c9534(uVar25,uVar26);
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



/* Entry: 1035cabc0; end: 1035cabcb;  */

void FUN_1035cabc0(void)

{
  return;
}



/* Entry: 1035cabcc; end: 1035cabeb;  */

void FUN_1035cabcc(void)

{
  func_0x000107c61168(&PTR_PTR_112f7bd38);
  return;
}



/* Entry: 1035cabec; end: 1035cac43;  */

void FUN_1035cabec(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035cac44; end: 1035cac6b;  */

uint FUN_1035cac44(long param_1)

{
  uint uVar1;
  
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x20)) {
    uVar1 = (*(byte *)(param_1 + 0x20) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1035cac6c; end: 1035cacb3;  */

undefined8 FUN_1035cac6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035cacb4; end: 1035cad0b;  */

void FUN_1035cacb4(void)

{
  return;
}



/* Entry: 1035cad0c; end: 1035cad4b;  */

undefined8 FUN_1035cad0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1035cad4c; end: 1035cad8b;  */

void FUN_1035cad4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bcb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2f48;
  func_0x000107c61520(&UNK_10dbe2f48,&UNK_11066a9c0);
  puRam0000000112f7bcb8 = puVar1;
  return;
}



/* Entry: 1035cad8c; end: 1035cad9f;  */

void FUN_1035cad8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035cada0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035cade0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035cada0; end: 1035cae1f;  */

void FUN_1035cada0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bcc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2e60;
  func_0x000107c61520(&UNK_10dbe2e60,&UNK_11066a948);
  puRam0000000112f7bcc0 = puVar1;
  return;
}



/* Entry: 1035cae20; end: 1035cae23;  */

void FUN_1035cae20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7bcd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7bcd8;
  func_0x00010002969c(0x112f7bcd8,&UNK_10dbe2de8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7bcd0 = puVar2;
  return;
}



/* Entry: 1035cae24; end: 1035cae73;  */

void FUN_1035cae24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7bcd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7bcd8;
  func_0x00010002969c(0x112f7bcd8,&UNK_10dbe2de8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7bcd0 = puVar2;
  return;
}



/* Entry: 1035cae74; end: 1035cae77;  */

void FUN_1035cae74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2ea0;
  func_0x000107c61520(&UNK_10dbe2ea0,&UNK_11066a948);
  puRam0000000112f7bce0 = puVar1;
  return;
}



/* Entry: 1035cae78; end: 1035caeb7;  */

void FUN_1035cae78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2ea0;
  func_0x000107c61520(&UNK_10dbe2ea0,&UNK_11066a948);
  puRam0000000112f7bce0 = puVar1;
  return;
}



/* Entry: 1035caeb8; end: 1035caedb;  */

void FUN_1035caeb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035caedc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035caedc; end: 1035caf1b;  */

void FUN_1035caedc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2f20;
  func_0x000107c61520(&UNK_10dbe2f20,&UNK_11066a9c0);
  puRam0000000112f7bce8 = puVar1;
  return;
}



/* Entry: 1035caf1c; end: 1035caf2f;  */

void FUN_1035caf1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035cad4c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502854)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035caf30; end: 1035caf5f;  */

void FUN_1035caf30(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035caf60; end: 1035caf63;  */

void FUN_1035caf60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bcf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2f88;
  func_0x000107c61520(&UNK_10dbe2f88,&UNK_11066a9c0);
  puRam0000000112f7bcf0 = puVar1;
  return;
}



/* Entry: 1035caf64; end: 1035cafa3;  */

void FUN_1035caf64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bcf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe2f88;
  func_0x000107c61520(&UNK_10dbe2f88,&UNK_11066a9c0);
  puRam0000000112f7bcf0 = puVar1;
  return;
}



/* Entry: 1035cafa4; end: 1035cb043;  */

int FUN_1035cafa4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035cb044; end: 1035cb06f;  */

void FUN_1035cb044(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 1035cb070; end: 1035cb11b;  */

undefined8 * FUN_1035cb070(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1035cb11c; end: 1035cb163;  */

undefined8 * FUN_1035cb11c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1035cb164; end: 1035cb1fb;  */

int FUN_1035cb164(int *param_1,int param_2)

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



/* Entry: 1035cb1fc; end: 1035cb2bb;  */

void FUN_1035cb1fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7bf80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe2ef4;
  func_0x000107c61520(&DAT_10dbe2ef4,&UNK_11066a9c0);
  puRam0000000112f7bf80 = puVar1;
  return;
}



/* Entry: 1035cb2bc; end: 1035cb2c3;  */

undefined8 * FUN_1035cb2bc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1035cb2c4; end: 1035cb33b;  */

undefined8 FUN_1035cb2c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x20) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x18);
  }
  func_0x000100d56270();
  return uVar1;
}



/* Entry: 1035cb33c; end: 1035cb3e3;  */

void FUN_1035cb33c(uint param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  uVar4 = *(undefined8 *)(lVar5 + 0x20);
  *(ulong *)(lVar5 + 0x10) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  *(undefined8 *)(lVar5 + 0x20) = param_3;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cb3e4; end: 1035cb403;  */

void FUN_1035cb3e4(void)

{
  func_0x000107c61168(&PTR_PTR_112f7c100);
  return;
}



/* Entry: 1035cb404; end: 1035cb48f;  */

bool FUN_1035cb404(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(ulong *)(param_3 + 0x20);
  func_0x000100d56270(uVar1,uVar2,uVar3);
  func_0x000100d5628c(uVar1,uVar2,uVar3);
  if (uVar3 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar3 >> 0x3c < 0xf;
}



/* Entry: 1035cb490; end: 1035cb5df;  */

void FUN_1035cb490(uint param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x28,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  uVar1 = *(undefined8 *)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  *(ulong *)(lVar5 + 0x28) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x30) = param_2;
  *(undefined8 *)(lVar5 + 0x38) = param_3;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cb5e0; end: 1035cb6db;  */

bool FUN_1035cb5e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x40,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  uVar3 = *(ulong *)(param_3 + 0x50);
  func_0x000100d56270(uVar1,uVar2,uVar3);
  func_0x000100d5628c(uVar1,uVar2,uVar3);
  if (uVar3 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar3 >> 0x3c < 0xf;
}



/* Entry: 1035cb6dc; end: 1035cb783;  */

void FUN_1035cb6dc(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x58,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar1 = *(undefined8 *)(lVar5 + 0x60);
  uVar4 = *(undefined8 *)(lVar5 + 0x68);
  *(ulong *)(lVar5 + 0x58) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x60) = param_2;
  *(undefined8 *)(lVar5 + 0x68) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cb784; end: 1035cb80f;  */

bool FUN_1035cb784(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x58,auStack_48,0,0);
  uVar1 = *(ulong *)(param_3 + 0x58);
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  uVar3 = *(undefined8 *)(param_3 + 0x68);
  func_0x000101541464(uVar1,uVar2,uVar3);
  func_0x000101556278(uVar1,uVar2,uVar3);
  if ((uVar1 & 0xff) != 2) {
    func_0x000101556278(2,0,0);
  }
  return (uVar1 & 0xff) != 2;
}



/* Entry: 1035cb810; end: 1035cb8b3;  */

void FUN_1035cb810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x70,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x70);
  uVar1 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  *(undefined8 *)(lVar5 + 0x70) = param_1;
  *(undefined8 *)(lVar5 + 0x78) = param_2;
  *(undefined8 *)(lVar5 + 0x80) = param_3;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cb8b4; end: 1035cb923;  */

undefined4 FUN_1035cb8b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x88,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x98) >> 0x3c < 0xf) {
    uVar1 = (undefined4)*(undefined8 *)(param_3 + 0x88);
  }
  func_0x000100d56270();
  return uVar1;
}



/* Entry: 1035cb924; end: 1035cb9cb;  */

void FUN_1035cb924(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x88,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x88);
  uVar1 = *(undefined8 *)(lVar5 + 0x90);
  uVar4 = *(undefined8 *)(lVar5 + 0x98);
  *(ulong *)(lVar5 + 0x88) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x90) = param_2;
  *(undefined8 *)(lVar5 + 0x98) = param_3;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cb9cc; end: 1035cbae7;  */

bool FUN_1035cb9cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x88,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x88);
  uVar2 = *(undefined8 *)(param_3 + 0x90);
  uVar3 = *(ulong *)(param_3 + 0x98);
  func_0x000100d56270(uVar1,uVar2,uVar3);
  func_0x000100d5628c(uVar1,uVar2,uVar3);
  if (uVar3 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar3 >> 0x3c < 0xf;
}



/* Entry: 1035cbae8; end: 1035cbb8f;  */

void FUN_1035cbae8(uint param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0xb0,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0xb0);
  uVar1 = *(undefined8 *)(lVar5 + 0xb8);
  uVar4 = *(undefined8 *)(lVar5 + 0xc0);
  *(ulong *)(lVar5 + 0xb0) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0xb8) = param_2;
  *(undefined8 *)(lVar5 + 0xc0) = param_3;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cbb90; end: 1035cbccb;  */

void FUN_1035cbb90(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_198 [24];
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
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  func_0x0001034cbf90(&uStack_180);
  func_0x000107c61428(lVar2 + 200,auStack_198,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x130);
  uStack_80 = *(undefined8 *)(lVar2 + 0x128);
  uStack_68 = *(undefined8 *)(lVar2 + 0x140);
  uStack_70 = *(undefined8 *)(lVar2 + 0x138);
  uStack_58 = *(undefined8 *)(lVar2 + 0x150);
  uStack_60 = *(undefined8 *)(lVar2 + 0x148);
  uStack_48 = *(undefined8 *)(lVar2 + 0x160);
  uStack_50 = *(undefined8 *)(lVar2 + 0x158);
  uStack_b8 = *(undefined8 *)(lVar2 + 0xf0);
  uStack_c0 = *(undefined8 *)(lVar2 + 0xe8);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x100);
  uStack_b0 = *(undefined8 *)(lVar2 + 0xf8);
  uStack_98 = *(undefined8 *)(lVar2 + 0x110);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x108);
  uStack_88 = *(undefined8 *)(lVar2 + 0x120);
  uStack_90 = *(undefined8 *)(lVar2 + 0x118);
  uStack_d8 = *(undefined8 *)(lVar2 + 0xd0);
  uStack_e0 = *(undefined8 *)(lVar2 + 200);
  uStack_c8 = *(undefined8 *)(lVar2 + 0xe0);
  uStack_d0 = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(lVar2 + 0x130) = uStack_118;
  *(undefined8 *)(lVar2 + 0x128) = uStack_120;
  *(undefined8 *)(lVar2 + 0x140) = uStack_108;
  *(undefined8 *)(lVar2 + 0x138) = uStack_110;
  *(undefined8 *)(lVar2 + 0x150) = uStack_f8;
  *(undefined8 *)(lVar2 + 0x148) = uStack_100;
  *(undefined8 *)(lVar2 + 0x160) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x158) = uStack_f0;
  *(undefined8 *)(lVar2 + 0xf0) = uStack_158;
  *(undefined8 *)(lVar2 + 0xe8) = uStack_160;
  *(undefined8 *)(lVar2 + 0x100) = uStack_148;
  *(undefined8 *)(lVar2 + 0xf8) = uStack_150;
  *(undefined8 *)(lVar2 + 0x110) = uStack_138;
  *(undefined8 *)(lVar2 + 0x108) = uStack_140;
  *(undefined8 *)(lVar2 + 0x120) = uStack_128;
  *(undefined8 *)(lVar2 + 0x118) = uStack_130;
  *(undefined8 *)(lVar2 + 0xd0) = uStack_178;
  *(undefined8 *)(lVar2 + 200) = uStack_180;
  *(undefined8 *)(lVar2 + 0xe0) = uStack_168;
  *(undefined8 *)(lVar2 + 0xd8) = uStack_170;
  func_0x0001035e0354(&uStack_e0,0x112f7bf98,&UNK_10dbe3310);
  return;
}



/* Entry: 1035cbccc; end: 1035cbe1b;  */

void FUN_1035cbccc(uint param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x168,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x168);
  uVar1 = *(undefined8 *)(lVar5 + 0x170);
  uVar4 = *(undefined8 *)(lVar5 + 0x178);
  *(ulong *)(lVar5 + 0x168) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x170) = param_2;
  *(undefined8 *)(lVar5 + 0x178) = param_3;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cbe1c; end: 1035cbea7;  */

void FUN_1035cbe1c(undefined8 param_1,undefined1 param_2)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x198,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x198) = param_1;
  *(undefined1 *)(lVar3 + 0x1a0) = param_2;
  return;
}



/* Entry: 1035cbea8; end: 1035cbf4f;  */

void FUN_1035cbea8(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x1a8,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x1a8);
  uVar1 = *(undefined8 *)(lVar5 + 0x1b0);
  uVar4 = *(undefined8 *)(lVar5 + 0x1b8);
  *(ulong *)(lVar5 + 0x1a8) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x1b0) = param_2;
  *(undefined8 *)(lVar5 + 0x1b8) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cbf50; end: 1035cbff7;  */

void FUN_1035cbf50(uint param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x1c0,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x1c0);
  uVar1 = *(undefined8 *)(lVar5 + 0x1c8);
  uVar4 = *(undefined8 *)(lVar5 + 0x1d0);
  *(ulong *)(lVar5 + 0x1c0) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x1c8) = param_2;
  *(undefined8 *)(lVar5 + 0x1d0) = param_3;
  func_0x000100d5628c(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035cbff8; end: 1035cc083;  */

void FUN_1035cbff8(undefined8 param_1,undefined1 param_2)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x1f0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x1f0) = param_1;
  *(undefined1 *)(lVar3 + 0x1f8) = param_2;
  return;
}



/* Entry: 1035cc084; end: 1035cc133;  */

void FUN_1035cc084(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x218,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x218);
  uVar3 = *(undefined8 *)(lVar5 + 0x220);
  uVar4 = *(undefined8 *)(lVar5 + 0x228);
  *(ulong *)(lVar5 + 0x218) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x220) = param_2;
  *(undefined8 *)(lVar5 + 0x228) = param_3;
  func_0x000101556278(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cc134; end: 1035cc207;  */

void FUN_1035cc134(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [336];
  undefined1 auStack_190 [336];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_2e0,param_1,0x150);
  FUN_1035dff68(auStack_2e0);
  func_0x000107c61428(lVar2 + 0x248,auStack_2f8,1,0);
  func_0x000107c610b4(auStack_190,lVar2 + 0x248,0x150);
  func_0x000107c610b4(lVar2 + 0x248,auStack_2e0,0x150);
  func_0x0001035e0354(auStack_190,0x112f7bfa8,&UNK_10dbe3320);
  return;
}



/* Entry: 1035cc208; end: 1035cc35f;  */

void FUN_1035cc208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x3b0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x3b0);
  uVar3 = *(undefined8 *)(lVar5 + 0x3b8);
  uVar4 = *(undefined8 *)(lVar5 + 0x3c0);
  *(undefined8 *)(lVar5 + 0x3b0) = param_1;
  *(undefined8 *)(lVar5 + 0x3b8) = param_2;
  *(undefined8 *)(lVar5 + 0x3c0) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cc360; end: 1035cc3d3;  */

undefined8 FUN_1035cc360(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x3e0,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x3f0) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x3e0);
  }
  func_0x000100d56270();
  return uVar1;
}



/* Entry: 1035cc3d4; end: 1035cc47f;  */

void FUN_1035cc3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x3e0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x3e0);
  uVar3 = *(undefined8 *)(lVar5 + 1000);
  uVar4 = *(undefined8 *)(lVar5 + 0x3f0);
  *(undefined8 *)(lVar5 + 0x3e0) = param_1;
  *(undefined8 *)(lVar5 + 1000) = param_2;
  *(undefined8 *)(lVar5 + 0x3f0) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cc480; end: 1035cc50f;  */

bool FUN_1035cc480(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x3e0,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x3e0);
  uVar3 = *(undefined8 *)(param_3 + 1000);
  uVar1 = *(ulong *)(param_3 + 0x3f0);
  func_0x000100d56270(uVar2,uVar3,uVar1);
  func_0x000100d5628c(uVar2,uVar3,uVar1);
  if (uVar1 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar1 >> 0x3c < 0xf;
}



/* Entry: 1035cc510; end: 1035cc5bb;  */

void FUN_1035cc510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x410,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x410);
  uVar3 = *(undefined8 *)(lVar5 + 0x418);
  uVar4 = *(undefined8 *)(lVar5 + 0x420);
  *(undefined8 *)(lVar5 + 0x410) = param_1;
  *(undefined8 *)(lVar5 + 0x418) = param_2;
  *(undefined8 *)(lVar5 + 0x420) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cc5bc; end: 1035cc62f;  */

undefined8 FUN_1035cc5bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x428,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x438) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x428);
  }
  func_0x000100d56270();
  return uVar1;
}



/* Entry: 1035cc630; end: 1035cc6db;  */

void FUN_1035cc630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x428,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x428);
  uVar3 = *(undefined8 *)(lVar5 + 0x430);
  uVar4 = *(undefined8 *)(lVar5 + 0x438);
  *(undefined8 *)(lVar5 + 0x428) = param_1;
  *(undefined8 *)(lVar5 + 0x430) = param_2;
  *(undefined8 *)(lVar5 + 0x438) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cc6dc; end: 1035cc7df;  */

bool FUN_1035cc6dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x428,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x428);
  uVar3 = *(undefined8 *)(param_3 + 0x430);
  uVar1 = *(ulong *)(param_3 + 0x438);
  func_0x000100d56270(uVar2,uVar3,uVar1);
  func_0x000100d5628c(uVar2,uVar3,uVar1);
  if (uVar1 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar1 >> 0x3c < 0xf;
}



/* Entry: 1035cc7e0; end: 1035cc88b;  */

void FUN_1035cc7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x440,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x440);
  uVar3 = *(undefined8 *)(lVar5 + 0x448);
  uVar4 = *(undefined8 *)(lVar5 + 0x450);
  *(undefined8 *)(lVar5 + 0x440) = param_1;
  *(undefined8 *)(lVar5 + 0x448) = param_2;
  *(undefined8 *)(lVar5 + 0x450) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cc88c; end: 1035cc98f;  */

bool FUN_1035cc88c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x440,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x440);
  uVar3 = *(undefined8 *)(param_3 + 0x448);
  uVar1 = *(ulong *)(param_3 + 0x450);
  func_0x000100d56270(uVar2,uVar3,uVar1);
  func_0x000100d5628c(uVar2,uVar3,uVar1);
  if (uVar1 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar1 >> 0x3c < 0xf;
}



/* Entry: 1035cc990; end: 1035cca3b;  */

void FUN_1035cc990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x458,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x458);
  uVar3 = *(undefined8 *)(lVar5 + 0x460);
  uVar4 = *(undefined8 *)(lVar5 + 0x468);
  *(undefined8 *)(lVar5 + 0x458) = param_1;
  *(undefined8 *)(lVar5 + 0x460) = param_2;
  *(undefined8 *)(lVar5 + 0x468) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cca3c; end: 1035ccb3f;  */

bool FUN_1035cca3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x458,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x458);
  uVar3 = *(undefined8 *)(param_3 + 0x460);
  uVar1 = *(ulong *)(param_3 + 0x468);
  func_0x000100d56270(uVar2,uVar3,uVar1);
  func_0x000100d5628c(uVar2,uVar3,uVar1);
  if (uVar1 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar1 >> 0x3c < 0xf;
}



/* Entry: 1035ccb40; end: 1035ccbeb;  */

void FUN_1035ccb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x470,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x470);
  uVar3 = *(undefined8 *)(lVar5 + 0x478);
  uVar4 = *(undefined8 *)(lVar5 + 0x480);
  *(undefined8 *)(lVar5 + 0x470) = param_1;
  *(undefined8 *)(lVar5 + 0x478) = param_2;
  *(undefined8 *)(lVar5 + 0x480) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035ccbec; end: 1035ccc7b;  */

bool FUN_1035ccbec(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x470,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x470);
  uVar3 = *(undefined8 *)(param_3 + 0x478);
  uVar1 = *(ulong *)(param_3 + 0x480);
  func_0x000100d56270(uVar2,uVar3,uVar1);
  func_0x000100d5628c(uVar2,uVar3,uVar1);
  if (uVar1 >> 0x3c < 0xf) {
    func_0x000100d5628c(0,0,0xf000000000000000);
  }
  return uVar1 >> 0x3c < 0xf;
}



/* Entry: 1035ccc7c; end: 1035ccd27;  */

void FUN_1035ccc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x4b8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x4b8);
  uVar3 = *(undefined8 *)(lVar5 + 0x4c0);
  uVar4 = *(undefined8 *)(lVar5 + 0x4c8);
  *(undefined8 *)(lVar5 + 0x4b8) = param_1;
  *(undefined8 *)(lVar5 + 0x4c0) = param_2;
  *(undefined8 *)(lVar5 + 0x4c8) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035ccd28; end: 1035ccd67;  */

undefined1  [16] FUN_1035ccd28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x4d0,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x4d0);
  return auVar1;
}



/* Entry: 1035ccd68; end: 1035ccdf3;  */

void FUN_1035ccd68(undefined8 param_1,undefined1 param_2)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x4d0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x4d0) = param_1;
  *(undefined1 *)(lVar3 + 0x4d8) = param_2;
  return;
}



/* Entry: 1035ccdf4; end: 1035cce33;  */

undefined1  [16] FUN_1035ccdf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x4e0,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x4e0);
  return auVar1;
}



/* Entry: 1035cce34; end: 1035ccebf;  */

void FUN_1035cce34(undefined8 param_1,undefined1 param_2)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x4e0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0x4e0) = param_1;
  *(undefined1 *)(lVar3 + 0x4e8) = param_2;
  return;
}



/* Entry: 1035ccec0; end: 1035ccf6f;  */

void FUN_1035ccec0(ulong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x4f0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x4f0);
  uVar3 = *(undefined8 *)(lVar5 + 0x4f8);
  uVar4 = *(undefined8 *)(lVar5 + 0x500);
  *(ulong *)(lVar5 + 0x4f0) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x4f8) = param_2;
  *(undefined8 *)(lVar5 + 0x500) = param_3;
  func_0x000101556278(uVar2,uVar3,uVar4);
  return;
}


