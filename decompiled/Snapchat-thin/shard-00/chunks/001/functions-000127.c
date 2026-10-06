/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003249ac; end: 100324a43;  */

void FUN_1003249ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f294c8,&UNK_10db655e0);
  puVar1 = &UNK_1105e9fa0;
  func_0x000107c613fc(&UNK_1105e9fa0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_102f2c430,puVar1);
  return;
}



/* Entry: 100324a44; end: 100324a97;  */

void FUN_100324a44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100324a98; end: 100324ab3;  */

void FUN_100324a98(undefined8 param_1)

{
  FUN_1000285a8(0x112f294d0,&UNK_10db655e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102f2c5fc,param_1);
  return;
}



/* Entry: 100324ab4; end: 100324b7f;  */

void FUN_100324ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100324b80; end: 100324d17;  */

void FUN_100324b80(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c40808(param_1);
  func_0x000107c3e170();
  func_0x000107c61180();
  func_0x000107c61174(param_1);
  lVar4 = param_1;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(param_1);
      }
      param_2 = *(undefined8 *)(lVar10 * 8);
      lVar5 = param_3;
      (**(code **)(param_3 + 0x10))(param_3,param_2);
      func_0x000107c61180();
      lVar1 = param_4;
      if (lVar5 != 0) {
        lVar1 = lVar5;
      }
      func_0x000107c61174(lVar1);
      func_0x000107c61170(lVar5);
      if (lVar1 != 0) {
        func_0x000107c3d798(puVar3);
      }
      func_0x000107c61170(lVar1);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = param_1;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    func_0x000107c60e78();
    puVar9 = *(undefined **)(param_3 + 0x20);
    func_0x000107c61174(param_2);
    func_0x000107c4bfd8(puVar9);
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    puVar7 = puVar9;
    func_0x000107c4d9c0(puVar9);
    func_0x000107c61180();
    puVar3 = puVar7;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100324d18; end: 100324dcf;  */

void FUN_100324d18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c4bfd8(uVar4);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c4d9c0(uVar4);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100324dd0; end: 100324dd7; -[SCBlizzardEventLoggerConstructorV2 loggerIndex] */

undefined8 FUN_100324dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100324dd8; end: 100324ecf; -[SCBlizzardEventLoggerConstructorV2 _sortLoggers:] */

void FUN_100324dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c5b5dc();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x000107c4e058(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    func_0x000107c61180();
    func_0x000107c59530(param_1,param_2,puVar2);
    func_0x000107c61170(puVar2);
  }
  lVar1 = param_1;
  func_0x000107c5b5dc(param_1);
  func_0x000107c61180();
  func_0x000107c3d7a0();
  func_0x000107c61170(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_106ad8a7c;
  puStack_40 = &UNK_11095f048;
  uVar3 = param_3;
  lStack_38 = param_1;
  func_0x000107c5b5c0(param_3,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100324ed0; end: 100324ed7; -[SCBlizzardEventLoggerConstructorV2 sortedLoggers] */

undefined8 FUN_100324ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 100324ed8; end: 100324ef7;  */

void FUN_100324ed8(void)

{
  func_0x000107c61168(&PTR_PTR_1129431e8);
  return;
}



/* Entry: 100324ef8; end: 100324f83;  */

void FUN_100324ef8(void)

{
  FUN_1000285a8(0x112ecafe0,&UNK_10daee240);
  FUN_1000823a8(&UNK_1028ef294,0);
  return;
}



/* Entry: 100324f84; end: 100325027;  */

void FUN_100324f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f1a748,&UNK_10db52850);
  puVar1 = &UNK_1105d48e0;
  func_0x000107c613fc(&UNK_1105d48e0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1007b177c,puVar1);
  return;
}



/* Entry: 100325028; end: 100325047;  */

void FUN_100325028(void)

{
  func_0x000107c61168(&PTR_PTR_112f1a7c0);
  return;
}



/* Entry: 100325048; end: 1003250c7;  */

