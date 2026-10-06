/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045dd480; end: 1045dd63f;  */

/* WARNING: Removing unreachable block (ram,0x0001045dd574) */
/* WARNING: Removing unreachable block (ram,0x0001045dd63c) */
/* WARNING: Removing unreachable block (ram,0x0001045dd5f4) */
/* WARNING: Removing unreachable block (ram,0x0001045dd5a8) */

void FUN_1045dd480(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          _swift_beginAccess(param_1 + 0x10,auStack_78,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x158);
          lVar1 = param_1 + 0x10;
LAB_1045dd618:
          (*pcVar3)(lVar1,param_3,param_4);
          _swift_endAccess(auStack_78);
        }
        else if (lVar1 == 2) {
          FUN_1045dd640(param_2,param_1,param_3,param_4,0x1045fb7e0,&UNK_11078d638);
        }
        else if (lVar1 == 3) {
          FUN_1045df32c(param_2,param_1,param_3,param_4,FUN_1045f9ef4,&UNK_11078ddf8);
        }
      }
      else if (lVar1 == 4) {
        FUN_1045dd6e0(param_2,param_1,param_3,param_4);
      }
      else {
        if (lVar1 == 5) {
          _swift_beginAccess(param_1 + 0x78,auStack_78,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x160);
          lVar1 = param_1 + 0x78;
          goto LAB_1045dd618;
        }
        if (lVar1 == 6) {
          FUN_1045dd774(param_2,param_1,param_3,param_4);
        }
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045dd640; end: 1045dd6df;  */

void FUN_1045dd640(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x20;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  (*param_5)();
  (*pcVar2)(param_2 + 0x20,param_6,lVar1,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 1045dd6e0; end: 1045dd773;  */

void FUN_1045dd6e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001045fb6a4();
  (*pcVar2)(param_2 + 0x70,&UNK_11078d5b0,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045dd774; end: 1045dd807;  */

void FUN_1045dd774(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  FUN_1046040b4();
  (*pcVar2)(param_2 + 0x80,&UNK_11078cde8,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 1045dd808; end: 1045dd823;  */

void FUN_1045dd808(void)

{
  FUN_1045dd824();
  return;
}



/* Entry: 1045dd824; end: 1045dd88f;  */

void FUN_1045dd824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long unaff_x21;
  
  (*param_7)(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1045dd890; end: 1045ddb63;  */

void FUN_1045dd890(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_238 [72];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b8,0,0);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar3);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_d0,0,0);
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_10460fd84();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_138,0,0);
  uStack_118 = *(undefined8 *)(param_1 + 0x30);
  lStack_120 = *(long *)(param_1 + 0x28);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  if (lStack_120 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_98 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = *(undefined8 *)(param_1 + 0x28);
    __ss6HasherV8_combineyySuF(3);
    uStack_1c8 = param_2[5];
    uStack_1d0 = param_2[4];
    uStack_1b8 = param_2[7];
    uStack_1c0 = param_2[6];
    uStack_1b0 = param_2[8];
    uStack_1e8 = param_2[1];
    uStack_1f0 = *param_2;
    uStack_1d8 = param_2[3];
    uStack_1e0 = param_2[2];
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_160 = uStack_e0;
    uStack_198 = uStack_118;
    lStack_1a0 = lStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    FUN_1045f8d80(&lStack_1a0,auStack_238);
    FUN_1045ea390(&uStack_1f0);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    func_0x000104603c54(&lStack_120,0x113087020,&UNK_10dd19c30);
    param_2[5] = uStack_1c8;
    param_2[4] = uStack_1d0;
    param_2[7] = uStack_1b8;
    param_2[6] = uStack_1c0;
    param_2[8] = uStack_1b0;
    param_2[1] = uStack_1e8;
    *param_2 = uStack_1f0;
    param_2[3] = uStack_1d8;
    param_2[2] = uStack_1e0;
  }
  _swift_beginAccess(param_1 + 0x70,&lStack_1a0,0,0);
  lVar3 = *(long *)(param_1 + 0x70);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_10461b5a0();
    _swift_bridgeObjectRelease(lVar3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  _swift_beginAccess(param_1 + 0x78,auStack_238,0,0);
  lVar3 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar3 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar3 + 0x10));
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      _swift_bridgeObjectRetain(lVar3);
      puVar6 = (undefined8 *)(lVar3 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar1 = *puVar6;
        _swift_bridgeObjectRetain(uVar1);
        __sSS4hash4intoys6HasherVz_tF(param_2,uVar4,uVar1);
        _swift_bridgeObjectRelease(uVar1);
        puVar6 = puVar6 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      _swift_bridgeObjectRelease(lVar3);
    }
  }
  _swift_beginAccess(param_1 + 0x80,auStack_150,0,0);
  cVar2 = *(char *)(param_1 + 0x80);
  if (cVar2 != '\x03') {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyySuF(cVar2);
  }
  return;
}



/* Entry: 1045ddb64; end: 1045ddd23;  */

/* WARNING: Removing unreachable block (ram,0x0001045ddc04) */

void FUN_1045ddb64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_1045e2f54();
  if (unaff_x21 == 0) {
    _swift_beginAccess(param_1 + 0x20,auStack_68,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045fb7e0();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_1045ddd24(param_1,param_2,param_3,param_4);
    _swift_beginAccess(param_1 + 0x70,auStack_80,0,0);
    lVar1 = *(long *)(param_1 + 0x70);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x0001045fb6a4();
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    _swift_beginAccess(param_1 + 0x78,auStack_98,0,0);
    lVar1 = *(long *)(param_1 + 0x78);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x100);
      _swift_bridgeObjectRetain(lVar1);
      (*pcVar2)();
      _swift_bridgeObjectRelease(lVar1);
    }
    FUN_1045dddd4(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1045ddd24; end: 1045dddd3;  */

void FUN_1045ddd24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_a0 = *(long *)(param_1 + 0x28);
  if (lStack_a0 != 0) {
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1045f9ef4();
    (*pcVar2)(&lStack_a0,3,&UNK_11078ddf8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1045dddd4; end: 1045dde6f;  */

void FUN_1045dddd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0x80;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0x80);
  if (cStack_31 != '\x03') {
    pcVar2 = *(code **)(param_4 + 0x80);
    FUN_1046040b4();
    (*pcVar2)(&cStack_31,6,&UNK_11078cde8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1045dde70; end: 1045dde7b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045dde70(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar17 = param_3;
    FUN_1045dde7c(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
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



/* Entry: 1045dde7c; end: 1045de2d3;  */

undefined8 FUN_1045dde7c(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_3b8 [72];
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  uVar7 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_c0,0,0);
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    if ((uVar7 != *(ulong *)(param_2 + 0x10) || lVar1 != lVar5) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,lVar1,*(ulong *)(param_2 + 0x10),lVar5,0), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x20,auStack_d8,0,0);
  uVar6 = *(ulong *)(param_1 + 0x20);
  _swift_beginAccess(param_2 + 0x20,auStack_f0,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x0001045bd090(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x28,auStack_1a8,0,0);
  _swift_beginAccess(param_2 + 0x28,auStack_1c0,0,0);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_2 + 0x30);
  uStack_140 = *(undefined8 *)(param_2 + 0x28);
  uStack_128 = *(undefined8 *)(param_2 + 0x40);
  uStack_130 = *(undefined8 *)(param_2 + 0x38);
  uStack_118 = *(undefined8 *)(param_2 + 0x50);
  uStack_120 = *(undefined8 *)(param_2 + 0x48);
  uStack_108 = *(undefined8 *)(param_2 + 0x60);
  uStack_110 = *(undefined8 *)(param_2 + 0x58);
  uStack_100 = *(undefined8 *)(param_2 + 0x68);
  uStack_290 = *(undefined8 *)(param_2 + 0x30);
  lStack_298 = *(long *)(param_2 + 0x28);
  uStack_280 = *(undefined8 *)(param_2 + 0x40);
  uStack_288 = *(undefined8 *)(param_2 + 0x38);
  uStack_270 = *(undefined8 *)(param_2 + 0x50);
  uStack_278 = *(undefined8 *)(param_2 + 0x48);
  uStack_260 = *(undefined8 *)(param_2 + 0x60);
  uStack_268 = *(undefined8 *)(param_2 + 0x58);
  uStack_258 = *(undefined8 *)(param_2 + 0x68);
  lStack_208 = lStack_298;
  uStack_200 = uStack_290;
  uStack_1f8 = uStack_288;
  uStack_1f0 = uStack_280;
  uStack_1e8 = uStack_278;
  uStack_1e0 = uStack_270;
  uStack_1d8 = uStack_268;
  uStack_1d0 = uStack_260;
  uStack_1c8 = uStack_258;
  lStack_190 = lStack_250;
  uStack_188 = uStack_248;
  uStack_180 = uStack_240;
  uStack_178 = uStack_238;
  uStack_170 = uStack_230;
  uStack_168 = uStack_228;
  uStack_160 = uStack_220;
  uStack_158 = uStack_218;
  uStack_150 = uStack_210;
  if (lStack_250 == 0) {
    if (lStack_298 != 0) goto LAB_1045de0d8;
    uStack_2c8 = *(undefined8 *)(param_1 + 0x40);
    uStack_2d0 = *(undefined8 *)(param_1 + 0x38);
    uStack_2b8 = *(undefined8 *)(param_1 + 0x50);
    uStack_2c0 = *(undefined8 *)(param_1 + 0x48);
    uStack_2a8 = *(undefined8 *)(param_1 + 0x60);
    uStack_2b0 = *(undefined8 *)(param_1 + 0x58);
    uStack_2a0 = *(undefined8 *)(param_1 + 0x68);
    uStack_2d8 = *(undefined8 *)(param_1 + 0x30);
    lStack_2e0 = *(long *)(param_1 + 0x28);
    func_0x0001045f8fa8(&lStack_190,&uStack_90,0x113087020,&UNK_10dd19c30);
    func_0x0001045f8fa8(&uStack_140,&uStack_90,0x113087020,&UNK_10dd19c30);
    func_0x000104603c54(&lStack_2e0,0x113087020,&UNK_10dd19c30);
  }
  else {
    if (lStack_298 == 0) {
LAB_1045de0d8:
      lStack_2e0 = lStack_250;
      uStack_2d8 = uStack_248;
      uStack_2d0 = uStack_240;
      uStack_2c8 = uStack_238;
      uStack_2c0 = uStack_230;
      uStack_2b8 = uStack_228;
      uStack_2b0 = uStack_220;
      uStack_2a8 = uStack_218;
      uStack_2a0 = uStack_210;
      func_0x0001045f8fa8(&lStack_190,&uStack_90,0x113087020,&UNK_10dd19c30);
      func_0x0001045f8fa8(&uStack_140,&uStack_90,0x113087020,&UNK_10dd19c30);
      func_0x000104603c54(&lStack_2e0,0x113087a08,&UNK_10dd19c38);
      return 0;
    }
    uStack_358 = *(undefined8 *)(param_2 + 0x40);
    uStack_360 = *(undefined8 *)(param_2 + 0x38);
    uStack_348 = *(undefined8 *)(param_2 + 0x50);
    uStack_350 = *(undefined8 *)(param_2 + 0x48);
    uStack_338 = *(undefined8 *)(param_2 + 0x60);
    uStack_340 = *(undefined8 *)(param_2 + 0x58);
    uStack_330 = *(undefined8 *)(param_2 + 0x68);
    uStack_368 = *(undefined8 *)(param_2 + 0x30);
    lStack_370 = *(long *)(param_2 + 0x28);
    uStack_88 = *(undefined8 *)(param_1 + 0x30);
    uStack_90 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    lStack_2e0 = lStack_370;
    uStack_2d8 = uStack_368;
    uStack_2d0 = uStack_360;
    uStack_2c8 = uStack_358;
    uStack_2c0 = uStack_350;
    uStack_2b8 = uStack_348;
    uStack_2b0 = uStack_340;
    uStack_2a8 = uStack_338;
    uStack_2a0 = uStack_330;
    func_0x0001045f8fa8(&lStack_190,auStack_3b8,0x113087020,&UNK_10dd19c30);
    func_0x0001045f8fa8(&uStack_140,auStack_3b8,0x113087020,&UNK_10dd19c30);
    puVar4 = &uStack_90;
    func_0x0001045f7e5c(puVar4,&lStack_2e0);
    func_0x000104603c54(&lStack_370,0x113087020,&UNK_10dd19c30);
    func_0x000104603c54(&lStack_250,0x113087020,&UNK_10dd19c30);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x70,&lStack_250,0,0);
  uVar6 = *(ulong *)(param_1 + 0x70);
  _swift_beginAccess(param_2 + 0x70,&lStack_370,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x70);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = uVar6;
  func_0x0001045bd570(uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) != 0) {
    _swift_beginAccess(param_1 + 0x78,auStack_3b8,0,0);
    uVar7 = *(ulong *)(param_1 + 0x78);
    _swift_beginAccess(param_2 + 0x78,auStack_2f8,0,0);
    func_0x00010142cfc4(uVar7,*(undefined8 *)(param_2 + 0x78));
    if ((uVar7 & 1) != 0) {
      _swift_beginAccess(param_1 + 0x80,auStack_310,0,0);
      cVar2 = *(char *)(param_1 + 0x80);
      _swift_beginAccess(param_2 + 0x80,auStack_328,0,0);
      cVar3 = *(char *)(param_2 + 0x80);
      if (cVar2 == '\x03') {
        if (cVar3 != '\x03') {
          return 0;
        }
      }
      else {
        if (cVar3 == '\x03') {
          return 0;
        }
        if (cVar2 != cVar3) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045de2d4; end: 1045de2fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045f1e40) */

void FUN_1045de2d4(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_1045dd890(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_1045f1eb8;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_1045f1e48;
  }
  else {
    if (uVar2 != 2) goto LAB_1045f1e48;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_1045f1eb8:
    if (lVar3 == lVar4) goto LAB_1045f1e48;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_1045f1e48:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045de2fc; end: 1045de353;  */

void FUN_1045de2fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  uVar1 = *param_5;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1045de354; end: 1045de38b;  */

undefined1  [16] FUN_1045de354(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f2084a0;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 1045de38c; end: 1045de3c3;  */

void FUN_1045de38c(void)

{
  FUN_1045dd384();
  return;
}



/* Entry: 1045de3c4; end: 1045de463;  */

void FUN_1045de3c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f60 != -1) {
    _swift_once(0x113087f60,FUN_1045dcfa8);
  }
  uVar5 = uRam00000001138141a8;
  uVar4 = uRam00000001138141a0;
  uVar3 = uRam0000000113814198;
  uVar2 = uRam0000000113814190;
  uVar1 = uRam0000000113814188;
  *param_1 = uRam0000000113814180;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045de464; end: 1045de48f;  */

void FUN_1045de464(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893a8,&UNK_10dd1d8b8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045de490; end: 1045de50f;  */

/* WARNING: Removing unreachable block (ram,0x0001045de4dc) */

void FUN_1045de490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
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
  FUN_1045f14a4(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],param_4);
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



/* Entry: 1045de510; end: 1045de527;  */

/* WARNING: Removing unreachable block (ram,0x0001045f21a4) */

void FUN_1045de510(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_1045dd890(uVar3,&uStack_e0);
  FUN_1045befbc(&uStack_e0,uVar1,uVar2);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045de528; end: 1045de597;  */

void FUN_1045de528(void)

{
  __sSS6appendyySSF(0xd000000000000012,0x800000010f208780);
  uRam00000001138141b0 = 0xd000000000000023;
  uRam00000001138141b8 = 0x800000010f2084a0;
  return;
}



/* Entry: 1045de598; end: 1045de5d7;  */

undefined8 FUN_1045de598(void)

{
  if (lRam0000000113087f68 != -1) {
    _swift_once(0x113087f68,FUN_1045de528);
  }
  return 0x1138141b0;
}



/* Entry: 1045de5d8; end: 1045de5f7;  */

undefined1  [16] FUN_1045de5d8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113087f68 != -1) {
    _swift_once(0x113087f68,FUN_1045de528);
  }
  auVar1._8_8_ = uRam00000001138141b8;
  auVar1._0_8_ = uRam00000001138141b0;
  _swift_bridgeObjectRetain(uRam00000001138141b8);
  return auVar1;
}



/* Entry: 1045de5f8; end: 1045de6b7;  */

void FUN_1045de5f8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e519,0xd,&uStack_48,&lStack_40);
  puRam00000001138141c8 = puStack_38;
  lRam00000001138141c0 = lStack_40;
  puRam00000001138141d8 = puStack_28;
  puRam00000001138141d0 = puStack_30;
  puRam00000001138141e8 = puStack_18;
  puRam00000001138141e0 = puStack_20;
  return;
}



/* Entry: 1045de6b8; end: 1045de757;  */

void FUN_1045de6b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f70 != -1) {
    _swift_once(0x113087f70,FUN_1045de5f8);
  }
  uVar5 = uRam00000001138141e8;
  uVar4 = uRam00000001138141e0;
  uVar3 = uRam00000001138141d8;
  uVar2 = uRam00000001138141d0;
  uVar1 = uRam00000001138141c8;
  *param_1 = uRam00000001138141c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045de758; end: 1045de7ef;  */

void FUN_1045de758(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1045de7ac:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001045de7c8;
  pcVar3 = *(code **)(param_3 + 0x50);
  lVar1 = unaff_x20 + 0x10;
  goto LAB_1045de794;
code_r0x0001045de7c8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x50);
    lVar1 = unaff_x20 + 0x18;
LAB_1045de794:
    (*pcVar3)(lVar1,param_2,param_3);
  }
  goto LAB_1045de7ac;
}



/* Entry: 1045de7f0; end: 1045de89f;  */

void FUN_1045de7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((param_4 & 0xff00000000) != 0x100000000) {
    (**(code **)(param_7 + 0x18))(param_4,1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    if ((param_5 & 0xff00000000) != 0x100000000) {
      (**(code **)(param_7 + 0x18))(param_5,2,param_6,param_7);
    }
    func_0x000100076224(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



/* Entry: 1045de8a0; end: 1045de903;  */

void FUN_1045de8a0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001045bf928(auStack_78,param_1,param_2,param_3 & 0xffffffffff,param_4 & 0xffffffffff);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045de904; end: 1045de937;  */

undefined1  [16] FUN_1045de904(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113087f68 != -1) {
    _swift_once(0x113087f68,FUN_1045de528);
  }
  auVar1._8_8_ = uRam00000001138141b8;
  auVar1._0_8_ = uRam00000001138141b0;
  _swift_bridgeObjectRetain(uRam00000001138141b8);
  return auVar1;
}



/* Entry: 1045de938; end: 1045de98f;  */

void FUN_1045de938(void)

{
  func_0x0001045de954();
  return;
}



/* Entry: 1045de990; end: 1045dea2f;  */

void FUN_1045de990(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f70 != -1) {
    _swift_once(0x113087f70,FUN_1045de5f8);
  }
  uVar5 = uRam00000001138141e8;
  uVar4 = uRam00000001138141e0;
  uVar3 = uRam00000001138141d8;
  uVar2 = uRam00000001138141d0;
  uVar1 = uRam00000001138141c8;
  *param_1 = uRam00000001138141c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dea30; end: 1045dea43;  */

void FUN_1045dea30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130893a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130893a0,&UNK_10dd1d8b0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045dea44; end: 1045dea77;  */

void FUN_1045dea44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 1045dea78; end: 1045deae7;  */

void FUN_1045dea78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint5 uVar3;
  uint5 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint5 *)(unaff_x20 + 2);
  uVar4 = *(uint5 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  func_0x0001045bf928(auStack_88,uVar1,uVar2,(ulong)uVar3,(ulong)uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045deae8; end: 1045deb17;  */

void FUN_1045deae8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001045bf928(param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint5 *)(unaff_x20 + 2),
                      (ulong)*(uint5 *)(unaff_x20 + 3));
  return;
}



/* Entry: 1045deb18; end: 1045deb83;  */

void FUN_1045deb18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint5 uVar3;
  uint5 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint5 *)(unaff_x20 + 2);
  uVar4 = *(uint5 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  func_0x0001045bf928(auStack_88,uVar1,uVar2,(ulong)uVar3,(ulong)uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045deb84; end: 1045debdb;  */

uint FUN_1045deb84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1045f50f4(uVar1,param_1[1],(ulong)*(uint5 *)(param_1 + 2),(ulong)*(uint5 *)(param_1 + 3),
                *param_2,param_2[1],(ulong)*(uint5 *)(param_2 + 2),(ulong)*(uint5 *)(param_2 + 3));
  return (uint)uVar1 & 1;
}



/* Entry: 1045debdc; end: 1045dec03;  */

undefined * FUN_1045debdc(void)

{
  return &UNK_11078b1d8;
}



/* Entry: 1045dec04; end: 1045decc3;  */

void FUN_1045dec04(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e500,0x18,&uStack_48,&lStack_40);
  puRam00000001138141f8 = puStack_38;
  lRam00000001138141f0 = lStack_40;
  puRam0000000113814208 = puStack_28;
  puRam0000000113814200 = puStack_30;
  puRam0000000113814218 = puStack_18;
  puRam0000000113814210 = puStack_20;
  return;
}



/* Entry: 1045decc4; end: 1045ded63;  */

void FUN_1045decc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f78 != -1) {
    _swift_once(0x113087f78,FUN_1045dec04);
  }
  uVar5 = uRam0000000113814218;
  uVar4 = uRam0000000113814210;
  uVar3 = uRam0000000113814208;
  uVar2 = uRam0000000113814200;
  uVar1 = uRam00000001138141f8;
  *param_1 = uRam00000001138141f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045ded64; end: 1045def73;  */

void FUN_1045ded64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long unaff_x20;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
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
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
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
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  puVar5 = (undefined4 *)(unaff_x20 + 0x20);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar6 = 0;
  *(undefined1 *)(unaff_x20 + 0x24) = 1;
  FUN_10458a550(&uStack_1d0);
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_180;
  *(ulong *)(unaff_x20 + 0x90) = CONCAT71(uStack_167,uStack_168);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x99) = uStack_15f;
  *(ulong *)(unaff_x20 + 0x91) = CONCAT17(uStack_160,uStack_167);
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_1a0;
  _swift_beginAccess(param_1 + 0x10,auStack_1e8,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar6,auStack_200,1,0);
  *puVar6 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  _swift_beginAccess(param_1 + 0x20,auStack_218,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined1 *)(param_1 + 0x24);
  _swift_beginAccess(puVar5,auStack_230,1,0);
  *puVar5 = uVar3;
  *(undefined1 *)(unaff_x20 + 0x24) = uVar4;
  _swift_beginAccess(param_1 + 0x28,auStack_248,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_e8 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_df = *(undefined8 *)(param_1 + 0x99);
  uStack_e7 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  uStack_150 = *(undefined8 *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  _swift_bridgeObjectRetain(uVar2);
  func_0x0001045f8fa8(&uStack_150,&uStack_d0,0x113087018,&UNK_10dd18930);
  _swift_release(param_1);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_260,1,0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_68 = (undefined1)*(undefined8 *)(unaff_x20 + 0x90);
  uStack_5f = *(undefined8 *)(unaff_x20 + 0x99);
  uStack_67 = (undefined7)*(undefined8 *)(unaff_x20 + 0x91);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x91) >> 0x38);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x99) = uStack_df;
  *(ulong *)(unaff_x20 + 0x91) = CONCAT17(uStack_e0,uStack_e7);
  *(ulong *)(unaff_x20 + 0x90) = CONCAT71(uStack_e7,uStack_e8);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_110;
  func_0x000104603c54(&uStack_d0,0x113087018,&UNK_10dd18930);
  return;
}



