/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090a0b54; end: 1090a0baf; -[SCNeoMediaInfoResolver setSegmentInfoIndexer:forTrackId:] */

void FUN_1090a0b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x0001090a0de4();
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    func_0x0001090a0e14();
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    func_0x0001090a0dcc(uVar2);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  func_0x0001090a0e28(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090a0bb0; end: 1090a0bb7; -[SCNeoMediaInfoResolver enumerateSegmentInfoIndexersWithBlock:] */

void FUN_1090a0bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_enumerateObjectsWithBlock__1125c3950);
  return;
}



/* Entry: 1090a0bb8; end: 1090a0c23; -[SCNeoMediaInfoResolver mediaStreamParser:didParseSampleInfo:forTrackId:] */

void FUN_1090a0bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  func_0x00010be21200(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07000();
  func_0x0001090a0dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1090a0c24; end: 1090a0c8b; -[SCNeoMediaInfoResolver mediaStreamParser:didParseSegmentInfo:forTrackId:] */

void FUN_1090a0c24(void)

{
  long unaff_x20;
  
  func_0x0001090a0dac();
  func_0x00010be21240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07040();
  *(undefined1 *)(unaff_x20 + 0x42) = 1;
  func_0x0001090a0df4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a0c8c; end: 1090a0ce3; -[SCNeoMediaInfoResolver mediaStreamParser:didEncounterRecoverableError:] */

void FUN_1090a0c8c(void)

{
  long unaff_x20;
  
  func_0x0001090a0dac();
  func_0x00010bf99fe0(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75700();
  func_0x0001090a0dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a0ce4; end: 1090a0d03; -[SCNeoMediaInfoResolver requiresParseAtCurrentLocation] */

uint FUN_1090a0ce4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf4b800(uVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  return (uint)uVar1 ^ 1;
}



/* Entry: 1090a0d04; end: 1090a0d0b; -[SCNeoMediaInfoResolver loadedTrackInfos] */

undefined1 FUN_1090a0d04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 1090a0d0c; end: 1090a0d13; -[SCNeoMediaInfoResolver loadedSegmentInfos] */

undefined1 FUN_1090a0d0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}



/* Entry: 1090a0d14; end: 1090a0d1b; -[SCNeoMediaInfoResolver streamParser] */

undefined8 FUN_1090a0d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1090a0d1c; end: 1090a0d23; -[SCNeoMediaInfoResolver streamParserRegistry] */

undefined8 FUN_1090a0d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1090a0d24; end: 1090a0d2b; -[SCNeoMediaInfoResolver eventLogger] */

undefined8 FUN_1090a0d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1090a0d2c; end: 1090a0d33; -[SCNeoMediaInfoResolver tracer] */

undefined8 FUN_1090a0d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1090a0d34; end: 1090a0d9f; -[SCNeoMediaInfoResolver .cxx_destruct] */

void FUN_1090a0d34(long param_1)

{
  func_0x0001090a0dc4(param_1 + 0x60);
  func_0x0001090a0dc4(param_1 + 0x58);
  func_0x0001090a0dc4(param_1 + 0x50);
  func_0x0001090a0dc4(param_1 + 0x48);
  func_0x0001090a0dc4(param_1 + 0x30);
  func_0x0001090a0dc4(param_1 + 0x28);
  func_0x0001090a0dc4(param_1 + 0x20);
  func_0x0001090a0dc4(param_1 + 0x18);
  func_0x0001090a0dc4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a0da0; end: 1090a0e57;  */

void FUN_1090a0da0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a0e58; end: 1090a0f2f; -[SCNeoMediaM3U8Parser initWithString:] */

undefined1 * FUN_1090a0e58(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x0001090a1880();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010c08fa60();
    *(undefined8 *)(puVar1 + 0x10) = unaff_x19;
    puVar3 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined **)(puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010c17ace0(*(undefined8 *)(puVar1 + 0x18));
    func_0x00010c23e040(puVar1);
  }
  func_0x0001090a1878();
  return puVar1;
}



/* Entry: 1090a0f30; end: 1090a0f47; -[SCNeoMediaM3U8Parser isAtEnd] */

undefined8 FUN_1090a0f30(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010c06c750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_isAtEnd_1125f8be0);
  return uVar1;
}



/* Entry: 1090a0f48; end: 1090a0f9b; -[SCNeoMediaM3U8Parser parseNewline] */

undefined8 FUN_1090a0f48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001090a18c0();
  func_0x00010c0d96e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ea40(uVar1,param_2,param_1,0);
  func_0x0001090a1878();
  return uVar1;
}



/* Entry: 1090a0f9c; end: 1090a1013; -[SCNeoMediaM3U8Parser parseComment] */

undefined8 FUN_1090a0f9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001090a1890(uVar1,param_2,&PTR____CFConstantStringClassReference_110f20918);
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = uVar1;
    func_0x0001090a18c0();
    func_0x00010c0d96e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14f5e0(uVar3,param_2,uVar2,0);
    func_0x0001090a18b8();
    func_0x0001090a18e4();
  }
  return uVar1;
}



/* Entry: 1090a1014; end: 1090a1043; -[SCNeoMediaM3U8Parser skipCommentsAndNewlines] */

void FUN_1090a1014(ulong param_1)