void FUN_100325048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f10648,&UNK_10db43de0);
  puVar1 = &UNK_1105c7b08;
  func_0x000107c613fc(&UNK_1105c7b08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_102d456c8,puVar1);
  return;
}



/* Entry: 1003250c8; end: 100325113;  */

void FUN_1003250c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100325114; end: 10032515f;  */

void FUN_100325114(undefined8 param_1)

{
  FUN_1000285a8(0x112ea3570,&UNK_10dab5ae0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10250efac,param_1);
  return;
}



/* Entry: 100325160; end: 10032517f;  */

void FUN_100325160(void)

{
  func_0x000107c61168(&PTR_PTR_1128fa188);
  return;
}



/* Entry: 100325180; end: 1003251fb; -[SCBlizzardEventLoggerConstructorV2 setSortedLoggers:] */

void FUN_100325180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003251fc; end: 100325237; -[SCBlizzardEventLogger hash] */

undefined8 FUN_1003251fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4be04();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c44c3c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100325238; end: 10032523f; -[SCBlizzardEventLogger logQueueName] */

undefined8 FUN_100325238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100325240; end: 1003252cb; -[SCBlizzardEventLogger isEqual:] */

long FUN_100325240(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    if (param_3 != 0) {
      lVar1 = param_3;
      func_0x000107c61158();
      lVar2 = param_1;
      func_0x000107c61158(param_1);
      func_0x000107c49cec(lVar1,param_2,lVar2);
      if ((int)lVar1 != 0) {
        func_0x000107c49d00(param_1,param_2,param_3);
        goto LAB_1003252b0;
      }
    }
    param_1 = 0;
  }
LAB_1003252b0:
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1003252cc; end: 10032534f; -[SCBlizzardEventLogger isEqualToLogger:] */

undefined8 FUN_1003252cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4be04(param_1);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c4be04(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c49d0c(param_1,param_2,uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100325350; end: 10032536f;  */

void FUN_100325350(void)

{
  func_0x000107c61168(&PTR_PTR_1128fa840);
  return;
}



/* Entry: 100325370; end: 10032544f;  */

void FUN_100325370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f1eb50,&UNK_10db56f30);
  puVar1 = &UNK_1105daec8;
  func_0x000107c613fc(&UNK_1105daec8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_102e3b1bc,puVar1);
  return;
}



/* Entry: 100325450; end: 1003254c3;  */

