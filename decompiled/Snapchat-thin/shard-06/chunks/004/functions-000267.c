/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104859908; end: 104859953;  */

long FUN_104859908(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  puVar2 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *puVar2 = 0;
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined4 **)(unaff_x20 + 0x10) = puVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 104859954; end: 104859997;  */

void FUN_104859954(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104859998; end: 104859afb;  */

void FUN_104859998(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x0001000285a8(0x113092fe0,&UNK_10dd38840);
  lVar11 = *unaff_x20;
  lVar5 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar11 || lVar1 + uVar6 * 8 <= lVar5 + 0x40U) {
      _memmove(lVar5 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar7 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar11 + 0x40);
    lVar9 = lVar7;
    if (uVar6 == 0) goto LAB_104859a70;
    do {
      uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x18);
        uVar3 = *(undefined1 *)(puVar2 + 2);
        uVar13 = puVar2[1];
        uVar12 = *puVar2;
        *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 8);
        puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar10 * 0x18);
        puVar2[1] = uVar13;
        *puVar2 = uVar12;
        *(undefined1 *)(puVar2 + 2) = uVar3;
        lVar9 = lVar7;
        if (uVar6 != 0) break;
LAB_104859a70:
        do {
          lVar7 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104859afc);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar7) goto LAB_104859adc;
          uVar6 = *(ulong *)(lVar1 + lVar7 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 * 0x40;
      }
    } while( true );
  }
LAB_104859adc:
  _swift_release(lVar11);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 104859afc; end: 104859bf3;  */

void FUN_104859afc(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long lStack_30;
  undefined *puVar3;
  
  _swift_beginAccess(0x1138153c0,auStack_60,0,0);
  func_0x00010008a8e8(0x1138153c0,auStack_48);
  _swift_beginAccess(0x1138153c0,auStack_78,0x21,0);
  func_0x000104859ba4(param_1,0x1138153c0);
  _swift_endAccess(auStack_78);
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_opt_self();
  iVar2 = (int)puVar3;
  func_0x00010c077480();
  if (iVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104859ba0);
    (*pcVar1)();
  }
  if (lStack_30 == 0) {
    func_0x00010008a938(param_1);
    func_0x00010008a938(auStack_48);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104859ba4);
  (*pcVar1)();
}



/* Entry: 104859bf4; end: 104859c03;  */

void FUN_104859bf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 104859c04; end: 104859c93;  */

void FUN_104859c04(void)

