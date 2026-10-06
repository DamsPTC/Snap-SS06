/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ffcde4; end: 104ffce27;  */

void FUN_104ffcde4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3b30;
  func_0x00010c0d47a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ffce28; end: 104ffcf07;  */

void FUN_104ffce28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b3b30;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb8620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ffcf08; end: 104ffd083; -[SCAuraOperaSharingPlugin initWithSharingViewControllerPresenter:exportViewControllerPresenter:snapSaver:conversationIdResolver:conversationManager:auraLogger:metadata:] */

undefined1 *
FUN_104ffcf08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5958;
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ffd084; end: 104ffd08f; -[SCAuraOperaSharingPlugin setOperaControlling:] */

void FUN_104ffd084(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104ffd090; end: 104ffd09b; -[SCAuraOperaSharingPlugin setPlaylistItemController:] */

void FUN_104ffd090(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 104ffd09c; end: 104ffd1eb; -[SCAuraOperaSharingPlugin registeredEventsForOperaSession] */

void FUN_104ffd09c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined8 uVar10;
  undefined *in_x4;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  pppuVar9 = &ppuStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dc2778;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dc2758;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dc2798;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dc2738;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dc27f8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dc2818;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_70 = puVar1;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  puStack_68 = puVar2;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_60 = puVar3;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_58 = puVar4;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0xb;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar9);
  _objc_retain(uVar10);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined1 *)pppuVar9;
  func_0x00010c0720c0();
  if ((int)puVar7 == 0) {
    puVar3 = PTR_PTR_1126b2ea8;
    func_0x00010c235940(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)pppuVar9;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar7 == 0) {
      puVar7 = (undefined1 *)pppuVar9;
      func_0x00010c0720c0();
      if ((int)puVar7 == 0) {
        puVar7 = (undefined1 *)pppuVar9;
        func_0x00010c0720c0();
        if ((int)puVar7 != 0) {
          func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_110862308);
          uVar8 = *(undefined8 *)(puVar1 + 0x30);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be44660(puVar1);
          func_0x00010c0ab900(uVar8);
          _objc_release(uVar8);
          puVar3 = in_x4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
          puVar4 = puVar3;
          _objc_opt_isKindOfClass(puVar3,puVar2);
          puVar2 = puVar3;
          if (((ulong)puVar4 & 1) == 0) {
            puVar2 = (undefined *)0x0;
          }
          _objc_retain(puVar2);
          _objc_release(puVar3);
          goto LAB_104ffd478;
        }
        puVar7 = (undefined1 *)pppuVar9;
        func_0x00010c0720c0();
        if ((int)puVar7 == 0) {
          puVar7 = (undefined1 *)pppuVar9;
          func_0x00010c0720c0();
          if ((int)puVar7 != 0) {
            func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_110862348);
            uVar8 = *(undefined8 *)(puVar1 + 0x30);
            func_0x00010c269d40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be44660(puVar1);
            func_0x00010c0ab900(uVar8);
            _objc_release(uVar8);
            puVar3 = in_x4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
            _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
            puVar4 = puVar3;
            _objc_opt_isKindOfClass(puVar3,puVar2);
            puVar2 = puVar3;
            if (((ulong)puVar4 & 1) == 0) {
              puVar2 = (undefined *)0x0;
            }
            _objc_retain(puVar2);
            _objc_release(puVar3);
            goto LAB_104ffd478;
          }
          puVar2 = PTR_PTR_1126b2d30;
          func_0x00010bf940a0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = (undefined1 *)pppuVar9;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar7 == 0) {
            puVar2 = PTR_PTR_1126b2330;
            func_0x00010c0e9cc0(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = (undefined1 *)pppuVar9;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)puVar7 == 0) {
              puVar2 = PTR_PTR_1126b2330;
              func_0x00010bf3df20(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = (undefined1 *)pppuVar9;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)puVar7 == 0) {
                puVar7 = (undefined1 *)pppuVar9;
                func_0x00010c0720c0();
                if ((int)puVar7 == 0) {
                  puVar7 = (undefined1 *)pppuVar9;
                  func_0x00010c0720c0();
                  if ((int)puVar7 != 0) {
                    puVar1[0x50] = 0;
                  }
                }
                else {
                  puVar1[0x50] = 1;
                }
              }
              else {
                func_0x00010bec3520(puVar1);
              }
            }
            else {
              func_0x00010bec0cc0(puVar1);
            }
            goto LAB_104ffd490;
          }
          puVar2 = puVar1 + 0x40;
          _objc_loadWeakRetained(puVar2);
          puVar3 = puVar2;
          func_0x00010bf99b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0eb7a0();
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar2 = puVar1 + 0x40;
          _objc_loadWeakRetained(puVar2);
          puVar1 = puVar2;
          func_0x00010c2bf380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bf1c0();
          _objc_release(puVar1);
        }
        else {
          func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_110862328);
          uVar8 = *(undefined8 *)(puVar1 + 0x30);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be44660(puVar1);
          func_0x00010c0ab900(uVar8);
          _objc_release(uVar8);
          puVar3 = in_x4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
          puVar4 = puVar3;
          _objc_opt_isKindOfClass(puVar3,puVar2);
          puVar2 = puVar3;
          if (((ulong)puVar4 & 1) == 0) {
            puVar2 = (undefined *)0x0;
          }
          _objc_retain(puVar2);
          _objc_release(puVar3);
          _objc_retain(uVar10);
          func_0x00010beebf40(puVar1);
          _objc_release(uVar10);
        }
      }
      else {
        func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_1108622e8);
        uVar8 = *(undefined8 *)(puVar1 + 0x30);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be44660(puVar1);
        func_0x00010c0ab900(uVar8);
        _objc_release(uVar8);
        puVar3 = in_x4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
        puVar4 = puVar3;
        _objc_opt_isKindOfClass(puVar3,puVar2);
        puVar2 = puVar3;
        if (((ulong)puVar4 & 1) == 0) {
          puVar2 = (undefined *)0x0;
        }
        _objc_retain(puVar2);
        _objc_release(puVar3);
