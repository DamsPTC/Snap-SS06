/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7aa228; end: 10b7aa287; -[SCUnlockablesWebViewAttachment encodeWithCoder:] */

void FUN_10b7aa228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f81ed8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f81ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7aa288; end: 10b7aa2fb; -[SCUnlockablesWebViewAttachment hash] */

undefined8 * FUN_10b7aa288(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7aa37c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7aa388;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b7aa388;
        }
        goto LAB_10b7aa37c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7aa388:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7aa2fc; end: 10b7aa3a3; -[SCUnlockablesWebViewAttachment isEqual:] */

long FUN_10b7aa2fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7aa37c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7aa388;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b7aa388;
        }
        goto LAB_10b7aa37c;
      }
    }
    lVar3 = 0;
  }
LAB_10b7aa388:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7aa3a4; end: 10b7aa3ab; -[SCUnlockablesWebViewAttachment webViewUrl] */

undefined8 FUN_10b7aa3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7aa3ac; end: 10b7aa3b3; -[SCUnlockablesWebViewAttachment shouldAutoFill] */

undefined8 FUN_10b7aa3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7aa3b4; end: 10b7aa3e3; -[SCUnlockablesWebViewAttachment .cxx_destruct] */

void FUN_10b7aa3b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7aa3e4; end: 10b7aa6c3; -[SCUnlockableTrackInfo initWithCoder:] */

undefined1 * FUN_10b7aa3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270add0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7aa6c4; end: 10b7aa83b; -[SCUnlockableTrackInfo encodeWithCoder:] */

void FUN_10b7aa6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f81f18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f49a78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f81f38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f81f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f81f78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f56958);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f56978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f81f98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f81fb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f49a58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f81fd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f68438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110e2ddf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f55618);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f81ff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f82018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7aa83c; end: 10b7aa957; -[SCUnlockableTrackInfo hash] */

undefined8 * FUN_10b7aa83c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
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
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_a8;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7aab28:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7aab34;
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
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[8];
                    if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[9];
                      if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[10];
                        if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xb];
                          if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xc];
                            if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              lVar5 = puVar3[0xd];
                              if ((lVar5 == param_3[0xd]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = puVar3[0xe];
                                if ((lVar5 == param_3[0xe]) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = puVar3[0xf];
                                  if ((lVar5 == param_3[0xf]) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    puVar6 = (undefined8 *)puVar3[0x10];
                                    if (puVar6 != (undefined8 *)param_3[0x10]) {
                                      func_0x00010c071ae0();
                                      goto LAB_10b7aab34;
                                    }
                                    goto LAB_10b7aab28;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7aab34:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7aa958; end: 10b7aab4f; -[SCUnlockableTrackInfo isEqual:] */

long FUN_10b7aa958(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7aab28:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7aab34;
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
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x58);
                          if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x60);
                            if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x68);
                              if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x70);
                                if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x78);
                                  if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x80);
                                    if (lVar3 != *(long *)(param_3 + 0x80)) {
                                      func_0x00010c071ae0();
                                      goto LAB_10b7aab34;
                                    }
                                    goto LAB_10b7aab28;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7aab34:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7aab50; end: 10b7aab57; -[SCUnlockableTrackInfo adServeRequestId] */

undefined8 FUN_10b7aab50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7aab58; end: 10b7aab5f; -[SCUnlockableTrackInfo rawAdData] */

undefined8 FUN_10b7aab58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7aab60; end: 10b7aab67; -[SCUnlockableTrackInfo skipTrack] */

undefined8 FUN_10b7aab60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7aab68; end: 10b7aab6f; -[SCUnlockableTrackInfo encryptedSponsoredUnlockableTargetingInfoData] */

undefined8 FUN_10b7aab68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7aab70; end: 10b7aab77; -[SCUnlockableTrackInfo adTrackUrl] */

undefined8 FUN_10b7aab70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7aab78; end: 10b7aab7f; -[SCUnlockableTrackInfo rankingId] */

undefined8 FUN_10b7aab78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7aab80; end: 10b7aab87; -[SCUnlockableTrackInfo rankingData] */

undefined8 FUN_10b7aab80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7aab88; end: 10b7aab8f; -[SCUnlockableTrackInfo encryptedUserTrackData] */