void FUN_100325450(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003254c4; end: 1003254f3; -[SCBlizzardEventLoggerConstructorV2 setQosToLoggersDict:] */

void FUN_1003254c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1003254f4; end: 10032552f; -[SCBlizzardEventLoggerConstructorV2 constructLoggersForSpectrum] */

void FUN_1003254f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3b164();
  func_0x000107c61180();
  func_0x000107c59620(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100325530; end: 10032601b; -[SCBlizzardEventLoggerConstructorV2 _constructLoggersForSpectrum] */

undefined * FUN_100325530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lStack_288;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar4 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5b758();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c4080c(lVar5,param_2,&uStack_1c0,auStack_100,0x10);
  if (lVar4 != 0) {
    lVar23 = *plStack_1b0;
    do {
      lVar24 = 0;
      do {
        if (*plStack_1b0 != lVar23) {
          func_0x000107c61128(lVar5);
        }
        uVar20 = *(undefined8 *)(lStack_1b8 + lVar24 * 8);
        puVar6 = PTR_PTR_1126d0460;
        func_0x000107c610f4(PTR_PTR_1126d0460);
        uVar19 = *(undefined8 *)(param_1 + 0x18);
        uVar22 = *(undefined8 *)(param_1 + 0x90);
        lVar7 = param_1 + 0x78;
        func_0x000107c61148(lVar7);
        func_0x000107c47ab8(puVar6,param_2,uVar19,uVar20,uVar22,lVar7,1);
        func_0x000107c61170(lVar7);
        uVar19 = uVar20;
        func_0x000107c4fb9c(uVar20);
        func_0x000107c61180();
        puVar8 = puVar1;
        func_0x000107c4d9c0(puVar1,param_2,uVar19);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar19);
        if (puVar8 == (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          uVar19 = uVar20;
          func_0x000107c4fb9c(uVar20);
          func_0x000107c61180();
          func_0x000107c56bcc(puVar1,param_2,puVar8,uVar19);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(puVar8);
        }
        uVar19 = uVar20;
        func_0x000107c4fb9c(uVar20);
        func_0x000107c61180();
        puVar8 = puVar1;
        func_0x000107c4d9e8(puVar1,param_2,uVar19);
        func_0x000107c61180();
        uVar22 = uVar20;
        func_0x000107c4d3e4(uVar20);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar8,param_2,puVar6,uVar22);
        func_0x000107c61170(uVar22);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(uVar19);
        puVar8 = PTR_PTR_1126d0468;
        func_0x000107c610f4(PTR_PTR_1126d0468);
        uVar19 = uVar20;
        func_0x000107c4d3e4(uVar20);
        func_0x000107c61180();
        uVar22 = uVar20;
        func_0x000107c4fb9c(uVar20);
        func_0x000107c61180();
        func_0x000107c48a10(puVar8,param_2,&PTR____CFConstantStringClassReference_110e6de58,uVar19,
                            uVar22);
        func_0x000107c61170(uVar22);
        func_0x000107c61170(uVar19);
        uVar19 = uVar20;
        func_0x000107c4fb9c(uVar20);
        func_0x000107c61180();
        puVar9 = puVar2;
        func_0x000107c4d9c0(puVar2,param_2,uVar19);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar19);
        if (puVar9 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          uVar19 = uVar20;
          func_0x000107c4fb9c(uVar20);
          func_0x000107c61180();
          func_0x000107c56bcc(puVar2,param_2,puVar9,uVar19);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(puVar9);
        }
        uVar19 = uVar20;
        func_0x000107c4fb9c(uVar20);
        func_0x000107c61180();
        puVar9 = puVar2;
        func_0x000107c4d9e8(puVar2,param_2,uVar19);
        func_0x000107c61180();
        func_0x000107c4d3e4(uVar20);
        func_0x000107c61180();
        func_0x000107c56bd8(puVar9,param_2,puVar8,uVar20);
        func_0x000107c61170(uVar20);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(uVar19);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar6);
        lVar24 = lVar24 + 1;
      } while (lVar4 != lVar24);
      lVar4 = lVar5;
      func_0x000107c4080c(lVar5,param_2,&uStack_1c0,auStack_100,0x10);
    } while (lVar4 != 0);
  }
  func_0x000107c61170(lVar5);
  puVar6 = PTR_PTR_1126d0470;
  func_0x000107c610f4();
  uVar19 = *(undefined8 *)(param_1 + 0x90);
  lVar4 = param_1 + 0x78;
  func_0x000107c61148(lVar4);
  func_0x000107c45f88(puVar6,param_2,puVar1,uVar19,lVar4,1);
  func_0x000107c61170(lVar4);
  puVar8 = PTR_PTR_1126d0478;
  func_0x000107c610f4();
  lVar4 = param_1;
  func_0x000107c43458(param_1);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c444a4(param_1);
  func_0x000107c61180();
  func_0x000107c46934(puVar8,param_2,lVar4,puVar6,lVar5,puVar2,*(undefined8 *)(param_1 + 0x48));
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar9 = PTR_PTR_1126d0480;
  func_0x000107c610f4();
  lVar4 = param_1 + 0x78;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c5adec();
  func_0x000107c486b4(puVar9,param_2,lVar5);
  func_0x000107c61170(lVar4);
  puVar10 = PTR_PTR_1126d0488;
  func_0x000107c610f4();
  func_0x000107c46930();
  puVar11 = PTR_PTR_1126b6b50;
  func_0x000107c610f4();
  lVar4 = param_1;
  func_0x000107c3de70(param_1);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c5c9f8(param_1);
  func_0x000107c61180();
  lVar23 = param_1;
  func_0x000107c42bb8(param_1);
  func_0x000107c61180();
  lVar24 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar7 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar18 = lVar7;
  func_0x000107c5dd14();
  func_0x000107c61180();
  lVar12 = param_1;
  func_0x000107c5b40c();
  func_0x000107c61180();
  lVar21 = param_1;
  func_0x000107c4c01c();
  func_0x000107c61180();
  func_0x000107c45678(puVar11,param_2,puVar10,puVar6,lVar4,lVar5,puVar9,lVar23,lVar24,lVar18,lVar12,
                      lVar21,1);
  uVar19 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar11;
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  puVar11 = PTR_PTR_1126d0490;
  func_0x000107c610f4();
  func_0x000107c45674();
  puVar13 = PTR_PTR_1126d0498;
  func_0x000107c610f4();
  lVar4 = param_1;
  func_0x000107c423d0(param_1);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c444a4(param_1);
  func_0x000107c61180();
  func_0x000107c46728(puVar13,param_2,lVar4,lVar5,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c3de70();
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar23 = param_1;
  func_0x000107c42bb8();
  func_0x000107c61180();
  lVar24 = param_1;
  func_0x000107c5d768();
  func_0x000107c61180();
  lVar7 = param_1;
  func_0x000107c423cc();
  func_0x000107c61180();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lVar18 = param_1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar12 = lVar18;
  func_0x000107c5b758();
  func_0x000107c61180();
  func_0x000107c61170(lVar18);
  lStack_288 = lVar12;
  func_0x000107c4080c(lVar12,param_2,&uStack_200,auStack_180,0x10);
  if (lStack_288 != 0) {
    lVar18 = *plStack_1f0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_1f0 != lVar18) {
          func_0x000107c61128(lVar12);
        }
        uVar22 = *(undefined8 *)(lStack_1f8 + lVar21 * 8);
        uVar19 = uVar22;
        func_0x000107c4fb9c(uVar22);
        func_0x000107c61180();
        puVar14 = puVar1;
        func_0x000107c4d9e8(puVar1,param_2,uVar19);
        func_0x000107c61180();
        uVar20 = uVar22;
        func_0x000107c4d3e4(uVar22);
        func_0x000107c61180();
        puVar15 = puVar14;
        func_0x000107c4d9e8(puVar14,param_2,uVar20);
        func_0x000107c61180();
        func_0x000107c61170(uVar20);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(uVar19);
        puVar14 = PTR_PTR_1126ae720;
        puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_268 = 0xc2000000;
        pcStack_260 = FUN_1005548e8;
        puStack_258 = &UNK_11095efd8;
        func_0x000107c61174(puVar15);
        puStack_248 = PTR____NSArray0__struct_11034ab48;
        puStack_250 = puVar15;
        func_0x000107c61174(lVar4);
        lStack_240 = lVar4;
        uStack_238 = uVar22;
        func_0x000107c61174(lVar23);
        lStack_230 = lVar23;
        func_0x000107c61174(lVar5);
        lStack_228 = lVar5;
        func_0x000107c61174(puVar11);
        puStack_220 = puVar11;
        func_0x000107c61174(lVar24);
        lStack_218 = lVar24;
        func_0x000107c61174(puVar13);
        puStack_210 = puVar13;
        func_0x000107c61174(lVar7);
        lStack_208 = lVar7;
        func_0x000107c3e4fc(puVar14,param_2,&puStack_270);
        func_0x000107c61180();
        lVar16 = param_1;
        func_0x000107c3db9c(param_1);
        func_0x000107c61180();
        func_0x000107c3d798();
        func_0x000107c61170(lVar16);
        uVar19 = uVar22;
        func_0x000107c4fb9c(uVar22);
        func_0x000107c61180();
        puVar17 = puVar3;
        func_0x000107c4d9c0(puVar3,param_2,uVar19);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar19);
        if (puVar17 == (undefined *)0x0) {
          puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          uVar19 = uVar22;
          func_0x000107c4fb9c(uVar22);
          func_0x000107c61180();
          func_0x000107c56bcc(puVar3,param_2,puVar17,uVar19);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(puVar17);
        }
        uVar19 = uVar22;
        func_0x000107c4fb9c(uVar22);
        func_0x000107c61180();
        puVar17 = puVar3;
        func_0x000107c4d9c0(puVar3,param_2,uVar19);
        func_0x000107c61180();
        func_0x000107c4f7f0(uVar22);
        func_0x000107c61180();
        func_0x000107c56bcc(puVar17,param_2,puVar14,uVar22);
        func_0x000107c61170(uVar22);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(uVar19);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(lStack_208);
        func_0x000107c61170(puStack_210);
        func_0x000107c61170(lStack_218);
        func_0x000107c61170(puStack_220);
        func_0x000107c61170(lStack_228);
        func_0x000107c61170(lStack_230);
        func_0x000107c61170(lStack_240);
        func_0x000107c61170(puStack_248);
        func_0x000107c61170(puStack_250);
        func_0x000107c61170(puVar15);
        lVar21 = lVar21 + 1;
      } while (lStack_288 != lVar21);
      lStack_288 = lVar12;
      func_0x000107c4080c(lVar12,param_2,&uStack_200,auStack_180,0x10);
    } while (lStack_288 != 0);
  }
  func_0x000107c61170(lVar12);
  func_0x000107c4fad4(puVar10);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar3;
  }
  func_0x000107c60e78();
  return *(undefined **)(puVar3 + 0x10);
}