{
  int iVar1;
  long *plVar2;
  int *in_x3;
  long unaff_x22;
  
  iVar1 = *in_x3;
  plVar2 = (long *)(ulong)(uint)in_x3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x104859c58;
                    /* WARNING: Could not recover jumptable at 0x000104859c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))();
  return;
}



/* Entry: 104859c94; end: 104859cd3;  */

void FUN_104859c94(void)

{
  code *in_x3;
  
  (*in_x3)();
  return;
}



/* Entry: 104859cd4; end: 104859ce3;  */

void FUN_104859cd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104859ce4; end: 104859d77;  */

void FUN_104859ce4(void)

{
  int iVar1;
  long *plVar2;
  int *in_x3;
  long unaff_x22;
  
  iVar1 = *in_x3;
  plVar2 = (long *)(ulong)(uint)in_x3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x104859d90;
                    /* WARNING: Could not recover jumptable at 0x000104859d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))();
  return;
}



/* Entry: 104859d78; end: 104859e43;  */

void FUN_104859d78(void)

{
  code *in_x3;
  
  (*in_x3)();
  return;
}



/* Entry: 104859e44; end: 10485a063;  */

undefined8
FUN_104859e44(ulong param_1,ulong param_2,char param_3,long param_4,ulong param_5,char param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_3 == '\0') {
    if (param_6 != '\0') {
      return 0;
    }
    if (param_2 >> 0x3c < 0xf) {
      if (param_5 >> 0x3c < 0xf) {
        FUN_10485a064(param_1,param_2,0);
        FUN_10485a064(param_4,param_5,0);
        uVar1 = param_1;
        func_0x000100e25fcc(param_1,param_2,param_4,param_5);
        func_0x0001000b44c0(param_4,param_5);
        func_0x0001000b44c0(param_1,param_2);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < param_5 >> 0x3c) {
      FUN_10485a064(param_1,param_2,0);
      uVar2 = 0;
      goto LAB_104859ef8;
    }
    FUN_10485a064(param_1,param_2,0);
    uVar2 = 0;
  }
  else {
    if (param_3 != '\x01') {
      if (param_6 != '\x02') {
        return 0;
      }
      if (param_5 == 0 && param_4 == 0) {
        return 1;
      }
      return 0;
    }
    if (param_6 != '\x01') {
      return 0;
    }
    if (param_2 >> 0x3c < 0xf) {
      if (param_5 >> 0x3c < 0xf) {
        FUN_10485a064(param_1,param_2,1);
        FUN_10485a064(param_4,param_5,1);
        uVar1 = param_1;
        func_0x000100e25fcc(param_1,param_2,param_4,param_5);
        func_0x0001000b44c0(param_4,param_5);
        func_0x0001000b44c0(param_1,param_2);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < param_5 >> 0x3c) {
      FUN_10485a064(param_1,param_2,1);
      uVar2 = 1;
LAB_104859ef8:
      FUN_10485a064(param_4,param_5,uVar2);
      func_0x0001000b44c0(param_1,param_2);
      return 1;
    }
    FUN_10485a064(param_1,param_2,1);
    uVar2 = 1;
  }
  FUN_10485a064(param_4,param_5,uVar2);
  func_0x0001000b44c0(param_1,param_2);
  func_0x0001000b44c0(param_4,param_5);
  return 0;
}



/* Entry: 10485a064; end: 10485a09b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10485a064(ulong param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  
  if (1 < param_3) {
    return;
  }
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_2 >> 0x3e);
    if (uVar1 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10485a09c; end: 10485a137;  */

undefined8 * FUN_10485a09c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10485a064(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10485a138; end: 10485a17b;  */

undefined8 * FUN_10485a138(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010485a088(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10485a17c; end: 10485a267;  */

int FUN_10485a17c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10485a268; end: 10485a33f;  */

void FUN_10485a268(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10485a340; end: 10485a34f;  */

void FUN_10485a340(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10485a350; end: 10485a38f;  */

void FUN_10485a350(void)

{
  undefined *puVar1;
  
  if (puRam00000001130931c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd38958;
  _swift_getWitnessTable(&UNK_10dd38958,&UNK_1107a4a68);
  puRam00000001130931c0 = puVar1;
  return;
}



/* Entry: 10485a390; end: 10485a39f;  */

undefined1  [16] FUN_10485a390(void)

{
  return ZEXT816(0x1107a4a68);
}



/* Entry: 10485a3a0; end: 10485a3e7;  */

uint FUN_10485a3a0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_10485a3e8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10485a3e8; end: 10485a567;  */

ulong FUN_10485a3e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  
  uVar7 = *param_1;
  uVar8 = param_1[1];
  bVar11 = (byte)param_1[4];
  if (bVar11 < 2) {
    if (bVar11 == 0) {
      if ((byte)param_2[4] == 0) {
        uVar1 = *param_2;
        uVar9 = param_2[1];
        uVar6 = 0;
        FUN_104866d7c(0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar7,uVar1,uVar6);
        if ((uVar7 & 1) != 0) {
          func_0x000104874818(0);
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar9);
          return (ulong)((uint)uVar8 & 1);
        }
      }
    }
    else if ((byte)param_2[4] == 1) {
      uVar9 = *param_2;
      uVar10 = param_2[1];
      if (uVar7 == uVar9 && uVar8 == uVar10) {
        return 1;
      }
LAB_10485a504:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(uVar7,uVar8,uVar9,uVar10,0);
      return uVar7;
    }
  }
  else if (bVar11 == 2) {
    if ((byte)param_2[4] == 2) {
      uVar1 = param_1[2];
      uVar3 = param_1[3];
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      uVar2 = *param_2;
      uVar4 = param_2[1];
      uVar6 = 0;
      FUN_104866d7c(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar7,uVar2,uVar6);
      if ((uVar7 & 1) != 0) {
        func_0x000104874818(0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar8,uVar4);
        if ((uVar8 & 1) != 0) {
          uVar7 = uVar1;
          uVar8 = uVar3;
          if ((uVar1 == uVar9) && (uVar3 == uVar10)) {
            return 1;
          }
          goto LAB_10485a504;
        }
      }
    }
  }
  else if ((byte)param_2[4] == 3) {
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    bVar11 = (byte)*param_2 | (byte)uVar7;
    bVar12 = *(byte *)((long)param_2 + 1) | (byte)(uVar7 >> 8);
    bVar13 = *(byte *)((long)param_2 + 2) | (byte)(uVar7 >> 0x10);
    bVar14 = *(byte *)((long)param_2 + 3) | (byte)(uVar7 >> 0x18);
    bVar15 = *(byte *)((long)param_2 + 4) | (byte)(uVar7 >> 0x20);
    bVar16 = *(byte *)((long)param_2 + 5) | (byte)(uVar7 >> 0x28);
    bVar17 = *(byte *)((long)param_2 + 6) | (byte)(uVar7 >> 0x30);
    bVar18 = *(byte *)((long)param_2 + 7) | (byte)(uVar7 >> 0x38);
    bVar19 = (byte)param_2[1] | (byte)uVar8;
    bVar20 = *(byte *)((long)param_2 + 9) | (byte)(uVar8 >> 8);
    bVar21 = *(byte *)((long)param_2 + 10) | (byte)(uVar8 >> 0x10);
    bVar22 = *(byte *)((long)param_2 + 0xb) | (byte)(uVar8 >> 0x18);
    bVar23 = *(byte *)((long)param_2 + 0xc) | (byte)(uVar8 >> 0x20);
    bVar24 = *(byte *)((long)param_2 + 0xd) | (byte)(uVar8 >> 0x28);
    bVar25 = *(byte *)((long)param_2 + 0xe) | (byte)(uVar8 >> 0x30);
    bVar26 = *(byte *)((long)param_2 + 0xf) | (byte)(uVar8 >> 0x38);
    auVar27[1] = bVar12;
    auVar27[0] = bVar11;
    auVar27[2] = bVar13;
    auVar27[3] = bVar14;
    auVar27[4] = bVar15;
    auVar27[5] = bVar16;
    auVar27[6] = bVar17;
    auVar27[7] = bVar18;
    auVar27[8] = bVar19;
    auVar27[9] = bVar20;
    auVar27[10] = bVar21;
    auVar27[0xb] = bVar22;
    auVar27[0xc] = bVar23;
    auVar27[0xd] = bVar24;
    auVar27[0xe] = bVar25;
    auVar27[0xf] = bVar26;
    auVar5[1] = bVar12;
    auVar5[0] = bVar11;
    auVar5[2] = bVar13;
    auVar5[3] = bVar14;
    auVar5[4] = bVar15;
    auVar5[5] = bVar16;
    auVar5[6] = bVar17;
    auVar5[7] = bVar18;
    auVar5[8] = bVar19;
    auVar5[9] = bVar20;
    auVar5[10] = bVar21;
    auVar5[0xb] = bVar22;
    auVar5[0xc] = bVar23;
    auVar5[0xd] = bVar24;
    auVar5[0xe] = bVar25;
    auVar5[0xf] = bVar26;
    auVar27 = NEON_ext(auVar27,auVar5,8,1);
    if (CONCAT17(bVar18 | auVar27[7],
                 CONCAT16(bVar17 | auVar27[6],
                          CONCAT15(bVar16 | auVar27[5],
                                   CONCAT14(bVar15 | auVar27[4],
                                            CONCAT13(bVar14 | auVar27[3],
                                                     CONCAT12(bVar13 | auVar27[2],
                                                              CONCAT11(bVar12 | auVar27[1],
                                                                       bVar11 | auVar27[0]))))))) ==
        0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10485a568; end: 10485a603;  */

long FUN_10485a568(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10485a604; end: 10485a617;  */

void FUN_10485a604(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = param_1[1];
  uVar1 = param_1[3];
  cVar2 = *(char *)(param_1 + 4);
  if (cVar2 == '\x02') {
    _objc_release(*param_1,uVar3,param_1[2]);
    _objc_release(uVar3);
    uVar3 = uVar1;
  }
  else if (cVar2 != '\x01') {
    if (cVar2 != '\0') {
      return;
    }
    _objc_release(*param_1,uVar3,param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10485a618; end: 10485a687;  */

void FUN_10485a618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 == '\x02') {
    _objc_release();
    _objc_release(param_2);
    param_2 = param_4;
  }
  else if (param_5 != '\x01') {
    if (param_5 != '\0') {
      return;
    }
    _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10485a688; end: 10485a757;  */

undefined8 * FUN_10485a688(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x00010485a594(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 10485a758; end: 10485a79f;  */

undefined8 * FUN_10485a758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_10485a618(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 10485a7a0; end: 10485a877;  */

int FUN_10485a7a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10485a878; end: 10485a923;  */

void FUN_10485a878(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10485a924; end: 10485a95b;  */

void FUN_10485a924(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10485a95c; end: 10485a977; -[SCUserVerificationContext description] */

void FUN_10485a95c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10485a978; end: 10485a9bf; -[SCUserVerificationContext init] */

void FUN_10485a978(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCUserVerificationModels/SCUserVerificationContextWrapper.swift",0x3f,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10485a9c0);
  (*pcVar1)();
}



/* Entry: 10485a9c0; end: 10485a9f3; -[SCUserVerificationContext hash] */

undefined8 FUN_10485a9c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10485a9f4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10485a9f4; end: 10485aadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485a9f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130931c8));
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_1130931d0))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130931d0);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_1130931d8))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130931d8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10485aadc; end: 10485acb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10485aadc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  uint uVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar7 = &lStack_68;
    _swift_dynamicCast(plVar7,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar7 & 1) != 0) {
      cVar5 = *(char *)(unaff_x20 + _DAT_1130931c8);
      if (cVar5 == *(char *)(lStack_68 + _DAT_1130931c8)) {
        lVar6 = _DAT_1130931d0;
        if ((cVar5 != '\0') && (lVar6 = _DAT_1130931d8, cVar5 != '\x01')) {
          _objc_release();
          uVar9 = 1;
          goto LAB_10485ac2c;
        }
        uVar1 = *(undefined8 *)(lStack_68 + lVar6);
        uVar3 = ((undefined8 *)(lStack_68 + lVar6))[1];
        uVar2 = *(undefined8 *)(unaff_x20 + lVar6);
        uVar4 = ((undefined8 *)(unaff_x20 + lVar6))[1];
        if (uVar4 >> 0x3c < 0xf) {
          func_0x000100de78a0(uVar1,uVar3);
          if (uVar3 >> 0x3c < 0xf) {
            func_0x000100de78a0(uVar1,uVar3);
            func_0x000100de78a0(uVar2,uVar4);
            uVar8 = uVar2;
            func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
            uVar9 = (uint)uVar8;
            func_0x0001000b44c0(uVar1,uVar3);
            _objc_release(lStack_68);
            func_0x0001000b44c0(uVar1,uVar3);
            func_0x0001000b44c0(uVar2,uVar4);
            goto LAB_10485ac2c;
          }
          func_0x000100de78a0(uVar2,uVar4);
          _objc_release(lStack_68);
        }
        else {
          func_0x000100de78a0(uVar1,uVar3);
          func_0x000100de78a0(uVar2,uVar4);
          _objc_release(lStack_68);
          if (0xe < uVar3 >> 0x3c) {
            func_0x0001000b44c0(uVar2,uVar4);
            uVar9 = 1;
            goto LAB_10485ac2c;
          }
        }
        func_0x0001000b44c0(uVar2,uVar4);
        func_0x0001000b44c0(uVar1,uVar3);
      }
      else {
        _objc_release();
      }
    }
  }
  uVar9 = 0;
LAB_10485ac2c:
  return uVar9 & 1;
}



/* Entry: 10485acb4; end: 10485ad33; -[SCUserVerificationContext isEqual:] */

uint FUN_10485acb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10485aadc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10485ad34; end: 10485ad37; -[SCUserVerificationContext copyWithZone:] */

void FUN_10485ad34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10485ad38; end: 10485adeb; +[SCUserVerificationContext fromNewRegistrationWithCofResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485ad38(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_2 = -0x1000000000000000;
  }
  else {
    lVar3 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130931c8) = 0;
  plVar1 = (long *)(lVar3 + _DAT_1130931d0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar3 + _DAT_1130931d8);
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10485adec; end: 10485aea3; +[SCUserVerificationContext fromResumeRegistrationWithCofResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485adec(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_2 = -0x1000000000000000;
  }
  else {
    lVar3 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130931c8) = 1;
  puVar2 = (undefined8 *)(lVar3 + _DAT_1130931d0);
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  plVar1 = (long *)(lVar3 + _DAT_1130931d8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10485aea4; end: 10485af13; +[SCUserVerificationContext fromPreRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485aea4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130931c8) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130931d0);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130931d8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10485af14; end: 10485afdf; -[SCUserVerificationContext matchFromNewRegistration:fromResumeRegistration:fromPreRegistration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485af14(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_1130931d0;
  if ((*(char *)(param_1 + _DAT_1130931c8) != '\0') &&
     (lVar1 = _DAT_1130931d8, param_3 = param_4, *(char *)(param_1 + _DAT_1130931c8) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010485afdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + lVar1))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    _objc_retain(param_1);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
  }
  else {
    _objc_retain(param_1);
    uVar3 = 0;
  }
  (**(code **)(param_3 + 0x10))(param_3,uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10485afe0; end: 10485b013;  */

void FUN_10485afe0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10485b014; end: 10485b053; -[SCUserVerificationContext .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010485b034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010485b038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485b014(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130931d0))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_1130931d0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10485b054; end: 10485b073;  */

void FUN_10485b054(void)

{
  _objc_opt_self(&PTR_PTR_1129dd448);
  return;
}



/* Entry: 10485b074; end: 10485b1db;  */

int FUN_10485b074(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10485b0f0;
        goto LAB_10485b0d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10485b0d4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10485b0f0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10485b1dc; end: 10485b21b;  */

void FUN_10485b1dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd38ab0;
  _swift_getWitnessTable(&UNK_10dd38ab0,&UNK_1107a4bf0);
  puRam0000000113093208 = puVar1;
  return;
}



/* Entry: 10485b21c; end: 10485b2ef;  */

void FUN_10485b21c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10485b2f0; end: 10485b30f;  */

void FUN_10485b2f0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10485b310; end: 10485b343;  */

undefined8 FUN_10485b310(undefined8 param_1)

{
  FUN_10485a604();
  return param_1;
}



/* Entry: 10485b344; end: 10485b37b; -[SCUserVerificationResult description] */

void FUN_10485b344(void)

{
  undefined1 auStack_38 [40];
  
  _objc_retain();
  FUN_10485bc8c(auStack_38);
  FUN_10485b310(auStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10485b37c; end: 10485b3c3; -[SCUserVerificationResult init] */

void FUN_10485b37c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCUserVerificationModels/SCUserVerificationResultWrapper.swift",0x3e,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10485b3c4);
  (*pcVar1)();
}



/* Entry: 10485b3c4; end: 10485b3f7; -[SCUserVerificationResult hash] */

undefined8 FUN_10485b3c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10485b3f8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10485b3f8; end: 10485b8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485b3f8(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_113093210);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113093218) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104865f40();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113093220);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113093228))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113093228);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(long *)(unaff_x20 + _DAT_113093230) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104865f40();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_113093238);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113093240))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113093240);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x00010bfde980();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10485b8a8; end: 10485b927; -[SCUserVerificationResult isEqual:] */

uint FUN_10485b8a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x00010485b5c8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10485b928; end: 10485b92b; -[SCUserVerificationResult copyWithZone:] */

void FUN_10485b928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10485b92c; end: 10485b98b; +[SCUserVerificationResult phoneVerifyWithPhoneNumber:twoFaStatus:] */

void FUN_10485b92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10485bddc(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10485b98c; end: 10485b9c3; +[SCUserVerificationResult emailVerifyWithEmail:] */

void FUN_10485b98c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  func_0x00010485be9c();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10485b9c4; end: 10485ba47; +[SCUserVerificationResult bothPhoneAndEmailVerifiedWithPhoneNumber:phoneTwoFaStatus:email:] */

void FUN_10485b9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10485bf58(param_3,param_4,param_5,param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10485ba48; end: 10485ba5b; +[SCUserVerificationResult noneVerify] */

void FUN_10485ba48(void)

{
  FUN_10485c034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10485ba5c; end: 10485bb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485ba5c(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_113093210);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(long *)(unaff_x20 + _DAT_113093218) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bb40);
        (*pcVar2)();
      }
      if (*(long *)(unaff_x20 + _DAT_113093220) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bb4c);
        (*pcVar2)();
      }
      (*param_1)(*(long *)(unaff_x20 + _DAT_113093218));
    }
    else {
      if (((undefined8 *)(unaff_x20 + _DAT_113093228))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bb48);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_113093228));
    }
  }
  else if (bVar1 == 2) {
    if (*(long *)(unaff_x20 + _DAT_113093230) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bb44);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + _DAT_113093238) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bb50);
      (*pcVar2)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_113093240))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bb54);
      (*pcVar2)();
    }
    (*param_5)(*(long *)(unaff_x20 + _DAT_113093230),*(long *)(unaff_x20 + _DAT_113093238),
               *(undefined8 *)(unaff_x20 + _DAT_113093240));
  }
  else {
    (*param_7)();
  }
  return;
}