undefined8 FUN_10b7aab88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7aab90; end: 10b7aab97; -[SCUnlockableTrackInfo jsonTrackUrl] */

undefined8 FUN_10b7aab90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7aab98; end: 10b7aab9f; -[SCUnlockableTrackInfo protoTrackUrl] */

undefined8 FUN_10b7aab98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7aaba0; end: 10b7aaba7; -[SCUnlockableTrackInfo batchTrackUrl] */

undefined8 FUN_10b7aaba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7aaba8; end: 10b7aabaf; -[SCUnlockableTrackInfo skAdNetworkAttribution] */

undefined8 FUN_10b7aaba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b7aabb0; end: 10b7aabb7; -[SCUnlockableTrackInfo adId] */

undefined8 FUN_10b7aabb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b7aabb8; end: 10b7aabbf; -[SCUnlockableTrackInfo adServeItemId] */

undefined8 FUN_10b7aabb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b7aabc0; end: 10b7aabc7; -[SCUnlockableTrackInfo pixelId] */

undefined8 FUN_10b7aabc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b7aabc8; end: 10b7aabcf; -[SCUnlockableTrackInfo creativeId] */

undefined8 FUN_10b7aabc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b7aabd0; end: 10b7aaca7; -[SCUnlockableTrackInfo .cxx_destruct] */

void FUN_10b7aabd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 10b7aaca8; end: 10b7aad57; -[SCUnlockablesCarouselGroup initWithCoder:] */

undefined1 * FUN_10b7aaca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270add8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7aad58; end: 10b7aadb7; -[SCUnlockablesCarouselGroup encodeWithCoder:] */

void FUN_10b7aad58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e516b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f82038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7aadb8; end: 10b7aae2b; -[SCUnlockablesCarouselGroup hash] */

undefined8 * FUN_10b7aadb8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7aaeac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7aaeb8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b7aaeb8;
        }
        goto LAB_10b7aaeac;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7aaeb8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7aae2c; end: 10b7aaed3; -[SCUnlockablesCarouselGroup isEqual:] */

long FUN_10b7aae2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7aaeac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7aaeb8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b7aaeb8;
        }
        goto LAB_10b7aaeac;
      }
    }
    lVar3 = 0;
  }
LAB_10b7aaeb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7aaed4; end: 10b7aaedb; -[SCUnlockablesCarouselGroup groupName] */

undefined8 FUN_10b7aaed4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7aaedc; end: 10b7aaee3; -[SCUnlockablesCarouselGroup carouselScore] */

undefined8 FUN_10b7aaedc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7aaee4; end: 10b7aaf13; -[SCUnlockablesCarouselGroup .cxx_destruct] */

void FUN_10b7aaee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7aaf14; end: 10b7aaf6b; -[SCUnlockablesCarouselGlobalScore initWithCarouselSnapSource:globalScore:] */

void FUN_10b7aaf14(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270ade0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10b7aaf6c; end: 10b7aaff3; -[SCUnlockablesCarouselGlobalScore initWithCoder:] */

undefined1 *
FUN_10b7aaf6c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270ade0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7aaff4; end: 10b7ab017; -[SCUnlockablesCarouselGlobalScore copyWithZone:] */

undefined8 FUN_10b7aaff4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7ab018; end: 10b7ab077; -[SCUnlockablesCarouselGlobalScore encodeWithCoder:] */

void FUN_10b7ab018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f82058);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 8),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f82078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7ab078; end: 10b7ab0fb; -[SCUnlockablesCarouselGlobalScore hash] */

undefined8 * FUN_10b7ab078(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  lStack_20 = (uVar3 ^ uVar3 >> 0x1c) * 0x80000001;
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (undefined8 *)0x1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) || (puVar1[2] != param_3[2])) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        fVar5 = ABS(*(float *)(puVar1 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
        if (fVar5 <= 1.1754944e-38) {
          fVar5 = 1.1754944e-38;
        }
        puVar4 = (undefined8 *)
                 (ulong)(ABS(*(float *)(puVar1 + 1) - *(float *)(param_3 + 1)) < fVar5);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b7ab0fc; end: 10b7ab1b3; -[SCUnlockablesCarouselGlobalScore isEqual:] */

bool FUN_10b7ab0fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        bVar3 = false;
      }
      else {
        fVar4 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        if (fVar4 <= 1.1754944e-38) {
          fVar4 = 1.1754944e-38;
        }
        bVar3 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8)) < fVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b7ab1b4; end: 10b7ab1bb; -[SCUnlockablesCarouselGlobalScore carouselSnapSource] */

