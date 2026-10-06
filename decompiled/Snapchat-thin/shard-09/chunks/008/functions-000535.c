/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071e18a4; end: 1071e18ab; -[StoryStoryViewSession context] */

undefined8 FUN_1071e18a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1071e18ac; end: 1071e18b3; -[StoryStoryViewSession setContext:] */

void FUN_1071e18ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1071e18b4; end: 1071e18bb; -[StoryStoryViewSession snapIndexCount] */

undefined8 FUN_1071e18b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1071e18bc; end: 1071e18eb; -[StoryStoryViewSession setSnapIndexCount:] */

void FUN_1071e18bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1071e18ec; end: 1071e18f3; -[StoryStoryViewSession storyViewId] */

undefined8 FUN_1071e18ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1071e18f4; end: 1071e1923; -[StoryStoryViewSession setStoryViewId:] */

void FUN_1071e18f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071e1924; end: 1071e195f; -[StoryStoryViewSession .cxx_destruct] */

void FUN_1071e1924(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1071e1960; end: 1071e1b7b; -[SCStoryUsageLogger initWithUserBlizzardLogger:] */

undefined1 * FUN_1071e1960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8c00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010c232700(0x4024000000000000);
    *(char *)((long)puVar1 + 0x38) = (char)puVar3;
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d42d0);
    puVar4 = puVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c0258);
    puVar4 = puVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bb668);
    puVar4 = puVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b9fd0);
    uVar2 = uVar5;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071e1b7c; end: 1071e1b9b;  */

void FUN_1071e1b7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userSession_1126827f8);
  return;
}



/* Entry: 1071e1b9c; end: 1071e1bcf; -[SCStoryUsageLogger applicationDidEnterBackground:] */

void FUN_1071e1b9c(undefined8 param_1)