LAB_104ffd478:
        func_0x00010beebf40(puVar1);
      }
      _objc_release(puVar2);
      goto LAB_104ffd490;
    }
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010beebf20(puVar1);
LAB_104ffd490:
  _objc_release(in_x4);
  _objc_release(uVar10);
  _objc_release(pppuVar9);
  return;
}



/* Entry: 104ffd1ec; end: 104ffd7ff; -[SCAuraOperaSharingPlugin operaViewDidSendEvent:page:params:] */

void FUN_104ffd1ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c235940(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar3 == 0) {
        uVar3 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar3 != 0) {
          func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_110862308);
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be44660(param_1);
          func_0x00010c0ab900(uVar3);
          _objc_release(uVar3);
          uVar8 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
          uVar4 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar1);
          uVar7 = uVar8;
          if ((uVar4 & 1) == 0) {
            uVar7 = 0;
          }
          _objc_retain(uVar7);
          _objc_release(uVar8);
          goto LAB_104ffd478;
        }
        uVar3 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar3 == 0) {
          uVar3 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar3 != 0) {
            func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_110862348);
            uVar3 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c269d40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be44660(param_1);
            func_0x00010c0ab900(uVar3);
            _objc_release(uVar3);
            uVar8 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
            _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
            uVar4 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar1);
            uVar7 = uVar8;
            if ((uVar4 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar8);
            goto LAB_104ffd478;
          }
          puVar1 = PTR_PTR_1126b2d30;
          func_0x00010bf940a0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)uVar3 == 0) {
            puVar1 = PTR_PTR_1126b2330;
            func_0x00010c0e9cc0(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)uVar3 == 0) {
              puVar1 = PTR_PTR_1126b2330;
              func_0x00010bf3df20(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)uVar3 == 0) {
                uVar3 = param_3;
                func_0x00010c0720c0();
                if ((int)uVar3 == 0) {
                  uVar3 = param_3;
                  func_0x00010c0720c0();
                  if ((int)uVar3 != 0) {
                    *(undefined1 *)(param_1 + 0x50) = 0;
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 0x50) = 1;
                }
              }
              else {
                func_0x00010bec3520(param_1);
              }
            }
            else {
              func_0x00010bec0cc0(param_1);
            }
            goto LAB_104ffd490;
          }
          lVar5 = param_1 + 0x40;
          _objc_loadWeakRetained(lVar5);
          lVar6 = lVar5;
          func_0x00010bf99b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0eb7a0();
          _objc_release(lVar6);
          _objc_release(lVar5);
          uVar7 = param_1 + 0x40;
          _objc_loadWeakRetained(uVar7);
          uVar8 = uVar7;
          func_0x00010c2bf380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bf1c0();
          _objc_release(uVar8);
        }
        else {
          func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_110862328);
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be44660(param_1);
          func_0x00010c0ab900(uVar3);
          _objc_release(uVar3);
          uVar8 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
          uVar4 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar1);
          uVar7 = uVar8;
          if ((uVar4 & 1) == 0) {
            uVar7 = 0;
          }
          _objc_retain(uVar7);
          _objc_release(uVar8);
          _objc_retain(param_4);
          func_0x00010beebf40(param_1);
          _objc_release(param_4);
        }
      }
      else {
        func_0x000104ff1e94(&PTR___NSConcreteGlobalBlock_1108622e8);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be44660(param_1);
        func_0x00010c0ab900(uVar3);
        _objc_release(uVar3);
        uVar8 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
        uVar4 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar1);
        uVar7 = uVar8;
        if ((uVar4 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
LAB_104ffd478:
        func_0x00010beebf40(param_1);
      }
      _objc_release(uVar7);
      goto LAB_104ffd490;
    }
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010beebf20(param_1);
LAB_104ffd490:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ffd800; end: 104ffd813;  */

void FUN_104ffd800(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_sc_stringWithFormat__1126311a0,
             &PTR____CFConstantStringClassReference_110dc2298);
  return;
}