{
  ulong uVar1;
  
  do {
    do {
      uVar1 = param_1;
      func_0x00010c0f3f40();
    } while ((uVar1 & 1) != 0);
    func_0x0001090a18e4();
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 1090a1044; end: 1090a108b; -[SCNeoMediaM3U8Parser nextTokenIsTag] */

bool FUN_1090a1044(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c14ed80();
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf35920(uVar3,param_2,uVar2);
    bVar1 = (int)uVar3 == 0x23;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1090a108c; end: 1090a1133; -[SCNeoMediaM3U8Parser onError:] */

void FUN_1090a108c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x0001090a1880();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    func_0x00010c14ed80();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_109096480();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = puVar1;
    _objc_release(uVar2);
    func_0x0001090a18b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a1134; end: 1090a117f; -[SCNeoMediaM3U8Parser _parseEpilogue] */

undefined8 FUN_1090a1134(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c06c740();
  if (((uVar1 & 1) == 0) && (func_0x0001090a18e4(), (uVar1 & 1) == 0)) {
    func_0x00010c0e3f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f20978);
    uVar2 = 0;
  }
  else {
    func_0x00010c23e040(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1090a1180; end: 1090a11cf; -[SCNeoMediaM3U8Parser parseTag:] */

long FUN_1090a1180(void)

{
  ulong uVar1;
  long unaff_x20;
  
  func_0x0001090a1880();
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  func_0x0001090a1890();
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010be700e0();
  }
  func_0x0001090a1878();
  return unaff_x20;
}



/* Entry: 1090a11d0; end: 1090a131f; -[SCNeoMediaM3U8Parser parseTag:withAttributesList:] */

long FUN_1090a11d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  
  func_0x0001090a18b0();
  func_0x0001090a18f8();
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x0001090a1890(uVar2,param_2,param_3);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x0001090a1890(uVar2,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
    if ((uVar2 & 1) != 0) {
      uVar3 = param_4;
      func_0x00010c12adc0(param_4);
      FUN_1090a1320();
      _objc_retainAutoreleasedReturnValue();
      while( true ) {
        uVar2 = *(ulong *)(param_1 + 0x18);
        func_0x00010c06c740();
        if ((uVar2 & 1) != 0) break;
        uVar2 = *(ulong *)(param_1 + 0x18);
        uStack_58 = 0;
        func_0x00010c14f5e0(uVar2,param_2,uVar3,&uStack_58);
        uVar1 = uStack_58;
        _objc_retain(uStack_58);
        if ((uVar2 & 1) == 0) {
          func_0x0001090a18a0();
          break;
        }
        func_0x00010befa120(param_4,param_2,uVar1);
        func_0x0001090a1890(*(undefined8 *)(param_1 + 0x18),param_2,
                            &PTR____CFConstantStringClassReference_110db3ed8);
        func_0x0001090a18a0();
      }
      func_0x00010be700e0(param_1);
      func_0x0001090a18a8();
      goto LAB_1090a12c8;
    }
    func_0x00010c0e3f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f20998);
  }
  param_1 = 0;
LAB_1090a12c8:
  func_0x0001090a1898();
  func_0x0001090a1878();
  return param_1;
}



/* Entry: 1090a1320; end: 1090a1373;  */

void FUN_1090a1320(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730970 != -1) {
    func_0x000107c27d9c(0x113730970,&PTR___NSConcreteGlobalBlock_110ad7938);
  }
  uVar1 = uRam0000000113730978;
  _objc_retain(uRam0000000113730978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090a1374; end: 1090a143f; -[SCNeoMediaM3U8Parser parseTag:withSingleAttributesList:] */

undefined8 FUN_1090a1374(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001090a18b0();
  func_0x0001090a18f8();
  uVar1 = param_1;
  func_0x00010c0f4680(param_1,param_2,param_3,param_4);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf529e0();
    if (param_4 == 1) {
      uVar3 = 1;
      goto LAB_1090a1400;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f209b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e3f00(param_1,param_2,puVar2);
    func_0x0001090a18a8();
  }
  uVar3 = 0;
LAB_1090a1400:
  func_0x0001090a1898();
  func_0x0001090a1878();
  return uVar3;
}



/* Entry: 1090a1440; end: 1090a170f; -[SCNeoMediaM3U8Parser parseTag:withNamedAttributes:] */

long FUN_1090a1440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  
  func_0x0001090a18b0();
  func_0x0001090a18f8();
  uVar3 = *(ulong *)(param_1 + 0x18);
  func_0x0001090a1890();
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x0001090a1890();
    if ((uVar3 & 1) != 0) {
      uVar4 = param_4;
      func_0x00010c12adc0();
      FUN_1090a1320();
      _objc_retainAutoreleasedReturnValue();
      if (lRam0000000113730980 != -1) {
        func_0x000107c27d9c(0x113730980,&PTR___NSConcreteGlobalBlock_110ad7958);
      }
      _objc_retain(uRam0000000113730988);
      while( true ) {
        uVar3 = *(ulong *)(param_1 + 0x18);
        func_0x00010c06c740();
        if ((uVar3 & 1) != 0) break;
        uVar3 = *(ulong *)(param_1 + 0x18);
        func_0x00010c14f5e0();
        _objc_retain(0);
        if ((uVar3 & 1) == 0) {
LAB_1090a163c:
          func_0x0001090a18a0();
          break;
        }
        iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
        func_0x0001090a1890();
        if (iVar2 == 0) goto LAB_1090a163c;
        iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
        func_0x0001090a1890();
        uVar3 = *(ulong *)(param_1 + 0x18);
        iVar5 = (int)uVar3;
        if (iVar2 == 0) {
          func_0x00010c14f5e0();
          _objc_retain(0);
          if (iVar5 == 0) goto LAB_1090a1638;
        }
        else {
          if (lRam0000000113730990 != -1) {
            func_0x000107c27d9c(0x113730990,&PTR___NSConcreteGlobalBlock_110ad7978);
          }
          uVar1 = uRam0000000113730998;
          _objc_retain(uRam0000000113730998);
          func_0x00010c14f5e0();
          _objc_retain(0);
          _objc_release(uVar1);
          if ((uVar3 & 1) == 0) {
LAB_1090a1638:
            func_0x0001090a18dc();
            goto LAB_1090a163c;
          }
          uVar3 = *(ulong *)(param_1 + 0x18);
          func_0x0001090a1890();
          if ((uVar3 & 1) == 0) {
            func_0x00010c0e3f00(param_1);
            func_0x0001090a18dc();
            func_0x0001090a18a0();
            param_1 = 0;
            goto LAB_1090a164c;
          }
        }
        func_0x00010c1d0640(param_4);
        func_0x0001090a1890(*(undefined8 *)(param_1 + 0x18));
        func_0x0001090a18dc();
        func_0x0001090a18a0();
      }
      func_0x00010be700e0(param_1);
LAB_1090a164c:
      func_0x0001090a18a8();
      _objc_release(uVar4);
      goto LAB_1090a1658;
    }
    func_0x00010c0e3f00(param_1);
  }
  param_1 = 0;
LAB_1090a1658:
  func_0x0001090a1898();
  func_0x0001090a1878();
  return param_1;
}



/* Entry: 1090a1710; end: 1090a178b; -[SCNeoMediaM3U8Parser parseString:] */

long FUN_1090a1710(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x0001090a18c0();
  func_0x00010c0d96e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14f5e0();
  func_0x0001090a1898();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be700f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__parseEpilogue_1125799d8);
    return param_1;
  }
  return 0;
}



/* Entry: 1090a178c; end: 1090a1793; -[SCNeoMediaM3U8Parser error] */

undefined8 FUN_1090a178c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090a1794; end: 1090a17cf; -[SCNeoMediaM3U8Parser .cxx_destruct] */

