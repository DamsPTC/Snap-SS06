/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b6bf40; end: 105b6bf6f; -[SCFriendsFeedStateLogger _setShortcutSessionId:] */

void FUN_105b6bf40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b6bf70; end: 105b6d323; -[SCFriendsFeedStateLogger _friendsFeedSessionMetadata:friendsFeedViewModelIndexes:currentTime:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105b6d398 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined *
FUN_105b6bf70(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  ulong uVar33;
  ulong uVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined **ppuVar37;
  undefined **ppuVar38;
  undefined **ppuVar39;
  undefined8 uVar40;
  long lVar41;
  long lVar42;
  undefined *puVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  undefined **ppuVar47;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010becd920(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfba060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x0001006372a4(uVar4,&PTR___NSConcreteGlobalBlock_1108d83f0);
  uVar40 = uVar4;
  func_0x0001006372a4(uVar4,&PTR___NSConcreteGlobalBlock_1108d8410);
  uVar5 = uVar4;
  FUN_105b6af50();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar40;
  FUN_105b6af50();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(uVar5);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(uVar6);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  func_0x00010c1d0640(puVar2);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0xa8));
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  func_0x00010c0d3c80();
  uVar8 = *(undefined8 *)(param_2 + 0xf8);
  func_0x00010bf002e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar7);
  _objc_release(uVar8);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(uVar7);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar8 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010bf51e00(uVar8);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010bf002e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar9);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0xf0);
  func_0x00010bf002e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar9);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0xf8);
  func_0x00010bf002e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar9);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010bf002e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar9);
  _objc_release(uVar8);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar9);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  uVar8 = uVar4;
  func_0x00010bd86870(uVar4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                      &PTR___NSConcreteGlobalBlock_1108d8470);
  uVar10 = uVar4;
  func_0x00010bd86870(uVar4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                      &PTR___NSConcreteGlobalBlock_1108d8490);
  uVar11 = uVar4;
  func_0x00010bd86870(uVar4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3088,
                      &PTR___NSConcreteGlobalBlock_1108d84b0);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  func_0x00010c1d0640(puVar2);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar42 = *(long *)(param_2 + 0xd0);
  _objc_retain(lVar42);
  lVar41 = lVar42;
  func_0x00010bf52a60();
  if (lVar41 != 0) {
    lVar46 = *plStack_150;
    do {
      lVar45 = 0;
      do {
        if (*plStack_150 != lVar46) {
          _objc_enumerationMutation(lVar42);
        }
        uVar12 = *(undefined8 *)(lStack_158 + lVar45 * 8);
        func_0x000105bb5a48(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(puVar9);
        _objc_release(uVar12);
        lVar45 = lVar45 + 1;
      } while (lVar41 != lVar45);
      lVar41 = lVar42;
      func_0x00010bf52a60();
    } while (lVar41 != 0);
  }
  _objc_release(lVar42);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  uVar12 = uVar4;
  func_0x000105b6b0e4();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar13 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010bf002e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar43;
  func_0x00010c0d3c80();
  _objc_release(puVar43);
  _objc_release(uVar13);
  func_0x00010c069840(puVar14);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar14);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar13 = *(undefined8 *)(param_2 + 0xf0);
  func_0x00010bf002e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar43;
  func_0x00010c0d3c80();
  _objc_release(puVar43);
  _objc_release(uVar13);
  func_0x00010c069840(puVar15);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar15);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar16 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar13 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010bf002e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar16);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar16,uVar3);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar16,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  uVar17 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010bf51e00();
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d484();
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar17,uVar3);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar17,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar18 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar13 = *(undefined8 *)(param_2 + 0xf0);
  func_0x00010bf002e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar18);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar18,uVar3);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar18,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  uVar19 = *(undefined8 *)(param_2 + 0xf0);
  func_0x00010bf51e00();
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d484();
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar19,uVar3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar19,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar20 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar13 = *(undefined8 *)(param_2 + 0xf8);
  func_0x00010bf002e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar20,uVar3);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar20,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  uVar21 = *(undefined8 *)(param_2 + 0xf8);
  func_0x00010bf51e00();
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d484();
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar21,uVar3);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar21,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar22 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar13 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010bf002e0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar22);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar22,uVar3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d324(puVar22,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  uVar23 = *(undefined8 *)(param_2 + 0x100);
  func_0x00010bf51e00();
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d484();
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar23,uVar3);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_105b6d5a8(uVar23,uVar40);
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_2 + 0x110));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_2 + 0xe0));
  func_0x00010c0df840(puVar43);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar13;
  func_0x00010bf1fd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar43 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar13 = uVar24;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar43);
  _objc_release(uVar13);
  uVar25 = param_4;
  func_0x000105b6b14c(param_4,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar25;
  func_0x000100817178();
  uVar26 = uVar4;
  func_0x0001006372a4(uVar4,&PTR___NSConcreteGlobalBlock_1108d8650);
  puVar27 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_opt_new();
  puVar43 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_105b6d724;
  puStack_188 = &UNK_1108d8130;
  puStack_180 = puVar27;
  lStack_178 = param_2;
  uStack_170 = uVar44;
  uStack_168 = param_5;
  _objc_retain(param_5);
  _objc_retain(uVar44);
  _objc_retain(puVar27);
  uVar28 = uVar26;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar13;
  func_0x00010c25c020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uVar30 = uVar29;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = puVar43;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_105b6da00;
  puStack_1b0 = &UNK_1108d8160;
  uStack_1a8 = uVar29;
  _objc_retain(uVar29);
  ppuVar35 = &puStack_1c8;
  uVar13 = uVar30;
  func_0x000100504554(uVar30);
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar13);
  _objc_release(uVar30);
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e1f9d8;
  puVar43 = puVar2;
  func_0x00010bf51e00();
  puVar31 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_110 = puVar43;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar43);
  _objc_release(uStack_1a8);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(puStack_180);
  _objc_release(param_5);
  _objc_release(uVar44);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(puVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar40);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar39 = ppuVar35;
    _objc_retain();
    _objc_retain(ppuVar35);
    ppuVar32 = ppuVar35;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (ppuVar32 == (undefined **)0x0) {
      puVar43 = (undefined *)0x0;
    }
    else {
      puVar43 = (undefined *)0x0;
      do {
        ppuVar47 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar35);
          }
          uVar3 = *(undefined8 *)((long)ppuVar47 * 8);
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = param_4;
          func_0x00010bf4b900();
          _objc_release(uVar4);
          _objc_release(uVar3);
          puVar43 = puVar43 + (uVar25 & 0xffffffff);
          ppuVar47 = (undefined **)((long)ppuVar47 + 1);
        } while (ppuVar32 != ppuVar47);
        ppuVar32 = ppuVar35;
        func_0x00010bf52a60();
      } while (ppuVar32 != (undefined **)0x0);
    }
    _objc_release(ppuVar35);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar41) {
      return puVar43;
    }
    ___stack_chk_fail();
    lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    uVar25 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (uVar25 == 0) {
      puVar43 = (undefined *)0x0;
    }
    else {
      puVar43 = (undefined *)0x0;
      do {
        uVar44 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_4);
          }
          uVar33 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar34 = uVar33;
          func_0x00010c2827c0();
          puVar43 = puVar43 + uVar34;
          _objc_release(uVar33);
          uVar44 = uVar44 + 1;
        } while (uVar25 != uVar44);
        uVar25 = param_4;
        func_0x00010bf52a60();
      } while (uVar25 != 0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar41) {
      return puVar43;
    }
    ___stack_chk_fail();
    lVar41 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar32 = ppuVar39;
    _objc_retain();
    _objc_retain(ppuVar39);
    ppuVar35 = ppuVar39;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (ppuVar35 == (undefined **)0x0) {
      puVar43 = (undefined *)0x0;
    }
    else {
      puVar43 = (undefined *)0x0;
      do {
        ppuVar47 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar39);
          }
          uVar3 = *(undefined8 *)((long)ppuVar47 * 8);
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar3);
          if (uVar25 != 0) {
            uVar44 = uVar25;
            func_0x00010c2827c0();
            puVar43 = puVar43 + uVar44;
          }
          _objc_release(uVar25);
          ppuVar47 = (undefined **)((long)ppuVar47 + 1);
        } while (ppuVar35 != ppuVar47);
        ppuVar35 = ppuVar39;
        func_0x00010bf52a60();
      } while (ppuVar35 != (undefined **)0x0);
    }
    _objc_release(ppuVar39);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar41) {
      return puVar43;
    }
    ___stack_chk_fail();
    ppuVar39 = *(undefined ***)(param_4 + 0x20);
    uVar40 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x30);
    uVar4 = *(undefined8 *)(param_4 + 0x30);
    uVar3 = *(undefined8 *)(param_4 + 0x38);
    _objc_retain();
    _objc_retain(ppuVar39);
    _objc_retain(uVar40);
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    ppuVar47 = ppuVar32;
    func_0x00010bfa3d00(ppuVar32);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar4);
    ppuVar35 = ppuVar32;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar36 = ppuVar35;
    func_0x00010c0891c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar35);
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    ppuVar35 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar36 != (undefined **)0x0) {
      ppuVar35 = ppuVar39;
      func_0x00010c25d400(ppuVar39);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar43 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar43);
    func_0x00010c1d0640(puVar43);
    ppuVar37 = ppuVar32;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar38 = ppuVar37;
    func_0x000107cf6e3c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar37);
    ppuVar37 = ppuVar38;
    func_0x00010c08fa60();
    if (ppuVar37 != (undefined **)0x0) {
      uVar4 = uVar40;
      func_0x00010c269d40(uVar40);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0f3e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010c15ed20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar43);
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010bef2c20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar43);
      _objc_release(uVar4);
      _objc_release(uVar5);
    }
    puVar31 = puVar43;
    func_0x00010bf51e00(puVar43);
    _objc_release(ppuVar38);
    _objc_release(puVar43);
    _objc_release(ppuVar35);
    _objc_release(uVar3);
    _objc_release(ppuVar36);
    _objc_release(ppuVar47);
    _objc_release(uVar40);
    _objc_release(ppuVar39);
    _objc_release(ppuVar32);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return puVar31;
}