/* Entry: 104ffd814; end: 104ffd8c7;  */

void FUN_104ffd814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  lVar2 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f1880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  FUN_104ffccbc(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e140(uVar6,param_2,lVar4,uVar1,uVar5,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ffd8c8; end: 104ffd8db;  */

void FUN_104ffd8c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_sc_stringWithFormat__1126311a0,
             &PTR____CFConstantStringClassReference_110dc22b8);
  return;
}



/* Entry: 104ffd8dc; end: 104ffd98f;  */

void FUN_104ffd8dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  lVar2 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f1880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  FUN_104ffccbc(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dba0(uVar6,param_2,lVar4,uVar1,uVar5,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ffd990; end: 104ffd9a3;  */

void FUN_104ffd990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_sc_stringWithFormat__1126311a0,
             &PTR____CFConstantStringClassReference_110dc22d8);
  return;
}



/* Entry: 104ffd9a4; end: 104ffda97;  */

void FUN_104ffd9a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f1880();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c118b40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f1c0(uVar2,param_2,lVar5,uVar1,uVar7,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ffda98; end: 104ffdaab;  */

void FUN_104ffda98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_sc_stringWithFormat__1126311a0,
             &PTR____CFConstantStringClassReference_110dc22f8);
  return;
}



/* Entry: 104ffdaac; end: 104ffdb47;  */

void FUN_104ffdaac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ae40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ffdb48; end: 104ffdc0f; -[SCAuraOperaSharingPlugin _zoomInOperaVCWithPage:completion:] */

void FUN_104ffdb48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2bf380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bf1c0();
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ffdc10; end: 104ffdd23; -[SCAuraOperaSharingPlugin _zoomOutOperaVCWithPage:params:completion:] */