/* Entry: 1045def74; end: 1045defaf;  */

void FUN_1045def74(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000104603c54(unaff_x20 + 0x28,0x113087018,&UNK_10dd18930);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1045defb0; end: 1045df12b;  */

void FUN_1045defb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_1f0 [128];
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_3 + 0x28,auStack_e8,0,0);
  uStack_c8 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(ulong *)(param_3 + 0x28);
  uVar6 = *(ulong *)(param_3 + 0x40);
  uStack_c0 = *(undefined8 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x50);
  uStack_b0 = *(undefined8 *)(param_3 + 0x48);
  uVar7 = *(ulong *)(param_3 + 0x60);
  uVar5 = *(undefined8 *)(param_3 + 0x58);
  uStack_88 = *(undefined8 *)(param_3 + 0x70);
  uVar3 = *(undefined8 *)(param_3 + 0x68);
  uStack_78 = *(undefined8 *)(param_3 + 0x80);
  uStack_80 = *(undefined8 *)(param_3 + 0x78);
  uStack_70 = *(undefined8 *)(param_3 + 0x88);
  uStack_68 = (undefined1)*(undefined8 *)(param_3 + 0x90);
  uStack_5f = *(undefined8 *)(param_3 + 0x99);
  uStack_67 = (undefined7)*(undefined8 *)(param_3 + 0x91);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x91) >> 0x38);
  iVar1 = (int)&uStack_d0;
  uStack_d0 = uVar2;
  uStack_b8 = uVar6;
  uStack_a8 = uVar4;
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  uStack_90 = uVar3;
  FUN_1045f8e00();
  if (iVar1 == 1) {
    return;
  }
  uStack_128 = uStack_88;
  uStack_130 = uStack_90;
  uStack_118 = uStack_78;
  uStack_120 = uStack_80;
  uStack_108 = uStack_68;
  uStack_110 = uStack_70;
  uStack_ff = uStack_5f;
  uStack_107 = uStack_67;
  uStack_100 = uStack_60;
  uStack_168 = uStack_c8;
  uStack_170 = uStack_d0;
  uStack_158 = uStack_b8;
  uStack_160 = uStack_c0;
  uStack_148 = uStack_a8;
  uStack_150 = uStack_b0;
  uStack_138 = uStack_98;
  uStack_140 = uStack_a0;
  FUN_1045f8e18(&uStack_170,auStack_1f0);
  FUN_104559288();
  if ((uVar6 & 1) == 0) {
LAB_1045df0f4:
    func_0x000104603c54(&uStack_d0,0x113087018,&UNK_10dd18930);
  }
  else {
    if (uVar7 != 0) {
      func_0x00010006c00c(uVar4,uVar5);
      uVar6 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar4,uVar5,uVar7,uVar3);
      if ((uVar6 & 1) == 0) goto LAB_1045df0f4;
    }
    func_0x0001045be170();
    FUN_10456cde8();
    func_0x000104603c54(&uStack_d0,0x113087018,&UNK_10dd18930);
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}



