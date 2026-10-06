/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e7d934; end: 101e7da4f;  */

undefined * FUN_101e7d934(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7da50);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e34670;
    func_0x0001000285a8(0x112e34670,&UNK_10da1dc18);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110491868);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101e7da50; end: 101e7db93;  */

undefined * FUN_101e7da50(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7db94);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e34678;
    func_0x0001000285a8(0x112e34678,&UNK_10da1dc20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e34680;
    func_0x0001000285a8(0x112e34680,&UNK_10da1dc28);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101e7db94; end: 101e7dd57;  */

ulong FUN_101e7db94(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7dc78);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7dc7c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c61168(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c61168(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101e7e2f0(0,0x112d48630,&PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7dd58);
  (*pcVar2)();
}



/* Entry: 101e7dd58; end: 101e7dd6b;  */

ulong FUN_101e7dd58(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7de50);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7de54);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___AVPlayerItemAccessLogEvent_1126a96a0;
    func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerItemAccessLogEvent_1126a96a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___AVPlayerItemAccessLogEvent_1126a96a0;
    func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerItemAccessLogEvent_1126a96a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101e7e2f0(0,0x112e344a8,&PTR__OBJC_CLASS___AVPlayerItemAccessLogEvent_1126a96a0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7df28);
  (*pcVar2)();
}



/* Entry: 101e7dd6c; end: 101e7df27;  */

ulong FUN_101e7dd6c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7de50);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7de54);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101e7e2f0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7df28);
  (*pcVar2)();
}



/* Entry: 101e7df28; end: 101e7dfa7;  */

undefined4 FUN_101e7df28(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = param_1;
  func_0x000107c4c960();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c615e8(param_1);
    uVar3 = 0;
  }
  else {
    func_0x000107c615e8();
    lVar2 = param_1;
    func_0x000107c40518();
    func_0x000107c615e8(param_1);
    uVar3 = 2;
    if (lVar2 != 0x3e) {
      uVar3 = 1;
    }
    uVar1 = 3;
    if (lVar2 != 0x2b) {
      uVar1 = uVar3;
    }
    uVar3 = 4;
    if (1 < lVar2 - 0x2cU) {
      uVar3 = uVar1;
    }
  }
  return uVar3;
}



/* Entry: 101e7dfa8; end: 101e7e043;  */

long FUN_101e7dfa8(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  double dVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  dVar6 = 0.0;
  plVar5 = (long *)(param_2 + 0x20);
  while ((lVar4 != 0 && (0 < param_1))) {
    lVar1 = param_3;
    if (param_1 <= param_3) {
      lVar1 = param_1;
    }
    dVar6 = dVar6 + ((double)lVar1 / (double)param_3) * (double)*plVar5 * 1024.0;
    lVar4 = lVar4 + -1;
    bVar3 = SBORROW8(param_1,lVar1);
    param_1 = param_1 - lVar1;
    plVar5 = plVar5 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7e000);
      (*pcVar2)();
    }
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7e03c);
    (*pcVar2)();
  }
  if (-1.0 < dVar6) {
    if (dVar6 < 1.8446744073709552e+19) {
      return (long)dVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7e044);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7e040);
  (*pcVar2)();
}



/* Entry: 101e7e044; end: 101e7e27b;  */

ulong FUN_101e7e044(double param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  ulong auStack_70 [2];
  
  bVar4 = false;
  if ((0.0 < param_1) && (bVar4 = false, !NAN(param_1))) {
    bVar4 = param_1 < 1.0;
  }
  if ((bVar4) && (func_0x0001000d224c(auStack_70), uVar2 = auStack_70[0], auStack_70[0] != 0)) {
    uVar5 = auStack_70[0];
    func_0x000107c4d8b0();
    uVar6 = auStack_70[0];
    func_0x000107c44f5c();
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar1 = PTR___sSiN_11034deb0;
    if ((long)uVar5 < 1 || (long)uVar6 < 1) {
      func_0x000107c615e8(auStack_70[0]);
    }
    else {
      if (param_3 == 0) {
        param_3 = 0xffffffffffffffff;
      }
      else {
        if (param_3 >> 0x36 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e7e27c);
          (*pcVar3)();
        }
        param_3 = param_3 << 10;
      }
      dVar9 = (double)(long)uVar6;
      dVar10 = (((double)uVar5 / 8.0) * param_1 * (dVar9 / 1000.0)) / (1.0 - param_1);
      if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e7e268);
        (*pcVar3)();
      }
      if (dVar10 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e7e26c);
        (*pcVar3)();
      }
      if (1.8446744073709552e+19 <= dVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e7e270);
        (*pcVar3)();
      }
      if ((ulong)(long)dVar10 <= param_3) {
        param_3 = (long)dVar10;
      }
      if (param_3 <= param_2) {
        param_3 = param_2;
      }
      auStack_70[0] = 0x3d7474725b;
      auStack_70[1] = 0xe500000000000000;
      if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e7e274);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e7e278);
        (*pcVar3)();
      }
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c5fb78(0x3d77627c,0xe400000000000000);
      func_0x000107c6057c(puVar1,puVar8);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar8);
      func_0x000107c5fb78(0x5d,0xe100000000000000);
      func_0x000107c615e8(uVar2);
      param_2 = param_3;
    }
  }
  return param_2;
}



/* Entry: 101e7e27c; end: 101e7e2af;  */

undefined8 FUN_101e7e27c(undefined8 param_1)

{
  FUN_101e96fb8();
  return param_1;
}



/* Entry: 101e7e2b0; end: 101e7e2ef;  */

void FUN_101e7e2b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e34668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10da1e96c;
  func_0x000107c61520(&DAT_10da1e96c,&UNK_1104921f8);
  puRam0000000112e34668 = puVar1;
  return;
}



/* Entry: 101e7e2f0; end: 101e7e32f;  */

void FUN_101e7e2f0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e7e330; end: 101e7e523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7e330(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1,puVar8);
  puVar2 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_101e8304c(param_1,0x112d36580,&UNK_10d9016d0);
    FUN_101e8304c(puVar8,0x112d36580,&UNK_10d9016d0);
    lVar1 = _DAT_112e346c0;
    func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_68,1,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
  }
  else {
    lVar4 = lVar7;
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,lVar1);
    func_0x000107c5ed90();
    puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x000107c61168(PTR__OBJC_CLASS___AVAsset_1126aff38);
    func_0x000107c3e250();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar6 = PTR_PTR_1126bcb80;
    func_0x000107c610f8();
    func_0x000107c454a8();
    func_0x000107c61170(puVar5);
    FUN_101e8304c(param_1,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar9 + 8))(lVar7,lVar1);
    lVar1 = _DAT_112e346c0;
    func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_68,1,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar6;
  }
  func_0x000107c615e8(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112e346d8) = 0;
  return;
}



/* Entry: 101e7e524; end: 101e7e8bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7e524(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  bool bVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + lVar1);
  if (lVar1 == 0) {
    bVar4 = true;
  }
  else {
    func_0x000107c4d444();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar3 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    bVar4 = lVar3 == 0;
    if (!bVar4) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c5edb4(param_1,lVar3);
      lVar1 = lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,bVar4,1,lVar1);
  return;
}



/* Entry: 101e7e8bc; end: 101e7e97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e7e8bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xf0d6);
  }
  *param_1 = lVar2;
  lVar1 = _DAT_112e346f8;
  *(long *)(lVar2 + 0x18) = unaff_x20;
  *(long *)(lVar2 + 0x20) = lVar1;
  func_0x000107c61428(unaff_x20 + lVar1,lVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = 0x101e7e928;
  return auVar3;
}



/* Entry: 101e7e97c; end: 101e7ea07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e7e97c(int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e34708;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e34708);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    func_0x00010912820c();
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      func_0x000101e8abbc();
      func_0x000107c613fc();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c(lVar2);
    FUN_101e82ff0(uVar4);
  }
  func_0x000101e83000(lVar3);
  return lVar2;
}



/* Entry: 101e7ea08; end: 101e7ea73; -[_TtCC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView23PlaybackSummaryCallback onPlaybackSummary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7ea08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100b60084(&uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e7ea74; end: 101e7eacf; -[_TtCC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView23PlaybackSummaryCallback init] */

void FUN_101e7ea74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.PlaybackSummaryCallback",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7eaa0);
  (*pcVar1)();
}



