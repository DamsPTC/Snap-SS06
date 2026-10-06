/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b2a2f4; end: 106b2a3fb; -[ChangeDisplayNameViewController initWithDisplayNameProvider:displayNameMutator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b2a2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f5010;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    lVar4 = (long)_DAT_1127586a8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127586ac;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b2a3fc; end: 106b2a4e7; -[ChangeDisplayNameViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a3fc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_50;
  puStack_38 = PTR_PTR_1126f5010;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  func_0x00010bfee8a0(param_1);
  puStack_48 = PTR_PTR_1126f5010;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_class_1125ac0b8);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfc65c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef95e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127586b0);
  *(long **)(param_1 + _DAT_1127586b0) = plVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf56220(param_1);
  func_0x00010bf56c60(param_1);
  func_0x00010bf589e0(param_1);
  return;
}



/* Entry: 106b2a4e8; end: 106b2a5eb; -[ChangeDisplayNameViewController traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a4e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5010;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127586b4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127586b8);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b2a5ec; end: 106b2a707; -[ChangeDisplayNameViewController initFirstAndLastNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a5ec(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  
  ppuVar2 = *(undefined ***)(param_1 + _DAT_1127586a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar3 = ppuVar1;
  func_0x00010c11f420(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  if (ppuVar3 == (undefined **)0x7fffffffffffffff) {
    lVar5 = (long)_DAT_1127586bc;
    _objc_retain(ppuVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined ***)(param_1 + lVar5) = ppuVar1;
    _objc_release(uVar4);
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010c260c20(ppuVar1,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127586bc);
    *(undefined ***)(param_1 + _DAT_1127586bc) = ppuVar2;
    _objc_release(uVar4);
    ppuVar2 = ppuVar1;
    func_0x00010c260c00(ppuVar1,param_2,(long)ppuVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127586c0);
  *(undefined ***)(param_1 + _DAT_1127586c0) = ppuVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106b2a708; end: 106b2a883; -[ChangeDisplayNameViewController displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a708(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_1127586b4;
  lVar1 = *(long *)(param_1 + lVar10);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_1127586b8);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_106b2a858;
    }
  }
  else {
    _objc_release(lVar1);
  }
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c26b700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010c114ac0(puVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127586b8);
  func_0x00010c26b700(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c114ac0(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110db27b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c114ac0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
LAB_106b2a858:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 106b2a884; end: 106b2a9a3; -[ChangeDisplayNameViewController createFirstNameTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a884(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf596a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127586b4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  _objc_release(uVar3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc32b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213240();
  _objc_release(uVar3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b2a9a4; end: 106b2ab47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2a9a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127586b0);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2ab48; end: 106b2ac6b; -[ChangeDisplayNameViewController createLastNameTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2ab48(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bf596a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127586b8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  _objc_release(uVar3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c26bc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213240();
  _objc_release(uVar3);
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar4));
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc32d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc32d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(ppuVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b2ac6c; end: 106b2adb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2ac6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127586b4);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2adb8; end: 106b2af17; -[ChangeDisplayNameViewController createTextViewWithGerenalSettings] */

void FUN_106b2adb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126af260;
  _objc_alloc_init(PTR_PTR_1126af260);
  func_0x00010c16d0c0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c234280(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(puVar2);
  func_0x00010c16cc00(puVar1,param_2,1);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b2af18; end: 106b2b197; -[ChangeDisplayNameViewController createSaveBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2af18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127586c4;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e72db8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e72db8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5760(param_1);
  _objc_release(ppuVar2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc();
  func_0x00010bff0f20();
  lVar5 = (long)_DAT_1127586c8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b2b198; end: 106b2b3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b198(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2b3d0; end: 106b2b443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b3d0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b2b444; end: 106b2b58f; -[ChangeDisplayNameViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b444(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5010;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillAppear__1126853f0);
  lVar8 = (long)_DAT_1127586b4;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8));
  }
  lVar7 = (long)_DAT_1127586b8;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7));
  }
  uVar3 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_1127586a8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if ((uVar6 & 1) == 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar8));
  }
  return;
}