void FUN_1090a1794(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a17d0; end: 1090a1877;  */

void FUN_1090a17d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0001090a18c0();
  func_0x00010bf35a20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113730978;
  uRam0000000113730978 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090a1878; end: 1090a18ff;  */

void FUN_1090a1878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a1900; end: 1090a19b7;  */

void FUN_1090a1900(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137309a0 != -1) {
    func_0x000107c27d9c(0x1137309a0,&PTR___NSConcreteGlobalBlock_110ad7998);
  }
  uVar1 = uRam00000001137309a8;
  _objc_retain(uRam00000001137309a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090a19b8; end: 1090a1aeb; -[SCNeoMediaQueue initWithPlayerID:priority:] */

long FUN_1090a19b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [24];
  
  FUN_1090a1d54();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(undefined1 *)(param_1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    uVar5 = 0x19;
    if (param_4 != 1) {
      uVar5 = 0x15;
    }
    uVar1 = 0x21;
    if (param_4 != 2) {
      uVar1 = uVar5;
    }
    uVar4 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,uVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_queue_create(puVar3,uVar4);
    func_0x0001090a1d70();
    _objc_release(uVar4);
    func_0x0001090a1da0(*(undefined8 *)(param_1 + 8));
    _dispatch_queue_set_specific();
    _dispatch_queue_set_specific(*(undefined8 *)(param_1 + 8),&UNK_10dfb2eff,param_3,0);
    func_0x00010b999da0(auStack_58,*(undefined8 *)(param_1 + 8));
    func_0x0001090a1d94();
    func_0x000107c2ab04(auStack_58);
    _objc_release(puVar2);
  }
  return param_1;
}



/* Entry: 1090a1aec; end: 1090a1b2b;  */

undefined8 * FUN_1090a1aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c2ab08(uVar1);
  }
  return param_1;
}



/* Entry: 1090a1b2c; end: 1090a1bdb; -[SCNeoMediaQueue initAsSharedGlobalQueue] */

long FUN_1090a1b2c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long alStack_38 [3];
  
  FUN_1090a1d54();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    FUN_1090a1900();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090a1d70();
    if (lRam00000001137309b8 != -1) {
      func_0x000107c27d9c(0x1137309b8,&PTR___NSConcreteGlobalBlock_110ad79b8);
    }
    alStack_38[0] = *plRam00000001137309b0;
    if ((alStack_38[0] != 0) && (*(long *)(alStack_38[0] + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(alStack_38[0] + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001090a1d94();
    func_0x000107c2ab04(alStack_38);
  }
  return param_1;
}



/* Entry: 1090a1bdc; end: 1090a1c03; -[SCNeoMediaQueue queue] */

void FUN_1090a1bdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090a1c04; end: 1090a1c57; -[SCNeoMediaQueue _isOnQueue] */

void FUN_1090a1c04(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar1 = &UNK_10f54e013;
    _dispatch_get_specific();
    if (puVar1 != (undefined *)0x0) {
      func_0x0001090a1d88();
    }
  }
  else {
    func_0x0001090a1d88();
  }
  return;
}



/* Entry: 1090a1c58; end: 1090a1c5b; -[SCNeoMediaQueue assertMediaQueue] */

void FUN_1090a1c58(void)

{
  return;
}



/* Entry: 1090a1c5c; end: 1090a1c67; -[SCNeoMediaQueue dispatchAsync:] */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1090a1c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar1 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar2;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar2 = pcRam0000000113817cd0;
  func_0x00010002a3a8(param_3);
  func_0x000107c61180();
  (*pcVar2)(uVar3,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090a1c68; end: 1090a1ccb; -[SCNeoMediaQueue dispatchAsyncIfNotOnQueue:] */

void FUN_1090a1c68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be42640();
  if ((int)lVar1 == 0) {
    func_0x000107c27d8c(*(undefined8 *)(param_1 + 8),param_3);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090a1ccc; end: 1090a1cd3; -[SCNeoMediaQueue playerID] */

undefined8 FUN_1090a1ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090a1cd4; end: 1090a1cff; -[SCNeoMediaQueue .cxx_destruct] */

void FUN_1090a1cd4(long param_1)

{
  func_0x000107c2ab04(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a1d00; end: 1090a1d07; -[SCNeoMediaQueue .cxx_construct] */

void FUN_1090a1d00(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1090a1d08; end: 1090a1d53;  */

void FUN_1090a1d08(void)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  __Znwm();
  FUN_1090a1900();
  func_0x00010b999da0(uVar1);
  uRam00000001137309b0 = uVar1;
  return;
}



/* Entry: 1090a1d54; end: 1090a1db3;  */

void FUN_1090a1d54(undefined8 param_1)

{
  undefined8 uStack0000000000000010;
  undefined *puStack0000000000000018;
  
  puStack0000000000000018 = PTR_PTR_1127004c8;
  uStack0000000000000010 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)(&stack0x00000010,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1090a1db4; end: 1090a1de7; -[SCNeoMediaSampleBuffer initWithOwnedBlockBuffer:timingInfoSize:timingInfoArray:sampleSizes:samplesPerChunk:trackInfo:] */

void FUN_1090a1db4(void)

{
  func_0x0001090a248c();
  func_0x00010c032a20();
  return;
}



/* Entry: 1090a1de8; end: 1090a2067; -[SCNeoMediaSampleBuffer initWithOwnedBlockBuffer:timingInfoSize:timingInfoArray:sampleSizes:samplesPerChunk:timeOffset:trackInfo:] */

undefined8 *
FUN_1090a1de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 *param_6,undefined8 param_7,ulong param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined8 in_register_00005008;
  undefined8 uVar7;
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
  undefined *puStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1127004d0;
  puVar3 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0x11] = param_4;
    puVar3[2] = param_5;
    _objc_retain(param_7);
    uVar4 = puVar3[1];
    puVar3[1] = param_7;
    _objc_release(uVar4);
    puVar3[0x10] = param_8;
    _objc_retain(param_10);
    uVar4 = puVar3[0x12];
    puVar3[0x12] = param_10;
    _objc_release(uVar4);
    if (param_5 == 0) {
      func_0x0001090a248c();
      puVar3[7] = in_register_00005008;
      puVar3[6] = param_1;
      uVar4 = *(undefined8 *)(extraout_x8 + 0x10);
      puVar3[8] = uVar4;
      puVar3[4] = in_register_00005008;
      puVar3[3] = param_1;
      puVar3[5] = uVar4;
      puVar3[10] = in_register_00005008;
      puVar3[9] = param_1;
      puVar3[0xb] = uVar4;
      puVar3[0xe] = in_register_00005008;
      puVar3[0xd] = param_1;
      puVar3[0xf] = uVar4;
    }
    else if (puVar3[2] == 1) {
      uStack_98 = param_6[7];
      uStack_a0 = param_6[6];
      FUN_1090a2468(param_6[8]);
      uVar4 = uStack_88;
      puVar3[10] = uStack_80;
      puVar3[9] = uVar4;
      puVar3[0xb] = uStack_78;
      uStack_98 = param_6[4];
      uStack_a0 = param_6[3];
      FUN_1090a2468(param_6[5]);
      puVar3[7] = uStack_80;
      puVar3[6] = uStack_88;
      puVar3[8] = uStack_78;
      uVar7 = param_6[1];
      uVar4 = *param_6;
      puVar3[5] = param_6[2];
      puVar3[4] = uVar7;
      puVar3[3] = uVar4;
      if (param_8 < 2) {
        uVar7 = param_6[1];
        uVar4 = *param_6;
        puVar3[0xf] = param_6[2];
        puVar3[0xe] = uVar7;
        puVar3[0xd] = uVar4;
      }
      else {
        uStack_98 = param_6[1];
        uStack_a0 = *param_6;
        uStack_90 = param_6[2];
        _CMTimeMultiply(&uStack_88,&uStack_a0,param_8);
        func_0x0001090a24a8();
      }
    }
    else {
      func_0x0001090a248c();
      puVar3[0xe] = in_register_00005008;
      puVar3[0xd] = param_1;
      puVar3[0xf] = *(undefined8 *)(extraout_x8_00 + 0x10);
      lVar5 = param_5 * 0x48;
      FUN_1090947b0();
      lVar6 = 0;
      puVar3[0xc] = lVar5;
      for (; param_5 != 0; param_5 = param_5 + -1) {
        puVar1 = (undefined8 *)(puVar3[0xc] + lVar6);
        puVar2 = (undefined8 *)((long)param_6 + lVar6);
        uStack_98 = puVar2[7];
        uStack_a0 = puVar2[6];
        FUN_1090a2468(puVar2[8]);
        puVar1[8] = uStack_78;
        puVar1[7] = uStack_80;
        puVar1[6] = uStack_88;
        uStack_98 = puVar2[4];
        uStack_a0 = puVar2[3];
        FUN_1090a2468(puVar2[5]);
        puVar1[5] = uStack_78;
        puVar1[4] = uStack_80;
        puVar1[3] = uStack_88;
        uVar7 = puVar2[1];
        uVar4 = *puVar2;
        puVar1[2] = puVar2[2];
        puVar1[1] = uVar7;
        *puVar1 = uVar4;
        uStack_98 = puVar3[0xe];
        uStack_a0 = puVar3[0xd];
        uStack_90 = puVar3[0xf];
        uStack_b8 = puVar2[1];
        uStack_c0 = *puVar2;
        uStack_b0 = puVar2[2];
        _CMTimeAdd(&uStack_88,&uStack_a0,&uStack_c0);
        func_0x0001090a24a8();
        lVar6 = lVar6 + 0x48;
      }
      _memcpy(puVar3 + 3,puVar3[0xc],0x48);
    }
  }
  _objc_release(param_10);
  _objc_release(param_7);
  return puVar3;
}



/* Entry: 1090a2068; end: 1090a20bb; -[SCNeoMediaSampleBuffer dealloc] */

void FUN_1090a2068(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x88) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1127004d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090a20bc; end: 1090a20cf; -[SCNeoMediaSampleBuffer presentationTime] */

void FUN_1090a20bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x40);
  return;
}



/* Entry: 1090a20d0; end: 1090a20e3; -[SCNeoMediaSampleBuffer presentationDuration] */

void FUN_1090a20d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x78);
  return;
}