/* Entry: 101e7ead0; end: 101e7eadf; -[_TtCC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView23PlaybackSummaryCallback .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7ead0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e34748));
  return;
}



/* Entry: 101e7eae0; end: 101e7ed27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7eae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 uStack_61;
  
  func_0x000107c614f0();
  lVar3 = _DAT_112e34688;
  uVar4 = 0x112e33e30;
  func_0x0001000285a8(0x112e33e30,&UNK_10da1d340);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  lVar3 = _DAT_112e34690;
  uVar4 = 0x112e33e38;
  func_0x0001000285a8(0x112e33e38,&UNK_10da1dd50);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  lVar3 = _DAT_112e34698;
  uVar4 = 0;
  func_0x000103b791cc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  lVar3 = _DAT_112e346a0;
  lVar5 = 0;
  func_0x000101e83a18();
  func_0x000107c610f8();
  puVar1 = (undefined4 *)(lVar5 + _DAT_112e347f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar4 = 0x3d;
  func_0x000103bae8d8();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112e346b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e346c0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e346c8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e346d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e346d8) = 0;
  lVar3 = _DAT_112e346e0;
  uStack_61 = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar6 = &uStack_61;
  func_0x00010006c248();
  *(undefined1 **)(unaff_x20 + lVar3) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112e346e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e346f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e346f8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112e34708) = 1;
  *(undefined **)(unaff_x20 + _DAT_112e34710) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e34718);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34700) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e346a8) = param_2;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e346b0);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff88,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 101e7ed28; end: 101e7ed4f; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView initWithCoder:] */

void FUN_101e7ed28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101e831ec();
  return;
}



/* Entry: 101e7ed50; end: 101e7edf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7ed50(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar3 != 0) {
    puVar2 = PTR_PTR_1126d40b0;
    func_0x000107c61168();
    func_0x000107c615f0(lVar3);
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7edf4);
      (*pcVar1)();
    }
    func_0x000107c4ff74();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e7edf4; end: 101e7ee17; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView dealloc] */

void FUN_101e7edf4(void)

{
  func_0x000107c61174();
  FUN_101e7ed50();
  return;
}



/* Entry: 101e7ee18; end: 101e7ef23; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e7eea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e7eeac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7ee18(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e34688));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e34690));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e34698));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e346a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e346a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e346b0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e346c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e346c8 + 8))
  ;
  return;
}



/* Entry: 101e7ef24; end: 101e7f017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7ef24(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_layoutSubviews_112600e60);
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e346b0);
  func_0x000107c42668();
  if (iVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    func_0x000107c61168(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x000107c3e740();
    func_0x000107c54144(puVar3);
    lVar2 = *(long *)(unaff_x20 + _DAT_112e346d0);
    if (lVar2 != 0) {
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c54b80(lVar2);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c3fe58(puVar3);
  }
  else {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e346d0);
    if (lVar2 != 0) {
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c54b80(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 101e7f018; end: 101e7f03f; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView layoutSubviews] */

