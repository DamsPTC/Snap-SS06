/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000b1518; end: 000b1617;  */

void FUN_000b1518(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000aecf38 != -1) {
    _swift_once(0xaecf38,FUN_000afdcc);
  }
  if (lRam0000000000aecf40 != -1) {
    _swift_once(0xaecf40,0xae3b4);
  }
  if (lRam0000000000aecf08 != -1) {
    _swift_once(0xaecf08,FUN_000ae03c);
  }
  __s11SwiftSCLock4LockC4lockyyF();
  if (lRam0000000000aecf18 != -1) {
    _swift_once(0xaecf18,FUN_000ae2e8);
  }
  uVar1 = uRam0000000000aecf20;
  _objc_retain(uRam0000000000aecf20);
  FUN_000b01ac();
  _objc_release(uVar1);
  func_0x001d46c8();
  return;
}



/* Entry: 000b1618; end: 000b1ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_000b1618(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  char *pcVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long *plVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  char *pcVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  long alStack_190 [22];
  char *apcStack_e0 [5];
  char *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  char *pcStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar5 = (char *)0x0;
  __s10Foundation3URLVMa();
  pcVar28 = *(char **)(pcVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(pcVar28 + 0x40));
  ppuVar9 = (undefined **)((long)alStack_190 + (0xb0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (*(code *)PTR____chkstk_darwin_00999f48)();
  plVar24 = (long *)((long)ppuVar9 - extraout_x12);
  (**(code **)(pcVar28 + 0x10))(plVar24,param_2,pcVar5);
  pcVar6 = (char *)0x0;
  FUN_000b3bd8();
  _objc_allocWithZone();
  plVar7 = plVar24;
  FUN_000b2ccc();
  pcVar15 = param_2;
  if (plVar7 == (long *)0x0) {
    __s10Foundation4DateV026timeIntervalSinceReferenceB0SdvgZ();
    FUN_000b29bc();
    if (lRam0000000000aecf68 != -1) {
      _swift_once(0xaecf68,FUN_000ade70);
    }
    puVar25 = puRam0000000000aecf70;
    plStack_a0 = plVar7;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&pcStack_b8,0xb2c28,&puStack_b0,PTR___sSdN_0099b258);
    pcVar3 = pcStack_b8;
    puVar13 = PTR___sSiN_0099b2c0;
    plStack_a0 = plVar7;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&pcStack_b8,0xb2c3c,&puStack_b0,PTR___sSiN_0099b2c0);
    pcVar14 = pcStack_b8;
    plStack_a0 = plVar7;
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
              (&pcStack_b8,0xb2c50,&puStack_b0,puVar13);
    pcVar11 = pcVar6;
    _objc_allocWithZone();
    lVar17 = _DAT_00aed038;
    pcVar22 = pcVar11 + _DAT_00aed038;
    pcVar22[0] = '\0';
    lVar18 = _DAT_00aed040;
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    pcVar22 = pcVar11 + _DAT_00aed040;
    pcVar22[0] = '\0';
    lVar23 = _DAT_00aed048;
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    pcVar22 = pcVar11 + _DAT_00aed048;
    pcVar22[0] = '\0';
    lVar26 = _DAT_00aed050;
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    pcVar22 = pcVar11 + _DAT_00aed050;
    pcVar22[0] = '\0';
    lVar27 = _DAT_00aed058;
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    pcVar22 = pcVar11 + _DAT_00aed058;
    pcVar22[0] = '\0';
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    pcVar22 = pcVar11 + _DAT_00aed060;
    pcVar22[0] = '\0';
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    pcVar22[8] = '\x01';
    lVar29 = _DAT_00aed068;
    pcVar22 = pcVar11 + _DAT_00aed068;
    pcVar22[0] = -1;
    pcVar22[1] = -1;
    pcVar22[2] = -1;
    pcVar22[3] = -1;
    pcVar22[4] = -1;
    pcVar22[5] = -1;
    pcVar22[6] = -1;
    pcVar22[7] = -1;
    pcVar1 = pcVar11 + _DAT_00aed070;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\x01';
    pcVar2 = pcVar11 + _DAT_00aed078;
    *(undefined8 *)(pcVar11 + lVar17) = param_1;
    pcVar22 = pcVar11 + lVar18;
    pcVar22[0] = '\0';
    pcVar22[1] = '\0';
    pcVar22[2] = '\0';
    pcVar22[3] = '\0';
    pcVar22[4] = '\0';
    pcVar22[5] = '\0';
    pcVar22[6] = '\0';
    pcVar22[7] = '\0';
    *(char **)(pcVar11 + lVar23) = pcVar3;
    *(char **)(pcVar11 + lVar26) = pcVar14;
    *(char **)(pcVar11 + lVar27) = pcStack_b8;
    pcVar22 = pcVar11 + lVar29;
    pcVar22[0] = -1;
    pcVar22[1] = -1;
    pcVar22[2] = -1;
    pcVar22[3] = -1;
    pcVar22[4] = -1;
    pcVar22[5] = -1;
    pcVar22[6] = -1;
    pcVar22[7] = -1;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    pcVar1[8] = '\x01';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    plVar7 = alStack_190 + 0x18;
    pcVar22 = PTR_s_init_00abbf70;
    apcStack_e0[2] = pcVar11;
    apcStack_e0[3] = pcVar6;
    _objc_msgSendSuper2();
    puVar12 = PTR_PTR_00ac2ce8;
    _objc_opt_self();
    func_0x00781760();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined *)0x0;
    if (puVar12 != (undefined *)0x0) {
      puVar13 = puVar12;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      apcStack_e0[1] = pcVar22;
      _objc_release(puVar12);
      __s10Foundation3URLV25deletingLastPathComponentACyF(ppuVar9);
      pcVar14 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      _objc_opt_self();
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar14;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      puStack_b0 = (undefined *)0x0;
      pcVar15 = pcVar14;
      func_0x00781140();
      _objc_release(pcVar14);
      _objc_release(pcVar6);
      puVar25 = puStack_b0;
      if ((int)pcVar15 == 0) {
        puVar16 = puStack_b0;
        _objc_retain(puStack_b0);
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(puVar16);
        _swift_willThrow();
        FUN_00023358(puVar13,apcStack_e0[1]);
        pcVar22 = pcVar5;
        (**(code **)(pcVar28 + 8))(ppuVar9);
        puVar12 = puVar25;
        _swift_errorRelease();
        puVar16 = puVar25;
        pcVar6 = param_2;
      }
      else {
        _objc_retain(puStack_b0);
        pcVar6 = apcStack_e0[1];
        __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                  (param_2,0,puVar13,apcStack_e0[1]);
        puVar25 = (undefined *)0x0;
        (**(code **)(pcVar28 + 8))(ppuVar9,pcVar5);
        puVar12 = puVar13;
        pcVar22 = pcVar6;
        FUN_00023358();
      }
    }
  }
  else {
    plVar8 = plVar7;
    FUN_000b29bc();
    uVar31 = *(undefined8 *)((long)plVar7 + _DAT_00aed048);
    if (lRam0000000000aecf68 != -1) {
      _swift_once(0xaecf68,FUN_000ade70);
    }
    puVar12 = puRam0000000000aecf70;
    puVar16 = &UNK_009a9958;
    _swift_allocObject(&UNK_009a9958,0x20,7);
    *(long **)(puVar16 + 0x10) = plVar8;
    *(undefined8 *)(puVar16 + 0x18) = uVar31;
    puVar25 = &UNK_009a9980;
    _swift_allocObject(&UNK_009a9980,0x20,7);
    *(undefined8 *)(puVar25 + 0x10) = 0xb2ba4;
    *(undefined **)(puVar25 + 0x18) = puVar16;
    puVar13 = PTR___NSConcreteStackBlock_00999f30;
    uStack_90 = 0xb2c7c;
    puStack_b0 = PTR___NSConcreteStackBlock_00999f30;
    uStack_a8 = 0x42000000;
    pcVar14 = (char *)0xae078;
    plStack_a0 = (long *)0xae078;
    puStack_98 = &UNK_009a9998;
    ppuVar9 = &puStack_b0;
    pcStack_88 = puVar25;
    __Block_copy(ppuVar9);
    pcVar5 = pcStack_88;
    _swift_retain(puVar25);
    _swift_release(pcVar5);
    _dispatch_sync(puVar12,ppuVar9);
    __Block_release(ppuVar9);
    puVar10 = puVar25;
    _swift_isEscapingClosureAtFileLocation(puVar25,"",0x73,0x2d,0x18,1);
    _swift_release(puVar16);
    _swift_release(puVar25);
    if (((ulong)puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb1ccc);
      (*pcVar4)();
    }
    uVar31 = *(undefined8 *)((long)plVar7 + _DAT_00aed050);
    puVar16 = &UNK_009a99d0;
    _swift_allocObject(&UNK_009a99d0,0x20,7);
    *(long **)(puVar16 + 0x10) = plVar8;
    *(undefined8 *)(puVar16 + 0x18) = uVar31;
    pcVar5 = "";
    _swift_allocObject(&UNK_009a99f8,0x20,7);
    pcVar5[0x10] = -0x58;
    pcVar5[0x11] = '+';
    pcVar5[0x12] = '\v';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    *(undefined **)(pcVar5 + 0x18) = puVar16;
    uStack_90 = 0xb2c80;
    puStack_b0 = puVar13;
    uStack_a8 = 0x42000000;
    plStack_a0 = (long *)0xae078;
    puStack_98 = &UNK_009a9a10;
    ppuVar9 = &puStack_b0;
    pcStack_88 = pcVar5;
    __Block_copy(ppuVar9);
    pcVar6 = pcStack_88;
    _swift_retain(pcVar5);
    _swift_release(pcVar6);
    _dispatch_sync(puVar12,ppuVar9);
    __Block_release(ppuVar9);
    pcVar28 = pcVar5;
    _swift_isEscapingClosureAtFileLocation(pcVar5,"",0x73,0x3a,0x18,1);
    _swift_release(puVar16);
    _swift_release(pcVar5);
    if (((ulong)pcVar28 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb1cd0);
      (*pcVar4)();
    }
    uVar31 = *(undefined8 *)((long)plVar7 + _DAT_00aed058);
    pcVar5 = "";
    _swift_allocObject(&UNK_009a9a48,0x20,7);
    *(long **)(pcVar5 + 0x10) = plVar8;
    *(undefined8 *)(pcVar5 + 0x18) = uVar31;
    puVar16 = &UNK_009a9a70;
    _swift_allocObject(&UNK_009a9a70,0x20,7);
    *(undefined8 *)(puVar16 + 0x10) = 0xb2bac;
    *(char **)(puVar16 + 0x18) = pcVar5;
    uStack_90 = 0xb2c84;
    puStack_b0 = puVar13;
    uStack_a8 = 0x42000000;
    plStack_a0 = (long *)0xae078;
    puStack_98 = &UNK_009a9a88;
    ppuVar9 = &puStack_b0;
    pcStack_88 = puVar16;
    __Block_copy();
    pcVar28 = pcStack_88;
    _swift_retain(puVar16);
    _swift_release(pcVar28);
    _dispatch_sync(puVar12,ppuVar9);
    __Block_release(ppuVar9);
    pcVar22 = "";
    puVar25 = puVar16;
    _swift_isEscapingClosureAtFileLocation(puVar16,"",0x73,0x54,0x18,1);
    _swift_release(pcVar5);
    puVar12 = puVar16;
    _swift_release();
    if (((ulong)puVar25 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb19b0);
      (*pcVar4)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return plVar7;
  }
  ___stack_chk_fail();
  plVar24[-0xc] = (long)pcVar15;
  plVar24[-0xb] = (long)pcVar14;
  plVar24[-10] = (long)puVar13;
  plVar24[-9] = (long)pcVar6;
  plVar24[-8] = (long)pcVar28;
  plVar24[-7] = (long)ppuVar9;
  plVar24[-6] = (long)pcVar5;
  plVar24[-5] = (long)puVar16;
  plVar24[-4] = (long)puVar25;
  plVar24[-3] = (long)plVar7;
  plVar24[-2] = (long)&stack0xfffffffffffffff0;
  plVar24[-1] = (long)FUN_000b1cec;
  lVar17 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar29 = *(long *)(lVar17 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar29 + 0x40));
  lVar26 = (long)plVar24 + (-0xb0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar18 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar23 = *(long *)(lVar18 + -8);
  plVar24[-0x15] = lVar23;
  plVar24[-0x14] = lVar18;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar23 + 0x40));
  lVar27 = lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar18 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar23 = *(long *)(lVar18 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar23 + 0x40));
  lVar30 = lVar27 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  plVar7 = (long *)&UNK_009a9660;
  _swift_allocObject(&UNK_009a9660,0x18,7);
  plVar7[2] = (long)pcVar22;
  __Block_copy(pcVar22);
  if (lRam0000000000aecf40 != -1) {
    _swift_once(0xaecf40,0xae3b4);
  }
  if (cRam0000000000b64918 != '\x01') {
    (**(code **)(pcVar22 + 0x10))(pcVar22);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(plVar7);
    return plVar7;
  }
  FUN_00088dc4(0);
  (**(code **)(lVar23 + 0x68))
            (lVar30,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88
             ,lVar18);
  lVar19 = lVar30;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar30);
  plVar24[-0x16] = lVar29;
  (**(code **)(lVar23 + 8))(lVar30,lVar18);
  puVar16 = &UNK_009a9688;
  _swift_allocObject(&UNK_009a9688,0x28,7);
  *(undefined **)(puVar16 + 0x10) = puVar12;
  *(code **)(puVar16 + 0x18) = FUN_000b2a00;
  *(long **)(puVar16 + 0x20) = plVar7;
  plVar24[-0xe] = 0xb2cc8;
  plVar24[-0xd] = (long)puVar16;
  plVar24[-0x12] = (long)PTR___NSConcreteStackBlock_00999f30;
  plVar24[-0x11] = 0x42000000;
  plVar24[-0x10] = 0x563e4;
  plVar24[-0xf] = (long)&UNK_009a96a0;
  plVar8 = plVar24 + -0x12;
  __Block_copy(plVar8);
  _objc_retain(puVar12);
  _swift_retain(plVar7);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar27);
  plVar24[-0x13] = (long)PTR___swiftEmptyArrayStorage_0099b8f0;
  uVar31 = 0xae97a0;
  FUN_000b2a68(0xae97a0,PTR___s8Dispatch0A13WorkItemFlagsVMa_0099bc70,
               PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_0099bc80);
  uVar20 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar21 = 0xae97b0;
  func_0x000b2aa8(0xae97b0,0xae97a8,&UNK_007d4680);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar26,plVar24 + -0x13,uVar20,uVar21,lVar17,uVar31);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar27,lVar26,plVar8);
  __Block_release(plVar8);
  _objc_release(lVar19);
  (**(code **)(plVar24[-0x16] + 8))(lVar26,lVar17);
  (**(code **)(plVar24[-0x15] + 8))(lVar27,plVar24[-0x14]);
  plVar24 = (long *)plVar24[-0xd];
  _swift_release(plVar7);
  _swift_release(plVar24);
  return plVar24;
}



/* Entry: 000b1cec; end: 000b200f;  */