void FUN_104ffdc10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc2858);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf1f3c0();
  _objc_release(param_4);
  if ((int)uVar1 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c2bf380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf1c0();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ffdd24; end: 104ffddbf; -[SCAuraOperaSharingPlugin _startObservingScreenCapture] */

void FUN_104ffdd24(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ffddc0; end: 104ffde1b; -[SCAuraOperaSharingPlugin onShareComplete] */

void FUN_104ffddc0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x50);
  func_0x00010be44660(param_1);
  func_0x00010c0ab900(uVar2,param_2,5,uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ffde1c; end: 104ffde5b; -[SCAuraOperaSharingPlugin _stopObservingScreenCapture] */

void FUN_104ffde1c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ffde5c; end: 104ffdf8f; -[SCAuraOperaSharingPlugin _didScreenshot] */

void FUN_104ffde5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be44660(param_1);
  func_0x00010c0ab900(uVar1);
  _objc_release(uVar1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104ffcdcc;
  uStack_40 = 0x104ffcddc;
  uStack_38 = 0;
  func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x38));
  if (puStack_58[5] != 0) {
    func_0x00010bea00c0(param_1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 104ffdf90; end: 104ffdf93;  */

void FUN_104ffdf90(void)

{
  return;
}



/* Entry: 104ffdf94; end: 104ffe003;  */

void FUN_104ffdf94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ffe004; end: 104ffe137; -[SCAuraOperaSharingPlugin _didScreenRecord] */

void FUN_104ffe004(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be44660(param_1);
  func_0x00010c0ab900(uVar1);
  _objc_release(uVar1);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104ffcdcc;
  uStack_40 = 0x104ffcddc;
  uStack_38 = 0;
  func_0x00010c0bee00(*(undefined8 *)(param_1 + 0x38));
  if (puStack_58[5] != 0) {
    func_0x00010bea00c0(param_1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 104ffe138; end: 104ffe13b;  */

void FUN_104ffe138(void)

{
  return;
}



/* Entry: 104ffe13c; end: 104ffe1ab;  */

void FUN_104ffe13c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ffe1ac; end: 104ffe313; -[SCAuraOperaSharingPlugin _sendScreenCaptureNotificationToSnapchatter:screenCaptureType:] */

void FUN_104ffe1ac(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b01c0;
  lVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf504e0(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x28);
    func_0x00010beee460(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf503a0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ffe314; end: 104ffe387;  */

void FUN_104ffe314(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    func_0x00010beee460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf503a0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ffe388; end: 104ffe56f; -[SCAuraOperaSharingPlugin _isSummarySnap] */

undefined1 FUN_104ffe388(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar4;
  func_0x00010be36bc0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c101440(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar6 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126b3ac8;
  _objc_retain(uVar7);
  _objc_opt_class(puVar8);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar9 = uVar6;
  func_0x00010c23f240(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf340();
  _objc_release(uVar9);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  return uVar1;
}



/* Entry: 104ffe570; end: 104ffe58b;  */

void FUN_104ffe570(void)

{
  return;
}



/* Entry: 104ffe58c; end: 104ffe607; -[SCAuraOperaSharingPlugin .cxx_destruct] */

void FUN_104ffe58c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 104ffe608; end: 104ffe68f; -[SCAuraOperaSnapLayer initWithSnapViewModel:actionBarLeadingCtaIcon:actionBarTrailingCtaIcon:] */

undefined1 *
FUN_104ffe608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ffe690; end: 104ffe697; -[SCAuraOperaSnapLayer type] */

undefined8 FUN_104ffe690(void)

{
  return 0x19;
}



/* Entry: 104ffe698; end: 104ffe6a3; -[SCAuraOperaSnapLayer layerViewControllerClass] */

void FUN_104ffe698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b3b38);
  return;
}



/* Entry: 104ffe6a4; end: 104ffe7ef; -[SCAuraOperaSnapLayer isEqual:] */

bool FUN_104ffe6a4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b3af8;
  _objc_opt_class();
  if (puVar2 != puVar3) {
    bVar1 = false;
    goto LAB_104ffe7d0;
  }
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar2 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_104ffe774:
    puVar4 = param_1;
    func_0x00010beedf40();
    puVar5 = param_3;
    func_0x00010beedf40();
    if ((int)puVar4 != (int)puVar5) goto LAB_104ffe7b4;
    func_0x00010beee020(param_1);
    puVar4 = param_3;
    func_0x00010beee020(param_3);
    bVar1 = (int)param_1 == (int)puVar4;
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar4 = puVar2;
      func_0x00010c071ae0(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)puVar4 != 0) goto LAB_104ffe774;
    }
LAB_104ffe7b4:
    bVar1 = false;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
LAB_104ffe7d0:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104ffe7f0; end: 104ffe7f7; -[SCAuraOperaSnapLayer snapViewModel] */

undefined8 FUN_104ffe7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104ffe7f8; end: 104ffe7ff; -[SCAuraOperaSnapLayer actionBarLeadingCtaIcon] */

undefined4 FUN_104ffe7f8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 104ffe800; end: 104ffe807; -[SCAuraOperaSnapLayer actionBarTrailingCtaIcon] */

undefined4 FUN_104ffe800(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 104ffe808; end: 104ffe813; -[SCAuraOperaSnapLayer .cxx_destruct] */

void FUN_104ffe808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104ffe814; end: 104ffe88f; +[SCAuraOperaSnapLayerView layerViewWithFrame:snapView:] */

void FUN_104ffe814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3b40;
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010c014d80(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ffe890; end: 104ffe95b; -[SCAuraOperaSnapLayerView initWithFrame:snapView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ffe890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e5968;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271948c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar3));
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 104ffe95c; end: 104ffe987; -[SCAuraOperaSnapLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffe95c(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271948c),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 104ffe988; end: 104ffe9b7; -[SCAuraOperaSnapLayerView snapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffe988(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271948c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ffe9b8; end: 104ffe9cb; -[SCAuraOperaSnapLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffe9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271948c,0);
  return;
}



/* Entry: 104ffe9cc; end: 104ffea1f; -[SCAuraOperaSnapLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

undefined1 * FUN_104ffe9cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithConfiguration_layerViewC_1125de030);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ffea20; end: 104ffeac3; -[SCAuraOperaSnapLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffea20(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5970;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112719490);
  *(undefined8 *)(param_1 + _DAT_112719490) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112719494);
  *(undefined8 *)(param_1 + _DAT_112719494) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112719498);
  *(undefined8 *)(param_1 + _DAT_112719498) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11271949c) = 0;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_1);
  return;
}



/* Entry: 104ffeac4; end: 104ffeac7; -[SCAuraOperaSnapLayerViewController loadView] */

void FUN_104ffeac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bead630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLayerView_112588f30);
  return;
}



/* Entry: 104ffeac8; end: 104ffeacb; -[SCAuraOperaSnapLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_104ffeac8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bead630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLayerView_112588f30);
  return;
}



/* Entry: 104ffeacc; end: 104ffeadb; -[SCAuraOperaSnapLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104ffeacc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271949c);
}



/* Entry: 104ffeadc; end: 104ffeb0f; -[SCAuraOperaSnapLayerViewController viewWillFullyAppear] */

void FUN_104ffeadc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5970;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillFullyAppear_112685468);
  return;
}



/* Entry: 104ffeb10; end: 104ffec3b; -[SCAuraOperaSnapLayerViewController didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffeb10(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_2 + _DAT_11271949c) & 1) == 0) {
    uVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_4,param_3,uVar2);
    dVar5 = param_1;
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_112719490));
    _CGRectGetWidth();
    lVar3 = param_2;
    dVar6 = dVar5;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2690e0();
    _objc_release(lVar3);
    func_0x00010bf99b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2638;
    if (dVar5 * dVar6 <= param_1) {
      func_0x00010c2694a0(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c269640();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0eb780(param_2,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ffec3c; end: 104ffed1b; -[SCAuraOperaSnapLayerViewController didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffec3c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010c252440();
  if ((param_3 == 1) && ((*(byte *)(param_1 + _DAT_11271949c) & 1) == 0)) {
    lVar2 = (long)_DAT_1127194a0;
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar2),param_2,0);
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar2),param_2,1);
    lVar2 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(lVar2,param_2,puVar1,param_1,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(param_1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104ffed1c; end: 104ffed4f; -[SCAuraOperaSnapLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104ffed1c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_1127194a0) != param_3) {
    return *(long *)(param_1 + _DAT_1127194a4) == param_3;
  }
  return true;
}



/* Entry: 104ffed50; end: 104ffed8b; -[SCAuraOperaSnapLayerViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffed50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112719494;
  func_0x00010c28c620(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104ffed8c; end: 104ffef73; -[SCAuraOperaSnapLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffed8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0eaa40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0(lVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc27b8);
    if ((int)uVar3 == 0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc27d8);
      if ((int)uVar3 == 0) {
        puVar4 = PTR_PTR_1126b2d30;
        func_0x00010bf8c140(PTR_PTR_1126b2d30);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar4);
        _objc_release(puVar4);
        if ((int)uVar3 == 0) {
          puVar4 = PTR_PTR_1126b2d30;
          func_0x00010c1100e0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c0720c0(param_3,param_2,puVar4);
          _objc_release(puVar4);
          if ((int)uVar3 == 0) {
            puVar4 = PTR_PTR_1126b2d30;
            func_0x00010c149e20(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = param_3;
            func_0x00010c0720c0(param_3,param_2,puVar4);
            _objc_release(puVar4);
            if ((int)uVar3 == 0) {
              puVar4 = PTR_PTR_1126b2d30;
              func_0x00010c15c9e0(PTR_PTR_1126b2d30);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_3;
              func_0x00010c0720c0(param_3,param_2,puVar4);
              _objc_release(puVar4);
              if ((int)uVar3 == 0) goto LAB_104ffef50;
              ppuVar6 = &PTR____CFConstantStringClassReference_110dc2738;
            }
            else {
              ppuVar6 = &PTR____CFConstantStringClassReference_110dc2798;
            }
          }
          else {
            ppuVar6 = &PTR____CFConstantStringClassReference_110dc2778;
          }
        }
        else {
          ppuVar6 = &PTR____CFConstantStringClassReference_110dc2758;
        }
        func_0x00010be9f620(param_1,param_2,ppuVar6,param_4,1);
        goto LAB_104ffef50;
      }
      uVar3 = *(undefined8 *)(param_1 + _DAT_112719494);
      uVar5 = 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112719494);
      uVar5 = 0;
    }
    func_0x00010c1a7f60(uVar3,param_2,uVar5);
  }
LAB_104ffef50:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ffef74; end: 104ffef7f; -[SCAuraOperaSnapLayerViewController defaultProjectNameV2] */

undefined ** FUN_104ffef74(void)

{
  return &PTR____CFConstantStringClassReference_110db65d8;
}



/* Entry: 104ffef80; end: 104ffef8b; -[SCAuraOperaSnapLayerViewController defaultSubProjectName] */

undefined ** FUN_104ffef80(void)

{
  return &PTR____CFConstantStringClassReference_110dc1df8;
}



/* Entry: 104ffef8c; end: 104fff573; -[SCAuraOperaSnapLayerViewController _createSnapView] */

void FUN_104ffef8c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  ppuVar9 = &puStack_120;
  uVar1 = param_1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b3b08;
  _objc_opt_class(PTR_PTR_1126b3b08);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar7);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c243ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b3b18;
    _objc_opt_class(PTR_PTR_1126b3b18);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c243ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b3b20;
      _objc_opt_class(PTR_PTR_1126b3b20);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar7);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((uVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR_PTR_1126b3b68;
        _objc_opt_new(PTR_PTR_1126b3b68);
        uVar1 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c0da1c0();
        _objc_release(uVar1);
        if (uVar3 == 2) {
          func_0x00010c1af020(puVar6);
        }
        puVar7 = PTR_PTR_1126b3b70;
        _objc_alloc(PTR_PTR_1126b3b70);
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c243ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c142e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c061d40(puVar7);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar1);
        _objc_release(param_1);
        _objc_release(puVar6);
      }
      goto LAB_104fff3c4;
    }
    _objc_initWeak(auStack_80,param_1);
    puVar6 = PTR_PTR_1126b3b58;
    _objc_alloc(PTR_PTR_1126b3b58);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x104fff614;
    puStack_e0 = &UNK_110862438;
    ppuVar8 = &puStack_f8;
    _objc_copyWeak(auStack_d8,auStack_80);
    puStack_120 = puVar7;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x104fff678;
    puStack_108 = &UNK_110849200;
    _objc_copyWeak(auStack_100,auStack_80);
    func_0x00010c03da60(puVar6);
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d6c60();
    _objc_release(uVar3);
    if (uVar4 == 1) {
      func_0x00010c18ebc0(puVar6);
    }
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0da1c0();
    _objc_release(uVar3);
    if (uVar4 == 2) {
      func_0x00010c1af020(puVar6);
    }
    puVar7 = PTR_PTR_1126b3b60;
    _objc_alloc(PTR_PTR_1126b3b60);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c243ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar7);
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puVar6 = PTR_PTR_1126b3b48;
    _objc_alloc(PTR_PTR_1126b3b48);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104fff574;
    puStack_90 = &UNK_110862438;
    ppuVar8 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_80);
    puStack_d0 = puVar7;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x104fff5d8;
    puStack_b8 = &UNK_110849200;
    ppuVar9 = &puStack_d0;
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010c03da60(puVar6);
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d6c60();
    _objc_release(uVar3);
    if (uVar4 == 1) {
      func_0x00010c18ebc0(puVar6);
    }
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0da1c0();
    _objc_release(uVar3);
    if (uVar4 == 2) {
      func_0x00010c1af020(puVar6);
    }
    puVar7 = PTR_PTR_1126b3b50;
    _objc_alloc(PTR_PTR_1126b3b50);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c243ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar7);
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_destroyWeak(ppuVar9 + 4);
  _objc_destroyWeak(ppuVar8 + 4);
  _objc_destroyWeak(auStack_80);