void FUN_101e7f018(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e7ef24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e7f040; end: 101e7f14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7f040(void)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  FUN_101e7f150();
  lVar3 = _DAT_112e346d0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e346a0);
  lVar5 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar5 == 0) {
    func_0x000103baeafc(0);
  }
  else {
    lVar2 = 0;
    func_0x000101e83b78(0);
    func_0x000107c613fc();
    func_0x000107c61614(lVar2 + 0x10,0);
    func_0x000107c61604(lVar2 + 0x10,lVar5);
    func_0x000107c615f4(lVar5,2);
    func_0x000103baeafc(lVar2);
    func_0x000107c615ec(lVar5,2);
    func_0x000107c61574(lVar2);
  }
  puVar1 = (undefined4 *)(lVar4 + _DAT_112e347f8);
  if ((*(char *)(puVar1 + 1) != '\x01') && (lVar3 = *(long *)(unaff_x20 + lVar3), lVar3 != 0)) {
    uVar6 = *puVar1;
    *(undefined1 *)(puVar1 + 1) = 0;
    func_0x000107c615f0(lVar3);
    func_0x000103bae980(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 101e7f150; end: 101e7f2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7f150(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e346c0;
  if ((*(byte *)(unaff_x20 + _DAT_112e346d8) & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_58,0,0);
    lVar2 = _DAT_112e346d0;
    puVar5 = *(undefined8 **)(unaff_x20 + lVar1);
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(unaff_x20 + _DAT_112e346d0);
      puVar3 = puVar5;
      func_0x000107c615f0();
      if (puVar6 == (undefined8 *)0x0) {
        func_0x0001000298f0();
        func_0x000107c61428();
        uVar4 = *puVar3;
        func_0x000107c61174(uVar4);
        func_0x0001000b0da8(0x6579616c506f654e,0xee0074696e492372,0x101e83010,&uStack_b0);
        func_0x000107c61170(uVar4);
        puVar6 = *(undefined8 **)(unaff_x20 + lVar2);
        if (puVar6 == (undefined8 *)0x0) {
          uStack_a8 = 0;
          uStack_b0 = 0x8000000000000008;
          func_0x0001002a64a8(&uStack_b0);
          func_0x000107c615e8(puVar5);
          return;
        }
      }
      puVar3 = puVar6;
      func_0x000107c615f0();
      FUN_101e806b0();
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar4 = *puVar3;
      func_0x000107c61174(uVar4);
      func_0x0001000b0da8(0xd000000000000019,0x800000010f016780,0x101e83018,&uStack_b0);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(puVar6);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 101e7f2ec; end: 101e7f46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7f2ec(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x000100075034(FUN_101e83960,0,PTR___sytN_11034f1b0 + 8);
  lVar3 = _DAT_112e346d0;
  if (*(long *)(unaff_x20 + _DAT_112e346d0) != 0) {
    func_0x000107c4e454();
    if (*(long *)(unaff_x20 + lVar3) != 0) {
      func_0x000107c53c80();
      if (*(long *)(unaff_x20 + lVar3) != 0) {
        func_0x000107c56158();
        if (*(long *)(unaff_x20 + lVar3) != 0) {
          func_0x000107c5a538();
        }
      }
    }
  }
  lVar2 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_50,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c615e8(uVar4);
  lVar2 = _DAT_112e346d8;
  *(undefined1 *)(unaff_x20 + _DAT_112e346d8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e346c8);
  func_0x000107c61428(puVar1,auStack_68,1,0);
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  func_0x000103baeafc(0);
  func_0x000103b790e0();
  FUN_101e7f470(0x7465736572,0xe500000000000000);
  func_0x000107c6142c();
  FUN_101e7e97c();
  func_0x000107c61574();
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112e346b0);
  func_0x000107c425a8();
  if ((uVar5 & 1) == 0) {
    if (*(long *)(unaff_x20 + _DAT_112e346e8) != 0) {
      *(undefined8 *)(unaff_x20 + _DAT_112e346e8) = 0;
      func_0x000107c61170();
      if (*(long *)(unaff_x20 + lVar3) != 0) {
        FUN_101e82d5c();
      }
    }
  }
  return;
}



/* Entry: 101e7f470; end: 101e7f817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e7f470(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  undefined1 auStack_198 [272];
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_198 + (-0x18 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar7 - extraout_x8_00;
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c5fb78(0x5f4f454e,0xe400000000000000);
  func_0x000107c603d0(&stack0xffffffffffffff90,&uStack_88,PTR___sSvN_11034e250,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_80;
  uVar6 = uStack_88;
  lVar3 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,&uStack_88,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 == 0) {
    bVar11 = true;
  }
  else {
    func_0x000107c4d444();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar5 = lVar3;
    func_0x000107c6148c(lVar3,puVar4);
    bVar11 = lVar5 == 0;
    if (!bVar11) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c5edb4(lVar10,lVar5);
      lVar3 = lVar5;
    }
    func_0x000107c61170(lVar3);
  }
  (**(code **)(lVar9 + 0x38))(lVar10,bVar11,1,lVar2);
  lVar3 = lVar10;
  (**(code **)(lVar9 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar9 + 0x10))(puVar7,lVar10,lVar2);
    uVar8 = 0x112d36580;
    FUN_101e8304c(lVar10,0x112d36580,&UNK_10d9016d0);
    func_0x000107c5ed70();
    (**(code **)(lVar9 + 8))(puVar7,lVar2);
  }
  else {
    FUN_101e8304c(lVar10,0x112d36580,&UNK_10d9016d0);
    uVar8 = 0xe400000000000000;
    lVar10 = 0x656e6f6e;
  }
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar7 = auStack_198;
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 10;
  *(undefined8 *)(lVar3 + 0x10) = 5;
  *(undefined8 *)(lVar3 + 0x20) = 0x746e657665;
  puVar4 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar3 + 0x30) = 0x7041726579616c50;
  *(undefined8 *)(lVar3 + 0x38) = 0xe900000000000069;
  *(undefined **)(lVar3 + 0x48) = puVar4;
  *(undefined8 *)(lVar3 + 0x50) = 0x695f726579616c70;
  *(undefined8 *)(lVar3 + 0x58) = 0xe900000000000064;
  *(undefined8 *)(lVar3 + 0x60) = uVar6;
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  *(undefined **)(lVar3 + 0x78) = puVar4;
  *(undefined8 *)(lVar3 + 0x80) = 0x695f726579616c70;
  *(undefined8 *)(lVar3 + 0x88) = 0xee0064695f6d6574;
  *(long *)(lVar3 + 0x90) = lVar10;
  *(undefined8 *)(lVar3 + 0x98) = uVar8;
  *(undefined **)(lVar3 + 0xa8) = puVar4;
  *(undefined8 *)(lVar3 + 0xb0) = 0x6174735f72727563;
  *(undefined8 *)(lVar3 + 0xb8) = 0xeb00000000737574;
  lVar2 = lVar3;
  FUN_101e802e8();
  *(long *)(lVar3 + 0xc0) = lVar2;
  *(undefined1 **)(lVar3 + 200) = puVar7;
  *(undefined **)(lVar3 + 0xd8) = puVar4;
  *(undefined8 *)(lVar3 + 0xe0) = 0x646f6874656d;
  *(undefined **)(lVar3 + 0x108) = puVar4;
  *(undefined8 *)(lVar3 + 0xe8) = 0xe600000000000000;
  *(undefined8 *)(lVar3 + 0xf0) = param_1;
  *(undefined8 *)(lVar3 + 0xf8) = param_2;
  func_0x000107c61434(param_2);
  lVar2 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),5,uVar6);
  return lVar2;
}



/* Entry: 101e7f818; end: 101e7faaf;  */

/* WARNING: Possible PIC construction at 0x000101e82dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e82e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7f818(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112e346b0);
  func_0x000107c425a8();
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112e346e8);
    if (lVar6 == 0) {
      if (param_1 == 0) {
        return;
      }
    }
    else if (lVar6 == param_1) {
      return;
    }
    *(long *)(unaff_x20 + _DAT_112e346e8) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(lVar6);
    lVar6 = _DAT_112e346d0;
    if (*(long *)(unaff_x20 + _DAT_112e346d0) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112e346d0);
      if (lVar5 == 0) {
        return;
      }
      func_0x000107c615f0(lVar5);
      func_0x000107c53fcc();
      func_0x000107c59a90(lVar5,param_2,0);
      func_0x000107c4e454(lVar5);
      puVar3 = PTR_PTR_1126d40b0;
      func_0x000107c61168();
      func_0x000107c5aa04();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        func_0x000107c4ff74();
        func_0x000107c61170(puVar3);
        func_0x000107c5de64(lVar5);
        func_0x000107c61180();
        func_0x000107c4ff34();
        func_0x000107c61170(lVar5);
        uVar4 = *(undefined8 *)(unaff_x20 + lVar6);
        *(undefined8 *)(unaff_x20 + lVar6) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e82e84);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 101e7fab0; end: 101e7fb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7fab0(void)

{
  code *in_x3;
  long unaff_x20;
  
  FUN_101e7f470(0x6b656573,0xe400000000000000);
  func_0x000107c6142c();
  FUN_101e7f150();
  if (*(long *)(unaff_x20 + _DAT_112e346d0) != 0) {
    func_0x000107c51be8();
  }
  if (in_x3 != (code *)0x0) {
    (*in_x3)(2);
  }
  return;
}



/* Entry: 101e7fb70; end: 101e7fc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7fb70(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_101e7f470(0x706f7473,0xe400000000000000);
  func_0x000107c6142c();
  func_0x000103b790e0();
  func_0x000100075034(0x101e83974,0,PTR___sytN_11034f1b0 + 8);
  FUN_101e7f470(0x6573756170,0xe500000000000000);
  func_0x000107c6142c();
  lVar1 = _DAT_112e346d0;
  if (*(long *)(unaff_x20 + _DAT_112e346d0) != 0) {
    func_0x000107c4e454();
  }
  FUN_101e7f470(0x6b656573,0xe400000000000000);
  func_0x000107c6142c();
  FUN_101e7f150();
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c51be8();
  }
  return;
}



/* Entry: 101e7fc80; end: 101e7fd13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e7fc80(undefined4 param_1,undefined8 *param_2)

{
  long unaff_x20;
  ulong *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = *(ulong **)(unaff_x20 + _DAT_112e346a0);
  *param_2 = puVar1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0xe8))();
  *(undefined4 *)(param_2 + 1) = param_1;
  auVar2._8_8_ = param_2 + 1;
  auVar2._0_8_ = 0x101e7fcd8;
  return auVar2;
}



/* Entry: 101e7fd14; end: 101e7fdab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e7fd14(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 auStack_58 [3];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar1 != 0) {
    func_0x000107c40f5c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c42378(auStack_58);
      func_0x000107c615e8(lVar1);
      return auStack_58[0];
    }
  }
  return *(undefined8 *)PTR__kCMTimeZero_110348670;
}



/* Entry: 101e7fdac; end: 101e7fe1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7fdac(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long unaff_x20;
  
  ppuVar1 = *(undefined ***)(unaff_x20 + _DAT_112e346d0);
  if (ppuVar1 != (undefined **)0x0) {
    func_0x000107c5ddfc();
    func_0x000107c61180();
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = ppuVar1;
      func_0x000107c611b4();
      if (ppuVar2 == &PTR_PTR_112e33f68) {
        FUN_101e6e948();
        func_0x000107c615e8(ppuVar1);
      }
      else {
        func_0x000107c615e8(ppuVar1);
      }
    }
  }
  return;
}



/* Entry: 101e7fe20; end: 101e7ff53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7fe20(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar7 = &lStack_40;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar3 != 0) {
    func_0x000107c40f5c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c497ec();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7ff54);
        (*pcVar2)();
      }
      lVar3 = lVar4;
      func_0x000107c4e95c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar3 != 0) {
        func_0x0001000285a8(0x112e34460,&UNK_10da1dd40);
        func_0x000107c613fc();
        lVar5 = 0;
        func_0x00010095c380();
        lVar4 = lVar5;
        func_0x000101e81aa0();
        lVar6 = lVar4;
        func_0x000107c610f8();
        *(long *)(lVar6 + _DAT_112e34748) = lVar5;
        puVar1 = PTR_s_init_1125d9248;
        lStack_40 = lVar6;
        lStack_38 = lVar4;
        func_0x000107c6157c(lVar5);
        func_0x000107c61154(&lStack_40,puVar1);
        func_0x000107c4b75c(lVar3);
        func_0x000107c61170(plVar7);
        func_0x000107c615e8(lVar3);
        func_0x000107c6157c(*(undefined8 *)(lVar5 + 0x10));
        func_0x000107c61574(lVar5);
      }
    }
  }
  return;
}



/* Entry: 101e7ff54; end: 101e7ffeb;  */

/* WARNING: Possible PIC construction at 0x000101e7ff98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e7ff9c) */
/* WARNING: Removing unreachable block (ram,0x000101e7ffe4) */
/* WARNING: Removing unreachable block (ram,0x000101e7ffa0) */
/* WARNING: Removing unreachable block (ram,0x000101e7ffe8) */
/* WARNING: Removing unreachable block (ram,0x000101e7ffc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7ff54(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar1 != 0) {
    func_0x000107c40f5c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c497ec();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 101e7ffec; end: 101e802e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e7ffec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  ulong *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar12 == 0) {
    uStack_68 = 0xe300000000000000;
    uStack_70 = 0x6c696e;
    goto LAB_101e802c4;
  }
  lVar14 = 0x656e6f6e;
  lVar7 = lVar12;
  func_0x000107c615f0(lVar12);
  FUN_101e802e8();
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x3d);
  uVar11 = 0xe100000000000000;
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  lVar8 = lVar12;
  func_0x000107c417f0(lVar12);
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  func_0x000107c5fb78(lVar9,uVar11);
  func_0x000107c6142c(uVar11);
  uVar11 = 0x800000010f016760;
  func_0x000107c5fb78(0xd000000000000010,0x800000010f016760);
  lVar8 = lVar12;
  func_0x000107c40f5c();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_101e8013c:
    uVar11 = 0xe400000000000000;
  }
  else {
    lVar9 = lVar8;
    func_0x000107c497ec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e802e8);
      (*pcVar5)();
    }
    lVar8 = lVar9;
    func_0x000107c44fdc();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar8 == 0) goto LAB_101e8013c;
    lVar14 = lVar8;
    func_0x000107c5faec(lVar8);
    func_0x000107c61170(lVar8);
  }
  func_0x000107c5fb78(lVar14,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fb78(0x203a65746172202c,0xe800000000000000);
  func_0x000107c4f8e0(lVar12);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fe00(&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x203a736374202c,0xe700000000000000);
  func_0x000107c5fb78(lVar7,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x203a6c6f76202c,0xe700000000000000);
  puVar4 = PTR__swift_isaMask_11034f488;
  puVar13 = *(ulong **)(unaff_x20 + _DAT_112e346a0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar13) + 0xe8))();
  func_0x000107c5fe00(&uStack_70,puVar2,puVar3);
  uVar10 = 0;
  func_0x000107c5fb78(0x3a646574756d202c,0xe900000000000020);
  (**(code **)((*(ulong *)puVar4 & *puVar13) + 0x100))();
  bVar6 = (uVar10 & 1) == 0;
  uVar11 = 0x65757274;
  if (bVar6) {
    uVar11 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar11,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  func_0x000107c615e8(lVar12);
LAB_101e802c4:
  auVar15._8_8_ = uStack_68;
  auVar15._0_8_ = uStack_70;
  return auVar15;
}



/* Entry: 101e802e8; end: 101e80403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e802e8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar4 == 0) {
    uVar3 = 0xe300000000000000;
    uVar2 = 0x6c696e;
    goto LAB_101e80358;
  }
  lVar1 = lVar4;
  func_0x000107c615f0();
  func_0x000107c5bcc0();
  func_0x000107c615e8(lVar4);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6c616974696e69;
      goto LAB_101e80358;
    }
    if (lVar1 == 1) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x676e6979616c70;
      goto LAB_101e80358;
    }
    if (lVar1 == 2) {
      uVar3 = 0xe600000000000000;
      uVar2 = 0x646573756170;
      goto LAB_101e80358;
    }
  }
  else {
    if (lVar1 == 3) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x64656c6c617473;
      goto LAB_101e80358;
    }
    if (lVar1 == 4) {
      uVar3 = 0xe600000000000000;
      uVar2 = 0x64656c696166;
      goto LAB_101e80358;
    }
    if (lVar1 == 5) {
      uVar3 = 0xe500000000000000;
      uVar2 = 0x6465646e65;
      goto LAB_101e80358;
    }
  }
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
LAB_101e80358:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 101e80404; end: 101e806af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e80404(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  long lStack_48;
  
  puVar4 = param_1;
  if (*(long *)((long)param_1 + _DAT_112e346e8) != 0) {
    puVar4 = *(undefined8 **)((long)param_1 + _DAT_112e346b0);
    func_0x000107c54828();
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar5 = *puVar4;
  uVar12 = *(undefined8 *)((long)param_1 + _DAT_112e346b0);
  func_0x000107c61174(uVar5);
  uVar6 = uVar12;
  func_0x000107c408ac();
  uVar11 = 0xd000000000000012;
  pcVar1 = "CreateNeoObjCPlayer";
  if ((int)uVar6 == 0) {
    uVar11 = 0xd000000000000013;
    pcVar1 = "player_state_not_ready";
  }
  uVar6 = 0x112e347f0;
  puStack_70 = param_1;
  func_0x0001000285a8(0x112e347f0,&UNK_10da1dd38);
  func_0x0001048d866c(&lStack_48,uVar11,(ulong)pcVar1 | 0x8000000000000000,0x101e831b0,auStack_80,
                      uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c54828(uVar12);
  if (lStack_48 != 0) {
    puVar7 = PTR_PTR_1126d40b0;
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e806b0);
      (*pcVar2)();
    }
    func_0x000107c615f0(lStack_48);
    func_0x000107c4fc68(puVar7);
    func_0x000107c61170(puVar7);
    uVar11 = *(undefined8 *)((long)param_1 + _DAT_112e346d0);
    *(long *)((long)param_1 + _DAT_112e346d0) = lStack_48;
    func_0x000107c615e8(uVar11);
    func_0x000107c53fcc(lStack_48);
    func_0x000107c59a90(lStack_48);
    lVar8 = lStack_48;
    func_0x000107c5de64(lStack_48);
    func_0x000107c61180();
    func_0x000107c3d89c(param_1);
    func_0x000107c61170(lVar8);
    lVar8 = lStack_48;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c3ec60(param_1);
    func_0x000107c54b80(lVar8);
    func_0x000107c61170();
    iVar3 = (int)lVar8;
    func_0x000109128f4c();
    if (iVar3 == 0) {
      func_0x000107c615e8(lStack_48);
    }
    else {
      lVar8 = lStack_48;
      func_0x000107c5de64(lStack_48);
      func_0x000107c61180();
      lVar9 = lVar8;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      func_0x000107c52e0c(0x3ff0000000000000,lVar9);
      func_0x000107c61170(lVar9);
      lVar8 = lStack_48;
      func_0x000107c5de64(lStack_48);
      func_0x000107c61180();
      lVar9 = lVar8;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar10 = puVar7;
      func_0x000107c3ab24();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c52df8(lVar9);
      func_0x000107c615e8(lStack_48);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(puVar10);
    }
  }
  return;
}



/* Entry: 101e806b0; end: 101e80a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e806b0(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long alStack_f0 [2];
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined1 auStack_88 [24];
  long lVar2;
  
  FUN_101e7e97c();
  func_0x000107c61574();
  lVar9 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_88,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  if (lVar9 == 0) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112e346a8);
  if (lVar8 == 0) {
    return;
  }
  func_0x000107c6157c(lVar8);
  lVar2 = lVar9;
  func_0x000107c615f0();
  uVar1 = (uint)lVar2;
  FUN_101e80f50();
  if ((uVar1 & 0xff) == 6) {
    func_0x000107c615e8(lVar9);
    func_0x000107c61574(lVar8);
    return;
  }
  lVar2 = lVar9;
  func_0x000107c4d444();
  func_0x000107c61180();
  puVar3 = (undefined8 *)0x736b63617274;
  func_0x000107c5fadc(0x736b63617274,0xe600000000000000);
  lVar4 = lVar2;
  func_0x000107c5bd2c();
  func_0x000107c61170();
  if (lVar4 == 2) {
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar5 = *puVar3;
    lStack_b0 = lVar2;
    func_0x000107c61174(uVar5);
    uVar6 = 0x112e34778;
    func_0x0001000285a8(0x112e34778,&UNK_10da1dd20);
    func_0x0001048d866c(alStack_f0,0xd00000000000001b,0x800000010f0167c0,0x101e83024,auStack_c0,
                        uVar6);
    func_0x000107c61170(uVar5);
    if (alStack_f0[0] != 0) {
      func_0x000107c61428(puVar3,auStack_c0,0,0);
      uVar5 = *puVar3;
      lStack_e0 = alStack_f0[0];
      uVar6 = 0;
      func_0x000100f6e330(0);
      lVar4 = alStack_f0[0];
      func_0x000107c61174(alStack_f0[0]);
      func_0x000107c61174(uVar5);
      func_0x0001048d866c(&uStack_d0,0xd00000000000001a,0x800000010f0167e0,0x101e8302c,alStack_f0,
                          uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c4d6e8(lVar4);
      FUN_101e81194(uStack_d0,uStack_c8,param_1);
      func_0x000107c615e8(lVar9);
      func_0x000107c61574(lVar8);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar4);
      return;
    }
    FUN_101e8c0c0(0);
    FUN_101e8ac04(0x72745f6f65646976,0xef6c696e5f6b6361,0x656e6f6e,0xe400000000000000);
LAB_101e80960:
    func_0x000107c615e8(lVar9);
    func_0x000107c61574(lVar8);
    func_0x000107c61170(lVar2);
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112e346b0 + 0xf) == '\x01') goto LAB_101e80960;
  if (lVar4 < 3) {
    if (lVar4 == 0) {
      uVar5 = 0xe700000000000000;
      uVar6 = 0x6e776f6e6b6e75;
      goto LAB_101e809f4;
    }
    if (lVar4 == 1) {
      uVar5 = 0xe700000000000000;
      uVar6 = 0x676e6964616f6c;
      goto LAB_101e809f4;
    }
  }
  else {
    if (lVar4 == 3) {
      uVar5 = 0xe600000000000000;
      uVar6 = 0x64656c696166;
      goto LAB_101e809f4;
    }
    if (lVar4 == 4) {
      uVar5 = 0xe900000000000064;
      uVar6 = 0x656c6c65636e6163;
      goto LAB_101e809f4;
    }
  }
  uVar5 = 0xef746c7561666564;
  uVar6 = 0x5f6e776f6e6b6e75;
LAB_101e809f4:
  uVar7 = 0;
  FUN_101e8c0c0(0);
  FUN_101e8ac04(0xd000000000000011,0x800000010f0167a0,uVar6,uVar5,uVar7);
  func_0x000107c615e8(lVar9);
  func_0x000107c61574(lVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 101e80a6c; end: 101e80f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101e80a6c(ulong param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long extraout_x8;
  long extraout_x12;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long alStack_140 [4];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_120 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  uVar9 = param_1;
  func_0x000107c4e994();
  func_0x000107c61180();
  lVar3 = _DAT_112e346c0;
  func_0x000107c61428(param_2 + _DAT_112e346c0,auStack_88,0,0);
  lVar3 = *(long *)(param_2 + lVar3);
  lStack_118 = lVar13;
  if (lVar3 != 0) {
    func_0x000107c4d444();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar5 = lVar3;
    func_0x000107c6148c(lVar3,puVar4);
    if (lVar5 != 0) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c5edb4(lVar11,lVar5);
      func_0x000107c61170();
      func_0x000107c5ed90();
      lStack_100 = lVar5;
      (**(code **)(lVar13 + 8))(lVar11,lVar2);
      goto LAB_101e80bc4;
    }
    func_0x000107c61170(lVar3);
  }
  lStack_100 = 0;
LAB_101e80bc4:
  uStack_108 = *(undefined8 *)(param_2 + _DAT_112e346b0);
  puVar1 = (undefined8 *)(param_2 + _DAT_112e346c8);
  func_0x000107c61428(puVar1,auStack_a0,0,0);
  lVar3 = puVar1[1];
  if (lVar3 == 0) {
    lVar3 = -0x1c00000000000000;
    uVar14 = 0x656e6f6e;
  }
  else {
    uVar14 = *puVar1;
  }
  uStack_b8 = 0x6449616964654d5b;
  uStack_b0 = 0xe90000000000003d;
  func_0x000107c61434();
  func_0x000107c5fb78(uVar14,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  uVar14 = uStack_b0;
  lVar3 = param_3;
  FUN_101e7cdd8(param_3,uStack_b8,uStack_b0);
  lStack_110 = lVar3;
  func_0x000107c6142c(uVar14);
  lVar3 = param_3;
  func_0x000107c4c960();
  func_0x000107c61180();
  if (lVar3 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    func_0x000107c615e8();
    lVar5 = 0;
    FUN_101e7b1b0();
    lVar3 = lVar5;
    func_0x000107c610f8();
    lVar6 = 0;
    FUN_101e7b0cc();
    lVar13 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar13 + _DAT_112e34558) = param_3;
    puVar4 = PTR_s_init_1125d9248;
    lStack_e8 = lVar13;
    lStack_e0 = lVar6;
    func_0x000107c615f0(param_3);
    plVar12 = &lStack_e8;
    func_0x000107c61154(plVar12,puVar4);
    *(long **)(lVar3 + _DAT_112e34588) = plVar12;
    plVar12 = &lStack_f8;
    lStack_f8 = lVar3;
    lStack_f0 = lVar5;
    func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  }
  uVar7 = param_1;
  func_0x000107c5ddf0(param_1);
  func_0x000107c61180();
  func_0x000107c5c398();
  func_0x000107c61180();
  lVar3 = lStack_120;
  if (param_3 == 0) {
    param_3 = 0;
    lVar3 = puVar1[1];
  }
  else {
    func_0x000107c5edb4(lStack_120);
    func_0x000107c61170(param_3);
    func_0x000107c5ed90();
    (**(code **)(lStack_118 + 8))(lVar3,lVar2);
    lVar3 = puVar1[1];
  }
  if (lVar3 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1;
    func_0x000107c61434(lVar3);
    func_0x000107c5fadc(uVar14,lVar3);
    func_0x000107c6142c(lVar3);
  }
  uStack_b8 = 0;
  *(undefined8 *)(lVar11 + -0x10) = uVar14;
  *(ulong **)(lVar11 + -8) = &uStack_b8;
  lVar2 = lStack_100;
  lVar3 = lStack_110;
  uVar8 = uVar9;
  func_0x000107c40a54();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(plVar12);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar14);
  uVar9 = uStack_b8;
  if (uVar8 == 0) {
    uVar7 = uStack_b8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
    lVar3 = *(long *)(param_2 + _DAT_112e34688);
    uStack_b0 = 0;
    uStack_a8 = 2;
    uStack_b8 = uVar9;
    func_0x000107c614b0(uVar9);
    func_0x0001002a64a8(&uStack_b8);
    func_0x000107c614ac(uVar9);
    func_0x000107c614ac();
  }
  else {
    func_0x000107c61174();
    func_0x000107c53c80(param_1);
    func_0x000107c61428(param_2 + _DAT_112e346f8,&uStack_b8,0,0);
    func_0x000107c56158(param_1);
    *(undefined1 *)(param_2 + _DAT_112e346d8) = 1;
    lVar3 = *(long *)(param_2 + _DAT_112e34688);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 3;
    func_0x0001002a64a8(&uStack_d0);
    func_0x000107c615e8();
    uVar9 = uVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar9;
  }
  func_0x000107c60e78();
  *(long *)(lVar11 + -0x20) = lVar3;
  *(long *)(lVar11 + -0x18) = param_2;
  *(undefined1 **)(lVar11 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar11 + -8) = FUN_101e80f50;
  uVar7 = uVar9;
  func_0x00010912821c();
  if ((uVar7 & 1) == 0) {
    uVar7 = uVar9;
    func_0x000107c4c950();
    if (uVar7 == 10) {
      uVar10 = 4;
      if (*(char *)(lVar3 + _DAT_112e346b0 + 0xb) == '\0') {
        uVar10 = 6;
      }
      uVar9 = (ulong)uVar10;
    }
    else {
      func_0x000107c40518();
      if ((long)uVar9 < 0x3e) {
        if (uVar9 == 0xc) {
          return 1;
        }
        if ((uVar9 == 0x2b) && ((*(byte *)(lVar3 + _DAT_112e346b0 + 0xe) & 1) != 0)) {
          return 5;
        }
      }
      else if (uVar9 == 0x66) {
        if ((*(byte *)(lVar3 + _DAT_112e346b0 + 0xd) & 1) != 0) {
          return 3;
        }
      }
      else if ((uVar9 == 0x3e) && ((*(byte *)(lVar3 + _DAT_112e346b0 + 0xc) & 1) != 0)) {
        return 2;
      }
      uVar9 = 6;
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 101e80f50; end: 101e8103f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101e80f50(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  long unaff_x20;
  
  uVar1 = param_1;
  func_0x00010912821c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000107c4c950();
    if (uVar1 == 10) {
      uVar2 = 4;
      if (*(char *)(unaff_x20 + _DAT_112e346b0 + 0xb) == '\0') {
        uVar2 = 6;
      }
    }
    else {
      func_0x000107c40518();
      if ((long)param_1 < 0x3e) {
        if (param_1 == 0xc) {
          return 1;
        }
        if ((param_1 == 0x2b) && ((*(byte *)(unaff_x20 + _DAT_112e346b0 + 0xe) & 1) != 0)) {
          return 5;
        }
      }
      else if (param_1 == 0x66) {
        if ((*(byte *)(unaff_x20 + _DAT_112e346b0 + 0xd) & 1) != 0) {
          return 3;
        }
      }
      else if ((param_1 == 0x3e) && ((*(byte *)(unaff_x20 + _DAT_112e346b0 + 0xc) & 1) != 0)) {
        return 2;
      }
      uVar2 = 6;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 101e81040; end: 101e81127;  */

void FUN_101e81040(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c5ce80(param_2,param_3,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  func_0x000107c61180();
  uVar2 = 0;
  FUN_101e83170(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
  uVar3 = param_2;
  func_0x000107c5fc54(param_2,uVar2);
  func_0x000107c61170(param_2);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar3);
    uVar2 = 0;
  }
  else {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e81128);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = 0;
      func_0x000100f95fe8(0,uVar3);
    }
    func_0x000107c6142c(uVar3);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101e81128; end: 101e81193;  */

void FUN_101e81128(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [48];
  
  func_0x000107c4d49c();
  func_0x000107c4ecc4(auStack_60,param_4);
  func_0x000107c609f8(auStack_60);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 101e81194; end: 101e813ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e81194(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_160 [16];
  long lStack_150;
  undefined8 *puStack_148;
  undefined4 uStack_140;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = _DAT_112e346c0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar4 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_e8,0,0);
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c615f0(lVar3);
      func_0x000107c615f0(lVar4);
      lVar5 = lVar3;
      FUN_101e80f50();
      if (((uint)lVar5 & 0xff) == 6) {
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar3);
      }
      else {
        lVar5 = *(long *)(unaff_x20 + _DAT_112e346a8);
        if (lVar5 == 0) {
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar3);
        }
        else {
          func_0x000107c6157c(lVar5);
          lVar1 = lVar4;
          func_0x000107c5ddfc();
          func_0x000107c61180();
          if (lVar1 == 0) {
            lVar1 = unaff_x20 + _DAT_112e346c8;
            func_0x000107c61428(lVar1,auStack_100,0,0);
            puVar6 = *(undefined8 **)(lVar1 + 8);
            func_0x000107c61434(puVar6);
            FUN_101e703f8(&uStack_d0,param_1,param_2);
            func_0x000107c6142c();
            if (lStack_c8 == 0) {
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar3);
              func_0x000107c61574(lVar5);
            }
            else {
              uStack_a0 = uStack_d0;
              lStack_98 = lStack_c8;
              uStack_88 = uStack_b8;
              uStack_90 = uStack_c0;
              uStack_78 = uStack_a8;
              uStack_80 = uStack_b0;
              func_0x0001000298f0();
              func_0x000107c61428();
              uVar2 = *puVar6;
              puStack_148 = &uStack_a0;
              lStack_150 = lVar5;
              uStack_140 = param_3;
              func_0x000107c61174(uVar2);
              func_0x0001000b0da8(0xd000000000000027,0x800000010f016800,0x101e83034,auStack_160);
              func_0x000107c61170(uVar2);
              FUN_101e8304c(&uStack_d0,0x112e34780,&UNK_10da1dd28);
              func_0x000107c615e8(lVar4);
              func_0x000107c615e8(lVar3);
              func_0x000107c61574(lVar5);
            }
          }
          else {
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            func_0x000107c61574(lVar5);
            func_0x000107c615e8(lVar1);
          }
        }
      }
    }
  }
  FUN_101e7e97c();
  func_0x000107c61574();
  return;
}