void FUN_000b1cec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_009a9660;
  _swift_allocObject(&UNK_009a9660,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  __Block_copy(param_2);
  if (lRam0000000000aecf40 != -1) {
    _swift_once(0xaecf40,0xae3b4);
  }
  if (cRam0000000000b64918 == '\x01') {
    FUN_00088dc4(0);
    (**(code **)(lVar11 + 0x68))
              (lVar14,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88,lVar2);
    lVar4 = lVar14;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar14);
    lStack_b0 = lVar13;
    (**(code **)(lVar11 + 8))(lVar14,lVar2);
    puVar5 = &UNK_009a9688;
    _swift_allocObject(&UNK_009a9688,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(code **)(puVar5 + 0x18) = FUN_000b2a00;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    uStack_70 = 0xb2cc8;
    puStack_90 = PTR___NSConcreteStackBlock_00999f30;
    uStack_88 = 0x42000000;
    uStack_80 = 0x563e4;
    puStack_78 = &UNK_009a96a0;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    __Block_copy(ppuVar6);
    _objc_retain(param_1);
    _swift_retain(puVar3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    puStack_98 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uVar7 = 0xae97a0;
    FUN_000b2a68(0xae97a0,PTR___s8Dispatch0A13WorkItemFlagsVMa_0099bc70,
                 PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_0099bc80);
    uVar8 = 0xae97a8;
    func_0x000115a8(0xae97a8,&UNK_007d4680);
    uVar9 = 0xae97b0;
    func_0x000b2aa8(0xae97b0,0xae97a8,&UNK_007d4680);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_98,uVar8,uVar9,lVar1,uVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar10,ppuVar6);
    __Block_release(ppuVar6);
    _objc_release(lVar4);
    (**(code **)(lStack_b0 + 8))(lVar10,lVar1);
    (**(code **)(lStack_a8 + 8))(lVar12,lStack_a0);
    puVar5 = puStack_68;
    _swift_release(puVar3);
    _swift_release(puVar5);
    return;
  }
  (**(code **)(param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar3);
  return;
}



/* Entry: 000b2010; end: 000b28c7;  */

/* WARNING: Removing unreachable block (ram,0x000b2754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000b2010(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  char *pcVar16;
  long extraout_x8;
  long extraout_x12;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long alStack_140 [4];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = (code *)0x0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(pcVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar18 + 0x40));
  lVar15 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar17 = lVar15 - extraout_x12;
  if (lRam0000000000aecf08 != -1) {
    _swift_once(0xaecf08,FUN_000ae03c);
  }
  uStack_e0 = uRam0000000000aecf10;
  __s11SwiftSCLock4LockC4lockyyF();
  lVar5 = param_2;
  func_0x00792620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00782440(lVar5);
    _objc_release(lVar5);
  }
  lVar6 = param_2;
  func_0x0077f3a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lStack_c8 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x00787200();
    lStack_c8 = lVar7;
    _objc_release(lVar6);
  }
  if (lRam0000000000aecfc8 != -1) {
    _swift_once(0xaecfc8,0xae098);
  }
  pcVar19 = pcVar4;
  FUN_00028010(pcVar4,0xb64920);
  lStack_d8 = lVar17;
  (**(code **)(lVar18 + 0x10))(lVar17,pcVar19,pcVar4);
  lVar7 = param_2;
  func_0x0077f380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lStack_108 = 0;
  }
  else {
    lVar8 = lVar7;
    func_0x00787200();
    lStack_108 = lVar8;
    _objc_release(lVar7);
  }
  lVar8 = param_2;
  func_0x0078be20();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar15;
  if (lVar8 == 0) {
    lStack_100 = 0;
  }
  else {
    lVar15 = lVar8;
    func_0x00787200();
    lStack_100 = lVar15;
    _objc_release(lVar8);
  }
  lVar15 = param_2;
  func_0x0078be60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
    lStack_110 = 0;
  }
  else {
    lVar9 = lVar15;
    func_0x00787200();
    lStack_110 = lVar9;
    _objc_release(lVar15);
  }
  lStack_e8 = lVar18;
  pcStack_d0 = pcVar4;
  func_0x0078be40();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lStack_118 = 0;
    pcStack_c0 = (code *)0x0;
  }
  else {
    lVar18 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_118 = lVar18;
    pcStack_c0 = pcVar19;
    _objc_release();
  }
  lStack_f8 = lVar8;
  if (lRam0000000000aecf18 != -1) {
    param_2 = 0xaecf18;
    pcVar19 = FUN_000ae2e8;
    _swift_once(0xaecf18,FUN_000ae2e8);
  }
  puVar2 = puRam0000000000aecf20;
  if (lVar5 == 0) {
    puVar14 = puRam0000000000aecf20;
    _objc_retain();
    pcVar16 = (char *)pcVar19;
    lVar18 = lStack_c8;
  }
  else {
    FUN_000b29bc();
    lVar18 = lRam0000000000aecf68;
    puVar10 = puVar2;
    _objc_retain();
    if (lVar18 != -1) {
      _swift_once(0xaecf68,FUN_000ade70);
    }
    uVar3 = uRam0000000000aecf70;
    puVar11 = &UNK_009a9868;
    _swift_allocObject(&UNK_009a9868,0x20,7);
    *(long *)(puVar11 + 0x10) = param_2;
    *(undefined8 *)(puVar11 + 0x18) = param_1;
    puVar14 = &UNK_009a9890;
    _swift_allocObject(&UNK_009a9890,0x20,7);
    *(undefined8 *)(puVar14 + 0x10) = 0xb2a58;
    *(undefined **)(puVar14 + 0x18) = puVar11;
    uStack_98 = 0xb2c74;
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0xae078;
    puStack_a0 = &UNK_009a98a8;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar14;
    __Block_copy(ppuVar12);
    puVar13 = puStack_90;
    _swift_retain(puVar14);
    _swift_release(puVar13);
    _dispatch_sync(uVar3,ppuVar12);
    __Block_release(ppuVar12);
    pcVar16 = "";
    puVar13 = puVar14;
    _swift_isEscapingClosureAtFileLocation(puVar14,"",0x73,0x2d,0x18,1);
    _swift_release(puVar11);
    _swift_release();
    if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb288c);
      (*pcVar4)();
    }
    *(undefined8 *)(puVar10 + _DAT_00aed048) = param_1;
    lVar18 = lStack_c8;
  }
  lStack_c8 = lVar18;
  if (lVar6 != 0) {
    lStack_120 = lVar15;
    FUN_000b29bc();
    if (lRam0000000000aecf68 != -1) {
      _swift_once(0xaecf68,FUN_000ade70);
    }
    uVar3 = uRam0000000000aecf70;
    puVar10 = &UNK_009a97f0;
    _swift_allocObject(&UNK_009a97f0,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(long *)(puVar10 + 0x18) = lVar18;
    puVar14 = &UNK_009a9818;
    _swift_allocObject(&UNK_009a9818,0x20,7);
    *(undefined8 *)(puVar14 + 0x10) = 0xb2a48;
    *(undefined **)(puVar14 + 0x18) = puVar10;
    uStack_98 = 0xb2c70;
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0xae078;
    puStack_a0 = &UNK_009a9830;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar14;
    __Block_copy(ppuVar12);
    puVar11 = puStack_90;
    _swift_retain(puVar14);
    _swift_release(puVar11);
    _dispatch_sync(uVar3,ppuVar12);
    __Block_release(ppuVar12);
    pcVar16 = "";
    puVar11 = puVar14;
    _swift_isEscapingClosureAtFileLocation(puVar14,"",0x73,0x3a,0x18,1);
    _swift_release(puVar10);
    _swift_release();
    if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb28a8);
      (*pcVar4)();
    }
    *(long *)(puVar2 + _DAT_00aed050) = lVar18;
    lVar15 = lStack_120;
  }
  if (lVar7 != 0) {
    FUN_000b29bc();
    if (lRam0000000000aecf68 != -1) {
      _swift_once(0xaecf68,FUN_000ade70);
    }
    uVar3 = uRam0000000000aecf70;
    puVar10 = &UNK_009a9778;
    _swift_allocObject(&UNK_009a9778,0x20,7);
    lVar18 = lStack_108;
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(long *)(puVar10 + 0x18) = lStack_108;
    puVar14 = &UNK_009a97a0;
    _swift_allocObject(&UNK_009a97a0,0x20,7);
    *(code **)(puVar14 + 0x10) = FUN_000b2a38;
    *(undefined **)(puVar14 + 0x18) = puVar10;
    uStack_98 = 0xb2c6c;
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0xae078;
    puStack_a0 = &UNK_009a97b8;
    ppuVar12 = &puStack_b8;
    puStack_90 = puVar14;
    __Block_copy(ppuVar12);
    puVar11 = puStack_90;
    _swift_retain(puVar14);
    _swift_release(puVar11);
    _dispatch_sync(uVar3,ppuVar12);
    __Block_release(ppuVar12);
    pcVar16 = "";
    puVar11 = puVar14;
    _swift_isEscapingClosureAtFileLocation(puVar14,"",0x73,0x54,0x18,1);
    _swift_release(puVar10);
    _swift_release(puVar14);
    if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb28c4);
      (*pcVar4)();
    }
    *(long *)(puVar2 + _DAT_00aed058) = lVar18;
  }
  pcVar19 = pcStack_c0;
  pcVar4 = pcStack_d0;
  lVar18 = lStack_d8;
  if ((lStack_f8 != 0) && (lStack_100 + 1U < 3)) {
    *(long *)(puVar2 + _DAT_00aed068) = lStack_100;
  }
  if (lVar15 != 0) {
    plVar1 = (long *)(puVar2 + _DAT_00aed070);
    *plVar1 = lStack_110;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  if (pcStack_c0 != (code *)0x0) {
    plVar1 = (long *)(puVar2 + _DAT_00aed078);
    lVar15 = plVar1[1];
    *plVar1 = lStack_118;
    plVar1[1] = (long)pcStack_c0;
    _swift_bridgeObjectRelease(lVar15);
  }
  puVar14 = PTR_PTR_00ac2ce8;
  _objc_opt_self();
  _swift_bridgeObjectRetain(pcVar19);
  puVar10 = puVar14;
  func_0x00781760();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lStack_f0;
  if (puVar10 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(pcVar19);
    _objc_release(puVar2);
    pcVar19 = *(code **)(lStack_e8 + 8);
  }
  else {
    puVar11 = puVar10;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(puVar10);
    __s10Foundation3URLV25deletingLastPathComponentACyF(lVar15);
    puVar14 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    _objc_opt_self();
    func_0x00781c40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar14;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puStack_b8 = (undefined *)0x0;
    puVar13 = puVar14;
    func_0x00781140();
    _objc_release(puVar14);
    _objc_release(puVar10);
    puVar14 = puStack_b8;
    if (((ulong)puVar13 & 1) == 0) {
      puVar10 = puStack_b8;
      _objc_retain(puStack_b8);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(puVar10);
      _swift_willThrow();
      FUN_00023358(puVar11,pcVar16);
      pcVar19 = *(code **)(lStack_e8 + 8);
      (*pcVar19)(lVar15,pcVar4);
      _swift_errorRelease(puVar14);
    }
    else {
      _objc_retain(puStack_b8);
      __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
                (lVar18,0,puVar11,pcVar16);
      pcVar19 = *(code **)(lStack_e8 + 8);
      (*pcVar19)(lVar15,pcVar4);
      FUN_00023358(puVar11,pcVar16);
    }
    _swift_bridgeObjectRelease(pcStack_c0);
    _objc_release(puVar2);
  }
  uVar3 = uStack_e0;
  (*pcVar19)(lVar18,pcVar4);
  func_0x001d46c8();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_80) {
    ___stack_chk_fail();
    *(undefined8 *)(lVar17 + -0x20) = uVar3;
    *(undefined **)(lVar17 + -0x18) = puVar14;
    *(undefined1 **)(lVar17 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar17 + -8) = FUN_000b28c8;
    _swift_unknownObjectWeakDestroy();
    return lVar18;
  }
  return lVar18;
}



/* Entry: 000b28c8; end: 000b28eb;  */

undefined8 FUN_000b28c8(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 000b28ec; end: 000b29bb;  */

int FUN_000b28ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 000b29bc; end: 000b29ff;  */

void FUN_000b29bc(void)

{
  _objc_opt_self(&PTR_PTR_00aca968);
  return;
}



/* Entry: 000b2a00; end: 000b2a0b;  */

void FUN_000b2a00(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000b2a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 000b2a0c; end: 000b2a37;  */

void FUN_000b2a0c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000b2a38; end: 000b2a67;  */

void FUN_000b2a38(void)

{
  long unaff_x20;
  
  uRam0000000000aecfe0 = *(undefined8 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 000b2a68; end: 000b2aeb;  */

void FUN_000b2a68(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 000b2aec; end: 000b2baf;  */

void FUN_000b2aec(undefined8 *param_1)

{
  *param_1 = uRam0000000000aecfd0;
  return;
}



/* Entry: 000b2bb0; end: 000b2c63;  */

void FUN_000b2bb0(void)

{
  func_0x000b2afc();
  return;
}



/* Entry: 000b2c64; end: 000b2ccb;  */

void FUN_000b2c64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 000b2ccc; end: 000b2fe3;  */

/* WARNING: Removing unreachable block (ram,0x000b2dac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_000b2ccc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  *(undefined8 *)(unaff_x20 + _DAT_00aed038) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed048) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed050) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed058) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aed060);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_00aed068) = 0xffffffffffffffff;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aed070);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aed078);
  uVar3 = param_1;
  FUN_000b3bd8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar4 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar4,PTR_s_init_00abbf70);
  uVar10 = 0;
  uVar5 = param_1;
  __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(param_1,0);
  puVar6 = PTR_PTR_00ac2ce8;
  _objc_opt_self();
  uVar9 = uVar5;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar5,uVar10);
  func_0x00789f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (puVar6 == (undefined *)0x0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 8))(param_1,lVar7);
    FUN_00023358(uVar5,uVar10);
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar6);
    FUN_00023358(uVar5,uVar10);
    _swift_unknownObjectRelease(puVar6);
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 8))(param_1,lVar7);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
    _objc_release(puVar4);
    FUN_00027748(&uStack_a0);
  }
  else {
    plVar8 = &lStack_c8;
    _swift_dynamicCast(plVar8,&uStack_a0,PTR___sypN_0099b8d8 + 8,uVar3,6);
    if (((ulong)plVar8 & 1) != 0) {
      *(undefined8 *)(puVar4 + _DAT_00aed038) = *(undefined8 *)(lStack_c8 + _DAT_00aed038);
      *(undefined8 *)(puVar4 + _DAT_00aed040) = *(undefined8 *)(lStack_c8 + _DAT_00aed040);
      *(undefined8 *)(puVar4 + _DAT_00aed048) = *(undefined8 *)(lStack_c8 + _DAT_00aed048);
      *(undefined8 *)(puVar4 + _DAT_00aed050) = *(undefined8 *)(lStack_c8 + _DAT_00aed050);
      *(undefined8 *)(puVar4 + _DAT_00aed058) = *(undefined8 *)(lStack_c8 + _DAT_00aed058);
      uVar2 = *(undefined1 *)((undefined8 *)(lStack_c8 + _DAT_00aed060) + 1);
      *(undefined8 *)(puVar4 + _DAT_00aed060) = *(undefined8 *)(lStack_c8 + _DAT_00aed060);
      *(undefined1 *)((long)(puVar4 + _DAT_00aed060) + 8) = uVar2;
      *(undefined8 *)(puVar4 + _DAT_00aed068) = *(undefined8 *)(lStack_c8 + _DAT_00aed068);
      uVar2 = *(undefined1 *)((undefined8 *)(lStack_c8 + _DAT_00aed070) + 1);
      *(undefined8 *)(puVar4 + _DAT_00aed070) = *(undefined8 *)(lStack_c8 + _DAT_00aed070);
      *(undefined1 *)((long)(puVar4 + _DAT_00aed070) + 8) = uVar2;
      uVar3 = *(undefined8 *)(lStack_c8 + _DAT_00aed078);
      uVar5 = ((undefined8 *)(lStack_c8 + _DAT_00aed078))[1];
      _swift_bridgeObjectRetain(uVar5);
      _objc_release(lStack_c8);
      puVar1 = (undefined8 *)(puVar4 + _DAT_00aed078);
      uVar9 = puVar1[1];
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      _swift_bridgeObjectRelease(uVar9);
      return puVar4;
    }
    _objc_release(puVar4);
  }
  return (undefined1 *)0x0;
}



/* Entry: 000b2fe4; end: 000b37db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_000b2fe4(undefined1 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  long unaff_x20;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  *(undefined8 *)(unaff_x20 + _DAT_00aed038) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed048) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed050) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aed058) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aed060);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_00aed068) = 0xffffffffffffffff;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aed070);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00aed078);
  FUN_000b3bd8();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar7 = &stack0xffffffffffffff80;
  _objc_msgSendSuper2(puVar7,PTR_s_init_00abbf70);
  uVar8 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b8500);
  puVar9 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (puVar9 == (undefined1 *)0x0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
    _swift_unknownObjectRelease(puVar9);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
LAB_000b3530:
    uStack_c0 = uStack_a0;
    uStack_b8 = uStack_98;
    uStack_b0 = uStack_90;
    lStack_a8 = lStack_88;
    _objc_release(puVar7);
    _objc_release(param_1);
    FUN_00027748(&uStack_a0);
  }
  else {
    plVar10 = &lStack_d0;
    _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSdN_0099b258,6);
    lVar11 = lStack_d0;
    if (((ulong)plVar10 & 1) == 0) {
LAB_000b354c:
      _objc_release(puVar7);
    }
    else {
      uVar8 = 0x436572756c696166;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x436572756c696166,0xec000000746e756f);
      puVar9 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
        _swift_unknownObjectRelease(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_000b3530;
      plVar10 = &lStack_d0;
      _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSiN_0099b2c0,6);
      lVar2 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_000b354c;
      uVar8 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000000008b8520);
      puVar9 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
        _swift_unknownObjectRelease(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_000b3530;
      plVar10 = &lStack_d0;
      _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSdN_0099b258,6);
      lVar3 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_000b354c;
      uVar8 = 0xd00000000000001c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x80000000008b8540);
      puVar9 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
        _swift_unknownObjectRelease(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_000b3530;
      plVar10 = &lStack_d0;
      _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSiN_0099b2c0,6);
      lVar4 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_000b354c;
      uVar8 = 0xd00000000000001c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x80000000008b8560);
      puVar9 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
        _swift_unknownObjectRelease(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_000b3530;
      plVar10 = &lStack_d0;
      _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSiN_0099b2c0,6);
      lVar5 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_000b354c;
      uVar8 = 0xd000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000000008b85a0);
      puVar9 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (puVar9 == (undefined1 *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
        _swift_unknownObjectRelease(puVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) goto LAB_000b3530;
      plVar10 = &lStack_d0;
      _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSiN_0099b2c0,6);
      lVar6 = lStack_d0;
      if (((ulong)plVar10 & 1) == 0) goto LAB_000b354c;
      if (lStack_d0 + 1U < 3) {
        *(long *)(puVar7 + _DAT_00aed038) = lVar11;
        *(long *)(puVar7 + _DAT_00aed040) = lVar2;
        *(long *)(puVar7 + _DAT_00aed048) = lVar3;
        *(long *)(puVar7 + _DAT_00aed050) = lVar4;
        *(long *)(puVar7 + _DAT_00aed058) = lVar5;
        uVar8 = 0xd000000000000018;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x80000000008b8580)
        ;
        puVar9 = param_1;
        func_0x00781b00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (puVar9 == (undefined1 *)0x0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
          _swift_unknownObjectRelease(puVar9);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          FUN_00027748(&uStack_a0);
          lVar11 = 0;
          bVar12 = 1;
        }
        else {
          plVar10 = &lStack_d0;
          _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSdN_0099b258,6);
          lVar11 = lStack_d0;
          if ((int)plVar10 == 0) {
            lVar11 = 0;
          }
          bVar12 = (byte)plVar10 ^ 1;
        }
        *(long *)(puVar7 + _DAT_00aed060) = lVar11;
        *(byte *)((long)(puVar7 + _DAT_00aed060) + 8) = bVar12;
        *(long *)(puVar7 + _DAT_00aed068) = lVar6;
        uVar8 = 0xd000000000000013;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x80000000008b85c0)
        ;
        puVar9 = param_1;
        func_0x00781b00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (puVar9 == (undefined1 *)0x0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
          _swift_unknownObjectRelease(puVar9);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          FUN_00027748(&uStack_a0);
          lVar11 = 0;
          bVar12 = 1;
        }
        else {
          plVar10 = &lStack_d0;
          _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSiN_0099b2c0,6);
          lVar11 = lStack_d0;
          if ((int)plVar10 == 0) {
            lVar11 = 0;
          }
          bVar12 = (byte)plVar10 ^ 1;
        }
        *(long *)(puVar7 + _DAT_00aed070) = lVar11;
        *(byte *)((long)(puVar7 + _DAT_00aed070) + 8) = bVar12;
        uVar8 = 0xd000000000000011;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b85e0)
        ;
        puVar9 = param_1;
        func_0x00781b00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (puVar9 == (undefined1 *)0x0) {
          _objc_release(param_1);
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,puVar9);
          _swift_unknownObjectRelease(puVar9);
          _objc_release(param_1);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          FUN_00027748(&uStack_a0);
          lStack_d0 = 0;
          lStack_c8 = 0;
        }
        else {
          plVar10 = &lStack_d0;
          _swift_dynamicCast(plVar10,&uStack_a0,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
          if ((int)plVar10 == 0) {
            lStack_d0 = 0;
            lStack_c8 = 0;
          }
        }
        plVar10 = (long *)(puVar7 + _DAT_00aed078);
        lVar11 = plVar10[1];
        *plVar10 = lStack_d0;
        plVar10[1] = lStack_c8;
        _swift_bridgeObjectRelease(lVar11);
        return puVar7;
      }
      _objc_release(param_1);
      param_1 = puVar7;
    }
    _objc_release(param_1);
  }
  return (undefined1 *)0x0;
}



/* Entry: 000b37dc; end: 000b3803; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata initWithCoder:] */

void FUN_000b37dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_000b2fe4();
  return;
}



/* Entry: 000b3804; end: 000b3b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b3804(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00aed038);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b8500);
  func_0x00782700(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0x436572756c696166;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x436572756c696166,0xec000000746e756f);
  func_0x00782760(param_1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00aed048);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000000008b8520);
  func_0x00782700(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x80000000008b8540);
  func_0x00782760(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x80000000008b8560);
  func_0x00782760(param_1);
  _objc_release(uVar1);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aed060) + 1) == '\x01') {
    uVar1 = 0;
  }
  else {
    __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF
              (*(undefined8 *)(unaff_x20 + _DAT_00aed060));
  }
  uVar3 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x80000000008b8580);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000000008b85a0);
  func_0x00782760(param_1);
  _objc_release(uVar1);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00aed070) + 1) == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00aed070);
    __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(uVar1);
  }
  uVar3 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x80000000008b85c0);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_00aed078))[1];
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00aed078);
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
  uVar3 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b85e0);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar3);
  return;
}



/* Entry: 000b3b18; end: 000b3b67; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata encodeWithCoder:] */

void FUN_000b3b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_000b3804(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000b3b68; end: 000b3bc3; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata init] */

void FUN_000b3b68(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCConfigCrashRecoveryImpl.ConfigHeuristicRecoveryMetadata",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb3b94);
  (*pcVar1)();
}



/* Entry: 000b3bc4; end: 000b3bd7; -[_TtC25SCConfigCrashRecoveryImpl31ConfigHeuristicRecoveryMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b3bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00aed078 + 8));
  return;
}



/* Entry: 000b3bd8; end: 000b3bf7;  */

void FUN_000b3bd8(void)

{
  _objc_opt_self(&PTR_PTR_00acaa58);
  return;
}



/* Entry: 000b3bf8; end: 000b4207;  */

undefined * FUN_000b3bf8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar10 + 0x10);
    puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    uVar9 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar2 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  PTR___swiftEmptyDictionarySingleton_0099b8f8 = puVar2;
  if (uVar9 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xb3d28);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
          _objc_retain();
          uVar8 = param_2;
        }
        else {
          uVar4 = uVar6;
          uVar8 = param_1;
          func_0x000b42c8(uVar6,param_1);
        }
        uVar1 = uVar6 + 1;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xb3d24);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x00789780();
        if ((int)uVar5 == 5) break;
        _objc_release(uVar4);
        param_2 = uVar8;
        uVar6 = uVar6 + 1;
        if (uVar1 == uVar9) {
          return puVar2;
        }
      }
      uVar6 = uVar4;
      func_0x00780940();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xb3d6c);
        (*pcVar3)();
      }
      param_2 = uVar6;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar6);
      func_0x000b3d6c();
      puVar7 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native(puVar2);
      FUN_000b448c(uVar6,param_2,uVar8,puVar7);
      _swift_bridgeObjectRelease(uVar8);
      _objc_release(uVar4);
      uVar6 = uVar1;
    } while (uVar1 != uVar9);
  }
  return puVar2;
}