/* Entry: 10032601c; end: 10032603f; -[SCBlizzardConfig spectrumDefinitions] */

undefined8 FUN_10032601c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100326040; end: 10032608f;  */

void FUN_100326040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100326090; end: 1003260af;  */

void FUN_100326090(void)

{
  func_0x000107c61168(&PTR_PTR_1128faef0);
  return;
}



/* Entry: 1003260b0; end: 1003260fb;  */

void FUN_1003260b0(undefined8 param_1)

{
  FUN_1000285a8(0x112ea4c00,&UNK_10dab7d80);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10254dce4,param_1);
  return;
}



/* Entry: 1003260fc; end: 100326123;  */

void FUN_1003260fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11051f050;
  FUN_1000285a8(0x112ea4c08,&UNK_10dab7d88);
  func_0x000107c613fc(&UNK_11051f050,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_10254dec4,puVar1);
  return;
}



/* Entry: 100326124; end: 1003261c7;  */

void FUN_100326124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  FUN_1000285a8(param_5,param_6);
  func_0x000107c613fc(param_7,0x30,7);
  *(undefined8 *)(param_7 + 0x10) = param_1;
  *(undefined8 *)(param_7 + 0x18) = param_2;
  *(undefined8 *)(param_7 + 0x20) = param_3;
  *(undefined8 *)(param_7 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(param_8,param_7);
  return;
}