{
  func_0x00010c25b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071e1bd0; end: 1071e234f; -[SCStoryUsageLogger _logGeofilterStorySnapView:currentStoriesViewingSession:] */

void FUN_1071e1bd0(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1ef8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f18);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f38);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 == 0) goto LAB_1071e2330;
    }
    else {
      _objc_release();
      _objc_release(lVar1);
    }
  }
  puVar3 = PTR_PTR_1126d5110;
  _objc_opt_new(PTR_PTR_1126d5110);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f58);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  func_0x00010c198340(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f78);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f3c0();
  func_0x00010c1a16e0(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110db9478);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  func_0x00010c1c5440(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c205880(puVar3);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c205840(puVar3,param_3,param_1 != 0.0);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1fd8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  func_0x00010c20ddc0(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1ff8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c222d20(puVar3);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(puVar3,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar3,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110e77cf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bd60(puVar3,param_3,lVar1);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(puVar3,param_3,puVar4);
  lVar1 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c222c00(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2058);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2b40(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2078);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955c0(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2098);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955e0(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea20b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea20b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c6c0(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c040(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b460(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea20d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea20d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c060(puVar3,param_3,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea20f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea20f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4b00(puVar3,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2118);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    func_0x00010c1b36a0(puVar3,param_3,lVar2);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2138);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    func_0x00010c19fdc0(puVar3,param_3,lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_5;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0baac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = lVar2;
    func_0x00010c0baac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0b9ce0();
    func_0x00010c1c25a0(puVar3,param_3,lVar5);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0baac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bad40();
    func_0x00010c1c29c0(puVar3);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0baac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0b9de0();
    func_0x00010c1c26e0(puVar3,param_3,lVar5);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0baac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0ba060();
    func_0x00010c1c2780(puVar3,param_3,lVar5);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0baac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86fa0();
    func_0x00010c190ae0(puVar3);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0baac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86f60();
    func_0x00010c190a40(puVar3);
    _objc_release(lVar1);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar3);
  _objc_release(lVar2);
  _objc_release(puVar3);
LAB_1071e2330:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071e2350; end: 1071e251b; -[SCStoryUsageLogger _logStoryAdTrack:] */

void FUN_1071e2350(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x24;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1ff8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  if (param_1 == 0.0) {
    unaff_x24 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1f98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
  }
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110ea2098);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110e77cf8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110dbde38);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c067fc0();
  func_0x00010bfb07e0(uVar2,param_3,uVar3,puVar5,uVar6,uVar7,2,uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  if (param_1 == 0.0) {
    _objc_release(unaff_x24);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071e251c; end: 1071e27ef; -[SCStoryUsageLogger _logGeofilterStorySnapScreenshotForStory:timeViewed:isLocal:] */

void FUN_1071e251c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5118;
  _objc_opt_new(PTR_PTR_1126d5118);
  uVar2 = param_4;
  func_0x00010c105880(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c27df60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010b67af60(uVar3);
  func_0x000108532b74();
  func_0x00010c1c5440(puVar1,param_3,uVar2);
  puVar4 = PTR_PTR_1126bd3b0;
  func_0x00010c25b7a0(PTR_PTR_1126bd3b0,param_3,param_4);
  func_0x00010c20ddc0(puVar1,param_3,puVar4);
  uVar2 = param_4;
  func_0x00010c25b3c0(param_4);
  func_0x00010c20de00(puVar1,param_3,uVar2);
  func_0x00010c222d20(param_1,puVar1);
  uVar2 = param_4;
  func_0x00010bf42a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c14be00();
  func_0x00010c226380(puVar1,param_3,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  if (param_5 != 0) {
    func_0x00010c1a2b40(puVar1,param_3,&PTR____CFConstantStringClassReference_110ea1ed8);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_4;
  func_0x00010c259b00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar4,param_3,uVar2);
  _objc_release(uVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010c259b00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955a0(puVar1,param_3,uVar2);
    _objc_release(uVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_4;
  func_0x00010c25a0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar4,param_3,uVar2);
  _objc_release(uVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010c25a0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955c0(puVar1,param_3,uVar2);
    _objc_release(uVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_4;
  func_0x00010bf93ae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar4,param_3,uVar2);
  _objc_release(uVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010bf93ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1955e0(puVar1,param_3,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c27dd80();
  if ((uVar2 < 0x1b) && ((1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0)) {
    func_0x00010c176040(puVar1,param_3,2);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071e27f0; end: 1071e285b; +[SCStoryUsageLogger storyTypeFromStory:] */

undefined8 FUN_1071e27f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07b540();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c074980();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c07dc60();
      uVar2 = 1;
      if ((int)uVar1 == 0) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 6;
    }
  }
  else {
    uVar2 = 7;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1071e285c; end: 1071e29bf; +[SCStoryUsageLogger _getStorySnapIndexPos:snapId:] */

undefined1 *
FUN_1071e285c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  double dVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  dVar11 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    lVar9 = *plStack_120;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(ulong *)(lStack_128 + (long)puVar10 * 8);
        uVar1 = uVar8;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        puVar6 = (undefined8 *)param_4;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((uVar2 & 1) != 0) {
          func_0x00010bfec9e0(uVar8);
          puVar7 = (undefined1 *)(long)dVar11;
          goto LAB_1071e2968;
        }
        puVar10 = puVar10 + 1;
      } while (puVar7 != puVar10);
      puVar7 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined1 *)0x0);
  }
  puVar7 = (undefined1 *)0xffffffffffffffff;
LAB_1071e2968:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar3 = PTR_PTR_1126d5120;
  _objc_alloc_init(PTR_PTR_1126d5120);
  func_0x00010c20dc00(param_3,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c258ec0(puVar6);
  puVar7 = param_3;
  func_0x00010c25b440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d40();
  _objc_release(puVar7);
  func_0x00010c29d360(puVar6);
  puVar7 = param_3;
  func_0x00010c25b440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222620();
  _objc_release(puVar7);
  puVar7 = (undefined1 *)puVar6;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = (undefined1 *)puVar6;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010bf602e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar10 == (undefined1 *)0x0) {
    if (puVar4 == (undefined1 *)0x0) goto LAB_1071e2c68;
    puVar7 = puVar4;
    func_0x00010c259cc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df700();
    _objc_release(param_3);
  }
  else {
    func_0x00010c076da0(puVar10);
    puVar7 = param_3;
    func_0x00010c25b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff060();
    _objc_release(puVar7);
    puVar7 = puVar10;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010c25b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df700();
    _objc_release(puVar5);
    _objc_release(puVar7);
    func_0x00010c29f4a0(puVar6);
    puVar7 = param_3;
    func_0x00010c25b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c223280();
    _objc_release(puVar7);
    puVar7 = puVar10;
    func_0x00010c07dc00();
    puVar5 = param_3;
    func_0x00010c25b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)puVar7 == 0) {
      func_0x00010c20ddc0();
    }
    else {
      func_0x00010c20ddc0();
      _objc_release(puVar5);
      func_0x00010c09ab80(puVar6);
      puVar5 = param_3;
      func_0x00010c25b440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be560();
    }
    _objc_release(puVar5);
    puVar7 = (undefined1 *)puVar6;
    func_0x00010c29f4a0(puVar6);
    func_0x00010c276e80(puVar10,param_2,puVar7);
    func_0x00010c25b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218aa0(dVar11);
    puVar7 = param_3;
  }
  _objc_release(puVar7);
LAB_1071e2c68:
  _objc_release(puVar4);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return (undefined1 *)puVar6;
}



/* Entry: 1071e29c0; end: 1071e2c97; -[SCStoryUsageLogger onStoryStoryViewStart:] */

void FUN_1071e29c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5120;
  _objc_alloc_init(PTR_PTR_1126d5120);
  func_0x00010c20dc00(param_2,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c258ec0(param_4);
  lVar2 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182d40();
  _objc_release(lVar2);
  func_0x00010c29d360(param_4);
  lVar2 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222620();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf602e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    if (lVar4 == 0) goto LAB_1071e2c68;
    lVar2 = lVar4;
    func_0x00010c259cc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df700();
    _objc_release(param_2);
  }
  else {
    func_0x00010c076da0(lVar3);
    lVar2 = param_2;
    func_0x00010c25b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff060();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c25b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df700();
    _objc_release(lVar5);
    _objc_release(lVar2);
    func_0x00010c29f4a0(param_4);
    lVar2 = param_2;
    func_0x00010c25b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c223280();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c07dc00();
    lVar5 = param_2;
    func_0x00010c25b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar2 == 0) {
      func_0x00010c20ddc0();
    }
    else {
      func_0x00010c20ddc0();
      _objc_release(lVar5);
      func_0x00010c09ab80(param_4);
      lVar5 = param_2;
      func_0x00010c25b440(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be560();
    }
    _objc_release(lVar5);
    lVar2 = param_4;
    func_0x00010c29f4a0(param_4);
    func_0x00010c276e80(lVar3,param_3,lVar2);
    func_0x00010c25b440(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218aa0(param_1);
    lVar2 = param_2;
  }
  _objc_release(lVar2);
LAB_1071e2c68:
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071e2c98; end: 1071e2e7f; -[SCStoryUsageLogger logPlaybackStallCount:firstStallMediaTime:firstStallDuration:totalStallDuration:currentlyStalled:] */

void FUN_1071e2c98(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = param_4;
  func_0x00010c232da0();
  if ((int)lVar1 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126c45f8;
  _objc_alloc_init(PTR_PTR_1126c45f8);
  func_0x00010c2091c0();
  func_0x00010c19d620(puVar2,param_5,(long)(param_1 * 1000.0));
  func_0x00010c19d5e0(puVar2,param_5,(long)(param_2 * 1000.0));
  func_0x00010c2189a0(puVar2,param_5,(long)(param_3 * 1000.0));
  func_0x00010c198660(puVar2,param_5,param_7);
  func_0x00010c226f60(puVar2,param_5,1);
  lVar1 = param_4;
  func_0x00010c25b440(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c222c00(puVar2,param_5,lVar3);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(puVar2,param_5,puVar4);
  lVar1 = param_4;
  func_0x00010c25b440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c25b720();
  _objc_release(lVar1);
  if (lVar3 == 4) {
    uVar7 = 2;
  }
  else {
    lVar1 = param_4;
    func_0x00010c25b440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c25b720();
    _objc_release(lVar1);
    uVar7 = 3;
    if (lVar3 != 9) {
      uVar7 = 0;
    }
  }
  func_0x00010c1b6340(puVar2,param_5,uVar7);
  puVar4 = PTR_PTR_1126c4600;
  _objc_alloc_init(PTR_PTR_1126c4600);
  puVar5 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf5e460();
  func_0x00010c180de0(puVar4,param_5,puVar6);
  _objc_release(puVar5);
  func_0x00010c1cc120(puVar2,param_5,puVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_4 + 8),param_5,puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071e2e80; end: 1071e421b; -[SCStoryUsageLogger logViewStorySnapWithRollMaxDegree:rollMinDegree:pinchToZoomMillis:videoViewTimeSec:isFullyViewed:source:currentStoriesViewingSession:snappableInviteAction:contextSnapViewMetrics:] */

void FUN_1071e2e80(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong in_x4;
  long in_x6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(in_x4);
  _objc_retain(in_x6);
  uVar2 = in_x4;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf602e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d5128;
  _objc_alloc_init();
  func_0x00010bea2ce0(param_4,param_5);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar6 = in_x4;
  func_0x00010bf5ed40(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243780();
  param_4 = -param_4;
  func_0x00010bf65600(param_4,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar5);
  _objc_release(puVar7);
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  if (uVar6 == 0) {
    func_0x00010c0fd0c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  func_0x00010c2208c0(puVar5);
  uVar6 = uVar3;
  func_0x00010c0a7de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar5);
  _objc_release(uVar6);
  func_0x00010bf7c380(uVar2);
  func_0x00010c210920(puVar5);
  func_0x00010bfecea0(in_x4);
  func_0x00010c204840(puVar5);
  func_0x00010bf972a0(uVar2);
  func_0x00010c196920(puVar5);
  func_0x00010bf9b860(uVar2);
  func_0x00010c198400(puVar5);
  func_0x00010c07b500(in_x4);
  func_0x00010c1b39c0(puVar5);
  func_0x00010c0724e0(in_x4);
  func_0x00010c1b0ca0(puVar5);
  uVar6 = uVar3;
  func_0x00010c25ece0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f100(puVar5);
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e460();
  func_0x00010c16ef20(puVar5);
  _objc_release(puVar7);
  func_0x00010c0755e0(in_x4);
  func_0x00010c21fb20(puVar5);
  uVar6 = in_x4;
  func_0x00010c246aa0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206880(puVar5);
  _objc_release(uVar6);
  func_0x00010c206c40(puVar5);
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(puVar5);
  func_0x00010bec4660(param_5);
  func_0x00010c20cac0(puVar5);
  func_0x00010c29d420(in_x4);
  func_0x00010c222660(puVar5);
  lVar9 = in_x6;
  func_0x00010bf4f080(in_x6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar5);
  _objc_release(lVar9);
  lVar9 = in_x6;
  func_0x00010c26e8e0(in_x6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d600(puVar5);
  _objc_release(lVar9);
  lVar9 = in_x6;
  func_0x00010c26e8c0(in_x6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d5e0(puVar5);
  _objc_release(lVar9);
  lVar9 = in_x6;
  func_0x00010c26e900(in_x6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182e00(puVar5);
  _objc_release(lVar9);
  func_0x00010c0835a0(in_x6);
  func_0x00010c223120(puVar5);
  func_0x00010bdc1220(in_x6);
  func_0x00010c182ea0(puVar5);
  lVar9 = in_x6;
  func_0x00010bfd6ba0();
  if ((int)lVar9 != 0) {
    func_0x00010c0dad20(in_x6);
    func_0x00010c1cd9e0(puVar5);
    func_0x00010c27fd60(in_x6);
    func_0x00010c21b5c0(puVar5);
    func_0x00010bf19c00(in_x6);
    func_0x00010c170040(puVar5);
  }
  func_0x00010c0ddd60(in_x6);
  func_0x00010c1ceb40(puVar5);
  func_0x00010c0de6c0(in_x6);
  func_0x00010c1cf400(puVar5);
  lVar9 = in_x6;
  func_0x00010c095380(in_x6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar9);
  lVar9 = in_x6;
  func_0x00010c095380();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    lVar10 = in_x6;
    func_0x00010c095380();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf62d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar10);
    _objc_release(lVar9);
    if (lVar11 == 0) goto LAB_1071e341c;
  }
  else {
    _objc_release();
    _objc_release(lVar9);
  }
  puVar7 = PTR_PTR_1126c4718;
  _objc_opt_new(PTR_PTR_1126c4718);
  lVar9 = in_x6;
  func_0x00010c095380(in_x6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4da0(puVar7);
  _objc_release(lVar10);
  _objc_release(lVar9);
  lVar9 = in_x6;
  func_0x00010c095380(in_x6);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf62d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189040(puVar7);
  _objc_release(lVar10);
  _objc_release(lVar9);
  func_0x00010c1bb300(puVar5);
  _objc_release(puVar7);
LAB_1071e341c:
  lVar9 = in_x6;
  func_0x00010c095380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    lVar9 = in_x6;
    func_0x00010c095380(in_x6);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c0b5c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1160(puVar5);
    _objc_release(lVar10);
    _objc_release(lVar9);
    lVar9 = in_x6;
    func_0x00010c095380(in_x6);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c247400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206b60(puVar5);
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  uVar12 = param_5;
  func_0x00010c25b440(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c25b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dfe0(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar6 = uVar2;
  func_0x00010bfb8ba0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06dc60();
  func_0x00010c1afbe0(puVar5);
  _objc_release(uVar6);
  lVar9 = in_x6;
  func_0x00010c1343c0(in_x6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(puVar5);
  _objc_release(lVar9);
  lVar9 = in_x6;
  func_0x00010c0d30a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar9 != 0) {
    lVar9 = in_x6;
    func_0x00010c0d30a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    func_0x00010c14de00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca440(puVar5);
    _objc_release(puVar7);
    _objc_release(lVar9);
    lVar9 = in_x6;
    func_0x00010c0d30a0(in_x6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d560();
    func_0x00010c1ca420(puVar5);
    _objc_release(lVar9);
  }
  uVar6 = in_x4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar6;
  func_0x00010c27dd80();
  _objc_release(uVar6);
  if ((uVar14 < 0xd) && ((1L << (uVar14 & 0x3f) & 0x1430U) != 0)) {
    uVar6 = in_x4;
    func_0x00010c089060(in_x4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f200();
    func_0x00010c211ce0(puVar5);
    _objc_release(uVar6);
    uVar6 = in_x4;
    func_0x00010c089060(in_x4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f200();
    func_0x00010c211d20(puVar5);
    _objc_release(uVar6);
    uVar6 = in_x4;
    func_0x00010c089060(in_x4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f260();
    func_0x00010c211d00(puVar5);
    _objc_release(uVar6);
    uVar6 = in_x4;
    func_0x00010c089060(in_x4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f280();
    func_0x00010c211d40(puVar5);
    _objc_release(uVar6);
  }
  puVar7 = PTR_PTR_1126b5870;
  _objc_opt_new();
  uVar6 = uVar3;
  func_0x00010c241920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d03e0(puVar7);
  _objc_release(uVar6);
  func_0x00010c185860(puVar5);
  uVar6 = in_x4;
  func_0x00010c07c460();
  if ((uVar6 & 1) == 0) {
    func_0x00010c2a2460(uVar2);
  }
  func_0x00010c1dd200(puVar5);
  uVar6 = uVar4;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar14 = uVar4;
    func_0x00010c0e1b00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar6);
    uVar14 = uVar6;
  }
  _objc_release(uVar6);
  func_0x00010c219300(puVar5);
  uVar6 = uVar3;
  func_0x00010c2709c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(uVar6);
  func_0x00010c161580(ABS(param_4),puVar5);
  func_0x00010c25b7e0(PTR_PTR_1126bd3b0);
  func_0x00010c20de00(puVar5);
  uVar6 = uVar3;
  func_0x00010c27dd80();
  if ((uVar6 < 0x1b) && ((1L << (uVar6 & 0x3f) & 0x7e7fc60U) != 0)) {
    func_0x00010c176040(puVar5);
    func_0x00010c1ee5e0(param_1,puVar5);
    func_0x00010c1ee600(param_2,puVar5);
    func_0x00010c1dbbc0((double)(int)((param_3 / 1000.0) * 10.0) / 10.0,puVar5);
  }
  func_0x00010becdc80(param_5);
  uVar6 = uVar3;
  func_0x00010c074980();
  if ((int)uVar6 != 0) {
    uVar6 = uVar3;
    func_0x00010c11ac00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_5;
    func_0x00010be249c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4b00(puVar5);
    _objc_release(uVar12);
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010c11ac00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7840(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010c11ac00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be40d20(param_5);
    func_0x00010c1b36a0(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar3;
    func_0x00010c11ac00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be19300(param_5);
    func_0x00010c19fdc0(puVar5);
    _objc_release(uVar6);
    uVar12 = param_5;
    func_0x00010bdf79a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c11ac00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf625c0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar12);
    uVar12 = uVar13;
    func_0x00010c1057e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c1a4b60(puVar5);
    _objc_release(uVar12);
    uVar12 = uVar13;
    func_0x00010c29ef80(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c1a4b80(puVar5);
    _objc_release(uVar12);
    _objc_release(uVar13);
  }
  uVar6 = uVar4;
  func_0x00010c0baac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 != 0) {
    uVar6 = uVar4;
    func_0x00010c259cc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c0baac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9ce0();
    func_0x00010c1c25a0(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c0baac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bac20();
    func_0x00010c1c2900(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c0baac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bad40();
    func_0x00010c1c29c0(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c0baac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9de0();
    func_0x00010c1c26e0(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c0baac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba060();
    func_0x00010c1c2780(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c0baac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86fa0();
    func_0x00010c190ae0(puVar5);
    _objc_release(uVar6);
    uVar6 = uVar4;
    func_0x00010c0baac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86f60();
    func_0x00010c190a40(puVar5);
    _objc_release(uVar6);
  }
  uVar6 = in_x4;
  func_0x00010c259140();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    uVar15 = uVar6;
    func_0x00010c0ba060(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb020b8();
    func_0x00010c1c2780(puVar5);
    _objc_release(uVar15);
    uVar15 = uVar6;
    func_0x00010c0b9de0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb01b6c();
    func_0x00010c1c26e0(puVar5);
    _objc_release(uVar15);
    uVar15 = uVar6;
    func_0x00010c0fd4a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1dc800(puVar5);
    _objc_release(uVar15);
    uVar15 = uVar6;
    func_0x00010c247d20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc92e28();
    func_0x00010c206c40(puVar5);
    _objc_release(uVar15);
    uVar15 = uVar6;
    func_0x00010c259cc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar5);
    _objc_release(uVar15);
    uVar15 = uVar6;
    func_0x00010c25b720(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb15558();
    func_0x00010c20ddc0(puVar5);
    _objc_release(uVar15);
    uVar15 = uVar6;
    func_0x00010c25b7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar15 != 0) {
      uVar15 = uVar6;
      func_0x00010c25b7c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bb1579c();
      func_0x00010c20de00(puVar5);
      _objc_release(uVar15);
    }
    uVar15 = uVar6;
    func_0x00010bf4de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar15 != 0) {
      uVar15 = uVar6;
      func_0x00010bf4de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010baf2e4c();
      func_0x00010c222c00(puVar5);
      _objc_release(uVar15);
    }
    uVar15 = uVar6;
    func_0x00010c0b9ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar15 != 0) {
      uVar15 = uVar6;
      func_0x00010c0b9ce0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1c25a0(puVar5);
      _objc_release(uVar15);
    }
    uVar15 = uVar6;
    func_0x00010c0ba060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bb020b8();
    _objc_release(uVar15);
    if (uVar16 == 9) {
      uVar15 = uVar6;
      func_0x00010c259cc0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(puVar5);
      _objc_release(uVar15);
    }
    uVar15 = uVar6;
    func_0x00010c100220(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c204800(puVar5);
    _objc_release(uVar15);
    puVar1 = PTR_PTR_1126bd3b0;
    uVar15 = uVar6;
    func_0x00010c100220(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar6;
    func_0x00010c259cc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be230c0(puVar1);
    func_0x00010c204840(puVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
  }
  uVar15 = uVar3;
  func_0x00010c105880();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c0720c0();
  _objc_release(uVar15);
  if ((int)uVar16 != 0) {
    uVar15 = uVar3;
    func_0x00010c0c47e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    if (uVar16 == 0) {
      uVar17 = uVar3;
      func_0x00010c0c4000(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
    }
    else {
      _objc_retain(uVar16);
      uVar18 = uVar16;
    }
    _objc_release(uVar16);
    _objc_release(uVar15);
    uVar15 = uVar18;
    func_0x000107cd32fc(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212a80(puVar5);
    _objc_release(uVar15);
    _objc_release(uVar18);
  }
  _objc_initWeak(auStack_88,param_5);
  puVar1 = PTR_PTR_1126aed60;
  _objc_retain(puVar5);
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010bf5e0c0(puVar1);
  lVar9 = in_x6;
  func_0x00010bfcebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if (lVar10 != 0) {
    lVar9 = in_x6;
    func_0x00010bfcebc0(in_x6);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeb20(puVar5);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  lVar9 = in_x6;
  func_0x00010c259e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  _objc_release(lVar9);
  if (lVar10 != 0) {
    lVar9 = in_x6;
    func_0x00010c259e20(in_x6);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d2c0(puVar5);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
  }
  uVar15 = uVar3;
  func_0x00010bfe32e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar15 != 0) {
    uVar15 = uVar3;
    func_0x00010bfe32e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bfe3180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
    uVar15 = uVar3;
    func_0x00010bfe32e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df700(puVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
    uVar15 = uVar3;
    func_0x00010bfe32e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df6e0(puVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
  }
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(in_x6);
  _objc_release(in_x4);
  return;
}



/* Entry: 1071e421c; end: 1071e42a3;  */

void FUN_1071e421c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c1dd480(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cbb2b8(uVar3,0,0,uVar2,*(undefined8 *)(lVar1 + 8));
    _objc_release(uVar2);
    func_0x00010c0b2e60(*(undefined8 *)(lVar1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071e42a4; end: 1071e4473; -[SCStoryUsageLogger logScreenshotStorySnap:] */

void FUN_1071e42a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf5ed40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf602e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf5ed40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243780();
  _objc_release(uVar1);
  dVar7 = (double)(long)(param_1 * 1000.0) / 1000.0;
  lVar4 = param_2;
  func_0x00010bec4e20(dVar7,param_2,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c29d360();
  func_0x00010c222620(lVar4,param_3,lVar6);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c222c00(lVar4,param_3,lVar6);
  _objc_release(lVar5);
  uVar1 = param_4;
  func_0x00010c29d420(param_4);
  _objc_release(param_4);
  func_0x00010c222660(lVar4,param_3,uVar1);
  uVar1 = uVar3;
  func_0x00010c076da0();
  if ((int)uVar1 != 0) {
    func_0x00010c1a2b40(lVar4,param_3,&PTR____CFConstantStringClassReference_110ea1ed8);
  }
  lVar5 = param_2;
  func_0x00010bde79c0(param_2,param_3,uVar2);
  if ((int)lVar5 != 0) {
    uVar1 = uVar3;
    func_0x00010c076da0(uVar3);
    func_0x00010be54000(dVar7,param_2,param_3,uVar2,uVar1);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071e4474; end: 1071e470f; -[SCStoryUsageLogger _storySnapScreenshotEventForStory:timeViewed:] */

void FUN_1071e4474(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  dVar7 = param_1;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5130;
  _objc_alloc_init(PTR_PTR_1126d5130);
  uVar2 = param_4;
  func_0x00010c0a7de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c25ece0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f100(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c105880(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c105860(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bd3b0;
  func_0x00010c25b7a0(PTR_PTR_1126bd3b0,param_3,param_4);
  func_0x00010c20ddc0(puVar1,param_3,puVar3);
  uVar2 = param_4;
  func_0x00010c25b3c0(param_4);
  func_0x00010c20de00(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010c27df60(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010b67af60(uVar4);
  func_0x000108532b74();
  func_0x00010c1c5440(puVar1,param_3,uVar2);
  uVar2 = param_4;
  func_0x00010bf42a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c14be00();
  func_0x00010c226380(puVar1,param_3,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  func_0x00010c26f000(param_4);
  if (dVar7 != 0.0) {
    func_0x00010c205820((double)(long)(dVar7 * 1000.0) / 1000.0,puVar1);
  }
  func_0x00010c215700(param_1,puVar1);
  uVar2 = param_4;
  func_0x00010c27dd80();
  if ((uVar2 < 0x1b) && ((1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0)) {
    func_0x00010c176040(puVar1,param_3,2);
  }
  uVar2 = param_4;
  func_0x00010c074980();
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c259cc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec50a0(param_2,param_3,uVar2);
    func_0x00010c20de00(puVar1,param_3,param_2);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c259cc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7840(puVar1,param_3,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071e4710; end: 1071e4713; -[SCStoryUsageLogger logSkipStorySnapLegacy:] */

void FUN_1071e4710(void)

{
  return;
}



/* Entry: 1071e4714; end: 1071e4907; -[SCStoryUsageLogger logStoryStoryView:] */

void FUN_1071e4714(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c105860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010be593c0(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe63a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1cc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c105860();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(lVar1);
    func_0x00010c2448c0(uVar5);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1071e4908; end: 1071e495b;  */

void FUN_1071e4908(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be593c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071e495c; end: 1071e541f; -[SCStoryUsageLogger _logStoryStoryView:friendStoriesViewingSession:firstStoryPosterSnapchatter:] */

void FUN_1071e495c(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined *param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_5;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = param_5;
    func_0x00010bfb1cc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126d5138;
  _objc_alloc_init(PTR_PTR_1126d5138);
  puVar5 = puVar1;
  func_0x00010c25b720();
  puVar2 = PTR_PTR_1126bd3b0;
  if ((puVar1 == (undefined *)0x0) || (puVar5 == (undefined *)0xffffffffffffffff)) {
    puVar5 = param_5;
    func_0x00010bfb1cc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b7a0();
    _objc_release(puVar5);
    puVar5 = puVar2;
  }
  func_0x00010c20ddc0(puVar3);
  if (puVar5 == (undefined *)0x6) {
    func_0x00010bec50a0();
  }
  else {
    func_0x00010bec5080(param_2);
  }
  func_0x00010c20de00(puVar3);
  puVar2 = param_5;
  func_0x00010bfb8ba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06dc60();
  func_0x00010c1afbe0(puVar3);
  _objc_release(puVar2);
  func_0x00010c1a5b00(puVar3);
  func_0x00010c29ee00(param_5);
  dVar14 = (double)(long)(param_1 * 1000.0) / 1000.0;
  func_0x00010c215700(dVar14,puVar3);
  func_0x00010c276d80(param_5);
  func_0x00010c205820((double)(long)(dVar14 * 1000.0) / 1000.0,puVar3);
  func_0x00010c277040(param_5);
  func_0x00010c1cf460(puVar3);
  func_0x00010c280700(param_5);
  func_0x00010c1cf440(puVar3);
  puVar2 = param_5;
  func_0x00010c1057c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(puVar3);
  _objc_release(puVar2);
  func_0x00010c29d360(param_4);
  lVar6 = param_2;
  func_0x00010beb5500();
  if ((int)lVar6 != 0) {
    func_0x00010c29d420(param_4);
    func_0x00010c222660(puVar3);
  }
  func_0x00010bf9ba60(param_4);
  func_0x00010c198340(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = param_5;
    func_0x00010bfb1cc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ea60();
    func_0x00010c1a16e0(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c0741a0(puVar1);
    func_0x00010c1a16e0(puVar3);
  }
  func_0x00010c29d360(param_4);
  func_0x00010c222620(puVar3);
  func_0x00010c29d360(param_4);
  func_0x000108534aa8();
  func_0x00010c222c00(puVar3);
  uVar7 = param_4;
  func_0x00010c246aa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206880(puVar3);
  _objc_release(uVar7);
  func_0x00010bec4660(param_2);
  func_0x00010c20cac0(puVar3);
  func_0x00010bf97160(param_5);
  func_0x00010c196820(puVar3);
  func_0x00010bf972a0(param_5);
  func_0x00010c196920(puVar3);
  func_0x00010c07b500(param_4);
  func_0x00010c1b39c0(puVar3);
  func_0x00010c0724e0(param_4);
  func_0x00010c1b0ca0(puVar3);
  lVar6 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c25b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dfe0(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar6);
  if (param_6 != 0) {
    func_0x00010795e2c8(param_6);
    func_0x00010c1a0ce0(puVar3);
    func_0x00010c07a6a0(param_6);
    func_0x00010c184500(puVar3);
  }
  puVar2 = puVar1;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010c0e1b00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar5 = puVar2;
  }
  _objc_release(puVar2);
  func_0x00010c219300(puVar3);
  func_0x00010c276c00(param_5);
  func_0x00010c203cc0(puVar3);
  uVar7 = param_4;
  func_0x00010c07c460();
  if ((uVar7 & 1) == 0) {
    func_0x00010c2a2460(param_5);
  }
  func_0x00010c1dd200(puVar3);
  uVar7 = param_4;
  func_0x00010bf6a5a0();
  if (uVar7 == 2) {
    func_0x00010bf5ed00(param_4);
    func_0x00010c160b20(puVar3);
    func_0x00010bf5ed20(param_4);
    func_0x00010c1e9ac0(puVar3);
    func_0x00010bf5ed00(param_4);
    func_0x00010c16cb20(puVar3);
    func_0x00010bf5ed20(param_4);
    func_0x00010c1dddc0(puVar3);
  }
  puVar2 = puVar1;
  func_0x00010c078d40();
  if ((int)puVar2 != 0) {
    func_0x00010c0c5640();
    func_0x00010c1dd2a0(puVar3);
  }
  func_0x00010c25b040(param_4);
  func_0x00010c20d9e0(puVar3);
  puVar2 = puVar1;
  func_0x00010c076da0();
  if ((int)puVar2 != 0) {
    func_0x00010c1a2b40(puVar3);
  }
  uVar7 = param_4;
  func_0x00010c258ec0();
  if (uVar7 != 1) {
    func_0x00010c29d360(param_4);
    func_0x000107a59564();
  }
  func_0x00010c206c40(puVar3);
  puVar2 = puVar1;
  func_0x00010c0baac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010c259cc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0baac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9ce0();
    func_0x00010c1c25a0(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0baac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bac20();
    func_0x00010c1c2900(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0baac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bad40();
    func_0x00010c1c29c0(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0baac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9de0();
    func_0x00010c1c26e0(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0baac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba060();
    func_0x00010c1c2780(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0baac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86fa0();
    func_0x00010c190ae0(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c0baac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86f60();
    func_0x00010c190a40(puVar3);
    _objc_release(puVar2);
  }
  uVar7 = param_4;
  func_0x00010c259140();
  _objc_retainAutoreleasedReturnValue();
  if (uVar7 != 0) {
    uVar9 = uVar7;
    func_0x00010c0ba060(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb020b8();
    func_0x00010c1c2780(puVar3);
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010c0b9de0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb01b6c();
    func_0x00010c1c26e0(puVar3);
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010c0fd4a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1dc800(puVar3);
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010c247d20(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc92e28();
    func_0x00010c206c40(puVar3);
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010c259cc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar3);
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010c25b720(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bb15558();
    func_0x00010c20ddc0(puVar3);
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010c25b7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 != 0) {
      uVar9 = uVar7;
      func_0x00010c25b7c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bb1579c();
      func_0x00010c20de00(puVar3);
      _objc_release(uVar9);
    }
    uVar9 = uVar7;
    func_0x00010bf4de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 != 0) {
      uVar9 = uVar7;
      func_0x00010bf4de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010baf2e4c();
      func_0x00010c222c00(puVar3);
      _objc_release(uVar9);
    }
    uVar9 = uVar7;
    func_0x00010c0b9ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 != 0) {
      uVar9 = uVar7;
      func_0x00010c0b9ce0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1c25a0(puVar3);
      _objc_release(uVar9);
    }
  }
  puVar2 = puVar1;
  func_0x00010c074d80();
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x00010c258040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfe32e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfe3180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c258040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfe32e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df700(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c258040(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfe32e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df6e0(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar2);
  }
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bfe63a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cbaff0(puVar3,0,0,uVar13,*(undefined8 *)(param_2 + 8));
  _objc_release(uVar13);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8));
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071e5420; end: 1071e5673; -[SCStoryUsageLogger logStoryStorySession:] */

void FUN_1071e5420(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5140;
  _objc_alloc_init(PTR_PTR_1126d5140);
  lVar2 = param_3;
  func_0x00010c277060(param_3);
  func_0x00010c20dfa0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c280720(param_3);
  func_0x00010c20dfc0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010bf9ba60(param_3);
  func_0x00010c198340(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c247ec0(param_3);
  func_0x000108534aa8();
  func_0x00010c222c00(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c247ec0(param_3);
  lVar3 = param_1;
  func_0x00010beb5500(param_1,param_2,lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c29d420(param_3);
    func_0x00010c222660(puVar1,param_2,lVar2);
  }
  lVar2 = param_3;
  func_0x00010c063e20(param_3);
  func_0x00010c20cda0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c277040(param_3);
  func_0x00010c205ae0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c280700(param_3);
  func_0x00010c205b00(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c276940(param_3);
  func_0x00010c204f40(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c0741a0(param_3);
  func_0x00010c1a16e0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c25b040(param_3);
  func_0x00010c20d9e0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010bf5ed40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bec5080(param_1,param_2,lVar2);
  func_0x00010c20de20(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c09d300(param_3);
  func_0x00010c1beec0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c0755e0(param_3);
  func_0x00010c21fb20(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c0755e0();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0fe880(param_3);
    func_0x00010c1dd2a0(puVar1,param_2,lVar2);
  }
  lVar2 = param_3;
  func_0x00010c29d360();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bfb8540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c20d860(puVar1,param_2,lVar3);
    lVar2 = param_3;
    func_0x00010bfb8540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    func_0x00010c20d840(puVar1,param_2,lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071e5674; end: 1071e5723; -[SCStoryUsageLogger logStorySnapContextMenuViewWithMediaType:storyType:storySnapId:entryEvent:] */

void FUN_1071e5674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d5148;
  _objc_retain(param_5);
  _objc_alloc_init(puVar2);
  func_0x00010c1c5440();
  func_0x00010c20de00(puVar2,param_2,param_4);
  func_0x00010c20db00(puVar2,param_2,param_5);
  _objc_release(param_5);
  uVar1 = 10;
  if (param_6 != 2) {
    uVar1 = 6;
  }
  if (param_6 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  func_0x00010c196820(puVar2,param_2,uVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071e5724; end: 1071e582b; -[SCStoryUsageLogger logStorySnapShareSendWithMediaType:storyType:storySnapId:recipientCount:entryEvent:trackingId:viewLocation:] */

void FUN_1071e5724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d5150;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_alloc_init(puVar2);
  func_0x00010c1c5440();
  func_0x00010c219300(puVar2,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c20de00(puVar2,param_2,param_4);
  func_0x00010c20db00(puVar2,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1e88a0(puVar2,param_2,param_6);
  uVar1 = 10;
  if (param_7 != 2) {
    uVar1 = 6;
  }
  if (param_7 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  func_0x00010c196820(puVar2,param_2,uVar1);
  func_0x000108534aa8(param_9);
  func_0x00010c222c00(puVar2,param_2,param_9);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071e582c; end: 1071e58f3; -[SCStoryUsageLogger updateSnapIndexCount:] */

void FUN_1071e582c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5ed40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29f4a0(param_3);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0df400(uVar2,param_2,uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204800();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071e58f4; end: 1071e5d5f; -[SCStoryUsageLogger _setCommonPropertiesForViewEvent:story:videoViewTimeSec:isFullyViewed:currentStoriesViewingSession:] */

void FUN_1071e58f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar6 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c29d360();
  func_0x00010c222620(param_4,param_3,lVar1);
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c222c00(param_4,param_3,lVar1);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126bd3b0;
  func_0x00010c25b7a0(PTR_PTR_1126bd3b0,param_3,param_5);
  func_0x00010c20ddc0(param_4,param_3,puVar2);
  lVar6 = param_7;
  func_0x00010bf9ba60(param_7);
  func_0x00010c198340(param_4,param_3,lVar6);
  lVar6 = param_5;
  func_0x00010bf0d6a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c08fa60();
  func_0x00010c225c80(param_4,param_3,lVar1 != 0);
  _objc_release(lVar6);
  lVar6 = param_7;
  func_0x00010bf5ed40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243780();
  dVar8 = dVar9;
  _objc_release(lVar6);
  lVar6 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f000();
  func_0x00010c214bc0(dVar9 + dVar8,lVar6);
  _objc_release(lVar6);
  fVar7 = SUB84((double)(long)(dVar9 * 1000.0) / 1000.0,0);
  lVar6 = param_5;
  func_0x00010c0830a0();
  if ((param_1 != 0.0) && ((int)lVar6 != 0)) {
    func_0x00010c222320((double)(long)(param_1 * 1000.0) / 1000.0,param_4);
  }
  func_0x00010c215700(param_4);
  func_0x00010c1a16e0(param_4,param_3,param_6);
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  dVar9 = (double)fVar7;
  func_0x00010c1dda00(param_4);
  _objc_release(puVar2);
  lVar6 = param_5;
  func_0x00010bfed740(param_5);
  func_0x00010c205840(param_4,param_3,lVar6);
  lVar6 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c2415c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c067ec0();
  _objc_release(lVar1);
  _objc_release(lVar6);
  func_0x00010c204800(param_4,param_3,(long)(int)lVar3);
  lVar6 = param_7;
  func_0x00010bf5ed40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010c076da0();
  if ((int)lVar6 != 0) {
    func_0x00010c1a2b40(param_4,param_3,&PTR____CFConstantStringClassReference_110ea1ed8);
  }
  lVar6 = param_5;
  func_0x00010c105880(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(param_4,param_3,lVar6);
  _objc_release(lVar6);
  lVar6 = param_5;
  func_0x00010c105860(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(param_4,param_3,lVar6);
  _objc_release(lVar6);
  func_0x00010c26f000(param_5);
  if (dVar9 != 0.0) {
    func_0x00010c26f000(param_5);
    func_0x00010c205820((double)(long)(dVar9 * 1000.0) / 1000.0,param_4);
  }
  lVar6 = param_5;
  func_0x00010bfed740(param_5);
  func_0x00010c205840(param_4,param_3,lVar6);
  lVar6 = param_5;
  func_0x00010c27df60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010b67af60(lVar3);
    func_0x000108532b74();
    lVar5 = param_5;
    func_0x00010bf03740();
    lVar6 = 2;
    if (lVar5 != -0x51fa9f08) {
      lVar6 = lVar4;
    }
    func_0x00010c1c5440(param_4,param_3,lVar6);
  }
  lVar6 = param_5;
  func_0x00010bf03740();
  func_0x00010c225be0(param_4,param_3,lVar6 == -0x51fa9f08 || lVar6 == -0x412f2be8);
  func_0x00010c25b440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf4e080();
  _objc_release(param_2);
  if (lVar6 == 1) {
    lVar6 = 8;
  }
  else {
    lVar6 = param_7;
    func_0x00010c29d360(param_7);
    func_0x000107a59564();
  }
  func_0x00010c206c40(param_4,param_3,lVar6);
  lVar6 = param_7;
  func_0x00010c25b040(param_7);
  func_0x00010c20d9e0(param_4,param_3,lVar6);
  lVar6 = param_7;
  func_0x00010bf6a5a0();
  if (lVar6 == 2) {
    lVar6 = param_7;
    func_0x00010bf5ed00(param_7);
    func_0x00010c16cb20(param_4,param_3,lVar6);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071e5d60; end: 1071e665f; -[SCStoryUsageLogger _trackAdImpressionForThirdParty:currentStoriesViewingSession:snappableInviteAction:] */

void FUN_1071e5d60(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  double dVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c29f4a0(param_5);
  ppuVar2 = param_4;
  func_0x00010c0b3c80(param_4,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0d3c80();
  _objc_release(ppuVar2);
  func_0x00010c26f000(param_4);
  if (param_1 != 0.0) {
    func_0x00010c26f000(param_4);
    param_1 = (double)(long)(param_1 * 1000.0) / 1000.0;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea1f98);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar2 = param_4;
  func_0x00010bfed740(param_4);
  func_0x00010c0df6e0(puVar4,param_3,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea1fb8);
  _objc_release(puVar4);
  ppuVar2 = param_4;
  func_0x00010c27df60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar2 = ppuVar5;
    func_0x00010b67af60(ppuVar5);
    func_0x000108532b74();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110db9478);
    _objc_release(puVar4);
  }
  uVar1 = param_5;
  func_0x00010bf5ed40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243780();
  dVar13 = param_1;
  _objc_release(uVar1);
  uVar12 = param_2;
  func_0x00010c25b440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f000();
  dVar13 = param_1 + dVar13;
  func_0x00010c214bc0(uVar12);
  _objc_release(uVar12);
  func_0x00010c26f000(param_4);
  uVar12 = param_2;
  func_0x00010bde79c0(param_2,param_3,param_4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar12 != 0) {
    uVar1 = param_5;
    func_0x00010bf9ba60(param_5);
    func_0x00010c0df780(puVar4,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea1f58);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,ABS(dVar13 - param_1) < 0.1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea1f78);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar6 = PTR_PTR_1126bd3b0;
    func_0x00010c25b7a0(PTR_PTR_1126bd3b0,param_3,param_4);
    func_0x00010c0df780(puVar4,param_3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea1fd8);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_5;
    func_0x00010c29f4a0();
    if (uVar1 < 4) {
      uVar12 = *(undefined8 *)(&UNK_10de20218 + uVar1 * 8);
    }
    else {
      uVar12 = 0;
    }
    func_0x00010c0df780(puVar4,param_3,uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110dc41b8);
    _objc_release(puVar4);
    ppuVar7 = param_4;
    func_0x00010c105880();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar2 = ppuVar7;
    }
    func_0x00010c1d0640(ppuVar3,param_3,ppuVar2,&PTR____CFConstantStringClassReference_110ea2018);
    _objc_release(ppuVar7);
    ppuVar2 = param_4;
    func_0x00010c0a7de0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,ppuVar2,&PTR____CFConstantStringClassReference_110ea2038);
    _objc_release(ppuVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar2 = param_4;
    func_0x00010c281680(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_3,ppuVar2);
    _objc_release(ppuVar2);
    if (((ulong)puVar4 & 1) == 0) {
      ppuVar2 = param_4;
      func_0x00010c281680(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,ppuVar2,&PTR____CFConstantStringClassReference_110e77cf8);
      puVar4 = PTR_PTR_1126c0328;
      func_0x00010c2416c0(PTR_PTR_1126c0328,param_3,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) {
        puVar6 = puVar4;
        func_0x00010bfade60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c1d0640(ppuVar3,param_3,puVar6,
                              &PTR____CFConstantStringClassReference_110ea1ef8);
        }
        puVar8 = puVar4;
        func_0x00010bfaddc0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 != (undefined *)0x0) {
          func_0x00010c1d0640(ppuVar3,param_3,puVar8,
                              &PTR____CFConstantStringClassReference_110ea1f18);
        }
        puVar9 = puVar4;
        func_0x00010bfae4e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 != (undefined *)0x0) {
          func_0x00010c1d0640(ppuVar3,param_3,puVar9,
                              &PTR____CFConstantStringClassReference_110ea1f38);
        }
        puVar10 = puVar4;
        func_0x00010bfade20();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf529e0();
        _objc_release(puVar10);
        if ((undefined *)0x1 < puVar11) {
          puVar10 = puVar4;
          func_0x00010bfade00(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar3,param_3,puVar10,
                              &PTR____CFConstantStringClassReference_110ea20d8);
          _objc_release(puVar10);
        }
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
      }
      _objc_release(puVar4);
      _objc_release(ppuVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar2 = param_4;
    func_0x00010c259b00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_3,ppuVar2);
    _objc_release(ppuVar2);
    if (((ulong)puVar4 & 1) == 0) {
      ppuVar2 = param_4;
      func_0x00010c259b00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,ppuVar2,&PTR____CFConstantStringClassReference_110ea2178);
      _objc_release(ppuVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar2 = param_4;
    func_0x00010c25a0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_3,ppuVar2);
    _objc_release(ppuVar2);
    if (((ulong)puVar4 & 1) == 0) {
      ppuVar2 = param_4;
      func_0x00010c25a0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,ppuVar2,&PTR____CFConstantStringClassReference_110ea2078);
      _objc_release(ppuVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar2 = param_4;
    func_0x00010bf93ae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_3,ppuVar2);
    _objc_release(ppuVar2);
    if (((ulong)puVar4 & 1) == 0) {
      ppuVar2 = param_4;
      func_0x00010bf93ae0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,ppuVar2,&PTR____CFConstantStringClassReference_110ea2098);
      _objc_release(ppuVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar2 = param_4;
    func_0x00010c297e20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_3,ppuVar2);
    _objc_release(ppuVar2);
    if (((ulong)puVar4 & 1) == 0) {
      ppuVar2 = param_4;
      func_0x00010c297e20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,ppuVar2,&PTR____CFConstantStringClassReference_110ea20b8);
      _objc_release(ppuVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((double)(long)(param_1 * 1000.0) / 1000.0,
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea1ff8);
    _objc_release(puVar4);
    ppuVar2 = param_4;
    func_0x00010c074980();
    if ((int)ppuVar2 != 0) {
      ppuVar2 = param_4;
      func_0x00010c11ac00(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_2;
      func_0x00010be249c0(param_2,param_3,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,uVar12,&PTR____CFConstantStringClassReference_110ea20f8);
      _objc_release(uVar12);
      _objc_release(ppuVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuVar2 = param_4;
      func_0x00010c11ac00(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_2;
      func_0x00010be40d20(param_2,param_3,ppuVar2);
      func_0x00010c0df6e0(puVar4,param_3,uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea2118);
      _objc_release(puVar4);
      _objc_release(ppuVar2);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = PTR_PTR_1126bd3b0;
      func_0x00010c25b7e0(PTR_PTR_1126bd3b0,param_3,0,param_4);
      func_0x00010c0df780(puVar4,param_3,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea2198);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuVar2 = param_4;
      func_0x00010c11ac00(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_2;
      func_0x00010be19300(param_2,param_3,ppuVar2);
      func_0x00010c0df840(puVar4,param_3,uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110ea2138);
      _objc_release(puVar4);
      _objc_release(ppuVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3,param_3,puVar4,&PTR____CFConstantStringClassReference_110dbde38);
    _objc_release(puVar4);
    func_0x00010be54020(param_2,param_3,ppuVar3,param_5);
    func_0x00010be59280(param_2,param_3,ppuVar3);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071e6660; end: 1071e66e7; -[SCStoryUsageLogger _storyTypeSpecificForCurrentFriendStoriesViewingSession:] */

undefined * FUN_1071e6660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb8ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb1cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126bd3b0;
  func_0x00010c25b7e0(PTR_PTR_1126bd3b0,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return puVar3;
}



/* Entry: 1071e66e8; end: 1071e66fb; +[SCStoryUsageLogger storyTypeSpecificWithFriendStories:story:] */

long FUN_1071e66e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c25b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_storyTypeSpecific_112674818);
    return param_3;
  }
  return -1;
}



/* Entry: 1071e66fc; end: 1071e673f; -[SCStoryUsageLogger _shouldReportViewLocationPosition:] */

bool FUN_1071e66fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 - 0x54U < 0x14) && ((1L << (param_3 - 0x54U & 0x3f) & 0x80021U) != 0)) {
    return false;
  }
  return param_3 != -1 && param_3 != 7;
}



/* Entry: 1071e6740; end: 1071e67ff; -[SCStoryUsageLogger _storyAccessTypeForFriendStories:] */

undefined8 FUN_1071e6740(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    return 0xffffffffffffffff;
  }
  func_0x00010bfb91a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108f226fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = uVar1;
    func_0x000100bf119c();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      goto LAB_1071e67dc;
    }
  }
  uVar2 = uVar1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = 2;
  }
LAB_1071e67dc:
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1071e6800; end: 1071e691f; -[SCStoryUsageLogger _containsGeofilter:] */

bool FUN_1071e6800(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010c25a0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lVar4 = param_3;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      if (lVar5 == 0) {
        lVar5 = param_3;
        func_0x00010bf93ae0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        if (lVar6 == 0) {
          lVar6 = param_3;
          func_0x00010c281680(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c08fa60();
          bVar1 = lVar7 != 0;
          _objc_release(lVar6);
        }
        else {
          bVar1 = true;
        }
        _objc_release(lVar5);
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1071e6920; end: 1071e69cb; -[SCStoryUsageLogger _groupStoryLoggingIdForId:] */

void FUN_1071e6920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bdf79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c11ac00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001085335b0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1071e69cc; end: 1071e6a4b; -[SCStoryUsageLogger _isGroupStoryPostable:] */

undefined8 FUN_1071e69cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bdf79a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf60900(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1071e6a4c; end: 1071e6ad7; -[SCStoryUsageLogger _storyTypeSpecificForGroupStoryId:] */

long FUN_1071e6a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bdf79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010853351c(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1071e6ad8; end: 1071e6b67; -[SCStoryUsageLogger _friendLinkHopForGroupStoryId:] */

long FUN_1071e6ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdf79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = -1;
  }
  else {
    func_0x00010be19320(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 1071e6b68; end: 1071e6b93; -[SCStoryUsageLogger clearStoriesViewingSession] */

void FUN_1071e6b68(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1e27c0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c20dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStoryStoryViewSession__112661128,0);
  return;
}



/* Entry: 1071e6b94; end: 1071e6bdb; -[SCStoryUsageLogger clearCurrentStoryStoryViewSession] */

void FUN_1071e6b94(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c25b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e27c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStoryStoryViewSession__112661128,0);
  return;
}



/* Entry: 1071e6bdc; end: 1071e6c1f; -[SCStoryUsageLogger _customStoryDataFetcher] */

void FUN_1071e6bdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    func_0x000107d6fa04();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_target_112678178);
  return;
}



/* Entry: 1071e6c20; end: 1071e6cc7; -[SCStoryUsageLogger _friendLinkHopFromCustomStoryMetadata:] */

uint FUN_1071e6c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf5a820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)uVar4 ^ 1;
}



/* Entry: 1071e6cc8; end: 1071e6ccf; -[SCStoryUsageLogger storyStoryViewSession] */

undefined8 FUN_1071e6cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1071e6cd0; end: 1071e6cff; -[SCStoryUsageLogger setStoryStoryViewSession:] */

void FUN_1071e6cd0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1071e6d00; end: 1071e6d07; -[SCStoryUsageLogger previousStoryStoryViewSession] */

undefined8 FUN_1071e6d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1071e6d08; end: 1071e6d37; -[SCStoryUsageLogger setPreviousStoryStoryViewSession:] */

void FUN_1071e6d08(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1071e6d38; end: 1071e6d3f; -[SCStoryUsageLogger shouldSamplePlaybackMetrics] */

undefined1 FUN_1071e6d38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 1071e6d40; end: 1071e6d47; -[SCStoryUsageLogger setShouldSamplePlaybackMetrics:] */

void FUN_1071e6d40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1071e6d48; end: 1071e6dbf; -[SCStoryUsageLogger .cxx_destruct] */

void FUN_1071e6d48(long param_1)

{
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



/* Entry: 1071e6dc0; end: 1071e6fe3; -[SCStoryMediaCache setObject:forKey:withEncryptor:cacheDataSource:expiration:alreadyEncrypted:completion:] */

void FUN_1071e6dc0(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  if (param_3 == 0) {
    if (param_9 == 0) goto LAB_1071e6f68;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcVar3 = *(code **)(param_9 + 0x10);
    ppuVar1 = param_4;
  }
  else {
    if (param_4 != (undefined **)0x0) {
      _objc_retain(param_1);
      _objc_sync_enter(param_1);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
      _objc_sync_exit(param_1);
      _objc_release(param_1);
      _objc_initWeak(auStack_68,param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1071e6fe4;
      puStack_90 = &UNK_1109928a8;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      ppuStack_88 = param_4;
      _objc_retain(param_6);
      uStack_80 = param_6;
      _objc_retain(param_9);
      lStack_78 = param_9;
      ppuVar1 = &puStack_a8;
      _objc_retainBlock(ppuVar1);
      func_0x00010bea6020(param_1);
      _objc_release(ppuVar1);
      _objc_release(lStack_78);
      _objc_release(uStack_80);
      _objc_release(ppuStack_88);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      goto LAB_1071e6f68;
    }
    if (param_9 == 0) goto LAB_1071e6f68;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pcVar3 = *(code **)(param_9 + 0x10);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  (*pcVar3)(param_9,uVar2,ppuVar1,0);
LAB_1071e6f68:
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071e6fe4; end: 1071e7153;  */

void FUN_1071e6fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    _objc_sync_enter(lVar1);
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x10));
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
    uVar4 = *(ulong *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126cbca0;
    _objc_opt_class(PTR_PTR_1126cbca0);
    _objc_opt_isKindOfClass(uVar4,puVar2);
    if ((uVar4 & 1) != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1071e7154;
      puStack_60 = &UNK_110848ba8;
      lStack_58 = lVar1;
      _objc_retain(param_3);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uStack_50 = param_3;
      _objc_retain(uVar5);
      uStack_48 = uVar5;
      func_0x0001000d76cc("APPSTORE",&puStack_78);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1071e7154; end: 1071e7163;  */

void FUN_1071e7154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
             PTR_s_setObject_forKeyedSubscript__112651bb8,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071e7164; end: 1071e73bb; -[SCStoryMediaCache _setObject:forKey:withEncryptor:expiration:alreadyEncrypted:completion:] */

void FUN_1071e7164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1071e73bc;
  puStack_a0 = &UNK_1109928d8;
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = (undefined1)param_7;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_5);
  ppuVar1 = &puStack_b8;
  lStack_90 = param_5;
  _objc_retainBlock(ppuVar1);
  uVar4 = param_3;
  if (param_7 == 0) {
    _objc_retain(param_3);
  }
  else if (param_5 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    lVar2 = param_5;
    func_0x00010bf93ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c0646e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_8);
  func_0x00010c1d0500(uVar5);
  _objc_release(param_8);
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_release(lStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071e73bc; end: 1071e755f;  */

void FUN_1071e73bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      lVar6 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar6);
    }
    else {
      _objc_retain(param_2);
      lVar2 = *(long *)(param_1 + 0x28);
      lVar6 = param_2;
      if (lVar2 == 0) {
        _objc_retain(param_2);
      }
      else {
        func_0x00010bf93ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0646e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(lVar2);
      }
      _objc_release(param_2);
    }
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar6);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071e756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1071e7560; end: 1071e7573;  */

void FUN_1071e7560(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071e756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1071e7574; end: 1071e7737; -[SCStoryMediaCache objectForKey:withEncryptor:completionQueue:block:] */

void FUN_1071e7574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1071e7738;
  puStack_80 = &UNK_110992908;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(param_6);
  ppuVar2 = &puStack_98;
  uStack_68 = param_6;
  _objc_retainBlock(ppuVar2);
  _objc_initWeak(auStack_a0,param_1);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1071e784c;
  puStack_c0 = &UNK_110992938;
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_retain(param_4);
  ppuVar3 = &puStack_d8;
  uStack_b0 = param_4;
  _objc_retainBlock(ppuVar3);
  func_0x00010c0dff40(*(undefined8 *)(param_1 + 8));
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071e7738; end: 1071e782b;  */

void FUN_1071e7738(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1071e782c;
  puStack_68 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = uVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1071e782c; end: 1071e784b;  */

void FUN_1071e782c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071e7844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 1071e784c; end: 1071e7acf;  */

void FUN_1071e784c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar6 = (undefined *)0x0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    puVar6 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar2 = puVar6;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c0e00e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf1f3c0();
    _objc_release(puVar7);
    if ((int)puVar3 == 0) {
      puVar7 = *(undefined **)(param_1 + 0x28);
      _objc_retain(puVar7);
    }
    else {
      func_0x0001000882bc();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bf3cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar7);
      func_0x0001000882bc();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bf3cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0646e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126d5158;
      _objc_alloc();
      func_0x00010c00fd60();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    if (puVar7 != (undefined *)0x0) {
      puVar3 = puVar7;
      func_0x00010bf93ec0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010c0646e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c156c60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar6 = puVar5;
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1071e7ad0; end: 1071e7b27; -[SCStoryMediaCache contains:] */

undefined8 FUN_1071e7ad0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf4b4c0(uVar2,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1071e7b28; end: 1071e7b33; -[SCStoryMediaCache removeObjectForKey:] */

void FUN_1071e7b28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey_block__112628f20,param_3,0);
  return;
}



/* Entry: 1071e7b34; end: 1071e7b3b; -[SCStoryMediaCache clearCachedMediaWithCompletion:] */

void FUN_1071e7b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjectsWithBlock__1126285d0);
  return;
}



/* Entry: 1071e7b3c; end: 1071e7b93; -[SCStoryMediaCache clearCachedMediaNotNeeded] */

void FUN_1071e7b3c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1071e7b94;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1071e7b94; end: 1071e7d2f;  */

void FUN_1071e7b94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_sync_enter(uVar4);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010befa120(puVar1,param_2,*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  _objc_sync_exit(uVar4);
  _objc_release(uVar4);
  puVar3 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ae40(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar3);
  __Unwind_Resume();
  func_0x00010c069d00(*(undefined8 *)(puVar1 + 8));
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined **)(puVar1 + 0x18) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1071e7d30; end: 1071e7e1b; -[SCStoryMediaCache prepareForLogout] */

void FUN_1071e7d30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071e7e1c; end: 1071e7ef3;  */

void FUN_1071e7e1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar1;
    func_0x00010bf26a40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar4,param_2,lVar2);
    _objc_release(lVar2);
    if (((int)uVar4 != 0) && (lVar2 = lVar1, func_0x00010c0c6960(), lVar2 == 2)) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110f43b18,0xffffffffffffcff5,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c287a00(lVar1,param_2,0,puVar3);
      _objc_release(puVar3);
    }
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071e7ef4; end: 1071e7f2f; -[SCStoryMediaCache .cxx_destruct] */

void FUN_1071e7ef4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071e7f30; end: 1071e845f; +[FriendStories storiesFromManifest:storyId:reportedIds:enableStreaming:elementsType:] */

void FUN_1071e7f30(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_6;
  lVar24 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf8d2e0(param_3);
  func_0x00010bffc4a0();
  puVar3 = param_3;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      lVar22 = *(long *)((long)puVar20 * 8);
      if (lVar22 != 0) {
        lVar5 = lVar22;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          func_0x00010bfe5ea0(lVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(lVar22);
        }
      }
      puVar20 = puVar20 + 1;
    } while (puVar4 != puVar20);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf8d2e0(param_3);
  func_0x00010bffc4a0();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf8d2e0(param_3);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = param_3;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar20;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar20);
  if (puVar7 != (undefined *)0x0) {
    do {
      puVar20 = puVar4;
      func_0x00010bf4b900();
      if (((ulong)puVar20 & 1) != 0) goto LAB_1071e81ec;
      func_0x00010befa120(puVar4);
      puVar20 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar20 == (undefined *)0x0) goto LAB_1071e81ec;
      func_0x00010befa120(puVar3);
      _objc_release(puVar7);
      puVar6 = puVar20;
      func_0x00010c268c20();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar6 == (undefined *)0x0) || (puVar7 = puVar6, func_0x00010beef1e0(), (int)puVar7 == 1)
         ) {
        _objc_release(puVar6);
        puVar7 = puVar20;
        goto LAB_1071e81ec;
      }
      puVar7 = puVar6;
      func_0x00010bf8d1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar20);
    } while (puVar7 != (undefined *)0x0);
    puVar7 = (undefined *)0x0;
LAB_1071e81ec:
    _objc_release(puVar7);
  }
  puVar6 = PTR_PTR_1126d5160;
  puVar20 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107947a48(puVar6,puVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(puVar3);
  func_0x00010bffc4a0();
  dVar26 = 0.0;
  puVar15 = puVar3;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = auStack_180;
  uVar17 = 0x10;
  puVar20 = puVar15;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  iVar18 = (int)param_8;
  while (puVar20 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar15);
      }
      uVar23 = *(undefined8 *)((long)puVar21 * 8);
      uVar8 = uVar23;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_5;
      func_0x00010bf4b900();
      _objc_release(uVar8);
      if ((int)uVar9 == 0) {
        puVar10 = PTR_PTR_1126cbca0;
        _objc_alloc();
        uVar19 = param_6 & 0xffffffff;
        lVar24 = param_7;
        func_0x00010c04d6e0();
        func_0x00010befa120(puVar7);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c2762c0(param_3);
        func_0x00010c2181e0(param_3);
        func_0x00010bf8b160(uVar23);
        dVar25 = dVar26;
        func_0x00010c276460(param_3);
        dVar26 = dVar25 - dVar26;
        func_0x00010c218320(dVar26,param_3);
      }
      puVar21 = puVar21 + 1;
    } while (puVar20 != puVar21);
    puVar16 = auStack_180;
    uVar17 = 0x10;
    puVar20 = puVar15;
    func_0x00010bf52a60();
    iVar18 = (int)param_8;
  }
  _objc_release(puVar15);
  puVar20 = PTR_PTR_1126c6d90;
  _objc_alloc_init();
  func_0x00010c20d1a0();
  func_0x00010c18fca0(puVar20);
  puVar15 = puVar7;
  func_0x00010c20c480(puVar20);
  if (param_7 == 2) {
    puVar15 = (undefined *)0x1;
    func_0x00010c1afb00(puVar20);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(puVar16);
  _objc_retain(uVar17);
  _objc_retain(lVar24);
  uVar11 = uVar17;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c067fc0();
  _objc_release(uVar11);
  _objc_retain(puVar15);
  _objc_retain(puVar16);
  if ((uVar19 & 1) == 0) {
    puVar4 = puVar15;
    func_0x00010c07dc60();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar15;
      func_0x00010c074980();
      if (((ulong)puVar4 & 1) == 0) {
        if (uVar12 == 7) {
          lVar24 = 9;
        }
        else {
          if (uVar12 != 0x1e) {
            if (uVar12 == 0x54) {
              lVar24 = 0x1b;
              goto LAB_1071e85d4;
            }
            puVar13 = puVar16;
            func_0x00010c131cc0();
            if ((int)puVar13 == 0) {
              lVar24 = 0xe;
              uVar19 = uVar12 - 0x28;
              if (uVar19 < 0x32) {
                if ((1L << (uVar19 & 0x3f) & 0x80000000131U) != 0) goto LAB_1071e85d4;
                if (uVar19 == 3) {
                  lVar24 = 0xd;
                  goto LAB_1071e85d4;
                }
                if (uVar19 == 0x31) {
                  lVar24 = 0x21;
                  goto LAB_1071e85d4;
                }
              }
              if (uVar12 == 5) goto LAB_1071e85d4;
            }
          }
          lVar24 = 10;
        }
      }
      else {
        lVar24 = 0xc;
      }
    }
    else {
      lVar24 = 0xb;
    }
  }
  else {
    lVar24 = 0x15;
  }
LAB_1071e85d4:
  _objc_release(puVar16);
  _objc_release(puVar15);
  puVar4 = puVar15;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  _objc_release(puVar4);
  if (puVar3 == (undefined *)0x0) {
    puVar4 = puVar15;
    func_0x00010c291e80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar11 = uVar17;
      _objc_opt_isKindOfClass(uVar17,puVar4);
      uVar19 = uVar17;
      if ((uVar11 & 1) == 0) {
        uVar19 = 0;
      }
      _objc_retain(uVar19);
      _objc_release(uVar17);
      uVar17 = uVar19;
      func_0x00010c08fa60();
      _objc_release(uVar19);
      if (uVar17 != 0) {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar4 = puVar15;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  func_0x00010c105880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105860();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109175acc();
  _objc_retainAutoreleasedReturnValue();
  FUN_1071e91d0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar16;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar4 = puVar15;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar15;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar16;
  func_0x00010c074d80();
  if ((int)puVar13 != 0) {
    puVar13 = puVar16;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar2 = puVar4;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
  }
  puVar4 = puVar15;
  func_0x00010c24b260(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (iVar18 != 0) {
    puVar4 = puVar15;
    func_0x00010bfe32e0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bfe3300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_alloc();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126b2370);
  func_0x00010c131cc0(puVar16);
  _objc_retain(puVar15);
  _objc_retain(puVar16);
                    /* WARNING: Could not recover jumptable at 0x0001071e8998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10de20238 + (lVar24 + -9) * 2) * 4 + 0x1071e899c))();
  return;
}



/* Entry: 1071e8460; end: 1071e9027; +[SCContextSessionParams paramsWithStory:friendStories:properties:isStoryShare:userSession:enabledSpotlightReplies:] */

void FUN_1071e8460(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,int param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar6 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c067fc0();
  _objc_release(uVar6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_6 & 1) == 0) {
    uVar6 = param_3;
    func_0x00010c07dc60();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_3;
      func_0x00010c074980();
      if ((uVar6 & 1) == 0) {
        if (uVar1 == 7) {
          lVar7 = 9;
        }
        else {
          if (uVar1 != 0x1e) {
            if (uVar1 == 0x54) {
              lVar7 = 0x1b;
              goto LAB_1071e85d4;
            }
            uVar2 = param_4;
            func_0x00010c131cc0();
            if ((int)uVar2 == 0) {
              lVar7 = 0xe;
              uVar6 = uVar1 - 0x28;
              if (uVar6 < 0x32) {
                if ((1L << (uVar6 & 0x3f) & 0x80000000131U) != 0) goto LAB_1071e85d4;
                if (uVar6 == 3) {
                  lVar7 = 0xd;
                  goto LAB_1071e85d4;
                }
                if (uVar6 == 0x31) {
                  lVar7 = 0x21;
                  goto LAB_1071e85d4;
                }
              }
              if (uVar1 == 5) goto LAB_1071e85d4;
            }
          }
          lVar7 = 10;
        }
      }
      else {
        lVar7 = 0xc;
      }
    }
    else {
      lVar7 = 0xb;
    }
  }
  else {
    lVar7 = 0x15;
  }
LAB_1071e85d4:
  _objc_release(param_4);
  _objc_release(param_3);
  uVar6 = param_3;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  _objc_release(uVar6);
  if (uVar3 == 0) {
    uVar6 = param_3;
    func_0x00010c291e80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c08fa60();
    _objc_release(uVar6);
    if (uVar1 == 0) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar1 = param_5;
      _objc_opt_isKindOfClass(param_5,puVar4);
      uVar6 = param_5;
      if ((uVar1 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(param_5);
      uVar1 = uVar6;
      func_0x00010c08fa60();
      _objc_release(uVar6);
      if (uVar1 != 0) {
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar6 = param_3;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  func_0x00010c105880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c105860();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109175acc();
  _objc_retainAutoreleasedReturnValue();
  FUN_1071e91d0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar6 = param_3;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c074d80();
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar1 = uVar6;
    func_0x00010c08fa60();
    if (uVar1 == 0) {
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
  }
  uVar6 = param_3;
  func_0x00010c24b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (param_8 != 0) {
    uVar6 = param_3;
    func_0x00010bfe32e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010bfe3300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  _objc_alloc();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126b2370);
  func_0x00010c131cc0(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001071e8998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10de20238 + (lVar7 + -9) * 2) * 4 + 0x1071e899c))();
  return;
}



/* Entry: 1071e9028; end: 1071e90cf; -[SCMTPointOfInterest s2CellId] */

undefined * FUN_1071e9028(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b6598;
  uVar1 = param_2;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar4 = param_1;
  func_0x00010c102a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(param_1,uVar4);
  func_0x00010bf33ee0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfc6400();
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  return puVar3;
}



/* Entry: 1071e90d0; end: 1071e913f; -[SCMTPointOfInterest isPreviewFullManifest] */

bool FUN_1071e90d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c111740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2762c0();
  func_0x00010c111740(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf8d2e0();
  _objc_release(param_1);
  _objc_release(lVar1);
  return lVar3 == (int)lVar2;
}



/* Entry: 1071e9140; end: 1071e918f; -[SCMTPointOfInterest mockStoryId] */

void FUN_1071e9140(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e32678;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e32678,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1071e9190; end: 1071e91cf; -[SCMTPointOfInterest storyType] */

undefined8 FUN_1071e9190(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010c072c20();
  if ((param_1 & 1) == 0) {
    func_0x00010bfd8840();
    uVar2 = 1;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 1071e91d0; end: 1071ea41f;  */

void FUN_1071e91d0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puStack_470;
  undefined *puStack_2a8;
  undefined *puStack_218;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = param_1;
  func_0x00010c105880();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = puVar2;
  func_0x00010c0720c0();
  if (((ulong)puVar31 & 1) == 0) {
    puVar31 = param_1;
    func_0x00010bf25280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ccea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar31);
  }
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d5180;
  _objc_alloc();
  func_0x00010c07d060(param_1);
  func_0x00010c070680(param_1);
  func_0x00010c070680(param_1);
  func_0x00010c046240();
  _objc_retain(param_1);
  puVar31 = param_1;
  func_0x00010c074980();
  puVar5 = param_1;
  if ((int)puVar31 == 0) {
    puVar31 = param_1;
    func_0x00010c22c180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_218 = PTR_PTR_1126d5188;
    puVar4 = param_1;
    if (puVar31 == (undefined *)0x0) {
      puVar31 = param_1;
      func_0x00010c078fe0();
      if (((ulong)puVar31 & 1) == 0) {
        func_0x00010c07b720();
      }
      puStack_218 = PTR_PTR_1126d5188;
      func_0x00010bf1f720(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24b260(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c293cc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c22c180(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1543a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07f5e0(param_1);
      func_0x00010c24c380(param_1);
      puVar31 = param_1;
      func_0x00010c24b260(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ee4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar31);
    }
  }
  else {
    func_0x000107d6fa04();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar31;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c11ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar29;
    func_0x00010bf625c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar29);
    _objc_release(puVar31);
    puStack_218 = PTR_PTR_1126d5188;
    if (puVar4 != (undefined *)0x0) {
      _objc_retain(puVar4);
      puVar31 = puVar4;
      func_0x00010c27dd80();
      if ((((long)puVar31 < 6) && (puVar31 != (undefined *)0x0)) && (puVar31 == (undefined *)0x1)) {
        func_0x00010c1143e0();
      }
      _objc_release(puVar4);
    }
    func_0x00010c11ac00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf627a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  puVar31 = param_1;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar31;
  func_0x00010bf529e0();
  _objc_release(puVar31);
  if (puVar5 == (undefined *)0x0) {
    puVar31 = (undefined *)0x0;
  }
  else {
    puVar31 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar4 = param_1;
    func_0x00010c0c5c40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        lVar26 = *(long *)((long)puVar29 * 8);
        lVar6 = lVar26;
        func_0x00010c0ed1a0();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar6 != 0) {
          func_0x00010c0ed1a0(lVar26);
          func_0x00010c0df780(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar31);
          _objc_release(puVar3);
        }
        puVar29 = puVar29 + 1;
      } while (puVar5 != puVar29);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
  }
  puVar5 = PTR_PTR_1126b5bc0;
  _objc_alloc();
  puVar4 = param_1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = param_1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar3 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar3;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar3;
  func_0x00010bfe4500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bf25000(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bf25000(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c105880();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar9 = param_1;
      func_0x00010c22c140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar9 != (undefined *)0x0) {
        puVar3 = param_1;
        func_0x00010c22c3e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar27);
        puVar9 = param_1;
        func_0x00010c105880();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar32);
        puVar10 = param_1;
        func_0x00010c22c140(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        goto LAB_1071e9840;
      }
    }
    puVar23 = param_1;
    func_0x00010c078fe0();
    puVar10 = puVar7;
    puVar9 = puVar32;
    puVar3 = puVar27;
    if ((int)puVar23 != 0) {
      func_0x00010c0720c0(puVar32);
    }
  }
  else {
    puVar9 = param_1;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c22c0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    _objc_release(puVar9);
    puVar27 = param_1;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar27;
    func_0x00010c22c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar32);
    _objc_release(puVar27);
    puVar27 = param_1;
    func_0x00010bf0e960(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar27;
    func_0x00010c22c0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar27);
    func_0x00010c08fa60(puVar10);
  }
LAB_1071e9840:
  puVar27 = (undefined *)0x0;
  if ((puVar3 != (undefined *)0x0) && (puVar9 != (undefined *)0x0)) {
    puVar27 = PTR_PTR_1126cbca0;
    _objc_opt_class(PTR_PTR_1126cbca0);
    puVar32 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar27);
    if (((ulong)puVar32 & 1) == 0) {
      puVar32 = (undefined *)0x0;
    }
    else {
      _objc_retain(param_1);
      puVar27 = param_1;
      func_0x00010bf5b3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar32 = (undefined *)0x0;
      if (puVar27 != (undefined *)0x0) {
        puVar27 = param_1;
        func_0x00010bf5b3e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071360();
        func_0x00010bf4de40(puVar27);
        puVar32 = PTR_PTR_1126d5190;
        _objc_alloc();
        func_0x00010c01ef40();
        _objc_release(puVar27);
      }
      _objc_release(param_1);
    }
    puVar27 = PTR_PTR_1126d5198;
    _objc_alloc();
    func_0x00010c0068e0();
    _objc_release(puVar32);
  }
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(param_1);
  puVar10 = param_1;
  FUN_1071ea420();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = param_1;
  func_0x0001071ea7d0(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR_PTR_1126d51a0;
  _objc_retain(param_1);
  _objc_alloc();
  puVar3 = param_1;
  func_0x00010c297e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010bfc11c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c259b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010c094540(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0607c0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar7 = PTR_PTR_1126d51a8;
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c29ea60(param_1);
  _objc_release(param_1);
  uVar33 = 0;
  func_0x00010c01fba0(0);
  puVar8 = PTR_PTR_1126d51b0;
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c26f000(param_1);
  func_0x00010bfed740(param_1);
  puVar9 = param_1;
  func_0x00010bf9c720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar11 = param_1;
  func_0x00010c105720(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c26f320(puVar11);
  func_0x00010bf655e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00eaa0(uVar33);
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126d51b8;
  _objc_retain(param_1);
  _objc_alloc();
  puVar3 = param_1;
  func_0x00010bf93ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c032400();
  _objc_release(puVar3);
  _objc_retain(param_1);
  puVar11 = param_1;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (puVar11 != (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010bfb73c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247e00();
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bfb73c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf59980();
    _objc_release(puVar3);
    puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0((double)(long)puVar11 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d51c0;
    _objc_alloc(PTR_PTR_1126d51c0);
    func_0x00010c006760();
    _objc_release(puVar12);
  }
  puVar11 = PTR_PTR_1126d51c8;
  _objc_alloc();
  puVar12 = param_1;
  func_0x00010bf0d6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_1;
  func_0x00010bf30620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4d60();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(param_1);
  puVar3 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd8620();
  _objc_retain(param_1);
  puVar13 = param_1;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar13 == (undefined *)0x0) {
    puStack_2a8 = (undefined *)0x0;
  }
  else {
    puStack_2a8 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    puVar13 = param_1;
    func_0x00010c281680(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20();
    _objc_release(puVar13);
  }
  _objc_release(param_1);
  _objc_retain(param_1);
  puVar30 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar33 = 0;
  puVar13 = param_1;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar13 = puVar14;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar13 != (undefined *)0x0) {
    puVar25 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar14);
      }
      uVar28 = *(undefined8 *)((long)puVar25 * 8);
      puVar15 = PTR_PTR_1126d51d0;
      _objc_alloc(PTR_PTR_1126d51d0);
      uVar16 = uVar28;
      func_0x00010c25ece0(uVar28);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar28;
      func_0x00010c250f20(uVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar18 = uVar28;
      uVar34 = uVar33;
      func_0x00010bf95780(uVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c104340(uVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c04eec0(uVar33,uVar34,puVar15);
      _objc_release(uVar28);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      func_0x00010befa120(puVar30);
      _objc_release(puVar15);
      puVar25 = puVar25 + 1;
    } while (puVar13 != puVar25);
    puVar13 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126d51d8;
  _objc_alloc();
  puVar13 = param_1;
  func_0x00010bf0ffe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar13;
  func_0x00010bf10020();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_1;
  func_0x00010bf0ffe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245880();
  puVar19 = param_1;
  func_0x00010bf0ffe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245840();
  puVar20 = puVar30;
  func_0x00010bf51e00(puVar30);
  func_0x00010bff56a0();
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar25);
  _objc_release(puVar13);
  _objc_release(puVar30);
  _objc_release(param_1);
  puVar13 = PTR_PTR_1126d51e0;
  _objc_retain(param_1);
  _objc_alloc();
  puVar30 = param_1;
  func_0x00010c241920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c04a9a0();
  _objc_release(puVar30);
  _objc_retain(param_1);
  puVar30 = param_1;
  func_0x00010c23f920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar30 == (undefined *)0x0) {
    puVar30 = (undefined *)0x0;
  }
  else {
    puVar30 = param_1;
    func_0x00010c23f920(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar25 = PTR_PTR_1126d51e8;
  _objc_alloc();
  func_0x00010c04a700();
  _objc_release(puVar30);
  _objc_release(param_1);
  func_0x00010c141c40();
  _objc_retain(param_1);
  puVar30 = param_1;
  func_0x00010c15a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar30 == (undefined *)0x0) {
    puVar30 = (undefined *)0x0;
  }
  else {
    puVar30 = PTR_PTR_1126d51f0;
    _objc_alloc();
    puVar15 = param_1;
    func_0x00010c15a0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar15;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_1;
    func_0x00010c15a0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_1;
    func_0x00010c15a0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60();
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar15);
  }
  _objc_release(param_1);
  puVar15 = param_1;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar31;
  func_0x00010bf51e00();
  func_0x00010c044c40();
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(puVar30);
  _objc_release(puVar25);
  _objc_release(puVar13);
  _objc_release(puVar14);
  _objc_release(puStack_2a8);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar32);
  _objc_release(puVar23);
  _objc_release(puVar10);
  _objc_release(puVar27);
  _objc_release(puVar29);
  _objc_release(puVar4);
  _objc_release(puVar31);
  _objc_release(puStack_218);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    _objc_retain();
    puVar2 = param_1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar2;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_470 = PTR_PTR_1126bfca8;
    _objc_alloc();
    puVar2 = param_1;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar5 = param_1;
      func_0x00010bf98340(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = param_1;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar29 = param_1;
      func_0x00010bf98320(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60();
      _objc_release(puVar29);
    }
    else {
      func_0x00010c020b60();
    }
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0efce0();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c27dd80();
    }
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(0x40f5180000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cbca8;
    _objc_alloc();
    puVar5 = param_1;
    func_0x00010bf1f000(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = param_1;
    func_0x00010bf1f0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022600();
    _objc_release(puVar29);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c3390;
    _objc_alloc();
    puVar29 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    puVar3 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0efce0();
    func_0x00010c0d7240();
    puVar27 = param_1;
    func_0x00010c0c4000();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar27;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010c0c47e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25a460();
    func_0x00010bffa840();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar32);
    _objc_release(puVar27);
    _objc_release(puVar3);
    _objc_release(puVar29);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puStack_470);
    _objc_release(puVar31);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1071ea420; end: 1071ea9fb;  */

void FUN_1071ea420(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  byte bVar14;
  ulong in_stack_ffffffffffffff30;
  undefined *puStack_70;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_70 = PTR_PTR_1126bfca8;
  _objc_alloc();
  puVar1 = param_1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010bf98340(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_1;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010bf98320(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60(puStack_70,param_2,puVar3,puVar5);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c020b60(puStack_70,param_2,puVar3,puVar4);
  }
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0efce0();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = param_1;
    func_0x00010c27dd80();
    bVar14 = 1;
    if (((puVar3 + 1 < (undefined *)0x1c) &&
        ((1L << ((ulong)(puVar3 + 1) & 0x3f) & 0xb4b5dbbU) != 0)) &&
       (puVar3 + 1 < (undefined *)0x1b)) {
      bVar14 = (byte)(0x1394288 >> (ulong)((uint)(puVar3 + 1) & 0x1f));
    }
  }
  else {
    bVar14 = 0;
  }
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cbca8;
  _objc_alloc();
  puVar4 = param_1;
  func_0x00010bf1f000(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010bf1f0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022600(puVar1,param_2,0,puVar4,puVar5,0,0,0,
                      in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c3390;
  _objc_alloc();
  puVar5 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010c27dd80();
  puVar7 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0efce0();
  puVar9 = param_1;
  func_0x00010c0d7240();
  puVar10 = param_1;
  func_0x00010c0c4000();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010c0c47e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25a460();
  func_0x00010bffa840(puVar4,param_2,puVar2,puVar5,puStack_70,puVar6,(ulong)puVar8 & 0xffffffff,
                      (ulong)puVar9 & 0xffffffff,puVar11,puVar13,puVar3,puVar1,bVar14 & 1);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puStack_70);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1071ea9fc; end: 1071eaa97; -[Story assetsUploaderForUploadOperation:] */

void FUN_1071ea9fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c3088;
  _objc_opt_class(PTR_PTR_1126c3088);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1109929b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1071eaa98; end: 1071eaa9f;  */

void FUN_1071eaa98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c257f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storedRemoteAssetsUploader_1126739f0);
  return;
}



/* Entry: 1071eaaa0; end: 1071eab3b; -[Story assetsStoreForUploadOperation:] */

void FUN_1071eaaa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c3088;
  _objc_opt_class(PTR_PTR_1126c3088);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1109929d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1071eab3c; end: 1071eab43;  */

void FUN_1071eab3c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0966f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensRemoteAssetsStore_1126033c8);
  return;
}



/* Entry: 1071eab44; end: 1071eabdf; -[Story assetsLoggerForUploadOperation:] */

void FUN_1071eab44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c3088;
  _objc_opt_class(PTR_PTR_1126c3088);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1109929f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1071eabe0; end: 1071eabe7;  */

void FUN_1071eabe0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0966d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensRemoteAssetLogger_1126033c0);
  return;
}



/* Entry: 1071eabe8; end: 1071eabef; -[Story initWithGetMapStoryElementResponse:] */

void FUN_1071eabe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c017b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithGetMapStoryElementRespon_1125e38a0,param_3,0);
  return;
}



/* Entry: 1071eabf0; end: 1071eb20b; -[Story initWithGetMapStoryElementResponse:legacyStoryMediaCache:] */

undefined8 *
FUN_1071eabf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined *param_5,int param_6,long param_7)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1c0;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_3;
  uVar12 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR_PTR_1126f8c10;
  puVar3 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    puVar13 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227d40(puVar3);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010bf30620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ac0(puVar3);
    _objc_release(puVar13);
    func_0x00010c075780(param_3);
    func_0x00010c1ac2c0(puVar3);
    puVar13 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar3);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010c0c5480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c49c0(puVar3);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010c0c54a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c49e0(puVar3);
    _objc_release(puVar13);
    puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar13 = param_3;
    func_0x00010c0c6e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5520(puVar3);
    _objc_release(puVar15);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010c0c6c20();
    switch((int)puVar13) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    case 0x13:
    case 0x14:
LAB_1071eadb4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      break;
    case 0xe:
      break;
    case 0xf:
      break;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x15:
      break;
    case 0x16:
      break;
    case 0x17:
      break;
    case 0x18:
      break;
    case 0x19:
      break;
    case 0x1a:
      break;
    default:
      if ((int)puVar13 == -0x4524111) goto LAB_1071eadb4;
    }
    func_0x00010c21acc0(puVar3);
    puVar13 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f100(puVar3);
    _objc_release(puVar13);
    puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar13 = param_3;
    func_0x00010c26e3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214440(puVar3);
    _objc_release(puVar15);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010c26df60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214180(puVar3);
    _objc_release(puVar13);
    func_0x00010c21f760(puVar3);
    puVar13 = param_3;
    func_0x00010bf4e840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183080(puVar3);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(puVar3);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar3);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010c297e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(puVar3);
    _objc_release(puVar13);
    puVar13 = param_3;
    func_0x00010c2709c0();
    puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((long)puVar13 < 1) {
      puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215dc0(puVar3);
    }
    else {
      func_0x00010c2709c0(param_3);
      func_0x00010c0df7a0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65140(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215dc0(puVar3);
      _objc_release(puVar18);
    }
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar13 = param_3;
    func_0x00010c26f480(param_3);
    func_0x00010bf65600((double)((long)puVar13 / 1000),puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198b80(puVar3);
    _objc_release(puVar15);
    puVar13 = puVar3;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 == (undefined8 *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      ppuStack_58 = &PTR____CFConstantStringClassReference_110ea21f8;
      puVar4 = puVar3;
      func_0x00010bf30620();
      _objc_retainAutoreleasedReturnValue();
      param_5 = (undefined *)0x1;
      puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_50 = puVar4;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    _objc_release(puVar13);
    puVar18 = PTR_PTR_1126d5200;
    _objc_alloc(PTR_PTR_1126d5200);
    uVar12 = param_4;
    func_0x00010c020700();
    func_0x00010c1c4020(puVar3);
    _objc_release(puVar18);
    func_0x00010c1b44c0(puVar3);
    func_0x00010c1b3a20(puVar3);
    puVar13 = puVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d77a0();
    _objc_release(puVar13);
    func_0x00010c1d6440(puVar3);
    func_0x00010c1df7c0(puVar3);
    puVar13 = (undefined8 *)0x0;
    func_0x00010c222fc0(puVar3);
    _objc_release(puVar15);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(uVar12);
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_3 == (undefined8 *)0x0) goto LAB_1071ec79c;
  if (param_7 == 2) {
    puVar15 = PTR_PTR_1126b1a58;
    _objc_opt_new(PTR_PTR_1126b1a58);
    func_0x00010c1744a0(param_3);
    _objc_release(puVar15);
  }
  puVar3 = puVar13;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010bfe5ea0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227d40(param_3);
  _objc_release(puVar4);
  puVar4 = puVar13;
  func_0x00010c24cfc0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(param_3);
  _objc_release(puVar4);
  func_0x00010bf8bb00(puVar3);
  func_0x00010c1b4a40(param_3);
  puVar4 = puVar3;
  func_0x00010c0c54a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49e0(param_3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c242060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(param_3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0c5480(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49c0(param_3);
  _objc_release(puVar4);
  puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar4 = puVar13;
  func_0x00010c2709c0(puVar13);
  func_0x00010c052380((double)(long)puVar4 / 1000.0,puVar15);
  func_0x00010c215dc0(param_3);
  _objc_release(puVar15);
  _objc_retain(puVar13);
  puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x408c200000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010c2629c0();
  if ((long)puVar4 < 1) {
LAB_1071eb460:
    _objc_retain(puVar15);
    puVar18 = puVar15;
  }
  else {
    puVar18 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc();
    puVar4 = puVar13;
    func_0x00010c2629c0(puVar13);
    func_0x00010c052380((double)(long)puVar4 / 1000.0);
    puVar5 = puVar18;
    func_0x00010bf433a0();
    if (puVar5 != (undefined *)0xffffffffffffffff) {
      _objc_release(puVar18);
      goto LAB_1071eb460;
    }
  }
  _objc_release(puVar15);
  _objc_release(puVar13);
  func_0x00010c198b80(param_3);
  _objc_release(puVar18);
  puVar4 = puVar3;
  func_0x00010c2420c0();
  switch((int)puVar4) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  case 0x13:
  case 0x14:
LAB_1071eb4c0:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  default:
    if ((int)puVar4 == -0x4524111) goto LAB_1071eb4c0;
  }
  func_0x00010c21acc0(param_3);
  puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = puVar3;
  func_0x00010c0c6e00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5520(param_3);
  _objc_release(puVar15);
  _objc_release(puVar4);
  func_0x00010c21f760(param_3);
  puVar4 = puVar13;
  func_0x00010bfe5ea0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f100(param_3);
  _objc_release(puVar4);
  func_0x00010bf8b160(puVar13);
  func_0x00010c214bc0(param_3);
  func_0x00010c083e00(puVar3);
  puVar4 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d77a0();
  _objc_release(puVar4);
  func_0x00010c0b5720(puVar13);
  func_0x00010c1ac2c0(param_3);
  puVar4 = puVar3;
  func_0x00010c297e20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(param_3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4e840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183080(param_3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf0d660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b3c0(param_3);
  _objc_release(puVar4);
  _objc_retain(puVar13);
  puVar4 = puVar13;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010c247520();
  _objc_release(puVar4);
  if ((int)puVar17 - 1U < 3) {
    puVar15 = PTR_PTR_1126cf0d8;
    _objc_alloc(PTR_PTR_1126cf0d8);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf313e0(puVar13);
    func_0x00010c0df7c0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0066a0(puVar15);
    _objc_release(puVar18);
  }
  else {
    puVar15 = (undefined *)0x0;
  }
  _objc_release(puVar13);
  func_0x00010c19f680(param_3);
  _objc_release(puVar15);
  puVar4 = puVar3;
  func_0x00010c281680(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bd60(param_3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined8 *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar18 == (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126c0328;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar5 == (undefined *)0x0) ||
         (puVar6 = puVar5, func_0x00010c098340(), puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0,
         puVar6 == (undefined *)0x0)) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar5;
        func_0x00010c098320();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2810a0();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar18);
  }
  _objc_release(puVar4);
  func_0x00010c1bbd60(param_3);
  _objc_release(puVar15);
  func_0x00010bfd8600(puVar3);
  func_0x00010c1a6280(param_3);
  puVar4 = puVar3;
  func_0x00010c0efde0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ac0(param_3);
  _objc_release(puVar4);
  puVar4 = puVar13;
  func_0x00010c241660(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182260(param_3);
  _objc_release(puVar16);
  _objc_release(puVar17);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bfdc880();
  if ((int)puVar4 != 0) {
    puVar4 = puVar3;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    func_0x00010bfdaa60();
    if ((int)puVar17 == 0) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      puVar16 = puVar3;
      func_0x00010c24a0a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar16;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar20;
      func_0x00010bfe2ee0();
      puVar8 = puVar3;
      func_0x00010c24a0a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0b5940();
      func_0x000100c4a928(puVar17,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar20);
      _objc_release(puVar16);
    }
    _objc_release(puVar4);
    puVar15 = PTR_PTR_1126c4ea0;
    _objc_alloc(PTR_PTR_1126c4ea0);
    puVar4 = puVar17;
    func_0x00010c0b5ac0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar16;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c24a0a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60(puVar15);
    func_0x00010c1fb580(param_3);
    _objc_release(puVar15);
    _objc_release(puVar8);
    _objc_release(puVar20);
    _objc_release(puVar16);
    _objc_release(puVar4);
    _objc_release(puVar17);
  }
  puVar4 = puVar13;
  func_0x00010bf28a40(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175de0(param_3);
  _objc_release(puVar4);
  puVar4 = param_3;
  func_0x00010c27dd80(param_3);
  func_0x000108f0e9d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2079a0(param_3);
  _objc_release(puVar4);
  if (param_7 == 2) {
    puVar4 = puVar13;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    func_0x00010bfdaec0();
    _objc_release(puVar4);
    if ((int)puVar17 == 0) {
      puStack_1c0 = (undefined8 *)0x0;
      puStack_1f0 = (undefined *)0x0;
      puStack_1e8 = (undefined *)0x0;
      puStack_210 = (undefined *)0x0;
      puStack_208 = (undefined *)0x0;
      puStack_200 = (undefined *)0x0;
      puStack_1f8 = (undefined *)0x0;
      puStack_218 = (undefined *)0x0;
      puStack_220 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010befcfc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar17;
      func_0x00010bf0aa60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfdaec0();
      puStack_1e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_1e8 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c120680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfdb7c0();
      puStack_1f0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_1f0 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c151b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfdccc0();
      puStack_210 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_210 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c25ac80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfdc000();
      puStack_1f8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_1f8 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c22c540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfdce40();
      puStack_200 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_200 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c260680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfd4be0();
      puStack_208 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_208 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010bf1fa00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfd9fc0();
      puStack_218 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_218 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c0f2a60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfd9fa0();
      puStack_220 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puStack_220 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010c0f2a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfd56e0();
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010bf41960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      puVar4 = puVar13;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar4;
      func_0x00010bfd56c0();
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)puVar17 == 0) {
        puVar18 = (undefined *)0x0;
      }
      else {
        puVar17 = puVar13;
        func_0x00010c0ccc20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar17;
        func_0x00010bf41900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
      }
      _objc_release(puVar4);
      func_0x00010c1df7c0(param_3);
    }
    puVar6 = PTR_PTR_1126d5208;
    _objc_alloc();
    func_0x00010bf6b200();
    func_0x00010c07d060();
    func_0x00010c07c580();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar4 = puVar13;
    func_0x00010c112140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010c26df40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bee0(puVar6);
    func_0x00010c174660(param_3);
    _objc_release(puVar6);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar15);
    _objc_release(puStack_220);
    _objc_release(puStack_218);
    _objc_release(puStack_208);
    _objc_release(puStack_200);
    _objc_release(puStack_1f8);
    _objc_release(puStack_210);
    _objc_release(puStack_1f0);
    _objc_release(puStack_1e8);
    _objc_release(puStack_1c0);
  }
  puVar4 = puVar13;
  func_0x00010bfd4480();
  if ((int)puVar4 != 0) {
    puVar4 = puVar13;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126cf0e0;
    _objc_alloc(PTR_PTR_1126cf0e0);
    puVar17 = puVar4;
    func_0x00010c2923e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010bf85d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045c20(puVar15);
    func_0x00010c16b8e0(param_3);
    _objc_release(puVar15);
    _objc_release(puVar20);
    _objc_release(puVar16);
    _objc_release(puVar17);
    _objc_release(puVar4);
  }
  puVar4 = param_3;
  func_0x00010c27dd80();
  if (puVar4 == (undefined8 *)0x1) {
    bVar2 = true;
  }
  else {
    puVar4 = param_3;
    func_0x00010c27dd80();
    if (puVar4 == (undefined8 *)0x2) {
      bVar2 = true;
    }
    else {
      puVar4 = param_3;
      func_0x00010c27dd80();
      bVar2 = puVar4 == (undefined8 *)0x9;
    }
  }
  if (((param_6 != 0) && (bVar2)) && (puVar4 = puVar3, func_0x00010bfdcd20(), (int)puVar4 != 0)) {
    puVar4 = puVar3;
    func_0x00010c25c7e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar4;
    func_0x0001084d3284();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37c40(param_3);
    _objc_release(puVar17);
    _objc_release(puVar4);
    func_0x00010c25c7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  func_0x00010c20e620(param_3);
  puVar15 = PTR_PTR_1126d5160;
  puVar4 = puVar3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107947a48(puVar15,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar18 = puVar15;
  func_0x00010c08fa60();
  if (puVar18 == (undefined *)0x0) {
    _objc_retain(param_5);
    _objc_release(puVar15);
    puVar15 = param_5;
  }
  func_0x00010c21e360(param_3);
  puVar4 = puVar3;
  func_0x00010bfd44e0();
  if ((int)puVar4 != 0) {
    puVar17 = puVar3;
    func_0x00010bf0ffe0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    puVar4 = puVar17;
    func_0x00010bf10080(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(puVar4);
    puVar16 = puVar17;
    func_0x00010bf10080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar16;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar16);
        }
        uVar19 = *(undefined8 *)((long)puVar20 * 8);
        puVar11 = PTR_PTR_1126d5210;
        _objc_alloc(PTR_PTR_1126d5210);
        uVar21 = uVar19;
        func_0x00010c25ece0(uVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c250f20(uVar19);
        func_0x00010c0df720(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf95780(uVar19);
        func_0x00010c0df720(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c104340(uVar19);
        func_0x00010c0df760(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04eec0(puVar11);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(uVar21);
        func_0x00010befa120(puVar18);
        _objc_release(puVar11);
        puVar20 = (undefined8 *)((long)puVar20 + 1);
      } while (puVar4 != puVar20);
      puVar4 = puVar16;
      func_0x00010bf52a60();
    }
    _objc_release(puVar16);
    puVar7 = PTR_PTR_1126d5218;
    _objc_alloc(PTR_PTR_1126d5218);
    puVar4 = puVar17;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c245860(puVar17);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c245820(puVar17);
    func_0x00010c0df760(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff56a0(puVar7);
    func_0x00010c16c460(param_3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar17);
  }
  _objc_release(puVar15);
  _objc_release(puVar3);
LAB_1071ec79c:
  _objc_release(param_5);
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)PTR_PTR_1126d5220;
  _objc_opt_new();
  puVar4 = (undefined8 *)PTR_PTR_1126d5228;
  _objc_opt_new(PTR_PTR_1126d5228);
  puVar17 = puVar13;
  func_0x00010be36bc0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar3);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010bf3cf60(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208fc0(puVar3);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010c0c54a0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49e0(puVar4);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010c0c5180(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204e00(puVar4);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010c0c5480(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49c0(puVar4);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar16 = puVar13;
  if (puVar17 == (undefined8 *)0x0) {
    func_0x00010c105720(puVar13);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c26f320();
  func_0x00010c215dc0(puVar3);
  _objc_release(puVar16);
  func_0x00010c27dd80();
  func_0x00010c204e40(puVar4);
  puVar17 = puVar13;
  func_0x00010c0c6e00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5520(puVar4);
  _objc_release(puVar16);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010c25ece0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar3);
  _objc_release(puVar17);
  func_0x00010c26f000(puVar13);
  func_0x00010c192d40(puVar3);
  puVar17 = puVar13;
  func_0x00010c0c3fe0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efce0();
  func_0x00010c1b5c20(puVar4);
  _objc_release(puVar17);
  func_0x00010bfed740(puVar13);
  func_0x00010c1c0ee0(puVar3);
  puVar17 = puVar13;
  func_0x00010c297e20(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(puVar4);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010bf4e840(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183080(puVar4);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010bf0d6a0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b3a0(puVar4);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010bf30620(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7800(puVar4);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar17 != (undefined8 *)0x0) {
    puVar15 = PTR_PTR_1126d5230;
    _objc_opt_new(PTR_PTR_1126d5230);
    puVar17 = puVar13;
    func_0x00010bf0e960(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010c22c0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar15);
    _objc_release(puVar16);
    _objc_release(puVar17);
    puVar17 = puVar13;
    func_0x00010bf0e960(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010c22c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar15);
    _objc_release(puVar16);
    _objc_release(puVar17);
    puVar17 = puVar13;
    func_0x00010bf0e960(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010c22c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(puVar15);
    _objc_release(puVar16);
    _objc_release(puVar17);
    func_0x00010c16b940(puVar3);
    _objc_release(puVar15);
  }
  puVar15 = PTR_PTR_1126d5238;
  _objc_opt_new(PTR_PTR_1126d5238);
  func_0x00010c216240(puVar4);
  _objc_release(puVar15);
  puVar17 = puVar13;
  func_0x00010c291e80(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar4;
  func_0x00010c2711a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a0e0();
  _objc_release(puVar16);
  _objc_release(puVar17);
  puVar17 = puVar13;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar17 != (undefined8 *)0x0) {
    puVar15 = PTR_PTR_1126d5240;
    _objc_opt_new(PTR_PTR_1126d5240);
    func_0x00010bf0ffe0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar13 = puVar17;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar13 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar17);
        }
        uVar21 = *(undefined8 *)((long)puVar16 * 8);
        puVar18 = PTR_PTR_1126d5248;
        _objc_opt_new(PTR_PTR_1126d5248);
        uVar12 = uVar21;
        func_0x00010c25ece0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f100(puVar18);
        _objc_release(uVar12);
        uVar12 = uVar21;
        func_0x00010c250f20(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c209a20(puVar18);
        _objc_release(uVar12);
        uVar12 = uVar21;
        func_0x00010bf95780(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c196200(puVar18);
        _objc_release(uVar12);
        func_0x00010c104340(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c1deee0(puVar18);
        _objc_release(uVar21);
        puVar5 = puVar15;
        func_0x00010bf10080(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar5);
        _objc_release(puVar18);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar13 != puVar16);
      puVar13 = puVar17;
      func_0x00010bf52a60();
    }
    _objc_release(puVar17);
    puVar18 = puVar15;
    func_0x00010bf10080(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2186c0(puVar15);
    _objc_release(puVar18);
    func_0x00010c16c460(puVar4);
    _objc_release(puVar15);
  }
  func_0x00010c204860(puVar3);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfeeb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar4;
}



/* Entry: 1071eb20c; end: 1071ec7f7; -[Story initWithStoryElement:storyId:manifestDisplayName:enableStreaming:elementType:] */

undefined *
FUN_1071eb20c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined *param_5,int param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_150;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfee200();
  if (param_1 == (undefined *)0x0) goto LAB_1071ec79c;
  if (param_7 == 2) {
    puVar13 = PTR_PTR_1126b1a58;
    _objc_opt_new(PTR_PTR_1126b1a58);
    func_0x00010c1744a0(param_1);
    _objc_release(puVar13);
  }
  lVar2 = param_3;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227d40(param_1);
  _objc_release(lVar12);
  lVar12 = param_3;
  func_0x00010c24cfc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(param_1);
  _objc_release(lVar12);
  func_0x00010bf8bb00(lVar2);
  func_0x00010c1b4a40(param_1);
  lVar12 = lVar2;
  func_0x00010c0c54a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49e0(param_1);
  _objc_release(lVar12);
  lVar12 = lVar2;
  func_0x00010c242060(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(param_1);
  _objc_release(lVar12);
  lVar12 = lVar2;
  func_0x00010c0c5480(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49c0(param_1);
  _objc_release(lVar12);
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar12 = param_3;
  func_0x00010c2709c0(param_3);
  func_0x00010c052380((double)lVar12 / 1000.0,puVar13);
  func_0x00010c215dc0(param_1);
  _objc_release(puVar13);
  _objc_retain(param_3);
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x408c200000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c2629c0();
  if (lVar12 < 1) {
LAB_1071eb460:
    _objc_retain(puVar13);
    puVar16 = puVar13;
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_alloc();
    lVar12 = param_3;
    func_0x00010c2629c0(param_3);
    func_0x00010c052380((double)lVar12 / 1000.0);
    puVar3 = puVar16;
    func_0x00010bf433a0();
    if (puVar3 != (undefined *)0xffffffffffffffff) {
      _objc_release(puVar16);
      goto LAB_1071eb460;
    }
  }
  _objc_release(puVar13);
  _objc_release(param_3);
  func_0x00010c198b80(param_1);
  _objc_release(puVar16);
  lVar12 = lVar2;
  func_0x00010c2420c0();
  switch((int)lVar12) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  case 0x13:
  case 0x14:
LAB_1071eb4c0:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  default:
    if ((int)lVar12 == -0x4524111) goto LAB_1071eb4c0;
  }
  func_0x00010c21acc0(param_1);
  puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar12 = lVar2;
  func_0x00010c0c6e00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5520(param_1);
  _objc_release(puVar13);
  _objc_release(lVar12);
  func_0x00010c21f760(param_1);
  lVar12 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f100(param_1);
  _objc_release(lVar12);
  func_0x00010bf8b160(param_3);
  func_0x00010c214bc0(param_1);
  func_0x00010c083e00(lVar2);
  puVar13 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d77a0();
  _objc_release(puVar13);
  func_0x00010c0b5720(param_3);
  func_0x00010c1ac2c0(param_1);
  lVar12 = lVar2;
  func_0x00010c297e20(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(param_1);
  _objc_release(lVar12);
  lVar12 = lVar2;
  func_0x00010bf4e840(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183080(param_1);
  _objc_release(lVar12);
  lVar12 = lVar2;
  func_0x00010bf0d660(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b3c0(param_1);
  _objc_release(lVar12);
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010c247520();
  _objc_release(lVar12);
  if ((int)lVar15 - 1U < 3) {
    puVar13 = PTR_PTR_1126cf0d8;
    _objc_alloc(PTR_PTR_1126cf0d8);
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf313e0(param_3);
    func_0x00010c0df7c0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0066a0(puVar13);
    _objc_release(puVar16);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(param_3);
  func_0x00010c19f680(param_1);
  _objc_release(puVar13);
  lVar12 = lVar2;
  func_0x00010c281680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bd60(param_1);
  _objc_release(lVar12);
  lVar12 = lVar2;
  func_0x00010c281680();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126c0328;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar3 == (undefined *)0x0) ||
         (puVar4 = puVar3, func_0x00010c098340(), puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0,
         puVar4 == (undefined *)0x0)) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar3;
        func_0x00010c098320();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2810a0();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar16);
  }
  _objc_release(lVar12);
  func_0x00010c1bbd60(param_1);
  _objc_release(puVar13);
  func_0x00010bfd8600(lVar2);
  func_0x00010c1a6280(param_1);
  lVar12 = lVar2;
  func_0x00010c0efde0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178ac0(param_1);
  _objc_release(lVar12);
  lVar12 = param_3;
  func_0x00010c241660(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar15;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182260(param_1);
  _objc_release(lVar14);
  _objc_release(lVar15);
  _objc_release(lVar12);
  lVar12 = lVar2;
  func_0x00010bfdc880();
  if ((int)lVar12 != 0) {
    lVar12 = lVar2;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x00010bfdaa60();
    if ((int)lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      lVar14 = lVar2;
      func_0x00010c24a0a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar14;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar6;
      func_0x00010bfe2ee0();
      lVar18 = lVar2;
      func_0x00010c24a0a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar18;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0b5940();
      func_0x000100c4a928(lVar15,lVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar18);
      _objc_release(lVar6);
      _objc_release(lVar14);
    }
    _objc_release(lVar12);
    puVar13 = PTR_PTR_1126c4ea0;
    _objc_alloc(PTR_PTR_1126c4ea0);
    lVar12 = lVar15;
    func_0x00010c0b5ac0(lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar14;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar2;
    func_0x00010c24a0a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60(puVar13);
    func_0x00010c1fb580(param_1);
    _objc_release(puVar13);
    _objc_release(lVar18);
    _objc_release(lVar6);
    _objc_release(lVar14);
    _objc_release(lVar12);
    _objc_release(lVar15);
  }
  lVar12 = param_3;
  func_0x00010bf28a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175de0(param_1);
  _objc_release(lVar12);
  puVar13 = param_1;
  func_0x00010c27dd80(param_1);
  func_0x000108f0e9d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2079a0(param_1);
  _objc_release(puVar13);
  if (param_7 == 2) {
    lVar12 = param_3;
    func_0x00010c0ccc20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x00010bfdaec0();
    _objc_release(lVar12);
    if ((int)lVar15 == 0) {
      lStack_150 = 0;
      puStack_180 = (undefined *)0x0;
      puStack_178 = (undefined *)0x0;
      puStack_1a0 = (undefined *)0x0;
      puStack_198 = (undefined *)0x0;
      puStack_190 = (undefined *)0x0;
      puStack_188 = (undefined *)0x0;
      puStack_1a8 = (undefined *)0x0;
      puStack_1b0 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
    }
    else {
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010befcfc0();
      _objc_retainAutoreleasedReturnValue();
      lStack_150 = lVar15;
      func_0x00010bf0aa60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfdaec0();
      puStack_178 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_178 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010c120680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfdb7c0();
      puStack_180 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_180 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010c151b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfdccc0();
      puStack_1a0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_1a0 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010c25ac80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfdc000();
      puStack_188 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_188 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010c22c540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfdce40();
      puStack_190 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_190 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010c260680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfd4be0();
      puStack_198 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_198 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010bf1fa00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfd9fc0();
      puStack_1a8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_1a8 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010c0f2a60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfd9fa0();
      puStack_1b0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puStack_1b0 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010c0f2a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfd56e0();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010bf41960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      lVar12 = param_3;
      func_0x00010c0ccc20();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar12;
      func_0x00010bfd56c0();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)lVar15 == 0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        lVar15 = param_3;
        func_0x00010c0ccc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010bf41900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar15);
      }
      _objc_release(lVar12);
      func_0x00010c1df7c0(param_1);
    }
    puVar4 = PTR_PTR_1126d5208;
    _objc_alloc();
    func_0x00010bf6b200();
    func_0x00010c07d060();
    func_0x00010c07c580();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar12 = param_3;
    func_0x00010c112140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3;
    func_0x00010c26df40();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar15;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bee0(puVar4);
    func_0x00010c174660(param_1);
    _objc_release(puVar4);
    _objc_release(lVar14);
    _objc_release(lVar15);
    _objc_release(puVar3);
    _objc_release(lVar12);
    _objc_release(puVar16);
    _objc_release(puVar13);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    _objc_release(puStack_188);
    _objc_release(puStack_1a0);
    _objc_release(puStack_180);
    _objc_release(puStack_178);
    _objc_release(lStack_150);
  }
  lVar12 = param_3;
  func_0x00010bfd4480();
  if ((int)lVar12 != 0) {
    lVar12 = param_3;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126cf0e0;
    _objc_alloc(PTR_PTR_1126cf0e0);
    lVar15 = lVar12;
    func_0x00010c2923e0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar12;
    func_0x00010bf85d80(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar12;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045c20(puVar13);
    func_0x00010c16b8e0(param_1);
    _objc_release(puVar13);
    _objc_release(lVar6);
    _objc_release(lVar14);
    _objc_release(lVar15);
    _objc_release(lVar12);
  }
  puVar13 = param_1;
  func_0x00010c27dd80();
  if (puVar13 == (undefined *)0x1) {
    bVar1 = true;
  }
  else {
    puVar13 = param_1;
    func_0x00010c27dd80();
    if (puVar13 == (undefined *)0x2) {
      bVar1 = true;
    }
    else {
      puVar13 = param_1;
      func_0x00010c27dd80();
      bVar1 = puVar13 == (undefined *)0x9;
    }
  }
  if (((param_6 != 0) && (bVar1)) && (lVar12 = lVar2, func_0x00010bfdcd20(), (int)lVar12 != 0)) {
    lVar12 = lVar2;
    func_0x00010c25c7e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x0001084d3284();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37c40(param_1);
    _objc_release(lVar15);
    _objc_release(lVar12);
    func_0x00010c25c7e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  func_0x00010c20e620(param_1);
  puVar13 = PTR_PTR_1126d5160;
  lVar12 = lVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107947a48(puVar13,lVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  puVar16 = puVar13;
  func_0x00010c08fa60();
  if (puVar16 == (undefined *)0x0) {
    _objc_retain(param_5);
    _objc_release(puVar13);
    puVar13 = param_5;
  }
  func_0x00010c21e360(param_1);
  lVar12 = lVar2;
  func_0x00010bfd44e0();
  if ((int)lVar12 != 0) {
    lVar14 = lVar2;
    func_0x00010bf0ffe0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    lVar12 = lVar14;
    func_0x00010bf10080(lVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(lVar12);
    lVar6 = lVar14;
    func_0x00010bf10080();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar6);
        }
        uVar17 = *(undefined8 *)(lVar18 * 8);
        puVar9 = PTR_PTR_1126d5210;
        _objc_alloc(PTR_PTR_1126d5210);
        uVar10 = uVar17;
        func_0x00010c25ece0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c250f20(uVar17);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf95780(uVar17);
        func_0x00010c0df720(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c104340(uVar17);
        func_0x00010c0df760(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04eec0(puVar9);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(uVar10);
        func_0x00010befa120(puVar16);
        _objc_release(puVar9);
        lVar18 = lVar18 + 1;
      } while (lVar12 != lVar18);
      lVar12 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    puVar5 = PTR_PTR_1126d5218;
    _objc_alloc(PTR_PTR_1126d5218);
    lVar12 = lVar14;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c245860(lVar14);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c245820(lVar14);
    func_0x00010c0df760(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff56a0(puVar5);
    func_0x00010c16c460(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar12);
    _objc_release(puVar16);
    _objc_release(lVar14);
  }
  _objc_release(puVar13);
  _objc_release(lVar2);
LAB_1071ec79c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR_PTR_1126d5220;
  _objc_opt_new();
  puVar16 = PTR_PTR_1126d5228;
  _objc_opt_new(PTR_PTR_1126d5228);
  lVar11 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar13);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208fc0(puVar13);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c0c54a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49e0(puVar16);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204e00(puVar16);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c0c5480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49c0(puVar16);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  if (lVar11 == 0) {
    func_0x00010c105720(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c26f320();
  func_0x00010c215dc0(puVar13);
  _objc_release(lVar2);
  func_0x00010c27dd80();
  func_0x00010c204e40(puVar16);
  lVar11 = param_3;
  func_0x00010c0c6e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5520(puVar16);
  _objc_release(lVar2);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010c25ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar13);
  _objc_release(lVar11);
  func_0x00010c26f000(param_3);
  func_0x00010c192d40(puVar13);
  lVar11 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efce0();
  func_0x00010c1b5c20(puVar16);
  _objc_release(lVar11);
  func_0x00010bfed740(param_3);
  func_0x00010c1c0ee0(puVar13);
  lVar11 = param_3;
  func_0x00010c297e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(puVar16);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf4e840(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183080(puVar16);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf0d6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b3a0(puVar16);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf30620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7800(puVar16);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    puVar3 = PTR_PTR_1126d5230;
    _objc_opt_new(PTR_PTR_1126d5230);
    lVar11 = param_3;
    func_0x00010bf0e960(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010c22c0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar11);
    lVar11 = param_3;
    func_0x00010bf0e960(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010c22c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar11);
    lVar11 = param_3;
    func_0x00010bf0e960(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010c22c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar11);
    func_0x00010c16b940(puVar13);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126d5238;
  _objc_opt_new(PTR_PTR_1126d5238);
  func_0x00010c216240(puVar16);
  _objc_release(puVar3);
  lVar11 = param_3;
  func_0x00010c291e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar16;
  func_0x00010c2711a0(puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a0e0();
  _objc_release(puVar3);
  _objc_release(lVar11);
  lVar11 = param_3;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    puVar3 = PTR_PTR_1126d5240;
    _objc_opt_new(PTR_PTR_1126d5240);
    func_0x00010bf0ffe0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar11 = lVar15;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar15);
        }
        uVar17 = *(undefined8 *)(lVar14 * 8);
        puVar4 = PTR_PTR_1126d5248;
        _objc_opt_new(PTR_PTR_1126d5248);
        uVar10 = uVar17;
        func_0x00010c25ece0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f100(puVar4);
        _objc_release(uVar10);
        uVar10 = uVar17;
        func_0x00010c250f20(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c209a20(puVar4);
        _objc_release(uVar10);
        uVar10 = uVar17;
        func_0x00010bf95780(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c196200(puVar4);
        _objc_release(uVar10);
        func_0x00010c104340(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c1deee0(puVar4);
        _objc_release(uVar17);
        puVar5 = puVar3;
        func_0x00010bf10080(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar5);
        _objc_release(puVar4);
        lVar14 = lVar14 + 1;
      } while (lVar11 != lVar14);
      lVar11 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    puVar4 = puVar3;
    func_0x00010bf10080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2186c0(puVar3);
    _objc_release(puVar4);
    func_0x00010c16c460(puVar16);
    _objc_release(puVar3);
  }
  func_0x00010c204860(puVar13);
  _objc_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfeeb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar16;
}



/* Entry: 1071ec7f8; end: 1071ecebb; -[Story toStoryElement] */

void FUN_1071ec7f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d5220;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126d5228;
  _objc_opt_new(PTR_PTR_1126d5228);
  lVar3 = param_1;
  func_0x00010be36bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208fc0(puVar1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0c54a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49e0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204e00(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0c5480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c49c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = param_1;
  if (lVar3 == 0) {
    func_0x00010c105720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c26f320();
  func_0x00010c215dc0(puVar1);
  _objc_release(lVar4);
  func_0x00010c27dd80();
  func_0x00010c204e40(puVar2);
  lVar3 = param_1;
  func_0x00010c0c6e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5520(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c25ece0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(lVar3);
  func_0x00010c26f000(param_1);
  func_0x00010c192d40(puVar1);
  lVar3 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0efce0();
  func_0x00010c1b5c20(puVar2);
  _objc_release(lVar3);
  func_0x00010bfed740(param_1);
  func_0x00010c1c0ee0(puVar1);
  lVar3 = param_1;
  func_0x00010c297e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183080(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf0d6a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b3a0(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf30620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7800(puVar2);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar5 = PTR_PTR_1126d5230;
    _objc_opt_new(PTR_PTR_1126d5230);
    lVar3 = param_1;
    func_0x00010bf0e960(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22c0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf0e960(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22c0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf0e960(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c16b940(puVar1);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126d5238;
  _objc_opt_new(PTR_PTR_1126d5238);
  func_0x00010c216240(puVar2);
  _objc_release(puVar5);
  lVar3 = param_1;
  func_0x00010c291e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2711a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a0e0();
  _objc_release(puVar5);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar5 = PTR_PTR_1126d5240;
    _objc_opt_new(PTR_PTR_1126d5240);
    func_0x00010bf0ffe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        uVar12 = *(undefined8 *)(lVar11 * 8);
        puVar7 = PTR_PTR_1126d5248;
        _objc_opt_new(PTR_PTR_1126d5248);
        uVar8 = uVar12;
        func_0x00010c25ece0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f100(puVar7);
        _objc_release(uVar8);
        uVar8 = uVar12;
        func_0x00010c250f20(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c209a20(puVar7);
        _objc_release(uVar8);
        uVar8 = uVar12;
        func_0x00010bf95780(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c196200(puVar7);
        _objc_release(uVar8);
        func_0x00010c104340(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c1deee0(puVar7);
        _objc_release(uVar12);
        puVar9 = puVar5;
        func_0x00010bf10080(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar9);
        _objc_release(puVar7);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    puVar7 = puVar5;
    func_0x00010bf10080(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2186c0(puVar5);
    _objc_release(puVar7);
    func_0x00010c16c460(puVar2);
    _objc_release(puVar5);
  }
  func_0x00010c204860(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfeeb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1071ecebc; end: 1071ecec3; -[Story initFriendStoryWithSoju:userBlizzardLogger:] */

void FUN_1071ecebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfeeb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initFriendStoryWithSoju_userBliz_1125d94a8,param_3,param_4,0);
  return;
}



/* Entry: 1071ecec4; end: 1071ed9b3; -[Story initFriendStoryWithSoju:userBlizzardLogger:legacyStoryMediaCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1071ecec4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_108 = PTR_PTR_1126f8c18;
  puVar2 = &uStack_110;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = param_3;
    func_0x00010bfe5e40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227d40(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(puVar2);
    _objc_release(puVar3);
    func_0x00010c26fb80(param_3);
    func_0x00010c214bc0(puVar2);
    func_0x00010c0757a0(param_3);
    func_0x00010c1ac2c0(puVar2);
    puVar3 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2bc0(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bf92c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195a40(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c297e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2208c0(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        puVar7 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(puVar3);
          }
          uVar10 = *(undefined8 *)((long)puVar7 * 8);
          uVar6 = uVar10;
          func_0x00010c281420(uVar10);
          _objc_retainAutoreleasedReturnValue();
          iVar1 = 0x10e550f8;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          if (iVar1 == 0) {
            uVar6 = uVar10;
            func_0x00010c281420(uVar10);
            _objc_retainAutoreleasedReturnValue();
            iVar1 = 0x10e3ddf8;
            func_0x00010c0720c0();
            _objc_release(uVar6);
            if (iVar1 != 0) {
              func_0x00010c2810a0(uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20d420(puVar2);
              goto LAB_1071ed14c;
            }
          }
          else {
            func_0x00010c2810a0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20d140(puVar2);
LAB_1071ed14c:
            _objc_release(uVar10);
          }
          puVar7 = (undefined8 *)((long)puVar7 + 1);
        } while (puVar4 != puVar7);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bf30640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c178ac0(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      ppuStack_100 = &PTR____CFConstantStringClassReference_110ea21f8;
      puVar4 = puVar2;
      func_0x00010bf30620();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_f8 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c23f440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(puVar2);
    _objc_release(puVar3);
    func_0x00010bf03760(param_3);
    func_0x00010c167f00(puVar2);
    puVar5 = PTR_PTR_1126d5200;
    _objc_alloc(PTR_PTR_1126d5200);
    func_0x00010c020700();
    func_0x00010c1c4020(puVar2);
    _objc_release(puVar5);
    func_0x00010c2bf060(param_3);
    puVar3 = puVar2;
    func_0x00010c0c3fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d77a0();
    _objc_release(puVar3);
    func_0x00010c1d6440(puVar2);
    puVar3 = param_3;
    func_0x00010bf5de40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186e80(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c270c80();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((long)puVar3 < 1) {
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215dc0(puVar2);
    }
    else {
      puVar3 = param_3;
      func_0x00010c2709c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65140(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215dc0(puVar2);
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    func_0x00010c222fc0(puVar2);
    func_0x00010c07dc80(param_3);
    func_0x00010c1b44c0(puVar2);
    func_0x00010c079000(param_3);
    func_0x00010c1b2f20(puVar2);
    func_0x00010c079000(param_3);
    func_0x00010c1d0b20(puVar2);
    func_0x00010c07b800(param_3);
    func_0x00010c1b3a20(puVar2);
    func_0x00010c0d7260(param_3);
    func_0x00010c1cbca0(puVar2);
    puVar3 = param_3;
    func_0x00010bef3ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_3;
      func_0x00010c0c6f60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4060(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar3 = param_3;
      func_0x00010c0c4800(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4440(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010c0c5480(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c49c0(puVar2);
      _objc_release(puVar3);
      func_0x00010c0c6da0(param_3);
      func_0x00010c21acc0(puVar2);
    }
    puVar3 = param_3;
    func_0x00010c0c54a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c49e0(puVar2);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar3 = param_3;
    func_0x00010c26e500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214440(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c26df60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214180(puVar2);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar3 = param_3;
    func_0x00010c26f4a0(param_3);
    func_0x00010bf65600((double)((long)puVar3 / 1000),puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198b80(puVar2);
    _objc_release(puVar5);
    func_0x00010c1df7c0(puVar2);
    puVar3 = param_3;
    func_0x00010c25ece0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f100(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bfb73c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f680(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bf0e960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b8e0(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bf0ffe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c460(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c23f440(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0c3fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c23f440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    puVar5 = PTR_PTR_1126b2378;
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = param_3;
      func_0x00010bf4e840(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe3740(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183080(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    puVar3 = param_3;
    func_0x00010bfae080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar2);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_3;
    func_0x00010c094fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(puVar3);
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      puVar3 = param_3;
      func_0x00010c094fa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b20(puVar5);
      func_0x00010c1bc1e0(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    puVar3 = param_3;
    func_0x00010c281680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bd60(puVar2);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c23f900(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c247580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203c40(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c23f900(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2049c0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c0880c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b75c0(puVar2);
    _objc_release(puVar3);
    lVar8 = (long)_DAT_1127655d4;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_4;
    _objc_release(uVar6);
    _objc_release(puVar9);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfeed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_3;
}



/* Entry: 1071ed9b4; end: 1071ed9bb; -[Story initGroupStoryWithSoju:userBlizzardLogger:] */

void FUN_1071ed9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfeed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initGroupStoryWithSoju_userBlizz_1125d9510,param_3,param_4,0);
  return;
}



/* Entry: 1071ed9bc; end: 1071ed9fb; -[Story initGroupStoryWithSoju:userBlizzardLogger:legacyStoryMediaCache:] */

long FUN_1071ed9bc(long param_1,undefined8 param_2)

{
  func_0x00010bfeeb80();
  if (param_1 != 0) {
    func_0x00010c1b1980(param_1,param_2,1);
    func_0x00010c1b3a20(param_1,param_2,1);
  }
  return param_1;
}



/* Entry: 1071ed9fc; end: 1071eda1f; -[Story copyWithZone:] */

undefined8 FUN_1071ed9fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1071eda20; end: 1071eda8b; -[Story setUsername:] */

void FUN_1071eda20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010c16aec0(param_1,param_2,param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071eda8c; end: 1071edb33; -[Story posterUsername] */

void FUN_1071eda8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c074980();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c22c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bf0e960(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c22c0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      param_1 = lVar1;
      goto LAB_1071edb20;
    }
  }
  func_0x00010bf0c4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_1071edb20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071edb34; end: 1071edb6f; -[Story publicationId] */

void FUN_1071edb34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c074980();
  if ((int)uVar1 != 0) {
    func_0x00010bf0c4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071edb70; end: 1071edbab; -[Story _storyWillEncodeObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071edb70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf0c4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127655d8);
  *(long *)(param_1 + _DAT_1127655d8) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071edbac; end: 1071edc83; -[Story _storyDidDecodeObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071edbac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c21f760(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127655d8));
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076b80();
  _objc_release(lVar1);
  func_0x00010c1c5340(param_1);
  lVar1 = param_1;
  func_0x00010c08ffc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08ffc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13720();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c076420();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1baa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLensAssetUploadOperation__11264c4c0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec6e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnLensUploadOperationE_11258f538);
  return;
}



/* Entry: 1071edc84; end: 1071edcab; -[Story _markAndRemoveUnrecoverableStory] */

void FUN_1071edc84(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c21bf00(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010be8dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeUnrecoverablePendingStory_1125810c0);
  return;
}



/* Entry: 1071edcac; end: 1071ee653; -[Story initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1071edcac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8c18;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithCoder__1125dd730,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198b80(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127655d8);
    *(long *)((long)puVar1 + (long)_DAT_1127655d8) = lVar2;
    _objc_release(uVar4);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df740(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e360(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215dc0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2b80(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ee80(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c49e0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4060(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4440(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172ea0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172ee0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214440(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c49c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214180(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b1980(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b4a40(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c208cc0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b44c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6be0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c200360(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f100(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b2f20(puVar1);
    _objc_release(lVar2);
    func_0x00010bf66f40();
    func_0x00010c1d0b20(puVar1);
    func_0x00010bf66ce0();
    func_0x00010c1b3a20(puVar1);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c222e60(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e000(puVar1);
    _objc_release(lVar2);
    func_0x00010bf66f40();
    func_0x00010c1f78a0(puVar1);
    func_0x00010bf66ce0();
    func_0x00010c1f5b20(puVar1);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff160(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff140(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1cbca0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1df7c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f680(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b8e0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c460(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2d20(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e640(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1744a0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a87c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203c40(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2049c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b75c0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baa60(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8ae0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c186e80(puVar1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126d5250;
      func_0x00010c0f40e0(PTR_PTR_1126d5250);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185c00(puVar1);
      _objc_release(puVar3);
    }
    func_0x00010bec4840(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1071ee654; end: 1071ef057; -[Story encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ee654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f8c18;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_encodeWithCoder__1125c2658,param_3);
  func_0x00010bec51a0(param_1);
  lVar1 = param_1;
  func_0x00010bf9c720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  func_0x00010bf93020(param_3);
  lVar1 = param_1;
  func_0x00010c291e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c105860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c2709c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0bbda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c293200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c54a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c4000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c47e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf1f000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf1f0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26e3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c5480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c26df60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22c140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c074980(param_1);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07f5e0(param_1);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c24c380(param_1);
  func_0x00010c0df7c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07dc60();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c0ee240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c22eae0();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010c25ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c078fe0();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  func_0x00010c0e1a60();
  func_0x00010bf92fc0(param_3);
  func_0x00010c07b720();
  func_0x00010bf92da0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c29ea60();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010bfb33a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  func_0x00010c151a80(param_1);
  func_0x00010bf92fc0(param_3);
  func_0x00010c14b880();
  func_0x00010bf92da0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c105980();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0d7240();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(puVar2);
  lVar1 = param_1;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf0ffe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfc1680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c25c7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfe32e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c23f920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c241920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08ffc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c1543a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf5de40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf5b3e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bf93020(param_3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}