/* Entry: 000b4208; end: 000b448b; +[ConfigResult legacyABConfigMapFromPayloadData:] */

void FUN_000b4208(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  FUN_000b4c58(param_3,param_2);
  FUN_00023344(param_3,param_2);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0xaed0b0;
    func_0x000115a8(0xaed0b0,&UNK_007d69f0);
    lVar3 = lVar1;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar1,PTR___sSSN_0099b040,uVar2,PTR___sSSSHsWP_0099b050);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 000b448c; end: 000b474b;  */

void FUN_000b448c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_000202c0();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb4564);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_000b474c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    FUN_000202c0();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_0099b040)
      ;
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xb452c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000b45dc();
    lVar6 = *unaff_x20;
    goto joined_r0x000b4578;
  }
  lVar6 = *unaff_x20;
joined_r0x000b4578:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb45dc);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_3);
  return;
}



/* Entry: 000b474c; end: 000b4b97;  */

void FUN_000b474c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0xaed0c0;
  func_0x000115a8(0xaed0c0,&UNK_007d6600);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_000b49b4:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xb49e4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_000b49b4;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xb49e8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 000b4b98; end: 000b4c57;  */

/* WARNING: Removing unreachable block (ram,0x000b4cd0) */

long FUN_000b4b98(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long alStack_90 [2];
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00785200();
  _objc_release(param_1);
  lVar1 = 0;
  if (unaff_x20 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release();
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
    if (0xe < param_2 >> 0x3c) {
      return 0;
    }
    _objc_allocWithZone(PTR__OBJC_CLASS___SCCofConfigTargetingResponse_00ac3368);
    func_0x00023304(lVar1,param_2);
    lVar3 = lVar1;
    FUN_000b4b98(lVar1,param_2);
    FUN_00023344(lVar1,param_2);
    lVar1 = lVar3;
    func_0x00780960();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_release(lVar3);
    }
    else {
      alStack_90[0] = 0;
      uVar2 = 0;
      FUN_000b4d78(0,0xaed0b8,&PTR_PTR_00ac35e0);
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (lVar1,alStack_90,uVar2);
      _objc_release(lVar1);
      _objc_release(lVar3);
      lVar1 = alStack_90[0];
      if (alStack_90[0] != 0) {
        lVar3 = alStack_90[0];
        FUN_000b3bf8(alStack_90[0]);
        _swift_bridgeObjectRelease(lVar1);
        return lVar3;
      }
    }
    return 0;
  }
  return unaff_x20;
}