/* Entry: 101e813f0; end: 101e81a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e813f0(float param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong *param_5,
                  long param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x8;
  undefined8 uVar17;
  ulong uVar18;
  float fVar19;
  undefined1 auStack_180 [8];
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  uint uStack_160;
  uint uStack_15c;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined1 *puStack_128;
  uint uStack_11c;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined1 auStack_100 [48];
  ulong auStack_d0 [3];
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [32];
  
  lVar7 = 0;
  lStack_118 = param_6;
  uStack_110 = param_7;
  FUN_101e6f118();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puStack_128 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(param_6 + _DAT_112e346c8);
  func_0x000107c61428(puVar1,auStack_a0,0,0);
  uVar17 = *puVar1;
  lVar7 = puVar1[1];
  lVar8 = lVar7;
  func_0x000107c61434();
  FUN_101e7e97c();
  ppuStack_138 = (undefined **)0x0;
  if (lVar8 != 0) {
    ppuStack_138 = &PTR_DAT_110491890;
  }
  uVar16 = *param_5;
  uVar15 = param_5[1];
  uVar18 = param_5[2];
  uStack_148 = param_5[3];
  uStack_150 = param_5[4];
  uStack_158 = param_5[5];
  uStack_11c = (uint)(35.0 < param_1);
  fVar19 = param_1 * 0.5;
  if (param_1 <= 35.0) {
    fVar19 = 0.0;
  }
  uVar9 = 0;
  uStack_170 = uVar18;
  lStack_108 = lVar8;
  FUN_101e8c0c0();
  func_0x000107c613fc();
  uVar10 = uVar16;
  uStack_178 = uVar16;
  uStack_168 = uVar15;
  lStack_130 = lVar7;
  FUN_101e8ad04(uVar16,uVar15,uVar17,lVar7);
  uStack_15c = (uint)*(byte *)(param_4 + 0x29);
  uStack_160 = (uint)*(byte *)(param_4 + 0x2a);
  lVar11 = 0;
  lStack_140 = param_4;
  FUN_101e89310();
  func_0x000107c613fc();
  func_0x000101e8308c(param_5,auStack_d0);
  ppuStack_b0 = &PTR_DAT_110491960;
  ppuStack_a8 = &PTR_DAT_1104919e8;
  auStack_d0[0] = uVar10;
  uStack_b8 = uVar9;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000101e8308c(param_5,auStack_100);
  func_0x000107c61434(lVar7);
  func_0x000101e8308c(param_5,auStack_100);
  uVar12 = uVar10;
  func_0x000107c6157c();
  func_0x00010006a360();
  *(ulong *)(lVar11 + 0x10) = uVar12;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(lVar11 + 0x18) = 5;
  *(undefined **)(lVar11 + 0x20) = puVar3;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(undefined1 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0x1e;
  *(undefined1 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0x60) = 0;
  *(undefined8 *)(lVar11 + 0x58) = 0;
  *(undefined8 *)(lVar11 + 0x70) = 0;
  *(undefined8 *)(lVar11 + 0x68) = 0;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  *(undefined8 *)(lVar11 + 0x78) = 0;
  *(undefined8 *)(lVar11 + 0x90) = 0;
  *(undefined8 *)(lVar11 + 0x88) = 0;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  *(undefined8 *)(lVar11 + 0x98) = 0;
  *(undefined8 *)(lVar11 + 0xb0) = 0;
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  *(undefined1 *)(lVar11 + 0xb8) = 2;
  uVar17 = 0x112e33e40;
  func_0x0001000285a8(0x112e33e40,&UNK_10da1d350);
  func_0x000107c61538();
  FUN_101e6be28();
  *(undefined8 *)(lVar11 + 0xc0) = uVar17;
  *(undefined8 *)(lVar11 + 0x128) = 0;
  func_0x000107c61614(lVar11 + 0x120,0);
  func_0x000101e830c8(auStack_d0,lVar11 + 200);
  uVar5 = uStack_148;
  uVar4 = uStack_150;
  uVar12 = uStack_158;
  *(ulong *)(lVar11 + 0x138) = uVar15;
  *(undefined8 *)(lVar11 + 0x140) = param_2;
  *(undefined8 *)(lVar11 + 0x148) = param_3;
  *(undefined8 *)(lVar11 + 0x158) = 0;
  *(undefined8 *)(lVar11 + 0x150) = 0;
  *(undefined8 *)(lVar11 + 0x168) = 0;
  *(undefined8 *)(lVar11 + 0x160) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0;
  *(float *)(lVar11 + 0x178) = param_1;
  *(float *)(lVar11 + 0x17c) = fVar19;
  *(undefined8 *)(lVar11 + 0x188) = 0xe800000000000000;
  *(undefined8 *)(lVar11 + 0x180) = 0x74696e692d657270;
  *(ulong *)(lVar11 + 400) = uVar18;
  *(ulong *)(lVar11 + 0x198) = uStack_148;
  *(ulong *)(lVar11 + 0x1a0) = uStack_150;
  *(ulong *)(lVar11 + 0x1a8) = uStack_158;
  *(undefined1 *)(lVar11 + 0x1b0) = 0;
  *(undefined8 *)(lVar11 + 0x100) = 0xf;
  *(undefined8 *)(lVar11 + 0xf8) = 3;
  *(undefined8 *)(lVar11 + 0x108) = 0x3fa0624dd2f1a9fc;
  *(undefined8 *)(lVar11 + 0x110) = 0x3fb999999999999a;
  *(char *)(lVar11 + 0x118) = (char)uStack_15c;
  *(char *)(lVar11 + 0x119) = (char)uStack_160;
  *(undefined4 *)(lVar11 + 0x11c) = 0x3e4ccccd;
  *(undefined ***)(lVar11 + 0x128) = ppuStack_138;
  *(ulong *)(lVar11 + 0x130) = uVar16;
  func_0x000107c61604(lVar11 + 0x120,lStack_108);
  FUN_101e8b1f4();
  FUN_101e876f0();
  FUN_101e87804();
  FUN_101e83150(auStack_d0);
  lVar8 = lStack_140;
  uVar2 = *(undefined1 *)(lStack_140 + 0x28);
  lVar13 = 0;
  func_0x000101e6f2f4();
  func_0x000107c613fc();
  ppuStack_b0 = &PTR_DAT_110491940;
  lVar7 = 0x112e33e20;
  ppuStack_138 = (undefined **)uVar9;
  auStack_d0[0] = uVar10;
  uStack_b8 = uVar9;
  func_0x0001000285a8(0x112e33e20,&UNK_10da1d330);
  puVar14 = puStack_128;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puStack_128,1,3,lVar7);
  func_0x0001000285a8(0x112e33e28,&UNK_10da1d860);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar10);
  func_0x00010006c248();
  *(undefined1 **)(lVar13 + 0x80) = puVar14;
  *(ulong *)(lVar13 + 0x10) = uStack_170;
  *(ulong *)(lVar13 + 0x18) = uVar5;
  *(ulong *)(lVar13 + 0x20) = uVar4;
  *(ulong *)(lVar13 + 0x28) = uVar12;
  *(float *)(lVar13 + 0x30) = param_1;
  *(char *)(lVar13 + 0x34) = (char)uStack_11c;
  *(undefined1 *)(lVar13 + 0x78) = uVar2;
  func_0x000101e8310c(auStack_d0,lVar13 + 0x38);
  *(long *)(lVar13 + 0x60) = lVar11;
  *(ulong *)(lVar13 + 0x68) = uStack_178;
  *(ulong *)(lVar13 + 0x70) = uStack_168;
  func_0x000107c6157c(lVar11);
  FUN_101e6c1bc(lVar8 + 0x30);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(lVar11);
  func_0x000107c6142c(lStack_130);
  func_0x000107c61574(lStack_108);
  FUN_101e83150(auStack_d0);
  uVar16 = uStack_110;
  if (*(char *)(lStack_118 + _DAT_112e346b0 + 0xf) == '\x01') {
    uVar15 = uStack_110;
    func_0x000107c5bcc0();
    if (5 < uVar15) {
      func_0x000101e6bfbc(0);
      auStack_d0[0] = uVar15;
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101e81a54);
      (*pcVar6)();
    }
    if ((1L << (uVar15 & 0x3f) & 0x1aU) != 0) {
      func_0x000107c5bcc0();
      if ((long)uVar16 < 3) {
        if (uVar16 == 0) {
          uVar17 = 0xe700000000000000;
          uVar16 = 0x6c616974696e69;
        }
        else if (uVar16 == 1) {
          uVar17 = 0xe700000000000000;
          uVar16 = 0x676e6979616c70;
        }
        else {
          if (uVar16 == 2) {
            uVar16 = 0x73756170;
            goto LAB_101e819c8;
          }
LAB_101e8198c:
          uVar17 = 0xe700000000000000;
          uVar16 = 0x6e776f6e6b6e75;
        }
      }
      else if (uVar16 == 3) {
        uVar17 = 0xe700000000000000;
        uVar16 = 0x64656c6c617473;
      }
      else if (uVar16 == 4) {
        uVar16 = 0x6c696166;
LAB_101e819c8:
        uVar17 = 0xe600000000000000;
        uVar16 = uVar16 | 0x646500000000;
      }
      else {
        if (uVar16 != 5) goto LAB_101e8198c;
        uVar17 = 0xe500000000000000;
        uVar16 = 0x6465646e65;
      }
      FUN_101e8ac04(0xd000000000000016,0x800000010f016830,uVar16,uVar17);
      func_0x000107c6142c(uVar17);
      goto LAB_101e819fc;
    }
  }
  func_0x000107c5a538(uVar16);
LAB_101e819fc:
  func_0x000107c61574(lVar13);
  return;
}



/* Entry: 101e81a54; end: 101e81aeb; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView initWithFrame:] */