/* Entry: 1090a20e4; end: 1090a212f; -[SCNeoMediaSampleBuffer presentationEndTime] */

void FUN_1090a20e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010c10f700(auStack_38);
  func_0x00010c10f3e0(auStack_50,param_2);
  _CMTimeAdd(param_1,auStack_38,auStack_50);
  return;
}



/* Entry: 1090a2130; end: 1090a21fb; -[SCNeoMediaSampleBuffer sampleBufferRefRepresentationWithError:] */

undefined8 FUN_1090a2130(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf25f00(uVar3);
  lVar1 = param_1 + 0x18;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar1 = *(long *)(param_1 + 0x60);
  }
  uStack_48 = 0;
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfb5ae0(uVar4);
  _CMSampleBufferCreateReady
            (uVar6,uVar2,uVar4,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x10),lVar1
             ,*(undefined8 *)(param_1 + 0x80),uVar3,&uStack_48);
  if ((int)uVar6 != 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110f20a78;
    FUN_1090966fc(&PTR____CFConstantStringClassReference_110f20a78,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    uStack_48 = 0;
    *param_3 = ppuVar5;
  }
  return uStack_48;
}



/* Entry: 1090a21fc; end: 1090a229b; -[SCNeoMediaSampleBuffer mediaSampleBufferWithTimeOffset:] */

void FUN_1090a21fc(long param_1,undefined8 param_2,long *param_3)