LAB_104fff3c4:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104fff574; end: 104fff6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fff574(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127194a8);
    *(undefined8 *)(param_1 + _DAT_1127194a8) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fff6b4; end: 104fff8c7; -[SCAuraOperaSnapLayerViewController _createActionBarContext] */

void FUN_104fff6b4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126b3b78;
  _objc_alloc(PTR_PTR_1126b3b78);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104fff8c8;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_104fff9c4;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c0315a0(puVar2);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3b20;
  _objc_opt_class(PTR_PTR_1126b3b20);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  if ((uVar5 & 1) == 0) {
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104fffa84;
    puStack_d8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_d0,auStack_78);
    func_0x00010c1d1800(puVar2);
    _objc_copyWeak(auStack_f8,auStack_78);
    func_0x00010c1e9700(puVar2);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
  }
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104fff8c8; end: 104fff987;  */

void FUN_104fff8c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beedf40();
  FUN_104fff988();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f620(lVar1,param_2,lVar3,lVar4,0);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fff988; end: 104fff9c3;  */

void FUN_104fff988(uint param_1)

{
  undefined8 unaff_x19;
  
  if (param_1 < 3) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_110862468)[param_1];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 104fff9c4; end: 104fffa83;  */

void FUN_104fff9c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010c08c0e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beee020();
  FUN_104fff988();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f620(lVar1,param_2,lVar3,lVar4,0);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fffa84; end: 104fffb13;  */