/* Entry: 1003261c8; end: 100326207;  */

void FUN_1003261c8(void)

{
  FUN_1000285a8(0x112ebb650,&UNK_10dad4360);
  FUN_1000823a8(&UNK_10273e070,0);
  return;
}



/* Entry: 100326208; end: 10032629f;  */

void FUN_100326208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ebb730,&UNK_10dad43d0);
  puVar1 = &UNK_1105425f8;
  func_0x000107c613fc(&UNK_1105425f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10273e680,puVar1);
  return;
}



/* Entry: 1003262a0; end: 1003262ab;  */

void FUN_1003262a0(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010273efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1003262ac; end: 10032638f;  */

void FUN_1003262ac(undefined8 param_1)

{
  FUN_1000285a8(0x112ebe6b8,&UNK_10dada0d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10279bc6c,param_1);
  return;
}



/* Entry: 100326390; end: 1003263af;  */

void FUN_100326390(void)

{
  func_0x000107c61168(&PTR_PTR_112860b48);
  return;
}



/* Entry: 1003263b0; end: 10032642f;  */

void FUN_1003263b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ebe6d8,&UNK_10dada2d0);
  puVar1 = &UNK_11054a668;
  func_0x000107c613fc(&UNK_11054a668,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_10279da10,puVar1);
  return;
}