{
  if ((*param_3 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    _objc_retain(param_1);
  }
  else {
    param_1 = *(long *)(param_1 + 0x88);
    if (param_1 != 0) {
      _CFRetain();
    }
    func_0x0001090a249c();
    func_0x00010c032a20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090a229c; end: 1090a2427; +[SCNeoMediaSampleBuffer mediaSampleBufferWithSampleBufferRef:trackInfo:] */

void FUN_1090a229c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  lVar1 = param_3;
  _CMSampleBufferDataIsReady();
  if (((int)lVar1 == 0) || (lVar1 = param_3, _CMSampleBufferMakeDataReady(), (int)lVar1 == 0)) {
    lVar1 = param_3;
    _CMSampleBufferGetDataBuffer();
    _CMSampleBufferGetNumSamples(param_3);
    lStack_58 = 0;
    _CMSampleBufferGetSampleTimingInfoArray(param_3,0,0,&lStack_58);
    if (lStack_58 < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = lStack_58 * 0x48;
      FUN_1090947b0(lVar2);
      _CMSampleBufferGetSampleTimingInfoArray(param_3,lStack_58,lVar2,0);
    }
    lStack_60 = 0;
    lVar3 = param_3;
    _CMSampleBufferGetSampleSizeArray(param_3,0,0,&lStack_60);
    if (lStack_60 < 1) {
      puVar5 = (undefined *)0x0;
      param_3 = lVar3;
    }
    else {
      puVar5 = PTR_PTR_1126dd398;
      _objc_alloc(PTR_PTR_1126dd398);
      func_0x00010c04e940();
      func_0x00010c202c80();
      lVar3 = lStack_60;
      puVar4 = puVar5;
      func_0x00010bf25f00(puVar5);
      _CMSampleBufferGetSampleSizeArray(param_3,lVar3,puVar4,0);
    }
    if (lVar1 != 0) {
      _CFRetain(lVar1);
      param_3 = lVar1;
    }
    func_0x0001090a249c();
    func_0x00010c032a40();
    _free(lVar2);
    _objc_release(puVar5);
  }
  else {
    param_3 = 0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1090a2428; end: 1090a242f; -[SCNeoMediaSampleBuffer blockBuffer] */

undefined8 FUN_1090a2428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1090a2430; end: 1090a2437; -[SCNeoMediaSampleBuffer trackInfo] */

undefined8 FUN_1090a2430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1090a2438; end: 1090a2467; -[SCNeoMediaSampleBuffer .cxx_destruct] */

void FUN_1090a2438(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a2468; end: 1090a24bb;  */

void FUN_1090a2468(undefined8 param_1)

{
  undefined8 *unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000008 = unaff_x23[1];
  uStack0000000000000000 = *unaff_x23;
  uStack0000000000000010 = unaff_x23[2];
  uStack0000000000000030 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbb804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeAdd_110348408)(&stack0x00000038,&stack0x00000020);
  return;
}



/* Entry: 1090a24bc; end: 1090a2543; -[SCNeoMediaSampleBufferBlockAllocatorPoolEntry initWIthFormatDescription:] */

long FUN_1090a24bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001090a27f0(param_1,PTR_s_init_1125d9248);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_3;
    _CFRetain(param_3);
    uVar1 = 0;
    _CMMemoryPoolCreate();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _CMMemoryPoolGetAllocator();
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return param_1;
}



/* Entry: 1090a2544; end: 1090a25c7; -[SCNeoMediaSampleBufferBlockAllocatorPoolEntry dealloc] */

void FUN_1090a2544(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CFRelease(*(undefined8 *)(param_1 + 8));
  _CMMemoryPoolInvalidate(*(undefined8 *)(param_1 + 0x10));
  _CFRelease(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1127004d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090a25c8; end: 1090a25f3; -[SCNeoMediaSampleBufferBlockAllocatorPoolEntry isCompatibleWithFormatDescription:] */

bool FUN_1090a25c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _CMFormatDescriptionEqualIgnoringExtensionKeys(uVar1,param_3,0,0);
  return (int)uVar1 != 0;
}



/* Entry: 1090a25f4; end: 1090a25fb; -[SCNeoMediaSampleBufferBlockAllocatorPoolEntry blockAllocator] */

undefined8 FUN_1090a25f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090a25fc; end: 1090a2673; -[SCNeoMediaSampleBufferBlockAllocatorPool init] */

long FUN_1090a25fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001090a27f0(param_1,PTR_s_init_1125d9248);
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 1090a2674; end: 1090a27c3; -[SCNeoMediaSampleBufferBlockAllocatorPool blockAllocatorForFormatDescription:] */

undefined * FUN_1090a2674(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined **)(param_1 + 8);
  puVar2 = puVar5;
  _objc_retain();
  func_0x0001090a27d0();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar2 == (undefined *)0x0) {
      func_0x0001090a27fc();
      puVar6 = PTR_PTR_1126dd468;
      _objc_alloc(PTR_PTR_1126dd468);
      func_0x00010bfef940();
      func_0x00010befa120(*(undefined8 *)(param_1 + 8));
      func_0x00010bf1d220(puVar6);
LAB_1090a275c:
      puVar2 = puVar6;
      func_0x0001090a27fc();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return puVar6;
      }
      ___stack_chk_fail();
      func_0x0001090a27fc();
      __Unwind_Resume(puVar2);
      puVar2 = puVar2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar2,0);
      return puVar2;
    }
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar6 = *(undefined **)((long)puVar7 * 8);
      puVar3 = puVar6;
      func_0x00010c06ed20();
      if ((int)puVar3 != 0) {
        func_0x00010bf1d220(puVar6);
        goto LAB_1090a275c;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 < puVar2);
    func_0x0001090a27d0();
    puVar2 = puVar3;
  } while( true );
}



/* Entry: 1090a27c4; end: 1090a2803; -[SCNeoMediaSampleBufferBlockAllocatorPool .cxx_destruct] */

void FUN_1090a27c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a2804; end: 1090a289f; -[SCNeoMediaSampleBufferProcessingPipelineDecoderEntry initWithCodec:decoder:] */

undefined1 *
FUN_1090a2804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x0001090a42d8();
  func_0x0001090a4358();
  puStack_38 = PTR_PTR_1127004e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001090a4350();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x0001090a4358();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  func_0x0001090a42a8();
  func_0x0001090a428c();
  return (undefined1 *)puVar1;
}



/* Entry: 1090a28a0; end: 1090a28a7; -[SCNeoMediaSampleBufferProcessingPipelineDecoderEntry codec] */

undefined8 FUN_1090a28a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090a28a8; end: 1090a28af; -[SCNeoMediaSampleBufferProcessingPipelineDecoderEntry decoder] */

undefined8 FUN_1090a28a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090a28b0; end: 1090a28db; -[SCNeoMediaSampleBufferProcessingPipelineDecoderEntry .cxx_destruct] */

void FUN_1090a28b0(long param_1)