void FUN_104fffa84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be011a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fffb14; end: 104fffeff; -[SCAuraOperaSnapLayerViewController _setupLayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fffb14(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126b3b40;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bdf3900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c6e0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112719490;
  uVar11 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar2;
  _objc_release(uVar11);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar12 = (long)_DAT_1127194a0;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar11);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar13));
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c243ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3b20;
  _objc_opt_class(PTR_PTR_1126b3b20);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar12 = (long)_DAT_1127194a4;
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar2;
    _objc_release(uVar11);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar13));
  }
  uVar1 = param_1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3b80;
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beedf40();
  uVar5 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee020();
  uVar6 = param_1;
  func_0x00010bdea380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022040();
  uVar11 = *(undefined8 *)(param_1 + (long)_DAT_112719494);
  *(undefined **)(param_1 + (long)_DAT_112719494) = puVar2;
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a1a0();
  func_0x00010c1d5380(param_1);
  _objc_release(uVar1);
  func_0x00010c222380(param_1);
  uVar1 = param_1;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dc27d8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dc27b8;
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2d30;
  puStack_88 = puVar2;
  func_0x00010c1100e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2d30;
  puStack_80 = puVar7;
  func_0x00010c149e20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2d30;
  puStack_78 = puVar8;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = uVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if ((((*(byte *)(uVar1 + (long)_DAT_11271949c) & 1) == 0) &&
        (pcStack_a8 = FUN_104ffff00, *(long *)(uVar1 + (long)_DAT_112719498) != 0)) &&
       (*(long *)(uVar1 + (long)_DAT_1127194a8) != 0)) {
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_104ffffc0;
      puStack_d0 = &UNK_110842e18;
      uStack_c8 = uVar1;
      uStack_c0 = uVar3;
      uStack_b8 = param_1;
      puStack_b0 = &stack0xfffffffffffffff0;
      func_0x0001000d76cc("APPSTORE",&puStack_e8);
      func_0x00010bf99b40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb780();
      _objc_release(uVar1);
    }
    return;
  }
  return;
}