/* Entry: 100326430; end: 10032645b;  */

void FUN_100326430(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10032645c; end: 1003264a7;  */

void FUN_10032645c(undefined8 param_1)

{
  FUN_1000285a8(0x112ebe7d8,&UNK_10dada690);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1027a1518,param_1);
  return;
}



/* Entry: 1003264a8; end: 1003264c7;  */

void FUN_1003264a8(void)

{
  func_0x000107c61168(&PTR_PTR_112860c08);
  return;
}



/* Entry: 1003264c8; end: 10032655f;  */

void FUN_1003264c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ebe6e8,&UNK_10dada370);
  puVar1 = &UNK_11054a828;
  func_0x000107c613fc(&UNK_11054a828,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10279eaa8,puVar1);
  return;
}



/* Entry: 100326560; end: 100326573;  */

void FUN_100326560(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_release_11034f4c0;
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010279f754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100326574; end: 100326617;  */

void FUN_100326574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ebe958,&UNK_10dadacd0);
  puVar1 = &UNK_11054b628;
  func_0x000107c613fc(&UNK_11054b628,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_1027a3ee8,puVar1);
  return;
}



/* Entry: 100326618; end: 100326653;  */

void FUN_100326618(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100326654; end: 1003266f7;  */

void FUN_100326654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ebe9b0,&UNK_10dadad80);
  puVar1 = &UNK_11054b770;
  func_0x000107c613fc(&UNK_11054b770,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_1027a44bc,puVar1);
  return;
}



/* Entry: 1003266f8; end: 100326733;  */

void FUN_1003266f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100326734; end: 10032677f;  */

void FUN_100326734(undefined8 param_1)

{
  FUN_1000285a8(0x112ebea10,&UNK_10dadae30);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1027a4adc,param_1);
  return;
}



/* Entry: 100326780; end: 10032679f;  */

void FUN_100326780(void)

{
  func_0x000107c61168(&PTR_PTR_112860ff8);
  return;
}



/* Entry: 1003267a0; end: 1003268e3;  */

void FUN_1003267a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f21110,&UNK_10db5a440);
  puVar1 = &UNK_1105dd468;
  func_0x000107c613fc(&UNK_1105dd468,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  FUN_1000823a8(&UNK_102e55c0c,puVar1);
  return;
}



/* Entry: 1003268e4; end: 100326987;  */

void FUN_1003268e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100326988; end: 1003269a3;  */

void FUN_100326988(undefined8 param_1)

{
  FUN_1000285a8(0x112f21118,&UNK_10db5a448);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e56008,param_1);
  return;
}



/* Entry: 1003269a4; end: 1003269f3;  */

void FUN_1003269a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003269f4; end: 100326a13;  */

void FUN_1003269f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8758);
  return;
}



/* Entry: 100326a14; end: 100326a93;  */

void FUN_100326a14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f21250,&UNK_10db5a680);
  puVar1 = &UNK_1105dd530;
  func_0x000107c613fc(&UNK_1105dd530,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090d4a0,puVar1);
  return;
}



/* Entry: 100326a94; end: 100326ab3;  */

void FUN_100326a94(void)

{
  func_0x000107c61168(&PTR_PTR_112f212c8);
  return;
}



/* Entry: 100326ab4; end: 100326b57;  */

void FUN_100326ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f21338,&UNK_10db5a850);
  puVar1 = &UNK_1105dd5f8;
  func_0x000107c613fc(&UNK_1105dd5f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_102e562d4,puVar1);
  return;
}



