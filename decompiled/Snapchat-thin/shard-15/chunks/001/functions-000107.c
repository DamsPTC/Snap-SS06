/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b885c6c; end: 10b885cdb;  */

void FUN_10b885c6c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if ((lRam00000001138466f0 == 2) ||
     ((lRam00000001138466f0 == 0 && (lVar1 = param_2, func_0x00010c292b20(), lVar1 == 2)))) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b885cdc; end: 10b885d83;  */

void FUN_10b885cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x10b885d44;
  puStack_30 = &UNK_110d65fb8;
  uStack_28 = param_1;
  uStack_20 = param_4;
  uStack_18 = param_3;
  func_0x00010bf41560(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b885d84; end: 10b885dd7; +[SIGSpecOverride sharedInstance] */

void FUN_10b885d84(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbf00 != -1) {
    func_0x000107c27d9c(0x1137fbf00,&PTR___NSConcreteGlobalBlock_110d66008);
  }
  uVar1 = uRam00000001137fbf08;
  _objc_retain(uRam00000001137fbf08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b885dd8; end: 10b885e03;  */

void FUN_10b885dd8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dcbe0;
  _objc_alloc_init();
  uVar1 = puRam00000001137fbf08;
  puRam00000001137fbf08 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b885e04; end: 10b885e57; +[SIGSpecOverride sharedInstanceWithBottomSpacing] */

void FUN_10b885e04(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbf10 != -1) {
    func_0x000107c27d9c(0x1137fbf10,&PTR___NSConcreteGlobalBlock_110d66028);
  }
  uVar1 = uRam00000001137fbf18;
  _objc_retain(uRam00000001137fbf18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b885e58; end: 10b885e8b;  */

void FUN_10b885e58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dcbe0;
  _objc_alloc();
  func_0x00010c002720(0x4010000000000000);
  uVar1 = puRam00000001137fbf18;
  puRam00000001137fbf18 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b885e8c; end: 10b885edf; +[SIGSpecOverride sharedInstanceWithNoShadowSpacing] */

void FUN_10b885e8c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbf20 != -1) {
    func_0x000107c27d9c(0x1137fbf20,&PTR___NSConcreteGlobalBlock_110d66048);
  }
  uVar1 = uRam00000001137fbf28;
  _objc_retain(uRam00000001137fbf28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b885ee0; end: 10b885f0f;  */

void FUN_10b885ee0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dcbe0;
  _objc_alloc();
  func_0x00010c02fa20();
  uVar1 = puRam00000001137fbf28;
  puRam00000001137fbf28 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b885f10; end: 10b885ff3; -[SIGSpecOverride init] */

undefined1 * FUN_10b885f10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b7e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 0x4010000000000000;
    *(undefined8 *)((long)puVar1 + 0x20) = 0xc000000000000000;
    *(undefined8 *)((long)puVar1 + 0x18) = 0x3ff8000000000000;
    *(undefined8 *)((long)puVar1 + 0x30) = 0x403e000000000000;
    *(undefined8 *)((long)puVar1 + 0x28) = 0x4037000000000000;
    *(undefined8 *)((long)puVar1 + 0x40) = 0x4038000000000000;
    *(undefined8 *)((long)puVar1 + 0x38) = 0x4047000000000000;
    *(undefined8 *)((long)puVar1 + 0x48) = 0x4010000000000000;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ece0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7360(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b885ff4; end: 10b88601b; -[SIGSpecOverride initWithContainerBottomSpacing:] */

void FUN_10b885ff4(undefined8 param_1,long param_2)

{
  func_0x00010bfee200();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x10) = param_1;
  }
  return;
}



/* Entry: 10b88601c; end: 10b886037; -[SIGSpecOverride initWithNoShadowSpacing] */

void FUN_10b88601c(long param_1)

{
  func_0x00010bfee200();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10b886038; end: 10b88603f; -[SIGSpecOverride SIGContainerShadowSpacing] */

undefined8 FUN_10b886038(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b886040; end: 10b886047; -[SIGSpecOverride SIGContainerBottomSpacing] */

undefined8 FUN_10b886040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b886048; end: 10b88604f; -[SIGSpecOverride SIGContainerLeftAndRightTwoColumnInset] */

undefined8 FUN_10b886048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b886050; end: 10b886057; -[SIGSpecOverride SIGContainerTopAndBottomTwoColumnLayoutShadowOffset] */

undefined8 FUN_10b886050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b886058; end: 10b88605f; -[SIGSpecOverride SIGSectionHeaderDefaultHeight] */

undefined8 FUN_10b886058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b886060; end: 10b886067; -[SIGSpecOverride SIGSectionHeaderHeightWithSubtitle] */

undefined8 FUN_10b886060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b886068; end: 10b88606f; -[SIGSpecOverride SIGSectionHeaderHeightWithMultilineSubtitle] */

undefined8 FUN_10b886068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b886070; end: 10b886077; -[SIGSpecOverride SIGSectionHeaderButtonHeight] */

undefined8 FUN_10b886070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b886078; end: 10b88607f; -[SIGSpecOverride SIGSectionHeaderTrailingViewBottomInset] */

undefined8 FUN_10b886078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b886080; end: 10b886087; -[SIGSpecOverride SIGSectionHeaderTitleFont] */

undefined8 FUN_10b886080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b886088; end: 10b88608f; -[SIGSpecOverride SIGSectionHeaderNewTitleFont] */

undefined8 FUN_10b886088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b886090; end: 10b8860bf; -[SIGSpecOverride setSIGSectionHeaderNewTitleFont:] */

void FUN_10b886090(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b8860c0; end: 10b8860c7; -[SIGSpecOverride SIGSectionHeaderSubtitleFont] */

undefined8 FUN_10b8860c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b8860c8; end: 10b886103; -[SIGSpecOverride .cxx_destruct] */

void FUN_10b8860c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,0);
  return;
}



/* Entry: 10b886104; end: 10b88610b; -[SIGStylesBase fontForStyle:scaleForAccessibility:] */

void FUN_10b886104(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_fontForStyle_scaleForAccessibili_1125ca948)
  ;
  return;
}



/* Entry: 10b88610c; end: 10b886113; -[SIGStylesBase fontForStyle:scaleForAccessibility:maximumFontSize:] */

void FUN_10b88610c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fontForStyle_scaleForAccessibili_1125ca950,param_3,param_4,0);
  return;
}



/* Entry: 10b886114; end: 10b88611b; -[SIGStylesBase colorForStyle:resolveMode:] */

undefined8 FUN_10b886114(void)

{
  return 0;
}



/* Entry: 10b88611c; end: 10b88614b; -[SIGStylesBase .cxx_destruct] */

void FUN_10b88611c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88614c; end: 10b888103; -[SIGStylesDefault colorForStyle:resolveMode:] */