/* Entry: 104ffff00; end: 104ffffbf; -[SCAuraOperaSnapLayerViewController _displayBottomSnapAndHideCtaView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffff00(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if ((((*(byte *)(param_1 + _DAT_11271949c) & 1) == 0) &&
      (*(long *)(param_1 + _DAT_112719498) != 0)) && (*(long *)(param_1 + _DAT_1127194a8) != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_104ffffc0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104ffffc0; end: 10500002b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ffffc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112719498);
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127194a8);
  (**(code **)(lVar1 + 0x10))(lVar1,1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271949c) = 1;
  return;
}



/* Entry: 10500002c; end: 10500014f; -[SCAuraOperaSnapLayerViewController _dismissBottomSnapAndHideCtaView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10500002c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (((*(char *)(param_1 + _DAT_11271949c) == '\x01') && (*(long *)(param_1 + _DAT_112719498) != 0)
      ) && (*(long *)(param_1 + _DAT_1127194a8) != 0)) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x1050000f0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105000150; end: 105000153; -[SCAuraOperaSnapLayerViewController _didTapReadMoreButton] */

void FUN_105000150(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be041f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displayBottomSnapAndHideCtaView_11255ea18);
  return;
}



/* Entry: 105000154; end: 105000303; -[SCAuraOperaSnapLayerViewController _sendLayerViewScreenshotWithEvent:page:fromActionMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105000154(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar2 = *(undefined8 *)(param_2 + _DAT_112719490);
  func_0x00010c243bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf99b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_1127194a4,0);
  _objc_storeStrong(puVar1 + _DAT_1127194a0,0);
  _objc_storeStrong(puVar1 + _DAT_1127194a8,0);
  _objc_storeStrong(puVar1 + _DAT_112719498,0);
  _objc_storeStrong(puVar1 + _DAT_112719494,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_112719490,0);
  return;
}



/* Entry: 105000304; end: 105000383; -[SCAuraOperaSnapLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105000304(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127194a4,0);
  _objc_storeStrong(param_1 + _DAT_1127194a0,0);
  _objc_storeStrong(param_1 + _DAT_1127194a8,0);
  _objc_storeStrong(param_1 + _DAT_112719498,0);
  _objc_storeStrong(param_1 + _DAT_112719494,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719490,0);
  return;
}



/* Entry: 105000384; end: 1050003a7;  */

int FUN_105000384(long param_1)

{
  int iVar1;
  
  func_0x00010901c0fc();
  iVar1 = 0;
  if (param_1 - 0x2649U < 0xb) {
    iVar1 = (int)(param_1 - 0x2649U) + 1;
  }
  return iVar1;
}



/* Entry: 1050003a8; end: 105000427;  */

undefined * FUN_1050003a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain();
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf650e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar1 = puVar2;
  FUN_105000384(puVar2);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 105000428; end: 10500059b; -[SCAuraFriendProfileRouteActionsImpl initWithPresentingViewController:actionSheetPresenter:birthInfoPageCreator:alertDialogPresenter:auraOperaPlayer:myBitmojiAvatarIdProvider:valdiRuntimeProvider:] */

undefined1 *
FUN_105000428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5978;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10500059c; end: 10500063b; -[SCAuraFriendProfileRouteActionsImpl presentMissingBirthdayAlert:] */

void FUN_10500059c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d140();
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10500063c; end: 105000807; -[SCAuraFriendProfileRouteActionsImpl presentIntroCardWithMyBirthday:aFriend:delegate:] */