/* Entry: 100326b58; end: 100326bb3;  */

void FUN_100326b58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100326bb4; end: 100326bcf;  */

void FUN_100326bb4(undefined8 param_1)

{
  FUN_1000285a8(0x112f21340,&UNK_10db5a858);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e5642c,param_1);
  return;
}



/* Entry: 100326bd0; end: 100326c1f;  */

void FUN_100326bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100326c20; end: 100326c3f;  */

void FUN_100326c20(void)

{
  func_0x000107c61168(&PTR_PTR_1128ab6b0);
  return;
}



/* Entry: 100326c40; end: 100326d1f;  */

void FUN_100326c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ebeda8,&UNK_10dadb6a0);
  puVar1 = &UNK_11054c420;
  func_0x000107c613fc(&UNK_11054c420,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_1027ab4d0,puVar1);
  return;
}



/* Entry: 100326d20; end: 100326d73;  */

void FUN_100326d20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100326d74; end: 100326dbf;  */

void FUN_100326d74(undefined8 param_1)

{
  FUN_1000285a8(0x112fae548,&UNK_10dc23080);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10391b874,param_1);
  return;
}



/* Entry: 100326dc0; end: 100326ddf;  */

void FUN_100326dc0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ffd00);
  return;
}



/* Entry: 100326de0; end: 100326e5f;  */

void FUN_100326de0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f12620,&UNK_10db46620);
  puVar1 = &UNK_1105ca970;
  func_0x000107c613fc(&UNK_1105ca970,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006ff028,puVar1);
  return;
}



/* Entry: 100326e60; end: 100326e7f;  */

void FUN_100326e60(void)

{
  func_0x000107c61168(&PTR_PTR_112f12698);
  return;
}



/* Entry: 100326e80; end: 100326ebf;  */

void FUN_100326e80(void)

{
  FUN_1000285a8(0x112eca940,&UNK_10daed9e0);
  FUN_1000823a8(&UNK_1028eb5d4,0);
  return;
}



/* Entry: 100326ec0; end: 100326edf;  */

void FUN_100326ec0(void)

{
  func_0x000107c61168(&PTR_PTR_112900340);
  return;
}



/* Entry: 100326ee0; end: 100326f2b;  */

void FUN_100326ee0(undefined8 param_1)

{
  FUN_1000285a8(0x112ecadf8,&UNK_10daee060);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003b4118,param_1);
  return;
}



/* Entry: 100326f2c; end: 100326fab;  */

void FUN_100326f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecb2a8,&UNK_10daee5c0);
  puVar1 = &UNK_110567e78;
  func_0x000107c613fc(&UNK_110567e78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1028ef4ec,puVar1);
  return;
}



/* Entry: 100326fac; end: 100326faf;  */

void FUN_100326fac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100326fb0; end: 100326fcf;  */

void FUN_100326fb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128afe28);
  return;
}



/* Entry: 100326fd0; end: 10032700f;  */

void FUN_100326fd0(void)

{
  FUN_1000285a8(0x112e64d38,&UNK_10da6f8a0);
  FUN_1000823a8(FUN_1008f1d84,0);
  return;
}



/* Entry: 100327010; end: 10032702f;  */

void FUN_100327010(void)

{
  func_0x000107c61168(&PTR_PTR_11282a888);
  return;
}



/* Entry: 100327030; end: 1003270d3;  */

void FUN_100327030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f0b170,&UNK_10db3e2e0);
  puVar1 = &UNK_1105bf530;
  func_0x000107c613fc(&UNK_1105bf530,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10090e64c,puVar1);
  return;
}



/* Entry: 1003270d4; end: 1003270f3;  */

void FUN_1003270d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f0b1e0);
  return;
}



/* Entry: 1003270f4; end: 1003271bb;  */