/* Entry: 105b6d324; end: 105b6d483;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105b6d398 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined * FUN_105b6d324(ulong param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar14 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = (undefined *)0x0;
    do {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar2 = *(undefined8 *)(lVar17 * 8);
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010bf4b900();
        _objc_release(uVar3);
        _objc_release(uVar2);
        puVar15 = puVar15 + (uVar4 & 0xffffffff);
        lVar17 = lVar17 + 1;
      } while (lVar14 != lVar17);
      lVar14 = param_2;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar15;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar4 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (uVar4 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = (undefined *)0x0;
    do {
      uVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        uVar5 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c2827c0();
        puVar15 = puVar15 + uVar6;
        _objc_release(uVar5);
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
      uVar4 = param_1;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = lVar8;
    _objc_retain();
    _objc_retain(lVar8);
    lVar14 = lVar8;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    if (lVar14 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = (undefined *)0x0;
      do {
        lVar18 = 0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(lVar8);
          }
          uVar2 = *(undefined8 *)(lVar18 * 8);
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (uVar4 != 0) {
            uVar16 = uVar4;
            func_0x00010c2827c0();
            puVar15 = puVar15 + uVar16;
          }
          _objc_release(uVar4);
          lVar18 = lVar18 + 1;
        } while (lVar14 != lVar18);
        lVar14 = lVar8;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(lVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      return puVar15;
    }
    ___stack_chk_fail();
    ppuVar1 = *(undefined ***)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain();
    _objc_retain(ppuVar1);
    _objc_retain(uVar12);
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    lVar7 = lVar13;
    func_0x00010bfa3d00(lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar3);
    lVar14 = lVar13;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar14;
    func_0x00010c0891c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
    if (lVar8 != 0) {
      ppuVar9 = ppuVar1;
      func_0x00010c25d400(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar15);
    func_0x00010c1d0640(puVar15);
    lVar14 = lVar13;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar14;
    func_0x000107cf6e3c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    lVar14 = lVar17;
    func_0x00010c08fa60();
    if (lVar14 != 0) {
      uVar3 = uVar12;
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c0f3e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar10;
      func_0x00010c15ed20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar15);
      _objc_release(uVar3);
      uVar3 = uVar10;
      func_0x00010bef2c20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar15);
      _objc_release(uVar3);
      _objc_release(uVar10);
    }
    puVar11 = puVar15;
    func_0x00010bf51e00(puVar15);
    _objc_release(lVar17);
    _objc_release(puVar15);
    _objc_release(ppuVar9);
    _objc_release(uVar2);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar12);
    _objc_release(ppuVar1);
    _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  return puVar15;
}



/* Entry: 105b6d484; end: 105b6d5a7;  */