/* Entry: 10485bb54; end: 10485bbc7; -[SCUserVerificationResult matchPhoneVerify:emailVerify:bothPhoneAndEmailVerified:noneVerify:] */

void FUN_10485bb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10485ba5c(FUN_10485c29c,auStack_40,FUN_10485c2b0,auStack_60,FUN_10485c2e8,auStack_80,
                FUN_10485c340,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 10485bbc8; end: 10485bbfb;  */

void FUN_10485bbc8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10485bbfc; end: 10485bc7b; -[SCUserVerificationResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485bbfc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093218));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093220));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093228 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093230));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093238));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113093240 + 8))
  ;
  return;
}



/* Entry: 10485bc7c; end: 10485bc8b;  */

ulong FUN_10485bc7c(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 10485bc8c; end: 10485bddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485bc8c(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  bVar1 = *(byte *)(param_2 + _DAT_113093210);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar3 = *(long *)(param_2 + _DAT_113093218);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bdc8);
        (*pcVar2)();
      }
      lVar4 = *(long *)(param_2 + _DAT_113093220);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bdd4);
        (*pcVar2)();
      }
      _objc_retain(lVar3);
      _objc_retain(lVar4);
    }
    else {
      lVar4 = ((long *)(param_2 + _DAT_113093228))[1];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bdd0);
        (*pcVar2)();
      }
      lVar3 = *(long *)(param_2 + _DAT_113093228);
      _swift_bridgeObjectRetain(lVar4);
    }
    lVar6 = 0;
    lVar5 = 0;
  }
  else if (bVar1 == 2) {
    lVar3 = *(long *)(param_2 + _DAT_113093230);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bdcc);
      (*pcVar2)();
    }
    lVar4 = *(long *)(param_2 + _DAT_113093238);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bdd8);
      (*pcVar2)();
    }
    lVar5 = ((long *)(param_2 + _DAT_113093240))[1];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10485bddc);
      (*pcVar2)();
    }
    lVar6 = *(long *)(param_2 + _DAT_113093240);
    _objc_retain(lVar3);
    _objc_retain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    lVar6 = 0;
    lVar5 = 0;
  }
  _objc_release(param_2);
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar6;
  param_1[3] = lVar5;
  *(byte *)(param_1 + 4) = bVar1;
  return;
}