/* Entry: 000b4c58; end: 000b4d77;  */

/* WARNING: Removing unreachable block (ram,0x000b4cd0) */

long FUN_000b4c58(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_50 [2];
  
  if (0xe < param_2 >> 0x3c) {
    return 0;
  }
  _objc_allocWithZone(PTR__OBJC_CLASS___SCCofConfigTargetingResponse_00ac3368);
  func_0x00023304(param_1,param_2);
  lVar1 = param_1;
  FUN_000b4b98(param_1,param_2);
  FUN_00023344(param_1,param_2);
  lVar2 = lVar1;
  func_0x00780960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    alStack_50[0] = 0;
    uVar3 = 0;
    FUN_000b4d78(0,0xaed0b8,&PTR_PTR_00ac35e0);
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (lVar2,alStack_50,uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = alStack_50[0];
    if (alStack_50[0] != 0) {
      lVar2 = alStack_50[0];
      FUN_000b3bf8(alStack_50[0]);
      _swift_bridgeObjectRelease(lVar1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 000b4d78; end: 000b4db7;  */

void FUN_000b4d78(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 000b4db8; end: 000b4dcf;  */

bool FUN_000b4db8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000b4dd0; end: 000b4df7;  */

void FUN_000b4dd0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*unaff_x20);
  return;
}



/* Entry: 000b4df8; end: 000b4dfb;  */

void FUN_000b4df8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000b4dfc; end: 000b4e27;  */

void FUN_000b4dfc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000b4ef4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 000b4e28; end: 000b4e4f;  */

void FUN_000b4e28(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 000b4e50; end: 000b4ed3;  */

void FUN_000b4e50(void)

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



/* Entry: 000b4ed4; end: 000b4f07;  */

void FUN_000b4ed4(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 2U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 000b4f08; end: 000b4f47;  */

void FUN_000b4f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6610;
  _swift_getWitnessTable(&UNK_007d6610,&UNK_009a9b40);
  puRam0000000000aed0c8 = puVar1;
  return;
}



/* Entry: 000b4f48; end: 000b4f4b;  */

void FUN_000b4f48(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed0d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d66b0;
  _swift_getWitnessTable(&UNK_007d66b0,&UNK_009a9b60);
  puRam0000000000aed0d0 = puVar1;
  return;
}



/* Entry: 000b4f4c; end: 000b4f8b;  */

void FUN_000b4f4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed0d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d66b0;
  _swift_getWitnessTable(&UNK_007d66b0,&UNK_009a9b60);
  puRam0000000000aed0d0 = puVar1;
  return;
}



/* Entry: 000b4f8c; end: 000b4f8f;  */

void FUN_000b4f8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed0d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6750;
  _swift_getWitnessTable(&UNK_007d6750,&UNK_009a9b80);
  puRam0000000000aed0d8 = puVar1;
  return;
}



/* Entry: 000b4f90; end: 000b4fcf;  */

void FUN_000b4f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed0d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d6750;
  _swift_getWitnessTable(&UNK_007d6750,&UNK_009a9b80);
  puRam0000000000aed0d8 = puVar1;
  return;
}



/* Entry: 000b4fd0; end: 000b503b;  */

undefined1  [16] FUN_000b4fd0(void)

{
  return ZEXT816(0x9a9b40);
}



/* Entry: 000b503c; end: 000b504b; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices experimentLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b503c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00aed0e0));
  return;
}



/* Entry: 000b504c; end: 000b5097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b504c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00aed0e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000b5098; end: 000b50b7;  */

void FUN_000b5098(void)

{
  _objc_opt_self(&PTR_PTR_00acac50);
  return;
}



/* Entry: 000b50b8; end: 000b510f; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices initWithExperimentLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b50b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_00aed0e0) = param_3;
  lVar2 = param_1;
  FUN_000b5098();
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 000b5110; end: 000b516b; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices init] */

void FUN_000b5110(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCExperimentLogger.SCExperimentLoggerServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb513c);
  (*pcVar1)();
}



/* Entry: 000b516c; end: 000b517b; -[_TtC18SCExperimentLogger26SCExperimentLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b516c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00aed0e0));
  return;
}



/* Entry: 000b517c; end: 000b5377;  */

bool FUN_000b517c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar13 = lVar11;
    do {
      bVar1 = 2 < uVar10;
      puVar14 = (undefined8 *)(param_1 + 0x18 + lVar13 * 0x60);
      lVar13 = lVar13 + -1;
LAB_000b51fc:
      if (lVar11 <= lVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xb5370);
        (*pcVar6)();
      }
      if (2 < uVar10) {
        return bVar1;
      }
      uVar12 = puVar14[-0xb];
      cVar5 = *(char *)(puVar14 + -10);
      lVar15 = puVar14[-9];
      uVar3 = puVar14[-1];
      uVar4 = *puVar14;
      uVar16 = puVar14[-2];
      puVar7 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
      _objc_opt_self(PTR__OBJC_CLASS___NSProcessInfo_00ac2a20);
      _swift_bridgeObjectRetain(uVar16);
      func_0x00023304(uVar3,uVar4);
      func_0x0078aa40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x0077f100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar8;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                (puVar8,PTR___sSSN_0099b040);
      _objc_release(puVar8);
      uVar9 = 0;
      FUN_000b5378(0x6964656d61726150,0xed00007473655463,puVar7);
      _swift_bridgeObjectRelease(uVar16);
      _swift_bridgeObjectRelease(puVar7);
      FUN_00023358(uVar3,uVar4);
      lVar2 = 600;
      if ((uVar9 & 1) == 0) {
        lVar2 = 0x3c;
      }
      if (lVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xb5374);
        (*pcVar6)();
      }
      if (SBORROW8(param_4,lVar15)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xb5378);
        (*pcVar6)();
      }
      if (lVar2 < param_4 - lVar15) {
        return bVar1;
      }
      if (cVar5 != '\x01') {
        if (uVar12 == 10) {
          return bVar1;
        }
        if (uVar12 == 3) goto LAB_000b5324;
LAB_000b51e8:
        lVar13 = lVar13 + -1;
        puVar14 = puVar14 + -0xc;
        if (lVar13 == -1) break;
        goto LAB_000b51fc;
      }
      if ((uVar12 - 4 < 6) || (uVar12 < 3)) goto LAB_000b51e8;
      if (uVar12 != 3) {
        return bVar1;
      }
LAB_000b5324:
      uVar10 = uVar10 + 1;
    } while (lVar13 != 0);
  }
  return 2 < uVar10;
}



/* Entry: 000b5378; end: 000b53e3;  */

bool FUN_000b5378(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(param_3 + 0x28);
  lVar4 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    uVar2 = plVar3[-1];
    lVar1 = *plVar3;
    if (uVar2 == param_1 && lVar1 == param_2) break;
    plVar3 = plVar3 + 2;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,lVar1,param_1,param_2,0);
  } while ((uVar2 & 1) == 0);
  return lVar4 != 0;
}



/* Entry: 000b53e4; end: 000b53f3;  */

undefined1  [16] FUN_000b53e4(void)

{
  return ZEXT816(0x9a9d00);
}



/* Entry: 000b53f4; end: 000b5423;  */

undefined8 * FUN_000b53f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 000b5424; end: 000b542b;  */

void FUN_000b5424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 000b542c; end: 000b5497;  */

undefined8 * FUN_000b542c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Entry: 000b5498; end: 000b5533;  */

int FUN_000b5498(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000b5534; end: 000b558b;  */

void FUN_000b5534(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
  _objc_opt_self();
  func_0x0078aa40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078aa20();
  _objc_release(puVar2);
  if (-1 < (int)puVar3) {
    uRam0000000000b64940 = (ulong)puVar3 & 0xffffffff;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb558c);
  (*pcVar1)();
}



/* Entry: 000b558c; end: 000b55a7;  */

void FUN_000b558c(undefined8 param_1)

{
  FUN_000b55a8();
  uRam0000000000b64938 = param_1;
  return;
}



/* Entry: 000b55a8; end: 000b5693;  */

long FUN_000b55a8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  undefined8 uStack_2c8;
  long alStack_2c0 [81];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  _bzero(alStack_2c0,0x288);
  uStack_2c8 = 0x288;
  puVar3 = (undefined8 *)0xaed1c8;
  func_0x000115a8(0xaed1c8,&UNK_007d69a0);
  _swift_allocObject();
  puVar3[3] = 8;
  puVar3[2] = 4;
  puVar3[4] = 0xe00000001;
  *(undefined4 *)(puVar3 + 5) = 1;
  puVar4 = puVar3;
  _getpid();
  *(int *)((long)puVar3 + 0x2c) = (int)puVar4;
  _sysctl(puVar3 + 4,4,alStack_2c0,&uStack_2c8,0,0);
  _swift_release();
  if (alStack_2c0[0] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb5690);
    (*pcVar2)();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return alStack_2c0[0];
  }
  ___stack_chk_fail();
  uVar1 = *puVar3;
  lVar5 = puVar3[1];
  uVar6 = puVar3[2];
  *extraout_x8 = uVar1;
  extraout_x8[1] = lVar5;
  extraout_x8[2] = uVar6;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(lVar5,uVar6);
  return lVar5;
}



