/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b18758; end: 107b1877b; -[SCDiscoverFeedS2RNetworkInfo copyWithZone:] */

undefined8 FUN_107b18758(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1877c; end: 107b1882b; -[SCDiscoverFeedS2RNetworkInfo encodeWithCoder:] */

void FUN_107b1877c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ead5b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ead5d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ead5f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ead618);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ead638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110ead658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1882c; end: 107b188cf; -[SCDiscoverFeedS2RNetworkInfo hash] */

undefined8 * FUN_107b1882c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107b189b0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107b189bc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_107b189bc;
                }
                goto LAB_107b189b0;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107b189bc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107b188d0; end: 107b189d7; -[SCDiscoverFeedS2RNetworkInfo isEqual:] */

long FUN_107b188d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107b189b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b189bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_107b189bc;
                }
                goto LAB_107b189b0;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107b189bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b189d8; end: 107b189df; -[SCDiscoverFeedS2RNetworkInfo requestId] */

undefined8 FUN_107b189d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b189e0; end: 107b189e7; -[SCDiscoverFeedS2RNetworkInfo logTime] */

undefined8 FUN_107b189e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107b189e8; end: 107b189ef; -[SCDiscoverFeedS2RNetworkInfo requestInfo] */

undefined8 FUN_107b189e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107b189f0; end: 107b189f7; -[SCDiscoverFeedS2RNetworkInfo responseInfo] */

undefined8 FUN_107b189f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107b189f8; end: 107b189ff; -[SCDiscoverFeedS2RNetworkInfo responseType] */

undefined8 FUN_107b189f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107b18a00; end: 107b18a07; -[SCDiscoverFeedS2RNetworkInfo resquestType] */

undefined8 FUN_107b18a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107b18a08; end: 107b18a67; -[SCDiscoverFeedS2RNetworkInfo .cxx_destruct] */

void FUN_107b18a08(long param_1)