/* Entry: 10485bddc; end: 10485bf57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485bddc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_10485c0d4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113093210) = 0;
  *(long *)(lVar4 + _DAT_113093218) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113093220) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113093228);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113093230) = 0;
  *(undefined8 *)(lVar4 + _DAT_113093238) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113093240);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10485bf58; end: 10485c033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485bf58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_10485c0d4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113093210) = 2;
  *(undefined8 *)(lVar4 + _DAT_113093218) = 0;
  *(undefined8 *)(lVar4 + _DAT_113093220) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113093228);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_113093230) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113093238) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113093240);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 10485c034; end: 10485c0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485c034(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  FUN_10485c0d4();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113093210) = 3;
  *(undefined8 *)(lVar2 + _DAT_113093218) = 0;
  *(undefined8 *)(lVar2 + _DAT_113093220) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113093228);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113093230) = 0;
  *(undefined8 *)(lVar2 + _DAT_113093238) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113093240);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10485c0d4; end: 10485c0f3;  */

void FUN_10485c0d4(void)

{
  _objc_opt_self(&PTR_PTR_1129dd518);
  return;
}



/* Entry: 10485c0f4; end: 10485c25b;  */

int FUN_10485c0f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10485c170;
        goto LAB_10485c154;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10485c154:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10485c170:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10485c25c; end: 10485c29b;  */