undefined8 FUN_10b7ab1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7ab1bc; end: 10b7ab1c3; -[SCUnlockablesCarouselGlobalScore globalScore] */

undefined4 FUN_10b7ab1bc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7ab1c4; end: 10b7ab287; -[SCLensMusicTrackMetadata initWithCoder:] */

undefined1 * FUN_10b7ab1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270ade8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7ab288; end: 10b7ab33b; -[SCLensMusicTrackMetadata initWithTrackId:contentRestrictions:useExternalPlayback:] */

undefined1 *
FUN_10b7ab288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270ade8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7ab33c; end: 10b7ab35f; -[SCLensMusicTrackMetadata copyWithZone:] */

undefined8 FUN_10b7ab33c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7ab360; end: 10b7ab3d3; -[SCLensMusicTrackMetadata encodeWithCoder:] */

void FUN_10b7ab360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f79af8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f82098);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f820b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7ab3d4; end: 10b7ab44b; -[SCLensMusicTrackMetadata hash] */

undefined8 * FUN_10b7ab3d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b7ab4dc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7ab4e8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b7ab4e8;
        }
        goto LAB_10b7ab4dc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b7ab4e8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b7ab44c; end: 10b7ab503; -[SCLensMusicTrackMetadata isEqual:] */

long FUN_10b7ab44c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7ab4dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7ab4e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b7ab4e8;
        }
        goto LAB_10b7ab4dc;
      }
    }
    lVar3 = 0;
  }
LAB_10b7ab4e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7ab504; end: 10b7ab50b; -[SCLensMusicTrackMetadata trackId] */

undefined8 FUN_10b7ab504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7ab50c; end: 10b7ab513; -[SCLensMusicTrackMetadata contentRestrictions] */

undefined8 FUN_10b7ab50c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7ab514; end: 10b7ab51b; -[SCLensMusicTrackMetadata useExternalPlayback] */