undefined * FUN_105b6d484(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = (undefined *)0x0;
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar15 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar15;
        func_0x00010c2827c0();
        puVar13 = puVar13 + lVar3;
        _objc_release(lVar15);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar13;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = (undefined *)0x0;
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(undefined8 *)(lVar15 * 8);
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (lVar3 != 0) {
          lVar6 = lVar3;
          func_0x00010c2827c0();
          puVar13 = puVar13 + lVar6;
        }
        _objc_release(lVar3);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return puVar13;
  }
  ___stack_chk_fail();
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(ppuVar1);
  _objc_retain(uVar11);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  lVar7 = lVar12;
  func_0x00010bfa3d00(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar5);
  lVar2 = lVar12;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (lVar14 != 0) {
    ppuVar8 = ppuVar1;
    func_0x00010c25d400(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar13);
  func_0x00010c1d0640(puVar13);
  lVar2 = lVar12;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x000107cf6e3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar15;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar5 = uVar11;
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar9;
    func_0x00010c15ed20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(uVar5);
    uVar5 = uVar9;
    func_0x00010bef2c20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar13);
    _objc_release(uVar5);
    _objc_release(uVar9);
  }
  puVar10 = puVar13;
  func_0x00010bf51e00(puVar13);
  _objc_release(lVar15);
  _objc_release(puVar13);
  _objc_release(ppuVar8);
  _objc_release(uVar4);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(uVar11);
  _objc_release(ppuVar1);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 105b6d5a8; end: 105b6d723;  */

undefined * FUN_105b6d5a8(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        uVar3 = *(undefined8 *)(lVar15 * 8);
        func_0x00010bef0c80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if (lVar5 != 0) {
          lVar6 = lVar5;
          func_0x00010c2827c0();
          puVar14 = puVar14 + lVar6;
        }
        _objc_release(lVar5);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar14;
  }
  ___stack_chk_fail();
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(ppuVar1);
  _objc_retain(uVar12);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  lVar7 = lVar11;
  func_0x00010bfa3d00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar4);
  lVar2 = lVar11;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (lVar13 != 0) {
    ppuVar8 = ppuVar1;
    func_0x00010c25d400(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar14);
  func_0x00010c1d0640(puVar14);
  lVar2 = lVar11;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x000107cf6e3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar15;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar4 = uVar12;
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010c15ed20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar14);
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010bef2c20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar14);
    _objc_release(uVar4);
    _objc_release(uVar9);
  }
  puVar10 = puVar14;
  func_0x00010bf51e00(puVar14);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(ppuVar8);
  _objc_release(uVar3);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(uVar12);
  _objc_release(ppuVar1);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 105b6d724; end: 105b6d73b;  */