/* Entry: 1045df12c; end: 1045df1cb;  */

uint FUN_1045df12c(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_104559288();
  if ((uVar2 & 1) == 0) {
LAB_1045df1b4:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[7];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[8];
      uVar5 = unaff_x20[5];
      uVar4 = unaff_x20[6];
      func_0x00010006c00c(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_1045df1b4;
    }
    uVar4 = *unaff_x20;
    func_0x0001045be170(uVar4);
    uVar5 = uVar4;
    FUN_10456d190();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 1045df1cc; end: 1045df1fb;  */

void FUN_1045df1cc(void)

{
  FUN_1045f1134();
  return;
}



/* Entry: 1045df1fc; end: 1045df32b;  */

/* WARNING: Removing unreachable block (ram,0x0001045df328) */

void FUN_1045df1fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        FUN_1045df32c(param_2,param_1,param_3,param_4,FUN_1045f9f58,&UNK_11078de90);
      }
      else {
        if (lVar1 == 2) {
          _swift_beginAccess(param_1 + 0x20,auStack_68,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x50);
          lVar1 = param_1 + 0x20;
        }
        else {
          if (lVar1 != 1) goto LAB_1045df28c;
          _swift_beginAccess(param_1 + 0x10,auStack_68,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x158);
          lVar1 = param_1 + 0x10;
        }
        (*pcVar3)(lVar1,param_3,param_4);
        _swift_endAccess(auStack_68);
      }
LAB_1045df28c:
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045df32c; end: 1045df3cb;  */

void FUN_1045df32c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x28;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  (*param_5)();
  (*pcVar2)(param_2 + 0x28,param_6,lVar1,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 1045df3cc; end: 1045df3e7;  */

void FUN_1045df3cc(void)

{
  FUN_1045dd824();
  return;
}



/* Entry: 1045df3e8; end: 1045df5fb;  */

void FUN_1045df3e8(long param_1,undefined8 *param_2)

{
  int iVar1;
  long unaff_x21;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_370 [128];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined8 uStack_22f;
  undefined1 auStack_218 [24];
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
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
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
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x10,auStack_e8,0,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    __ss6HasherV8_combineyySuF(1);
    _swift_bridgeObjectRetain(lVar2);
    __sSS4hash4intoys6HasherVz_tF(param_2,uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
  _swift_beginAccess(param_1 + 0x20,auStack_100,0,0);
  if (*(char *)(param_1 + 0x24) != '\x01') {
    iVar1 = *(int *)(param_1 + 0x20);
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)iVar1);
  }
  _swift_beginAccess(param_1 + 0x28,auStack_218,0,0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x88);
  uStack_198 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_18f = *(undefined8 *)(param_1 + 0x99);
  uStack_197 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x30);
  uStack_200 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x50);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x58);
  iVar1 = (int)&uStack_200;
  uStack_180 = uStack_200;
  uStack_178 = uStack_1f8;
  uStack_170 = uStack_1f0;
  uStack_168 = uStack_1e8;
  uStack_160 = uStack_1e0;
  uStack_158 = uStack_1d8;
  uStack_150 = uStack_1d0;
  uStack_148 = uStack_1c8;
  uStack_140 = uStack_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  uStack_120 = uStack_1a0;
  uStack_118 = uStack_198;
  uStack_117 = uStack_197;
  uStack_110 = uStack_190;
  uStack_10f = uStack_18f;
  FUN_1045f8e00();
  if (iVar1 != 1) {
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_68 = uStack_118;
    uStack_70 = uStack_120;
    uStack_5f = uStack_10f;
    uStack_67 = uStack_117;
    uStack_60 = uStack_110;
    uStack_c8 = uStack_178;
    uStack_d0 = uStack_180;
    uStack_b8 = uStack_168;
    uStack_c0 = uStack_170;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    __ss6HasherV8_combineyySuF(3);
    uStack_2c8 = param_2[5];
    uStack_2d0 = param_2[4];
    uStack_2b8 = param_2[7];
    uStack_2c0 = param_2[6];
    uStack_2b0 = param_2[8];
    uStack_2e8 = param_2[1];
    uStack_2f0 = *param_2;
    uStack_2d8 = param_2[3];
    uStack_2e0 = param_2[2];
    uStack_258 = uStack_1b8;
    uStack_260 = uStack_1c0;
    uStack_248 = uStack_1a8;
    uStack_250 = uStack_1b0;
    uStack_238 = uStack_198;
    uStack_240 = uStack_1a0;
    uStack_22f = uStack_18f;
    uStack_237 = uStack_197;
    uStack_230 = uStack_190;
    uStack_298 = uStack_1f8;
    uStack_2a0 = uStack_200;
    uStack_288 = uStack_1e8;
    uStack_290 = uStack_1f0;
    uStack_278 = uStack_1d8;
    uStack_280 = uStack_1e0;
    uStack_268 = uStack_1c8;
    uStack_270 = uStack_1d0;
    FUN_1045f8e18(&uStack_2a0,auStack_370);
    FUN_1045ead9c(&uStack_2f0);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    func_0x000104603c54(&uStack_200,0x113087018,&UNK_10dd18930);
    param_2[5] = uStack_2c8;
    param_2[4] = uStack_2d0;
    param_2[7] = uStack_2b8;
    param_2[6] = uStack_2c0;
    param_2[8] = uStack_2b0;
    param_2[1] = uStack_2e8;
    *param_2 = uStack_2f0;
    param_2[3] = uStack_2d8;
    param_2[2] = uStack_2e0;
  }
  return;
}