void FUN_101e81a54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.SCNeoPlayerView",0x2c,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e81a80);
  (*pcVar1)();
}



/* Entry: 101e81aec; end: 101e81b3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e81aec(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112e346c8);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000107c61434(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 101e81b40; end: 101e81b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e81b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e346c8);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 101e81b9c; end: 101e81bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e81b9c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112e346c8;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_101e81bdc;
  return auVar2;
}



/* Entry: 101e81bdc; end: 101e81bdf;  */

void FUN_101e81bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101e81be0; end: 101e81c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e81be0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 101e81c24; end: 101e81c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e81c24(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615e8(uVar2);
  *(undefined1 *)(unaff_x20 + _DAT_112e346d8) = 0;
  return;
}



/* Entry: 101e81c84; end: 101e81cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e81c84(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x101e81cc8;
  return auVar2;
}



/* Entry: 101e81d00; end: 101e81d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e81d00(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  bool bVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + lVar1);
  if (lVar1 == 0) {
    bVar4 = true;
  }
  else {
    func_0x000107c4d444();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar3 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    bVar4 = lVar3 == 0;
    if (!bVar4) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c5edb4(param_1,lVar3);
      lVar1 = lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,bVar4,1,lVar1);
  return;
}



/* Entry: 101e81d08; end: 101e81d63;  */