void FUN_10485c25c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd38b90;
  _swift_getWitnessTable(&UNK_10dd38b90,&UNK_1107a4cd8);
  puRam0000000113093270 = puVar1;
  return;
}



/* Entry: 10485c29c; end: 10485c2af;  */

void FUN_10485c29c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010485c2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 10485c2b0; end: 10485c2e7;  */

void FUN_10485c2b0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10485c2e8; end: 10485c33f;  */

void FUN_10485c2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10485c340; end: 10485c363;  */

void FUN_10485c340(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010485c348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10485c364; end: 10485c3bb;  */

uint FUN_10485c364(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_10485c3bc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10485c3bc; end: 10485c52b;  */

byte FUN_10485c3bc(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar1 = (char)param_1[1];
  cVar2 = *(char *)(param_2 + 1);
  if (cVar1 == -1) {
    if (cVar2 == -1) {
LAB_10485c4c4:
      uVar3 = param_1[2];
      func_0x000100e25fcc(uVar3,param_1[3],param_2[2],param_2[3]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[4];
        if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) != 0)) {
          bVar4 = (byte)param_1[6] ^ *(byte *)(param_2 + 6) ^ 1;
          goto LAB_10485c510;
        }
      }
    }
  }
  else if (cVar2 != -1) {
    uVar5 = *param_1;
    uVar6 = *param_2;
    uVar3 = uVar5;
    if (cVar1 == '\x01') {
      if (cVar2 == '\x01') {
        func_0x0001007bbbf8(0);
        func_0x00010485c34c(uVar6,1);
        func_0x00010485c34c(uVar5,1);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar6);
        func_0x00010485c894(uVar6,1);
        func_0x00010485c894(uVar5,1);
joined_r0x00010485c4c0:
        if ((uVar3 & 1) != 0) goto LAB_10485c4c4;
      }
    }
    else if (cVar2 != '\x01') {
      func_0x0001007bbbf8(0);
      func_0x00010485c34c(uVar6,cVar2);
      func_0x00010485c34c(uVar5,cVar1);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar6);
      func_0x00010485c894(uVar6,cVar2);
      func_0x00010485c894(uVar5,cVar1);
      goto joined_r0x00010485c4c0;
    }
  }
  bVar4 = 0;