void FUN_1003270f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112eceb80,&UNK_10daf4b60);
  puVar1 = &UNK_110570e58;
  func_0x000107c613fc(&UNK_110570e58,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(&UNK_102950bbc,puVar1);
  return;
}



/* Entry: 1003271bc; end: 100327207;  */

void FUN_1003271bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100327208; end: 100327253;  */

void FUN_100327208(undefined8 param_1)

{
  FUN_1000285a8(0x112ecebc0,&UNK_10daf4b68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102951694,param_1);
  return;
}



/* Entry: 100327254; end: 100327273;  */

void FUN_100327254(void)

{
  func_0x000107c61168(&PTR_PTR_1128ffac0);
  return;
}



/* Entry: 100327274; end: 1003273ff;  */

void FUN_100327274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecd260,&UNK_10daf2940);
  puVar1 = &UNK_11056c7b0;
  func_0x000107c613fc(&UNK_11056c7b0,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  FUN_1000823a8(&UNK_102919aa0,puVar1);
  return;
}



/* Entry: 100327400; end: 1003274a3;  */

void FUN_100327400(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003274a4; end: 1003274ef;  */

void FUN_1003274a4(undefined8 param_1)

{
  FUN_1000285a8(0x112ecd2f8,&UNK_10daf2948);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10291a9e8,param_1);
  return;
}



/* Entry: 1003274f0; end: 10032750f;  */

void FUN_1003274f0(void)

{
  func_0x000107c61168(&PTR_PTR_112870900);
  return;
}



/* Entry: 100327510; end: 10032758f;  */

void FUN_100327510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ed5128,&UNK_10dafe760);
  puVar1 = &UNK_11057f428;
  func_0x000107c613fc(&UNK_11057f428,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1029d8588,puVar1);
  return;
}



/* Entry: 100327590; end: 1003275bb;  */

void FUN_100327590(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003275bc; end: 100327607;  */

void FUN_1003275bc(undefined8 param_1)

{
  FUN_1000285a8(0x112d6aed0,&UNK_10dc135f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10380fa44,param_1);
  return;
}



/* Entry: 100327608; end: 100327627;  */

void FUN_100327608(void)

{
  func_0x000107c61168(&PTR_PTR_1128f12b0);
  return;
}



/* Entry: 100327628; end: 10032781f;  */

void FUN_100327628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f32ce8,&UNK_10db79d20);
  puVar1 = &UNK_1105fd4b8;
  func_0x000107c613fc(&UNK_1105fd4b8,200,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  FUN_1000823a8(&UNK_10300bd3c,puVar1);
  return;
}



/* Entry: 100327820; end: 100327913;  */

void FUN_100327820(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100327914; end: 10032792f;  */

void FUN_100327914(undefined8 param_1)

{
  FUN_1000285a8(0x112f32cf0,&UNK_10db79d28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10300c39c,param_1);
  return;
}



/* Entry: 100327930; end: 10032797f;  */

void FUN_100327930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100327980; end: 10032799f;  */

void FUN_100327980(void)

{
  func_0x000107c61168(&PTR_PTR_112907400);
  return;
}



/* Entry: 1003279a0; end: 10032bd9f;  */

void FUN_1003279a0(void)

{
  FUN_1000285a8(0x112d9e8f8,&UNK_10d93ef70);
  FUN_1000823a8(0x100926e4c,0);
  return;
}



/* Entry: 10032bda0; end: 10032be1f;  */

void FUN_10032bda0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e9a830,&UNK_10daa75d0);
  puVar1 = &UNK_110509798;
  func_0x000107c613fc(&UNK_110509798,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1024480e4,puVar1);
  return;
}



/* Entry: 10032be20; end: 10032be4b;  */

void FUN_10032be20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10032be4c; end: 10032bee3;  */

void FUN_10032be4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f137a0,&UNK_10db48110);
  puVar1 = &UNK_1105cbc10;
  func_0x000107c613fc(&UNK_1105cbc10,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_102d6c0c4,puVar1);
  return;
}