void FUN_105b6d724(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(ppuVar1);
  _objc_retain(uVar12);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  lVar2 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar5);
  lVar3 = param_2;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar5 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  if (lVar4 != 0) {
    ppuVar7 = ppuVar1;
    func_0x00010c25d400(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar8);
  func_0x00010c1d0640(puVar8);
  lVar3 = param_2;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x000107cf6e3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar9;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar5 = uVar12;
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar10;
    func_0x00010c15ed20(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(uVar5);
    uVar5 = uVar10;
    func_0x00010bef2c20(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(uVar5);
    _objc_release(uVar10);
  }
  puVar11 = puVar8;
  func_0x00010bf51e00(puVar8);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar12);
  _objc_release(ppuVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105b6d73c; end: 105b6d9ff;  */

void FUN_105b6d73c(long param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfa3d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(param_4);
  lVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar5 = uVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  if (lVar3 != 0) {
    ppuVar6 = param_2;
    func_0x00010c25d400(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar7);
  func_0x00010c1d0640(puVar7);
  lVar2 = param_1;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x000107cf6e3c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar8;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar4 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010c15ed20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(uVar4);
    uVar4 = uVar9;
    func_0x00010bef2c20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00(puVar7);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105b6da00; end: 105b6dacb;  */

void FUN_105b6da00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25c340();
  _objc_release(lVar1);
  puVar4 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    func_0x000107d064c4(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(lVar2);
    puVar4 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b6dacc; end: 105b6dbaf; -[SCFriendsFeedStateLogger _totalFeedPageTime:] */

void FUN_105b6dacc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = *(long *)(param_2 + 0xc0);
  dVar8 = param_1;
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_2 + 200);
  func_0x00010bf529e0();
  dVar9 = 0.0;
  if (lVar1 == lVar2) {
    lVar1 = *(long *)(param_2 + 0xc0);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar6 = 0;
      do {
        uVar3 = *(undefined8 *)(param_2 + 200);
        func_0x00010c0dfd40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar4 = *(undefined8 *)(param_2 + 0xc0);
        dVar7 = dVar8;
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        dVar8 = dVar8 - dVar7;
        _objc_release(uVar4);
        _objc_release(uVar3);
        dVar9 = dVar9 + dVar8;
        uVar6 = uVar6 + 1;
        uVar5 = *(ulong *)(param_2 + 0xc0);
        func_0x00010bf529e0();
        dVar8 = dVar7;
      } while (uVar6 < uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((param_1 - *(double *)(param_2 + 0xb8)) - dVar9,PTR__OBJC_CLASS___NSNumber_1126ae570,
             PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 105b6dbb0; end: 105b6dc9f; -[SCFriendsFeedStateLogger _subscribeToFeedInteractionEvents] */

void FUN_105b6dbb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b6dca0; end: 105b6dd8b;  */

void FUN_105b6dca0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bf6e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b6dd8c; end: 105b6dd93;  */

void FUN_105b6dd8c(void)

{
  return;
}



/* Entry: 105b6dd94; end: 105b6ddbf;  */

void FUN_105b6dd94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea36a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6ddc0; end: 105b6ddd7;  */

void FUN_105b6ddc0(void)

{
  return;
}



/* Entry: 105b6ddd8; end: 105b6dedf; -[SCFriendsFeedStateLogger _subscribeToConversationEventObservable:] */

void FUN_105b6ddd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6dee0; end: 105b6dfd3;  */

void FUN_105b6dee0(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105b6dfd4;
  puStack_60 = &UNK_110843540;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd100(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105b6dfd4; end: 105b6e047;  */

void FUN_105b6dfd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6e048; end: 105b6e133; -[SCFriendsFeedStateLogger _onConversationEntered:] */

void FUN_105b6e048(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105b6e134; end: 105b6e16b;  */

void FUN_105b6e134(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be68780(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b6e16c; end: 105b6e1bf; -[SCFriendsFeedStateLogger _onConversationEntered:enterTime:] */

void FUN_105b6e16c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    *(undefined8 *)(param_2 + 0x118) = param_1;
    func_0x00010befa120(*(undefined8 *)(param_2 + 0xe0),param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b6e1c0; end: 105b6e27b; -[SCFriendsFeedStateLogger _onConversationExited] */

void FUN_105b6e1c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b6e27c; end: 105b6e2af;  */

void FUN_105b6e27c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be68800(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b6e2b0; end: 105b6e303; -[SCFriendsFeedStateLogger _onConversationExitedWithExitTime:] */

void FUN_105b6e2b0(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x68);
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (0.0 < *(double *)(param_2 + 0x118))) {
    *(double *)(param_2 + 0x110) =
         (param_1 - *(double *)(param_2 + 0x118)) + *(double *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x118) = 0;
  }
  return;
}



/* Entry: 105b6e304; end: 105b6e613; -[SCFriendsFeedStateLogger _subscribeToMessageUpdates] */

void FUN_105b6e304(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb0000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105b6e614;
  puStack_88 = &UNK_110843540;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c089e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105b6e65c;
  puStack_b0 = &UNK_1108531d0;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c089e40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x105b6e6a4;
  puStack_d8 = &UNK_1108531d0;
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c088560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 105b6e614; end: 105b6e733;  */

void FUN_105b6e614(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6e734; end: 105b6e7cf; -[SCFriendsFeedStateLogger _onSnapViewed:] */

void FUN_105b6e734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0xf0);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c2827c0();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf0),param_2,puVar3,param_3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b6e7d0; end: 105b6e947; -[SCFriendsFeedStateLogger _onSnapsSent:] */

void FUN_105b6e7d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_3e0 [8];
  undefined1 auStack_3d8 [8];
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2d0;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar1 = *plStack_120;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          uVar3 = *(undefined8 *)(param_1 + 0xe8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar3;
          func_0x00010c2827c0();
          _objc_release(uVar3);
          unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe8));
          _objc_release(unaff_x23);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = param_3;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar2 = (undefined1 *)puVar5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  pcStack_138 = FUN_105b6e948;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  lVar1 = *(long *)(param_3 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar1 = *plStack_250;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar1) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x22 = *(undefined8 *)(lStack_258 + (long)puVar7 * 8);
          uVar3 = *(undefined8 *)(param_3 + 0xf8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar3;
          func_0x00010c2827c0();
          _objc_release(uVar3);
          unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_3 + 0xf8));
          _objc_release(unaff_x23);
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar7);
        puVar6 = puVar2;
        puVar5 = &uStack_260;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    puVar6 = (undefined1 *)puVar5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_390;
  pcStack_268 = FUN_105b6eac0;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar6);
  lVar1 = *(long *)(puVar2 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    _objc_retain(puVar6);
    puVar7 = puVar6;
    func_0x00010bf52a60();
    if (puVar7 != (undefined1 *)0x0) {
      lVar1 = *plStack_380;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_380 != lVar1) {
            _objc_enumerationMutation(puVar6);
          }
          unaff_x22 = *(undefined8 *)(lStack_388 + (long)puVar8 * 8);
          uVar3 = *(undefined8 *)(puVar2 + 0x100);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar3;
          func_0x00010c2827c0();
          _objc_release(uVar3);
          puVar4 = puVar6;
          func_0x00010c0e00e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(puVar4);
          unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(puVar2 + 0x100));
          _objc_release(unaff_x23);
          puVar8 = puVar8 + 1;
        } while (puVar7 != puVar8);
        puVar7 = puVar6;
        puVar5 = &uStack_390;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar7 != (undefined1 *)0x0);
    }
    _objc_release(puVar6);
    puVar7 = (undefined1 *)puVar5;
  }
  puVar8 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_398 = FUN_105b6ec60;
  uStack_3d0 = unaff_x24;
  puStack_3c8 = unaff_x23;
  uStack_3c0 = unaff_x22;
  uStack_3b8 = unaff_x21;
  puStack_3b0 = puVar2;
  puStack_3a8 = puVar6;
  ppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar7);
  _objc_initWeak(auStack_3d8,puVar8);
  puVar2 = puVar7;
  func_0x00010c269d40(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_3e0,auStack_3d8);
  puVar8 = puVar6;
  func_0x00010c25ff60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_3e0);
  _objc_destroyWeak(auStack_3d8);
  _objc_release(puVar7);
  return;
}



/* Entry: 105b6e948; end: 105b6eabf; -[SCFriendsFeedStateLogger _onChatsSent:] */

void FUN_105b6e948(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar1 = *plStack_120;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          uVar3 = *(undefined8 *)(param_1 + 0xf8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar3;
          func_0x00010c2827c0();
          _objc_release(uVar3);
          unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf8));
          _objc_release(unaff_x23);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = param_3;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar2 = (undefined1 *)puVar5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  pcStack_138 = FUN_105b6eac0;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  lVar1 = *(long *)(param_3 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar1 = *plStack_250;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar1) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x22 = *(undefined8 *)(lStack_258 + (long)puVar7 * 8);
          uVar3 = *(undefined8 *)(param_3 + 0x100);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar3;
          func_0x00010c2827c0();
          _objc_release(uVar3);
          puVar4 = puVar2;
          func_0x00010c0e00e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(puVar4);
          unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x100));
          _objc_release(unaff_x23);
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar7);
        puVar6 = puVar2;
        puVar5 = &uStack_260;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
    puVar6 = (undefined1 *)puVar5;
  }
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_105b6ec60;
  uStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  uStack_290 = unaff_x22;
  uStack_288 = unaff_x21;
  puStack_280 = param_3;
  puStack_278 = puVar2;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar6);
  _objc_initWeak(auStack_2a8,puVar7);
  puVar2 = puVar6;
  func_0x00010c269d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_2b0,auStack_2a8);
  puVar4 = puVar7;
  func_0x00010c25ff60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(puVar6);
  return;
}