LAB_10485c510:
  return bVar4 & 1;
}



/* Entry: 10485c52c; end: 10485c593;  */

long FUN_10485c52c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10485c594; end: 10485c597;  */

void FUN_10485c594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10485c598; end: 10485c723;  */

undefined8 * FUN_10485c598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = *(char *)(param_2 + 1);
  if (cVar2 == -1) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  else {
    uVar3 = *param_2;
    func_0x00010485c360(uVar3,cVar2);
    *param_1 = uVar3;
    *(char *)(param_1 + 1) = cVar2;
  }
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10485c724; end: 10485c7eb;  */

undefined8 FUN_10485c724(undefined8 param_1)

{
  FUN_10485c910();
  return param_1;
}



/* Entry: 10485c7ec; end: 10485c8a7;  */

int FUN_10485c7ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10485c8a8; end: 10485c90f;  */

uint FUN_10485c8a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) == '\x01') {
LAB_10485c8e4:
      uVar1 = 0;
      func_0x0001007bbbf8(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,uVar3,uVar1);
      return (uint)uVar2 & 1;
    }
  }
  else if (*(char *)(param_2 + 1) != '\x01') goto LAB_10485c8e4;
  return 0;
}



/* Entry: 10485c910; end: 10485c91f;  */

void FUN_10485c910(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 10485c920; end: 10485c96f;  */

undefined8 * FUN_10485c920(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x00010485c360(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10485c594(uVar3,uVar2);
  return param_1;
}



/* Entry: 10485c970; end: 10485c9ab;  */

undefined8 * FUN_10485c970(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10485c594(uVar3,uVar2);
  return param_1;
}



/* Entry: 10485c9ac; end: 10485ca7f;  */

int FUN_10485c9ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10485ca80; end: 10485cae7;  */

bool FUN_10485ca80(ulong param_1,long param_2,int param_3,ulong param_4,long param_5,int param_6)

{
  if (param_2 == 0) {
    if (param_5 == 0) goto LAB_10485cad0;
  }
  else if (param_5 != 0) {
    if (((param_1 != param_4) || (param_2 != param_5)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
      return false;
    }
LAB_10485cad0:
    return param_3 == param_6;
  }
  return false;
}



/* Entry: 10485cae8; end: 10485caef;  */

void FUN_10485cae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10485caf0; end: 10485cb23;  */

undefined8 * FUN_10485caf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10485cb24; end: 10485cb77;  */

undefined8 * FUN_10485cb24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10485cb78; end: 10485cbb3;  */

undefined8 * FUN_10485cb78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10485cbb4; end: 10485cc7b;  */

int FUN_10485cbb4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10485cc7c; end: 10485cdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10485cc7c(long param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  lVar2 = _DAT_113093520;
  uVar6 = 0;
  if (param_1 != 0) {
    bVar1 = *(byte *)(unaff_x20 + _DAT_113093520);
    uVar5 = (ulong)bVar1;
    if (bVar1 == 0) {
LAB_10485ccb8:
      uVar8 = (ulong)*(byte *)(param_1 + _DAT_113093520);
      if (*(byte *)(param_1 + _DAT_113093520) == 0) goto joined_r0x00010485cd04;
LAB_10485ccf8:
      if ((int)uVar8 == 1) {
        uVar8 = 1;
        goto joined_r0x00010485cd04;
      }
      uVar8 = *(ulong *)(param_1 + _DAT_113093528);
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10485cdf4);
        (*pcVar3)();
      }
      _objc_retain(uVar8);
      if (uVar5 == 0) goto LAB_10485cd08;
LAB_10485ccc4:
      if (uVar5 == 1) {
        if (uVar8 == 1) {
LAB_10485cd0c:
          uVar6 = 1;
          goto LAB_10485cd50;
        }
      }
      else {
        if (1 < uVar8) {
          uVar7 = *(undefined8 *)(uVar5 + _DAT_113093608);
          uVar9 = *(undefined8 *)(uVar8 + _DAT_113093608);
          uVar4 = 0;
          FUN_10486de80();
          auStack_60[0] = uVar9;
          uStack_48 = uVar4;
          _objc_retain(param_1);
          _objc_retain(uVar7);
          _objc_retain(uVar9);
          FUN_10486d6d0(auStack_60);
          _objc_release(param_1);
          FUN_10485ce54(uVar5);
          FUN_10485ce54(uVar8);
          _objc_release(uVar7);
          func_0x00010006e7f4(auStack_60);
          goto LAB_10485cd50;
        }
        FUN_10485ce54(uVar5);
      }
    }
    else {
      if (bVar1 == 1) {
        uVar5 = 1;
        goto LAB_10485ccb8;
      }
      uVar5 = *(ulong *)(unaff_x20 + _DAT_113093528);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10485cdf0);
        (*pcVar3)();
      }
      _objc_retain(uVar5);
      uVar8 = (ulong)*(byte *)(param_1 + lVar2);
      if (*(byte *)(param_1 + lVar2) != 0) goto LAB_10485ccf8;
joined_r0x00010485cd04:
      if (uVar5 != 0) goto LAB_10485ccc4;
LAB_10485cd08:
      if (uVar8 == 0) goto LAB_10485cd0c;
    }
    FUN_10485ce54(uVar8);
  }
  uVar6 = 0;