/* Entry: 106b2b590; end: 106b2b5cb; -[ChangeDisplayNameViewController saveButtonBarPressed] */

void FUN_106b2b590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a100(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b2b5cc; end: 106b2b62b; -[ChangeDisplayNameViewController setInputError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127586c4);
  _objc_retain(param_3);
  func_0x00010c1a7f60(uVar1,param_2,1);
  func_0x00010c196ee0(*(undefined8 *)(param_1 + _DAT_1127586b4),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b2b62c; end: 106b2b683; -[ChangeDisplayNameViewController startSaveBarAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b62c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127586c4),param_2,0);
  lVar1 = (long)_DAT_1127586c8;
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1f5770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSaveBarTitle__11265b000,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 106b2b684; end: 106b2b71b; -[ChangeDisplayNameViewController stopSaveBarAnimation] */

/* WARNING: Possible PIC construction at 0x000106b2b6bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b2b6c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b684(long param_1,undefined8 param_2)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_1127586c4),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127586c8),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106b2b71c; end: 106b2b76b; -[ChangeDisplayNameViewController setSaveBarTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127586c4;
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar2),param_2,param_3,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b2b76c; end: 106b2b7af; -[ChangeDisplayNameViewController textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c196ee0(param_3,param_2,0);
  lVar1 = param_1;
  func_0x00010be3fb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127586c4),PTR_s_setHidden__1126479f8,(uint)lVar1 ^ 1);
  return;
}



/* Entry: 106b2b7b0; end: 106b2b7b7; -[ChangeDisplayNameViewController textViewShouldBeginEditing:] */

undefined8 FUN_106b2b7b0(void)

{
  return 1;
}



/* Entry: 106b2b7b8; end: 106b2b82f; -[ChangeDisplayNameViewController textViewShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b2b7b8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_1127586b4)) {
    func_0x00010c13a0e0();
    func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_1127586b8));
  }
  else if (param_3 == *(long *)(param_1 + _DAT_1127586b8)) {
    func_0x00010c13a0e0();
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 106b2b830; end: 106b2b947; -[ChangeDisplayNameViewController saveButtonBarPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2b830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  func_0x00010c250640(param_1);
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_1127586b4));
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b2b948;
  puStack_58 = &UNK_110863c68;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127586ac);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285360();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106b2b948; end: 106b2ba2f;  */

void FUN_106b2b948(long param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c2568e0();
  if (param_2 == 0) {
    lVar3 = param_3;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      func_0x00010c1ad320(param_1);
    }
  }
  else {
    lVar3 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if ((int)lVar2 != 0) {
      lVar3 = param_1;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103a00();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b2ba30; end: 106b2bb47; -[ChangeDisplayNameViewController inputKeyboardWillChangeFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2ba30(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  dVar4 = param_1;
  _objc_release(uVar1);
  _objc_release(param_7);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_5 + _DAT_1127586c4);
  func_0x00010c14df20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0bc0(-(dVar4 - param_1));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106b2bb48; end: 106b2bc43; -[ChangeDisplayNameViewController _isDisplayNameChangeAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106b2bb48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + _DAT_1127586a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(lVar4);
  if (lVar1 == lVar4) {
    uVar6 = 0;
  }
  else if (lVar4 == 0) {
    uVar6 = 1;
  }
  else {
    lVar5 = lVar1;
    func_0x00010c071ae0(lVar1,param_2,lVar4);
    uVar6 = (uint)lVar5 ^ 1;
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  return lVar2 != 0 & uVar6;
}



/* Entry: 106b2bc44; end: 106b2bc83; -[ChangeDisplayNameViewController setDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2bc44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127586cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b2bc84; end: 106b2bd43; -[ChangeDisplayNameViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2bc84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127586cc,0);
  _objc_storeStrong(param_1 + _DAT_1127586ac,0);
  _objc_storeStrong(param_1 + _DAT_1127586a8,0);
  _objc_storeStrong(param_1 + _DAT_1127586c0,0);
  _objc_storeStrong(param_1 + _DAT_1127586bc,0);
  _objc_storeStrong(param_1 + _DAT_1127586b0,0);
  _objc_storeStrong(param_1 + _DAT_1127586c4,0);
  _objc_storeStrong(param_1 + _DAT_1127586c8,0);
  _objc_storeStrong(param_1 + _DAT_1127586b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127586b4,0);
  return;
}



/* Entry: 106b2bd44; end: 106b2bd5b; -[EmailSettingsPasswordViewController init] */

undefined8 FUN_106b2bd44(void)

{
  _objc_release();
  return 0;
}



/* Entry: 106b2bd5c; end: 106b2beef; -[EmailSettingsPasswordViewController initWithUserSession:emailInfoProvider:newEmail:circumstanceEngineServices:reauthenticationService:challengeOrchestrationService:passwordNetworkRequester:emailMutator:searchabilityService:settingsEventLogger:userPhoneVerificationScopeExposer:connectedAccountsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b2bd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f5018;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserSession_emailInfoPro_11252e928,param_3,param_4,0,
                      param_11,param_12,param_9,param_13,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c194080(puVar1);
    lVar3 = (long)_DAT_1127586d0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127586d4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127586d8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127586dc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127586e0;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106b2bef0; end: 106b2bef7; -[EmailSettingsPasswordViewController pageViewName] */

undefined8 FUN_106b2bef0(void)

{
  return 0x5b;
}



/* Entry: 106b2bef8; end: 106b2bf07; -[EmailSettingsPasswordViewController getTitle] */

void FUN_106b2bef8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74338;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e74338,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b2bf08; end: 106b2bf17; -[EmailSettingsPasswordViewController getInfo] */

void FUN_106b2bf08(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3b1b8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e3b1b8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b2bf18; end: 106b2bfaf; -[EmailSettingsPasswordViewController continueButtonBarPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2bf18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c24e680(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127586d0);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e74318,0,0);
  lVar2 = param_1;
  func_0x00010bf8d6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010be869a0(param_1,param_2,lVar2,param_3);
  }
  else {
    func_0x00010bee84c0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b2bfb0; end: 106b2c123; -[EmailSettingsPasswordViewController _verifyChallengeWithEmail:password:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2bfb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d09d8;
  func_0x00010c0cb140(PTR_PTR_1126d09d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d09e0;
  func_0x00010c0cb140(PTR_PTR_1126d09e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d96e0();
  func_0x00010c1d9700(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127586d8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c298600(uVar3);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b2c124; end: 106b2c21f;  */

void FUN_106b2c124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b2c220;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_2);
  uStack_48 = param_2;
  _objc_retain(param_3);
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106b2c220; end: 106b2c257;  */

void FUN_106b2c220(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b2c258; end: 106b2c38f; -[EmailSettingsPasswordViewController _verifyChallengeCompleteWithNewEmail:response:error:] */

void FUN_106b2c258(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  uint uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 0) {
    lVar2 = param_4;
    func_0x00010c252ee0();
    uVar1 = (uint)lVar2;
    param_5 = param_4;
    if (uVar1 < 0xd) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x1b05U) != 0) goto LAB_106b2c2d8;
      if (uVar1 == 1) {
        func_0x00010be97120(param_1,param_2,param_3);
        goto LAB_106b2c318;
      }
      if (uVar1 != 10) goto LAB_106b2c36c;
      func_0x00010bf6d840(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010bfe4e60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_106b2c36c:
      if (uVar1 != 0xfbadbeef) goto LAB_106b2c318;
LAB_106b2c2d8:
      func_0x00010bf98a00(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_5;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be869c0(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  else {
    func_0x00010c09e4e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be869c0(param_1,param_2,param_5);
  }
  _objc_release(param_5);
LAB_106b2c318:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b2c390; end: 106b2c51b; -[EmailSettingsPasswordViewController _reauthAndUpdateEmail:password:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2c390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106b2c51c;
  puStack_80 = &UNK_110841fb0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  ppuVar2 = &puStack_98;
  uStack_78 = param_3;
  _objc_retainBlock(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x106b2c558;
  puStack_a8 = &UNK_110870850;
  _objc_copyWeak(auStack_a0,auStack_68);
  _objc_retainBlock(&puStack_c0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127586d4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121fc0();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b2c51c; end: 106b2c5a7;  */

void FUN_106b2c51c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be97120(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2c5a8; end: 106b2c7bf; -[EmailSettingsPasswordViewController _retryUpdateEmail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2c5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
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
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106b2c7c0;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106b2c90c;
  puStack_b0 = &UNK_110852b60;
  _objc_copyWeak(auStack_a8,auStack_78);
  ppuVar3 = &puStack_c8;
  _objc_retainBlock();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106b2c98c;
  puStack_d8 = &UNK_110843540;
  _objc_copyWeak(auStack_d0,auStack_78);
  ppuVar4 = &puStack_f0;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127586dc);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar4);
  func_0x00010c285660(uVar5);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_d0);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 106b2c7c0; end: 106b2c837;  */

void FUN_106b2c7c0(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106b2c838;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106b2c838; end: 106b2c90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2c838(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127586d0);
  FUN_106bfdb88();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__showLinkedAccountsAlertThenPop_11258bff0);
    return;
  }
  func_0x00010c255da0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c071ae0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d66a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106b2c90c; end: 106b2c983;  */

void FUN_106b2c90c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106b2c984;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106b2c984; end: 106b2c98b;  */

void FUN_106b2c984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stopContinueBarAnimation_112673190);
  return;
}



/* Entry: 106b2c98c; end: 106b2ca47;  */

void FUN_106b2c98c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b2ca48;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106b2ca48; end: 106b2ca9b;  */

void FUN_106b2ca48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c237520(PTR_PTR_1126afca8,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c255da0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b2ca9c; end: 106b2caab;  */

void FUN_106b2ca9c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c07b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_challenged_error__11260dc00,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106b2caac; end: 106b2caf7; -[EmailSettingsPasswordViewController _reauthFailureWithMessage:] */

void FUN_106b2caac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c255da0(param_1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1ad320(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b2caf8; end: 106b2cb93; -[EmailSettingsPasswordViewController _popIfTopViewController] */

void FUN_106b2caf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b2cb94; end: 106b2cc1b; -[EmailSettingsPasswordViewController _showLinkedAccountsAlertThenPop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2cb94(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + _DAT_1127586e0) != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106b2cc1c;
    puStack_30 = &UNK_11085c638;
    lStack_28 = param_1;
    func_0x00010bfa8060(*(long *)(param_1 + _DAT_1127586e0),param_2,&puStack_48);
    return;
  }
  func_0x00010c255da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be758d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__popIfTopViewController_11257afd0);
  return;
}



/* Entry: 106b2cc1c; end: 106b2ccd7;  */

void FUN_106b2cc1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b2ccd8;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 106b2ccd8; end: 106b2ce63;  */

void FUN_106b2ccd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c255da0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_110961fe0);
      uVar3 = uVar2;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff3e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
      func_0x00010beef340(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6960(puVar5);
      _objc_release(puVar4);
      func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be758d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__popIfTopViewController_11257afd0);
  return;
}



/* Entry: 106b2ce64; end: 106b2ce73;  */

void FUN_106b2ce64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 106b2ce74; end: 106b2ce83; -[EmailSettingsPasswordViewController email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b2ce74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127586e4);
}



/* Entry: 106b2ce84; end: 106b2cec3; -[EmailSettingsPasswordViewController setEmail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2ce84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127586e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b2cec4; end: 106b2cf43; -[EmailSettingsPasswordViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2cec4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127586e4,0);
  _objc_storeStrong(param_1 + _DAT_1127586e0,0);
  _objc_storeStrong(param_1 + _DAT_1127586dc,0);
  _objc_storeStrong(param_1 + _DAT_1127586d8,0);
  _objc_storeStrong(param_1 + _DAT_1127586d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127586d0,0);
  return;
}



/* Entry: 106b2cf44; end: 106b2cf4b; -[EmailSettingsViewController pageViewName] */

undefined8 FUN_106b2cf44(void)

{
  return 0x5a;
}



/* Entry: 106b2cf4c; end: 106b2d2f3; -[EmailSettingsViewController initWithUserSession:emailInfoProvider:emailMutator:circumstanceEngineServices:reauthenticationService:challengeOrchestrationService:searchabilityService:featureSettingsService:authenticationExperimentService:passwordNetworkRequester:userTrackedLogger:settingsEventLogger:delegate:userPhoneVerificationScopeExposer:connectedAccountsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106b2cf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f5020;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126b44c8;
    func_0x00010bf4ff40(PTR_PTR_1126b44c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6a00(puVar1);
    _objc_release(puVar2);
    lVar4 = (long)_DAT_1127586e8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127586ec;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127586f0;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127586f4;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127586f8;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127586fc;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758700;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758704;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758708;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11275870c;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112758710,param_15);
    lVar4 = (long)_DAT_112758714;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758718;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11275871c;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112758720;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106b2d2f4; end: 106b2d9df; -[EmailSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2d2f4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f5020;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar5);
  _objc_release(puVar1);
  puStack_68 = PTR_PTR_1126f5020;
  plVar2 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar2,PTR_s_class_1125ac0b8);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef95e0(plVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d1a0(param_1);
  _objc_release(plVar2);
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126af260;
  _objc_alloc(PTR_PTR_1126af260);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2138e0(param_1);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6ec0();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar5);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213240();
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c234280();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(lVar5);
  _objc_release(puVar1);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c26bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar3);
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e74398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(lVar5);
  _objc_release(ppuVar4);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bfc4a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010bf58b00(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1c10e0(param_1);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar5);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar5);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar5);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar5);
  lVar5 = *(long *)(param_1 + _DAT_112758724);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + _DAT_112758728);
  }
  _objc_retain(lVar5);
  lVar3 = param_1;
  func_0x00010c0b5a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar5);
  func_0x00010c0bbfc0(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf58800(param_1);
  func_0x00010bf544c0(param_1);
  func_0x00010bf55ea0(param_1);
  func_0x00010c2883c0(param_1);
  _objc_release(lVar5);
  _objc_release(lVar5);
  return;
}



/* Entry: 106b2d9e0; end: 106b2db97;  */

void FUN_106b2d9e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28ed00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2db98; end: 106b2df5f;  */

void FUN_106b2db98(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c26ca80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0e0();
  _objc_release(uVar9);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0bbea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2df60; end: 106b2dfe3; -[EmailSettingsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2df60(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5020;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  if (*(long *)(param_1 + _DAT_11275872c) != 0) {
    func_0x00010c079040();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112758704);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8d40();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 106b2dfe4; end: 106b2e0e7; -[EmailSettingsViewController traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2dfe4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5020;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758728);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758724);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106b2e0e8; end: 106b2e467; -[EmailSettingsViewController createSearchableSwitchRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2e0e8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d09e8;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_112758724;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e743b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e743b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  lVar6 = (long)_DAT_11275872c;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4000(uVar4);
  _objc_release(puVar3);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c2898a0(param_1);
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  return;
}



/* Entry: 106b2e468; end: 106b2e60b;  */

void FUN_106b2e468(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26ca80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2e60c; end: 106b2e743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2e60c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2e744; end: 106b2e977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2e744(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275872c);
  func_0x00010c0bbf80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2e978; end: 106b2edc3; -[EmailSettingsViewController createResendLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2e978(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1ec780(param_1);
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0x3fde9e9e9e9e9e9f,0x3ff0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar6);
  _objc_release(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e743d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e743d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar6);
  _objc_release(ppuVar2);
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar6);
  _objc_release(puVar1);
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c1d0120();
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar6);
  lVar6 = *(long *)(param_1 + _DAT_112758724);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + _DAT_112758728);
  }
  _objc_retain(lVar6);
  lVar3 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar6);
  func_0x00010c0bbfc0(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c1ec7a0(param_1);
  _objc_release(puVar4);
  lVar3 = param_1;
  func_0x00010c137e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c137e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010c137e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b2edc4; end: 106b2f18b;  */

void FUN_106b2edc4(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0b5a80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0e0();
  _objc_release(uVar9);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c0bbea0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar9);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b2f18c; end: 106b2f213;  */

void FUN_106b2f18c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c137e40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b2f214; end: 106b2f7c7; -[EmailSettingsViewController createActionBar] */

void FUN_106b2f214(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161680(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3f88181818181818,0x3fe4b4b4b4b4b4b5,0x3fe1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad158;
  lVar23 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fa0(param_1);
  _objc_release(ppuVar4);
  lVar2 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010beedce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010beedce0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010beedce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010beedce0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc(PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270);
  func_0x00010bff0f20();
  func_0x00010c1616a0(param_1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beedd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beedd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar3);
  func_0x00010beedd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar23;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beedce0(uVar22);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar22);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar22);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar23);
  return;
}



/* Entry: 106b2f7c8; end: 106b2f84f;  */

void FUN_106b2f7c8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beedce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b2f850; end: 106b2fb37; -[EmailSettingsViewController createDomainSuggestionScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2f850(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  long lVar10;
  long unaff_x24;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112758708);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf8da60();
  lVar2 = lVar1;
  _objc_release();
  if ((int)lVar10 != 0) {
    puVar3 = PTR_PTR_1126af050;
    _objc_alloc();
    func_0x00010c030dc0();
    unaff_x24 = (long)_DAT_112758730;
    uVar8 = *(undefined8 *)(param_1 + unaff_x24);
    *(undefined **)(param_1 + unaff_x24) = puVar3;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)(param_1 + unaff_x24));
    lVar10 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar10);
    puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)(param_1 + unaff_x24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    uStack_90 = uVar8;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = lVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_98 = lVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + unaff_x24);
    uStack_a0 = uVar8;
    uStack_80 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    uStack_b0 = uVar4;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + unaff_x24);
    uStack_78 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010beedce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar8;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_a8);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar10);
    _objc_release(uStack_b0);
    _objc_release(uStack_a0);
    _objc_release(lStack_98);
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    lVar1 = *(long *)(param_1 + unaff_x24);
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288720(lVar1);
    _objc_release(lVar10);
    lVar2 = param_1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106b2fb38;
  puStack_f8 = PTR_PTR_1126f5020;
  lStack_100 = lVar2;
  lStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  uStack_e0 = unaff_x22;
  lStack_d8 = lVar10;
  lStack_d0 = lVar1;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_100,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c2883c0(lVar2);
  lVar10 = (long)_DAT_1127586ec;
  uVar6 = *(undefined8 *)(lVar2 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c071720();
  *(char *)(lVar2 + _DAT_112758734) = (char)uVar4;
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_initWeak(auStack_108,lVar2);
  uVar7 = *(undefined8 *)(lVar2 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_110,auStack_108);
  uVar6 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + _DAT_112758738);
  *(undefined8 *)(lVar2 + _DAT_112758738) = uVar6;
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  return;
}



/* Entry: 106b2fb38; end: 106b2fcf7; -[EmailSettingsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2fb38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5020;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c2883c0(param_1);
  lVar7 = (long)_DAT_1127586ec;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071720();
  *(char *)(param_1 + _DAT_112758734) = (char)uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar1 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112758738);
  *(undefined8 *)(param_1 + _DAT_112758738) = uVar1;
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106b2fcf8; end: 106b2fd87;  */

void FUN_106b2fcf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c071720(uVar2);
  func_0x00010c288460(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28b840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b2fd88; end: 106b2fdd3; -[EmailSettingsViewController viewDidAppear:] */

void FUN_106b2fd88(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5020;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c0af4c0(param_1);
  return;
}



/* Entry: 106b2fdd4; end: 106b2fde3; -[EmailSettingsViewController getTitle] */

void FUN_106b2fdd4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e74338;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e74338,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106b2fde4; end: 106b2fe43; -[EmailSettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2fde4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5020;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_leftButtonPressed_112601348);
  param_1 = param_1 + _DAT_112758710;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf8da40();
  _objc_release(param_1);
  return;
}



/* Entry: 106b2fe44; end: 106b2fe4f; -[EmailSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_106b2fe44(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106b2fe50; end: 106b2fe77; -[EmailSettingsViewController actionBarPressed] */

void FUN_106b2fe50(undefined8 param_1)

{
  func_0x00010be7b280();
                    /* WARNING: Could not recover jumptable at 0x00010c0af4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logSettingEmailSettingPageview__112609740,1);
  return;
}



/* Entry: 106b2fe78; end: 106b301a3; -[EmailSettingsViewController _presentEmailConfirmationAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b2fe78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = auStack_90;
  _objc_initWeak(puVar3,param_1);
  puVar4 = PTR_PTR_1126aed70;
  func_0x000106b4abe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106b301a4;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126aed70;
  func_0x000106b4abf8();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar11);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106b4abc8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar8 = puVar7;
  func_0x000106b4abb0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  puStack_80 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126d09f8;
  _objc_opt_new(PTR_PTR_1126d09f8);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112758714);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar10);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar11);
  lVar2 = lVar2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010bf84b00(puVar11);
    func_0x00010c24df20(lVar2);
    func_0x00010c27cee0(lVar2);
    puVar6 = PTR_PTR_1126d09f0;
    _objc_opt_new(PTR_PTR_1126d09f0);
    func_0x00010c160cc0();
    uVar10 = *(undefined8 *)(lVar2 + _DAT_112758714);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar10);
    _objc_release(puVar6);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 106b301a4; end: 106b30303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b301a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_2);
    func_0x00010c24df20(param_1);
    func_0x00010c27cee0(param_1);
    puVar1 = PTR_PTR_1126d09f0;
    _objc_opt_new(PTR_PTR_1126d09f0);
    func_0x00010c160cc0();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112758714);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b30304; end: 106b30547; -[EmailSettingsViewController tryToChangeEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b30304(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
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
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106b30548;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106b3061c;
  puStack_b8 = &UNK_110852b60;
  _objc_copyWeak(auStack_b0,auStack_80);
  ppuVar3 = &puStack_d0;
  _objc_retainBlock();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_106b30884;
  puStack_e0 = &UNK_110843540;
  _objc_copyWeak(auStack_d8,auStack_80);
  ppuVar4 = &puStack_f8;
  _objc_retainBlock();
  func_0x00010bea4f20(param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127586f0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar4);
  func_0x00010c285660(uVar5);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_d8);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106b30548; end: 106b306bf;  */

void FUN_106b30548(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106b305c0;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106b306c0; end: 106b30883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b306c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010c255b00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bea4f20(*(undefined8 *)(param_1 + 0x20),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c071ae0();
  _objc_release(uVar6);
  _objc_release(uVar1);
  if ((int)uVar7 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      return;
    }
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010c26ca80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0();
  }
  else {
    puVar4 = PTR_PTR_1126d0a00;
    _objc_alloc(PTR_PTR_1126d0a00);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(lVar2 + _DAT_1127586e8);
    uVar7 = *(undefined8 *)(lVar2 + _DAT_1127586ec);
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c05d840(puVar4,param_2,uVar6,uVar7,lVar3,*(undefined8 *)(lVar5 + _DAT_1127586f4),
                        *(undefined8 *)(lVar5 + _DAT_1127586f8),
                        *(undefined8 *)(lVar5 + _DAT_1127586fc),
                        *(undefined8 *)(lVar5 + _DAT_11275870c),
                        *(undefined8 *)(lVar5 + _DAT_1127586f0),
                        *(undefined8 *)(lVar5 + _DAT_112758700),
                        *(undefined8 *)(lVar5 + _DAT_112758718),
                        *(undefined8 *)(lVar5 + _DAT_11275871c),
                        *(undefined8 *)(lVar5 + _DAT_112758720));
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d66a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106b30884; end: 106b3098f;  */

void FUN_106b30884(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x106b30928;
    puStack_38 = &UNK_110841f80;
    lStack_30 = param_1;
    _objc_retain(param_2);
    uStack_28 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106b30990; end: 106b3099f;  */

void FUN_106b30990(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c07b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchSuccess_challenged_error__11260dc00,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106b309a0; end: 106b30ac7; -[EmailSettingsViewController onResendLinkTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b309a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c24f120();
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127586f0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(lVar2);
  func_0x00010c1352e0(uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106b30ac8; end: 106b30ba3;  */

void FUN_106b30ac8(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b30ba4;
  puStack_58 = &UNK_110844dd0;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = param_2;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_3;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106b30ba4; end: 106b30cd7;  */

void FUN_106b30ba4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c256120();
  _objc_release(lVar5);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c237530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR_PTR_1126afca8,PTR_s_showErrorWithText__11266b770,
                 *(undefined8 *)(param_1 + 0x20));
      return;
    }
    if (*(char *)(param_1 + 0x38) != '\x01') {
      return;
    }
  }
  puVar1 = PTR_PTR_1126c75c0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e74418;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74418,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e74438;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e74438,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf994e0(puVar1);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106b30cd8; end: 106b30d3f; -[EmailSettingsViewController _setIsUpdatingEmail:] */

void FUN_106b30cd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beedce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b30d40; end: 106b30dcb; -[EmailSettingsViewController startBarAnimation] */

void FUN_106b30d40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010beedce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beedd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(uVar1);
  func_0x00010c161fa0(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  func_0x00010beedd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b30dcc; end: 106b30e47; -[EmailSettingsViewController startLinkAnimation] */

void FUN_106b30dcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c137e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c137e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b30e48; end: 106b30f1f; -[EmailSettingsViewController stopBarAnimation] */

void FUN_106b30e48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  uVar1 = param_1;
  func_0x00010beedce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beedd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beedd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beedce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad158;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad158,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fa0(param_1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c2883d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updatePage_11267fb18);
  return;
}



/* Entry: 106b30f20; end: 106b30f9b; -[EmailSettingsViewController stopLinkAnimation] */

void FUN_106b30f20(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c137e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c137e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  func_0x00010c137e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b30f9c; end: 106b3103b; -[EmailSettingsViewController updateSearchSwitchState] */

/* WARNING: Possible PIC construction at 0x000106b31004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b31008) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b30f9c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bfc4a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11275872c);
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112758704);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154a60();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11275872c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setOn__112651f00,uVar3);
  return;
}



/* Entry: 106b3103c; end: 106b3105b; -[EmailSettingsViewController updatePageFromIsEmailVerifiedChangedIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b3103c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112758734) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112758734) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2883d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updatePage_11267fb18);
  return;
}



/* Entry: 106b3105c; end: 106b3108f; -[EmailSettingsViewController updatePage] */

void FUN_106b3105c(undefined8 param_1)

{
  func_0x00010c28b840();
  func_0x00010c28aea0(param_1);
  func_0x00010c287780(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c283330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateActionBar_11267e6f0);
  return;
}



/* Entry: 106b31090; end: 106b3116b; -[EmailSettingsViewController updateUpperInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b31090(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  lVar1 = *(long *)(param_1 + _DAT_1127586ec);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f7580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e74478;
  if (lVar4 != 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e74458;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ed00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}