undefined1 FUN_10b7ab514(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7ab51c; end: 10b7ab54b; -[SCLensMusicTrackMetadata .cxx_destruct] */

void FUN_10b7ab51c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7ab54c; end: 10b7abe07; -[SCLens initWithCoder:] */

undefined1 * FUN_10b7ab54c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270adf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x80) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x98) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined8 *)((long)puVar1 + 0xa8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined8 *)((long)puVar1 + 0xd0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined8 *)((long)puVar1 + 0xe0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe8);
    *(undefined8 *)((long)puVar1 + 0xe8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0xf0) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xf8);
    *(undefined8 *)((long)puVar1 + 0xf8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x100);
    *(undefined8 *)((long)puVar1 + 0x100) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x108) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x110);
    *(undefined8 *)((long)puVar1 + 0x110) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x118);
    *(undefined8 *)((long)puVar1 + 0x118) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x120);
    *(undefined8 *)((long)puVar1 + 0x120) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x128);
    *(undefined8 *)((long)puVar1 + 0x128) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x130);
    *(undefined8 *)((long)puVar1 + 0x130) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x138);
    *(undefined8 *)((long)puVar1 + 0x138) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x140);
    *(undefined8 *)((long)puVar1 + 0x140) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x148);
    *(undefined8 *)((long)puVar1 + 0x148) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x150);
    *(undefined8 *)((long)puVar1 + 0x150) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x158);
    *(undefined8 *)((long)puVar1 + 0x158) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x160);
    *(undefined8 *)((long)puVar1 + 0x160) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x168);
    *(undefined8 *)((long)puVar1 + 0x168) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x170);
    *(undefined8 *)((long)puVar1 + 0x170) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x178);
    *(undefined8 *)((long)puVar1 + 0x178) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x180);
    *(undefined8 *)((long)puVar1 + 0x180) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x188);
    *(undefined8 *)((long)puVar1 + 0x188) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 400);
    *(undefined8 *)((long)puVar1 + 400) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x198);
    *(undefined8 *)((long)puVar1 + 0x198) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1a0);
    *(undefined8 *)((long)puVar1 + 0x1a0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1a8);
    *(undefined8 *)((long)puVar1 + 0x1a8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1b0);
    *(undefined8 *)((long)puVar1 + 0x1b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x1b8);
    *(undefined8 *)((long)puVar1 + 0x1b8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7abe08; end: 10b7abe2b; -[SCLens copyWithZone:] */

undefined8 FUN_10b7abe08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7abe2c; end: 10b7ac33b; -[SCLens encodeWithCoder:] */

void FUN_10b7abe2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f820d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f820f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f82118);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f2c098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f82138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f82158);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110e518f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110e2dc78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110f2b058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110f82178);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f494f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f82198);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                      &PTR____CFConstantStringClassReference_110f821b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                      &PTR____CFConstantStringClassReference_110f821d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x88),
                      &PTR____CFConstantStringClassReference_110f821f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f82218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x90),
                      &PTR____CFConstantStringClassReference_110f82238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x98),
                      &PTR____CFConstantStringClassReference_110f82258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa0),
                      &PTR____CFConstantStringClassReference_110f82278);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110f82298);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xb0),
                      &PTR____CFConstantStringClassReference_110f822b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f822d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xb8),
                      &PTR____CFConstantStringClassReference_110f822f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xc0),
                      &PTR____CFConstantStringClassReference_110f55eb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 200),
                      &PTR____CFConstantStringClassReference_110f82318);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd0),
                      &PTR____CFConstantStringClassReference_110f82338);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xd8),
                      &PTR____CFConstantStringClassReference_110f82358);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f82378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xe0),
                      &PTR____CFConstantStringClassReference_110f82398);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xe8),
                      &PTR____CFConstantStringClassReference_110f823b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f823d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0xf0),
                      &PTR____CFConstantStringClassReference_110f5e578);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0xf8),
                      &PTR____CFConstantStringClassReference_110f823f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x100),
                      &PTR____CFConstantStringClassReference_110f82418);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x108),
                      &PTR____CFConstantStringClassReference_110f82438);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x110),
                      &PTR____CFConstantStringClassReference_110f82458);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x118),
                      &PTR____CFConstantStringClassReference_110f82478);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f82498);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x120),
                      &PTR____CFConstantStringClassReference_110f4a1d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110f824b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x128),
                      &PTR____CFConstantStringClassReference_110f818d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x130),
                      &PTR____CFConstantStringClassReference_110f824d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x138),
                      &PTR____CFConstantStringClassReference_110f568f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x140),
                      &PTR____CFConstantStringClassReference_110f824f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x148),
                      &PTR____CFConstantStringClassReference_110f82518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x150),
                      &PTR____CFConstantStringClassReference_110f82538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x158),
                      &PTR____CFConstantStringClassReference_110f82558);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x160),
                      &PTR____CFConstantStringClassReference_110f31658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x168),
                      &PTR____CFConstantStringClassReference_110f82578);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x170),
                      &PTR____CFConstantStringClassReference_110f82598);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x178),
                      &PTR____CFConstantStringClassReference_110f825b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x180),
                      &PTR____CFConstantStringClassReference_110f825d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x188),
                      &PTR____CFConstantStringClassReference_110f825f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 400),
                      &PTR____CFConstantStringClassReference_110f56a38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x198),
                      &PTR____CFConstantStringClassReference_110f82618);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f82638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1a0),
                      &PTR____CFConstantStringClassReference_110f82658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1a8),
                      &PTR____CFConstantStringClassReference_110f82678);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1b0),
                      &PTR____CFConstantStringClassReference_110f82698);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x1b8),
                      &PTR____CFConstantStringClassReference_110f826b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7ac33c; end: 10b7ac627; -[SCLens hash] */