void FUN_10500063c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_1050003a8(param_3);
  uVar1 = param_4;
  func_0x00010901d430(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010901ccf8();
  _objc_retainAutoreleasedReturnValue();
  FUN_105000384();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010901d7c4(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b3a30;
  _objc_alloc(PTR_PTR_1126b3a30);
  func_0x00010c015580();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca960(puVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = param_4;
  func_0x00010bf1bae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fa20(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b3ac0;
  _objc_alloc(PTR_PTR_1126b3ac0);
  func_0x00010c061f00();
  _objc_release(param_5);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105000808; end: 105000897; -[SCAuraFriendProfileRouteActionsImpl presentActionSheetWithSnapchatter:delegate:] */

void FUN_105000808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10f200(uVar1,param_2,param_3,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105000898; end: 10500094f; -[SCAuraFriendProfileRouteActionsImpl presentUpdateMyBirthInfoPage:] */

void FUN_105000898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf54cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar2);
  uVar1 = uVar3;
  func_0x00010bf54ce0(uVar3,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105000950; end: 105000a93; -[SCAuraFriendProfileRouteActionsImpl presentPersonalityDiviningPage:delegate:] */

void FUN_105000950(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010901d430(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010901ccf8();
  _objc_retainAutoreleasedReturnValue();
  FUN_105000384();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b3958;
  _objc_alloc(PTR_PTR_1126b3958);
  func_0x00010c063720();
  func_0x00010c19e840();
  uVar1 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b3b88;
  _objc_alloc(PTR_PTR_1126b3b88);
  func_0x00010c061dc0();
  _objc_release(param_4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105000a94; end: 105000c27; -[SCAuraFriendProfileRouteActionsImpl presentCompatibilityDiviningPageWith:birthday:delegate:] */

void FUN_105000a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  FUN_1050003a8(param_4);
  uVar1 = param_3;
  func_0x00010901d430(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010901ccf8();
  _objc_retainAutoreleasedReturnValue();
  FUN_105000384();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3970;
  _objc_alloc(PTR_PTR_1126b3970);
  func_0x00010c02d360();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca960(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar1 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19fa20(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b3b88;
  _objc_alloc(PTR_PTR_1126b3b88);
  func_0x00010c061dc0();
  _objc_release(param_5);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105000c28; end: 105000cc7; -[SCAuraFriendProfileRouteActionsImpl presentBirthdayPartyDisabledAlert:] */

void FUN_105000c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b420();
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105000cc8; end: 105000d4f; -[SCAuraFriendProfileRouteActionsImpl presentFriendAuraProfile:metadata:delegate:] */

void FUN_105000cc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b2e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105000d50; end: 105000d8f; -[SCAuraFriendProfileRouteActionsImpl presentErrorStatusMessage] */

void FUN_105000d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afca8;
  func_0x000105005dec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105000d90; end: 105000e03; -[SCAuraFriendProfileRouteActionsImpl .cxx_destruct] */

void FUN_105000d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105000e04; end: 105000fab; -[SCAuraFriendProfileWorkflow initWithRouter:birthInfoDataManager:auraDataManager:snapchattersDataFetcher:auraLogger:friendUserId:delegate:] */

undefined1 *
FUN_105000e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5980;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_9);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105000fac; end: 1050010c3; -[SCAuraFriendProfileWorkflow beginWorkflow] */

void FUN_105000fac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1420();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1050010c4; end: 10500116f;  */

void FUN_1050010c4(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x000100bf119c();
    if ((uVar1 & 1) == 0) {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
    }
    else {
      uVar1 = param_2;
      func_0x00010901d430();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      if (uVar1 != 0) {
        func_0x00010bee03c0();
        goto LAB_105001154;
      }
    }
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
  }
  func_0x00010be7a100();
LAB_105001154:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105001170; end: 10500124b; -[SCAuraFriendProfileWorkflow _updateSnapchatterAndPresentActionSheet:] */

void FUN_105001170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10500124c; end: 1050012ab;  */

void FUN_10500124c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10afe0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050012ac; end: 1050013d3; -[SCAuraFriendProfileWorkflow didSelectedPersonalityProfile] */

void FUN_1050012ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1460();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfa6c60(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1050013d4; end: 105001477;  */

void FUN_1050013d4(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010be7a100();
    }
    else {
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      *(long *)(lVar1 + 0x50) = param_2;
      _objc_release(uVar2);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      if (param_3 == 0) {
        func_0x00010be7d360();
      }
      else {
        func_0x00010be7d380();
      }
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105001478; end: 105001527; -[SCAuraFriendProfileWorkflow _presentPersonalityProfile] */

void FUN_105001478(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105001528; end: 1050015bf;  */

void FUN_105001528(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3b90;
  _objc_retain(param_2);
  func_0x00010bfb8600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c260(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050015c0; end: 10500166f; -[SCAuraFriendProfileWorkflow _presentPersonalityDiviningPage] */

void FUN_1050015c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105001670; end: 1050016fb;  */

void FUN_105001670(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190ba0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d820(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050016fc; end: 1050019db; -[SCAuraFriendProfileWorkflow didSelectedCompatibilityProfile] */

void FUN_1050016fc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1460();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06d320();
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x61) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1704a0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1050019dc;
    puStack_48 = &UNK_1108624e0;
    ppuVar4 = &puStack_60;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1429e0(uVar1);
LAB_1050018c4:
    ppuVar4 = ppuVar4 + 4;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0d45e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = uVar3;
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c86c0();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 8);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x105001a28;
      puStack_70 = &UNK_1108624e0;
      ppuVar4 = &puStack_88;
      _objc_copyWeak(auStack_68,auStack_38);
      func_0x00010c1429e0(uVar1);
      goto LAB_1050018c4;
    }
    uVar3 = uVar2;
    func_0x00010c0785e0();
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_105001a74;
      puStack_a0 = &UNK_110862480;
      lStack_98 = param_1;
      _objc_copyWeak(&puStack_90,auStack_38);
      func_0x00010c1429e0(uVar1);
      ppuVar4 = &puStack_90;
    }
    else {
      uVar3 = uVar2;
      func_0x00010c232260();
      if ((int)uVar3 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ad260();
        _objc_release(uVar1);
        func_0x00010be7a440(param_1);
        goto LAB_1050018cc;
      }
      _objc_copyWeak(&puStack_c0,auStack_38);
      func_0x00010be10700(param_1);
      ppuVar4 = &puStack_c0;
    }
  }
  _objc_destroyWeak(ppuVar4);
LAB_1050018cc:
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1050019dc; end: 105001a73;  */

void FUN_1050019dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10b400(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105001a74; end: 105001ba7;  */

void FUN_105001a74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae700();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c8c0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105001ba8; end: 105001c2f; -[SCAuraFriendProfileWorkflow _fetchCompatibilityProfile:] */

void FUN_105001ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6c00(uVar2,param_2,uVar3,uVar1,param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105001c30; end: 105001cdf; -[SCAuraFriendProfileWorkflow _presentCompatibilityProfile] */

void FUN_105001c30(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1429e0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}