{
  func_0x0001090a42b0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090a28dc; end: 1090a2c6b; -[SCNeoMediaSampleBufferProcessingPipeline initWithOutput:codecRegistry:timebase:instruments:bufferQueueSize:queue:ignorePrecedingFramesOnSeek:maxDecodingFramesInFlight:decodeAndSortVideoFrames:maxNumberOfForwardDecodedFrames:enableSpsReorderDepth:discardStaleFramesOnSeek:trackProgressObserver:] */

undefined8 *
FUN_1090a28dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,char param_12,
             undefined4 param_13,long param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x0001090a42d8();
  _objc_retain(param_4);
  func_0x0001090a4350();
  func_0x0001090a4360();
  _objc_retain(param_17);
  uVar1 = 8;
  if (1 < param_7) {
    uVar1 = param_7;
  }
  puStack_68 = PTR_PTR_1127004f0;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x0001090a4358();
    uVar4 = puVar3[1];
    puVar3[1] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar3[3];
    puVar3[3] = param_4;
    _objc_release(uVar4);
    func_0x0001090a4350();
    uVar4 = puVar3[4];
    puVar3[4] = param_6;
    _objc_release(uVar4);
    func_0x0001090a4360();
    uVar4 = puVar3[6];
    puVar3[6] = param_8;
    _objc_release(uVar4);
    puVar3[0x16] = param_5;
    _CFRetain(param_5);
    puVar3[0x10] = param_11;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[10];
    puVar3[10] = puVar5;
    _objc_release(uVar4);
    *(undefined1 *)(puVar3 + 0x17) = 0;
    *(undefined1 *)((long)puVar3 + 99) = param_9;
    puVar5 = PTR__kCMTimeZero_110348670;
    uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    *(undefined8 *)((long)puVar3 + 0x6c) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *(undefined8 *)((long)puVar3 + 100) = uVar4;
    *(undefined8 *)((long)puVar3 + 0x74) = *(undefined8 *)(puVar5 + 0x10);
    *(char *)(puVar3 + 0x12) = param_12;
    puVar3[0x11] = param_14;
    _objc_retain(param_17);
    uVar4 = puVar3[2];
    puVar3[2] = param_17;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + 0x92) = (undefined1)param_15;
    *(undefined1 *)((long)puVar3 + 0x93) = param_15._1_1_;
    puVar3[0x13] = uVar1;
    iVar2 = (int)puVar3[2];
    func_0x00010c1e39c0();
    uVar6 = 0;
    if ((param_14 != 0) && ((*(byte *)((long)puVar3 + 0x92) & 1) == 0)) {
      uVar6 = (ulong)(param_14 * 3) >> 2;
      if (uVar1 - 1 <= uVar6) {
        uVar6 = uVar1 - 1;
      }
    }
    puVar3[0x14] = uVar6;
    if (puVar3[0x11] != 0) {
      puVar5 = PTR_PTR_1126dd470;
      _objc_alloc();
      func_0x00010c052660();
      uVar4 = puVar3[5];
      puVar3[5] = puVar5;
      _objc_release(uVar4);
      iVar2 = (int)puVar3[5];
      func_0x00010c18b5e0();
    }
    if (param_12 == '\0') {
      _CMBufferQueueGetCallbacksForUnsortedSampleBuffers();
    }
    else {
      _CMBufferQueueGetCallbacksForSampleBuffersSortedByOutputPTS();
    }
    func_0x0001090a4398();
    if (iVar2 != 0) {
      func_0x0001090a438c();
    }
    _CMBufferQueueGetCallbacksForUnsortedSampleBuffers();
    func_0x0001090a4398();
    if (iVar2 != 0) {
      func_0x0001090a438c();
    }
    func_0x0001090a43f4(puVar3[8],FUN_1090a2c6c);
    func_0x0001090a42b8();
    func_0x0001090a43f4(puVar3[8],0x1090a2c74);
    func_0x0001090a42b8();
    func_0x0001090a43e8(puVar3[8],FUN_1090a2c6c);
    func_0x0001090a42b8();
    func_0x0001090a43e8(puVar3[8],0x1090a2c7c);
    func_0x0001090a42b8();
    func_0x0001090a43f4(puVar3[7],0x1090a2c84);
    func_0x0001090a42b8();
    func_0x0001090a43f4(puVar3[7],0x1090a2c8c);
    func_0x0001090a42b8();
    func_0x0001090a43e8(puVar3[7],0x1090a2c84);
    func_0x0001090a42b8();
    func_0x0001090a43e8(puVar3[7],0x1090a2c94);
    func_0x0001090a42b8();
    func_0x00010bed4cc0(puVar3);
  }
  func_0x0001090a42d0();
  func_0x0001090a42a0();
  _objc_release(param_6);
  func_0x0001090a42c0();
  func_0x0001090a42a8();
  return puVar3;
}



/* Entry: 1090a2c6c; end: 1090a2c9b;  */

void FUN_1090a2c6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf67410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_decodedQueueStateDidChange__1125b76a8,1);
  return;
}



/* Entry: 1090a2c9c; end: 1090a2d23; -[SCNeoMediaSampleBufferProcessingPipeline dealloc] */

void FUN_1090a2c9c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1127004f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090a2d24; end: 1090a2d4f; -[SCNeoMediaSampleBufferProcessingPipeline _requiresDecoderForFormatDescription:] */

uint FUN_1090a2d24(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 200) != 0) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c263780(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1090a2d50; end: 1090a2f0f; -[SCNeoMediaSampleBufferProcessingPipeline _prepareDecoderWithFormatDescription:] */

ulong FUN_1090a2d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x58);
  if ((uVar2 == 0) || (func_0x00010bf2c3c0(uVar2,param_2,param_3), (uVar2 & 1) == 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x0001090a4350();
    func_0x0001090a42f0();
    lVar1 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar6 = 0;
      do {
        in_ZR = lRam0000000000000000 == lVar1;
        if (!(bool)in_ZR) {
          _objc_enumerationMutation(uVar5);
        }
        uVar7 = *(ulong *)(uVar6 * 8);
        uVar3 = uVar7;
        func_0x00010bf2c3c0();
        if ((uVar3 & 1) != 0) {
          func_0x0001090a4360();
          goto LAB_1090a2e98;
        }
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar2;
      } while (uVar6 < uVar2);
      func_0x0001090a42f0();
      uVar2 = uVar3;
    }
    func_0x0001090a428c();
    _CMFormatDescriptionGetMediaSubType(param_3);
    uVar7 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf3f000();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      uVar6 = 0;
      uVar2 = 0;
    }
    else {
      func_0x00010c0b70a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      if (*(long *)(param_1 + 200) != 0) {
        func_0x00010c106dc0();
        func_0x00010c1e0220(uVar7);
      }
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x50));
LAB_1090a2e98:
      uVar2 = *(ulong *)(param_1 + 0x58);
      *(ulong *)(param_1 + 0x58) = uVar7;
      _objc_release(uVar2);
      uVar6 = 1;
    }
    func_0x0001090a428c();
  }
  else {
    uVar6 = 1;
  }
  func_0x0001090a43d4(uVar4);
  if ((bool)in_ZR) {
    return uVar6;
  }
  ___stack_chk_fail();
  func_0x0001090a428c();
  func_0x0001090a42c8();
                    /* WARNING: Could not recover jumptable at 0x00010c1e37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return uVar2;
}



/* Entry: 1090a2f10; end: 1090a2f13; -[SCNeoMediaSampleBufferProcessingPipeline processedQueueStateDidChange:] */