/* Entry: 105b6eac0; end: 105b6ec5f; -[SCFriendsFeedStateLogger _onChatsViewed:] */

void FUN_105b6eac0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar7;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar1 = *plStack_120;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(undefined8 *)(lStack_128 + (long)puVar7 * 8);
          uVar3 = *(undefined8 *)(param_1 + 0x100);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar3;
          func_0x00010c2827c0();
          _objc_release(uVar3);
          puVar4 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(puVar4);
          unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x100));
          _objc_release(unaff_x23);
          puVar7 = puVar7 + 1;
        } while (puVar2 != puVar7);
        puVar2 = param_3;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar2 = (undefined1 *)puVar6;
  }
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105b6ec60;
  uStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_initWeak(auStack_178,puVar7);
  puVar7 = puVar2;
  func_0x00010c269d40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_180,auStack_178);
  puVar5 = puVar4;
  func_0x00010c25ff60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar2);
  return;
}



/* Entry: 105b6ec60; end: 105b6ed83; -[SCFriendsFeedStateLogger _subscribeToChatPeekEvents:] */

void FUN_105b6ec60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6ed84; end: 105b6ee2b;  */

void FUN_105b6ed84(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0240(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b6ee2c; end: 105b6ee57;  */

void FUN_105b6ee2c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6aa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6ee58; end: 105b6ee8b; -[SCFriendsFeedStateLogger _onPeekStarted] */

void FUN_105b6ee58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
  }
  return;
}