/* Entry: 000b5694; end: 000b56d7;  */

void FUN_000b5694(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar2,uVar3);
  return;
}



/* Entry: 000b56d8; end: 000b5e0f;  */

/* WARNING: Removing unreachable block (ram,0x000b5cb4) */
/* WARNING: Removing unreachable block (ram,0x000b5ce8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_000b56d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 **ppuVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  undefined1 *puVar20;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *unaff_x20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long alStack_140 [4];
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_120 = param_1;
  uStack_f8 = param_2;
  _swift_getObjectType();
  lVar3 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar23 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar25 = lVar23 - extraout_x12;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar24 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar24 + 0x40));
  puVar20 = (undefined1 *)(lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_118 = puVar20;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar19 = (long)puVar20 - extraout_x12_00;
  lVar5 = 0;
  lStack_110 = lVar19;
  __s10Foundation4DateVMa();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar21 + 0x40));
  lVar3 = _DAT_00aed148;
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVACycfC(lVar19);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar21 + 8))(lVar19,lVar5);
  *(ulong *)(unaff_x20 + lVar3) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  lVar3 = _DAT_00aed140;
  uVar6 = 0;
  FUN_000ba114();
  _swift_allocObject();
  FUN_000b8960();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  unaff_x20[_DAT_00aed118] = 2;
  unaff_x20[_DAT_00aed120] = 2;
  uStack_108 = param_3;
  FUN_0002f2dc(param_3,lVar23);
  pcVar22 = *(code **)(lVar24 + 0x30);
  lVar5 = lVar23;
  (*pcVar22)(lVar23,1,lVar4);
  if ((int)lVar5 == 1) {
    puVar7 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    _objc_opt_self();
    func_0x00781c40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x0077bca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar8;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar8,lVar4);
    _objc_release(puVar8);
    lVar5 = *(long *)(puVar7 + 0x10);
    if (lVar5 != 0) {
      (**(code **)(lVar24 + 0x10))
                (lVar25,puVar7 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff)),lVar4);
    }
    _swift_bridgeObjectRelease(puVar7);
    (**(code **)(lVar24 + 0x38))(lVar25,lVar5 == 0,1,lVar4);
    lVar5 = lVar23;
    (*pcVar22)(lVar23,1,lVar4);
    if ((int)lVar5 != 1) {
      FUN_000b88d0(lVar23,0xae6dd0,&UNK_007ce690);
    }
  }
  else {
    (**(code **)(lVar24 + 0x20))(lVar25,lVar23,lVar4);
    (**(code **)(lVar24 + 0x38))(lVar25,0,1,lVar4);
  }
  lVar5 = lVar25;
  (*pcVar22)(lVar25,1,lVar4);
  if ((int)lVar5 == 1) {
    ppuVar14 = (undefined1 **)0xae6dd0;
    FUN_000b88d0(uStack_108,0xae6dd0,&UNK_007ce690);
    _swift_bridgeObjectRelease(uStack_f8);
    FUN_000b88d0(lVar25,0xae6dd0,&UNK_007ce690);
    _swift_release(*(undefined8 *)(unaff_x20 + lVar3));
    _swift_deallocPartialClassInstance();
    puVar20 = (undefined1 *)0x0;
    goto LAB_000b5d98;
  }
  (**(code **)(lVar24 + 0x20))(lStack_110,lVar25,lVar4);
  uVar6 = uStack_f8;
  puVar20 = puStack_118;
  __s10Foundation3URLV22appendingPathComponentyACSSF(puStack_118,uStack_120,uStack_f8);
  _swift_bridgeObjectRelease(uVar6);
  lVar3 = lVar4;
  (**(code **)(lVar24 + 0x10))(unaff_x20 + _DAT_00aed138,puVar20);
  uVar15 = 0;
  puVar9 = puVar20;
  __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC();
  uStack_90 = 0;
  uStack_a8 = 0;
  puStack_b0 = (undefined1 *)0x0;
  uStack_98 = 0;
  lStack_a0 = 0;
  puVar10 = puVar9;
  uVar16 = uVar15;
  func_0x000c0460();
  uVar2 = (uint)(uVar15 >> 0x20);
  uVar18 = uVar2 >> 0x1e;
  puVar13 = puVar10;
  if (uVar2 >> 0x1e < 2) {
    if (uVar18 == 0) {
      auStack_f0[0] = SUB81(puVar9,0);
      auStack_f0[1] = (undefined1)((ulong)puVar9 >> 8);
      auStack_f0[2] = (undefined1)((ulong)puVar9 >> 0x10);
      auStack_f0[3] = (undefined1)((ulong)puVar9 >> 0x18);
      auStack_f0[4] = (undefined1)((ulong)puVar9 >> 0x20);
      auStack_f0[5] = (undefined1)((ulong)puVar9 >> 0x28);
      auStack_f0[6] = (undefined1)((ulong)puVar9 >> 0x30);
      auStack_f0[7] = (undefined1)((ulong)puVar9 >> 0x38);
      auStack_f0[8] = (undefined1)uVar15;
      auStack_f0[9] = (undefined1)(uVar15 >> 8);
      auStack_f0[10] = (undefined1)(uVar15 >> 0x10);
      auStack_f0[0xb] = (undefined1)(uVar15 >> 0x18);
      auStack_f0[0xc] = (undefined1)(uVar15 >> 0x20);
      auStack_f0[0xd] = (undefined1)(uVar15 >> 0x28);
      puVar17 = auStack_f0 + (uVar15 >> 0x30 & 0xff);
      FUN_000b8890();
      puVar11 = auStack_f0;
    }
    else {
      lVar5 = (long)(int)puVar9;
      puVar20 = (undefined1 *)(((long)puVar9 >> 0x20) - lVar5);
      if ((long)puVar9 >> 0x20 < lVar5) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0xb5e00);
        (*pcVar22)();
      }
      puVar12 = puVar10;
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar12 == (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar11 = (undefined1 *)0x0;
        puVar13 = puVar12;
        puVar17 = (undefined1 *)0x0;
      }
      else {
        puVar13 = puVar12;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar5,(long)puVar13)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0xb5e0c);
          (*pcVar22)();
        }
        puVar12 = puVar12 + (lVar5 - (long)puVar13);
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar1 = puVar13;
        if ((long)puVar20 <= (long)puVar13) {
          puVar1 = puVar20;
        }
        puVar11 = (undefined1 *)0x0;
        if (puVar12 != (undefined1 *)0x0) {
          puVar11 = puVar12;
        }
        puVar17 = (undefined1 *)0x0;
        if (puVar12 != (undefined1 *)0x0) {
          puVar17 = puVar1 + (long)puVar12;
        }
      }
LAB_000b5c78:
      puVar20 = puStack_118;
      FUN_000b8890();
    }
  }
  else {
    if (uVar18 == 2) {
      lVar5 = *(long *)(puVar9 + 0x10);
      lVar21 = *(long *)(puVar9 + 0x18);
      puVar11 = puVar10;
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      puVar13 = puVar11;
      if (puVar11 != (undefined1 *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar5,(long)puVar13)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0xb5e08);
          (*pcVar22)();
        }
        puVar11 = puVar11 + (lVar5 - (long)puVar13);
      }
      puVar20 = (undefined1 *)(lVar21 - lVar5);
      if (SBORROW8(lVar21,lVar5)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0xb5e04);
        (*pcVar22)();
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (puVar11 == (undefined1 *)0x0) {
        puVar17 = (undefined1 *)0x0;
      }
      else {
        puVar17 = puVar13;
        if ((long)puVar20 <= (long)puVar13) {
          puVar17 = puVar20;
        }
        puVar17 = puVar17 + (long)puVar11;
      }
      goto LAB_000b5c78;
    }
    FUN_000b8890();
    auStack_f0[0] = 0;
    auStack_f0[1] = 0;
    auStack_f0[2] = 0;
    auStack_f0[3] = 0;
    auStack_f0[4] = 0;
    auStack_f0[5] = 0;
    auStack_f0[6] = 0;
    auStack_f0[7] = 0;
    auStack_f0[8] = 0;
    auStack_f0[9] = 0;
    auStack_f0[10] = 0;
    auStack_f0[0xb] = 0;
    auStack_f0[0xc] = 0;
    auStack_f0[0xd] = 0;
    puVar11 = auStack_f0;
    puVar17 = auStack_f0;
  }
  FUN_0010bc6c(puVar11,puVar17,&puStack_b0,0,100,0,&UNK_009aa968,puVar13);
  FUN_00023358(puVar9,uVar15);
  FUN_000b88d0(&puStack_b0,0xaed1d8,&UNK_007d78b0);
  puStack_b0 = puVar10;
  uStack_a8 = uVar16;
  lStack_a0 = lVar3;
  func_0x000115a8(0xaed1d0,&UNK_007d69b0);
  _swift_allocObject();
  ppuVar14 = &puStack_b0;
  FUN_001d4864();
  pcVar22 = *(code **)(lVar24 + 8);
  (*pcVar22)(puVar20,lVar4);
  (*pcVar22)(lStack_110,lVar4);
  *(undefined1 ***)(unaff_x20 + _DAT_00aed110) = ppuVar14;
  puVar20 = &stack0xffffffffffffff20;
  _objc_msgSendSuper2(puVar20,PTR_s_init_00abbf70);
  FUN_000b88d0(uStack_108,0xae6dd0,&UNK_007ce690);
  unaff_x20 = puVar20;
LAB_000b5d98:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return puVar20;
  }
  ___stack_chk_fail(puVar20);
  *(undefined1 ***)(lVar19 + -0x20) = ppuVar14;
  *(undefined1 **)(lVar19 + -0x18) = unaff_x20;
  *(undefined1 **)(lVar19 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(lVar19 + -8) = 0xb5e10;
  _objc_retain();
  puVar9 = puVar20;
  func_0x000b5e44();
  _objc_release(puVar20);
  return (undefined1 *)(ulong)((uint)puVar9 & 1);
}



/* Entry: 000b5e10; end: 000b5e83; -[SCStartupJournalManager isInCrashLoop] */

uint FUN_000b5e10(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000b5e44();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 000b5e84; end: 000b5e93; -[SCStartupJournalManager setIsInCrashLoop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b5e84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00aed118) = param_3;
  return;
}



/* Entry: 000b5e94; end: 000b5f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000b5e94(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  double dVar3;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_001d496c(&uStack_58,FUN_000b5694,0,&UNK_009aa968);
  dVar3 = *(double *)(param_1 + _DAT_00aed148);
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5f8c);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar3) {
    if (dVar3 < 9.223372036854776e+18) {
      uVar2 = uStack_58;
      FUN_000b517c(uStack_58,uStack_50,uStack_48,(long)dVar3);
      _swift_bridgeObjectRelease(uStack_58);
      FUN_00023358(uStack_50,uStack_48);
      if ((uVar2 & 1) != 0) {
        FUN_000b8998(1);
      }
      return (uint)uVar2 & 1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb5f94);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb5f90);
  (*pcVar1)();
}



/* Entry: 000b5f94; end: 000b6013; -[SCStartupJournalManager lastLaunchHadCrash] */