undefined8 * FUN_10b7ac33c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
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
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
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
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_218 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_210 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_208 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_200 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_1f8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_1e8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = uVar2;
  func_0x00010bfde980();
  uStack_1d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_1c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = uVar1;
  func_0x00010bfde980();
  uStack_1b8 = (ulong)*(byte *)(param_1 + 8);
  uStack_1b0 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c0 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x88);
  lStack_1a0 = -lVar5;
  if (-1 < lVar5) {
    lStack_1a0 = lVar5;
  }
  uStack_1a8 = uVar1;
  func_0x00010bfde980();
  uStack_190 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x98);
  uStack_178 = *(undefined8 *)(param_1 + 0xa0);
  lStack_180 = -lVar5;
  if (-1 < lVar5) {
    lStack_180 = lVar5;
  }
  uStack_188 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bfde980();
  uStack_168 = *(undefined8 *)(param_1 + 0xb0);
  lVar5 = *(long *)(param_1 + 0xb8);
  uStack_160 = (ulong)*(byte *)(param_1 + 0xb);
  lStack_158 = -lVar5;
  if (-1 < lVar5) {
    lStack_158 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uStack_170 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 200);
  uStack_150 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uStack_148 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uStack_140 = uVar2;
  func_0x00010bfde980();
  uStack_130 = (ulong)*(byte *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  uStack_138 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  uStack_128 = uVar2;
  func_0x00010bfde980();
  uStack_118 = (ulong)*(byte *)(param_1 + 0xd);
  lVar5 = *(long *)(param_1 + 0xf0);
  uStack_108 = *(undefined8 *)(param_1 + 0xf8);
  lStack_110 = -lVar5;
  if (-1 < lVar5) {
    lStack_110 = lVar5;
  }
  uStack_120 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x108);
  uStack_f0 = *(undefined8 *)(param_1 + 0x110);
  lStack_f8 = -lVar5;
  if (-1 < lVar5) {
    lStack_f8 = lVar5;
  }
  uStack_100 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010bfde980();
  uStack_e0 = (ulong)*(byte *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uStack_d0 = (ulong)*(byte *)(param_1 + 0xf);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 400);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_218;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0x3e);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7acbc0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7acbcc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((((ulong)puVar4 & 1) != 0) &&
          ((((puVar3[0xc] == param_3[0xc] && (puVar3[0xd] == param_3[0xd])) &&
            (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
           ((*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9) &&
            (puVar3[0x10] == param_3[0x10])))))) &&
         (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))) &&
        ((((puVar3[0x13] == param_3[0x13] && (puVar3[0x16] == param_3[0x16])) &&
          ((*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb) &&
           (((puVar3[0x17] == param_3[0x17] &&
             (*(char *)((long)puVar3 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
            (*(char *)((long)puVar3 + 0xd) == *(char *)((long)param_3 + 0xd))))))) &&
         ((puVar3[0x1e] == param_3[0x1e] && (puVar3[0x21] == param_3[0x21])))))) &&
       ((*(char *)((long)puVar3 + 0xe) == *(char *)((long)param_3 + 0xe) &&
        ((*(char *)((long)puVar3 + 0xf) == *(char *)((long)param_3 + 0xf) &&
         (*(char *)(puVar3 + 2) == *(char *)(param_3 + 2))))))) {
      lVar5 = puVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[8];
                if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[9];
                  if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[10];
                    if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0xb];
                      if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xe];
                        if ((lVar5 == param_3[0xe]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xf];
                          if ((lVar5 == param_3[0xf]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0x11];
                            if ((lVar5 == param_3[0x11]) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                               ) {
                              lVar5 = puVar3[0x12];
                              if ((lVar5 == param_3[0x12]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = puVar3[0x14];
                                if ((lVar5 == param_3[0x14]) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = puVar3[0x15];
                                  if ((lVar5 == param_3[0x15]) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = puVar3[0x18];
                                    if ((lVar5 == param_3[0x18]) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = puVar3[0x19];
                                      if ((lVar5 == param_3[0x19]) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = puVar3[0x1a];
                                        if ((lVar5 == param_3[0x1a]) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = puVar3[0x1b];
                                          if ((lVar5 == param_3[0x1b]) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = puVar3[0x1c];
                                            if ((lVar5 == param_3[0x1c]) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = puVar3[0x1d];
                                              if ((lVar5 == param_3[0x1d]) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = puVar3[0x1f];
                                                if ((lVar5 == param_3[0x1f]) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  lVar5 = puVar3[0x20];
                                                  if ((lVar5 == param_3[0x20]) ||
                                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = puVar3[0x22];
                                                    if ((lVar5 == param_3[0x22]) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      lVar5 = puVar3[0x23];
                                                      if ((lVar5 == param_3[0x23]) ||
                                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                        lVar5 = puVar3[0x24];
                                                        if ((lVar5 == param_3[0x24]) ||
                                                           (func_0x00010c071ae0(), (int)lVar5 != 0))
                                                        {
                                                          lVar5 = puVar3[0x25];
                                                          if ((lVar5 == param_3[0x25]) ||
                                                             (func_0x00010c071ae0(), (int)lVar5 != 0
                                                             )) {
                                                            lVar5 = puVar3[0x26];
                                                            if ((lVar5 == param_3[0x26]) ||
                                                               (func_0x00010c071ae0(),
                                                               (int)lVar5 != 0)) {
                                                              lVar5 = puVar3[0x27];
                                                              if ((lVar5 == param_3[0x27]) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar5 != 0)) {
                                                                lVar5 = puVar3[0x28];
                                                                if ((lVar5 == param_3[0x28]) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar5 != 0)) {
                                                                  lVar5 = puVar3[0x29];
                                                                  if ((lVar5 == param_3[0x29]) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar5 != 0)) {
                                                                    lVar5 = puVar3[0x2a];
                                                                    if ((lVar5 == param_3[0x2a]) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar5 != 0)) {
                                                                      lVar5 = puVar3[0x2b];
                                                                      if ((lVar5 == param_3[0x2b])
                                                                         || (func_0x00010c071ae0(),
                                                                            (int)lVar5 != 0)) {
                                                                        lVar5 = puVar3[0x2c];
                                                                        if ((lVar5 == param_3[0x2c])
                                                                           || (func_0x00010c071ae0()
                                                                              , (int)lVar5 != 0)) {
                                                                          lVar5 = puVar3[0x2d];
                                                                          if ((lVar5 == param_3[0x2d
                                                  ]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = puVar3[0x2e];
                                                    if ((lVar5 == param_3[0x2e]) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      lVar5 = puVar3[0x2f];
                                                      if ((lVar5 == param_3[0x2f]) ||
                                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                        lVar5 = puVar3[0x30];
                                                        if ((lVar5 == param_3[0x30]) ||
                                                           (func_0x00010c071ae0(), (int)lVar5 != 0))
                                                        {
                                                          lVar5 = puVar3[0x31];
                                                          if ((lVar5 == param_3[0x31]) ||
                                                             (func_0x00010c071ae0(), (int)lVar5 != 0
                                                             )) {
                                                            lVar5 = puVar3[0x32];
                                                            if ((lVar5 == param_3[0x32]) ||
                                                               (func_0x00010c071ae0(),
                                                               (int)lVar5 != 0)) {
                                                              lVar5 = puVar3[0x33];
                                                              if ((lVar5 == param_3[0x33]) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar5 != 0)) {
                                                                lVar5 = puVar3[0x34];
                                                                if ((lVar5 == param_3[0x34]) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar5 != 0)) {
                                                                  lVar5 = puVar3[0x35];
                                                                  if ((lVar5 == param_3[0x35]) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar5 != 0)) {
                                                                    lVar5 = puVar3[0x36];
                                                                    if ((lVar5 == param_3[0x36]) ||
                                                                       (func_0x00010c071ae0(),
                                                                       (int)lVar5 != 0)) {
                                                                      puVar6 = (undefined8 *)
                                                                               puVar3[0x37];
                                                                      if (puVar6 != (undefined8 *)
                                                                                    param_3[0x37]) {
                                                                        func_0x00010c071ae0();
                                                                        goto LAB_10b7acbcc;
                                                                      }
                                                                      goto LAB_10b7acbc0;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7acbcc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7ac628; end: 10b7acbe7; -[SCLens isEqual:] */

long FUN_10b7ac628(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7acbc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7acbcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
             (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
            (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        ((((*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98) &&
           (*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (((*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8) &&
             (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
            (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))))))) &&
         ((*(long *)(param_1 + 0xf0) == *(long *)(param_3 + 0xf0) &&
          (*(long *)(param_1 + 0x108) == *(long *)(param_3 + 0x108))))))) &&
       ((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
        ((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
         (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x78);
                          if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x88);
                            if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x90);
                              if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0xa0);
                                if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xa8);
                                  if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0xc0);
                                    if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 200);
                                      if ((lVar3 == *(long *)(param_3 + 200)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xd0);
                                        if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xd8);
                                          if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xe0);
                                            if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xe8);
                                              if ((lVar3 == *(long *)(param_3 + 0xe8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xf8);
                                                if ((lVar3 == *(long *)(param_3 + 0xf8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0x100);
                                                  if ((lVar3 == *(long *)(param_3 + 0x100)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x110);
                                                    if ((lVar3 == *(long *)(param_3 + 0x110)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x118);
                                                      if ((lVar3 == *(long *)(param_3 + 0x118)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0x120);
                                                        if ((lVar3 == *(long *)(param_3 + 0x120)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x128);
                                                          if ((lVar3 == *(long *)(param_3 + 0x128))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0x130);
                                                            if ((lVar3 == *(long *)(param_3 + 0x130)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0x138);
                                                              if ((lVar3 == *(long *)(param_3 +
                                                                                     0x138)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                                lVar3 = *(long *)(param_1 + 0x140);
                                                                if ((lVar3 == *(long *)(param_3 +
                                                                                       0x140)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) {
                                                                  lVar3 = *(long *)(param_1 + 0x148)
                                                                  ;
                                                                  if ((lVar3 == *(long *)(param_3 +
                                                                                         0x148)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                                    lVar3 = *(long *)(param_1 +
                                                                                     0x150);
                                                                    if ((lVar3 == *(long *)(param_3 
                                                  + 0x150)) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x158);
                                                    if ((lVar3 == *(long *)(param_3 + 0x158)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x160);
                                                      if ((lVar3 == *(long *)(param_3 + 0x160)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0x168);
                                                        if ((lVar3 == *(long *)(param_3 + 0x168)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x170);
                                                          if ((lVar3 == *(long *)(param_3 + 0x170))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0x178);
                                                            if ((lVar3 == *(long *)(param_3 + 0x178)
                                                                ) || (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0x180);
                                                              if ((lVar3 == *(long *)(param_3 +
                                                                                     0x180)) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                                lVar3 = *(long *)(param_1 + 0x188);
                                                                if ((lVar3 == *(long *)(param_3 +
                                                                                       0x188)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) {
                                                                  lVar3 = *(long *)(param_1 + 400);
                                                                  if ((lVar3 == *(long *)(param_3 +
                                                                                         400)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                                    lVar3 = *(long *)(param_1 +
                                                                                     0x198);
                                                                    if ((lVar3 == *(long *)(param_3 
                                                  + 0x198)) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x1a0);
                                                    if ((lVar3 == *(long *)(param_3 + 0x1a0)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x1a8);
                                                      if ((lVar3 == *(long *)(param_3 + 0x1a8)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0x1b0);
                                                        if ((lVar3 == *(long *)(param_3 + 0x1b0)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0x1b8);
                                                          if (lVar3 != *(long *)(param_3 + 0x1b8)) {
                                                            func_0x00010c071ae0();
                                                            goto LAB_10b7acbcc;
                                                          }
                                                          goto LAB_10b7acbc0;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7acbcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7acbe8; end: 10b7acbef; -[SCLens name] */

undefined8 FUN_10b7acbe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7acbf0; end: 10b7acbf7; -[SCLens hintId] */

undefined8 FUN_10b7acbf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b7acbf8; end: 10b7acbff; -[SCLens hintTranslations] */

undefined8 FUN_10b7acbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7acc00; end: 10b7acc07; -[SCLens bitmojiComicId] */

undefined8 FUN_10b7acc00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b7acc08; end: 10b7acc0f; -[SCLens expirationDate] */

undefined8 FUN_10b7acc08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b7acc10; end: 10b7acc17; -[SCLens section] */

undefined8 FUN_10b7acc10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b7acc18; end: 10b7acc1f; -[SCLens categories] */

undefined8 FUN_10b7acc18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b7acc20; end: 10b7acc27; -[SCLens isFeatured] */

undefined1 FUN_10b7acc20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7acc28; end: 10b7acc2f; -[SCLens isSponsored] */

undefined1 FUN_10b7acc28(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b7acc30; end: 10b7acc37; -[SCLens sponsoredSlug] */

undefined8 FUN_10b7acc30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b7acc38; end: 10b7acc3f; -[SCLens sponsoredType] */

undefined8 FUN_10b7acc38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b7acc40; end: 10b7acc47; -[SCLens scheduleIntervals] */

undefined8 FUN_10b7acc40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b7acc48; end: 10b7acc4f; -[SCLens isDemo] */

undefined1 FUN_10b7acc48(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b7acc50; end: 10b7acc57; -[SCLens demoStartDate] */

undefined8 FUN_10b7acc50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b7acc58; end: 10b7acc5f; -[SCLens absoluteCarouselPosition] */

undefined8 FUN_10b7acc58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b7acc60; end: 10b7acc67; -[SCLens unlockableTrackInfo] */

undefined8 FUN_10b7acc60(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b7acc68; end: 10b7acc6f; -[SCLens manifest] */

undefined8 FUN_10b7acc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b7acc70; end: 10b7acc77; -[SCLens apiLevel] */

undefined8 FUN_10b7acc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b7acc78; end: 10b7acc7f; -[SCLens isStudioPreview] */

undefined1 FUN_10b7acc78(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b7acc80; end: 10b7acc87; -[SCLens activationCameraPosition] */

undefined8 FUN_10b7acc80(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b7acc88; end: 10b7acc8f; -[SCLens encryptedGeoData] */

undefined8 FUN_10b7acc88(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10b7acc90; end: 10b7acc97; -[SCLens unlockCompanionBackReferenceId] */

undefined8 FUN_10b7acc90(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10b7acc98; end: 10b7acc9f; -[SCLens hasContextCards] */

undefined1 FUN_10b7acc98(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b7acca0; end: 10b7acca7; -[SCLens onDemandTemplateId] */

undefined8 FUN_10b7acca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10b7acca8; end: 10b7accaf; -[SCLens unlockablesAttachment] */

undefined8 FUN_10b7acca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10b7accb0; end: 10b7accb7; -[SCLens isRanked] */

undefined1 FUN_10b7accb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b7accb8; end: 10b7accbf; -[SCLens priority] */

undefined8 FUN_10b7accb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10b7accc0; end: 10b7accc7; -[SCLens lensDescriptors] */

undefined8 FUN_10b7accc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10b7accc8; end: 10b7acccf; -[SCLens communityLensData] */

undefined8 FUN_10b7accc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10b7accd0; end: 10b7accd7; -[SCLens snappablesReplyType] */

undefined8 FUN_10b7accd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10b7accd8; end: 10b7accdf; -[SCLens snappablesTaglineKey] */

undefined8 FUN_10b7accd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10b7acce0; end: 10b7acce7; -[SCLens snappablesPlayButtonGradientHexCodeColors] */

undefined8 FUN_10b7acce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10b7acce8; end: 10b7accef; -[SCLens isLeftCarousel] */

undefined1 FUN_10b7acce8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10b7accf0; end: 10b7accf7; -[SCLens contextHint] */

undefined8 FUN_10b7accf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 10b7accf8; end: 10b7accff; -[SCLens isCommunity] */

undefined1 FUN_10b7accf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 10b7acd00; end: 10b7acd07; -[SCLens checksum] */

undefined8 FUN_10b7acd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10b7acd08; end: 10b7acd0f; -[SCLens lensCollectionId] */

undefined8 FUN_10b7acd08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10b7acd10; end: 10b7acd17; -[SCLens carouselGroup] */

undefined8 FUN_10b7acd10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10b7acd18; end: 10b7acd1f; -[SCLens carouselGlobalScoreList] */

undefined8 FUN_10b7acd18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10b7acd20; end: 10b7acd27; -[SCLens unlockableSnapInfo] */

undefined8 FUN_10b7acd20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10b7acd28; end: 10b7acd2f; -[SCLens connectedLensInfo] */

undefined8 FUN_10b7acd28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 10b7acd30; end: 10b7acd37; -[SCLens musicTrackMetadata] */

undefined8 FUN_10b7acd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10b7acd38; end: 10b7acd3f; -[SCLens shoppingLensMetadata] */

undefined8 FUN_10b7acd38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}