LAB_10485cd50:
  return uVar6 & 1;
}



/* Entry: 10485cdf4; end: 10485ce53; -[SCRegistrationMethod isSameTypeAs:] */

uint FUN_10485cdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10485cc7c(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 10485ce54; end: 10485ce63;  */

void FUN_10485ce54(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10485ce64; end: 10485ced7;  */

uint FUN_10485ce64(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = *param_2;
  if (lVar3 == 0) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else if (lVar3 == 1) {
    if (uVar2 == 1) {
      return 1;
    }
  }
  else if (1 < uVar2) {
    uVar1 = 0;
    func_0x0001007bbbf8(0);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(lVar3,uVar2,uVar1);
    return (uint)lVar3 & 1;
  }
  return 0;
}



/* Entry: 10485ced8; end: 10485ceef;  */

void FUN_10485ced8(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 10485cef0; end: 10485cfeb;  */

ulong * FUN_10485cef0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      _objc_retain();
    }
  }
  else if (uVar1 < 0xffffffff) {
    _objc_release(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    _objc_retain();
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 10485cfec; end: 10485d107;  */

int FUN_10485cfec(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 10485d108; end: 10485d147;  */

void FUN_10485d108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd38db0;
  _swift_getWitnessTable(&UNK_10dd38db0,&UNK_1107a5038);
  puRam0000000113093278 = puVar1;
  return;
}