uint FUN_000b5f94(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000b5fc8();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 000b6014; end: 000b6023; -[SCStartupJournalManager setLastLaunchHadCrash:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6014(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_00aed120) = param_3;
  return;
}



/* Entry: 000b6024; end: 000b6287;  */

/* WARNING: Removing unreachable block (ram,0x000b621c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6024(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x21;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar1 = (param_5 >> 1) - param_4;
  if (SBORROW8(param_5 >> 1,param_4)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xb6268);
    (*pcVar4)();
  }
  uVar2 = 0x28 - lVar1;
  if (SBORROW8(0x28,lVar1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xb626c);
    (*pcVar4)();
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xb6270);
    (*pcVar4)();
  }
  puVar10 = (undefined *)*param_1;
  uVar9 = *(ulong *)(puVar10 + 0x10);
  lStack_70 = 0;
  if (uVar2 <= uVar9) {
    lStack_70 = uVar9 - uVar2;
  }
  puStack_78 = puVar10 + 0x20;
  uStack_68 = uVar9 << 1 | 1;
  puStack_80 = puVar10;
  _swift_bridgeObjectRetain(puVar10);
  _swift_unknownObjectRetain();
  _swift_unknownObjectRetain(param_2);
  FUN_000b750c();
  uVar2 = uStack_68;
  lVar1 = lStack_70;
  puVar3 = puStack_78;
  puVar8 = puStack_80;
  puVar7 = puVar8;
  if ((uStack_68 & 1) != 0) {
    uVar5 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar6 = puVar8;
    _swift_unknownObjectRetain_n(puVar8,3);
    _swift_dynamicCastClass();
    if (puVar6 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar8);
      puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
    }
    lVar11 = *(long *)(puVar6 + 0x10);
    _swift_release();
    uVar9 = uVar2 >> 1;
    if (SBORROW8(uVar9,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb6274);
      (*pcVar4)();
    }
    if (lVar11 == uVar9 - lVar1) {
      _swift_dynamicCastClass(puVar8,uVar5);
      _swift_unknownObjectRelease_n(puVar8,2);
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar8);
        puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
      }
      puVar8 = puVar10;
      _swift_bridgeObjectRelease(puVar10);
      goto LAB_000b6198;
    }
    _swift_unknownObjectRelease_n(puVar8,2);
  }
  FUN_000b72a0(puVar8,puVar3,lVar1,uVar2);
  _swift_bridgeObjectRelease(puVar10);
  _swift_unknownObjectRelease(puVar8);
LAB_000b6198:
  *param_1 = puVar7;
  lStack_70 = param_1[2];
  puStack_78 = (undefined *)param_1[1];
  puStack_80 = puVar7;
  FUN_000b8890();
  FUN_0010b7b8(&uStack_90,0,0,&UNK_009aa968,PTR___s10Foundation4DataVN_0099c3c0,puVar8,
               &PTR_DAT_009ae8f0);
  if (unaff_x21 == 0) {
    __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
              (param_6 + _DAT_00aed138,0,uStack_90,uStack_88);
    FUN_00023358(uStack_90,uStack_88);
  }
  _swift_unknownObjectRelease(puVar10);
  return;
}



/* Entry: 000b6288; end: 000b6377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6288(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0xaed198;
  func_0x000115a8(0xaed198,&UNK_007d6988);
  _swift_allocObject();
  uVar3 = param_1[5];
  uVar2 = param_1[4];
  uVar4 = param_1[6];
  uVar6 = param_1[9];
  uVar5 = param_1[8];
  uVar8 = param_1[0xb];
  uVar7 = param_1[10];
  *(undefined8 *)(lVar1 + 0x58) = param_1[7];
  *(undefined8 *)(lVar1 + 0x50) = uVar4;
  *(undefined8 *)(lVar1 + 0x68) = uVar6;
  *(undefined8 *)(lVar1 + 0x60) = uVar5;
  *(undefined8 *)(lVar1 + 0x78) = uVar8;
  *(undefined8 *)(lVar1 + 0x70) = uVar7;
  uVar5 = param_1[1];
  uVar4 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  lStack_68 = lVar1 + 0x20;
  *(undefined8 *)(lVar1 + 0x38) = uVar7;
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  uStack_58 = 3;
  uStack_60 = 0;
  lStack_70 = lVar1;
  FUN_000b8854(param_1,auStack_e0);
  _swift_retain(lVar1);
  FUN_001d496c(FUN_000b8834,auStack_80,PTR___sytN_0099b8e0 + 8);
  _swift_release_n(lVar1,2);
  return;
}



/* Entry: 000b6378; end: 000b6433;  */

void FUN_000b6378(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar1);
  FUN_000b8724(0);
  _objc_allocWithZone();
  uVar2 = 0xd000000000000013;
  FUN_000b56d8(0xd000000000000013,0x80000000008b86a0,&stack0xffffffffffffffd0 + -extraout_x8);
  uRam0000000000aed130 = uVar2;
  return;
}



/* Entry: 000b6434; end: 000b6473; +[SCStartupJournalManager shared] */

void FUN_000b6434(void)

{
  if (lRam0000000000aed128 != -1) {
    _swift_once(0xaed128,FUN_000b6378);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)(uRam0000000000aed130);
  return;
}



/* Entry: 000b6474; end: 000b64d3; -[SCStartupJournalManager init] */

void FUN_000b6474(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StartupJournal.StartupJournalManager",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb64a0);
  (*pcVar1)();
}



/* Entry: 000b64d4; end: 000b652f; -[SCStartupJournalManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b64d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_release(*(undefined8 *)(param_1 + _DAT_00aed110));
  lVar1 = _DAT_00aed138;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00aed140));
  return;
}



/* Entry: 000b6530; end: 000b6537; -[SCStartupJournalManager signalProcessCreated] */

/* WARNING: Removing unreachable block (ram,0x000b68f0) */

void FUN_000b6530(undefined8 param_1)

{
  undefined1 auStack_90 [96];
  
  _objc_retain();
  FUN_000b8528(auStack_90,2,1);
  FUN_000b6288(auStack_90);
  _objc_release(param_1);
  FUN_000b86a0(auStack_90);
  return;
}



/* Entry: 000b6538; end: 000b653f; -[SCStartupJournalManager signalAppDidFinishLaunching] */

/* WARNING: Removing unreachable block (ram,0x000b68f0) */

void FUN_000b6538(undefined8 param_1)

{
  undefined1 auStack_90 [96];
  
  _objc_retain();
  FUN_000b8528(auStack_90,3,1);
  FUN_000b6288(auStack_90);
  _objc_release(param_1);
  FUN_000b86a0(auStack_90);
  return;
}



/* Entry: 000b6540; end: 000b67ab;  */

void FUN_000b6540(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000b87f4(0,0xae9798,&PTR__OBJC_CLASS___OS_dispatch_queue_00ac28f8);
  (**(code **)(lVar10 + 0x68))
            (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_0099bc98,lVar3)
  ;
  lVar2 = lVar12;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar12);
  (**(code **)(lVar10 + 8))(lVar12,lVar3);
  puVar4 = &UNK_009a9da0;
  _swift_allocObject(&UNK_009a9da0,0x18,7);
  _swift_unknownObjectUnownedInit(puVar4 + 0x10);
  pcStack_70 = FUN_000b86f8;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  uStack_80 = 0x563e4;
  puStack_78 = &UNK_009a9db8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  puVar6 = puVar4;
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  puStack_98 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_00088e34();
  uVar7 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar8 = uVar7;
  func_0x00088e78();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar9,&puStack_98,uVar7,uVar8,lVar1,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,puVar9,ppuVar5);
  __Block_release(ppuVar5);
  _objc_release(lVar2);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar1);
  (**(code **)(lVar13 + 8))(lVar11,lStack_a8);
  puVar6 = puStack_68;
  _swift_release(puVar4);
  _swift_release(puVar6);
  return;
}



/* Entry: 000b67ac; end: 000b686f;  */

/* WARNING: Removing unreachable block (ram,0x000b67f4) */
/* WARNING: Removing unreachable block (ram,0x000b6854) */

void FUN_000b67ac(long param_1)

{
  long lVar1;
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [96];
  
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectUnownedLoadStrong(lVar1);
  FUN_000b8528(auStack_f0,4,1);
  FUN_000b6288(auStack_f0);
  FUN_000b86a0(auStack_f0);
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectUnownedLoadStrong(param_1);
  FUN_000b8528(auStack_90,10,1);
  FUN_000b6288(auStack_90);
  _objc_release(param_1);
  FUN_000b86a0(auStack_90);
  return;
}



/* Entry: 000b6870; end: 000b6897; -[SCStartupJournalManager signalAppDidStabilizeUI] */

void FUN_000b6870(undefined8 param_1)

{
  _objc_retain();
  FUN_000b6540();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000b6898; end: 000b689f; -[SCStartupJournalManager signalAppWillTerminate] */

/* WARNING: Removing unreachable block (ram,0x000b68f0) */

void FUN_000b6898(undefined8 param_1)

{
  undefined1 auStack_90 [96];
  
  _objc_retain();
  FUN_000b8528(auStack_90,7,1);
  FUN_000b6288(auStack_90);
  _objc_release(param_1);
  FUN_000b86a0(auStack_90);
  return;
}



/* Entry: 000b68a0; end: 000b690b;  */

/* WARNING: Removing unreachable block (ram,0x000b68f0) */

void FUN_000b68a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_90 [96];
  
  _objc_retain();
  FUN_000b8528(auStack_90,param_3,1);
  FUN_000b6288(auStack_90);
  _objc_release(param_1);
  FUN_000b86a0(auStack_90);
  return;
}



/* Entry: 000b690c; end: 000b693f; -[SCStartupJournalManager didAttemptRecovery] */

uint FUN_000b690c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000b6940();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 000b6940; end: 000b69db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000b6940(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_001d496c(&lStack_48,FUN_000b5694,0,&UNK_009aa968);
  FUN_00023358(uStack_40,uStack_38);
  lVar3 = *(long *)(lStack_48 + 0x10);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    plVar2 = (long *)(lStack_48 + 0x20);
    do {
      lVar3 = lVar3 + -1;
      bVar1 = *plVar2 == 5;
      plVar2 = plVar2 + 0xc;
    } while (!bVar1 && lVar3 != 0);
  }
  _swift_bridgeObjectRelease(lStack_48);
  return bVar1;
}



/* Entry: 000b69dc; end: 000b6a0f; -[SCStartupJournalManager objcJournal] */

void FUN_000b69dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000b6a10();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 000b6a10; end: 000b6e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000b6a10(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_001d496c(&puStack_78,FUN_000b5694,0,&UNK_009aa968);
  puVar4 = puStack_78;
  uVar10 = *(ulong *)(puStack_78 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar10 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_000b6f8c(0,uVar10,0);
    uVar12 = 0;
    puVar7 = puVar4 + 0x40;
    do {
      puVar9 = puStack_78;
      if (*(ulong *)(puVar4 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xb6c9c);
        (*pcVar5)();
      }
      uVar1 = *(undefined8 *)(puVar7 + 0x28);
      uVar3 = *(undefined8 *)(puVar7 + 0x30);
      uVar11 = *(undefined8 *)(puVar7 + 0x38);
      puVar6 = PTR_PTR_00ac3718;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar1);
      func_0x00023304(uVar3,uVar11);
      func_0x007849a0();
      func_0x0078ddc0();
      func_0x0078dda0(puVar6);
      func_0x0078f860(puVar6);
      func_0x0078f880(puVar6);
      func_0x0078e9c0(puVar6);
      func_0x0078d080(puVar6);
      func_0x00790fc0(puVar6);
      _swift_bridgeObjectRelease(uVar1);
      FUN_00023358(uVar3,uVar11);
      uVar2 = *(ulong *)(puVar9 + 0x10);
      puStack_78 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        FUN_000b6f8c(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
      *(undefined **)(puStack_78 + uVar2 * 8 + 0x20) = puVar6;
      puVar7 = puVar7 + 0x60;
      puVar9 = puStack_78;
    } while (uVar10 != uVar12);
  }
  puVar7 = PTR_PTR_00ac2908;
  _objc_allocWithZone();
  func_0x007849a0();
  puVar6 = puVar7;
  func_0x00782a00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar8 = puVar9;
    func_0x000b6ca0(puVar9);
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = puVar8;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar8,PTR___sypN_0099b8d8 + 8);
    _swift_bridgeObjectRelease(puVar8);
    func_0x0077e760(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar9);
    FUN_00023358(uStack_70,uStack_68);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0xb6ca0);
  (*pcVar5)();
}



/* Entry: 000b6e94; end: 000b6eff;  */

void FUN_000b6e94(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000b87f4(0,0xaed188,&PTR_PTR_00ac3718);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0xae61a0;
      plVar5 = (long *)&UNK_007cfbd0;
      goto SUB_000115a8;
    }
  }
  puVar2 = (ulong *)0xaed190;
  plVar5 = (long *)&UNK_007d6978;
SUB_000115a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    _swift_getTypeByMangledNameInContext(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 000b6f00; end: 000b6f8b;  */

undefined * FUN_000b6f00(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (param_2 != 0) {
    puVar1 = (undefined *)0xaed198;
    func_0x000115a8(0xaed198,&UNK_007d6988);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x60) * 2;
  }
  return puVar1;
}



/* Entry: 000b6f8c; end: 000b6fa7;  */

void FUN_000b6f8c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_000b6fa8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 000b6fa8; end: 000b70db;  */

undefined * FUN_000b6fa8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb70dc);
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
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_000b6e94();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000b87f4(0,0xaed188,&PTR_PTR_00ac3718);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 000b70dc; end: 000b729f;  */

ulong FUN_000b70dc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xb71c0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xb71c4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_00ac3718;
    _objc_opt_self(PTR_PTR_00ac3718);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_00ac3718;
    _objc_opt_self(PTR_PTR_00ac3718);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000b87f4(0,0xaed188,&PTR_PTR_00ac3718);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xb72a0);
  (*pcVar2)();
}



/* Entry: 000b72a0; end: 000b7383;  */

undefined * FUN_000b72a0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb7384);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = (undefined *)0xaed198;
      func_0x000115a8(0xaed198,&UNK_007d6988);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x60) * 2;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xb7380);
      (*pcVar2)();
    }
    _swift_arrayInitWithCopy(puVar3 + 0x20,param_2 + param_3 * 0x60,lVar1,&UNK_009aa8c8);
  }
  return puVar3;
}