code * FUN_101e81d08(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x8965);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x000101e7e608();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_101e81d64;
}



/* Entry: 101e81d64; end: 101e81d6f;  */

void FUN_101e81d64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e81d70; end: 101e81df3;  */

void FUN_101e81d70(long param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = param_1;
  func_0x000107c61480(param_1,unaff_x20);
  if (lVar1 != 0) {
    FUN_101e83170(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c615f0(param_1);
    func_0x000107c60118(lVar1);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101e81df4; end: 101e81df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e81df4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  ulong *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar12 == 0) {
    uStack_68 = 0xe300000000000000;
    uStack_70 = 0x6c696e;
    goto LAB_101e802c4;
  }
  lVar14 = 0x656e6f6e;
  lVar7 = lVar12;
  func_0x000107c615f0(lVar12);
  FUN_101e802e8();
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x3d);
  uVar11 = 0xe100000000000000;
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  lVar8 = lVar12;
  func_0x000107c417f0(lVar12);
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  func_0x000107c5fb78(lVar9,uVar11);
  func_0x000107c6142c(uVar11);
  uVar11 = 0x800000010f016760;
  func_0x000107c5fb78(0xd000000000000010,0x800000010f016760);
  lVar8 = lVar12;
  func_0x000107c40f5c();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_101e8013c:
    uVar11 = 0xe400000000000000;
  }
  else {
    lVar9 = lVar8;
    func_0x000107c497ec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e802e8);
      (*pcVar5)();
    }
    lVar8 = lVar9;
    func_0x000107c44fdc();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar8 == 0) goto LAB_101e8013c;
    lVar14 = lVar8;
    func_0x000107c5faec(lVar8);
    func_0x000107c61170(lVar8);
  }
  func_0x000107c5fb78(lVar14,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fb78(0x203a65746172202c,0xe800000000000000);
  func_0x000107c4f8e0(lVar12);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fe00(&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x203a736374202c,0xe700000000000000);
  func_0x000107c5fb78(lVar7,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x203a6c6f76202c,0xe700000000000000);
  puVar4 = PTR__swift_isaMask_11034f488;
  puVar13 = *(ulong **)(unaff_x20 + _DAT_112e346a0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar13) + 0xe8))();
  func_0x000107c5fe00(&uStack_70,puVar2,puVar3);
  uVar10 = 0;
  func_0x000107c5fb78(0x3a646574756d202c,0xe900000000000020);
  (**(code **)((*(ulong *)puVar4 & *puVar13) + 0x100))();
  bVar6 = (uVar10 & 1) == 0;
  uVar11 = 0x65757274;
  if (bVar6) {
    uVar11 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar11,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  func_0x000107c615e8(lVar12);
LAB_101e802c4:
  auVar15._8_8_ = uStack_68;
  auVar15._0_8_ = uStack_70;
  return auVar15;
}