{
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



/* Entry: 107b18a68; end: 107b18a83; +[SCDiscoverFeedS2RNetworkInfoBuilder discoverFeedS2RNetworkInfo] */

void FUN_107b18a68(void)

{
  _objc_alloc_init(PTR_PTR_1126d6818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b18a84; end: 107b18c67; +[SCDiscoverFeedS2RNetworkInfoBuilder discoverFeedS2RNetworkInfoFromExistingDiscoverFeedS2RNetworkInfo:] */

void FUN_107b18a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126d6818;
  _objc_retain(param_3);
  func_0x00010bf81d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b70c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0b1a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b3140(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c135860(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b70e0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c13b920(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b7300(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c13bd20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b7360(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c13bee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar13 = puVar11;
  func_0x00010c2b73a0(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107b18c68; end: 107b18c9f; -[SCDiscoverFeedS2RNetworkInfoBuilder build] */

void FUN_107b18c68(void)

{
  _objc_alloc(PTR_PTR_1126d6820);
  func_0x00010c03ef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b18ca0; end: 107b18cd7; -[SCDiscoverFeedS2RNetworkInfoBuilder withRequestId:] */

long FUN_107b18ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b18cd8; end: 107b18d0f; -[SCDiscoverFeedS2RNetworkInfoBuilder withLogTime:] */

long FUN_107b18cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b18d10; end: 107b18d47; -[SCDiscoverFeedS2RNetworkInfoBuilder withRequestInfo:] */

long FUN_107b18d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b18d48; end: 107b18d7f; -[SCDiscoverFeedS2RNetworkInfoBuilder withResponseInfo:] */

long FUN_107b18d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b18d80; end: 107b18db7; -[SCDiscoverFeedS2RNetworkInfoBuilder withResponseType:] */

long FUN_107b18d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b18db8; end: 107b18def; -[SCDiscoverFeedS2RNetworkInfoBuilder withResquestType:] */

long FUN_107b18db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b18df0; end: 107b18e4f; -[SCDiscoverFeedS2RNetworkInfoBuilder .cxx_destruct] */

void FUN_107b18df0(long param_1)

{
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



/* Entry: 107b18e50; end: 107b1906f;  */

undefined * FUN_107b18e50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar1 = param_1;
  func_0x00010c0ece40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bf32220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar11;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  do {
    if (uVar1 == 0) {
      _objc_release(uVar11);
      puVar3 = puVar7;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
        ___stack_chk_fail();
        puVar5 = &uStack_250;
        lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new();
        lStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        plStack_240 = (long *)0x0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        _objc_retain(param_1);
        uVar1 = param_1;
        func_0x00010bf52a60();
        if (uVar1 != 0) {
          lVar10 = *plStack_240;
          do {
            uVar11 = 0;
            do {
              if (*plStack_240 != lVar10) {
                _objc_enumerationMutation(param_1);
              }
              uVar4 = *(undefined8 *)(lStack_248 + uVar11 * 8);
              FUN_107b18e50();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar7);
              _objc_release(uVar4);
              uVar11 = uVar11 + 1;
            } while (uVar1 != uVar11);
            uVar1 = param_1;
            puVar5 = &uStack_250;
            func_0x00010bf52a60();
          } while (uVar1 != 0);
        }
        _objc_release(param_1);
        puVar3 = puVar7;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
          ___stack_chk_fail();
          _objc_retain();
          _objc_retain(param_2);
          _objc_retain(puVar5);
          uVar1 = param_1;
          func_0x00010bfdcb40();
          if ((uVar1 & 1) == 0) {
            func_0x00010c0a18e0(param_2);
            puVar7 = (undefined *)0x0;
          }
          else {
            uVar1 = param_1;
            func_0x00010c252d60(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf3ec40();
            func_0x00010c0a18c0(param_2);
            uVar11 = uVar1;
            func_0x00010bf3ec40(uVar1);
            puVar7 = (undefined *)(ulong)((int)uVar11 == 1);
            _objc_release(uVar1);
          }
          _objc_release(puVar5);
          _objc_release(param_2);
          _objc_release(param_1);
          return puVar7;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return puVar3;
    }
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(uVar11);
      }
      lVar8 = *(long *)(uVar12 * 8);
      lVar2 = lVar8;
      func_0x00010bf31ee0();
      if ((int)lVar2 == 4) {
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
LAB_107b18f9c:
        _objc_release(lVar8);
      }
      else {
        lVar2 = lVar8;
        func_0x00010bf31ee0();
        if ((int)lVar2 == 0x30) {
          func_0x00010c14bb60();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar8;
          func_0x00010c14bc20();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          goto LAB_107b18f9c;
        }
        lVar9 = 0;
      }
      lVar2 = lVar9;
      func_0x00010c08fa60();
      if ((lVar2 != 0) && (puVar3 = puVar7, func_0x00010bf4b900(), ((ulong)puVar3 & 1) == 0)) {
        func_0x00010befa120(puVar7);
      }
      _objc_release(lVar9);
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar12);
    uVar1 = uVar11;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107b19070; end: 107b191c3;  */

undefined * FUN_107b19070(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lStack_118 + uVar7 * 8);
        FUN_107b18e50();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar5);
        _objc_release(uVar2);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
      uVar1 = param_1;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
  }
  _objc_release(param_1);
  puVar3 = puVar5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(puVar4);
  uVar1 = param_1;
  func_0x00010bfdcb40();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0a18e0(param_2);
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c252d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c0a18c0(param_2);
    uVar7 = uVar1;
    func_0x00010bf3ec40(uVar1);
    puVar5 = (undefined *)(ulong)((int)uVar7 == 1);
    _objc_release(uVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar5;
}



/* Entry: 107b191c4; end: 107b19287;  */

bool FUN_107b191c4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bfdcb40();
  if ((uVar2 & 1) == 0) {
    func_0x00010c0a18e0(param_2);
    bVar1 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010c252d60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c0a18c0(param_2);
    uVar3 = uVar2;
    func_0x00010bf3ec40(uVar2);
    bVar1 = (int)uVar3 == 1;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107b19288; end: 107b19813;  */

void FUN_107b19288(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined1 *puStack_3f8;
  long lStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined1 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined1 **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_158 = param_4;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lStack_140 = param_5;
  _objc_retain(param_5);
  lStack_138 = param_6;
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x00010c258b60();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = lVar1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    lStack_160 = lVar8;
    do {
      param_5 = 0;
      lStack_150 = lVar1;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lStack_148);
        }
        unaff_x27 = *(undefined8 *)(lStack_128 + param_5 * 8);
        func_0x00010c125a80(param_1);
        func_0x00010c1e96a0(unaff_x27);
        uVar2 = unaff_x27;
        FUN_107b191c4(unaff_x27,param_2,param_3);
        if ((int)uVar2 == 0) {
          if (lStack_138 != 0) {
            (**(code **)(lStack_138 + 0x10))(lStack_138,unaff_x27);
          }
        }
        else {
          func_0x00010afb7960();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = unaff_x27;
          func_0x00010bfa3f40(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa4340();
          unaff_x28 = uVar2;
          func_0x00010bf979e0();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lStack_140;
          _objc_release(uVar9);
          _objc_release(uVar2);
          func_0x00010c0b0e40(param_2);
          if (lVar1 != 0) {
            (**(code **)(lStack_140 + 0x10))(lStack_140,unaff_x27);
          }
          _objc_release(unaff_x28);
          lVar8 = lStack_160;
          unaff_x21 = param_3;
          lVar1 = lStack_150;
        }
        param_5 = param_5 + 1;
      } while (lVar1 != param_5);
      lVar1 = lStack_148;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lStack_148);
  _objc_release(lStack_138);
  _objc_release(lStack_140);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uStack_168 = 0x107b194dc;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c0 = unaff_x28;
  uStack_1b8 = unaff_x27;
  lStack_1b0 = param_2;
  lStack_1a8 = param_3;
  lStack_1a0 = param_1;
  lStack_198 = unaff_x23;
  lStack_190 = param_5;
  lStack_188 = unaff_x21;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  lVar8 = lVar1;
  func_0x00010c13b980();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar8 != 0) {
    unaff_x20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    lVar8 = lVar1;
    func_0x00010c13b960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      param_3 = *plStack_280;
      do {
        param_2 = 0;
        do {
          if (*plStack_280 != param_3) {
            _objc_enumerationMutation(lVar8);
          }
          unaff_x23 = *(long *)(lStack_288 + param_2 * 8);
          lVar10 = unaff_x23;
          func_0x00010c252d60();
          if (((int)lVar10 == 1) || (lVar10 = unaff_x23, func_0x00010c252d60(), (int)lVar10 == 3)) {
            func_0x00010bf454e0();
            _objc_retainAutoreleasedReturnValue();
            param_1 = unaff_x23;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x20);
            _objc_release(param_1);
            _objc_release(unaff_x23);
          }
          param_2 = param_2 + 1;
        } while (lVar3 != param_2);
        lVar3 = lVar8;
        func_0x00010bf52a60();
        param_5 = 0;
      } while (lVar3 != 0);
    }
    _objc_release(lVar8);
    puVar4 = unaff_x20;
    func_0x00010bf51e00();
    _objc_release(unaff_x20);
  }
  lVar8 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
    ___stack_chk_fail();
    puVar7 = &uStack_3c0;
    uStack_298 = 0x107b1968c;
    lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_2f0 = unaff_x28;
    uStack_2e8 = unaff_x27;
    lStack_2e0 = param_2;
    lStack_2d8 = param_3;
    lStack_2d0 = param_1;
    lStack_2c8 = unaff_x23;
    lStack_2c0 = param_5;
    puStack_2b8 = puVar4;
    puStack_2b0 = unaff_x20;
    lStack_2a8 = lVar1;
    ppuStack_2a0 = &puStack_170;
    _objc_retain();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    lVar1 = lVar8;
    func_0x00010c123320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar10 = *plStack_3b0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_3b0 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          uVar9 = *(undefined8 *)(lStack_3b8 + lVar11 * 8);
          uVar2 = uVar9;
          func_0x00010bf31ee0();
          if ((int)uVar2 == 4) {
            func_0x00010bf454e0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar9;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(uVar2);
            _objc_release(uVar9);
          }
          lVar11 = lVar11 + 1;
        } while (lVar3 != lVar11);
        lVar3 = lVar1;
        puVar7 = &uStack_3c0;
        func_0x00010bf52a60();
        param_5 = 0;
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    puVar4 = puVar5;
    func_0x00010bf51e00();
    _objc_release(puVar5);
    lVar1 = lVar8;
    _objc_release(lVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
      ___stack_chk_fail();
      pcStack_3c8 = FUN_107b19814;
      lStack_3f0 = param_5;
      puStack_3e8 = puVar4;
      puStack_3e0 = puVar5;
      lStack_3d8 = lVar8;
      pppuStack_3d0 = &ppuStack_2a0;
      _objc_retain(puVar7);
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar4);
      puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_410 = 0xc2000000;
      pcStack_408 = FUN_107b19930;
      puStack_400 = &UNK_1109fc5b0;
      puStack_3f8 = (undefined1 *)puVar7;
      _objc_retain(puVar7);
      ppuVar6 = &puStack_418;
      _objc_retainBlock(ppuVar6);
      func_0x00010be89ee0(lVar1);
      _objc_release(ppuVar6);
      _objc_release(puStack_3f8);
      _objc_release(puVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b19814; end: 107b1992f; +[SCNotificationLegacyPushRegistrar registerUserNotificationSettingsWithUserNotTrackedLogger:] */

void FUN_107b19814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b19930;
  puStack_40 = &UNK_1109fc5b0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  ppuVar2 = &puStack_58;
  _objc_retainBlock(ppuVar2);
  func_0x00010be89ee0(param_1,param_2,ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107b19930; end: 107b1997f;  */

void FUN_107b19930(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b19980; end: 107b199bb; +[SCNotificationLegacyPushRegistrar _isNotificationPermissionRequestSkipEnabled] */

undefined8 FUN_107b19980(void)

{
  if (lRam00000001137274f0 != -1) {
    func_0x00010002a2fc(0x1137274f0,&PTR___NSConcreteGlobalBlock_1109fc730);
  }
  return 0;
}



/* Entry: 107b199bc; end: 107b19a97; +[SCNotificationLegacyPushRegistrar _registerUserNotificationSettingsWithLogEventBlock:] */

void FUN_107b199bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  uRam00000001137274f8 = 0;
  uVar2 = param_1;
  func_0x00010be42500();
  if ((int)uVar2 == 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107b19a98;
    puStack_48 = &UNK_1109fc5e0;
    uStack_38 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010c134a60(puVar1,param_2,0x27,&puStack_60);
    _objc_release(uStack_40);
  }
  else {
    func_0x00010bdffd40(param_1,param_2,0,param_3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107b19a98; end: 107b19aa7;  */

void FUN_107b19a98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdffd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__didRegisterUserNotificationSett_11255d8f0,
             param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107b19aa8; end: 107b19ab7; +[SCNotificationLegacyPushRegistrar didShowNotificationPrompt] */

void FUN_107b19aa8(void)

{
  uRam00000001137274e8 = 1;
  return;
}



/* Entry: 107b19ab8; end: 107b19abf; +[SCNotificationLegacyPushRegistrar _updateNotificationsSettingsOnWillEnterForeground] */

void FUN_107b19ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNotificationsSetting__112594ab0,0);
  return;
}



/* Entry: 107b19ac0; end: 107b19b8b; +[SCNotificationLegacyPushRegistrar _updateNotificationsSetting:] */

void FUN_107b19ac0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_3 & 1) == 0) {
    lVar3 = 0;
    _dispatch_semaphore_create();
  }
  else {
    lVar3 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  func_0x00010bfc81e0(puVar1);
  _objc_release(puVar1);
  if (lVar3 != 0) {
    uVar2 = 0;
    _dispatch_time(0,100000000);
    _dispatch_semaphore_wait(lVar3,uVar2);
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  return;
}



/* Entry: 107b19b8c; end: 107b19f33;  */

void FUN_107b19b8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf10fa0();
  puVar2 = PTR_PTR_1126d6828;
  bRam000000011323ff48 = lVar3 == 2;
  uRam00000001137274f8 = 1;
  _objc_retain(param_2);
  _objc_alloc_init();
  func_0x00010bf10fa0(param_2);
  func_0x00010c16ca40(puVar2);
  func_0x00010c09fd00();
  func_0x00010c1c0060(puVar2);
  func_0x00010bf31940();
  func_0x00010c179580(puVar2);
  func_0x00010beff6a0();
  func_0x00010c166a40(puVar2);
  func_0x00010bf15440();
  func_0x00010c16eb00(puVar2);
  func_0x00010c247360();
  _objc_release(param_2);
  func_0x00010c206940(puVar2);
  _objc_release(param_2);
  uVar1 = puRam0000000113727500;
  puRam0000000113727500 = puVar2;
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    _dispatch_semaphore_signal();
  }
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d17c8);
  lVar4 = lVar3;
  func_0x00010beecc40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d17c8);
  lVar5 = lVar3;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126ce100;
  if ((bRam000000011323ff48 & 1) == 0) {
    func_0x00010bf80d20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf926c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar4;
  func_0x00010bfc1d60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar5);
  _objc_retain(lVar5);
  _objc_retain(lVar5);
  _objc_retain(puVar2);
  func_0x00010c0c0ea0(lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  puVar8 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107b19f34; end: 107b19f43;  */

void FUN_107b19f34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_enabledSettingProvider_1125c2430);
  return;
}



/* Entry: 107b19f44; end: 107b19ff7;  */

void FUN_107b19f44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc1d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b19ff8;
  puStack_40 = &UNK_1109fc670;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010c285820(uVar2,param_2,uVar3,&puStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  return;
}



/* Entry: 107b19ff8; end: 107b19ffb;  */

void FUN_107b19ff8(void)

{
  return;
}



/* Entry: 107b19ffc; end: 107b1a08f;  */

void FUN_107b19ffc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if ((bRam000000011323ff48 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc1d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ce100;
  func_0x00010bf80d20(PTR_PTR_1126ce100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285820(uVar2,param_2,puVar3,&PTR___NSConcreteGlobalBlock_1109fc6c0);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b1a090; end: 107b1a093;  */

void FUN_107b1a090(void)

{
  return;
}



/* Entry: 107b1a094; end: 107b1a12b;  */

void FUN_107b1a094(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (cRam000000011323ff48 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfc1d60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ce100;
    func_0x00010bf926c0(PTR_PTR_1126ce100);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285820(uVar2,param_2,puVar3,&PTR___NSConcreteGlobalBlock_1109fc6e0);
    _objc_release(puVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b1a12c; end: 107b1a12f;  */

void FUN_107b1a12c(void)

{
  return;
}



/* Entry: 107b1a130; end: 107b1a163; +[SCNotificationLegacyPushRegistrar notificationsPermissionNotGranted] */

byte FUN_107b1a130(undefined8 param_1,undefined8 param_2)

{
  if ((bRam00000001137274f8 & 1) == 0) {
    func_0x00010bedc420(param_1,param_2,0);
  }
  return (bRam000000011323ff48 ^ 0xff) & 1;
}



/* Entry: 107b1a164; end: 107b1a1c7; +[SCNotificationLegacyPushRegistrar notificationPermissionSettings] */

void FUN_107b1a164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((bRam00000001137274f8 & 1) == 0) {
    func_0x00010bedc420(param_1,param_2,0);
  }
  if (puRam0000000113727500 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d6828;
    _objc_alloc_init();
    puVar1 = puRam0000000113727500;
    puRam0000000113727500 = puVar2;
    _objc_release(puVar1);
  }
  puVar1 = puRam0000000113727500;
  _objc_retain(puRam0000000113727500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b1a1c8; end: 107b1a343; +[SCNotificationLegacyPushRegistrar _didRegisterUserNotificationSettings:logEventBlock:] */

void FUN_107b1a1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b6df0;
    _objc_alloc_init(PTR_PTR_1126b6df0);
    func_0x00010c1dab80();
    func_0x00010c160cc0(puVar1);
    func_0x00010c1dab00(puVar1);
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  if (cRam00000001137274e8 == '\x01') {
    puVar1 = PTR_PTR_1126d6830;
    _objc_alloc_init(PTR_PTR_1126d6830);
    func_0x00010c18d420();
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_release(puVar1);
  }
  func_0x00010bedc420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b1a344; end: 107b1a34b; +[SCNotificationLegacyPushRegistrar hasRegisteredAPNSToken] */

undefined8 FUN_107b1a344(void)

{
  return 0;
}



/* Entry: 107b1a34c; end: 107b1a3a7; +[SCNotificationLegacyPushRegistrar logOut:] */

void FUN_107b1a34c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c293260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    func_0x00010c1d0640(param_3,param_2,0,&PTR____CFConstantStringClassReference_110ead698);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 107b1a3a8; end: 107b1a3ab; +[SCNotificationLegacyPushRegistrar didFailToRegisterForRemoteNotificationsWithError:] */

void FUN_107b1a3a8(void)

{
  return;
}



/* Entry: 107b1a3ac; end: 107b1a3af; +[SCNotificationLegacyPushRegistrar didInvalidatePushTokenForType:] */

void FUN_107b1a3ac(void)

{
  return;
}



/* Entry: 107b1a3b0; end: 107b1a407;  */

void FUN_107b1a3b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b1a408; end: 107b1a40f; -[SCNotificationDataServices enabledSettingProvider] */

undefined8 FUN_107b1a408(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b1a410; end: 107b1a417; -[SCNotificationDataServices privacySettingProvider] */

undefined8 FUN_107b1a410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107b1a418; end: 107b1a41f; -[SCNotificationDataServices deviceTokenProvider] */

undefined8 FUN_107b1a418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107b1a420; end: 107b1a427; -[SCNotificationDataServices deviceVoipTokenProvider] */

undefined8 FUN_107b1a420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107b1a428; end: 107b1a42f; -[SCNotificationDataServices deviceLPSETokenProvider] */

undefined8 FUN_107b1a428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107b1a430; end: 107b1a437; -[SCNotificationDataServices enabledSettingMutator] */

undefined8 FUN_107b1a430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107b1a438; end: 107b1a43f; -[SCNotificationDataServices privacySettingMutator] */

undefined8 FUN_107b1a438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107b1a440; end: 107b1a447; -[SCNotificationDataServices deviceTokenMutator] */

undefined8 FUN_107b1a440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107b1a448; end: 107b1a44f; -[SCNotificationDataServices bitmojiSettingMutator] */

undefined8 FUN_107b1a448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107b1a450; end: 107b1a457; -[SCNotificationDataServices deviceVoipTokenMutator] */

undefined8 FUN_107b1a450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107b1a458; end: 107b1a45f; -[SCNotificationDataServices devicLPSETokenMutator] */

undefined8 FUN_107b1a458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107b1a460; end: 107b1a507; -[SCNotificationDataServices .cxx_destruct] */

void FUN_107b1a460(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 107b1a508; end: 107b1a50f; -[SCNotificationDataProvider currentValue] */

undefined8 FUN_107b1a508(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b1a510; end: 107b1a517; -[SCNotificationDataProvider updates] */

undefined8 FUN_107b1a510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107b1a518; end: 107b1a547; -[SCNotificationDataProvider .cxx_destruct] */

void FUN_107b1a518(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b1a548; end: 107b1a593; +[SCUserNotificationPrivacySetting everyone] */

void FUN_107b1a548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce110;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1a594; end: 107b1a5df; +[SCUserNotificationPrivacySetting friends] */

void FUN_107b1a594(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce110;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1a5e0; end: 107b1a627; +[SCUserNotificationPrivacySetting unknown] */

void FUN_107b1a5e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce110;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1a628; end: 107b1a7a3; -[SCUserNotificationPrivacySetting initWithCoder:] */

undefined8 * FUN_107b1a628(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126f9dc8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_107b1a730;
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_107b1a730:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 107b1a7a4; end: 107b1a7c7; -[SCUserNotificationPrivacySetting copyWithZone:] */

undefined8 FUN_107b1a7a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1a7c8; end: 107b1a81b; -[SCUserNotificationPrivacySetting encodeWithCoder:] */

void FUN_107b1a7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + 8) < 3) {
    func_0x00010c14cb00(param_3,param_2,(&PTR_PTR_1109fc750)[*(ulong *)(param_1 + 8)],
                        &PTR____CFConstantStringClassReference_110db7018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1a81c; end: 107b1a823; -[SCUserNotificationPrivacySetting hash] */

undefined8 FUN_107b1a81c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b1a824; end: 107b1a867; -[SCUserNotificationPrivacySetting internalInit] */

void FUN_107b1a824(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9dc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1a868; end: 107b1a8ef; -[SCUserNotificationPrivacySetting isEqual:] */

bool FUN_107b1a868(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107b1a8f0; end: 107b1a98b; -[SCUserNotificationPrivacySetting matchUnknown:everyone:friends:] */

void FUN_107b1a8f0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1a98c; end: 107b1a9d7; +[SCUserNotificationSetting disabled] */

void FUN_107b1a98c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1a9d8; end: 107b1aa23; +[SCUserNotificationSetting enabled] */

void FUN_107b1a9d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1aa24; end: 107b1aa6b; +[SCUserNotificationSetting unknown] */

void FUN_107b1aa24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1aa6c; end: 107b1abe7; -[SCUserNotificationSetting initWithCoder:] */

undefined8 * FUN_107b1aa6c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126f9dd0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_107b1ab74;
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_107b1ab74:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 107b1abe8; end: 107b1ac0b; -[SCUserNotificationSetting copyWithZone:] */

undefined8 FUN_107b1abe8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1ac0c; end: 107b1ac5f; -[SCUserNotificationSetting encodeWithCoder:] */

void FUN_107b1ac0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + 8) < 3) {
    func_0x00010c14cb00(param_3,param_2,(&PTR_PTR_1109fc768)[*(ulong *)(param_1 + 8)],
                        &PTR____CFConstantStringClassReference_110db7018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1ac60; end: 107b1ac67; -[SCUserNotificationSetting hash] */

undefined8 FUN_107b1ac60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b1ac68; end: 107b1acab; -[SCUserNotificationSetting internalInit] */

void FUN_107b1ac68(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9dd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1acac; end: 107b1ad33; -[SCUserNotificationSetting isEqual:] */

bool FUN_107b1acac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107b1ad34; end: 107b1adcf; -[SCUserNotificationSetting matchUnknown:enabled:disabled:] */

void FUN_107b1ad34(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1add0; end: 107b1ae37; +[SCNotificationPrivacySettingUpdateResult generalErrorWithMessage:] */

void FUN_107b1add0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1850;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1ae38; end: 107b1ae7f; +[SCNotificationPrivacySettingUpdateResult success] */

void FUN_107b1ae38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1850;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1ae80; end: 107b1aea3; -[SCNotificationPrivacySettingUpdateResult copyWithZone:] */

undefined8 FUN_107b1ae80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1aea4; end: 107b1af03; -[SCNotificationPrivacySettingUpdateResult hash] */

void FUN_107b1aea4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f9dd8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1af04; end: 107b1af47; -[SCNotificationPrivacySettingUpdateResult internalInit] */

void FUN_107b1af04(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9dd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1af48; end: 107b1afe7; -[SCNotificationPrivacySettingUpdateResult isEqual:] */

long FUN_107b1af48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b1afcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107b1afcc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107b1afcc;
    }
  }
  lVar3 = 1;
LAB_107b1afcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b1afe8; end: 107b1b06b; -[SCNotificationPrivacySettingUpdateResult matchSuccess:generalError:] */

void FUN_107b1afe8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1b06c; end: 107b1b077; -[SCNotificationPrivacySettingUpdateResult .cxx_destruct] */

void FUN_107b1b06c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107b1b078; end: 107b1b0e7; +[SCNotificationDeviceTokenUpdateResult generalErrorWithMessage:statusCode:] */

void FUN_107b1b078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1838;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b0e8; end: 107b1b12f; +[SCNotificationDeviceTokenUpdateResult success] */

void FUN_107b1b0e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1838;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b1b130; end: 107b1b153; -[SCNotificationDeviceTokenUpdateResult copyWithZone:] */

undefined8 FUN_107b1b130(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b1b154; end: 107b1b1cb; -[SCNotificationDeviceTokenUpdateResult hash] */

void FUN_107b1b154(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar3 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar3;
  if (-1 < lVar3) {
    lStack_30 = lVar3;
  }
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f9de0;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1b1cc; end: 107b1b20f; -[SCNotificationDeviceTokenUpdateResult internalInit] */

void FUN_107b1b1cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9de0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b1b210; end: 107b1b2bf; -[SCNotificationDeviceTokenUpdateResult isEqual:] */

long FUN_107b1b210(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b1b2a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_107b1b2a4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107b1b2a4;
    }
  }
  lVar3 = 1;
LAB_107b1b2a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b1b2c0; end: 107b1b343; -[SCNotificationDeviceTokenUpdateResult matchSuccess:generalError:] */

void FUN_107b1b2c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b1b344; end: 107b1b34f; -[SCNotificationDeviceTokenUpdateResult .cxx_destruct] */

void FUN_107b1b344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