/* Entry: 000b7384; end: 000b750b;  */

void FUN_000b7384(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar6 = (ulong)unaff_x20[3] >> 1;
  if ((unaff_x20[3] & 1) != 0) {
    puVar4 = (undefined *)*unaff_x20;
    puVar3 = puVar4;
    _swift_isUniquelyReferencedNonObjC_nonNull();
    *unaff_x20 = puVar4;
    if ((int)puVar3 != 0) {
      lVar8 = unaff_x20[2];
      lVar7 = uVar6 - lVar8;
      if (SBORROW8(uVar6,lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xb7508);
        (*pcVar1)();
      }
      lVar10 = unaff_x20[1];
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar3 = puVar4;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar3 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar4);
        puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
      }
      lVar5 = *(long *)(puVar3 + 0x10);
      if ((undefined *)(lVar10 + lVar8 * 0x60 + lVar7 * 0x60) == puVar3 + lVar5 * 0x60 + 0x20) {
        uVar9 = *(ulong *)(puVar3 + 0x18);
        _swift_release();
        lVar5 = (uVar9 >> 1) - lVar5;
        bVar2 = SCARRY8(lVar7,lVar5);
        lVar7 = lVar7 + lVar5;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xb750c);
          (*pcVar1)();
        }
      }
      else {
        _swift_release();
      }
      if (param_1 <= lVar7) goto LAB_000b74d0;
    }
  }
  lVar7 = unaff_x20[2];
  puVar3 = (undefined *)(uVar6 - lVar7);
  if (SBORROW8(uVar6,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb74f0);
    (*pcVar1)();
  }
  puVar4 = puVar3;
  FUN_000b6f00(puVar3,param_1);
  if ((long)uVar6 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb74f4);
    (*pcVar1)();
  }
  _swift_arrayInitWithCopy(puVar4 + 0x20,unaff_x20[1] + lVar7 * 0x60,puVar3,&UNK_009aa8c8);
  if (SBORROW8(0,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb74f8);
    (*pcVar1)();
  }
  lVar8 = lVar7 + *(long *)(puVar4 + 0x10);
  if (SCARRY8(lVar7,*(long *)(puVar4 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb74fc);
    (*pcVar1)();
  }
  if (lVar8 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb7500);
    (*pcVar1)();
  }
  if (lVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb7504);
    (*pcVar1)();
  }
  _swift_unknownObjectRelease(*unaff_x20);
  unaff_x20[1] = puVar4 + 0x20 + lVar7 * -0x60;
  unaff_x20[2] = lVar7;
  unaff_x20[3] = lVar8 * 2 | 1;
LAB_000b74d0:
  *unaff_x20 = puVar4;
  return;
}



/* Entry: 000b750c; end: 000b7a47;  */

void FUN_000b750c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar12 = param_4 >> 1;
  lVar8 = uVar12 - param_3;
  if (SBORROW8(uVar12,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb775c);
    (*pcVar2)();
  }
  lVar5 = unaff_x20[2];
  uVar6 = (ulong)unaff_x20[3] >> 1;
  lVar4 = uVar6 - lVar5;
  if (SBORROW8(uVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb7760);
    (*pcVar2)();
  }
  lVar7 = lVar4;
  if ((unaff_x20[3] & 1) != 0) {
    puVar10 = (undefined *)*unaff_x20;
    lVar1 = unaff_x20[1];
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = puVar10;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar10);
      puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    }
    lVar9 = *(long *)(puVar3 + 0x10);
    if ((undefined *)(lVar1 + lVar5 * 0x60 + lVar4 * 0x60) == puVar3 + lVar9 * 0x60 + 0x20) {
      uVar6 = *(ulong *)(puVar3 + 0x18);
      _swift_release();
      lVar9 = (uVar6 >> 1) - lVar9;
      lVar7 = lVar4 + lVar9;
      if (SCARRY8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb777c);
        (*pcVar2)();
      }
    }
    else {
      _swift_release();
    }
  }
  lVar5 = lVar4 + lVar8;
  if (SCARRY8(lVar4,lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb7764);
    (*pcVar2)();
  }
  lVar4 = lVar5;
  if (lVar7 < lVar5) {
    if (lVar7 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xb7774);
      (*pcVar2)();
    }
    lVar4 = lVar7 * 2;
    if (lVar4 - lVar5 == 0 || lVar4 < lVar5) {
      lVar4 = lVar5;
    }
  }
  FUN_000b7384(lVar4);
  lVar5 = unaff_x20[2];
  uVar6 = (ulong)unaff_x20[3] >> 1;
  lVar4 = uVar6 - lVar5;
  if (SBORROW8(uVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xb7768);
    (*pcVar2)();
  }
  puVar10 = (undefined *)(unaff_x20[1] + lVar5 * 0x60 + lVar4 * 0x60);
  lVar5 = lVar4;
  if ((unaff_x20[3] & 1) != 0) {
    puVar11 = (undefined *)*unaff_x20;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = puVar11;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar11);
      puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    }
    lVar7 = *(long *)(puVar3 + 0x10);
    if (puVar10 == puVar3 + lVar7 * 0x60 + 0x20) {
      uVar6 = *(ulong *)(puVar3 + 0x18);
      _swift_release();
      lVar7 = (uVar6 >> 1) - lVar7;
      lVar5 = lVar4 + lVar7;
      if (SCARRY8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb7780);
        (*pcVar2)();
      }
    }
    else {
      _swift_release();
    }
  }
  if (!SBORROW8(lVar5,lVar4)) {
    if (param_3 == uVar12) {
      if (0 < lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb7770);
        (*pcVar2)();
      }
      lVar8 = 0;
      uVar12 = param_3;
    }
    else {
      if (lVar5 - lVar4 < lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xb7778);
        (*pcVar2)();
      }
      _swift_arrayInitWithCopy(puVar10,param_2 + param_3 * 0x60,lVar8,&UNK_009aa8c8);
      if (0 < lVar8) {
        if (SCARRY8(lVar4,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0xb7784);
          (*pcVar2)();
        }
        FUN_000b7a48(lVar4 + lVar8);
      }
    }
    if (lVar8 != lVar5 - lVar4) {
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_0099bb78)();
      return;
    }
    uStack_88 = param_1;
    lStack_80 = param_2;
    uStack_78 = param_3;
    uStack_70 = param_4;
    uStack_68 = uVar12;
    FUN_000b7afc(&uStack_88);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0xb776c);
  (*pcVar2)();
}



/* Entry: 000b7a48; end: 000b7afb;  */

void FUN_000b7a48(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  ulong uVar7;
  
  uVar1 = unaff_x20[3];
  uVar7 = uVar1 >> 1;
  lVar2 = uVar7 - unaff_x20[2];
  if (SBORROW8(uVar7,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xb7aec);
    (*pcVar4)();
  }
  lVar3 = param_1 - lVar2;
  if (SBORROW8(param_1,lVar2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xb7af0);
    (*pcVar4)();
  }
  if (lVar3 != 0) {
    puVar6 = (undefined *)*unaff_x20;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar5 = puVar6;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar5 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar6);
      puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
    }
    if (SCARRY8(*(long *)(puVar5 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb7af4);
      (*pcVar4)();
    }
    *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + lVar3;
    _swift_release();
    if (SCARRY8(uVar7,lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb7af8);
      (*pcVar4)();
    }
    if ((long)(uVar7 + lVar3) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xb7afc);
      (*pcVar4)();
    }
    unaff_x20[3] = uVar1 & 1 | (uVar7 + lVar3) * 2;
  }
  return;
}



/* Entry: 000b7afc; end: 000b7f43;  */

void FUN_000b7afc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x20;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_2b0 [96];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
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
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_e8;
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
  
  lVar11 = ((ulong)unaff_x20[3] >> 1) - unaff_x20[2];
  if (SBORROW8((ulong)unaff_x20[3] >> 1,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f40);
    (*pcVar3)();
  }
  uVar14 = *(ulong *)(param_1 + 0x20);
  uVar17 = *(ulong *)(param_1 + 0x18) >> 1;
  if (uVar14 == uVar17) {
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    if ((long)uVar14 < lVar8 || (long)uVar17 <= (long)uVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f44);
      (*pcVar3)();
    }
    lVar12 = *(long *)(param_1 + 8);
    puVar9 = (undefined8 *)(lVar12 + uVar14 * 0x60);
    uStack_128 = puVar9[1];
    uStack_130 = *puVar9;
    uStack_118 = puVar9[3];
    uStack_120 = puVar9[2];
    uStack_108 = puVar9[5];
    uStack_110 = puVar9[4];
    uStack_f8 = puVar9[7];
    uStack_100 = puVar9[6];
    lStack_e8 = puVar9[9];
    uStack_f0 = puVar9[8];
    uStack_d8 = puVar9[0xb];
    uStack_e0 = puVar9[10];
    lStack_88 = puVar9[9];
    uStack_90 = puVar9[8];
    uStack_78 = puVar9[0xb];
    uStack_80 = puVar9[10];
    uStack_a8 = puVar9[5];
    uStack_b0 = puVar9[4];
    uStack_98 = puVar9[7];
    uStack_a0 = puVar9[6];
    uStack_c8 = puVar9[1];
    uStack_d0 = *puVar9;
    uStack_b8 = puVar9[3];
    uStack_c0 = puVar9[2];
    FUN_000b8854(&uStack_130,&uStack_190);
    if (lStack_88 != 0) {
      uVar14 = uVar14 + 1;
      do {
        lVar7 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f24);
          (*pcVar3)();
        }
        lVar4 = lVar11;
        FUN_000b7f44(lVar11,lVar7,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
        lVar5 = lVar4;
        lStack_198 = lVar4;
        FUN_000b80fc();
        func_0x000b7784(&lStack_198,lVar11,0,lVar5,lVar7);
        _swift_release(lVar7);
        _swift_release(lVar4);
        lVar7 = unaff_x20[2];
        uVar2 = unaff_x20[3];
        uVar10 = uVar2 >> 1;
        lVar4 = uVar10 - lVar7;
        if (SBORROW8(uVar10,lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f28);
          (*pcVar3)();
        }
        puVar1 = (undefined *)*unaff_x20;
        lVar5 = unaff_x20[1];
        lVar16 = lVar4;
        if ((uVar2 & 1) != 0) {
          __ss28__ContiguousArrayStorageBaseCMa(0);
          puVar6 = puVar1;
          _swift_unknownObjectRetain();
          _swift_dynamicCastClass();
          if (puVar6 == (undefined *)0x0) {
            _swift_unknownObjectRelease(puVar1);
            puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
          }
          lVar13 = *(long *)(puVar6 + 0x10);
          if ((undefined *)(lVar5 + lVar7 * 0x60 + lVar4 * 0x60) == puVar6 + lVar13 * 0x60 + 0x20) {
            uVar15 = *(ulong *)(puVar6 + 0x18);
            _swift_release();
            lVar13 = (uVar15 >> 1) - lVar13;
            lVar16 = lVar4 + lVar13;
            if (SCARRY8(lVar4,lVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f3c);
              (*pcVar3)();
            }
          }
          else {
            _swift_release();
          }
        }
        uVar15 = uVar14;
        if ((lStack_88 != 0) && (lVar11 < lVar16)) {
          puVar9 = (undefined8 *)(lVar12 + uVar14 * 0x60);
          puVar18 = (undefined8 *)(lVar5 + lVar7 * 0x60 + lVar11 * 0x60 + 0x50);
          do {
            lVar7 = lStack_88;
            lVar11 = lVar11 + 1;
            uStack_168 = uStack_a8;
            uStack_170 = uStack_b0;
            uStack_158 = uStack_98;
            uStack_160 = uStack_a0;
            lStack_148 = lStack_88;
            uStack_150 = uStack_90;
            uStack_138 = uStack_78;
            uStack_140 = uStack_80;
            uStack_188 = uStack_c8;
            uStack_190 = uStack_d0;
            uStack_178 = uStack_b8;
            uStack_180 = uStack_c0;
            uStack_108 = uStack_a8;
            uStack_110 = uStack_b0;
            uStack_f8 = uStack_98;
            uStack_100 = uStack_a0;
            uStack_128 = uStack_c8;
            uStack_130 = uStack_d0;
            uStack_118 = uStack_b8;
            uStack_120 = uStack_c0;
            uStack_f0 = uStack_90;
            lStack_e8 = lStack_88;
            uStack_d8 = uStack_78;
            uStack_e0 = uStack_80;
            uStack_1f0 = uStack_80;
            uStack_1e8 = uStack_78;
            uStack_1e0 = uStack_d0;
            uStack_1d8 = uStack_c8;
            uStack_1d0 = uStack_c0;
            uStack_1c8 = uStack_b8;
            uStack_1c0 = uStack_b0;
            uStack_1b8 = uStack_a8;
            uStack_1b0 = uStack_a0;
            uStack_1a8 = uStack_98;
            uStack_1a0 = uStack_90;
            FUN_000b8854(&uStack_130,&uStack_250);
            FUN_000b88d0(&uStack_190,0xaed1b0,&UNK_007d6998);
            puVar18[-5] = uStack_1b8;
            puVar18[-6] = uStack_1c0;
            puVar18[-3] = uStack_1a8;
            puVar18[-4] = uStack_1b0;
            puVar18[-9] = uStack_1d8;
            puVar18[-10] = uStack_1e0;
            puVar18[-7] = uStack_1c8;
            puVar18[-8] = uStack_1d0;
            puVar18[-2] = uStack_1a0;
            puVar18[-1] = lVar7;
            puVar18[1] = uStack_1e8;
            *puVar18 = uStack_1f0;
            if (uVar17 == uVar15) {
              lStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              lVar7 = lVar11 - lVar4;
              uVar14 = uVar17;
              if (!SBORROW8(lVar11,lVar4)) goto LAB_000b7e5c;
              goto LAB_000b7f28;
            }
            if (((long)uVar14 < lVar8) || ((long)uVar17 <= (long)uVar15)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f20);
              (*pcVar3)();
            }
            uStack_248 = puVar9[1];
            uStack_250 = *puVar9;
            uStack_238 = puVar9[3];
            uStack_240 = puVar9[2];
            uStack_228 = puVar9[5];
            uStack_230 = puVar9[4];
            uStack_218 = puVar9[7];
            uStack_220 = puVar9[6];
            uStack_208 = puVar9[9];
            uStack_210 = puVar9[8];
            uStack_1f8 = puVar9[0xb];
            uStack_200 = puVar9[10];
            lStack_88 = puVar9[9];
            uStack_90 = puVar9[8];
            uStack_78 = puVar9[0xb];
            uStack_80 = puVar9[10];
            uStack_a8 = puVar9[5];
            uStack_b0 = puVar9[4];
            uStack_98 = puVar9[7];
            uStack_a0 = puVar9[6];
            uStack_c8 = puVar9[1];
            uStack_d0 = *puVar9;
            uStack_b8 = puVar9[3];
            uStack_c0 = puVar9[2];
            uVar15 = uVar15 + 1;
            FUN_000b8854(&uStack_250,auStack_2b0);
          } while ((lStack_88 != 0) &&
                  (puVar9 = puVar9 + 0xc, puVar18 = puVar18 + 0xc, lVar11 < lVar16));
        }
        lVar7 = lVar11 - lVar4;
        uVar14 = uVar15;
        if (SBORROW8(lVar11,lVar4)) {
LAB_000b7f28:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f2c);
          uStack_1f0 = uStack_80;
          uStack_1e8 = uStack_78;
          uStack_1e0 = uStack_d0;
          uStack_1d8 = uStack_c8;
          uStack_1d0 = uStack_c0;
          uStack_1c8 = uStack_b8;
          uStack_1c0 = uStack_b0;
          uStack_1b8 = uStack_a8;
          uStack_1b0 = uStack_a0;
          uStack_1a8 = uStack_98;
          uStack_1a0 = uStack_90;
          (*pcVar3)();
        }