void FUN_1090a2f10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setProcessedQueueState__112656818);
  return;
}



/* Entry: 1090a2f14; end: 1090a2f17; -[SCNeoMediaSampleBufferProcessingPipeline decodedQueueStateDidChange:] */

void FUN_1090a2f14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDecodedQueueState__112640348);
  return;
}



/* Entry: 1090a2f18; end: 1090a2f5b; -[SCNeoMediaSampleBufferProcessingPipeline _mutateProcessedBufferQueueWithBlock:] */

void FUN_1090a2f18(void)

{
  long unaff_x19;
  
  FUN_1090a427c();
  (**(code **)(unaff_x19 + 0x10))();
  func_0x00010bedc900();
  func_0x0001090a43b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a2f5c; end: 1090a2f97; -[SCNeoMediaSampleBufferProcessingPipeline _mutateDecodedBufferQueueWithBlock:] */

void FUN_1090a2f5c(void)

{
  long unaff_x19;
  
  FUN_1090a427c();
  (**(code **)(unaff_x19 + 0x10))();
  func_0x0001090a43b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090a2f98; end: 1090a3077; -[SCNeoMediaSampleBufferProcessingPipeline _didFinishProcessingSampleBuffer:flushId:error:] */

void FUN_1090a2f98(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x62) = 0;
  if (*(long *)(param_1 + 0x48) == param_4) {
    if (param_5 != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c149600();
      func_0x0001090a42c0();
      goto LAB_1090a304c;
    }
    if (param_3 != 0) {
      func_0x0001090a432c();
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_1090a3078;
      puStack_48 = &UNK_110ad79d8;
      lStack_40 = param_1;
      lStack_38 = param_3;
      func_0x00010be61a00(param_1,param_2,auStack_60);
      func_0x00010bf76de0(*(undefined8 *)(param_1 + 0x10));
    }
  }
  func_0x00010be80c00(param_1);
LAB_1090a304c:
  func_0x0001090a428c();
  return;
}



/* Entry: 1090a3078; end: 1090a314b;  */

void FUN_1090a3078(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x0001090a4380(param_2);
  _CMSampleBufferGetOutputPresentationTimeStamp(auStack_38,*(undefined8 *)(param_1 + 0x28));
  _CMSampleBufferGetDuration(auStack_50,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x0001090a4318(uStack_40);
  func_0x00010c286f20(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  FUN_109096454();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf99fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    func_0x00010bf75d20(uVar2);
  }
  else {
    func_0x00010bf75d40(uVar2);
  }
  func_0x0001090a428c();
  return;
}



/* Entry: 1090a314c; end: 1090a3233; -[SCNeoMediaSampleBufferProcessingPipeline _updateOutputRegistration] */

void FUN_1090a314c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c1157a0();
  if (lVar1 == 0) {
    if (*(byte *)(param_1 + 0x61) != 0) {
      *(undefined1 *)(param_1 + 0x61) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf2ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_cancelReadyToEnqueueSampleBuffer_1125a94e0);
      return;
    }
  }
  else if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x61) = 1;
    _objc_initWeak(auStack_38,param_1);
    func_0x0001090a432c();
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0e5e40(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1090a3234; end: 1090a3267;  */

void FUN_1090a3234(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be18e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090a3268; end: 1090a32b7; -[SCNeoMediaSampleBufferProcessingPipeline isBlockedOnOutputConsumption] */

uint FUN_1090a3268(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    lVar1 = param_1;
    func_0x00010c1157a0();
    func_0x00010be74ba0(param_1);
    uVar2 = (uint)(lVar1 == 2) | (uint)param_1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}



/* Entry: 1090a32b8; end: 1090a32eb; -[SCNeoMediaSampleBufferProcessingPipeline hasRegisteredToOutput] */

bool FUN_1090a32b8(long param_1)

{
  if (*(char *)(param_1 + 0x61) == '\x01') {
    func_0x00010c1157a0();
    return param_1 != 0;
  }
  return false;
}



/* Entry: 1090a32ec; end: 1090a34df; -[SCNeoMediaSampleBufferProcessingPipeline _dequeueNextBufferToProcessIfNeededInQueue:] */

void FUN_1090a32ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  if (((*(byte *)(param_1 + 0x62) & 1) == 0) &&
     (((uVar2 = param_3, _CMBufferQueueGetBufferCount(), *(ulong *)(param_1 + 0xa0) <= uVar2 ||
       (*(char *)(param_1 + 0xa8) == '\x01')) && (_CMBufferQueueDequeueAndRetain(), param_3 != 0))))
  {
    *(undefined1 *)(param_1 + 0x62) = 1;
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    lVar3 = param_1;
    func_0x00010c115b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010bdfe300(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      FUN_109096454();
      uVar1 = (undefined4)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c1003c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18c40();
      func_0x0001090a42a0();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c1003c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c115b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090a432c();
      func_0x0001090a4360();
      uStack_50 = uVar1;
      _objc_copyWeak(auStack_60,auStack_48);
      uStack_58 = uVar5;
      func_0x00010c115380(param_1);
      func_0x0001090a42d0();
      _objc_destroyWeak(auStack_60);
      _objc_release(uVar4);
      func_0x0001090a42a0();
      _objc_destroyWeak(auStack_48);
    }
    _CFRelease(param_3);
  }
  return;
}



/* Entry: 1090a34e0; end: 1090a354f;  */

void FUN_1090a34e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090a42d8();
  func_0x00010bf95880(*(undefined8 *)(param_1 + 0x20));
  _objc_loadWeakRetained(param_1 + 0x28);
  func_0x00010bdfe300();
  func_0x0001090a42a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090a3550; end: 1090a358b; -[SCNeoMediaSampleBufferProcessingPipeline _forwardProcessedBuffersToOutput] */

void FUN_1090a3550(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  
  func_0x0001090a432c();
  func_0x0001090a4368(FUN_1090a358c,0xc2000000);
  func_0x00010be61a00(param_1,param_2,auStack_38);
  return;
}



/* Entry: 1090a358c; end: 1090a36eb;  */

void FUN_1090a358c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  while( true ) {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c07bce0();
    if ((iVar1 == 0) || (lVar2 = param_2, _CMBufferQueueDequeueAndRetain(), lVar2 == 0)) break;
    _CMSampleBufferGetPresentationTimeStamp(auStack_58);
    lVar5 = *(long *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(lVar5 + 0x6c);
    uStack_70 = *(undefined8 *)(lVar5 + 100);
    uStack_60 = *(undefined8 *)(lVar5 + 0x74);
    puVar3 = auStack_58;
    _CMTimeCompare(puVar3,&uStack_70);
    if ((((int)puVar3 < 0) &&
        (lVar5 = lVar2, _CMSampleBufferGetSampleAttachmentsArray(lVar2,1), lVar5 != 0)) &&
       (lVar4 = lVar5, _CFArrayGetCount(), lVar4 != 0)) {
      _CFArrayGetValueAtIndex(lVar5,0);
      _CFDictionarySetValue();
    }
    func_0x00010bf963c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
      _CMSampleBufferGetOutputPresentationTimeStamp(auStack_58,lVar2);
      _CMSampleBufferGetDuration(&uStack_70,lVar2);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x0001090a4318(uStack_60);
      func_0x00010c286ec0(uVar6);
    }
    _CFRelease(lVar2);
  }
  func_0x00010bf76680(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 1090a36ec; end: 1090a3727; -[SCNeoMediaSampleBufferProcessingPipeline _processDecodedBuffers] */

void FUN_1090a36ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  
  func_0x0001090a432c();
  func_0x0001090a4368(FUN_1090a3728,0xc2000000);
  func_0x00010be619c0(param_1,param_2,auStack_38);
  return;
}



/* Entry: 1090a3728; end: 1090a3757;  */

void FUN_1090a3728(long param_1)

{
  ulong uVar1;
  
  do {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bdfae60();
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 1090a3758; end: 1090a377f; -[SCNeoMediaSampleBufferProcessingPipeline seekTo:] */

void FUN_1090a3758(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001090a43c8(*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Entry: 1090a3780; end: 1090a37af; -[SCNeoMediaSampleBufferProcessingPipeline _flush] */

void FUN_1090a3780(void)

{
  func_0x0001090a43c8(*(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10));
  return;
}



/* Entry: 1090a37b0; end: 1090a383b; -[SCNeoMediaSampleBufferProcessingPipeline _flushToTime:] */

void FUN_1090a37b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  _CMBufferQueueReset(*(undefined8 *)(param_1 + 0x38));
  _CMBufferQueueReset(*(undefined8 *)(param_1 + 0x40));
  uVar1 = param_3[2];
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0x6c) = param_3[1];
  *(undefined8 *)(param_1 + 100) = uVar2;
  *(undefined8 *)(param_1 + 0x74) = uVar1;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  func_0x00010bfb2f20(*(undefined8 *)(param_1 + 0x58));
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x00010c157100(*(undefined8 *)(param_1 + 0x58),param_2,&uStack_40);
  func_0x00010bf3a660(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bedc900(param_1);
  func_0x0001090a43b8();
  return;
}



/* Entry: 1090a383c; end: 1090a387f; -[SCNeoMediaSampleBufferProcessingPipeline notifyEndOfStream] */

void FUN_1090a383c(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0xa8) = 1;
  uVar1 = *(ulong *)(param_1 + 0x58);
  _objc_opt_respondsToSelector(uVar1,PTR_s_endOfStream_1125c2d58);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf94ec0(*(undefined8 *)(param_1 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be80c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processDecodedBuffers_11257dca0);
  return;
}



/* Entry: 1090a3880; end: 1090a38a7; -[SCNeoMediaSampleBufferProcessingPipeline prepareForLoop] */

void FUN_1090a3880(long param_1)

{
  func_0x00010be80c00();
  *(undefined1 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bedc910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateOutputRegistration_112594be8);
  return;
}



/* Entry: 1090a38a8; end: 1090a39a7; -[SCNeoMediaSampleBufferProcessingPipeline reset] */

void FUN_1090a38a8(ulong param_1)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar6 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  func_0x00010be180c0();
  func_0x0001090a43ac();
  *(undefined1 *)(param_1 + 0x91) = 0;
  uVar2 = *(char *)(param_1 + 0x92) == '\x01';
  if ((bool)uVar2) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x50);
  func_0x0001090a4358();
  func_0x0001090a4304();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar4 = *(ulong *)(uVar8 * 8);
      func_0x00010c137fe0();
      uVar8 = uVar8 + 1;
      uVar2 = uVar8 == uVar3;
    } while (uVar8 < uVar3);
    func_0x0001090a4304();
    uVar3 = uVar4;
  }
  func_0x0001090a42a8();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c12adc0();
  func_0x0001090a43d4(uVar6);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090a42a8();
  func_0x0001090a42e0();
  func_0x0001090a427c();
  uVar6 = *(undefined8 *)(lVar7 + 0x20);
  *(undefined8 *)(lVar7 + 0x20) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1090a39a8; end: 1090a39c7; -[SCNeoMediaSampleBufferProcessingPipeline setInstruments:] */

void FUN_1090a39a8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1090a427c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090a39c8; end: 1090a3a17; -[SCNeoMediaSampleBufferProcessingPipeline _playableRangeIsUnderMaxThreshold] */

bool FUN_1090a39c8(long param_1)

{
  bool bVar1;
  ulong auStack_40 [4];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010c0fec80(auStack_40);
    bVar1 = auStack_40[0] <= *(long *)(param_1 + 0x88) - 1U;
  }
  return bVar1;
}



/* Entry: 1090a3a18; end: 1090a3ad7; -[SCNeoMediaSampleBufferProcessingPipeline _updateCanEnqueueSampleBuffer] */

void FUN_1090a3a18(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  
  lVar2 = param_1;
  func_0x00010bf673e0();
  lVar3 = param_1;
  func_0x00010c1157a0();
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 == 0) {
    iVar1 = 1;
  }
  else {
    func_0x00010c07bcc0();
    iVar1 = (int)lVar4;
  }
  lVar4 = param_1;
  func_0x00010be74ba0();
  bVar5 = 0;
  if (((lVar2 != 2 && lVar3 != 2) && (iVar1 != 0)) && ((int)lVar4 != 0)) {
    bVar5 = *(byte *)(param_1 + 0xb8);
  }
  bVar5 = bVar5 & 1;
  if ((*(byte *)(param_1 + 0x60) != bVar5) && (*(byte *)(param_1 + 0x60) = bVar5, bVar5 != 0)) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