/* Entry: 1045df5fc; end: 1045df65f;  */

void FUN_1045df5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_1045e2f54();
  if (unaff_x21 == 0) {
    FUN_1045df660(param_1,param_2,param_3,param_4);
    FUN_1045df6e8(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1045df660; end: 1045df6e7;  */

void FUN_1045df660(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_58,0,0);
  if (*(char *)(param_1 + 0x24) != '\x01') {
    (**(code **)(param_4 + 0x18))(*(undefined4 *)(param_1 + 0x20),2,param_3,param_4);
  }
  return;
}



/* Entry: 1045df6e8; end: 1045df7ff;  */

void FUN_1045df6e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined1 auStack_168 [24];
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
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x28,auStack_168,0,0);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_e8 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_df = *(undefined8 *)(param_1 + 0x99);
  uStack_e7 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  uStack_150 = *(undefined8 *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = &uStack_150;
  uStack_d0 = uStack_150;
  uStack_c8 = uStack_148;
  uStack_c0 = uStack_140;
  uStack_b8 = uStack_138;
  uStack_b0 = uStack_130;
  uStack_a8 = uStack_128;
  uStack_a0 = uStack_120;
  uStack_98 = uStack_118;
  uStack_90 = uStack_110;
  uStack_88 = uStack_108;
  uStack_80 = uStack_100;
  uStack_78 = uStack_f8;
  uStack_70 = uStack_f0;
  uStack_68 = uStack_e8;
  uStack_67 = uStack_e7;
  uStack_60 = uStack_e0;
  uStack_5f = uStack_df;
  FUN_1045f8e00();
  if ((int)puVar1 != 1) {
    uStack_1a8 = uStack_88;
    uStack_1b0 = uStack_90;
    uStack_198 = uStack_78;
    uStack_1a0 = uStack_80;
    uStack_188 = uStack_68;
    uStack_190 = uStack_70;
    uStack_17f = uStack_5f;
    uStack_187 = uStack_67;
    uStack_180 = uStack_60;
    uStack_1e8 = uStack_c8;
    uStack_1f0 = uStack_d0;
    uStack_1d8 = uStack_b8;
    uStack_1e0 = uStack_c0;
    uStack_1c8 = uStack_a8;
    uStack_1d0 = uStack_b0;
    uStack_1b8 = uStack_98;
    uStack_1c0 = uStack_a0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1045f9f58();
    (*pcVar2)(&uStack_1f0,3,&UNK_11078de90,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1045df800; end: 1045df80b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045df800(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar17 = param_3;
    FUN_1045df80c(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
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



/* Entry: 1045df80c; end: 1045dfc27;  */

undefined8 FUN_1045df80c(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_5e0 [128];
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined8 uStack_4ef;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined8 uStack_46f;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined8 uStack_36f;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
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
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
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
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_1 + 0x10,auStack_e8,0,0);
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_100,0,0);
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
  }
  else {
    if (lVar6 == 0) {
      return 0;
    }
    if ((uVar4 != *(ulong *)(param_2 + 0x10) || lVar1 != lVar6) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar1,*(ulong *)(param_2 + 0x10),lVar6,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x20,auStack_118,0,0);
  iVar3 = *(int *)(param_1 + 0x20);
  cVar2 = *(char *)(param_1 + 0x24);
  _swift_beginAccess(param_2 + 0x20,auStack_130,0,0);
  if (cVar2 == '\x01') {
    if (*(char *)(param_2 + 0x24) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x24) == '\x01') {
      return 0;
    }
    if (iVar3 != *(int *)(param_2 + 0x20)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x28,auStack_248,0,0);
  _swift_beginAccess(param_2 + 0x28,auStack_260,0,0);
  uStack_318 = *(undefined8 *)(param_1 + 0x70);
  uStack_320 = *(undefined8 *)(param_1 + 0x68);
  uStack_308 = *(undefined8 *)(param_1 + 0x80);
  uStack_310 = *(undefined8 *)(param_1 + 0x78);
  uStack_300 = *(undefined8 *)(param_1 + 0x88);
  uStack_1c8 = (undefined1)*(undefined8 *)(param_1 + 0x90);
  uStack_1bf = *(undefined8 *)(param_1 + 0x99);
  uStack_1c7 = (undefined7)*(undefined8 *)(param_1 + 0x91);
  uStack_1c0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x91) >> 0x38);
  uStack_358 = *(undefined8 *)(param_1 + 0x30);
  uStack_360 = *(undefined8 *)(param_1 + 0x28);
  uStack_348 = *(undefined8 *)(param_1 + 0x40);
  uStack_350 = *(undefined8 *)(param_1 + 0x38);
  uStack_338 = *(undefined8 *)(param_1 + 0x50);
  uStack_340 = *(undefined8 *)(param_1 + 0x48);
  uStack_328 = *(undefined8 *)(param_1 + 0x60);
  uStack_330 = *(undefined8 *)(param_1 + 0x58);
  uStack_2d8 = *(undefined8 *)(param_2 + 0x30);
  uStack_2e0 = *(undefined8 *)(param_2 + 0x28);
  uStack_2ef = (undefined7)uStack_1bf;
  uStack_2e8 = (undefined1)((ulong)uStack_1bf >> 0x38);
  uStack_2a8 = *(undefined8 *)(param_2 + 0x60);
  uStack_2b0 = *(undefined8 *)(param_2 + 0x58);
  uStack_2b8 = *(undefined8 *)(param_2 + 0x50);
  uStack_2c0 = *(undefined8 *)(param_2 + 0x48);
  uStack_2c8 = *(undefined8 *)(param_2 + 0x40);
  uStack_2d0 = *(undefined8 *)(param_2 + 0x38);
  uStack_26f = *(undefined8 *)(param_2 + 0x99);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x91) >> 0x38);
  uStack_280 = *(undefined8 *)(param_2 + 0x88);
  uStack_148 = (undefined1)*(undefined8 *)(param_2 + 0x90);
  uStack_147 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x90) >> 8);
  uStack_288 = *(undefined8 *)(param_2 + 0x80);
  uStack_290 = *(undefined8 *)(param_2 + 0x78);
  uStack_298 = *(undefined8 *)(param_2 + 0x70);
  uStack_2a0 = *(undefined8 *)(param_2 + 0x68);
  uStack_277 = (undefined7)*(undefined8 *)(param_2 + 0x91);
  iVar3 = (int)&uStack_360;
  uStack_2f8 = uStack_1c8;
  uStack_2f7 = uStack_1c7;
  uStack_2f0 = uStack_1c0;
  uStack_278 = uStack_148;
  uStack_270 = uStack_140;
  uStack_230 = uStack_360;
  uStack_228 = uStack_358;
  uStack_220 = uStack_350;
  uStack_218 = uStack_348;
  uStack_210 = uStack_340;
  uStack_208 = uStack_338;
  uStack_200 = uStack_330;
  uStack_1f8 = uStack_328;
  uStack_1f0 = uStack_320;
  uStack_1e8 = uStack_318;
  uStack_1e0 = uStack_310;
  uStack_1d8 = uStack_308;
  uStack_1d0 = uStack_300;
  uStack_1b0 = uStack_2e0;
  uStack_1a8 = uStack_2d8;
  uStack_1a0 = uStack_2d0;
  uStack_198 = uStack_2c8;
  uStack_190 = uStack_2c0;
  uStack_188 = uStack_2b8;
  uStack_180 = uStack_2b0;
  uStack_178 = uStack_2a8;
  uStack_170 = uStack_2a0;
  uStack_168 = uStack_298;
  uStack_160 = uStack_290;
  uStack_158 = uStack_288;
  uStack_150 = uStack_280;
  uStack_13f = uStack_26f;
  FUN_1045f8e00();
  if (iVar3 == 1) {
    iVar3 = (int)&uStack_2e0;
    FUN_1045f8e00();
    if (iVar3 == 1) {
      uStack_418 = uStack_318;
      uStack_420 = uStack_320;
      uStack_408 = uStack_308;
      uStack_410 = uStack_310;
      uStack_3f8 = uStack_2f8;
      uStack_400 = uStack_300;
      uStack_3ef = uStack_2ef;
      uStack_3e8 = uStack_2e8;
      uStack_3f7 = uStack_2f7;
      uStack_3f0 = uStack_2f0;
      uStack_458 = uStack_358;
      uStack_460 = uStack_360;
      uStack_448 = uStack_348;
      uStack_450 = uStack_350;
      uStack_438 = uStack_338;
      uStack_440 = uStack_340;
      uStack_428 = uStack_328;
      uStack_430 = uStack_330;
      func_0x0001045f8fa8(&uStack_230,&uStack_d0,0x113087018,&UNK_10dd18930);
      func_0x0001045f8fa8(&uStack_1b0,&uStack_d0,0x113087018,&UNK_10dd18930);
      func_0x000104603c54(&uStack_460,0x113087018,&UNK_10dd18930);
      return 1;
    }
  }
  else {
    uStack_498 = uStack_318;
    uStack_4a0 = uStack_320;
    uStack_488 = uStack_308;
    uStack_490 = uStack_310;
    uStack_478 = uStack_2f8;
    uStack_480 = uStack_300;
    uStack_46f = CONCAT17(uStack_2e8,uStack_2ef);
    uStack_477 = uStack_2f7;
    uStack_470 = uStack_2f0;
    uStack_4d8 = uStack_358;
    uStack_4e0 = uStack_360;
    uStack_4c8 = uStack_348;
    uStack_4d0 = uStack_350;
    uStack_4b8 = uStack_338;
    uStack_4c0 = uStack_340;
    uStack_4a8 = uStack_328;
    uStack_4b0 = uStack_330;
    iVar3 = (int)&uStack_2e0;
    FUN_1045f8e00();
    if (iVar3 != 1) {
      uStack_518 = uStack_298;
      uStack_520 = uStack_2a0;
      uStack_508 = uStack_288;
      uStack_510 = uStack_290;
      uStack_4f8 = uStack_278;
      uStack_500 = uStack_280;
      uStack_4ef = uStack_26f;
      uStack_4f7 = uStack_277;
      uStack_4f0 = uStack_270;
      uStack_558 = uStack_2d8;
      uStack_560 = uStack_2e0;
      uStack_548 = uStack_2c8;
      uStack_550 = uStack_2d0;
      uStack_538 = uStack_2b8;
      uStack_540 = uStack_2c0;
      uStack_528 = uStack_2a8;
      uStack_530 = uStack_2b0;
      uStack_3ef = (undefined7)uStack_26f;
      uStack_3e8 = (undefined1)((ulong)uStack_26f >> 0x38);
      uStack_3f0 = uStack_270;
      uStack_408 = uStack_288;
      uStack_410 = uStack_290;
      uStack_3f8 = uStack_278;
      uStack_3f7 = uStack_277;
      uStack_400 = uStack_280;
      uStack_428 = uStack_2a8;
      uStack_430 = uStack_2b0;
      uStack_418 = uStack_298;
      uStack_420 = uStack_2a0;
      uStack_448 = uStack_2c8;
      uStack_450 = uStack_2d0;
      uStack_438 = uStack_2b8;
      uStack_440 = uStack_2c0;
      uStack_458 = uStack_2d8;
      uStack_460 = uStack_2e0;
      uStack_88 = uStack_498;
      uStack_90 = uStack_4a0;
      uStack_78 = uStack_488;
      uStack_80 = uStack_490;
      uStack_68 = uStack_478;
      uStack_70 = uStack_480;
      uStack_5f = uStack_46f;
      uStack_67 = uStack_477;
      uStack_60 = uStack_470;
      uStack_c8 = uStack_4d8;
      uStack_d0 = uStack_4e0;
      uStack_b8 = uStack_4c8;
      uStack_c0 = uStack_4d0;
      uStack_a8 = uStack_4b8;
      uStack_b0 = uStack_4c0;
      uStack_98 = uStack_4a8;
      uStack_a0 = uStack_4b0;
      func_0x0001045f8fa8(&uStack_230,auStack_5e0,0x113087018,&UNK_10dd18930);
      func_0x0001045f8fa8(&uStack_1b0,auStack_5e0,0x113087018,&UNK_10dd18930);
      puVar5 = &uStack_d0;
      func_0x0001045f65a4(puVar5,&uStack_460);
      func_0x000104603c54(&uStack_560,0x113087018,&UNK_10dd18930);
      func_0x000104603c54(&uStack_360,0x113087018,&UNK_10dd18930);
      if (((ulong)puVar5 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  uStack_398 = uStack_298;
  uStack_3a0 = uStack_2a0;
  uStack_388 = uStack_288;
  uStack_390 = uStack_290;
  uStack_378 = uStack_278;
  uStack_380 = uStack_280;
  uStack_36f = uStack_26f;
  uStack_377 = uStack_277;
  uStack_370 = uStack_270;
  uStack_3d8 = uStack_2d8;
  uStack_3e0 = uStack_2e0;
  uStack_3c8 = uStack_2c8;
  uStack_3d0 = uStack_2d0;
  uStack_3b8 = uStack_2b8;
  uStack_3c0 = uStack_2c0;
  uStack_3a8 = uStack_2a8;
  uStack_3b0 = uStack_2b0;
  uStack_418 = uStack_318;
  uStack_420 = uStack_320;
  uStack_408 = uStack_308;
  uStack_410 = uStack_310;
  uStack_3f8 = uStack_2f8;
  uStack_3f7 = uStack_2f7;
  uStack_400 = uStack_300;
  uStack_3e8 = uStack_2e8;
  uStack_3f0 = uStack_2f0;
  uStack_3ef = uStack_2ef;
  uStack_458 = uStack_358;
  uStack_460 = uStack_360;
  uStack_448 = uStack_348;
  uStack_450 = uStack_350;
  uStack_438 = uStack_338;
  uStack_440 = uStack_340;
  uStack_428 = uStack_328;
  uStack_430 = uStack_330;
  func_0x0001045f8fa8(&uStack_230,&uStack_d0,0x113087018,&UNK_10dd18930);
  func_0x0001045f8fa8(&uStack_1b0,&uStack_d0,0x113087018,&UNK_10dd18930);
  func_0x000104603c54(&uStack_460,0x113087a20,&UNK_10dd19c48);
  return 0;
}



/* Entry: 1045dfc28; end: 1045dfc7f;  */

/* WARNING: Removing unreachable block (ram,0x0001045f1e40) */

void FUN_1045dfc28(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_1045df3e8(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_1045f1eb8;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_1045f1e48;
  }
  else {
    if (uVar2 != 2) goto LAB_1045f1e48;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_1045f1eb8:
    if (lVar3 == lVar4) goto LAB_1045f1e48;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_1045f1e48:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045dfc80; end: 1045dfcb7;  */

void FUN_1045dfc80(void)

{
  FUN_1045df1cc();
  return;
}



/* Entry: 1045dfcb8; end: 1045dfd57;  */

void FUN_1045dfcb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f78 != -1) {
    _swift_once(0x113087f78,FUN_1045dec04);
  }
  uVar5 = uRam0000000113814218;
  uVar4 = uRam0000000113814210;
  uVar3 = uRam0000000113814208;
  uVar2 = uRam0000000113814200;
  uVar1 = uRam00000001138141f8;
  *param_1 = uRam00000001138141f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dfd58; end: 1045dfdc3;  */

void FUN_1045dfd58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089398;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089398,&UNK_10dd1d8a8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045dfdc4; end: 1045dfe83;  */

void FUN_1045dfdc4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e4d0,0x23,&uStack_48,&lStack_40);
  puRam0000000113814228 = puStack_38;
  lRam0000000113814220 = lStack_40;
  puRam0000000113814238 = puStack_28;
  puRam0000000113814230 = puStack_30;
  puRam0000000113814248 = puStack_18;
  puRam0000000113814240 = puStack_20;
  return;
}



/* Entry: 1045dfe84; end: 1045dff23;  */

void FUN_1045dfe84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f80 != -1) {
    _swift_once(0x113087f80,FUN_1045dfdc4);
  }
  uVar5 = uRam0000000113814248;
  uVar4 = uRam0000000113814240;
  uVar3 = uRam0000000113814238;
  uVar2 = uRam0000000113814230;
  uVar1 = uRam0000000113814228;
  *param_1 = uRam0000000113814220;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045dff24; end: 1045e0083;  */

undefined8 FUN_1045dff24(void)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 uStack_60;
  
  uVar1 = *unaff_x20;
  func_0x0001045be00c();
  uVar6 = uVar1;
  FUN_10456cde8();
  _swift_bridgeObjectRelease(uVar1);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar2 = unaff_x20[6];
  uVar1 = unaff_x20[5];
  uVar5 = unaff_x20[10];
  uVar3 = unaff_x20[9];
  uVar8 = unaff_x20[0xc];
  uVar7 = unaff_x20[0xb];
  uVar6 = unaff_x20[8];
  uVar4 = unaff_x20[7];
  uStack_60 = (undefined1)unaff_x20[0xd];
  if (uVar1 == 0) {
    return 1;
  }
  uStack_a0 = uVar1;
  uStack_98 = uVar2;
  uStack_90 = uVar4;
  uStack_88 = uVar6;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar8;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00010006c00c(uVar2,uVar4);
  _swift_bridgeObjectRetain(uVar6);
  func_0x0001045f8978(uVar3,uVar5,uVar7,uVar8);
  FUN_104559288();
  if ((uVar6 & 1) == 0) {
LAB_1045e004c:
    func_0x000104603c54(&uStack_a0,0x113087010,&UNK_10dd19c50);
  }
  else {
    if (uVar7 != 0) {
      func_0x00010006c00c(uVar3,uVar5);
      uVar6 = uVar7;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar3,uVar5,uVar7,uVar8);
      if ((uVar6 & 1) == 0) goto LAB_1045e004c;
    }
    func_0x0001045be170();
    uVar6 = uVar1;
    FUN_10456cde8();
    func_0x000104603c54(&uStack_a0,0x113087010,&UNK_10dd19c50);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1045e0084; end: 1045e0123;  */

uint FUN_1045e0084(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_104559288();
  if ((uVar2 & 1) == 0) {
LAB_1045e010c:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[6];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[7];
      uVar5 = unaff_x20[4];
      uVar4 = unaff_x20[5];
      func_0x00010006c00c(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_1045e010c;
    }
    uVar4 = *unaff_x20;
    func_0x0001045be170(uVar4);
    uVar5 = uVar4;
    FUN_10456d190();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 1045e0124; end: 1045e0233;  */

/* WARNING: Removing unreachable block (ram,0x0001045e01ec) */
/* WARNING: Removing unreachable block (ram,0x0001045e0230) */

void FUN_1045e0124(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1045f9fbc();
LAB_1045e021c:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001045f91d0();
          goto LAB_1045e021c;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x158))(unaff_x20 + 0x18,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1045e0234; end: 1045e03b7;  */

void FUN_1045e0234(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined1 auStack_188 [72];
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 uStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_60;
  
  lVar3 = unaff_x20[4];
  if (lVar3 != 0) {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar4,lVar3);
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_10460f6fc(*unaff_x20,2), unaff_x21 != 0)) {
    return;
  }
  lStack_e8 = unaff_x20[6];
  lStack_f0 = unaff_x20[5];
  lStack_d8 = unaff_x20[8];
  lStack_e0 = unaff_x20[7];
  lStack_c8 = unaff_x20[10];
  lStack_d0 = unaff_x20[9];
  lStack_b8 = unaff_x20[0xc];
  lStack_c0 = unaff_x20[0xb];
  uStack_b0 = (undefined1)unaff_x20[0xd];
  if (lStack_f0 != 0) {
    lStack_88 = unaff_x20[8];
    lStack_90 = unaff_x20[7];
    lStack_78 = unaff_x20[10];
    lStack_80 = unaff_x20[9];
    lStack_68 = unaff_x20[0xc];
    lStack_70 = unaff_x20[0xb];
    uStack_60 = (undefined1)unaff_x20[0xd];
    lStack_98 = unaff_x20[6];
    lStack_a0 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    lStack_128 = unaff_x20[8];
    lStack_130 = unaff_x20[7];
    lStack_118 = unaff_x20[10];
    lStack_120 = unaff_x20[9];
    lStack_108 = unaff_x20[0xc];
    lStack_110 = unaff_x20[0xb];
    uStack_100 = (undefined1)unaff_x20[0xd];
    lStack_138 = unaff_x20[6];
    lStack_140 = unaff_x20[5];
    func_0x0001045f8e78(&lStack_140,auStack_188);
    FUN_1045bf768(param_1);
    func_0x000104603c54(&lStack_f0,0x113087010,&UNK_10dd19c50);
  }
  lVar3 = unaff_x20[1];
  uVar1 = (uint)((ulong)unaff_x20[2] >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((unaff_x20[2] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045e0390;
    }
    lVar4 = (long)(int)lVar3;
    lVar3 = lVar3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  if (lVar4 == lVar3) {
    return;
  }
LAB_1045e0390:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045e03b8; end: 1045e048b;  */

void FUN_1045e03b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar1 = param_1;
  if (unaff_x20[4] != 0) {
    lVar1 = unaff_x20[3];
    (**(code **)(param_3 + 0x70))(lVar1,unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045f91d0();
      (*pcVar3)(lVar2,2,&UNK_11078d740,lVar1,param_2,param_3);
    }
    FUN_1045e048c();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1045e048c; end: 1045e051b;  */

void FUN_1045e048c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lStack_88 = *(long *)(param_1 + 0x28);
  if (lStack_88 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = (undefined1)*(undefined8 *)(param_1 + 0x58);
    uStack_4f = *(undefined8 *)(param_1 + 0x61);
    uStack_57 = (undefined7)*(undefined8 *)(param_1 + 0x59);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x59) >> 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045f9fbc();
    (*pcVar1)(&lStack_88,3,&UNK_11078df28,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045e051c; end: 1045e052b;  */

uint FUN_1045e051c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_428 [72];
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined1 uStack_3a0;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined8 uStack_30f;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 uStack_230;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
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
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined8 uStack_fe;
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
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  
  lVar5 = param_2[4];
  if (param_1[4] == 0) {
    if (lVar5 == 0) goto LAB_1045f5acc;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_1045f5acc:
    lVar7 = *param_1;
    lVar6 = *param_2;
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 == *(long *)(lVar6 + 0x10)) {
      if (lVar5 != 0 && lVar7 != lVar6) {
        puVar8 = (undefined8 *)(lVar7 + 0x20);
        puVar9 = (undefined8 *)(lVar6 + 0x20);
        do {
          uStack_178 = puVar8[1];
          uStack_180 = *puVar8;
          uStack_168 = puVar8[3];
          uStack_170 = puVar8[2];
          uStack_158 = puVar8[5];
          uStack_160 = puVar8[4];
          uStack_148 = puVar8[7];
          uStack_150 = puVar8[6];
          uStack_138 = puVar8[9];
          uStack_140 = puVar8[8];
          uStack_128 = puVar8[0xb];
          uStack_130 = puVar8[10];
          uStack_118 = puVar8[0xd];
          uStack_120 = puVar8[0xc];
          uStack_110 = puVar8[0xe];
          uStack_fe = *(undefined8 *)((long)puVar8 + 0x82);
          uStack_100 = (undefined2)((ulong)*(undefined8 *)((long)puVar8 + 0x7a) >> 0x30);
          uStack_108 = (undefined2)puVar8[0xf];
          uStack_106 = (undefined6)((ulong)puVar8[0xf] >> 0x10);
          uStack_e8 = puVar9[1];
          uStack_f0 = *puVar9;
          uStack_d8 = puVar9[3];
          uStack_e0 = puVar9[2];
          uStack_c8 = puVar9[5];
          uStack_d0 = puVar9[4];
          uStack_b8 = puVar9[7];
          uStack_c0 = puVar9[6];
          uStack_a8 = puVar9[9];
          uStack_b0 = puVar9[8];
          uStack_98 = puVar9[0xb];
          uStack_a0 = puVar9[10];
          uStack_88 = puVar9[0xd];
          uStack_90 = puVar9[0xc];
          uStack_80 = puVar9[0xe];
          uStack_6e = *(undefined8 *)((long)puVar9 + 0x82);
          uStack_70 = (undefined2)((ulong)*(undefined8 *)((long)puVar9 + 0x7a) >> 0x30);
          uStack_78 = (undefined2)puVar9[0xf];
          uStack_76 = (undefined6)((ulong)puVar9[0xf] >> 0x10);
          FUN_104604054(&uStack_180,&lStack_300);
          FUN_104604054(&uStack_f0,&lStack_300);
          puVar3 = &uStack_180;
          func_0x0001045f56a0(puVar3,&uStack_f0);
          func_0x000104604088(&uStack_f0);
          func_0x000104604088(&uStack_180);
          if (((ulong)puVar3 & 1) == 0) goto LAB_1045f5d84;
          puVar9 = puVar9 + 0x12;
          puVar8 = puVar8 + 0x12;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lStack_208 = param_1[8];
      lStack_210 = param_1[7];
      lStack_1f8 = param_1[10];
      lStack_200 = param_1[9];
      lStack_1e8 = param_1[0xc];
      lStack_1f0 = param_1[0xb];
      uStack_1e0 = (undefined1)param_1[0xd];
      lStack_218 = param_1[6];
      lStack_220 = param_1[5];
      lStack_258 = param_2[8];
      lStack_260 = param_2[7];
      lStack_248 = param_2[10];
      lStack_250 = param_2[9];
      lStack_238 = param_2[0xc];
      lStack_240 = param_2[0xb];
      uStack_230 = (undefined1)param_2[0xd];
      lStack_268 = param_2[6];
      lStack_270 = param_2[5];
      lStack_2e8 = param_1[8];
      lStack_2f0 = param_1[7];
      lStack_2d8 = param_1[10];
      lStack_2e0 = param_1[9];
      lStack_2c8 = param_1[0xc];
      lStack_2d0 = param_1[0xb];
      uStack_2c0 = (undefined1)param_1[0xd];
      lStack_2f8 = param_1[6];
      lStack_300 = param_1[5];
      lStack_330 = param_2[8];
      lStack_338 = param_2[7];
      lStack_320 = param_2[10];
      lStack_328 = param_2[9];
      uStack_280 = (undefined1)param_2[0xc];
      uStack_27f = (undefined7)((ulong)param_2[0xc] >> 8);
      uStack_288 = (undefined1)param_2[0xb];
      uStack_287 = (undefined7)((ulong)param_2[0xb] >> 8);
      uStack_278 = (undefined1)param_2[0xd];
      lStack_340 = param_2[6];
      lStack_348 = param_2[5];
      lStack_2b8 = lStack_348;
      lStack_2b0 = lStack_340;
      lStack_2a8 = lStack_338;
      lStack_2a0 = lStack_330;
      lStack_298 = lStack_328;
      lStack_290 = lStack_320;
      if (lStack_300 == 0) {
        if (lStack_348 == 0) {
          lStack_378 = param_1[8];
          lStack_380 = param_1[7];
          lStack_368 = param_1[10];
          lStack_370 = param_1[9];
          lStack_358 = param_1[0xc];
          lStack_360 = param_1[0xb];
          uStack_350 = CONCAT71(uStack_350._1_7_,(char)param_1[0xd]);
          lStack_388 = param_1[6];
          lStack_390 = param_1[5];
          func_0x0001045f8fa8(&lStack_220,&lStack_1d0,0x113087010,&UNK_10dd19c50);
          func_0x0001045f8fa8(&lStack_270,&lStack_1d0,0x113087010,&UNK_10dd19c50);
          func_0x000104603c54(&lStack_390,0x113087010,&UNK_10dd19c50);
LAB_1045f5e14:
          lVar5 = param_1[1];
          func_0x000100e25fcc(lVar5,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)lVar5;
          goto LAB_1045f5d88;
        }
      }
      else if (lStack_348 != 0) {
        lStack_3c8 = param_2[8];
        lStack_3d0 = param_2[7];
        lStack_3b8 = param_2[10];
        lStack_3c0 = param_2[9];
        lStack_3a8 = param_2[0xc];
        lStack_3b0 = param_2[0xb];
        uStack_3a0 = (undefined1)param_2[0xd];
        lStack_3d8 = param_2[6];
        lStack_3e0 = param_2[5];
        uStack_350 = CONCAT71(uStack_350._1_7_,uStack_3a0);
        lStack_1c8 = param_1[6];
        lStack_1d0 = param_1[5];
        lStack_1b8 = param_1[8];
        lStack_1c0 = param_1[7];
        lStack_1a8 = param_1[10];
        lStack_1b0 = param_1[9];
        lStack_198 = param_1[0xc];
        lStack_1a0 = param_1[0xb];
        uStack_190 = (undefined1)param_1[0xd];
        lStack_390 = lStack_3e0;
        lStack_388 = lStack_3d8;
        lStack_380 = lStack_3d0;
        lStack_378 = lStack_3c8;
        lStack_370 = lStack_3c0;
        lStack_368 = lStack_3b8;
        lStack_360 = lStack_3b0;
        lStack_358 = lStack_3a8;
        func_0x0001045f8fa8(&lStack_220,auStack_428,0x113087010,&UNK_10dd19c50);
        func_0x0001045f8fa8(&lStack_270,auStack_428,0x113087010,&UNK_10dd19c50);
        plVar4 = &lStack_1d0;
        FUN_1045f74cc(plVar4,&lStack_390);
        func_0x000104603c54(&lStack_3e0,0x113087010,&UNK_10dd19c50);
        func_0x000104603c54(&lStack_300,0x113087010,&UNK_10dd19c50);
        if (((ulong)plVar4 & 1) != 0) goto LAB_1045f5e14;
        goto LAB_1045f5d84;
      }
      uStack_30f = CONCAT17(uStack_278,uStack_27f);
      uStack_317 = uStack_287;
      uStack_310 = uStack_280;
      uStack_350 = CONCAT71(uStack_2bf,uStack_2c0);
      lStack_390 = lStack_300;
      lStack_388 = lStack_2f8;
      lStack_380 = lStack_2f0;
      lStack_378 = lStack_2e8;
      lStack_370 = lStack_2e0;
      lStack_368 = lStack_2d8;
      lStack_360 = lStack_2d0;
      lStack_358 = lStack_2c8;
      uStack_318 = uStack_288;
      func_0x0001045f8fa8(&lStack_220,&lStack_1d0,0x113087010,&UNK_10dd19c50);
      func_0x0001045f8fa8(&lStack_270,&lStack_1d0,0x113087010,&UNK_10dd19c50);
      func_0x000104603c54(&lStack_390,0x113087ad8,&UNK_10dd19c58);
    }
  }
LAB_1045f5d84:
  uVar1 = 0;
LAB_1045f5d88:
  return uVar1 & 1;
}



/* Entry: 1045e052c; end: 1045e05bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045e0580) */

void FUN_1045e052c(code *param_1)

{
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
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  (*param_1)(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e05c0; end: 1045e0617;  */

void FUN_1045e05c0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



/* Entry: 1045e0618; end: 1045e0647;  */

undefined1  [16] FUN_1045e0618(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1045e0648; end: 1045e067b;  */

void FUN_1045e0648(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1045e067c; end: 1045e068f;  */

undefined1  [16] FUN_1045e067c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1045e068c;
  return auVar1;
}



/* Entry: 1045e0690; end: 1045e06a3;  */

void FUN_1045e0690(void)

{
  FUN_1045e0124();
  return;
}



/* Entry: 1045e06a4; end: 1045e06eb;  */

void FUN_1045e06a4(void)

{
  FUN_1045e03b8();
  return;
}



/* Entry: 1045e06ec; end: 1045e078b;  */

void FUN_1045e06ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f80 != -1) {
    _swift_once(0x113087f80,FUN_1045dfdc4);
  }
  uVar5 = uRam0000000113814248;
  uVar4 = uRam0000000113814240;
  uVar3 = uRam0000000113814238;
  uVar2 = uRam0000000113814230;
  uVar1 = uRam0000000113814228;
  *param_1 = uRam0000000113814220;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e078c; end: 1045e079f;  */

void FUN_1045e078c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089390;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089390,&UNK_10dd1d8a0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045e07a0; end: 1045e07d3;  */

void FUN_1045e07a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 1045e07d4; end: 1045e09d7;  */

/* WARNING: Removing unreachable block (ram,0x0001045e0848) */

void FUN_1045e07d4(void)

{
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_48 = (undefined1)unaff_x20[0xb];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_f0,0);
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_100 = uStack_b0;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  FUN_1045e0234(&uStack_140);
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_b0 = uStack_100;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e09d8; end: 1045e0a3f;  */

uint FUN_1045e09d8(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
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
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_a0 = param_1[10];
  uStack_98 = (undefined1)param_1[0xb];
  uStack_8f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
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
  uStack_1f = *(undefined8 *)((long)param_2 + 0x61);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_28 = (undefined1)param_2[0xb];
  uStack_27 = (undefined7)((ulong)param_2[0xb] >> 8);
  FUN_1045e051c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1045e0a40; end: 1045e0a67;  */

undefined * FUN_1045e0a40(void)

{
  return &UNK_11078b1f8;
}



/* Entry: 1045e0a68; end: 1045e0b27;  */

void FUN_1045e0a68(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1e480,0x4d,&uStack_48,&lStack_40);
  puRam0000000113814258 = puStack_38;
  lRam0000000113814250 = lStack_40;
  puRam0000000113814268 = puStack_28;
  puRam0000000113814260 = puStack_30;
  puRam0000000113814278 = puStack_18;
  puRam0000000113814270 = puStack_20;
  return;
}



/* Entry: 1045e0b28; end: 1045e0bc7;  */

void FUN_1045e0b28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f90 != -1) {
    _swift_once(0x113087f90,FUN_1045e0a68);
  }
  uVar5 = uRam0000000113814278;
  uVar4 = uRam0000000113814270;
  uVar3 = uRam0000000113814268;
  uVar2 = uRam0000000113814260;
  uVar1 = uRam0000000113814258;
  *param_1 = uRam0000000113814250;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e0bc8; end: 1045e0cff;  */

undefined8 FUN_1045e0bc8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar7 = *(ulong *)(unaff_x20 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(ulong *)(unaff_x20 + 0x40);
  uVar8 = *(ulong *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  if (uVar2 == 0) {
LAB_1045e0cc0:
    uVar1 = 1;
  }
  else {
    uStack_a0 = uVar2;
    uStack_98 = uVar4;
    uStack_90 = uVar6;
    uStack_88 = uVar8;
    uStack_78 = uVar3;
    uStack_70 = uVar5;
    uStack_68 = uVar7;
    uStack_60 = uVar1;
    _swift_bridgeObjectRetain(uVar2);
    func_0x00010006c00c(uVar4,uVar6);
    _swift_bridgeObjectRetain(uVar8);
    func_0x0001045f8978(uVar3,uVar5,uVar7,uVar1);
    FUN_104559288();
    if ((uVar8 & 1) == 0) {
LAB_1045e0cc8:
      func_0x000104603c54(&uStack_a0,0x113087008,&UNK_10dd18920);
    }
    else {
      if (uVar7 != 0) {
        func_0x00010006c00c(uVar3,uVar5);
        uVar8 = uVar7;
        _swift_bridgeObjectRetain();
        FUN_104559288();
        func_0x00010458a4f4(uVar3,uVar5,uVar7,uVar1);
        if ((uVar8 & 1) == 0) goto LAB_1045e0cc8;
      }
      func_0x0001045be170();
      uVar8 = uVar2;
      FUN_10456cde8();
      func_0x000104603c54(&uStack_a0,0x113087008,&UNK_10dd18920);
      _swift_bridgeObjectRelease(uVar2);
      if ((uVar8 & 1) != 0) goto LAB_1045e0cc0;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1045e0d00; end: 1045e0d9f;  */

uint FUN_1045e0d00(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_104559288();
  if ((uVar2 & 1) == 0) {
LAB_1045e0d88:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[7];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[8];
      uVar5 = unaff_x20[5];
      uVar4 = unaff_x20[6];
      func_0x00010006c00c(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_104559288();
      func_0x00010458a4f4(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_1045e0d88;
    }
    uVar4 = *unaff_x20;
    func_0x0001045be170(uVar4);
    uVar5 = uVar4;
    FUN_10456d190();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 1045e0da0; end: 1045e0ecb;  */

/* WARNING: Removing unreachable block (ram,0x0001045e0eb0) */

void FUN_1045e0da0(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x10;
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 3) goto LAB_1045e0e18;
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x30;
        }
LAB_1045e0e08:
        (*pcVar3)(lVar1,param_2,param_3);
      }
      else {
        if (lVar1 != 4) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x140);
            lVar1 = unaff_x20 + 0x88;
          }
          else {
            if (lVar1 != 6) goto LAB_1045e0e18;
            pcVar3 = *(code **)(param_3 + 0x140);
            lVar1 = unaff_x20 + 0x89;
          }
          goto LAB_1045e0e08;
        }
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001039f3828();
        (*pcVar3)(unaff_x20 + 0x40,&UNK_11078dfb8,lVar1,param_2,param_3);
      }
LAB_1045e0e18:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045e0ecc; end: 1045e10eb;  */

void FUN_1045e0ecc(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 auStack_1d8 [72];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  lVar4 = unaff_x20[3];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[5];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[4];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[7];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[6];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lStack_e8 = unaff_x20[9];
  lStack_f0 = unaff_x20[8];
  lStack_d8 = unaff_x20[0xb];
  lStack_e0 = unaff_x20[10];
  lStack_c8 = unaff_x20[0xd];
  lStack_d0 = unaff_x20[0xc];
  lStack_b8 = unaff_x20[0xf];
  lStack_c0 = unaff_x20[0xe];
  lStack_b0 = unaff_x20[0x10];
  if (lStack_f0 != 0) {
    lStack_78 = unaff_x20[0xd];
    lStack_80 = unaff_x20[0xc];
    lStack_68 = unaff_x20[0xf];
    lStack_70 = unaff_x20[0xe];
    lStack_60 = unaff_x20[0x10];
    lStack_98 = unaff_x20[9];
    lStack_a0 = unaff_x20[8];
    lStack_88 = unaff_x20[0xb];
    lStack_90 = unaff_x20[10];
    __ss6HasherV8_combineyySuF(4);
    uStack_168 = param_1[5];
    uStack_170 = param_1[4];
    uStack_158 = param_1[7];
    uStack_160 = param_1[6];
    uStack_150 = param_1[8];
    uStack_188 = param_1[1];
    uStack_190 = *param_1;
    uStack_178 = param_1[3];
    uStack_180 = param_1[2];
    lStack_118 = unaff_x20[0xd];
    lStack_120 = unaff_x20[0xc];
    lStack_108 = unaff_x20[0xf];
    lStack_110 = unaff_x20[0xe];
    lStack_100 = unaff_x20[0x10];
    lStack_138 = unaff_x20[9];
    lStack_140 = unaff_x20[8];
    lStack_128 = unaff_x20[0xb];
    lStack_130 = unaff_x20[10];
    func_0x0001045f8ed8(&lStack_140,auStack_1d8);
    FUN_1045ec3e0(&uStack_190);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
    }
    func_0x000104603c54(&lStack_f0,0x113087008,&UNK_10dd18920);
    param_1[5] = uStack_168;
    param_1[4] = uStack_170;
    param_1[7] = uStack_158;
    param_1[6] = uStack_160;
    param_1[8] = uStack_150;
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    param_1[3] = uStack_178;
    param_1[2] = uStack_180;
  }
  bVar1 = *(byte *)(unaff_x20 + 0x11);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x89);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_1045e10c4;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_1045e10c4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045e10ec; end: 1045e1207;  */

void FUN_1045e10ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[2],unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[5] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[4],unaff_x20[5],2,param_2,param_3);
    }
    if (unaff_x20[7] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[6],unaff_x20[7],3,param_2,param_3);
    }
    FUN_1045e1208();
    if (*(byte *)(unaff_x20 + 0x11) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 0x11) & 1,5,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x89) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x89) & 1,6,param_2,param_3);
    }
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1045e1208; end: 1045e1297;  */

void FUN_1045e1208(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_88 = *(long *)(param_1 + 0x40);
  if (lStack_88 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001039f3828();
    (*pcVar1)(&lStack_88,4,&UNK_11078dfb8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045e1298; end: 1045e129b;  */

uint FUN_1045e1298(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_2e8 [72];
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar6 = param_1[3];
  lVar5 = param_2[3];
  if (lVar6 == 0) {
    if (lVar5 == 0) {
LAB_1045f570c:
      lVar6 = param_1[5];
      lVar5 = param_2[5];
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_1045f5764:
          lVar6 = param_1[7];
          lVar5 = param_2[7];
          if (lVar6 == 0) {
            if (lVar5 == 0) {
LAB_1045f57bc:
              uStack_1a8 = param_1[0xb];
              uStack_1b0 = param_1[10];
              uStack_b8 = param_1[0xd];
              uStack_c0 = param_1[0xc];
              uStack_198 = param_1[0xd];
              uStack_1a0 = param_1[0xc];
              uStack_a8 = param_1[0xf];
              uStack_b0 = param_1[0xe];
              uStack_d8 = param_1[9];
              uStack_e0 = param_1[8];
              uStack_c8 = param_1[0xb];
              uStack_d0 = param_1[10];
              uStack_1b8 = param_1[9];
              lStack_1c0 = param_1[8];
              uStack_1f0 = param_2[0xb];
              uStack_1f8 = param_2[10];
              uStack_108 = param_2[0xd];
              uStack_110 = param_2[0xc];
              uStack_1e0 = param_2[0xd];
              uStack_1e8 = param_2[0xc];
              uStack_f8 = param_2[0xf];
              uStack_100 = param_2[0xe];
              uStack_128 = param_2[9];
              uStack_130 = param_2[8];
              uStack_118 = param_2[0xb];
              uStack_120 = param_2[10];
              uStack_200 = param_2[9];
              lStack_208 = param_2[8];
              uStack_188 = param_1[0xf];
              uStack_190 = param_1[0xe];
              uStack_1d0 = param_2[0xf];
              uStack_1d8 = param_2[0xe];
              uStack_a0 = param_1[0x10];
              uStack_f0 = param_2[0x10];
              uStack_180 = param_1[0x10];
              uStack_1c8 = param_2[0x10];
              lStack_178 = lStack_208;
              uStack_170 = uStack_200;
              uStack_168 = uStack_1f8;
              uStack_160 = uStack_1f0;
              uStack_158 = uStack_1e8;
              uStack_150 = uStack_1e0;
              uStack_148 = uStack_1d8;
              uStack_140 = uStack_1d0;
              uStack_138 = uStack_1c8;
              if (lStack_1c0 == 0) {
                if (lStack_208 == 0) {
                  uStack_228 = param_1[0xd];
                  uStack_230 = param_1[0xc];
                  uStack_218 = param_1[0xf];
                  uStack_220 = param_1[0xe];
                  uStack_210 = param_1[0x10];
                  uStack_248 = param_1[9];
                  lStack_250 = param_1[8];
                  uStack_238 = param_1[0xb];
                  uStack_240 = param_1[10];
                  func_0x0001045f8fa8(&uStack_e0,&uStack_90,0x113087008,&UNK_10dd18920);
                  func_0x0001045f8fa8(&uStack_130,&uStack_90,0x113087008,&UNK_10dd18920);
                  func_0x000104603c54(&lStack_250,0x113087008,&UNK_10dd18920);
LAB_1045f59fc:
                  bVar1 = *(byte *)(param_2 + 0x11);
                  if (*(byte *)(param_1 + 0x11) == 2) {
                    if (bVar1 != 2) goto LAB_1045f5974;
                  }
                  else {
                    uVar2 = 0;
                    if ((bVar1 == 2) || (((*(byte *)(param_1 + 0x11) ^ bVar1) & 1) != 0))
                    goto LAB_1045f5978;
                  }
                  bVar1 = *(byte *)((long)param_2 + 0x89);
                  if (*(byte *)((long)param_1 + 0x89) == 2) {
                    if (bVar1 != 2) goto LAB_1045f5974;
                  }
                  else {
                    uVar2 = 0;
                    if ((bVar1 == 2) || (((*(byte *)((long)param_1 + 0x89) ^ bVar1) & 1) != 0))
                    goto LAB_1045f5978;
                  }
                  uVar4 = *param_1;
                  func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
                  uVar2 = (uint)uVar4;
                  goto LAB_1045f5978;
                }
              }
              else if (lStack_208 != 0) {
                uStack_278 = param_2[0xd];
                uStack_280 = param_2[0xc];
                uStack_268 = param_2[0xf];
                uStack_270 = param_2[0xe];
                uStack_260 = param_2[0x10];
                uStack_298 = param_2[9];
                lStack_2a0 = param_2[8];
                uStack_288 = param_2[0xb];
                uStack_290 = param_2[10];
                uStack_88 = param_1[9];
                uStack_90 = param_1[8];
                uStack_78 = param_1[0xb];
                uStack_80 = param_1[10];
                uStack_68 = param_1[0xd];
                uStack_70 = param_1[0xc];
                uStack_58 = param_1[0xf];
                uStack_60 = param_1[0xe];
                uStack_50 = param_1[0x10];
                lStack_250 = lStack_2a0;
                uStack_248 = uStack_298;
                uStack_240 = uStack_290;
                uStack_238 = uStack_288;
                uStack_230 = uStack_280;
                uStack_228 = uStack_278;
                uStack_220 = uStack_270;
                uStack_218 = uStack_268;
                uStack_210 = uStack_260;
                func_0x0001045f8fa8(&uStack_e0,auStack_2e8,0x113087008,&UNK_10dd18920);
                func_0x0001045f8fa8(&uStack_130,auStack_2e8,0x113087008,&UNK_10dd18920);
                puVar3 = &uStack_90;
                func_0x0001045f79f8(puVar3,&lStack_250);
                func_0x000104603c54(&lStack_2a0,0x113087008,&UNK_10dd18920);
                func_0x000104603c54(&lStack_1c0,0x113087008,&UNK_10dd18920);
                if (((ulong)puVar3 & 1) != 0) goto LAB_1045f59fc;
                goto LAB_1045f5974;
              }
              lStack_250 = lStack_1c0;
              uStack_248 = uStack_1b8;
              uStack_240 = uStack_1b0;
              uStack_238 = uStack_1a8;
              uStack_230 = uStack_1a0;
              uStack_228 = uStack_198;
              uStack_220 = uStack_190;
              uStack_218 = uStack_188;
              uStack_210 = uStack_180;
              func_0x0001045f8fa8(&uStack_e0,&uStack_90,0x113087008,&UNK_10dd18920);
              func_0x0001045f8fa8(&uStack_130,&uStack_90,0x113087008,&UNK_10dd18920);
              func_0x000104603c54(&lStack_250,0x113087ae0,&UNK_10dd19c68);
            }
          }
          else if (lVar5 != 0) {
            uVar7 = param_1[6];
            if (((uVar7 == param_2[6]) && (lVar6 == lVar5)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar7,lVar6,param_2[6],lVar5,0), (uVar7 & 1) != 0)) goto LAB_1045f57bc;
          }
        }
      }
      else if (lVar5 != 0) {
        uVar7 = param_1[4];
        if (((uVar7 == param_2[4]) && (lVar6 == lVar5)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,lVar6,param_2[4],lVar5,0), (uVar7 & 1) != 0)) goto LAB_1045f5764;
      }
    }
  }
  else if (lVar5 != 0) {
    uVar7 = param_1[2];
    if ((uVar7 == param_2[2] && lVar6 == lVar5) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,lVar6,param_2[2],lVar5,0), (uVar7 & 1) != 0)) goto LAB_1045f570c;
  }