/* Entry: 105b6ee8c; end: 105b6eebb; -[SCFriendsFeedStateLogger _setDidScroll] */

void FUN_105b6ee8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}



/* Entry: 105b6eebc; end: 105b6eeef; -[SCFriendsFeedStateLogger _incrementBillboardTapCount] */

void FUN_105b6eebc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  }
  return;
}



/* Entry: 105b6eef0; end: 105b6ef23; -[SCFriendsFeedStateLogger _incrementBillboardDismissCount] */

void FUN_105b6eef0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + 1;
  }
  return;
}



/* Entry: 105b6ef24; end: 105b6ef53; -[SCFriendsFeedStateLogger _setIsDiplayingBillboard:] */

void FUN_105b6ef24(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0xa0) = param_3;
  }
  return;
}



/* Entry: 105b6ef54; end: 105b6f00b; -[SCFriendsFeedStateLogger _subscribeToNativeSessionManager] */

void FUN_105b6ef54(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297280(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b6f00c; end: 105b6f07f;  */

void FUN_105b6f00c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bfc41a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec7220();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec8540();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b6f080; end: 105b6f1a3; -[SCFriendsFeedStateLogger _subscribeToAdImpressionEvents:] */

void FUN_105b6f080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef2ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6f1a4; end: 105b6f1eb;  */

void FUN_105b6f1a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed29e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6f1ec; end: 105b6f30f; -[SCFriendsFeedStateLogger _subscribeToSponsoredSnapBannerEvents:] */

void FUN_105b6f1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c24a920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6f310; end: 105b6f3b7;  */

void FUN_105b6f310(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bf0a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b6f3b8; end: 105b6f43f;  */

void FUN_105b6f3b8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078c20();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6f440; end: 105b6f483; -[SCFriendsFeedStateLogger _updateAdImpressions:] */

void FUN_105b6f440(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xa8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b6f484; end: 105b6f4b3; -[SCFriendsFeedStateLogger _setHasAdBillboard] */

void FUN_105b6f484(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  return;
}



/* Entry: 105b6f4b4; end: 105b6f5bf; -[SCFriendsFeedStateLogger _subscribeToMessageReceivedEvents:] */

void FUN_105b6f4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6f5c0; end: 105b6f607;  */

void FUN_105b6f5c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bede580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6f608; end: 105b6f77b; -[SCFriendsFeedStateLogger _updateReceivedMessages:] */

void FUN_105b6f608(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar6;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar1 = *plStack_120;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x23 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          unaff_x22 = *(undefined8 *)(param_1 + 0xd8);
          func_0x00010bf506c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = unaff_x24;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x22);
          _objc_release(uVar3);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = param_3;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar2 = (undefined1 *)puVar5;
  }
  puVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105b6f77c;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_initWeak(auStack_178,puVar6);
  puVar6 = puVar2;
  func_0x00010c0e0ea0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_180,auStack_178);
  puVar4 = puVar6;
  func_0x00010c25ff60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar2);
  return;
}



/* Entry: 105b6f77c; end: 105b6f887; -[SCFriendsFeedStateLogger _subscribeToFeedCellVisibilityObservable:] */

void FUN_105b6f77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105b6f888; end: 105b6f8cf;  */

void FUN_105b6f888(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b6f8d0; end: 105b6fa97; -[SCFriendsFeedStateLogger _onUpdateFeedCellVisibility:] */

void FUN_105b6f8d0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
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
  lVar2 = *(long *)(param_1 + 0x68);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_3;
    func_0x00010bf344c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      lVar10 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar2);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          uVar6 = uVar9;
          func_0x00010bfec9e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          func_0x00010c067ec0();
          uVar5 = uVar8;
          func_0x00010c067ec0();
          _objc_release(uVar6);
          if ((int)uVar5 < (int)uVar4) {
            func_0x00010bfec9e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            uVar8 = uVar9;
          }
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    uVar6 = uVar8;
    func_0x00010c067ec0();
    iVar1 = (int)*(undefined8 *)(param_1 + 0xb0);
    func_0x00010c067ec0();
    if (iVar1 < (int)uVar6) {
      _objc_retain(uVar8);
      uVar6 = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb0) = uVar8;
      _objc_release(uVar6);
    }
    _objc_release(uVar8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar8 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(param_3 + 0x68) = 0;
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_3 + 0x70);
    *(undefined8 *)(param_3 + 0x70) = 0;
    _objc_release(uVar8);
    *(undefined1 *)(param_3 + 0x90) = 0;
    *(undefined8 *)(param_3 + 0x98) = 0;
    *(undefined2 *)(param_3 + 0xa0) = 0;
    *(undefined8 *)(param_3 + 0x120) = 0;
    *(undefined8 *)(param_3 + 0x128) = 0;
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0xa8));
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0xd8));
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0xe0));
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0xe8));
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0xf0));
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0xf8));
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x100));
    *(undefined8 *)(param_3 + 0x108) = 0;
    uVar8 = *(undefined8 *)(param_3 + 0xd0);
    *(undefined8 *)(param_3 + 0xd0) = 0;
    _objc_release(uVar8);
    *(undefined8 *)(param_3 + 0x110) = 0;
    *(undefined8 *)(param_3 + 0x118) = 0;
    uVar8 = *(undefined8 *)(param_3 + 0xb0);
    *(undefined8 *)(param_3 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar8);
    return;
  }
  return;
}



