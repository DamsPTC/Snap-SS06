/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f75090; end: 105f7509b; -[SCGenerativeBackgroundsImageRequest .cxx_destruct] */

void FUN_105f75090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f7509c; end: 105f7524b; -[SCProductAdMessagePlugin initWithBlizzardLogger:grapheneRegistry:adAttachmentHandlerScopeExposer:adAttachmentHandlerScopeBuilder:networkingClient:postbackInfoEventHandler:dwellRequestsEnabled:mainQueuePerformer:messagingMessageProvider:] */

undefined1 *
FUN_105f7509c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ee518;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_9;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f7524c; end: 105f75893; -[SCProductAdMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f7524c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4ce20();
  if ((int)lVar3 == 5) {
    lVar3 = lVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ac80();
    if ((int)lVar4 == 0x1a) {
      lVar4 = lVar3;
      func_0x00010bef4f80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bef4fc0();
      if ((int)lVar5 == 4) {
        lVar5 = lVar4;
        func_0x00010c115c60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f4c80();
        lVar6 = param_1;
        func_0x00010be70800();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf529e0();
        if (lVar8 == 0) {
          puVar22 = PTR_PTR_1126b8d98;
          func_0x00010c0d4e20(PTR_PTR_1126b8d98);
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar22;
          func_0x00010c2ac460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar22);
          uVar21 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar21;
          func_0x00010bef2aa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0();
          _objc_release(uVar13);
          _objc_release(uVar21);
          _objc_release(puVar20);
          puVar22 = (undefined *)0x0;
        }
        else {
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0xc2000000;
          pcStack_98 = FUN_105f75894;
          puStack_90 = &UNK_1108fe5a8;
          lVar8 = lVar7;
          lStack_88 = lVar6;
          lStack_80 = param_1;
          func_0x00010bd86420(lVar7,&puStack_a8);
          puVar20 = PTR_PTR_1126c67c0;
          _objc_alloc();
          func_0x00010c03a5e0();
          lVar9 = lVar4;
          func_0x00010bf21840();
          lVar10 = lVar5;
          func_0x00010c0f4cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d9460(puVar20);
          func_0x00010c1d9480(puVar20);
          lVar11 = param_1;
          func_0x00010bde3ba0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c173ec0(puVar20);
          _objc_release(lVar11);
          _objc_initWeak(auStack_b0,param_1);
          puVar12 = PTR_PTR_1126c67c8;
          _objc_alloc();
          uVar13 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_c0,auStack_b0);
          uStack_b8 = (undefined4)lVar9;
          func_0x00010bff8960();
          _objc_release(uVar13);
          uVar21 = *(undefined8 *)(param_1 + 0x68);
          _objc_retain(lVar1);
          func_0x00010bfad7a0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar21;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar21);
          uVar21 = uVar13;
          func_0x00010bf870a0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar21;
          func_0x00010c272120();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c222e00(puVar12);
          _objc_release(uVar14);
          _objc_release(uVar21);
          uVar21 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1cc960(puVar12);
          _objc_release(uVar21);
          lVar9 = lVar5;
          func_0x00010bfda700();
          if ((int)lVar9 != 0) {
            puVar22 = PTR_PTR_1126c67d0;
            _objc_alloc(PTR_PTR_1126c67d0);
            lVar9 = lVar5;
            func_0x00010c105620();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar9;
            func_0x00010c29fac0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar5;
            func_0x00010c105620();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar15;
            func_0x00010c0f16a0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar17 = lVar5;
            func_0x00010c105620(lVar5);
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar17;
            func_0x00010c0fc360();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c062520(puVar22);
            _objc_release(lVar18);
            _objc_release(lVar17);
            _objc_release(lVar16);
            _objc_release(lVar15);
            _objc_release(lVar11);
            _objc_release(lVar9);
            func_0x00010c1646c0(puVar12);
            _objc_release(puVar22);
          }
          if (*(char *)(param_1 + 0x38) == '\x01') {
            uVar21 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010bf8b560(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c193000(puVar12);
            _objc_release(uVar21);
          }
          puVar22 = PTR_PTR_1126c67d8;
          _objc_alloc(PTR_PTR_1126c67d8);
          puVar19 = PTR_PTR_1126c67e0;
          func_0x00010bf44480(PTR_PTR_1126c67e0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c000660(puVar22);
          _objc_release(puVar19);
          _objc_release(uVar13);
          _objc_release(lVar1);
          _objc_release(puVar12);
          _objc_destroyWeak(auStack_c0);
          _objc_destroyWeak(auStack_b0);
          _objc_release(lVar10);
          _objc_release(puVar20);
          _objc_release(lVar8);
        }
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      else {
        puVar22 = (undefined *)0x0;
      }
      _objc_release(lVar4);
    }
    else {
      puVar22 = (undefined *)0x0;
    }
    _objc_release(lVar3);
  }
  else {
    puVar22 = (undefined *)0x0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 105f75894; end: 105f75e4b;  */

void FUN_105f75894(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  double dVar16;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c67a8;
  _objc_alloc(PTR_PTR_1126c67a8);
  uVar2 = param_2;
  func_0x00010bf20f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c116060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf0d660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c115f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bfea900(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c11f520();
  dVar16 = (double)(uVar8 & 0xffffffff);
  func_0x00010bff96a0(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    puVar15 = PTR_PTR_1126b8d98;
    func_0x00010c0d4e40(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010c2ac460(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar15);
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    puVar15 = (undefined *)0x0;
    goto LAB_105f75e1c;
  }
  uVar2 = param_2;
  func_0x00010c0f6860();
  uVar3 = param_2;
  if ((int)uVar2 == 0xb) {
    uVar2 = param_2;
    func_0x00010c112b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2880(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c112b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c149440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5280(puVar1);
LAB_105f75c7c:
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else if ((int)uVar2 == 10) {
    puVar15 = PTR_PTR_1126c67b0;
    _objc_alloc(PTR_PTR_1126c67b0);
    uVar2 = param_2;
    func_0x00010c067b00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c067b20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c067b00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c067ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e420(puVar15);
    func_0x00010c1adae0(puVar1);
    _objc_release(puVar15);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c067b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf88640();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (uVar5 != 0) {
      func_0x00010c067b00(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf88640();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar1;
      func_0x00010c067b00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c191100();
      _objc_release(puVar15);
      goto LAB_105f75c7c;
    }
  }
  uVar2 = param_2;
  func_0x00010c22c9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uVar2 = param_2;
    func_0x00010c22c9e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff6e0(puVar1);
    _objc_release(uVar2);
  }
  func_0x00010c24d920(param_2);
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (0.0 < dVar16) {
    func_0x00010c24d920(param_2);
    func_0x00010c0df720(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209360(puVar1);
    _objc_release(puVar15);
  }
  uVar2 = param_2;
  func_0x00010bfda700();
  if ((int)uVar2 != 0) {
    puVar15 = PTR_PTR_1126c67b8;
    _objc_alloc(PTR_PTR_1126c67b8);
    uVar2 = param_2;
    func_0x00010c105620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfeab40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c105620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bdc3080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d460(puVar15);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c105620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11fe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7700(puVar15);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c1639a0(puVar1);
    _objc_release(puVar15);
  }
  _objc_retain(puVar1);
  puVar15 = puVar1;
LAB_105f75e1c:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105f75e4c; end: 105f75e93;  */

void FUN_105f75e4c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f75e94; end: 105f75efb;  */

undefined8 FUN_105f75e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0001070b30c4(param_2,uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105f75efc; end: 105f75f57;  */

void FUN_105f75efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f75f58; end: 105f75f6f; -[SCProductAdMessagePlugin pluginDidRegister] */

void FUN_105f75f58(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c09a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_listenToConversationEvents_112604310);
    return;
  }
  return;
}



/* Entry: 105f75f70; end: 105f75f9f; -[SCProductAdMessagePlugin identifier] */

void FUN_105f75f70(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebbf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebbf8);
  return;
}



/* Entry: 105f75fa0; end: 105f75fa7; -[SCProductAdMessagePlugin pluginType] */

undefined8 FUN_105f75fa0(void)

{
  return 0;
}



/* Entry: 105f75fa8; end: 105f75fab; -[SCProductAdMessagePlugin adAttachmentHandlerViewWillFullyAppear:] */

void FUN_105f75fa8(void)

{
  return;
}



/* Entry: 105f75fac; end: 105f76043; -[SCProductAdMessagePlugin adAttachmentHandlerDidComplete:result:] */

void FUN_105f75fac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(char *)(param_1 + 0x38) == '\x01') &&
     (lVar1 = param_1, func_0x00010be3d420(param_1,param_2,param_3), (int)lVar1 != 0)) {
    func_0x00010bfb0160(*(undefined8 *)(param_1 + 0x30));
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f76044; end: 105f76047; -[SCProductAdMessagePlugin adAttachmentHandlerDidPresent:] */

void FUN_105f76044(void)

{
  return;
}



/* Entry: 105f76048; end: 105f7604b; -[SCProductAdMessagePlugin adAttachmentHandlerViewDidFullyAppear:] */

void FUN_105f76048(void)

{
  return;
}



/* Entry: 105f7604c; end: 105f7604f; -[SCProductAdMessagePlugin adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_105f7604c(void)

{
  return;
}



/* Entry: 105f76050; end: 105f76053; -[SCProductAdMessagePlugin adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_105f76050(void)

{
  return;
}



/* Entry: 105f76054; end: 105f7609b; -[SCProductAdMessagePlugin dismissPresentedView] */

void FUN_105f76054(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f7609c; end: 105f762bb; -[SCProductAdMessagePlugin _handleTapAdWithIndex:browserType:partnerRequestId:productAdShareItems:] */

void FUN_105f7609c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = param_6;
    func_0x00010c0dfd40(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bdc78;
    _objc_alloc();
    uVar3 = uVar1;
    func_0x00010bef2c20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1740();
    _objc_release(uVar3);
    func_0x00010bdc54a0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = uVar1;
    func_0x00010bf0d660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126c5530;
      _objc_alloc();
      func_0x00010c059ee0();
      _objc_initWeak(auStack_58,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c0f7fc0(uVar6);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105f762bc; end: 105f762ef;  */

void FUN_105f762bc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be475a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f762f0; end: 105f763b7; -[SCProductAdMessagePlugin _launchBrowserWithCommonAdConfig:webViewAttachment:] */

void FUN_105f762f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR_PTR_1126c2d50;
  _objc_alloc(PTR_PTR_1126c2d50);
  func_0x00010c032460();
  func_0x00010bf229e0(uVar4,param_2,puVar1,lVar2,puVar3,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105f763b8; end: 105f763c3; -[SCProductAdMessagePlugin _adBrowserTypeFromMessagingBrowserType:] */

bool FUN_105f763b8(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 != 1;
}



/* Entry: 105f763c4; end: 105f7642b; -[SCProductAdMessagePlugin _composerBrowserTypeFromMessagingBrowserType:] */

void FUN_105f763c4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *unaff_x19;
  
  ppuVar1 = &PTR_PTR_113133a70;
  if (param_3 < 1) {
    ppuVar1 = &PTR_PTR_113133a70;
    if ((param_3 != -0x4524111) && (param_3 != 0)) goto LAB_105f7641c;
  }
  else if (param_3 != 2) {
    if (param_3 != 1) goto LAB_105f7641c;
    ppuVar1 = &PTR_PTR_113133a68;
  }
  unaff_x19 = *ppuVar1;
  _objc_retain(unaff_x19);
LAB_105f7641c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 105f7642c; end: 105f76447; -[SCProductAdMessagePlugin _partnerFromMessagingPartner:] */

undefined ** FUN_105f7642c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e34118;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e340f8;
  }
  return ppuVar1;
}



/* Entry: 105f76448; end: 105f764f7; -[SCProductAdMessagePlugin _internalBrowserDismissedFrom:] */

bool FUN_105f76448(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf0cb60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0d600();
  _objc_release(lVar2);
  if (lVar3 == 1) {
    lVar2 = param_3;
    func_0x00010bf0cb60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a3d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf0d1e0(lVar3);
    bVar1 = lVar2 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105f764f8; end: 105f764ff; -[SCProductAdMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f764f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f76500; end: 105f7652f; -[SCProductAdMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f76500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f76530; end: 105f76537; -[SCProductAdMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f76530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f76538; end: 105f76567; -[SCProductAdMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f76538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f76568; end: 105f7657f; -[SCProductAdMessagePlugin uiContainer] */

void FUN_105f76568(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f76580; end: 105f7658b; -[SCProductAdMessagePlugin setUiContainer:] */

void FUN_105f76580(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105f7658c; end: 105f76593; -[SCProductAdMessagePlugin messageViewEvents] */

undefined8 FUN_105f7658c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105f76594; end: 105f765c3; -[SCProductAdMessagePlugin setMessageViewEvents:] */

void FUN_105f76594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f765c4; end: 105f76667; -[SCProductAdMessagePlugin .cxx_destruct] */

void FUN_105f765c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f76668; end: 105f767bb; -[SCSponsoredSnapAiProductAdMessagePlugin initWithBlizzardLogger:adAttachmentHandlerScopeExposer:adAttachmentHandlerScopeBuilder:mainQueuePerformer:messagingMessageProvider:grapheneRegistry:] */

undefined1 *
FUN_105f76668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ee520;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f767bc; end: 105f76d1f; -[SCSponsoredSnapAiProductAdMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f767bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4ce20();
  if ((int)lVar3 == 5) {
    lVar3 = lVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ac80();
    if ((int)lVar4 == 0x1a) {
      lVar4 = lVar3;
      func_0x00010bef4f80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bef4fc0();
      if ((int)lVar5 == 5) {
        lVar5 = lVar4;
        func_0x00010c115cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c116420();
        if ((int)lVar6 == 1) {
          lVar6 = lVar5;
          func_0x00010bf42200();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c084fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          lVar6 = lVar7;
          func_0x00010bf529e0();
          if (lVar6 == 0) {
            uVar17 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c269d40(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar17;
            func_0x00010bef2aa0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR_PTR_1126b8d98;
            func_0x00010c24cba0(PTR_PTR_1126b8d98);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfec2a0(uVar15);
            _objc_release(puVar18);
            _objc_release(uVar15);
            _objc_release(uVar17);
            puVar18 = (undefined *)0x0;
          }
          else {
            lVar6 = lVar7;
            func_0x00010bd86420(lVar7,&PTR___NSConcreteGlobalBlock_1108fe698);
            lVar8 = lVar5;
            func_0x00010bef2c20();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010b70473c();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010bdc3580();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar10);
            _objc_release(lVar9);
            _objc_release(lVar8);
            lVar8 = lVar5;
            func_0x00010bef4d20();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010b70473c();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010bdc3580();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar10;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar10);
            _objc_release(lVar9);
            _objc_release(lVar8);
            puVar13 = PTR_PTR_1126c67f0;
            _objc_alloc();
            lVar8 = lVar1;
            func_0x00010bf50280(lVar1);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar1;
            func_0x00010bf490e0(lVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c03a600();
            _objc_release(lVar9);
            _objc_release(lVar8);
            func_0x00010c163720(puVar13);
            func_0x00010c164480(puVar13);
            lVar8 = lVar4;
            func_0x00010bf21840();
            _objc_initWeak(auStack_70,param_1);
            puVar14 = PTR_PTR_1126c67f8;
            _objc_alloc(PTR_PTR_1126c67f8);
            uVar15 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40(uVar15);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar1;
            func_0x00010bf490e0(lVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beea000(param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_80,auStack_70);
            uStack_78 = (int)lVar8;
            _objc_retain(lVar1);
            func_0x00010bff8900(puVar14);
            _objc_release(param_1);
            _objc_release(lVar9);
            _objc_release(uVar15);
            puVar18 = PTR_PTR_1126c67d8;
            _objc_alloc(PTR_PTR_1126c67d8);
            puVar16 = PTR_PTR_1126c6800;
            func_0x00010bf44480(PTR_PTR_1126c6800);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c000660(puVar18);
            _objc_release(puVar16);
            _objc_release(puVar14);
            _objc_release(lVar1);
            _objc_destroyWeak(auStack_80);
            _objc_destroyWeak(auStack_70);
            _objc_release(puVar13);
            _objc_release(lVar12);
            _objc_release(lVar11);
            _objc_release(lVar6);
          }
          _objc_release(lVar7);
        }
        else {
          uVar17 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40(uVar17);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar17;
          func_0x00010bef2aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR_PTR_1126b8d98;
          func_0x00010c24cbc0(PTR_PTR_1126b8d98);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0(uVar15);
          _objc_release(puVar18);
          _objc_release(uVar15);
          _objc_release(uVar17);
          puVar18 = (undefined *)0x0;
        }
        _objc_release(lVar5);
      }
      else {
        puVar18 = (undefined *)0x0;
      }
      _objc_release(lVar4);
    }
    else {
      puVar18 = (undefined *)0x0;
    }
    _objc_release(lVar3);
  }
  else {
    puVar18 = (undefined *)0x0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 105f76d20; end: 105f76f53;  */

void FUN_105f76d20(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c67e8;
  _objc_alloc(PTR_PTR_1126c67e8);
  lVar2 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c099540(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bfe80a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c112a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a980(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bfdae40();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c11fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209360(puVar1);
    _objc_release(puVar6);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010bfdb480();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c140320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    func_0x00010c0df820(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ede80(puVar1);
    _objc_release(puVar6);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010c149440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_2;
    func_0x00010c149440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5280(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_2;
  func_0x00010bfbb720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_2;
    func_0x00010bfbb720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1480(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f76f54; end: 105f76feb;  */

void FUN_105f76f54(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_2 + 0x40;
  _objc_loadWeakRetained(lVar5);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf50280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be31b00(lVar5,param_3,(long)param_1,uVar4,uVar1,uVar3,uVar2,uVar6);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105f76fec; end: 105f76fef; -[SCSponsoredSnapAiProductAdMessagePlugin pluginDidRegister] */

void FUN_105f76fec(void)

{
  return;
}



/* Entry: 105f76ff0; end: 105f7701f; -[SCSponsoredSnapAiProductAdMessagePlugin identifier] */

void FUN_105f76ff0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebc18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebc18);
  return;
}



/* Entry: 105f77020; end: 105f77027; -[SCSponsoredSnapAiProductAdMessagePlugin pluginType] */

undefined8 FUN_105f77020(void)

{
  return 0;
}



/* Entry: 105f77028; end: 105f7706f; -[SCSponsoredSnapAiProductAdMessagePlugin dismissPresentedView] */

void FUN_105f77028(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f77070; end: 105f77073; -[SCSponsoredSnapAiProductAdMessagePlugin adAttachmentHandlerViewWillFullyAppear:] */

void FUN_105f77070(void)

{
  return;
}



/* Entry: 105f77074; end: 105f770bb; -[SCSponsoredSnapAiProductAdMessagePlugin adAttachmentHandlerDidComplete:result:] */

void FUN_105f77074(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f770bc; end: 105f770bf; -[SCSponsoredSnapAiProductAdMessagePlugin adAttachmentHandlerDidPresent:] */

void FUN_105f770bc(void)

{
  return;
}



/* Entry: 105f770c0; end: 105f770c3; -[SCSponsoredSnapAiProductAdMessagePlugin adAttachmentHandlerViewDidFullyAppear:] */

void FUN_105f770c0(void)

{
  return;
}



/* Entry: 105f770c4; end: 105f770c7; -[SCSponsoredSnapAiProductAdMessagePlugin adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_105f770c4(void)

{
  return;
}



/* Entry: 105f770c8; end: 105f770cb; -[SCSponsoredSnapAiProductAdMessagePlugin adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_105f770c8(void)

{
  return;
}



/* Entry: 105f770cc; end: 105f7736f; -[SCSponsoredSnapAiProductAdMessagePlugin _handleTapAdWithIndex:browserType:commerceItems:adId:serveItemId:conversationId:] */

void FUN_105f770cc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_5;
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar1 = param_5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bdc78;
    _objc_alloc(PTR_PTR_1126bdc78);
    func_0x00010bff1740();
    puVar8 = PTR_PTR_1126c6808;
    func_0x00010bef2180();
    uVar3 = uVar1;
    func_0x00010c099540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (uVar4 != 0) {
      uVar3 = uVar1;
      func_0x00010c099540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (puVar5 != (undefined *)0x0) {
        if (puVar8 == (undefined *)0x0) {
          puVar8 = PTR_PTR_1126c6810;
          _objc_alloc();
          func_0x00010c00d1a0();
        }
        else {
          puVar8 = (undefined *)0x0;
        }
        puVar6 = PTR_PTR_1126c5530;
        _objc_alloc();
        func_0x00010c059ee0();
        _objc_initWeak(auStack_68,param_1);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x00010c0f7fc0(uVar7);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(puVar6);
        _objc_release(puVar8);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105f77370; end: 105f773a3;  */

void FUN_105f77370(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be475c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f773a4; end: 105f77467; -[SCSponsoredSnapAiProductAdMessagePlugin _launchBrowserWithWebViewAttachment:] */

void FUN_105f773a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126bdc88;
  func_0x00010c2a4560(PTR_PTR_1126bdc88);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR_PTR_1126c2d50;
  _objc_alloc(PTR_PTR_1126c2d50);
  func_0x00010c032460();
  func_0x00010bf229e0(uVar4,param_2,puVar1,lVar2,puVar3,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105f77468; end: 105f775ff; -[SCSponsoredSnapAiProductAdMessagePlugin _visibilityObservableForMessage:] */

void FUN_105f77468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x58) == 0)) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar3 = *(undefined **)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c2519e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf41860(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f77600; end: 105f776af;  */

void FUN_105f77600(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR____kCFBooleanFalse_11034ab60;
  if ((int)param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c0cbac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 != 0) {
      func_0x00010c29fe00(lVar1);
    }
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f776b0; end: 105f776bb; +[SCSponsoredSnapAiProductAdMessagePlugin adBrowserTypeFromMessagingBrowserType:] */

bool FUN_105f776b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 2;
}



/* Entry: 105f776bc; end: 105f776c3; -[SCSponsoredSnapAiProductAdMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f776bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f776c4; end: 105f776f3; -[SCSponsoredSnapAiProductAdMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f776c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f776f4; end: 105f776fb; -[SCSponsoredSnapAiProductAdMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f776f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f776fc; end: 105f7772b; -[SCSponsoredSnapAiProductAdMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f776fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7772c; end: 105f77733; -[SCSponsoredSnapAiProductAdMessagePlugin messageViewEvents] */

undefined8 FUN_105f7772c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105f77734; end: 105f77763; -[SCSponsoredSnapAiProductAdMessagePlugin setMessageViewEvents:] */

void FUN_105f77734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f77764; end: 105f7776b; -[SCSponsoredSnapAiProductAdMessagePlugin visibleMessageIds] */

undefined8 FUN_105f77764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f7776c; end: 105f7779b; -[SCSponsoredSnapAiProductAdMessagePlugin setVisibleMessageIds:] */

void FUN_105f7776c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f7779c; end: 105f777a3; -[SCSponsoredSnapAiProductAdMessagePlugin messageListScrollObservable] */

undefined8 FUN_105f7779c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f777a4; end: 105f777d3; -[SCSponsoredSnapAiProductAdMessagePlugin setMessageListScrollObservable:] */

void FUN_105f777a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f777d4; end: 105f777eb; -[SCSponsoredSnapAiProductAdMessagePlugin messageVisibilityFractionProvider] */

void FUN_105f777d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f777ec; end: 105f777f7; -[SCSponsoredSnapAiProductAdMessagePlugin setMessageVisibilityFractionProvider:] */

void FUN_105f777ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105f777f8; end: 105f7780f; -[SCSponsoredSnapAiProductAdMessagePlugin uiContainer] */

void FUN_105f777f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f77810; end: 105f7781b; -[SCSponsoredSnapAiProductAdMessagePlugin setUiContainer:] */

void FUN_105f77810(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 105f7781c; end: 105f778c7; -[SCSponsoredSnapAiProductAdMessagePlugin .cxx_destruct] */

void FUN_105f7781c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f778c8; end: 105f779eb; -[SCSuggestedSearchMessagePlugin initWithBlizzardLogger:urlPreviewProvider:adAttachmentHandlerScopeExposer:adAttachmentHandlerScopeBuilder:messagingMessageProvider:] */

undefined1 *
FUN_105f778c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ee528;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f779ec; end: 105f77d7b; -[SCSuggestedSearchMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f779ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4ce20();
  if ((int)lVar3 == 5) {
    lVar3 = lVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ac80();
    if ((int)lVar4 == 0x1a) {
      lVar4 = lVar3;
      func_0x00010bef4f80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bef4fc0();
      if ((int)lVar5 == 2) {
        lVar5 = lVar4;
        func_0x00010c262100();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08fa60();
        _objc_release(lVar6);
        if (lVar7 == 0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          lVar6 = lVar4;
          func_0x00010bf21840();
          puVar8 = PTR_PTR_1126c6818;
          _objc_alloc();
          lVar7 = lVar5;
          func_0x00010bdc2b80(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c059ea0();
          _objc_release(lVar7);
          lVar7 = lVar5;
          func_0x00010c119b40(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e52e0(puVar8);
          _objc_release(lVar7);
          lVar7 = lVar5;
          func_0x00010c262120(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20fac0(puVar8);
          _objc_release(lVar7);
          lVar7 = lVar1;
          func_0x00010bf50280(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c183b80(puVar8);
          _objc_release(lVar7);
          _objc_initWeak(auStack_68,param_1);
          puVar9 = PTR_PTR_1126c6820;
          _objc_opt_new(PTR_PTR_1126c6820);
          uVar10 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c171b20(puVar9);
          _objc_release(uVar10);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21d480(puVar9);
          _objc_release(uVar10);
          uStack_70 = (int)lVar6;
          _objc_copyWeak(auStack_78,auStack_68);
          func_0x00010c1d3ee0(puVar9);
          puVar12 = PTR_PTR_1126c67d8;
          _objc_alloc(PTR_PTR_1126c67d8);
          puVar11 = PTR_PTR_1126c6828;
          func_0x00010bf44480(PTR_PTR_1126c6828);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c000660(puVar12);
          _objc_release(puVar11);
          _objc_destroyWeak(auStack_78);
          _objc_release(puVar9);
          _objc_destroyWeak(auStack_68);
          _objc_release(puVar8);
        }
        _objc_release(lVar5);
      }
      else {
        puVar12 = (undefined *)0x0;
      }
      _objc_release(lVar4);
    }
    else {
      puVar12 = (undefined *)0x0;
    }
    _objc_release(lVar3);
  }
  else {
    puVar12 = (undefined *)0x0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105f77d7c; end: 105f77e47;  */

void FUN_105f77d7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = *(undefined4 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105f77e48; end: 105f77ec3;  */

void FUN_105f77e48(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((1 < uVar1 && uVar1 != 0xfbadbeef) && (uVar1 != 2)) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f77ec4; end: 105f77ec7; -[SCSuggestedSearchMessagePlugin pluginDidRegister] */

void FUN_105f77ec4(void)

{
  return;
}



/* Entry: 105f77ec8; end: 105f77ef7; -[SCSuggestedSearchMessagePlugin identifier] */

void FUN_105f77ec8(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebbb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebbb8);
  return;
}



/* Entry: 105f77ef8; end: 105f77eff; -[SCSuggestedSearchMessagePlugin pluginType] */

undefined8 FUN_105f77ef8(void)

{
  return 0;
}



/* Entry: 105f77f00; end: 105f77f47; -[SCSuggestedSearchMessagePlugin dismissPresentedView] */

void FUN_105f77f00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f77f48; end: 105f78123; -[SCSuggestedSearchMessagePlugin _handleTapSuggestedSeachAdShare:browserType:] */

void FUN_105f77f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c262120(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bdc78;
  _objc_alloc(PTR_PTR_1126bdc78);
  func_0x00010bff1740();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar8 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc3460(puVar3,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c5530;
    _objc_alloc(PTR_PTR_1126c5530);
    func_0x00010c059ee0();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR_PTR_1126bdc88;
    func_0x00010c2a4560(PTR_PTR_1126bdc88,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar6);
    puVar7 = PTR_PTR_1126c2d50;
    _objc_alloc(PTR_PTR_1126c2d50);
    func_0x00010c032460();
    func_0x00010bf229e0(uVar8,param_2,puVar5,lVar6,puVar7,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f78124; end: 105f7816b; -[SCSuggestedSearchMessagePlugin adAttachmentHandlerDidComplete:result:] */

void FUN_105f78124(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f7816c; end: 105f7816f; -[SCSuggestedSearchMessagePlugin adAttachmentHandlerDidPresent:] */

void FUN_105f7816c(void)

{
  return;
}



/* Entry: 105f78170; end: 105f78173; -[SCSuggestedSearchMessagePlugin adAttachmentHandlerViewDidFullyAppear:] */

void FUN_105f78170(void)

{
  return;
}



/* Entry: 105f78174; end: 105f78177; -[SCSuggestedSearchMessagePlugin adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_105f78174(void)

{
  return;
}



/* Entry: 105f78178; end: 105f7817b; -[SCSuggestedSearchMessagePlugin adAttachmentHandlerViewWillFullyAppear:] */

void FUN_105f78178(void)

{
  return;
}



/* Entry: 105f7817c; end: 105f7817f; -[SCSuggestedSearchMessagePlugin adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_105f7817c(void)

{
  return;
}



/* Entry: 105f78180; end: 105f78187; -[SCSuggestedSearchMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f78180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f78188; end: 105f781b7; -[SCSuggestedSearchMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f78188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f781b8; end: 105f781bf; -[SCSuggestedSearchMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f781b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f781c0; end: 105f781ef; -[SCSuggestedSearchMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f781c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f781f0; end: 105f78207; -[SCSuggestedSearchMessagePlugin uiContainer] */

void FUN_105f781f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f78208; end: 105f78213; -[SCSuggestedSearchMessagePlugin setUiContainer:] */

void FUN_105f78208(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105f78214; end: 105f78287; -[SCSuggestedSearchMessagePlugin .cxx_destruct] */

void FUN_105f78214(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f78288; end: 105f783bb; -[SCTextAdMessagePlugin initWithBlizzardLogger:webBrowsingScopeExposer:networkingClient:postbackInfoEventHandler:dwellRequestsEnabled:messagingMessageProvider:] */

undefined1 *
FUN_105f78288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ee530;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f783bc; end: 105f78903; -[SCTextAdMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f783bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4ce20();
  if ((int)lVar3 == 5) {
    lVar3 = lVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22ac80();
    _objc_release(lVar3);
    if ((int)lVar4 == 0x17) {
      lVar3 = lVar2;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c26b740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010bf21840();
      lVar5 = lVar4;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000100504554();
      _objc_release(lVar5);
      lVar5 = lVar6;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126c6838;
        _objc_alloc();
        func_0x00010c020480();
        lVar5 = lVar4;
        func_0x00010bf862a0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18fe40(puVar7);
        _objc_release(lVar5);
        lVar5 = lVar4;
        func_0x00010c0f4c80(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9460(puVar7);
        _objc_release(lVar5);
        lVar5 = lVar4;
        func_0x00010c0f4cc0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d9480(puVar7);
        _objc_release(lVar5);
        _objc_initWeak(auStack_80,param_1);
        puVar8 = PTR_PTR_1126c6840;
        _objc_opt_new();
        uStack_88 = (undefined4)lVar3;
        _objc_copyWeak(auStack_90,auStack_80);
        func_0x00010c1d3ee0(puVar8);
        uVar9 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c171b20(puVar8);
        _objc_release(uVar9);
        uVar16 = *(undefined8 *)(param_1 + 0x50);
        _objc_retain(lVar1);
        func_0x00010bfad7a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar16;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        uVar16 = uVar9;
        func_0x00010bf870a0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar16;
        func_0x00010c272120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c223d40(puVar8);
        _objc_release(uVar10);
        _objc_release(uVar16);
        uVar16 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cc960(puVar8);
        _objc_release(uVar16);
        lVar3 = lVar4;
        func_0x00010bfda700();
        if ((int)lVar3 != 0) {
          puVar17 = PTR_PTR_1126c67d0;
          _objc_alloc(PTR_PTR_1126c67d0);
          lVar3 = lVar4;
          func_0x00010c105620();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar3;
          func_0x00010c29fac0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar4;
          func_0x00010c105620();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010c0f16a0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar4;
          func_0x00010c105620(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010c0fc360();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c062520(puVar17);
          _objc_release(lVar14);
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar5);
          _objc_release(lVar3);
          func_0x00010c1646c0(puVar8);
          _objc_release(puVar17);
        }
        if (*(char *)(param_1 + 0x28) == '\x01') {
          uVar16 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf8b560(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c193000(puVar8);
          _objc_release(uVar16);
        }
        puVar17 = PTR_PTR_1126c67d8;
        _objc_alloc(PTR_PTR_1126c67d8);
        puVar15 = PTR_PTR_1126c6848;
        func_0x00010bf44480(PTR_PTR_1126c6848);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c000660(puVar17);
        _objc_release(puVar15);
        _objc_release(uVar9);
        _objc_release(lVar1);
        _objc_destroyWeak(auStack_90);
        _objc_release(puVar8);
        _objc_destroyWeak(auStack_80);
        _objc_release(puVar7);
      }
      _objc_release(lVar6);
      _objc_release(lVar4);
      goto LAB_105f78888;
    }
  }
  puVar17 = (undefined *)0x0;
LAB_105f78888:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105f78904; end: 105f78b03;  */

void FUN_105f78904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c6830;
  _objc_alloc(PTR_PTR_1126c6830);
  uVar2 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf85600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf86780(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010beec8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf6ee40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bfea900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f20(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bfda700();
  if ((int)uVar2 != 0) {
    puVar9 = PTR_PTR_1126c67b8;
    _objc_alloc(PTR_PTR_1126c67b8);
    uVar2 = param_2;
    func_0x00010c105620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfeab40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c105620(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bdc3080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d460(puVar9);
    func_0x00010c1df5a0(puVar1);
    _objc_release(puVar9);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f78b04; end: 105f78bdb;  */

void FUN_105f78b04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = *(undefined4 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105f78bdc; end: 105f78c63;  */

void FUN_105f78bdc(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 1) {
    if (iVar1 != -0x4524111 && iVar1 != 0) {
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be31ce0();
      goto LAB_105f78c54;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31ca0();
LAB_105f78c54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f78c64; end: 105f78ccb;  */

undefined8 FUN_105f78c64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0001070b30c4(param_2,uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105f78ccc; end: 105f78d27;  */

void FUN_105f78ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfee140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b31f8();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f78d28; end: 105f78d3f; -[SCTextAdMessagePlugin pluginDidRegister] */

void FUN_105f78d28(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c09a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_listenToConversationEvents_112604310);
    return;
  }
  return;
}



/* Entry: 105f78d40; end: 105f78d6f; -[SCTextAdMessagePlugin identifier] */

void FUN_105f78d40(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebb58);
  return;
}



/* Entry: 105f78d70; end: 105f78d77; -[SCTextAdMessagePlugin pluginType] */

undefined8 FUN_105f78d70(void)

{
  return 0;
}