void FUN_10b88614c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  switch(param_3) {
  case 1:
  case 0x43:
    uVar5 = 0x3faa1a1a20000000;
    goto code_r0x00010b88691c;
  case 2:
    uVar5 = 0x3feefeff00000000;
    goto code_r0x00010b887b00;
  case 3:
    func_0x00010bf41620(0x3fda1a1a20000000,0x3fda1a1a20000000,0x3fda1a1a20000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe39393a0000000;
    goto code_r0x00010b8880a4;
  case 4:
  case 0x47:
    func_0x00010bf41620(0x3fe39393a0000000,0x3fe39393a0000000,0x3fe39393a0000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fda1a1a20000000;
    goto code_r0x00010b8880a4;
  case 5:
  case 0x11:
  case 0x14:
    uVar6 = 0x3fedbdbdc0000000;
    uVar4 = 0x3fc19191a0000000;
    goto code_r0x00010b8876e8;
  case 6:
    uVar5 = 0x3fe8181820000000;
    uVar4 = 0x3f90101020000000;
    goto code_r0x00010b887938;
  case 7:
  case 0x3e:
  case 0x53:
  case 0x55:
  case 0x58:
  case 0x69:
  case 0xba:
  case 0xbc:
  case 0xc4:
  case 0xd5:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    goto code_r0x00010b8861b4;
  case 8:
    uVar7 = 0x3fe70a3d70a3d70a;
    goto code_r0x00010b887dc0;
  case 9:
  case 0x1a:
    uVar6 = 0x3faa1a1a20000000;
    uVar7 = 0x3fd3333333333333;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x00010b887c80;
  case 10:
    uVar6 = 0x3faa1a1a20000000;
    uVar7 = 0x3fc999999999999a;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x00010b887c80;
  case 0xb:
    uVar7 = 0x3fd3333333333333;
    goto code_r0x00010b887dc0;
  case 0xc:
    uVar5 = 0x3ff0000000000000;
code_r0x00010b887b00:
    func_0x00010bf41620(uVar5,uVar5,uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3faa1a1a20000000;
    goto code_r0x00010b8880a4;
  case 0xd:
  case 0x2e:
  case 0x33:
  case 0x34:
  case 0x62:
  case 0xa1:
  case 0xef:
    uVar5 = 0x3fef9f9fa0000000;
    goto code_r0x00010b8861cc;
  case 0xe:
    uVar5 = 0x3fba1a1a20000000;
    goto code_r0x00010b88691c;
  case 0xf:
  case 0x16:
    func_0x00010bf41620(0x3fee1e1e20000000,0x3fee1e1e20000000,0x3fee1e1e20000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc39393a0000000;
    goto code_r0x00010b8880a4;
  case 0x10:
  case 0x15:
  case 0x17:
  case 0x1b:
    func_0x00010bf41620(0x3feefeff00000000,0x3feefeff00000000,0x3feefeff00000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fba1a1a20000000;
    goto code_r0x00010b8880a4;
  case 0x12:
    func_0x00010bf41620(0x3fee1e1e20000000,0x3fee1e1e20000000,0x3fee1e1e20000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fca1a1a20000000;
    goto code_r0x00010b8880a4;
  case 0x13:
    uVar5 = 0x3fc39393a0000000;
code_r0x00010b88691c:
    func_0x00010bf41620(uVar5,uVar5,uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3feefeff00000000;
    goto code_r0x00010b8880a4;
  case 0x18:
    uVar6 = 0x3fba1a1a20000000;
    goto code_r0x00010b886cd4;
  case 0x19:
    uVar6 = 0x3faa1a1a20000000;
    uVar7 = 0x3fe70a3d70a3d70a;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x00010b887c80;
  case 0x1c:
    func_0x00010bf41620(0x3fed3d3d40000000,0x3fed3d3d40000000,0x3fed3d3d40000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc09090a0000000;
    goto code_r0x00010b8880a4;
  case 0x1d:
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc49494a0000000;
    goto code_r0x00010b8880a4;
  case 0x1e:
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd0d0d0e0000000;
    uVar5 = 0x3fd29292a0000000;
    uVar6 = 0x3fd5151520000000;
    goto code_r0x00010b888020;
  case 0x1f:
    uVar6 = 0x3fed5d5d60000000;
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3fedfdfe00000000;
    uVar7 = 0x3ff0000000000000;
    goto code_r0x00010b887fa4;
  case 0x20:
    func_0x00010bf41620(0,0,0,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fc999999999999a;
    goto code_r0x00010b887fc0;
  case 0x21:
  case 0x2d:
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x00010b887e0c;
  case 0x22:
    uVar5 = 0x3fef3f3f40000000;
    uVar4 = 0x3fef5f5f60000000;
    goto code_r0x00010b8867bc;
  case 0x23:
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc0101020000000;
    uVar5 = 0x3fc09090a0000000;
    uVar6 = 0x3fc1111120000000;
    goto code_r0x00010b888020;
  case 0x24:
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe8000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0x3fe8000000000000;
    goto code_r0x00010b8880b0;
  case 0x25:
    uVar7 = 0x3fd999999999999a;
    goto code_r0x00010b886844;
  case 0x26:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
    goto code_r0x00010b887ff0;
  case 0x27:
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3feddddde0000000;
    uVar6 = 0x3fedfdfe00000000;
    goto code_r0x00010b886f78;
  case 0x28:
    uVar5 = 0x3feefeff00000000;
    uVar4 = 0x3fef1f1f20000000;
    uVar6 = 0x3fef3f3f40000000;
code_r0x00010b887e0c:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fb2121220000000;
    goto code_r0x00010b8880a4;
  case 0x29:
  case 0x2a:
  case 0xbd:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x00010b8865e4;
  case 0x2b:
    uVar7 = 0x3feb333333333333;
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3feb333333333333,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fbe1e1e20000000;
    uVar5 = uVar4;
    uVar6 = uVar4;
    goto code_r0x00010b8880b0;
  case 0x2c:
  case 0x5e:
    uVar7 = 0x3fa999999999999a;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x00010b887fa4;
  case 0x2f:
  case 0x3f:
  case 0xb9:
  case 0x117:
    uVar6 = 0x3fefbfbfc0000000;
    uVar5 = 0x3fc3131320000000;
    uVar4 = 0x3fd19191a0000000;
    break;
  case 0x30:
  case 0x40:
  case 0xdc:
  case 0xdd:
  case 0x119:
    uVar6 = 0x3fe69696a0000000;
    uVar5 = 0x3fc4141420000000;
    uVar4 = 0x3fef7f7f80000000;
    break;
  case 0x31:
  case 0x35:
  case 0x3a:
  case 0x41:
  case 0x6a:
  case 0x88:
  case 0xc1:
  case 0xc3:
  case 0xcf:
  case 0xee:
  case 0xf1:
  case 0x118:
  case 0x11a:
    uVar6 = 0x3fae1e1e20000000;
    uVar5 = 0x3fe5b5b5c0000000;
    goto code_r0x00010b8861b4;
  case 0x32:
  case 0x71:
    uVar6 = 0x3fc7171720000000;
    uVar5 = 0x3fe99999a0000000;
    uVar4 = 0x3fd39393a0000000;
    break;
  case 0x36:
  case 0x3b:
  case 0x9f:
  case 0xec:
    uVar6 = 0x3fcc9c9ca0000000;
    uVar5 = 0x3fe9595960000000;
    uVar4 = 0x3fe1d1d1e0000000;
    break;
  case 0x37:
  case 0x38:
  case 0x90:
  case 0xa9:
  case 0xc2:
  case 0xd0:
    uVar6 = 0x3fee5e5e60000000;
    uVar5 = 0x3fce1e1e20000000;
    goto code_r0x00010b8861ec;
  case 0x39:
  case 0x3c:
  case 0x75:
  case 0x8c:
    uVar6 = 0x3fe4141420000000;
    uVar5 = 0x3fd7575760000000;
    uVar4 = 0x3fe9b9b9c0000000;
    break;
  case 0x3d:
  case 0x51:
  case 0x54:
  case 0x57:
  case 0xc5:
  case 0xd4:
    uVar6 = 0;
    uVar5 = 0;
    goto code_r0x00010b886208;
  case 0x42:
    uVar6 = 0x3fe1b1b1c0000000;
    goto code_r0x00010b886cd4;
  case 0x44:
    func_0x00010bf41620(0x3fd6d6d6e0000000,0x3fd6d6d6e0000000,0x3fd6d6d6e0000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe1b1b1c0000000;
    goto code_r0x00010b8880a4;
  case 0x45:
  case 0x46:
    uVar6 = 0x3faa1a1a20000000;
code_r0x00010b886cd4:
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x00010b887c80;
  case 0x48:
  case 99:
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    goto code_r0x00010b8876a8;
  case 0x49:
    uVar5 = 0x3fd9191920000000;
    uVar4 = 0x3fd9595960000000;
    uVar6 = 0x3fd9d9d9e0000000;
    goto code_r0x00010b887c2c;
  case 0x4a:
  case 0x4b:
    uVar5 = 0x3fe3535360000000;
    uVar4 = 0x3fe3737380000000;
    uVar6 = 0x3fe3b3b3c0000000;
    goto code_r0x00010b887080;
  case 0x4c:
    func_0x00010bf41620(0x3fe8585860000000,0x3fc2121220000000,0x3fcf1f1f20000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fedbdbdc0000000;
    uVar5 = 0x3fd2525260000000;
    uVar6 = 0x3fd9191920000000;
    goto code_r0x00010b888020;
  case 0x4d:
    func_0x00010bf41620(0x3fae1e1e20000000,0x3fe5b5b5c0000000,0x3ff0000000000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fa0101020000000;
    uVar5 = 0x3fe29292a0000000;
    uVar6 = 0x3fef5f5f60000000;
    goto code_r0x00010b888020;
  case 0x4e:
  case 0x74:
  case 0x77:
  case 0xda:
  case 0xf3:
    uVar5 = 0x3fae1e1e20000000;
    uVar4 = 0x3fe5b5b5c0000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x00010b886250;
  case 0x4f:
  case 0xa3:
    uVar6 = 0x3f70101020000000;
    uVar5 = 0x3fe1111120000000;
    uVar4 = 0x3fd4141420000000;
    break;
  case 0x50:
    uVar6 = 0x3fea1a1a20000000;
    uVar5 = 0x3fce1e1e20000000;
    uVar4 = 0x3f70101020000000;
    break;
  case 0x52:
  case 0xe8:
  case 0xed:
  case 0x114:
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x00010b88628c;
  case 0x56:
    uVar7 = 0x3fe428f5c28f5c29;
    goto code_r0x00010b887dc0;
  case 0x59:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x00010b887de4;
  case 0x5a:
    uVar7 = 0x3fe3d70a3d70a3d7;
    goto code_r0x00010b887dc0;
  case 0x5b:
    uVar6 = 0x3fedbdbdc0000000;
    uVar5 = 0x3fd2525260000000;
    uVar4 = 0x3fd9191920000000;
    break;
  case 0x5c:
    uVar5 = 0x3fed3d3d40000000;
    uVar4 = 0x3fed5d5d60000000;
    uVar6 = 0x3fed7d7d80000000;
    uVar7 = 0x3ff0000000000000;
    goto code_r0x00010b887d30;
  case 0x5d:
    uVar6 = 0x3fee5e5e60000000;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x00010b8865e4;
  case 0x5f:
    uVar7 = 0x3faeb851eb851eb8;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
code_r0x00010b887d30:
    func_0x00010bf41620(uVar5,uVar4,uVar6,uVar7,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fc3333333333333;
    goto code_r0x00010b887fc0;
  case 0x60:
    func_0x00010bf41620(0x3fb6161620000000,0x3fb9191920000000,0x3fbc1c1c20000000,0x3fa47ae147ae147b,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    goto code_r0x00010b8880b0;
  case 0x61:
    func_0x00010bf41620(0,0,0,0,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3f9eb851eb851eb8;
    goto code_r0x00010b887fc0;
  case 100:
  case 0xe5:
  case 0xf2:
    uVar6 = 0x3feb9b9ba0000000;
    uVar5 = 0x3fc7171720000000;
    uVar4 = 0x3fd2d2d2e0000000;
    break;
  case 0x65:
    uVar5 = 0x3fe6161620000000;
    uVar4 = 0x3fe6363640000000;
    uVar6 = 0x3fe6565660000000;
    goto code_r0x00010b887ff0;
  case 0x66:
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3feddddde0000000;
    uVar6 = 0x3fedfdfe00000000;
    goto code_r0x00010b88773c;
  case 0x67:
  case 0xa7:
    uVar6 = 0;
    uVar7 = 0x3fd0000000000000;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x00010b887c80;
  case 0x68:
    uVar7 = 0x3fc0a3d70a3d70a4;
code_r0x00010b887dc0:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x00010b887c80;
  case 0x6b:
    func_0x00010bf41620(0x3fed9d9da0000000,0x3fedfdfe00000000,0x3fee3e3e40000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc59595a0000000;
    goto code_r0x00010b8880a4;
  case 0x6c:
  case 0x7d:
    uVar6 = 0x3fd39393a0000000;
    uVar5 = 0x3fd59595a0000000;
    uVar4 = 0x3fd7d7d7e0000000;
    break;
  case 0x6d:
    uVar5 = 0x3fd39393a0000000;
    uVar4 = 0x3fd59595a0000000;
    uVar6 = 0x3fd7d7d7e0000000;
    goto code_r0x00010b8876a8;
  case 0x6e:
  case 0x6f:
    uVar6 = 0x3fe7373740000000;
    uVar5 = 0x3fe8181820000000;
    uVar4 = 0x3fe8f8f900000000;
    goto code_r0x00010b8865e4;
  case 0x70:
  case 0x8f:
    uVar6 = 0x3fec3c3c40000000;
    uVar5 = 0x3fb4141420000000;
    uVar4 = 0x3fce9e9ea0000000;
    break;
  case 0x72:
    func_0x00010bf41620(0x3febfbfc00000000,0x3fec7c7c80000000,0x3fecfcfd00000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd4545460000000;
    goto code_r0x00010b8880a4;
  case 0x73:
    func_0x00010bf41620(0x3fd2525260000000,0x3fe8585860000000,0x3fe1f1f200000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd49494a0000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = 0x3fe8585860000000;
    uVar6 = 0x3fe2727280000000;
    goto code_r0x00010b8880b0;
  case 0x76:
    uVar5 = 0x3fc7171720000000;
    uVar4 = 0x3fe5b5b5c0000000;
    uVar6 = 0x3fde1e1e20000000;
    goto code_r0x00010b886250;
  case 0x78:
    func_0x00010bf41620(0x3fedfdfe00000000,0x3fd4141420000000,0x3f70101020000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3fe2d2d2e0000000;
    uVar6 = 0x3fd8585860000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x00010b888020;
  case 0x79:
    func_0x00010bf41620(0x3feababac0000000,0x3fd7575760000000,0x3fe3b3b3c0000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fecbcbcc0000000;
    uVar5 = 0x3fe3535360000000;
    uVar6 = 0x3fe8585860000000;
    goto code_r0x00010b888020;
  case 0x7a:
    uVar6 = 0x3fb6161620000000;
    uVar5 = 0x3fb9191920000000;
    uVar4 = 0x3fbc1c1c20000000;
    break;
  case 0x7b:
    uVar6 = 0x3fc6161620000000;
    uVar5 = 0x3fc89898a0000000;
    goto code_r0x00010b887858;
  case 0x7c:
    uVar6 = 0x3fd0d0d0e0000000;
    uVar5 = 0x3fd29292a0000000;
    uVar4 = 0x3fd5151520000000;
    break;
  case 0x7e:
    uVar6 = 0x3fd9595960000000;
    uVar5 = 0x3fdb5b5b60000000;
    uVar4 = 0x3fde1e1e20000000;
    break;
  case 0x7f:
    uVar6 = 0x3fe3535360000000;
    uVar5 = 0x3fe3f3f400000000;
    uVar4 = 0x3fe4f4f500000000;
    break;
  case 0x80:
    uVar6 = 0x3fe5d5d5e0000000;
    uVar5 = 0x3fe6d6d6e0000000;
    uVar4 = 0x3fe7b7b7c0000000;
    break;
  case 0x81:
  case 0x11b:
    uVar6 = 0x3fe7373740000000;
    uVar5 = 0x3fe8181820000000;
    uVar4 = 0x3fe8f8f900000000;
    break;
  case 0x82:
    uVar6 = 0x3fe9d9d9e0000000;
    uVar5 = 0x3fea9a9aa0000000;
    uVar4 = 0x3feb5b5b60000000;
    break;
  case 0x83:
    uVar6 = 0x3febfbfc00000000;
    uVar5 = 0x3fec7c7c80000000;
    uVar4 = 0x3fecfcfd00000000;
    break;
  case 0x84:
    uVar6 = 0x3fed5d5d60000000;
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3fedfdfe00000000;
    break;
  case 0x85:
  case 0xac:
    uVar6 = 0x3feefeff00000000;
    uVar5 = 0x3fef1f1f20000000;
    uVar4 = 0x3fef3f3f40000000;
    break;
  case 0x86:
    uVar5 = 0x3fe2d2d2e0000000;
    uVar4 = 0x3fecbcbcc0000000;
    goto code_r0x00010b887938;
  case 0x87:
    uVar6 = 0x3f90101020000000;
    uVar5 = 0x3fe3d3d3e0000000;
    uVar4 = 0x3feddddde0000000;
    break;
  case 0x89:
    uVar6 = 0x3fd8585860000000;
    uVar5 = 0x3fe9393940000000;
code_r0x00010b8861b4:
    uVar4 = 0x3ff0000000000000;
    break;
  case 0x8a:
    uVar6 = 0x3fe1313140000000;
    uVar5 = 0x3fcb1b1b20000000;
    goto code_r0x00010b887b38;
  case 0x8b:
    uVar6 = 0x3fe2121220000000;
    uVar5 = 0x3fd0d0d0e0000000;
    uVar4 = 0x3fe7d7d7e0000000;
    break;
  case 0x8d:
    uVar6 = 0x3fe8383840000000;
    uVar5 = 0x3fe2b2b2c0000000;
    uVar4 = 0x3febdbdbe0000000;
    break;
  case 0x8e:
    uVar6 = 0x3feb1b1b20000000;
    uVar4 = 0x3fc8181820000000;
code_r0x00010b8876e8:
    uVar5 = 0;
    break;
  case 0x91:
    uVar6 = 0x3feefeff00000000;
    uVar5 = 0x3fdfdfdfe0000000;
    uVar4 = 0x3fe2323240000000;
    break;
  case 0x92:
    uVar5 = 0x3fe4343440000000;
    uVar4 = 0x3fde5e5e60000000;
    goto code_r0x00010b887938;
  case 0x93:
    uVar5 = 0x3fe5151520000000;
    uVar4 = 0x3fe0303040000000;
code_r0x00010b887938:
    uVar6 = 0;
    break;
  case 0x94:
    uVar6 = 0x3f80101020000000;
    uVar5 = 0x3fe6f6f700000000;
    goto code_r0x00010b8871d0;
  case 0x95:
    uVar6 = 0x3fd6565660000000;
    uVar5 = 0x3fea1a1a20000000;
code_r0x00010b887b38:
    uVar4 = 0x3fe6d6d6e0000000;
    break;
  case 0x96:
    uVar6 = 0x3fecbcbcc0000000;
    uVar5 = 0x3fdc9c9ca0000000;
    goto code_r0x00010b886208;
  case 0x97:
    uVar6 = 0x3feddddde0000000;
    uVar5 = 0x3fde9e9ea0000000;
    goto code_r0x00010b886208;
  case 0x98:
    uVar5 = 0x3fe1515160000000;
    goto code_r0x00010b8861cc;
  case 0x99:
    uVar5 = 0x3fe6565660000000;
    uVar4 = 0x3fd5d5d5e0000000;
    goto code_r0x00010b887c78;
  case 0x9a:
    uVar6 = 0x3fecbcbcc0000000;
    uVar5 = 0x3fe8383840000000;
    goto code_r0x00010b886208;
  case 0x9b:
    uVar6 = 0x3feddddde0000000;
    uVar5 = 0x3fe9191920000000;
    uVar4 = 0x3fb3131320000000;
    break;
  case 0x9c:
    uVar5 = 0x3feb1b1b20000000;
    uVar4 = 0x3fcc1c1c20000000;
    goto code_r0x00010b887c78;
  case 0x9d:
    uVar5 = 0x3fecdcdce0000000;
    uVar4 = 0x3fdf1f1f20000000;
    goto code_r0x00010b887c78;
  case 0x9e:
  case 0xd1:
    uVar6 = 0x3fc49494a0000000;
    uVar5 = 0x3fe7b7b7c0000000;
    uVar4 = 0x3fd2525260000000;
    break;
  case 0xa0:
    uVar5 = 0x3fec7c7c80000000;
code_r0x00010b8861cc:
    uVar6 = 0x3ff0000000000000;
    goto code_r0x00010b886208;
  case 0xa2:
    uVar6 = 0x3fe7575760000000;
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3feb1b1b20000000;
    break;
  case 0xa4:
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
code_r0x00010b887de4:
    uVar7 = 0x3fe8000000000000;
    goto code_r0x00010b887c80;
  case 0xa5:
    uVar6 = 0x3fb6161620000000;
    uVar7 = 0x3fe3333333333333;
    uVar5 = 0x3fb9191920000000;
    uVar4 = 0x3fbc1c1c20000000;
    goto code_r0x00010b887c80;
  case 0xa6:
    uVar6 = 0;
    uVar7 = 0x3fe0000000000000;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x00010b887c80;
  case 0xa8:
    uVar5 = 0x3fed5d5d60000000;
    uVar4 = 0x3fedbdbdc0000000;
    uVar6 = 0x3fedfdfe00000000;
    goto code_r0x00010b887a48;
  case 0xaa:
    uVar5 = 0x3fd39393a0000000;
    uVar4 = 0x3fd59595a0000000;
    uVar6 = 0x3fd7d7d7e0000000;
code_r0x00010b88628c:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar5 = 0;
    goto code_r0x00010b8862ac;
  case 0xab:
  case 0xb1:
    uVar6 = 0x3fee3e3e40000000;
    uVar5 = 0x3fee5e5e60000000;
    uVar4 = 0x3fee9e9ea0000000;
code_r0x00010b8865e4:
    func_0x00010bf41620(uVar6,uVar5,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fbe1e1e20000000;
    goto code_r0x00010b8880a4;
  case 0xad:
  case 0xb0:
  case 200:
    uVar6 = 0x3feddddde0000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar6;
    uVar4 = uVar6;
code_r0x00010b887fa4:
    func_0x00010bf41620(uVar6,uVar5,uVar4,uVar7,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fb999999999999a;
    goto code_r0x00010b887fc0;
  case 0xae:
    func_0x00010bf41620(0x3fe7373740000000,0x3fe8181820000000,0x3fe8f8f900000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc1111120000000;
    goto code_r0x00010b8880a4;
  case 0xaf:
  case 0xcd:
    uVar5 = 0x3fd39393a0000000;
    uVar4 = 0x3fd59595a0000000;
    uVar6 = 0x3fd7d7d7e0000000;
    goto code_r0x00010b8875e4;
  case 0xb2:
    uVar6 = 0x3fe89898a0000000;
    uVar5 = 0x3fe0303040000000;
code_r0x00010b886208:
    uVar4 = 0;
    break;
  case 0xb3:
    uVar5 = 0x3fefbfbfc0000000;
    uVar4 = 0x3fe5555560000000;
    goto code_r0x00010b887c78;
  case 0xb4:
    uVar5 = 0x3fefbfbfc0000000;
    uVar4 = 0x3feafafb00000000;
    goto code_r0x00010b887c78;
  case 0xb5:
    uVar5 = 0x3fed3d3d40000000;
    uVar4 = 0x3fe3333340000000;
    goto code_r0x00010b887c78;
  case 0xb6:
    uVar6 = 0x3fe89898a0000000;
    uVar5 = 0x3fdb1b1b20000000;
    uVar4 = 0x3f90101020000000;
    break;
  case 0xb7:
    uVar6 = 0x3fe9797980000000;
    uVar5 = 0x3fe0101020000000;
    uVar4 = 0x3fce1e1e20000000;
    break;
  case 0xb8:
    uVar6 = 0x3fee3e3e40000000;
    uVar5 = 0x3fe9797980000000;
    uVar4 = 0x3fdd5d5d60000000;
    break;
  case 0xbb:
    uVar5 = 0x3fc6161620000000;
    uVar4 = 0x3fc89898a0000000;
    uVar6 = 0x3fcb9b9ba0000000;
    goto code_r0x00010b8876a8;
  case 0xbe:
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fd3333333333333;
code_r0x00010b887fc0:
    uVar4 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x00010b8880b0;
  case 0xbf:
    uVar5 = 0x3fd9595960000000;
    uVar4 = 0x3fdb5b5b60000000;
    uVar6 = 0x3fde1e1e20000000;
code_r0x00010b8875e4:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe3333340000000;
    goto code_r0x00010b8880a4;
  case 0xc0:
    uVar5 = 0x3fe3535360000000;
    uVar4 = 0x3fe3f3f400000000;
    uVar6 = 0x3fe4f4f500000000;
    goto code_r0x00010b887a48;
  case 0xc6:
    uVar5 = 0x3fb6161620000000;
    uVar4 = 0x3fb9191920000000;
    uVar6 = 0x3fbc1c1c20000000;
    goto code_r0x00010b887960;
  case 199:
  case 0xca:
  case 0xcb:
    uVar7 = 0x3fb999999999999a;
code_r0x00010b886844:
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x00010b887c80;
  case 0xc9:
  case 0xcc:
    uVar5 = 0x3fc6161620000000;
    uVar4 = 0x3fc89898a0000000;
    uVar6 = 0x3fcb9b9ba0000000;
code_r0x00010b887960:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3febdbdbe0000000;
    goto code_r0x00010b8880a4;
  case 0xce:
    uVar5 = 0x3fe7373740000000;
    uVar4 = 0x3fe8181820000000;
    uVar6 = 0x3fe8f8f900000000;
code_r0x00010b887a48:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd8585860000000;
code_r0x00010b8880a4:
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar4;
    uVar6 = uVar4;
code_r0x00010b8880b0:
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(uVar4,uVar5,uVar6,uVar7,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_10b885b70(puVar1,puVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    goto LAB_10b8880ec;
  case 0xd2:
    uVar6 = 0x3fee9e9ea0000000;
    uVar5 = 0x3fd8d8d8e0000000;
    uVar4 = 0x3fc3131320000000;
    break;
  case 0xd3:
    uVar5 = 0x3fe7373740000000;
    uVar4 = 0x3fe8181820000000;
    uVar6 = 0x3fe8f8f900000000;
code_r0x00010b8876a8:
    uVar7 = 0x3ff0000000000000;
code_r0x00010b8876ac:
    func_0x00010bf41620(uVar5,uVar4,uVar6,uVar7,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
code_r0x00010b8876c8:
    uVar6 = 0x3ff0000000000000;
    goto code_r0x00010b888020;
  case 0xd6:
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x00010b887c80;
  case 0xd7:
    func_0x00010bf41620(0x3fe7373740000000,0x3fe8181820000000,0x3fe8f8f900000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fdd1d1d20000000;
    uVar5 = 0x3fdd9d9da0000000;
    uVar6 = 0x3fdddddde0000000;
    goto code_r0x00010b888020;
  case 0xd8:
    uVar5 = 0x3fea5a5a60000000;
    uVar4 = 0x3f70101020000000;
    goto code_r0x00010b887c78;
  case 0xd9:
    uVar5 = 0x3fe4141420000000;
    uVar4 = 0x3fd7575760000000;
    uVar6 = 0x3fe9b9b9c0000000;
    goto code_r0x00010b886250;
  case 0xdb:
    uVar6 = 0x3fcb1b1b20000000;
    uVar5 = 0x3fcb9b9ba0000000;
    goto code_r0x00010b887658;
  case 0xde:
  case 0xe9:
    func_0x00010bf41620(0x3fae1e1e20000000,0x3fe5b5b5c0000000,0x3ff0000000000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe3333340000000;
    uVar5 = 0x3febbbbbc0000000;
    goto code_r0x00010b8876c8;
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe7:
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
code_r0x00010b8867bc:
    func_0x00010bf41620(uVar5,uVar5,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fb3131320000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = 0x3fb4141420000000;
    uVar6 = 0x3fb4141420000000;
    goto code_r0x00010b8880b0;
  case 0xe2:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
code_r0x00010b887080:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd9191920000000;
    uVar5 = 0x3fd9595960000000;
    uVar6 = 0x3fd9d9d9e0000000;
    goto code_r0x00010b888020;
  case 0xe3:
    uVar5 = 0x3fe3535360000000;
    uVar4 = 0x3fe3737380000000;
    uVar6 = 0x3fe3b3b3c0000000;
code_r0x00010b887c2c:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe6161620000000;
    uVar5 = 0x3fe6363640000000;
    uVar6 = 0x3fe6565660000000;
    goto code_r0x00010b888020;
  case 0xe4:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
code_r0x00010b886f78:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc5151520000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar4;
    uVar6 = 0x3fc59595a0000000;
    goto code_r0x00010b8880b0;
  case 0xe6:
    uVar5 = 0x3fe8787880000000;
    uVar4 = 0x3fe8b8b8c0000000;
    uVar6 = 0x3fe8f8f900000000;
code_r0x00010b887ff0:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd1111120000000;
    uVar5 = 0x3fd1515160000000;
    uVar6 = 0x3fd19191a0000000;
    goto code_r0x00010b888020;
  case 0xea:
    func_0x00010bf41620(0x3fe3535360000000,0x3fe3737380000000,0x3fe3b3b3c0000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd5151520000000;
    uVar5 = 0x3fd5555560000000;
    uVar6 = 0x3fd5d5d5e0000000;
    goto code_r0x00010b888020;
  case 0xeb:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
code_r0x00010b88773c:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fcb1b1b20000000;
    uVar5 = 0x3fcb9b9ba0000000;
    uVar6 = 0x3fcc1c1c20000000;
    goto code_r0x00010b888020;
  case 0xf0:
    uVar6 = 0x3fd5151520000000;
    uVar5 = 0x3fd5555560000000;
code_r0x00010b8861ec:
    uVar4 = 0x3fd5d5d5e0000000;
    break;
  case 0xf4:
    uVar6 = 0x3fc99999a0000000;
    uVar5 = 0x3fdadadae0000000;
    uVar4 = 0x3fc09090a0000000;
    break;
  case 0xf5:
    uVar6 = 0x3fd5151520000000;
    uVar5 = 0x3fe39393a0000000;
    uVar4 = 0x3fcf1f1f20000000;
    break;
  case 0xf6:
    uVar6 = 0x3fdb1b1b20000000;
    uVar5 = 0x3fe8d8d8e0000000;
    uVar4 = 0x3fd4545460000000;
    break;
  case 0xf7:
    uVar6 = 0x3fe6767680000000;
    uVar5 = 0x3feb7b7b80000000;
    uVar4 = 0x3fd29292a0000000;
    break;
  case 0xf8:
    uVar6 = 0x3fe7d7d7e0000000;
    uVar5 = 0x3fd4545460000000;
    uVar4 = 0x3fc1111120000000;
    break;
  case 0xf9:
    uVar6 = 0x3fec9c9ca0000000;
    uVar5 = 0x3fd9191920000000;
    goto code_r0x00010b88756c;
  case 0xfa:
    uVar6 = 0x3fef9f9fa0000000;
    uVar5 = 0x3fe0b0b0c0000000;
    uVar4 = 0x3fd3d3d3e0000000;
    break;
  case 0xfb:
    uVar6 = 0x3fee9e9ea0000000;
    uVar5 = 0x3fe6f6f700000000;
    uVar4 = 0x3fdb5b5b60000000;
    break;
  case 0xfc:
    uVar6 = 0x3fe4747480000000;
    uVar5 = 0x3fc0101020000000;
    uVar4 = 0x3fb8181820000000;
    break;
  case 0xfd:
    uVar6 = 0x3fe8d8d8e0000000;
    uVar5 = 0x3fc49494a0000000;
code_r0x00010b887858:
    uVar4 = 0x3fcb9b9ba0000000;
    break;
  case 0xfe:
    uVar6 = 0x3febfbfc00000000;
    uVar5 = 0x3fd3131320000000;
    goto code_r0x00010b8874a4;
  case 0xff:
    uVar5 = 0x3fd9d9d9e0000000;
    uVar4 = 0x3fdddddde0000000;
    goto code_r0x00010b887c78;
  case 0x100:
    uVar6 = 0x3fc5151520000000;
    uVar5 = 0x3fcf1f1f20000000;
code_r0x00010b8871d0:
    uVar4 = 0x3fe2121220000000;
    break;
  case 0x101:
    uVar6 = 0x3fc59595a0000000;
    uVar5 = 0x3fd3535360000000;
    uVar4 = 0x3feadadae0000000;
    break;
  case 0x102:
    uVar6 = 0x3fd4545460000000;
    uVar5 = 0x3fdc9c9ca0000000;
    uVar4 = 0x3fee7e7e80000000;
    break;
  case 0x103:
    uVar6 = 0x3fd3d3d3e0000000;
    uVar5 = 0x3fe5555560000000;
    uVar4 = 0x3fef1f1f20000000;
    break;
  case 0x104:
    uVar6 = 0x3fd7171720000000;
    uVar5 = 0x3fc5151520000000;
    uVar4 = 0x3fe0101020000000;
    break;
  case 0x105:
    uVar6 = 0x3fdfdfdfe0000000;
    uVar5 = 0x3fcd9d9da0000000;
    uVar4 = 0x3fe6161620000000;
    break;
  case 0x106:
    uVar6 = 0x3fe5f5f600000000;
    uVar5 = 0x3fd7171720000000;
    uVar4 = 0x3fed7d7d80000000;
    break;
  case 0x107:
    uVar6 = 0x3fe9191920000000;
    uVar5 = 0x3fe2121220000000;
    uVar4 = 0x3fee3e3e40000000;
    break;
  case 0x108:
    uVar6 = 0x3fe1d1d1e0000000;
    uVar5 = 0x3fbd1d1d20000000;
    uVar4 = 0x3fd6565660000000;
    break;
  case 0x109:
    uVar6 = 0x3fe5f5f600000000;
    uVar5 = 0x3fc2121220000000;
    uVar4 = 0x3fdb9b9ba0000000;
    break;
  case 0x10a:
    uVar6 = 0x3fea5a5a60000000;
    uVar5 = 0x3fcb1b1b20000000;
    uVar4 = 0x3fe1313140000000;
    break;
  case 0x10b:
    uVar6 = 0x3fef5f5f60000000;
    uVar5 = 0x3fdb9b9ba0000000;
    uVar4 = 0x3fe7171720000000;
    break;
  case 0x10c:
    uVar6 = 0x3fc49494a0000000;
    uVar5 = 0x3fdb1b1b20000000;
code_r0x00010b8874a4:
    uVar4 = 0x3fd6d6d6e0000000;
    break;
  case 0x10d:
    uVar6 = 0x3fcb1b1b20000000;
    uVar5 = 0x3fe1b1b1c0000000;
    uVar4 = 0x3fdddddde0000000;
    break;
  case 0x10e:
    uVar6 = 0x3fc6161620000000;
    uVar5 = 0x3fe6f6f700000000;
    uVar4 = 0x3fe29292a0000000;
    break;
  case 0x10f:
    uVar6 = 0x3fe0b0b0c0000000;
    uVar5 = 0x3fe99999a0000000;
    uVar4 = 0x3fe7575760000000;
    break;
  case 0x110:
    uVar6 = 0x3fdb1b1b20000000;
    uVar5 = 0x3fd0505060000000;
code_r0x00010b88756c:
    uVar4 = 0x3fc49494a0000000;
    break;
  case 0x111:
    uVar6 = 0x3fe3131320000000;
    uVar5 = 0x3fd6d6d6e0000000;
code_r0x00010b887658:
    uVar4 = 0x3fcc1c1c20000000;
    break;
  case 0x112:
    uVar6 = 0x3fe9f9fa00000000;
    uVar5 = 0x3fdededee0000000;
    uVar4 = 0x3fd3131320000000;
    break;
  case 0x113:
    uVar5 = 0x3fe5b5b5c0000000;
    uVar4 = 0x3fe0101020000000;
code_r0x00010b887c78:
    uVar6 = 0x3ff0000000000000;
    break;
  case 0x115:
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0x3fe8000000000000;
    goto code_r0x00010b8876ac;
  case 0x116:
    uVar6 = 0x3fd9191920000000;
    uVar5 = 0x3fd9595960000000;
    uVar4 = 0x3fd9d9d9e0000000;
    break;
  case 0x11c:
    func_0x00010bf41620(0x3feafafb00000000,0x3fee5e5e60000000,0x3ff0000000000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3f70101020000000;
    uVar5 = 0x3fcb1b1b20000000;
    uVar6 = 0x3fda9a9aa0000000;
    goto code_r0x00010b888020;
  case 0x11d:
    func_0x00010bf41620(0x3f70101020000000,0x3fcb1b1b20000000,0x3fda9a9aa0000000,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3feafafb00000000;
    uVar5 = 0x3fee5e5e60000000;
    goto code_r0x00010b8876c8;
  case 0x11e:
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
code_r0x00010b886250:
    func_0x00010bf41620(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3fef9f9fa0000000;
    uVar4 = 0x3ff0000000000000;
code_r0x00010b8862ac:
    uVar6 = 0;
code_r0x00010b888020:
    uVar7 = 0x3ff0000000000000;
    goto code_r0x00010b8880b0;
  default:
    puVar3 = (undefined *)0x0;
    goto LAB_10b8880ec;
  }
  uVar7 = 0x3ff0000000000000;
code_r0x00010b887c80:
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(uVar6,uVar5,uVar4,uVar7,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
LAB_10b8880ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b888104; end: 10b888113; +[SIGTypography attributesWithStyle:alignment:lineBreakMode:] */

void FUN_10b888104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_attributesWithStyle_modifiers_al_1125a13d8,param_3,0,param_4,param_5);
  return;
}



/* Entry: 10b888114; end: 10b88811b; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:] */

void FUN_10b888114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributesWithStyle_modifiers_al_1125a13e0);
  return;
}



/* Entry: 10b88811c; end: 10b888127; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:scaleForAccessibility:] */

void FUN_10b88811c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_attributesWithStyle_modifiers_al_1125a13e8)
  ;
  return;
}



/* Entry: 10b888128; end: 10b888a27; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:scaleForAccessibility:maximumFontSize:compatibleWithTraitCollection:preferredVariableFontName:weightPercent:widthPercent:onReady:onFailure:] */

void FUN_10b888128(double param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 in_x7;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long lStack_118;
  long lStack_e8;
  undefined8 uStack_d8;
  double dStack_d0;
  double dStack_c8;
  uint uStack_b9;
  undefined1 uStack_b5;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  double dVar23;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  func_0x00010bf0e900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = in_stack_00000000;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_retain(param_2);
    goto LAB_10b8889a4;
  }
  uVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102de0();
  lVar2 = in_stack_00000000;
  dVar24 = param_1;
  _CTFontCreateWithName(in_stack_00000000,0);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar2 == 0) {
joined_r0x00010b8882b8:
    PTR__OBJC_CLASS___NSError_1126ae858 = puVar6;
    if (in_stack_00000020 != 0) {
      func_0x00010bf99240(puVar6);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar6);
      _objc_release(puVar6);
    }
LAB_10b888334:
    _objc_retain(param_2);
  }
  else {
    lVar4 = lVar2;
    _CTFontCopyVariationAxes();
    if (lVar4 == 0) {
LAB_10b8882dc:
      _CFRelease(lVar2);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (in_stack_00000008 != 0 || in_stack_00000010 != 0) goto joined_r0x00010b8882b8;
      goto LAB_10b888334;
    }
    lVar18 = lVar4;
    _CFArrayGetCount();
    if (lVar18 == 0) {
      _CFRelease(lVar4);
      goto LAB_10b8882dc;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110f97a78;
    func_0x00010c08fa60();
    if (ppuVar5 < (undefined **)0x4) {
      uVar21 = 0;
    }
    else {
      lVar18 = 0;
      uVar21 = 0;
      do {
        uVar20 = 0x10f97a78;
        func_0x00010bf35920();
        uVar21 = uVar20 & 0xff | uVar21 << 8;
        lVar18 = lVar18 + 1;
      } while (lVar18 != 4);
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110f97a98;
    func_0x00010c08fa60();
    if (ppuVar5 < (undefined **)0x4) {
      uVar20 = 0;
    }
    else {
      lVar18 = 0;
      uVar20 = 0;
      do {
        uVar1 = 0x10f97a98;
        func_0x00010bf35920();
        uVar20 = uVar1 & 0xff | uVar20 << 8;
        lVar18 = lVar18 + 1;
      } while (lVar18 != 4);
    }
    lVar18 = lVar4;
    _CFArrayGetCount();
    if (lVar18 < 1) {
      lStack_118 = 0;
      lStack_e8 = 0;
      dVar26 = 0.0;
      dVar25 = 0.0;
      dVar28 = 0.0;
      dVar27 = 0.0;
    }
    else {
      lStack_e8 = 0;
      lStack_118 = 0;
      lVar19 = 0;
      uVar17 = *(undefined8 *)PTR__kCTFontVariationAxisMinimumValueKey_11034a110;
      uVar15 = *(undefined8 *)PTR__kCTFontVariationAxisMaximumValueKey_11034a108;
      uVar16 = *(undefined8 *)PTR__kCTFontVariationAxisDefaultValueKey_11034a0f8;
      dVar27 = 0.0;
      dVar28 = 0.0;
      dVar25 = 0.0;
      dVar26 = 0.0;
      do {
        lVar10 = lVar4;
        _CFArrayGetValueAtIndex(lVar4,lVar19);
        if ((lVar10 != 0) && (lVar7 = lVar10, _CFDictionaryGetValue(), lVar7 != 0)) {
          uStack_b4 = 0;
          _CFNumberGetValue();
          uStack_b5 = 0;
          uVar1 = (uStack_b4 & 0xff00ff00) >> 8 | (uStack_b4 & 0xff00ff) << 8;
          uStack_b9 = uVar1 >> 0x10 | uVar1 << 0x10;
          ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc();
          func_0x00010bffa180();
          dStack_d0 = 0.0;
          dStack_c8 = 0.0;
          ppuVar5 = &PTR____CFConstantStringClassReference_110f97ab8;
          if (ppuVar8 != (undefined **)0x0) {
            ppuVar5 = ppuVar8;
          }
          uStack_d8 = 0;
          lVar7 = lVar10;
          _CFDictionaryGetValue(lVar10,uVar17);
          lVar9 = lVar10;
          _CFDictionaryGetValue(lVar10,uVar15);
          _CFDictionaryGetValue(lVar10,uVar16);
          if (lVar7 != 0) {
            _CFNumberGetValue(lVar7,0x10,&dStack_c8);
          }
          if (lVar9 != 0) {
            _CFNumberGetValue(lVar9,0x10,&dStack_d0);
          }
          if (lVar10 != 0) {
            _CFNumberGetValue(lVar10,0x10,&uStack_d8);
          }
          if (uStack_b4 == uVar21) {
            lVar10 = 0;
            _CFNumberCreate(0,3,&uStack_b4);
            _objc_release(lStack_e8);
            dVar27 = dStack_c8;
            dVar28 = dStack_d0;
            lStack_e8 = lVar10;
          }
          else if (uStack_b4 == uVar20) {
            lVar10 = 0;
            _CFNumberCreate(0,3,&uStack_b4);
            _objc_release(lStack_118);
            dVar25 = dStack_c8;
            dVar26 = dStack_d0;
            lStack_118 = lVar10;
          }
          _objc_release(ppuVar5);
        }
        lVar19 = lVar19 + 1;
      } while (lVar18 != lVar19);
    }
    _CFRelease(lVar4);
    _CFRelease(lVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    if (in_stack_00000008 == 0 || lStack_e8 == 0) {
      if (((in_stack_00000020 != 0) && (in_stack_00000008 != 0)) && (lStack_e8 == 0)) {
        puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar11);
        goto LAB_10b8886b4;
      }
    }
    else {
      func_0x00010bf885a0(in_stack_00000008);
      dVar22 = 100.0;
      if (dVar24 <= 100.0) {
        dVar22 = dVar24;
      }
      dVar23 = 0.0;
      if (0.0 <= dVar24) {
        dVar23 = dVar22 / 100.0;
      }
      dVar22 = dVar27 + dVar23 * (dVar28 - dVar27);
      if (dVar22 <= dVar28) {
        dVar28 = dVar22;
      }
      dVar24 = dVar27;
      if (dVar27 <= dVar22) {
        dVar24 = dVar28;
      }
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
LAB_10b8886b4:
      _objc_release(puVar11);
    }
    if ((in_stack_00000010 == 0) || (lStack_118 == 0)) {
      if ((in_stack_00000020 != 0) && ((in_stack_00000010 != 0 && (lStack_118 == 0)))) {
        puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar11);
        _objc_release(puVar11);
      }
      if (in_stack_00000008 != 0 && lStack_e8 != 0) goto LAB_10b888788;
      _objc_retain(param_2);
    }
    else {
      func_0x00010bf885a0(in_stack_00000010);
      dVar28 = 100.0;
      if (dVar24 <= 100.0) {
        dVar28 = dVar24;
      }
      dVar27 = 0.0;
      if (0.0 <= dVar24) {
        dVar27 = dVar28 / 100.0;
      }
      dVar24 = dVar25 + dVar27 * (dVar26 - dVar25);
      if (dVar24 <= dVar26) {
        dVar26 = dVar24;
      }
      if (dVar25 <= dVar24) {
        dVar25 = dVar26;
      }
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar25,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar11);
LAB_10b888788:
      puVar11 = PTR__OBJC_CLASS___UIFontDescriptor_1126bb390;
      func_0x00010bfb3d40(param_1,PTR__OBJC_CLASS___UIFontDescriptor_1126bb390);
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = *(undefined8 *)PTR__kCTFontVariationAttribute_11034a0e8;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a8 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar11;
      func_0x00010bfb3d00(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar12);
      puVar11 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bfb4160(param_1);
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 == (undefined *)0x0) {
        if (in_stack_00000020 != 0) {
          puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar12);
          _objc_release(puVar12);
        }
        _objc_retain(param_2);
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
        func_0x00010bf69e80(PTR__OBJC_CLASS___NSParagraphStyle_1126af948);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010c0d3c80();
        _objc_release(puVar12);
        func_0x00010c166c00(puVar14);
        func_0x00010c1bdb00(puVar14);
        uVar15 = param_2;
        func_0x00010c0d3c80(param_2);
        func_0x00010c1d0640();
        func_0x00010c1d0640(uVar15);
        if (in_stack_00000018 != 0) {
          uVar16 = uVar15;
          func_0x00010bf51e00(uVar15);
          (**(code **)(in_stack_00000018 + 0x10))(in_stack_00000018,uVar16);
          _objc_release(uVar16);
        }
        _objc_retain(param_2);
        _objc_release(uVar15);
        _objc_release(puVar14);
      }
      _objc_release(puVar11);
      _objc_release(puVar13);
    }
    _objc_release(puVar6);
    _objc_release(lStack_118);
    _objc_release(lStack_e8);
  }
  _objc_release(uVar3);
LAB_10b8889a4:
  _objc_release(param_2);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b888a28; end: 10b888a83;  */

void FUN_10b888a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sig_attributedStringWithStyle_al_11266c8a0,param_3,4);
  return;
}



/* Entry: 10b888a84; end: 10b888b67;  */

void FUN_10b888a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  func_0x00010c0d3c80(param_2);
  puVar1 = PTR_PTR_1126c4e78;
  func_0x00010bf0e900(param_1,PTR_PTR_1126c4e78,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar2 = param_2;
  func_0x00010c08fa60(param_2);
  func_0x00010bef6f40(param_2,param_3,puVar1,0,uVar2);
  uVar2 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b888b68; end: 10b888bc3;  */

void FUN_10b888b68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  func_0x00010bfc9760(param_1,param_2,&dStack_18,&dStack_20,&dStack_28,&uStack_30);
  func_0x00010bf41620(1.0 - dStack_18,1.0 - dStack_20,1.0 - dStack_28,uStack_30,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b888bc4; end: 10b888c93;  */

void FUN_10b888bc4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  puVar1 = param_1;
  func_0x00010bfc63e0(param_1,param_2,&uStack_40,&uStack_48,&dStack_38,&uStack_50);
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010bfc9760(param_1,param_2,&dStack_28,&dStack_30,&dStack_38,&uStack_50);
    if ((int)puVar1 == 0) {
      _objc_retain(param_1);
    }
    else {
      param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41620(dStack_28 * 0.9,dStack_30 * 0.9,dStack_38 * 0.9,uStack_50,
                          PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf415e0(uStack_40,uStack_48,dStack_38 * 0.9,uStack_50,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b888c94; end: 10b888cdf;  */

void FUN_10b888c94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 >> 0x20 == 0) {
    func_0x00010bf415a0((double)(param_3 >> 0x18) / 255.0,PTR__OBJC_CLASS___UIColor_1126aea70,
                        param_2,param_3 & 0xffffff);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b888ce0; end: 10b888df7;  */

void FUN_10b888ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uStack_34;
  
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c082c40(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_3);
  if ((int)puVar4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf35920(param_3,param_2,0);
    uVar2 = param_3;
    if ((int)uVar1 == 0x23) {
      func_0x00010c260c00(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    uStack_34 = 0;
    puVar3 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6320();
    func_0x00010c14ec80(puVar3,param_2,&uStack_34);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620((double)(uStack_34 >> 0x10 & 0xff) / 255.0,
                        (double)(uStack_34 >> 8 & 0xff) / 255.0,(double)(uStack_34 & 0xff) / 255.0,
                        0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    param_3 = uVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b888df8; end: 10b888f7f;  */

void FUN_10b888df8(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c25cfc0(param_4,param_3,&PTR____CFConstantStringClassReference_110f27e18,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = lVar1;
  if ((lVar2 != 0) && (lVar2 = lVar1, func_0x00010bf35920(lVar1,param_3,0), (int)lVar2 == 0x23)) {
    func_0x00010c260c00(lVar1,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 6) {
    func_0x00010bf415c0(param_2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = lVar3;
    func_0x00010c08fa60();
    if (lVar1 == 8) {
      func_0x00010bf40da0(param_2,param_3,lVar3,0,2);
      uVar4 = param_1;
      func_0x00010bf40da0(param_2,param_3,lVar3,2,2);
      uVar5 = uVar4;
      func_0x00010bf40da0(param_2,param_3,lVar3,4,2);
      uVar6 = uVar5;
      func_0x00010bf40da0(param_2,param_3,lVar3,6,2);
      param_2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41620(uVar4,uVar5,uVar6,param_1,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_2 = (undefined *)0x0;
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b888f80; end: 10b88906b;  */

double FUN_10b888f80(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                    long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  double dVar4;
  uint uStack_44;
  
  func_0x00010c260c80(param_3,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 2) {
    _objc_retain();
    ppuVar3 = param_3;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar3 = ppuVar1;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ec80();
  _objc_release(puVar2);
  dVar4 = (double)NEON_ucvtf((ulong)uStack_44);
  _objc_release(ppuVar3);
  _objc_release(param_3);
  return dVar4 / 255.0;
}



/* Entry: 10b88906c; end: 10b889103;  */

undefined * FUN_10b88906c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 6) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110db3198);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf99aa0();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b889104; end: 10b8892e7;  */

void FUN_10b889104(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long alStack_c0 [5];
  long lStack_98;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfc9760(param_1,param_2,auStack_48,auStack_40,auStack_38,auStack_30);
  if ((int)param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0b178;
  }
  else {
    _asprintf(&lStack_50,&UNK_10f7c0849);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8e0();
    _objc_retainAutoreleasedReturnValue();
    _free();
    param_1 = lStack_50;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010bfc9760();
    if ((int)param_1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f97ad8;
    }
    else {
      _asprintf(alStack_c0,&UNK_10f7c0862);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _free();
      param_1 = alStack_c0[0];
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      if (param_1 != 0) {
        func_0x00010bfc9760();
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b8892e8; end: 10b8893c7;  */

uint FUN_10b8892e8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_30 [8];
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  uVar1 = 0;
  if (param_1 != 0) {
    func_0x00010bfc9760(param_1,param_2,&dStack_18,&dStack_20,&dStack_28,auStack_30);
    uVar1 = (int)(dStack_20 * 255.0) << 8 ^ (int)(dStack_18 * 255.0) << 0x10 ^
            (int)(dStack_28 * 255.0);
  }
  return uVar1;
}



/* Entry: 10b8893c8; end: 10b889857;  */

void FUN_10b8893c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x94);
  return;
}



/* Entry: 10b889858; end: 10b8898ab;  */

void FUN_10b889858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1950;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010c1caf60(param_2);
  func_0x00010c21e960(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8898ac; end: 10b88991f;  */

void FUN_10b8898ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf04c80(uVar1);
  _objc_opt_class(PTR_PTR_1126e1950);
  func_0x00010c1caf60(param_2);
  func_0x00010c292b20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c21e960(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b889920; end: 10b889967;  */

void FUN_10b889920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1950;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010c1caf60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b889968; end: 10b8899a7;  */

bool FUN_10b889968(long param_1)

{
  if (lRam00000001138466f0 == 2) {
    return true;
  }
  if (lRam00000001138466f0 == 0) {
    func_0x000107c30a98();
    return param_1 == 3;
  }
  return false;
}



/* Entry: 10b8899a8; end: 10b889a0f;  */

bool FUN_10b8899a8(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (lRam00000001138466f0 < 3) {
    bVar1 = false;
  }
  else {
    lVar2 = lRam00000001138466f0;
    func_0x000107c30a90();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c292b20(lVar2);
      bVar1 = lVar3 == 2;
    }
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 10b889a10; end: 10b889aa3;  */

bool FUN_10b889a10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (pcRam00000001137fbf80 == (code *)0x0) {
    func_0x00010c279540(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    (*pcRam00000001137fbf80)(puVar1,PTR_s_traitCollection_11267bf78);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c292b20();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3 == (undefined *)0x2;
}



/* Entry: 10b889aa4; end: 10b889aab; -[AppTheme baseThemeId] */

undefined8 FUN_10b889aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b889aac; end: 10b889ab3; -[AppTheme backgroundImageURL] */

undefined8 FUN_10b889aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b889ab4; end: 10b889abb; -[AppTheme pullToRefreshThemeGhostImageName] */

undefined8 FUN_10b889ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b889abc; end: 10b889ac3; -[AppTheme pullToRefreshThemeGhostWinkImageName] */

undefined8 FUN_10b889abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b889ac4; end: 10b889acb; -[AppTheme pullToRefreshThemeBackgroundImageName] */

undefined8 FUN_10b889ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b889acc; end: 10b889b2b; -[AppTheme .cxx_destruct] */

void FUN_10b889acc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b889b2c; end: 10b889b37;  */

void FUN_10b889b2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dfed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setPreferredContentSizeCategory__1126559d8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b889b38; end: 10b889bd7;  */

void FUN_10b889b38(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010c29cb00();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,&UNK_10f7c1733,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b889bd8; end: 10b889d2f;  */

void FUN_10b889bd8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)PTR__UIContentSizeCategoryLarge_110345b68;
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_3;
  func_0x00010c1069c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bdce420(param_1,param_2,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == puVar2) {
    _objc_release(puVar3);
  }
  else {
    _objc_release(param_3);
    _objc_release(puVar3);
    param_3 = puVar4;
    if ((puVar2 != (undefined *)0x0) &&
       (puVar2 != *(undefined **)PTR__UIContentSizeCategoryUnspecified_110345b80)) {
      func_0x00010bdce420(param_1,param_2,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      param_3 = param_1;
    }
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b889d30; end: 10b889dbf;  */

void FUN_10b889d30(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  if (lVar1 == param_4) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c2795e0(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b889dc0; end: 10b889ddb;  */

void FUN_10b889dc0(undefined1 param_1)

{
  func_0x00010b88a4c8();
  uRam00000001137fbfd1 = param_1;
  return;
}



/* Entry: 10b889ddc; end: 10b889de7;  */

undefined8 FUN_10b889ddc(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  iVar1 = 0;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    param_1 = 2;
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
        param_1 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return param_1;
}



/* Entry: 10b889de8; end: 10b889f0b;  */

undefined8 FUN_10b889de8(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = param_1;
  _objc_retain();
  iVar1 = (int)puVar2;
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    param_2 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = param_1;
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
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c252de0();
        _objc_release(puVar2);
      }
      else {
        puVar3 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar3 + -1 < (undefined *)0x4) {
        param_2 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar3 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(param_1);
  return param_2;
}



/* Entry: 10b889f0c; end: 10b889f13; +[SCLocalTweakActionDispenser shared] */

undefined8 FUN_10b889f0c(void)

{
  return 0;
}



/* Entry: 10b889f14; end: 10b889f2b; -[SCLocalTweakActionDispenser initWithTweakStore:] */

undefined8 FUN_10b889f14(void)

{
  _objc_release();
  return 0;
}



/* Entry: 10b889f2c; end: 10b889f33; -[SCLocalTweakActionDispenser dispenseLocalTweakActionWithCategory:collection:name:action:] */

undefined8 FUN_10b889f2c(void)

{
  return 0;
}



/* Entry: 10b889f34; end: 10b889f37; -[SCLocalTweakActionDispenser _addAction:category:collection:name:] */

void FUN_10b889f34(void)

{
  return;
}



/* Entry: 10b889f38; end: 10b889f3b; -[SCLocalTweakActionDispenser _removeAction:category:collection:name:] */

void FUN_10b889f38(void)

{
  return;
}



/* Entry: 10b889f3c; end: 10b889f3f; -[SCLocalTweakActionDispenser _tweakDidFireForIdentifier:] */

void FUN_10b889f3c(void)

{
  return;
}



/* Entry: 10b889f40; end: 10b889f6f; -[SCLocalTweakActionDispenser .cxx_destruct] */

void FUN_10b889f40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b889f70; end: 10b889f87; -[SCLocalTweakActionToken initWithOnDealloc:] */

undefined8 FUN_10b889f70(void)

{
  _objc_release();
  return 0;
}



/* Entry: 10b889f88; end: 10b889fbb; -[SCLocalTweakActionToken dealloc] */

void FUN_10b889f88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270b810;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b889fbc; end: 10b889fd7; -[SCLocalTweakActionToken .cxx_destruct] */

void FUN_10b889fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b889fd8; end: 10b88a02b; +[SCTweakHaltObserver sharedObserver] */

void FUN_10b889fd8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbff0 != -1) {
    func_0x000107c27d9c(0x1137fbff0,&PTR___NSConcreteGlobalBlock_110d662d8);
  }
  uVar1 = uRam00000001137fbff8;
  _objc_retain(uRam00000001137fbff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b88a02c; end: 10b88a057;  */

void FUN_10b88a02c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ba108;
  _objc_alloc_init();
  uVar1 = puRam00000001137fbff8;
  puRam00000001137fbff8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b88a058; end: 10b88a0df; -[SCTweakHaltObserver tweakDidChange:] */

void FUN_10b88a058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10b88a0e0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b88a0e0; end: 10b88a0eb;  */

void FUN_10b88a0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentHaltAlert__11257c898,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b88a0ec; end: 10b88a0ef; -[SCTweakHaltObserver _presentHaltAlert:] */

void FUN_10b88a0ec(void)

{
  return;
}



/* Entry: 10b88a0f0; end: 10b88a0f7; -[SCTweakHaltObserver _onAlertDismissed] */

void FUN_10b88a0f0(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b88a0f8; end: 10b88a16b; -[SCTweakHaltObserver _onRestartAction] */

void FUN_10b88a0f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
    _exit();
    _objc_sync_exit(param_1);
    lVar1 = param_3;
    __Unwind_Resume();
    _objc_retain(lVar1);
    _objc_retain(lVar2);
    _objc_sync_enter(lVar2);
    lVar3 = lVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(lVar2 + 8);
    *(long *)(lVar2 + 8) = lVar3;
    _objc_release(uVar4);
    _objc_sync_exit(lVar2);
    _objc_release(lVar2);
  }
  else {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b88a16c; end: 10b88a1e3; -[SCTweakHaltObserver overrideExitImplementation:] */

void FUN_10b88a16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b88a1e4; end: 10b88a1ef; -[SCTweakHaltObserver .cxx_destruct] */

void FUN_10b88a1e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b88a1f0; end: 10b88a7a7;  */

undefined1 FUN_10b88a1f0(void)

{
  if (lRam00000001137fc068 != -1) {
    func_0x000107c27d9c(0x1137fc068,&PTR___NSConcreteGlobalBlock_110d66318);
  }
  return uRam00000001137fc001;
}



/* Entry: 10b88a7a8; end: 10b88a7b3;  */

void FUN_10b88a7a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfca250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b7870,PTR_s_getSetOfAppStartExperimentReader_1125d0238);
  return;
}



/* Entry: 10b88a7b4; end: 10b88a817; -[SCAppStartExperimentReader updateConfigResults:] */

void FUN_10b88a7b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010be15f60();
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x6a) = 1;
  _os_unfair_lock_lock(param_1 + 0x6c);
  uVar1 = lRam00000001137fc1d8;
  lRam00000001137fc1d8 = lVar2;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x6c);
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return;
}



/* Entry: 10b88a818; end: 10b88a86f; -[SCAppStartExperimentReader unexposedIntValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_10b88a818(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bee7e40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x00010c067ec0(param_1);
  }
  _objc_release(param_1);
  return param_4;
}



/* Entry: 10b88a870; end: 10b88a93f; -[SCAppStartExperimentReader setExperimentLogger_DO_NOT_USE:configMetric:] */

void FUN_10b88a870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010bf0abc0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x20),param_2,
                      *(undefined1 *)(param_1 + 0x68));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b88a940;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b88a940; end: 10b88a947;  */

void FUN_10b88a940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be06410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__drainLogQueues_11255f2a0);
  return;
}



/* Entry: 10b88a948; end: 10b88aaf3; -[SCAppStartExperimentReader _drainLogQueues] */

void FUN_10b88a948(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_190,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_180;
    do {
      lVar9 = 0;
      do {
        if (*plStack_180 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010be52ea0(param_1,param_2,*(undefined8 *)(lStack_188 + lVar9 * 8),0);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_190,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_1d0,auStack_148,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_1c0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1c0 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010be51d40(param_1,param_2,*(undefined8 *)(lStack_1c8 + lVar9 * 8));
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_1d0,auStack_148,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b7870;
    func_0x00010bfc4300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0dff20(puVar3,param_2,*(undefined8 *)(lVar2 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar7);
    if (puVar4 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar7);
      puVar5 = PTR_PTR_1126e1968;
      _objc_alloc();
      func_0x00010c008360();
      puVar7 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar7);
      puVar7 = puVar5;
      func_0x00010bfd5920();
      if ((int)puVar7 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar5;
        func_0x00010bf46300(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bddd8e0(lVar2,param_2,puVar7);
        _objc_release(puVar7);
        _objc_retain(puVar5);
        puVar7 = puVar5;
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  return;
}



/* Entry: 10b88aaf4; end: 10b88aceb; -[SCAppStartExperimentReader _readSharedDefaultsRecoveryResponse] */

void FUN_10b88aaf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b7870;
  func_0x00010bfc4300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0dff20(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126e1968;
    _objc_alloc();
    func_0x00010c008360();
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bfd5920();
    if ((int)puVar4 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar3;
      func_0x00010bf46300(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddd8e0(param_1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b88acec; end: 10b88ad03;  */

void FUN_10b88acec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b88ad04; end: 10b88adbf;  */

void FUN_10b88ad04(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7848;
  if (param_3 == 0) {
    _objc_retain(param_2);
    _objc_alloc();
    func_0x00010c008360();
    _objc_release(param_2);
    param_3 = 0;
    _objc_retain(0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
      func_0x00010bddd8e0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
  return;
}



/* Entry: 10b88adc0; end: 10b88b0df; -[SCAppStartExperimentReader _mergeDictionary:withTargetingResponse:protectedWrite:] */

void FUN_10b88adc0(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iStack_144;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    puVar2 = param_3;
    func_0x00010c0d3c80();
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = param_4;
  func_0x00010bf46260();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    iVar1 = 0;
    iStack_144 = 0;
  }
  else {
    iVar1 = 0;
    iStack_144 = 0;
    lVar16 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(lVar4);
        }
        lVar15 = *(long *)(lStack_128 + lVar17 * 8);
        _objc_retain(lVar15);
        _objc_retain(uVar3);
        _objc_retain(param_3);
        lVar6 = lVar15;
        func_0x00010bf45ee0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010bf4b900(uVar3,param_2,lVar6);
        _objc_release(lVar6);
        if (((int)param_5 == 0) || ((int)uVar7 == 0)) {
          _objc_release(param_3);
          _objc_release(uVar3);
          _objc_release(lVar15);
          if ((int)uVar7 != 0) goto LAB_10b88af84;
        }
        else {
          lVar6 = lVar15;
          func_0x00010bf45ee0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = param_3;
          func_0x00010c0dff20(param_3,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          _objc_release(param_3);
          _objc_release(uVar3);
          _objc_release(lVar15);
          if (puVar8 == (undefined *)0x0) {
            iStack_144 = iStack_144 + 1;
          }
          else {
LAB_10b88af84:
            lVar6 = lVar15;
            func_0x00010bf6ce60();
            if ((int)lVar6 == 0) {
              lVar6 = param_1;
              func_0x00010bded0a0(param_1,param_2,lVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf45ee0(lVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(puVar2,param_2,lVar6,lVar15);
              _objc_release(lVar15);
            }
            else {
              func_0x00010bf45ee0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(puVar2,param_2,lVar15);
              lVar6 = lVar15;
            }
            _objc_release(lVar6);
            iVar1 = iVar1 + 1;
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar5 != lVar17);
      lVar5 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  func_0x00010bf3f5a0(*(undefined8 *)(param_1 + 0x20),param_2,
                      &PTR____CFConstantStringClassReference_110f9f3d8,iVar1,iStack_144,param_5);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc();
  puVar12 = puVar2;
  func_0x00010c00c560();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar12);
  puVar2 = puVar12;
  func_0x00010c25df20(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf9c4e0();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar8 = puVar12;
  func_0x00010c1425c0(puVar12);
  func_0x00010c0df6e0(puVar10,param_2,(int)puVar8 != 2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar12,param_2,puVar2,&PTR____CFConstantStringClassReference_110e6e738);
  func_0x00010c1d0560(puVar12,param_2,puVar10,&PTR____CFConstantStringClassReference_110f98bf8);
  puVar13 = puVar11;
  func_0x00010c0870e0();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar1 = (int)puVar13;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      puVar13 = puVar11;
      func_0x00010c067ec0(puVar11);
      func_0x00010c0df760(puVar8,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_110d66988;
      goto LAB_10b88b2dc;
    }
    if (iVar1 == 2) {
      puVar13 = puVar11;
      func_0x00010c0b4fe0(puVar11);
      func_0x00010c0df7a0(puVar8,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_110d66998;
      goto LAB_10b88b2dc;
    }
  }
  else {
    if (iVar1 == 3) {
      func_0x00010bfb2c80(puVar11);
      func_0x00010c0df740(puVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_110d66990;
    }
    else {
      if (iVar1 != 4) goto LAB_10b88b2f4;
      puVar13 = puVar11;
      func_0x00010bf1f3c0(puVar11);
      func_0x00010c0df6e0(puVar8,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR_PTR_110d66980;
    }
LAB_10b88b2dc:
    func_0x00010c1d0560(puVar12,param_2,puVar8,*ppuVar14);
    _objc_release(puVar8);
  }
LAB_10b88b2f4:
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c00c560();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b88b0e0; end: 10b88b34f; -[SCAppStartExperimentReader _createDictionaryFrom:] */

void FUN_10b88b0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c25df20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf9c4e0();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c1425c0(param_3);
  func_0x00010c0df6e0(puVar5,param_2,(int)uVar2 != 2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0560();
  func_0x00010c1d0560(puVar6,param_2,puVar4,&PTR____CFConstantStringClassReference_110e6e738);
  func_0x00010c1d0560(puVar6,param_2,puVar5,&PTR____CFConstantStringClassReference_110f98bf8);
  uVar7 = uVar2;
  func_0x00010c0870e0();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar1 = (int)uVar7;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar7 = uVar2;
      func_0x00010c067ec0(uVar2);
      func_0x00010c0df760(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_110d66988;
    }
    else {
      if (iVar1 != 2) goto LAB_10b88b2f4;
      uVar7 = uVar2;
      func_0x00010c0b4fe0(uVar2);
      func_0x00010c0df7a0(puVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR_PTR_110d66998;
    }
  }
  else if (iVar1 == 3) {
    func_0x00010bfb2c80(uVar2);
    func_0x00010c0df740(puVar8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_110d66990;
  }
  else {
    if (iVar1 != 4) goto LAB_10b88b2f4;
    uVar7 = uVar2;
    func_0x00010bf1f3c0(uVar2);
    func_0x00010c0df6e0(puVar8,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR_PTR_110d66980;
  }
  func_0x00010c1d0560(puVar6,param_2,puVar8,*ppuVar9);
  _objc_release(puVar8);
LAB_10b88b2f4:
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c00c560();
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b88b350; end: 10b88b527; -[SCAppStartExperimentReader _checkForSafeModeDisableFromTargetingResponse:] */

void FUN_10b88b350(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf46260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_10b88b4e4:
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_3 + 0x58,0);
      _objc_storeStrong(param_3 + 0x50,0);
      _objc_storeStrong(param_3 + 0x48,0);
      _objc_storeStrong(param_3 + 0x40,0);
      _objc_storeStrong(param_3 + 0x38,0);
      _objc_storeStrong(param_3 + 0x30,0);
      _objc_storeStrong(param_3 + 0x28,0);
      _objc_storeStrong(param_3 + 0x20,0);
      _objc_storeStrong(param_3 + 0x18,0);
      _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar3 = uVar9;
      func_0x00010bf45ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        uVar3 = uVar9;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6ce60();
        if (((uVar9 & 1) != 0) ||
           ((uVar4 = uVar3, func_0x00010c0870e0(), (int)uVar4 == 1 &&
            (uVar4 = uVar3, func_0x00010c067ec0(), (int)uVar4 == -1)))) {
          puVar5 = PTR_PTR_1126b7868;
          _objc_alloc_init(PTR_PTR_1126b7868);
          func_0x00010c1f51c0();
          uVar8 = *(undefined8 *)(param_1 + 0x48);
          puVar6 = puVar5;
          func_0x00010bfe9d40(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c284800(uVar8);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        _objc_release(uVar3);
        goto LAB_10b88b4e4;
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10b88b528; end: 10b88b5c3; -[SCAppStartExperimentReader .cxx_destruct] */

void FUN_10b88b528(long param_1)

{
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



/* Entry: 10b88b5c4; end: 10b88b6df; -[SCAppStartExperimentReaderRepository _retrieveConfigResults] */

void FUN_10b88b5c4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bdbc0;
    func_0x00010c0e0260(PTR_PTR_1126bdbc0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) goto LAB_10b88b650;
  }
  puVar2 = param_1;
  func_0x00010bdd0d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06060();
  _objc_release(uVar3);
LAB_10b88b650:
  puVar4 = puVar2;
  func_0x00010c0d3c80(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b88b6e0; end: 10b88b75f; -[SCAppStartExperimentReaderRepository updateExperiments:deletedExperiments:updateImmediately:] */

void FUN_10b88b6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    func_0x00010beca000(param_1,param_2,param_3,param_4);
  }
  else {
    func_0x00010bec9a80(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