LAB_000b7e5c:
        lVar4 = lStack_88;
        uStack_1f0 = uStack_80;
        uStack_1e8 = uStack_78;
        uStack_1e0 = uStack_d0;
        uStack_1d8 = uStack_c8;
        uStack_1d0 = uStack_c0;
        uStack_1c8 = uStack_b8;
        uStack_1c0 = uStack_b0;
        uStack_1b8 = uStack_a8;
        uStack_1b0 = uStack_a0;
        uStack_1a8 = uStack_98;
        uStack_1a0 = uStack_90;
        if (lVar7 != 0) {
          __ss28__ContiguousArrayStorageBaseCMa(0);
          puVar6 = puVar1;
          _swift_unknownObjectRetain();
          _swift_dynamicCastClass();
          if (puVar6 == (undefined *)0x0) {
            _swift_unknownObjectRelease(puVar1);
            puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
          }
          if (SCARRY8(*(long *)(puVar6 + 0x10),lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f30);
            (*pcVar3)();
          }
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + lVar7;
          _swift_release();
          if (SCARRY8(uVar10,lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f34);
            (*pcVar3)();
          }
          if ((long)(uVar10 + lVar7) < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xb7f38);
            (*pcVar3)();
          }
          unaff_x20[3] = uVar2 & 1 | (uVar10 + lVar7) * 2;
        }
      } while (lVar4 != 0);
    }
  }
  FUN_000b88d0(param_1,0xaed1a8,&UNK_007d6990);
  FUN_000b88d0(&uStack_d0,0xaed1b0,&UNK_007d6998);
  return;
}



/* Entry: 000b7f44; end: 000b80fb;  */

undefined *
FUN_000b7f44(long param_1,long param_2,undefined *param_3,long param_4,long param_5,ulong param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (param_6 >> 1) - param_5;
  if (SBORROW8(param_6 >> 1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb80e0);
    (*pcVar1)();
  }
  if ((param_6 & 1) == 0) {
    if (param_2 <= lVar7) goto LAB_000b80b8;
  }
  else {
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = param_3;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_3);
      puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    }
    lVar8 = *(long *)(puVar3 + 0x10);
    puVar5 = (undefined *)(param_4 + param_5 * 0x60 + lVar7 * 0x60);
    if (puVar5 == puVar3 + lVar8 * 0x60 + 0x20) {
      uVar4 = *(ulong *)(puVar3 + 0x18);
      _swift_release();
      lVar8 = (uVar4 >> 1) - lVar8;
      lVar6 = lVar7 + lVar8;
      if (SCARRY8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xb80f4);
        (*pcVar1)();
      }
    }
    else {
      _swift_release();
      lVar6 = lVar7;
    }
    puVar3 = param_3;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (param_2 <= lVar6) {
      if (puVar3 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_3);
        puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
      }
      lVar8 = *(long *)(puVar3 + 0x10);
      if (puVar5 == puVar3 + lVar8 * 0x60 + 0x20) {
        uVar4 = *(ulong *)(puVar3 + 0x18);
        _swift_release();
        lVar8 = (uVar4 >> 1) - lVar8;
        bVar2 = SCARRY8(lVar7,lVar8);
        lVar7 = lVar7 + lVar8;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0xb80fc);
          (*pcVar1)();
        }
      }
      else {
        _swift_release();
      }
      goto LAB_000b80b8;
    }
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_3);
      puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    }
    lVar8 = *(long *)(puVar3 + 0x10);
    if (puVar5 == puVar3 + lVar8 * 0x60 + 0x20) {
      uVar4 = *(ulong *)(puVar3 + 0x18);
      _swift_release();
      lVar8 = (uVar4 >> 1) - lVar8;
      bVar2 = SCARRY8(lVar7,lVar8);
      lVar7 = lVar7 + lVar8;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0xb80f8);
        (*pcVar1)();
      }
    }
    else {
      _swift_release();
    }
  }
  if (lVar7 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb80f0);
    (*pcVar1)();
  }
  lVar7 = lVar7 << 1;
LAB_000b80b8:
  if (lVar7 <= param_2) {
    lVar7 = param_2;
  }
  if (lVar7 <= param_1) {
    lVar7 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar7 != 0) {
    puVar3 = (undefined *)0xaed198;
    func_0x000115a8(0xaed198,&UNK_007d6988);
    _swift_allocObject();
    puVar5 = puVar3;
    _malloc_size();
    *(long *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = ((long)(puVar5 + -0x20) / 0x60) * 2;
  }
  return puVar3;
}



/* Entry: 000b80fc; end: 000b810f;  */

undefined1  [16] FUN_000b80fc(void)

{
  return ZEXT816(0xb810c);
}



/* Entry: 000b8110; end: 000b8287;  */

void FUN_000b8110(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  
  iVar6 = (int)*unaff_x20;
  _swift_isUniquelyReferencedNonObjC_nonNull();
  if (iVar6 != 0) {
    lVar1 = unaff_x20[2];
    uVar9 = (ulong)unaff_x20[3] >> 1;
    lVar4 = uVar9 - lVar1;
    if (SBORROW8(uVar9,lVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0xb8264);
      (*pcVar5)();
    }
    puVar2 = (undefined *)*unaff_x20;
    lVar3 = unaff_x20[1];
    lVar8 = lVar4;
    if ((unaff_x20[3] & 1) != 0) {
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar7 = puVar2;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar2);
        puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
      }
      lVar10 = *(long *)(puVar7 + 0x10);
      if ((undefined *)(lVar3 + lVar1 * 0x60 + lVar4 * 0x60) == puVar7 + lVar10 * 0x60 + 0x20) {
        uVar9 = *(ulong *)(puVar7 + 0x18);
        _swift_release();
        lVar10 = (uVar9 >> 1) - lVar10;
        lVar8 = lVar4 + lVar10;
        if (SCARRY8(lVar4,lVar10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xb8288);
          (*pcVar5)();
        }
      }
      else {
        _swift_release();
      }
    }
    if (param_1 <= lVar8) {
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar7 = puVar2;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar2);
        puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
      }
      lVar3 = (((lVar3 + lVar1 * 0x60) - (long)puVar7) + -0x20) / 0x60;
      lVar1 = lVar4 + lVar3;
      if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xb8268);
        (*pcVar5)();
      }
      if (lVar1 < *(long *)(puVar7 + 0x10)) {
        FUN_000b8454(lVar1,*(long *)(puVar7 + 0x10),0);
      }
    }
  }
  return;
}



/* Entry: 000b8288; end: 000b8453;  */

long FUN_000b8288(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  double dVar6;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000c0460();
  lVar4 = 0xaed198;
  func_0x000115a8(0xaed198,&UNK_007d6988);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0xe000000000000000;
  dVar6 = 0.0;
  *(undefined8 *)(lVar4 + 0x78) = 0xc000000000000000;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 1;
  *(undefined1 *)(lVar4 + 0x28) = 1;
  if (lRam0000000000aed1b8 != -1) {
    _swift_once(0xaed1b8,FUN_000b558c);
  }
  *(undefined8 *)(lVar4 + 0x40) = uRam0000000000b64938;
  if (lRam0000000000aed1c0 != -1) {
    _swift_once(0xaed1c0,FUN_000b5534);
  }
  *(undefined8 *)(lVar4 + 0x38) = uRam0000000000b64940;
  __s10Foundation4DateVACycfC(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb844c);
    (*pcVar1)();
  }
  if (dVar6 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xb8450);
    (*pcVar1)();
  }
  if (dVar6 < 1.8446744073709552e+19) {
    *(long *)(lVar4 + 0x30) = (long)dVar6;
    *(undefined4 *)(lVar4 + 0x48) = 1;
    _swift_bridgeObjectRelease(lVar3);
    return lVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb8454);
  (*pcVar1)();
}



/* Entry: 000b8454; end: 000b8527;  */

void FUN_000b8454(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xb8518);
    (*pcVar3)();
  }
  lVar6 = *unaff_x20;
  lVar7 = lVar6 + 0x20 + param_1 * 0x60;
  _swift_arrayDestroy(lVar7,lVar1,&UNK_009aa8c8);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xb851c);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xb8520);
      (*pcVar3)();
    }
    uVar4 = lVar7 + param_3 * 0x60;
    uVar5 = lVar6 + 0x20 + param_2 * 0x60;
    if (uVar4 != uVar5 || uVar5 + lVar1 * 0x60 <= uVar4) {
      _memmove(uVar4,uVar5,lVar1 * 0x60);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xb8524);
      (*pcVar3)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xb8528);
  (*pcVar3)();
}



/* Entry: 000b8528; end: 000b869f;  */

void FUN_000b8528(undefined8 *param_1,double param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  if (lRam0000000000aed1b8 != -1) {
    _swift_once(0xaed1b8,FUN_000b558c);
  }
  uVar1 = uRam0000000000b64938;
  if (lRam0000000000aed1c0 != -1) {
    _swift_once(0xaed1c0,FUN_000b5534);
  }
  uVar2 = uRam0000000000b64940;
  __s10Foundation4DateVACycfC(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xb8698);
    (*pcVar3)();
  }
  if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xb869c);
    (*pcVar3)();
  }
  if (param_2 < 1.8446744073709552e+19) {
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = param_4;
    param_1[2] = (long)param_2;
    param_1[3] = uVar2;
    param_1[4] = uVar1;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0xe000000000000000;
    param_1[0xb] = 0xc000000000000000;
    param_1[10] = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0xb86a0);
  (*pcVar3)();
}



/* Entry: 000b86a0; end: 000b86d3;  */

undefined8 FUN_000b86a0(undefined8 param_1)

{
  (*(code *)(undefined *)0xc1a54)();
  return param_1;
}



/* Entry: 000b86d4; end: 000b86f7;  */

void FUN_000b86d4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectUnownedDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}