LAB_1045f5974:
  uVar2 = 0;
LAB_1045f5978:
  return uVar2 & 1;
}



/* Entry: 1045e129c; end: 1045e132b;  */

/* WARNING: Removing unreachable block (ram,0x0001045e12ec) */

void FUN_1045e129c(void)

{
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
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045e0ecc(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e132c; end: 1045e1377;  */

void FUN_1045e132c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x202;
  return;
}



/* Entry: 1045e1378; end: 1045e13a7;  */

undefined1  [16] FUN_1045e1378(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045e13a8; end: 1045e13db;  */

void FUN_1045e13a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045e13dc; end: 1045e13ef;  */

undefined8 FUN_1045e13dc(void)

{
  return 0x1045e13ec;
}



/* Entry: 1045e13f0; end: 1045e1403;  */

void FUN_1045e13f0(void)

{
  FUN_1045e0da0();
  return;
}



/* Entry: 1045e1404; end: 1045e1453;  */

void FUN_1045e1404(void)

{
  FUN_1045e10ec();
  return;
}



/* Entry: 1045e1454; end: 1045e14f3;  */

void FUN_1045e1454(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087f90 != -1) {
    _swift_once(0x113087f90,FUN_1045e0a68);
  }
  uVar5 = uRam0000000113814278;
  uVar4 = uRam0000000113814270;
  uVar3 = uRam0000000113814268;
  uVar2 = uRam0000000113814260;
  uVar1 = uRam0000000113814258;
  *param_1 = uRam0000000113814250;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045e14f4; end: 1045e152f;  */

void FUN_1045e14f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089388;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089388,&UNK_10dd1d898);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045e1530; end: 1045e174b;  */

/* WARNING: Removing unreachable block (ram,0x0001045e15ac) */

void FUN_1045e1530(void)

{
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
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_50 = unaff_x20[0xe];
  uStack_48 = (undefined2)unaff_x20[0xf];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x82);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
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
  __ss6HasherV5_seedABSi_tcfC(&uStack_110,0);
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_120 = uStack_d0;
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  FUN_1045e0ecc(&uStack_160);
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_d0 = uStack_120;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045e174c; end: 1045e17cf;  */

uint FUN_1045e174c(undefined8 *param_1,undefined8 *param_2)

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
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
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
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_d0 = param_1[0xe];
  uStack_c8 = (undefined2)param_1[0xf];
  uStack_be = *(undefined8 *)((long)param_1 + 0x82);
  uStack_c6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
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
  uStack_40 = param_2[0xe];
  uStack_38 = (undefined2)param_2[0xf];
  uStack_2e = *(undefined8 *)((long)param_2 + 0x82);
  uStack_36 = (undefined6)*(undefined8 *)((long)param_2 + 0x7a);
  uStack_30 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
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
  FUN_1045e1298(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}