/* Entry: 101e81df8; end: 101e81e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101e81df8(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e346f8;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112e346f8,auStack_38,0,0);
  return *(undefined1 *)(lVar2 + lVar1);
}



/* Entry: 101e81e5c; end: 101e81ebb;  */

code * FUN_101e81e5c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xf898);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101e7e8bc();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_101e839c4;
}



/* Entry: 101e81ebc; end: 101e81f5b;  */

void FUN_101e81ebc(void)

{
  func_0x000101e7f8a4();
  return;
}



/* Entry: 101e81f5c; end: 101e81fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e81f5c(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_101e7f150();
  if (*(long *)(lVar1 + _DAT_112e346d0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(long *)(lVar1 + _DAT_112e346d0),PTR_s_setRate__1126577b8);
    return;
  }
  return;
}



/* Entry: 101e81fac; end: 101e8215f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e81fac(uint param_1)

{
  long *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(*unaff_x20 + _DAT_112e346a0))
              + 0x100))();
  return param_1 & 1;
}



/* Entry: 101e82160; end: 101e821bf;  */

undefined8 FUN_101e82160(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x8cbd);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101e7fc80();
  *(long *)(lVar1 + 0x20) = lVar2;
  return 0x101e839c8;
}



/* Entry: 101e821c0; end: 101e82273;  */

void FUN_101e821c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e82274; end: 101e82287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82274(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + _DAT_112e34710));
  return;
}



/* Entry: 101e82288; end: 101e822e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e82288(void)

{
  long *unaff_x20;
  undefined8 auStack_28 [3];
  
  if (*(long *)(*unaff_x20 + _DAT_112e346d0) == 0) {
    auStack_28[0] = *(undefined8 *)PTR__kCMTimeZero_110348670;
  }
  else {
    func_0x000107c41014(auStack_28);
  }
  return auStack_28[0];
}



/* Entry: 101e822e8; end: 101e8236f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e822e8(void)

{
  func_0x000103b78ff4();
  return;
}



/* Entry: 101e82370; end: 101e82393;  */

void FUN_101e82370(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 101e82394; end: 101e8248b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e82394(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = _DAT_112e346c0;
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + _DAT_112e346c0,auStack_38,0,0);
  lVar2 = *(long *)(lVar1 + lVar2);
  if (lVar2 == 0) {
    lVar1 = -1;
  }
  else {
    func_0x000103b7a088(0);
    lVar1 = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000103b79814();
    func_0x000107c615e8(lVar2);
  }
  return lVar1;
}



/* Entry: 101e8248c; end: 101e824d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e8248c(void)

{
  int iVar1;
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + _DAT_112e346e8) != 0) {
    iVar1 = (int)*(undefined8 *)(*unaff_x20 + _DAT_112e346b0);
    func_0x000107c425a8();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 101e824d4; end: 101e82513;  */

void FUN_101e824d4(void)

{
  func_0x000101e7e7ec();
  return;
}