/* Entry: 105b6fa98; end: 105b6fb2f; -[SCFriendsFeedStateLogger _reset] */

void FUN_105b6fa98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xe0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xe8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xf0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xf8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b6fb30; end: 105b6fb5b; -[SCFriendsFeedStateLogger _resetTimers] */

/* WARNING: Possible PIC construction at 0x000105b6fb48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b6fb4c) */

void FUN_105b6fb30(long param_1)

{
  *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105b6fb5c; end: 105b6fcc3; -[SCFriendsFeedStateLogger .cxx_destruct] */

void FUN_105b6fb5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 105b6fcc4; end: 105b6fdc7;  */

void FUN_105b6fcc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105b6fdc8;
  uStack_40 = 0x105b6fdd8;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b6fdc8; end: 105b6fddf;  */

void FUN_105b6fdc8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b6fde0; end: 105b6fe1f;  */

void FUN_105b6fde0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b6fe20; end: 105b70037;  */

void FUN_105b6fe20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0c0020(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b70038; end: 105b70147;  */

void FUN_105b70038(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100bf3858();
  if ((int)lVar3 != 0) {
    lVar3 = param_2;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) goto LAB_105b70124;
    lVar1 = param_2;
    func_0x00010bef0c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_105b70124:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b70148; end: 105b7021f;  */

void FUN_105b70148(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  FUN_105b70220();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_2;
      func_0x00010bef0c80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b70220; end: 105b7028b;  */

undefined8 FUN_105b70220(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x000107cfd048();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000100bf3858(uVar1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105b7028c; end: 105b70363;  */

void FUN_105b7028c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  FUN_105b70364();
  if ((int)lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_2;
      func_0x00010bef0c80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b70364; end: 105b703db;  */

ulong FUN_105b70364(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x000107cfd128();
  if (((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x000107cfcd04(), (int)uVar2 != 0)) {
    uVar2 = uVar1;
    func_0x000100bf3858(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105b703dc; end: 105b7045f;  */

uint FUN_105b703dc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107cf9bb0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000100bf39e4(param_2);
    uVar4 = (uint)lVar3 ^ 1;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105b70460; end: 105b704af;  */

bool FUN_105b70460(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x000107cf9d2c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 105b704b0; end: 105b706b3;  */

void FUN_105b704b0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_2);
  _objc_opt_new(puVar2);
  uVar3 = param_2;
  FUN_105b6b1fc(param_2);
  func_0x00010baf8204();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d980();
  func_0x00010c25d8c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf866a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar4);
  uVar3 = param_2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000107cf9e44();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1f9b8;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1f998;
  }
  _objc_retain(ppuVar1);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bfa3d00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  puVar6 = puVar4;
  func_0x000105b6ffa8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105b706b4; end: 105b707a3;  */

void FUN_105b706b4(undefined8 param_1,ulong param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  FUN_105b70364();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_2 & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    func_0x00010c067ec0(param_3);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b707a4; end: 105b70853;  */

void FUN_105b707a4(undefined8 param_1,ulong param_2,undefined *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107cfd128();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    func_0x00010c067ec0(param_3);
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b70854; end: 105b709bf;  */

void FUN_105b70854(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100bf3858();
  if ((int)uVar4 != 0) {
    uVar4 = param_2;
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    if ((uVar6 == 0) || (uVar2 == 0)) {
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar6 = uVar2;
      func_0x00010c083d40();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((uVar6 & 1) != 0) goto LAB_105b70994;
      uVar1 = param_2;
      func_0x00010bef0c80(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_3);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
LAB_105b70994:
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b709c0; end: 105b709f7;  */

bool FUN_105b709c0(undefined8 param_1,long param_2)

{
  func_0x00010c0fc580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 105b709f8; end: 105b70b2b;  */

void FUN_105b709f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar1);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    uVar1 = param_2;
    func_0x00010bef0c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105b70b2c; end: 105b70b67;  */

void FUN_105b70b2c(long param_1,int param_2)

{
  func_0x00010901d924();
  if (0 < param_2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 105b70b68; end: 105b70b6f;  */

void FUN_105b70b68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 105b70b70; end: 105b70b97;  */

void FUN_105b70b70(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b70b98; end: 105b70c0b;  */

void FUN_105b70b98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107cf92c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b70c0c; end: 105b70c4b;  */

undefined8 FUN_105b70c0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107cf97e4();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105b70c4c; end: 105b70e2b;  */

uint FUN_105b70c4c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107cfbbc4();
    if ((int)lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      lVar3 = param_2;
      func_0x00010bf96da0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x000107cf9bb0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c07fc80();
      uVar7 = (uint)lVar6 ^ 1;
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar7;
}



/* Entry: 105b70e2c; end: 105b70e73;  */

void FUN_105b70e2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x30) = *(long *)(lVar1 + 0x30) + 1;
  return;
}



/* Entry: 105b70e74; end: 105b70f3f;  */

void FUN_105b70e74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c2aa0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1a99e0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126c2aa8;
  _objc_opt_new(PTR_PTR_1126c2aa8);
  func_0x00010c25c340();
  func_0x00010c20e4e0(puVar3);
  func_0x00010c20e360(puVar1);
  func_0x00010bf33fe0(uVar2);
  func_0x00010c17a420(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b70f40; end: 105b70f4f;  */

void FUN_105b70f40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 105b70f50; end: 105b70fbb;  */

void FUN_105b70f50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_105b6d73c(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf51e00();
  uVar2 = uVar1;
  func_0x000105b6ffa8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b70fbc; end: 105b71197; -[SCFriendsFeedChatOptionsPresenter initWithPresentingViewController:friendmojiSettingsScopeExposer:clearConversationsScopeExposer:clearConversationsScopeBuilderServices:myFriendsScopeExposer:createChatScopeExposer:createChatScopeDelegate:newChatButtonLogger:sendToListsEditScopeExposer:myAIInGroupChatEnabled:] */

undefined8 *
FUN_105b70fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ec138;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
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



/* Entry: 105b71198; end: 105b718cb; -[SCFriendsFeedChatOptionsPresenter presentFeedChatOptions] */

void FUN_105b71198(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  long lStack_218;
  undefined **ppuStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_b8;
  lStack_1d8 = param_1;
  _objc_initWeak(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x00010b0aeeac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105b718cc;
  puStack_c8 = &UNK_110852cd0;
  _objc_copyWeak(auStack_c0,auStack_b8);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar3;
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000105bcd1c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar9;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105b719a4;
  puStack_f0 = &UNK_110852cd0;
  _objc_copyWeak(auStack_e8,auStack_b8);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar3;
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000105bcd1f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar9;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105b71a7c;
  puStack_118 = &UNK_110852cd0;
  _objc_copyWeak(auStack_110,auStack_b8);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f0 = puVar3;
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000105bcd180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar9;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_105b71b84;
  puStack_140 = &UNK_110852cd0;
  _objc_copyWeak(auStack_138,auStack_b8);
  puVar3 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000105bcd198();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar9;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_105b71c54;
  puStack_168 = &UNK_110852cd0;
  _objc_copyWeak(auStack_160,auStack_b8);
  puVar4 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000105bcd1b0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar9;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_105b71d24;
  puStack_190 = &UNK_110852cd0;
  _objc_copyWeak(auStack_188,auStack_b8);
  puVar5 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b10a0;
  ppuVar6 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  puVar2 = PTR_PTR_1126b10a0;
  func_0x000105bcd1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar9;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_105b71e00;
  puStack_1b8 = &UNK_110852cd0;
  puVar1 = auStack_b8;
  _objc_copyWeak(auStack_1b0,puVar1);
  puVar8 = puVar2;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar6);
  func_0x00010c160fc0(puVar8);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_b0 = puStack_1e0;
  puStack_a8 = puStack_1e8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar8;
  puStack_98 = puVar3;
  puStack_90 = puVar4;
  puStack_88 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(lStack_1d8 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf1f3c0();
  _objc_release(uVar10);
  if ((int)uVar11 != 0) {
    func_0x00010c066b00(puVar9);
  }
  puVar2 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar12 = puVar9;
  func_0x00010bf51e00();
  func_0x00010c019f40(puVar2);
  _objc_release(puVar12);
  lVar13 = lStack_1d8 + 8;
  _objc_loadWeakRetained();
  func_0x00010c10af80();
  _objc_release(lVar13);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_1b0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_188);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_160);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_138);
  _objc_release(puStack_1f0);
  _objc_destroyWeak(auStack_110);
  _objc_release(puStack_1e8);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puStack_1e0);
  _objc_destroyWeak(auStack_c0);
  puVar14 = auStack_b8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  puVar15 = puVar14;
  __Unwind_Resume(puVar14);
  pcStack_1f8 = FUN_105b718cc;
  puStack_220 = puVar12;
  lStack_218 = lVar13;
  ppuStack_210 = &puStack_1d0;
  puStack_208 = puVar14;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_228,puVar15 + 0x20);
  func_0x00010bf83000(puVar1);
  _objc_destroyWeak(auStack_228);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b718cc; end: 105b7196f;  */

void FUN_105b718cc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b71970; end: 105b719a3;  */

void FUN_105b71970(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b719a4; end: 105b71a47;  */

void FUN_105b719a4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b71a48; end: 105b71a7b;  */

void FUN_105b71a48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b71a7c; end: 105b71b1f;  */

void FUN_105b71a7c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b71b20; end: 105b71b83;  */

void FUN_105b71b20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110e12b58);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cbe0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b71b84; end: 105b71c27;  */

void FUN_105b71b84(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b71c28; end: 105b71c53;  */

void FUN_105b71c28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b71c54; end: 105b71cf7;  */

void FUN_105b71c54(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b71cf8; end: 105b71d23;  */

void FUN_105b71cf8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b71d24; end: 105b71dc7;  */

void FUN_105b71d24(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b71dc8; end: 105b71df3;  */

void FUN_105b71dc8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b71df4; end: 105b71dff;  */

void FUN_105b71df4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheetWithCompletion_1125be5a8,0)
  ;
  return;
}



/* Entry: 105b71e00; end: 105b71ea3;  */

void FUN_105b71e00(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b71ea4; end: 105b71ecf;  */

void FUN_105b71ea4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b71ed0; end: 105b71f17; -[SCFriendsFeedChatOptionsPresenter friendmojiSettingsScopeDidComplete] */

void FUN_105b71ed0(long param_1)

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


