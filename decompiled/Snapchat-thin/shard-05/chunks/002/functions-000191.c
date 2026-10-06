/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c7bf5c; end: 103c7bf8b;  */

undefined8
FUN_103c7bf5c(long param_1,char param_2,ulong param_3,long param_4,long param_5,char param_6,
             ulong param_7,long param_8)

{
  switch(param_4) {
  case 1:
    if (param_8 == 1) {
      return 1;
    }
    break;
  case 2:
    if (param_8 == 2) {
      return 1;
    }
    break;
  case 3:
    if (param_8 == 3) {
      return 1;
    }
    break;
  case 4:
    if (param_8 == 4) {
      return 1;
    }
    break;
  case 5:
    if (param_8 == 5) {
      return 1;
    }
    break;
  case 6:
    if (param_8 == 6) {
      return 1;
    }
    break;
  case 7:
    if (param_8 == 7) {
      return 1;
    }
    break;
  case 8:
    if (param_8 == 8) {
      return 1;
    }
    break;
  case 9:
    if (param_8 == 9) {
      return 1;
    }
    break;
  case 10:
    if (param_8 == 10) {
      return 1;
    }
    break;
  case 0xb:
    if (param_8 == 0xb) {
      return 1;
    }
    break;
  case 0xc:
    if (param_8 == 0xc) {
      return 1;
    }
    break;
  case 0xd:
    if (param_8 == 0xd) {
      return 1;
    }
    break;
  case 0xe:
    if (param_8 == 0xe) {
      return 1;
    }
    break;
  default:
    if (0xd < param_8 - 1U) {
      if (param_2 == '\x01') {
        if (param_6 != '\x01') {
          return 0;
        }
      }
      else {
        if (param_6 == '\x01') {
          return 0;
        }
        if (param_1 != param_5) {
          return 0;
        }
      }
      if (param_4 == 0) {
        if (param_8 == 0) {
          return 1;
        }
      }
      else if (param_8 != 0) {
        if ((param_3 == param_7) && (param_4 == param_8)) {
          return 1;
        }
        func_0x000107c605b8(param_3,param_4,param_7,param_8,0);
        if ((param_3 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 103c7bf8c; end: 103c7c133;  */

undefined8
FUN_103c7bf8c(long param_1,char param_2,ulong param_3,long param_4,long param_5,char param_6,
             ulong param_7,long param_8)

{
  switch(param_4) {
  case 1:
    if (param_8 == 1) {
      return 1;
    }
    break;
  case 2:
    if (param_8 == 2) {
      return 1;
    }
    break;
  case 3:
    if (param_8 == 3) {
      return 1;
    }
    break;
  case 4:
    if (param_8 == 4) {
      return 1;
    }
    break;
  case 5:
    if (param_8 == 5) {
      return 1;
    }
    break;
  case 6:
    if (param_8 == 6) {
      return 1;
    }
    break;
  case 7:
    if (param_8 == 7) {
      return 1;
    }
    break;
  case 8:
    if (param_8 == 8) {
      return 1;
    }
    break;
  case 9:
    if (param_8 == 9) {
      return 1;
    }
    break;
  case 10:
    if (param_8 == 10) {
      return 1;
    }
    break;
  case 0xb:
    if (param_8 == 0xb) {
      return 1;
    }
    break;
  case 0xc:
    if (param_8 == 0xc) {
      return 1;
    }
    break;
  case 0xd:
    if (param_8 == 0xd) {
      return 1;
    }
    break;
  case 0xe:
    if (param_8 == 0xe) {
      return 1;
    }
    break;
  default:
    if (0xd < param_8 - 1U) {
      if (param_2 == '\x01') {
        if (param_6 != '\x01') {
          return 0;
        }
      }
      else {
        if (param_6 == '\x01') {
          return 0;
        }
        if (param_1 != param_5) {
          return 0;
        }
      }
      if (param_4 == 0) {
        if (param_8 == 0) {
          return 1;
        }
      }
      else if (param_8 != 0) {
        if ((param_3 == param_7) && (param_4 == param_8)) {
          return 1;
        }
        func_0x000107c605b8(param_3,param_4,param_7,param_8,0);
        if ((param_3 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 103c7c134; end: 103c7c15f;  */

long FUN_103c7c134(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c7c160; end: 103c7c17f;  */

void FUN_103c7c160(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 103c7c180; end: 103c7c353;  */

undefined8 * FUN_103c7c180(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[3];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    return param_1;
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 103c7c354; end: 103c7c477;  */

int FUN_103c7c354(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff0 < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7ffffff1;
  }
  uVar3 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0xe < uVar2 + 1) {
    iVar1 = uVar2 - 0xd;
  }
  return iVar1;
}



/* Entry: 103c7c478; end: 103c7cc77;  */

long FUN_103c7c478(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c7cc78; end: 103c7cc7b;  */

void FUN_103c7cc78(void)

{
  return;
}



/* Entry: 103c7cc7c; end: 103c7ccdf;  */

void FUN_103c7cc7c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  
  (*param_1)();
  func_0x000107c60450("Fatal error",0xb,2,param_1,param_2,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c7cce0);
  (*pcVar1)();
}



/* Entry: 103c7cce0; end: 103c7cd07;  */

void FUN_103c7cce0(code *param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  (*param_1)();
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c7cd08);
  (*pcVar1)();
}



/* Entry: 103c7cd08; end: 103c7cd0b;  */

void FUN_103c7cd08(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c7cd0c);
  (*pcVar1)();
}



/* Entry: 103c7cd0c; end: 103c7ce17;  */

void FUN_103c7cd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  code *pcStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  if (lRam0000000112ffd6c8 != -1) {
    func_0x000107c61568(0x112ffd6c8,&UNK_100083120);
  }
  lVar1 = lRam000000011380d1d8;
  puStack_68 = auStack_60;
  pcStack_70 = FUN_103c7cf44;
  func_0x000107c61428(lRam000000011380d1d8 + 0x10,auStack_98,0,0);
  FUN_103c7cef8(lVar1 + 0x10,auStack_c0);
  puVar2 = auStack_c0;
  func_0x0001000a8868(puVar2,uStack_a8);
  puStack_c8 = auStack_80;
  uStack_d0 = 0x103c7cf6c;
  (**(code **)(lStack_a0 + 8))
            (puVar2,FUN_103c7cf9c,0,0x103c7cf70,auStack_e0,param_3,param_4,param_5,param_6,uStack_a8
             ,lStack_a0);
  func_0x0001000834e4(auStack_c0);
  return;
}



/* Entry: 103c7ce18; end: 103c7cef7;  */

void FUN_103c7ce18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (lRam0000000112ffd6c8 != -1) {
    func_0x000107c61568(0x112ffd6c8,&UNK_100083120);
  }
  lVar1 = lRam000000011380d1d8;
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c61428(lRam000000011380d1d8 + 0x10,auStack_88,0,0);
  FUN_103c7cef8(lVar1 + 0x10,auStack_b0);
  func_0x0001000a8868(auStack_b0,uStack_98);
  puStack_b8 = auStack_70;
  uStack_c0 = 0x103c7cf74;
  (**(code **)(lStack_90 + 0x20))
            (FUN_103c7cf64,auStack_d0,param_3,param_4,param_5,param_6,uStack_98,lStack_90);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c7cef8);
  (*pcVar2)();
}



/* Entry: 103c7cef8; end: 103c7cf3b;  */

long FUN_103c7cef8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103c7cf3c; end: 103c7cf43;  */

void FUN_103c7cf3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c7cf44; end: 103c7cf63;  */

void FUN_103c7cf44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c7cf64; end: 103c7cf77;  */

void FUN_103c7cf64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c7cf78; end: 103c7cf9b;  */

void FUN_103c7cf78(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c7cf9c; end: 103c7cfbf;  */

undefined8 FUN_103c7cf9c(void)

{
  return 0;
}



/* Entry: 103c7cfc0; end: 103c7d003;  */

void FUN_103c7cfc0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c7d004; end: 103c7d01f;  */

undefined1  [16] FUN_103c7d004(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b25c0;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 103c7d020; end: 103c7d327;  */

void FUN_103c7d020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  FUN_103c7cef8(lVar2 + 0x10,auStack_a0);
  puVar1 = auStack_a0;
  func_0x0001000a8868(puVar1,uStack_88);
  uStack_d0 = param_3;
  uStack_c8 = param_4;
  uStack_b0 = param_1;
  uStack_a8 = param_2;
  (**(code **)(lStack_80 + 8))
            (puVar1,0x103c7d338,auStack_c0,0x103c7d33c,auStack_e0,param_5,param_6,param_7,param_8,
             uStack_88,lStack_80);
  func_0x0001000834e4(auStack_a0);
  return;
}



/* Entry: 103c7d328; end: 103c7d353;  */

void FUN_103c7d328(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c7d354; end: 103c7d393;  */

void FUN_103c7d354(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ffd800;
  func_0x0001000285a8(0x112ffd800,&UNK_10dc6c5b0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c7d394; end: 103c7d3b7;  */

void FUN_103c7d394(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103c85d74)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103c7d3b8; end: 103c7d3f7;  */

void FUN_103c7d3b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ffd860;
  func_0x0001000285a8(0x112ffd860,&UNK_10dc6c5b8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103c7d3f8; end: 103c7d41f;  */

void FUN_103c7d3f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103c7d420; end: 103c7d48f;  */

void FUN_103c7d420(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103c7d490; end: 103c7d49b;  */

void FUN_103c7d490(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103c85d80)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103c7d49c; end: 103c7d553;  */

void FUN_103c7d49c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
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



/* Entry: 103c7d554; end: 103c7d587;  */

void FUN_103c7d554(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  return;
}



/* Entry: 103c7d588; end: 103c7d63f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c7d588(int *param_1,int *param_2)

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
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(long *)(param_1 + 2) == *(long *)(param_2 + 2))) &&
     (*(long *)(param_1 + 4) == *(long *)(param_2 + 4))) {
    pbVar9 = *(byte **)(param_1 + 10);
    pbVar24 = *(byte **)(param_1 + 0xc);
    lVar23 = *(long *)(param_2 + 10);
    uVar15 = *(ulong *)(param_2 + 0xc);
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar19 = *(ulong *)(param_1 + 6);
    uVar21 = *(ulong *)(param_1 + 8);
    func_0x00010142cfc4(uVar19,*(undefined8 *)(param_2 + 6));
    if (((uVar19 & 1) != 0) && (FUN_103c842b0(uVar21,uVar10), (uVar21 & 1) != 0)) {
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
        uVar4 = (uint)((ulong)pbVar24 >> 0x20);
        uVar17 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar15 >> 0x20);
        uVar20 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar9;
        pbVar12 = pbVar24;
        if ((ulong)pbVar24 >> 0x3e == 3) {
          uVar19 = 0;
          if (((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
             ((uVar15 >> 0x3e < 3 || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar17 == 0) {
            uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
          }
          else {
            iVar18 = (int)((ulong)pbVar9 >> 0x20);
            if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar19 = (ulong)(iVar18 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar20 == 0) {
            uVar21 = uVar15 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar18 = (int)((ulong)lVar23 >> 0x20);
          if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar17 == 2) {
            uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
            if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar19 = 0;
          if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar20 == 2) {
            uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
            if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar19 < 1) goto code_r0x000100e26128;
            if (uVar17 < 2) {
              if (uVar17 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
              unaff_x24 = pbVar24;
              if (pbVar9 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar9 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar9;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar9;
                if (pbVar9 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar9;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar17 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto code_r0x000100e26260;
              }
              lVar25 = *(long *)(pbVar9 + 0x10);
              unaff_x24 = *(byte **)(pbVar9 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar9;
              if (pbVar9 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar9;
              unaff_x25 = pbVar24;
              if (pbVar9 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar12) {
                  pbVar12 = unaff_x23;
                }
                pbVar12 = pbVar12 + (long)pbVar9;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar24 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,
                                lVar23,uVar15);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar15;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar19 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        pbVar22 = *(byte **)(pbVar8 + 0x18);
        bVar26 = pbVar8[0x28];
        pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar13 = pbVar9;
        if (bVar26 < 3) {
          if (bVar26 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar23 = *(long *)pbVar12;
              uVar10 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar23,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar26 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar16 = *(byte **)(pbVar12 + 0x10);
            lVar23 = *(long *)pbVar12;
            uVar10 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar23,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar9;
            pbVar13 = pbVar24;
            if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar16 = *(byte **)(pbVar12 + 8);
            lVar23 = *(long *)(pbVar12 + 0x18);
            if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar23 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar23);
              func_0x000107c61174();
              pbVar9 = pbVar22;
              func_0x000107c60118();
              func_0x000107c61170(pbVar22);
              func_0x000107c61170(lVar23);
              pbVar22 = pbVar9;
joined_r0x000100e266a4:
              if (((ulong)pbVar22 & 1) == 0) {
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
          )(pbVar11,pbVar13,pbVar14,pbVar16,0);
          return pbVar11;
        }
        lVar25 = *(long *)(pbVar8 + 0x20);
        if (bVar26 < 5) {
          if (bVar26 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar16 = *(byte **)(pbVar12 + 8);
            if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
               (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
               pbVar16 = *(byte **)(pbVar12 + 0x18),
               pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar16 = *(byte **)(pbVar12 + 0x10);
          lVar23 = *(long *)(pbVar12 + 0x20);
          if (pbVar24 == (byte *)0x0) {
            if (pbVar16 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar16 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar11 = pbVar9;
            pbVar13 = pbVar24;
            if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
          }
          if (lVar25 != 0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar26 != 5) {
          if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
              lVar25 == 0) && pbVar24 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar25 = *(long *)(pbVar12 + 0x20);
            lVar23 = *(long *)(pbVar12 + 0x18);
            bVar26 = pbVar12[8] | (byte)lVar23;
            bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
            bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
            bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
            bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
            bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
            bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
            bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
            bVar34 = pbVar12[0x10] | (byte)lVar25;
            bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
            bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
            bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
            bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
            bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
            bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
            bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
            auVar42[1] = bVar27;
            auVar42[0] = bVar26;
            auVar42[2] = bVar28;
            auVar42[3] = bVar29;
            auVar42[4] = bVar30;
            auVar42[5] = bVar31;
            auVar42[6] = bVar32;
            auVar42[7] = bVar33;
            auVar42[8] = bVar34;
            auVar42[9] = bVar35;
            auVar42[10] = bVar36;
            auVar42[0xb] = bVar37;
            auVar42[0xc] = bVar38;
            auVar42[0xd] = bVar39;
            auVar42[0xe] = bVar40;
            auVar42[0xf] = bVar41;
            auVar3[1] = bVar27;
            auVar3[0] = bVar26;
            auVar3[2] = bVar28;
            auVar3[3] = bVar29;
            auVar3[4] = bVar30;
            auVar3[5] = bVar31;
            auVar3[6] = bVar32;
            auVar3[7] = bVar33;
            auVar3[8] = bVar34;
            auVar3[9] = bVar35;
            auVar3[10] = bVar36;
            auVar3[0xb] = bVar37;
            auVar3[0xc] = bVar38;
            auVar3[0xd] = bVar39;
            auVar3[0xe] = bVar40;
            auVar3[0xf] = bVar41;
            auVar42 = NEON_ext(auVar42,auVar3,8,1);
            if (CONCAT17(bVar33 | auVar42[7],
                         CONCAT16(bVar32 | auVar42[6],
                                  CONCAT15(bVar31 | auVar42[5],
                                           CONCAT14(bVar30 | auVar42[4],
                                                    CONCAT13(bVar29 | auVar42[3],
                                                             CONCAT12(bVar28 | auVar42[2],
                                                                      CONCAT11(bVar27 | auVar42[1],
                                                                               bVar26 | auVar42[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
              lVar25 == 0)) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar12 != 2) {
              return (byte *)0x0;
            }
          }
          lVar25 = *(long *)(pbVar12 + 0x20);
          lVar23 = *(long *)(pbVar12 + 0x18);
          bVar26 = pbVar12[8] | (byte)lVar23;
          bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
          bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
          bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
          bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
          bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
          bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
          bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
          bVar34 = pbVar12[0x10] | (byte)lVar25;
          bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
          bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
          bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
          bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
          bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
          bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
          bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
          auVar1[1] = bVar27;
          auVar1[0] = bVar26;
          auVar1[2] = bVar28;
          auVar1[3] = bVar29;
          auVar1[4] = bVar30;
          auVar1[5] = bVar31;
          auVar1[6] = bVar32;
          auVar1[7] = bVar33;
          auVar1[8] = bVar34;
          auVar1[9] = bVar35;
          auVar1[10] = bVar36;
          auVar1[0xb] = bVar37;
          auVar1[0xc] = bVar38;
          auVar1[0xd] = bVar39;
          auVar1[0xe] = bVar40;
          auVar1[0xf] = bVar41;
          auVar2[1] = bVar27;
          auVar2[0] = bVar26;
          auVar2[2] = bVar28;
          auVar2[3] = bVar29;
          auVar2[4] = bVar30;
          auVar2[5] = bVar31;
          auVar2[6] = bVar32;
          auVar2[7] = bVar33;
          auVar2[8] = bVar34;
          auVar2[9] = bVar35;
          auVar2[10] = bVar36;
          auVar2[0xb] = bVar37;
          auVar2[0xc] = bVar38;
          auVar2[0xd] = bVar39;
          auVar2[0xe] = bVar40;
          auVar2[0xf] = bVar41;
          auVar42 = NEON_ext(auVar1,auVar2,8,1);
          lVar23 = CONCAT17(bVar33 | auVar42[7],
                            CONCAT16(bVar32 | auVar42[6],
                                     CONCAT15(bVar31 | auVar42[5],
                                              CONCAT14(bVar30 | auVar42[4],
                                                       CONCAT13(bVar29 | auVar42[3],
                                                                CONCAT12(bVar28 | auVar42[2],
                                                                         CONCAT11(bVar27 | auVar42[1
                                                  ],bVar26 | auVar42[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar23 = *(long *)(pbVar12 + 8);
        uVar15 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar25,uVar10);
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
  }
  return (byte *)0x0;
}



/* Entry: 103c7d640; end: 103c7d6a7;  */

void FUN_103c7d640(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  return;
}



/* Entry: 103c7d6a8; end: 103c7d70b;  */

undefined8 FUN_103c7d6a8(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  FUN_103c85cd8(uVar1,*param_2);
  if (((uVar1 & 1) == 0) || (func_0x000100e25fcc(uVar2,uVar4,uVar3,uVar5), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 103c7d70c; end: 103c7d79b;  */

uint FUN_103c7d70c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103c863e4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c7d79c; end: 103c7d83b;  */

/* WARNING: Possible PIC construction at 0x000103c7d7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7d7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7d7ec) */
/* WARNING: Removing unreachable block (ram,0x000103c7d7fc) */

void FUN_103c7d79c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffd900 != -1) {
    func_0x000107c61568(0x112ffd900,0x103c7d754);
  }
  uVar5 = uRam000000011380d208;
  uVar4 = uRam000000011380d200;
  uVar3 = uRam000000011380d1f8;
  uVar2 = uRam000000011380d1f0;
  uVar1 = uRam000000011380d1e8;
  *param_1 = uRam000000011380d1e0;
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



/* Entry: 103c7d83c; end: 103c7d883;  */

void FUN_103c7d83c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc6e050,0x33,2);
  uRam000000011380d218 = uStack_38;
  uRam000000011380d210 = uStack_40;
  uRam000000011380d228 = uStack_28;
  uRam000000011380d220 = uStack_30;
  uRam000000011380d238 = uStack_18;
  uRam000000011380d230 = uStack_20;
  return;
}



/* Entry: 103c7d884; end: 103c7d923;  */

/* WARNING: Possible PIC construction at 0x000103c7d8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7d8e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7d8d4) */
/* WARNING: Removing unreachable block (ram,0x000103c7d8e4) */

void FUN_103c7d884(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffd908 != -1) {
    func_0x000107c61568(0x112ffd908,FUN_103c7d83c);
  }
  uVar5 = uRam000000011380d238;
  uVar4 = uRam000000011380d230;
  uVar3 = uRam000000011380d228;
  uVar2 = uRam000000011380d220;
  uVar1 = uRam000000011380d218;
  *param_1 = uRam000000011380d210;
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



/* Entry: 103c7d924; end: 103c7d96b;  */

void FUN_103c7d924(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc6dfe0,0x65,2);
  uRam000000011380d248 = uStack_38;
  uRam000000011380d240 = uStack_40;
  uRam000000011380d258 = uStack_28;
  uRam000000011380d250 = uStack_30;
  uRam000000011380d268 = uStack_18;
  uRam000000011380d260 = uStack_20;
  return;
}



/* Entry: 103c7d96c; end: 103c7da0b;  */

/* WARNING: Possible PIC construction at 0x000103c7d9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7d9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7d9bc) */
/* WARNING: Removing unreachable block (ram,0x000103c7d9cc) */

void FUN_103c7d96c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffd910 != -1) {
    func_0x000107c61568(0x112ffd910,FUN_103c7d924);
  }
  uVar5 = uRam000000011380d268;
  uVar4 = uRam000000011380d260;
  uVar3 = uRam000000011380d258;
  uVar2 = uRam000000011380d250;
  uVar1 = uRam000000011380d248;
  *param_1 = uRam000000011380d240;
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



/* Entry: 103c7da0c; end: 103c7da53;  */

void FUN_103c7da0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc6df90,0x45,2);
  uRam000000011380d278 = uStack_38;
  uRam000000011380d270 = uStack_40;
  uRam000000011380d288 = uStack_28;
  uRam000000011380d280 = uStack_30;
  uRam000000011380d298 = uStack_18;
  uRam000000011380d290 = uStack_20;
  return;
}



/* Entry: 103c7da54; end: 103c7db57;  */

/* WARNING: Removing unreachable block (ram,0x000103c7db54) */

void FUN_103c7da54(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_103c86888();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_103c7dabc;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x18;
        }
        else {
          if (lVar1 != 4) goto LAB_103c7dacc;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x28;
        }
LAB_103c7dabc:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_103c7dacc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c7db58; end: 103c7dc77;  */

void FUN_103c7db58(undefined8 param_1,undefined8 param_2,long param_3)

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
    FUN_103c86888();
    (*pcVar4)(&lStack_50,1,&UNK_1106f2b28,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(long *)(unaff_x20[2] + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[4];
    uVar1 = unaff_x20[3] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[6];
      uVar1 = unaff_x20[5] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[5],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103c7dc78; end: 103c7dce3;  */

void FUN_103c7dc78(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  return;
}



/* Entry: 103c7dce4; end: 103c7dd0b;  */

void FUN_103c7dce4(void)

{
  FUN_103c7da54();
  return;
}



/* Entry: 103c7dd0c; end: 103c7dd43;  */

uint FUN_103c7dd0c(long param_1,long param_2)

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
  func_0x000103c8cabc();
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



/* Entry: 103c7dd44; end: 103c7dd9b;  */

uint FUN_103c7dd44(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103c8756c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103c7dd9c; end: 103c7de3b;  */

/* WARNING: Possible PIC construction at 0x000103c7dde8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7ddf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7ddec) */
/* WARNING: Removing unreachable block (ram,0x000103c7ddfc) */

void FUN_103c7dd9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffd918 != -1) {
    func_0x000107c61568(0x112ffd918,FUN_103c7da0c);
  }
  uVar5 = uRam000000011380d298;
  uVar4 = uRam000000011380d290;
  uVar3 = uRam000000011380d288;
  uVar2 = uRam000000011380d280;
  uVar1 = uRam000000011380d278;
  *param_1 = uRam000000011380d270;
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



/* Entry: 103c7de3c; end: 103c7de4f;  */

void FUN_103c7de3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ffdd68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ffdd68,&UNK_10dc6dc08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c7de50; end: 103c7df63;  */

void FUN_103c7de50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c7df64; end: 103c7e003;  */

uint FUN_103c7df64(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103c8756c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103c7e004; end: 103c7e0ef;  */

/* WARNING: Removing unreachable block (ram,0x000103c7e0a4) */

void FUN_103c7e004(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103c7e058:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 < 3) {
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_103c7e040;
    }
    if (lVar1 != 2) goto LAB_103c7e058;
    pcVar3 = *(code **)(param_3 + 0x150);
  }
  else {
    if (lVar1 != 3) {
      if (lVar1 == 4) {
        pcVar3 = *(code **)(param_3 + 0x150);
        goto LAB_103c7e040;
      }
      if (lVar1 == 10) {
        FUN_103c7e0f0();
      }
      goto LAB_103c7e058;
    }
    pcVar3 = *(code **)(param_3 + 0x150);
  }
LAB_103c7e040:
  (*pcVar3)();
  goto LAB_103c7e058;
}



/* Entry: 103c7e0f0; end: 103c7e35b;  */

/* WARNING: Removing unreachable block (ram,0x000103c7e29c) */

void FUN_103c7e0f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_198 [56];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar9 = *(long *)(param_1 + 0x58);
  lVar1 = param_1;
  if (lVar9 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uStack_128 = (undefined4)uVar7;
    uStack_124 = (undefined4)((ulong)uVar7 >> 0x20);
    uStack_120 = uVar4;
    uStack_118 = uVar3;
    lStack_110 = lVar9;
    uStack_108 = uVar8;
    uStack_100 = uVar2;
    uStack_f8 = uVar5;
    func_0x000103c85d8c(&uStack_128,&uStack_f0);
    uStack_160 = uVar7;
    uStack_158 = uVar4;
    uStack_150 = uVar3;
    lStack_148 = lVar9;
    uStack_140 = uVar8;
    uStack_138 = uVar2;
    uStack_130 = uVar5;
    FUN_103c85dac(&uStack_160,auStack_198);
    lVar1 = 0;
    func_0x000103c8cd08(0,0,0,0,0,0,0);
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    lStack_98 = lStack_d8;
    uStack_a0 = uStack_e0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_80 = uStack_c0;
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_103c88898();
  (*pcVar6)(&uStack_b0,&UNK_1106f2e70,lVar1,param_3,param_4);
  uVar8 = uStack_80;
  uVar7 = uStack_88;
  uVar5 = uStack_90;
  lVar1 = lStack_98;
  uVar4 = uStack_a0;
  uVar3 = uStack_a8;
  uVar2 = uStack_b0;
  if ((unaff_x21 == 0) && (lStack_98 != 0)) {
    if (lVar9 == 0) {
      uStack_f0 = uStack_b0;
      uStack_e8 = uStack_a8;
      uStack_e0 = uStack_a0;
      lStack_d8 = lStack_98;
      uStack_d0 = uStack_90;
      uStack_c8 = uStack_88;
      uStack_c0 = uStack_80;
      func_0x000103c85de0(&uStack_f0,&uStack_128);
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      uStack_f0 = uStack_b0;
      uStack_e8 = uStack_a8;
      uStack_e0 = uStack_a0;
      lStack_d8 = lStack_98;
      uStack_d0 = uStack_90;
      uStack_c8 = uStack_88;
      uStack_c0 = uStack_80;
      func_0x000103c85de0(&uStack_f0,&uStack_128);
      (*pcVar6)(param_3,param_4);
    }
    func_0x000103c8cd08(uStack_b0,uStack_a8,uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80);
    uStack_128 = (undefined4)uVar2;
    uStack_124 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack_120 = uVar3;
    uStack_118 = uVar4;
    lStack_110 = lVar1;
    uStack_108 = uVar5;
    uStack_100 = uVar7;
    uStack_f8 = uVar8;
    func_0x000103c85d8c(&uStack_128,&uStack_f0);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = *(long *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x48) = uStack_e8;
    *(undefined8 *)(param_1 + 0x40) = uStack_f0;
    *(long *)(param_1 + 0x58) = lStack_d8;
    *(undefined8 *)(param_1 + 0x50) = uStack_e0;
    *(undefined8 *)(param_1 + 0x68) = uStack_c8;
    *(undefined8 *)(param_1 + 0x60) = uStack_d0;
    *(undefined8 *)(param_1 + 0x70) = uStack_c0;
  }
  func_0x000103c8cd08(uVar2,uVar3,uVar4,lVar1,uVar5,uVar7,uVar8);
  return;
}



/* Entry: 103c7e35c; end: 103c7e477;  */

void FUN_103c7e35c(undefined8 param_1,undefined8 param_2,long param_3)

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
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[7];
        uVar1 = unaff_x20[6] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if (((uVar1 == 0) ||
            ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0))
           && (FUN_103c7e478(), unaff_x21 == 0)) {
          func_0x000100076224(param_1,unaff_x20[0xf],unaff_x20[0x10],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 103c7e478; end: 103c7e537;  */

void FUN_103c7e478(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
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
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_f0 = *(undefined8 *)(param_1 + 0x40);
  lStack_d8 = *(long *)(param_1 + 0x58);
  uStack_e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_c0 = *(undefined8 *)(param_1 + 0x70);
  if (lStack_d8 != 0) {
    func_0x000103c85d8c(&uStack_f0,auStack_b0);
    puVar1 = auStack_b0;
    func_0x000103c85d8c(puVar1,&uStack_78);
    uStack_128 = uStack_70;
    uStack_130 = uStack_78;
    uStack_118 = uStack_60;
    uStack_120 = uStack_68;
    uStack_108 = uStack_50;
    uStack_110 = uStack_58;
    uStack_100 = uStack_48;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103c88898();
    (*pcVar2)(&uStack_130,10,&UNK_1106f2e70,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103c7e538; end: 103c7e587;  */

void FUN_103c7e538(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0xc000000000000000;
  return;
}



/* Entry: 103c7e588; end: 103c7e5b7;  */

undefined1  [16] FUN_103c7e588(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x78);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return auVar1;
}



/* Entry: 103c7e5b8; end: 103c7e5eb;  */

void FUN_103c7e5b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  *(undefined8 *)(unaff_x20 + 0x80) = param_2;
  return;
}



/* Entry: 103c7e5ec; end: 103c7e5ff;  */

undefined1  [16] FUN_103c7e5ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x78;
  auVar1._0_8_ = 0x103c7e5fc;
  return auVar1;
}



/* Entry: 103c7e600; end: 103c7e613;  */

void FUN_103c7e600(void)

{
  FUN_103c7e004();
  return;
}



/* Entry: 103c7e614; end: 103c7e663;  */

void FUN_103c7e614(void)

{
  FUN_103c7e35c();
  return;
}



/* Entry: 103c7e664; end: 103c7e667;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c7e664(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103c7e668; end: 103c7e69f;  */

uint FUN_103c7e668(long param_1,long param_2)

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
  func_0x000103c8ca7c();
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



/* Entry: 103c7e6a0; end: 103c7e71f;  */

uint FUN_103c7e6a0(undefined8 *param_1)

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
  FUN_103c87724(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103c7e720; end: 103c7e7bf;  */

/* WARNING: Possible PIC construction at 0x000103c7e76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7e77c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7e770) */
/* WARNING: Removing unreachable block (ram,0x000103c7e780) */

void FUN_103c7e720(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffd930 != -1) {
    func_0x000107c61568(0x112ffd930,0x103c7dfbc);
  }
  uVar5 = uRam000000011380d2c8;
  uVar4 = uRam000000011380d2c0;
  uVar3 = uRam000000011380d2b8;
  uVar2 = uRam000000011380d2b0;
  uVar1 = uRam000000011380d2a8;
  *param_1 = uRam000000011380d2a0;
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



/* Entry: 103c7e7c0; end: 103c7e7fb;  */

void FUN_103c7e7c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ffdd58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ffdd58,&UNK_10dc6dc00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c7e7fc; end: 103c7e937;  */

void FUN_103c7e7fc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103c7e938; end: 103c7e9b7;  */

uint FUN_103c7e938(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103c87724(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103c7e9b8; end: 103c7e9ff;  */

void FUN_103c7e9b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc6de80,0xaf,2);
  uRam000000011380d2d8 = uStack_38;
  uRam000000011380d2d0 = uStack_40;
  uRam000000011380d2e8 = uStack_28;
  uRam000000011380d2e0 = uStack_30;
  uRam000000011380d2f8 = uStack_18;
  uRam000000011380d2f0 = uStack_20;
  return;
}



/* Entry: 103c7ea00; end: 103c7eb2b;  */

/* WARNING: Removing unreachable block (ram,0x000103c7eb04) */

void FUN_103c7ea00(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x78);
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x78);
        }
        else {
          if (lVar1 != 3) goto LAB_103c7ea78;
          pcVar3 = *(code **)(param_3 + 0x60);
        }
LAB_103c7ea68:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x60);
          goto LAB_103c7ea68;
        }
        if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x160);
          goto LAB_103c7ea68;
        }
        if (lVar1 == 6) {
          pcVar3 = *(code **)(param_3 + 0x1a0);
          func_0x000103c87ab0();
          (*pcVar3)(unaff_x20 + 0x20,&UNK_1106f2f08,lVar1,param_2,param_3);
        }
      }
LAB_103c7ea78:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c7eb2c; end: 103c7ec63;  */

void FUN_103c7eb2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  if ((((((*unaff_x20 == 0) ||
         ((**(code **)(param_3 + 0x28))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
        ((unaff_x20[1] == 0 ||
         ((**(code **)(param_3 + 0x28))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(long *)(unaff_x20 + 2) == 0 ||
        ((**(code **)(param_3 + 0x20))(*(long *)(unaff_x20 + 2),3,param_2,param_3), unaff_x21 == 0))
       )) && ((*(long *)(unaff_x20 + 4) == 0 ||
              ((**(code **)(param_3 + 0x20))(*(long *)(unaff_x20 + 4),4,param_2,param_3),
              unaff_x21 == 0)))) &&
     ((lVar1 = *(long *)(unaff_x20 + 6), *(long *)(lVar1 + 0x10) == 0 ||
      ((**(code **)(param_3 + 0x100))(lVar1,5,param_2,param_3), unaff_x21 == 0)))) {
    lVar2 = *(long *)(unaff_x20 + 8);
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x000103c87ab0();
      (*pcVar3)(lVar2,6,&UNK_1106f2f08,lVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103c7ec64; end: 103c7ecbf;  */

void FUN_103c7ec64(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 103c7ecc0; end: 103c7ece7;  */

void FUN_103c7ecc0(void)

{
  FUN_103c7ea00();
  return;
}



/* Entry: 103c7ece8; end: 103c7ed1f;  */

uint FUN_103c7ece8(long param_1,long param_2)

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
  func_0x000103c8ca3c();
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



/* Entry: 103c7ed20; end: 103c7ed77;  */

uint FUN_103c7ed20(undefined8 *param_1)

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
  FUN_103c85e14(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c7ed78; end: 103c7ee17;  */

/* WARNING: Possible PIC construction at 0x000103c7edc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7edd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7edc8) */
/* WARNING: Removing unreachable block (ram,0x000103c7edd8) */

void FUN_103c7ed78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffd940 != -1) {
    func_0x000107c61568(0x112ffd940,FUN_103c7e9b8);
  }
  uVar5 = uRam000000011380d2f8;
  uVar4 = uRam000000011380d2f0;
  uVar3 = uRam000000011380d2e8;
  uVar2 = uRam000000011380d2e0;
  uVar1 = uRam000000011380d2d8;
  *param_1 = uRam000000011380d2d0;
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



/* Entry: 103c7ee18; end: 103c7ee2b;  */

void FUN_103c7ee18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ffdd48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ffdd48,&UNK_10dc6dbf8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c7ee2c; end: 103c7ef3f;  */

void FUN_103c7ee2c(undefined8 param_1,undefined8 param_2)

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
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c7ef40; end: 103c7ef97;  */

uint FUN_103c7ef40(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103c85e14(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c7ef98; end: 103c7f00b;  */

void FUN_103c7ef98(void)

{
  func_0x000107c5fb78(0x496e69616d6f442e,0xee00756b536d6574);
  uRam000000011380d300 = 0xd000000000000029;
  uRam000000011380d308 = 0x800000010f1b2690;
  return;
}



/* Entry: 103c7f00c; end: 103c7f053;  */

void FUN_103c7f00c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc6de50,0x23,2);
  uRam000000011380d318 = uStack_38;
  uRam000000011380d310 = uStack_40;
  uRam000000011380d328 = uStack_28;
  uRam000000011380d320 = uStack_30;
  uRam000000011380d338 = uStack_18;
  uRam000000011380d330 = uStack_20;
  return;
}



/* Entry: 103c7f054; end: 103c7f0eb;  */

void FUN_103c7f054(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103c7f0a8:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103c7f0c4;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103c7f090;
code_r0x000103c7f0c4:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_103c7f090:
    (*pcVar3)();
  }
  goto LAB_103c7f0a8;
}



/* Entry: 103c7f0ec; end: 103c7f18f;  */

void FUN_103c7f0ec(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 103c7f190; end: 103c7f1ab;  */

void FUN_103c7f190(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 103c7f1ac; end: 103c7f207;  */

undefined1  [16] FUN_103c7f1ac(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112ffd958 != -1) {
    func_0x000107c61568(0x112ffd958,FUN_103c7ef98);
  }
  auVar1._8_8_ = uRam000000011380d308;
  auVar1._0_8_ = uRam000000011380d300;
  func_0x000107c61434(uRam000000011380d308);
  return auVar1;
}



/* Entry: 103c7f208; end: 103c7f20f;  */

undefined8 FUN_103c7f208(void)

{
  return 1;
}



/* Entry: 103c7f210; end: 103c7f23f;  */

undefined1  [16] FUN_103c7f210(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103c7f240; end: 103c7f273;  */

void FUN_103c7f240(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103c7f274; end: 103c7f287;  */

undefined1  [16] FUN_103c7f274(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103c7f284;
  return auVar1;
}



/* Entry: 103c7f288; end: 103c7f2af;  */

void FUN_103c7f288(void)

{
  FUN_103c7f054();
  return;
}



/* Entry: 103c7f2b0; end: 103c7f2b3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c7f2b0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103c7f2b4; end: 103c7f2eb;  */

uint FUN_103c7f2b4(long param_1,long param_2)

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
  func_0x000103c8c9fc();
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



/* Entry: 103c7f2ec; end: 103c7f333;  */

uint FUN_103c7f2ec(undefined8 *param_1)

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
  FUN_103c87b30(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c7f334; end: 103c7f3d3;  */

/* WARNING: Possible PIC construction at 0x000103c7f380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7f390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7f384) */
/* WARNING: Removing unreachable block (ram,0x000103c7f394) */

void FUN_103c7f334(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffd960 != -1) {
    func_0x000107c61568(0x112ffd960,FUN_103c7f00c);
  }
  uVar5 = uRam000000011380d338;
  uVar4 = uRam000000011380d330;
  uVar3 = uRam000000011380d328;
  uVar2 = uRam000000011380d320;
  uVar1 = uRam000000011380d318;
  *param_1 = uRam000000011380d310;
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



/* Entry: 103c7f3d4; end: 103c7f40f;  */

void FUN_103c7f3d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ffdd38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ffdd38,&UNK_10dc6dbf0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c7f410; end: 103c7f523;  */

void FUN_103c7f410(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103c7f524; end: 103c7f5af;  */

uint FUN_103c7f524(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103c87b30(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c7f5b0; end: 103c7f6b3;  */

/* WARNING: Removing unreachable block (ram,0x000103c7f6b0) */

void FUN_103c7f5b0(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103c87bec();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_103c7f618;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 4) goto LAB_103c7f628;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x30;
        }
LAB_103c7f618:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_103c7f628:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c7f6b4; end: 103c7f7df;  */

void FUN_103c7f6b4(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000103c87bec();
    (*pcVar4)(&lStack_50,1,&UNK_1106f2bb8,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[7];
      uVar1 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103c7f7e0; end: 103c7f82f;  */

void FUN_103c7f7e0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}