/* Entry: 101e82514; end: 101e8294b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e82514(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  long alStack_170 [29];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 auStack_70 [2];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar6 = (long)alStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar6 - extraout_x8_00;
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c5fb78(0x5f4f454e,0xe400000000000000);
  auStack_70[0] = param_1;
  func_0x000107c603d0(auStack_70,&uStack_88,PTR___sSvN_11034e250,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_80;
  uVar7 = uStack_88;
  lVar3 = _DAT_112e346c0;
  func_0x000107c61428(unaff_x20 + _DAT_112e346c0,&uStack_88,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 == 0) {
    bVar12 = true;
  }
  else {
    func_0x000107c4d444();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar5 = lVar3;
    func_0x000107c6148c(lVar3,puVar4);
    bVar12 = lVar5 == 0;
    if (!bVar12) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      alStack_170[0] = lVar6;
      func_0x000107c61170(lVar3);
      func_0x000107c5edb4(lVar10,lVar5);
      lVar3 = lVar5;
      lVar6 = alStack_170[0];
    }
    func_0x000107c61170(lVar3);
  }
  (**(code **)(lVar13 + 0x38))(lVar10,bVar12,1,lVar2);
  lVar3 = lVar10;
  (**(code **)(lVar13 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar13 + 0x10))(lVar6,lVar10,lVar2);
    uVar11 = 0x112d36580;
    FUN_101e8304c(lVar10,0x112d36580,&UNK_10d9016d0);
    func_0x000107c5ed70();
    (**(code **)(lVar13 + 8))(lVar6,lVar2);
  }
  else {
    FUN_101e8304c(lVar10,0x112d36580,&UNK_10d9016d0);
    uVar11 = 0xe400000000000000;
    lVar10 = 0x656e6f6e;
  }
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 8;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  *(undefined8 *)(lVar3 + 0x20) = 0x746e657665;
  puVar4 = PTR___sSSN_11034da80;
  uVar8 = 0xe500000000000000;
  *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar3 + 0x30) = 0xd000000000000012;
  *(undefined8 *)(lVar3 + 0x38) = 0x800000010f016890;
  *(undefined **)(lVar3 + 0x48) = puVar4;
  *(undefined8 *)(lVar3 + 0x50) = 0x695f726579616c70;
  *(undefined8 *)(lVar3 + 0x58) = 0xe900000000000064;
  *(undefined8 *)(lVar3 + 0x60) = uVar7;
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  *(undefined **)(lVar3 + 0x78) = puVar4;
  *(undefined8 *)(lVar3 + 0x80) = 0x695f726579616c70;
  *(undefined8 *)(lVar3 + 0x88) = 0xee0064695f6d6574;
  *(long *)(lVar3 + 0x90) = lVar10;
  *(undefined8 *)(lVar3 + 0x98) = uVar11;
  *(undefined **)(lVar3 + 0xa8) = puVar4;
  *(undefined8 *)(lVar3 + 0xb0) = 0x6174735f72727563;
  *(undefined8 *)(lVar3 + 0xb8) = 0xeb00000000737574;
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar8 = 0xe700000000000000;
      uVar9 = 0x6c616974696e69;
      goto LAB_101e828e8;
    }
    if (param_2 == 1) {
      uVar8 = 0xe700000000000000;
      uVar9 = 0x676e6979616c70;
      goto LAB_101e828e8;
    }
    if (param_2 != 2) goto LAB_101e828a8;
    uVar9 = 0x73756170;
  }
  else {
    if (param_2 == 3) {
      uVar8 = 0xe700000000000000;
      uVar9 = 0x64656c6c617473;
      goto LAB_101e828e8;
    }
    if (param_2 != 4) {
      if (param_2 == 5) {
        uVar9 = 0x6465646e65;
        goto LAB_101e828e8;
      }
LAB_101e828a8:
      uVar8 = 0xe700000000000000;
      uVar9 = 0x6e776f6e6b6e75;
      goto LAB_101e828e8;
    }
    uVar9 = 0x6c696166;
  }
  uVar8 = 0xe600000000000000;
  uVar9 = uVar9 | 0x646500000000;
LAB_101e828e8:
  *(undefined **)(lVar3 + 0xd8) = puVar4;
  *(ulong *)(lVar3 + 0xc0) = uVar9;
  *(undefined8 *)(lVar3 + 200) = uVar8;
  lVar6 = lVar3;
  func_0x000100214a84();
  func_0x000107c61588(lVar3);
  uVar7 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),4,uVar7);
  return lVar6;
}



/* Entry: 101e8294c; end: 101e8294f; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView playerDidLoop:] */

void FUN_101e8294c(void)

{
  return;
}



/* Entry: 101e82950; end: 101e829ab; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:stateDidChange:] */

void FUN_101e82950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101e82514(param_3,param_4);
  func_0x000107c6142c();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e829ac; end: 101e82a13; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:currentTimeDidChange:] */

void FUN_101e829ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101e833ec(uVar1,uVar2,uVar3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e82a14; end: 101e82a1f; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView playerDidRevealFirstFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82a14(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 3;
  uStack_30 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e82a20; end: 101e82a8b; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView playerDidStartPlayback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82a20(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 2;
  uStack_30 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000103b79094(1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e82a8c; end: 101e82ac3; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView playerDidPause:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82a8c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103b79094(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e82ac4; end: 101e82b07; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView playerDidStall:] */

void FUN_101e82ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101e83554();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e82b08; end: 101e82b97; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:playbackDidFailWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_4;
  FUN_101e7c43c();
  uStack_40 = 0;
  uStack_38 = 2;
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  FUN_101e7f2ec();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c614ac(uVar1);
  return;
}



/* Entry: 101e82b98; end: 101e82ba3; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView playerDidReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82b98(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 4;
  uStack_30 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e82ba4; end: 101e82bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_40 [2];
  undefined1 uStack_30;
  
  uStack_30 = 3;
  auStack_40[0] = param_1;
  func_0x000107c61174();
  func_0x0001002a64a8(auStack_40);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101e82bf4; end: 101e82c57; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:didLoadSize:withLatency:] */

void FUN_101e82bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_2);
  FUN_101e835e8(param_1,param_5);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e82c58; end: 101e82ccb;  */

void FUN_101e82c58(double *param_1,ulong param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_60 [48];
  
  uVar1 = param_2;
  func_0x000107c5de58();
  dVar2 = (double)uVar1;
  uVar1 = param_2;
  func_0x000107c5ddb4();
  dVar3 = (double)uVar1;
  func_0x000107c4ecc4(auStack_60,param_2);
  func_0x000107c609f8(auStack_60);
  *param_1 = dVar2;
  param_1[1] = dVar3;
  return;
}



/* Entry: 101e82ccc; end: 101e82d5b; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:didLoadVideoTrack:audioTrack:] */

/* WARNING: Possible PIC construction at 0x000101e82d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e82d3c) */

void FUN_101e82ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101e83790(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101e82d5c; end: 101e82e83;  */

/* WARNING: Possible PIC construction at 0x000101e82dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e82e00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82d5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112e346d0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112e346d0);
  if (lVar5 == 0) {
    return;
  }
  func_0x000107c615f0(lVar5);
  func_0x000107c53fcc();
  func_0x000107c59a90(lVar5,param_2,0);
  func_0x000107c4e454(lVar5);
  puVar3 = PTR_PTR_1126d40b0;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c4ff74();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64(lVar5);
    func_0x000107c61180();
    func_0x000107c4ff34();
    func_0x000107c61170(lVar5);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e82e84);
  (*pcVar2)();
}



/* Entry: 101e82e84; end: 101e82e87; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:didLoadSubtitlesWithCount:] */

void FUN_101e82e84(void)

{
  return;
}



/* Entry: 101e82e88; end: 101e82e8b; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:didFailToLoadSubtitlesWithError:] */

void FUN_101e82e88(void)

{
  return;
}



/* Entry: 101e82e8c; end: 101e82ef7; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView player:didActivateSubtitle:atTime:] */

void FUN_101e82e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101e838fc(param_4,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101e82ef8; end: 101e82f3f; -[_TtC28SCPlaybackPlayerServicesImpl15SCNeoPlayerView playerDidDeactivateSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82ef8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e82f40; end: 101e82f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101e82f40(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112e346b8);
}



/* Entry: 101e82f7c; end: 101e82fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e82f7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *(long *)(*unaff_x20 + _DAT_112e346d0);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000107c5ed90();
    func_0x000107c59aa0(lVar2,param_2,lVar1);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101e82ff0; end: 101e8304b;  */

void FUN_101e82ff0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 101e8304c; end: 101e8314f;  */

undefined8 FUN_101e8304c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e83150; end: 101e8316f;  */

void FUN_101e83150(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e83164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101e83170; end: 101e831eb;  */

void FUN_101e83170(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e831ec; end: 101e833eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e831ec(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 uStack_31;
  
  lVar3 = _DAT_112e34688;
  uVar5 = 0x112e33e30;
  func_0x0001000285a8(0x112e33e30,&UNK_10da1d340);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  lVar3 = _DAT_112e34690;
  uVar5 = 0x112e33e38;
  func_0x0001000285a8(0x112e33e38,&UNK_10da1dd50);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  lVar3 = _DAT_112e34698;
  uVar5 = 0;
  func_0x000103b791cc();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  lVar3 = _DAT_112e346a0;
  lVar6 = 0;
  func_0x000101e83a18();
  func_0x000107c610f8();
  puVar1 = (undefined4 *)(lVar6 + _DAT_112e347f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  uVar5 = 0x3d;
  func_0x000103bae8d8();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112e346b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e346c0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e346c8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e346d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e346d8) = 0;
  lVar3 = _DAT_112e346e0;
  uStack_31 = 0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar7 = &uStack_31;
  func_0x00010006c248();
  *(undefined1 **)(unaff_x20 + lVar3) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112e346e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e346f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e346f8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112e34708) = 1;
  *(undefined **)(unaff_x20 + _DAT_112e34710) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e34718);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCPlaybackPlayerServicesImpl/SCNeoPlayerView.swift",0x32,2,0x85,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101e833ec);
  (*pcVar4)();
}


