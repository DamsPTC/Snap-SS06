/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050464d4; end: 10504662b; -[SCFriendUnifiedProfileSectionCreator sectionForDescriptor:] */

void FUN_1050464d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          param_1 = 0;
        }
        else {
          func_0x00010be802c0(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010bddcce0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bddcd00(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010be9a520(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10504662c; end: 1050467df; -[SCFriendUnifiedProfileSectionCreator _savedInChatSection] */

void FUN_10504662c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1100;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc3778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3778,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  puVar5 = PTR_PTR_1126b4200;
  _objc_alloc(PTR_PTR_1126b4200);
  func_0x00010c03ad20();
  func_0x00010c1f9240(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c155a60();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x100;
  _objc_loadWeakRetained();
  func_0x00010bef9980(puVar5);
  _objc_release(param_1);
  _objc_release(puVar5);
  func_0x00010c161980(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c1f93c0(puVar4);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b1100;
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar10);
    _objc_alloc();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc3798;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3798,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    puVar6 = PTR_PTR_1126b4208;
    _objc_alloc();
    uVar7 = *(undefined8 *)(puVar1 + 8);
    func_0x00010c258560(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + 8);
    func_0x00010c12a480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049a80();
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar9 = puVar10;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar4 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar4);
    puVar4 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar9);
    puVar9 = puVar4;
    func_0x00010bf9c100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0c3680();
    puVar11 = PTR_PTR_1126b4210;
    _objc_alloc();
    puVar4 = puVar1 + 0x28;
    _objc_loadWeakRetained(puVar4);
    puVar10 = puVar1 + 0x18;
    _objc_loadWeakRetained(puVar10);
    func_0x00010c015da0();
    _objc_release(puVar10);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    func_0x00010c1f9240();
    puVar10 = PTR_PTR_1126b4218;
    _objc_alloc(PTR_PTR_1126b4218);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc37b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046420(puVar10);
    func_0x00010c222a60(puVar4);
    _objc_release(puVar10);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    puVar1 = puVar1 + 0x100;
    _objc_loadWeakRetained();
    func_0x00010bef9980(puVar11);
    _objc_release(puVar1);
    func_0x00010c161980(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      puVar10 = PTR_PTR_1126b4220;
      _objc_alloc(PTR_PTR_1126b4220);
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc37d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x000108f728c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043040(puVar10);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      func_0x00010c161980(puVar10);
      puVar4 = PTR_PTR_1126b4228;
      _objc_alloc(PTR_PTR_1126b4228);
      uVar7 = *(undefined8 *)(puVar5 + 8);
      func_0x00010c15ffa0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc37f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03b240(puVar4);
      _objc_release(ppuVar2);
      _objc_release(uVar7);
      puVar6 = PTR_PTR_1126b4230;
      _objc_alloc(PTR_PTR_1126b4230);
      uVar8 = *(undefined8 *)(puVar5 + 0x58);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c293a00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5 + 0x18;
      _objc_loadWeakRetained(puVar1);
      func_0x00010c05a6c0(puVar6);
      func_0x00010c17ad80(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(uVar7);
      _objc_release(uVar8);
      puVar6 = puVar4;
      func_0x00010bf35ca0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5 + 0x100;
      _objc_loadWeakRetained(puVar1);
      func_0x00010bef9980(puVar6);
      _objc_release(puVar1);
      _objc_release(puVar6);
      func_0x00010c161980(puVar4);
      func_0x00010c17ad60(puVar4);
      func_0x000108fab168(*(undefined8 *)(puVar5 + 0xc0));
      func_0x00010c21d7c0(puVar4);
      _objc_release(puVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050467e0; end: 105046b73; -[SCFriendUnifiedProfileSectionCreator _chatAttachmentSection:] */

void FUN_1050467e0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  puVar2 = PTR_PTR_1126b1100;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc3798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3798,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126b4208;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c258560(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049a80();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar8 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar10 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar9);
  uVar1 = uVar8;
  if ((uVar10 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010bf9c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0c3680();
  puVar9 = PTR_PTR_1126b4210;
  _objc_alloc();
  lVar11 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar11);
  lVar12 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar12);
  func_0x00010c015da0();
  _objc_release(lVar12);
  _objc_release(lVar11);
  puVar13 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  func_0x00010c1f9240();
  puVar14 = PTR_PTR_1126b4218;
  _objc_alloc(PTR_PTR_1126b4218);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc37b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046420(puVar14);
  func_0x00010c222a60(puVar13);
  _objc_release(puVar14);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  param_1 = param_1 + 0x100;
  _objc_loadWeakRetained();
  func_0x00010bef9980(puVar9);
  _objc_release(param_1);
  func_0x00010c161980(puVar13);
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar13);
  _objc_release(puVar14);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    puVar9 = PTR_PTR_1126b4220;
    _objc_alloc(PTR_PTR_1126b4220);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc37d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040(puVar9);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    func_0x00010c161980(puVar9);
    puVar13 = PTR_PTR_1126b4228;
    _objc_alloc(PTR_PTR_1126b4228);
    uVar6 = *(undefined8 *)(puVar2 + 8);
    func_0x00010c15ffa0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc37f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b240(puVar13);
    _objc_release(ppuVar3);
    _objc_release(uVar6);
    puVar14 = PTR_PTR_1126b4230;
    _objc_alloc(PTR_PTR_1126b4230);
    uVar7 = *(undefined8 *)(puVar2 + 0x58);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2 + 0x18;
    _objc_loadWeakRetained(puVar5);
    func_0x00010c05a6c0(puVar14);
    func_0x00010c17ad80(puVar13);
    _objc_release(puVar14);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    puVar14 = puVar13;
    func_0x00010bf35ca0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2 + 0x100;
    _objc_loadWeakRetained(puVar5);
    func_0x00010bef9980(puVar14);
    _objc_release(puVar5);
    _objc_release(puVar14);
    func_0x00010c161980(puVar13);
    func_0x00010c17ad60(puVar13);
    func_0x000108fab168(*(undefined8 *)(puVar2 + 0xc0));
    func_0x00010c21d7c0(puVar13);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105046b74; end: 105046d8b; -[SCFriendUnifiedProfileSectionCreator _charmsSection] */

void FUN_105046b74(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b4220;
  _objc_alloc(PTR_PTR_1126b4220);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc37d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c161980(puVar1);
  puVar4 = PTR_PTR_1126b4228;
  _objc_alloc(PTR_PTR_1126b4228);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ffa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc37f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b240(puVar4);
  _objc_release(ppuVar2);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b4230;
  _objc_alloc(PTR_PTR_1126b4230);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c05a6c0(puVar6);
  func_0x00010c17ad80(puVar4);
  _objc_release(puVar6);
  _objc_release(lVar8);
  _objc_release(uVar5);
  _objc_release(uVar7);
  puVar6 = puVar4;
  func_0x00010bf35ca0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x100;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bef9980(puVar6);
  _objc_release(lVar8);
  _objc_release(puVar6);
  func_0x00010c161980(puVar4);
  func_0x00010c17ad60(puVar4);
  func_0x000108fab168(*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c21d7c0(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105046d8c; end: 105046eb3; -[SCFriendUnifiedProfileSectionCreator _privacyAffirmationSection] */

void FUN_105046d8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f12438;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b4238;
  _objc_alloc(PTR_PTR_1126b4238);
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar3 = param_1 + 0x100;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c008dc0(puVar2,param_2,uVar4,lVar3,*(undefined8 *)(param_1 + 0xf8));
  func_0x00010c1f9240(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(lVar3 + 0x100);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105046eb4; end: 105046ecb; -[SCFriendUnifiedProfileSectionCreator lifecycleAnnouncer] */

void FUN_105046eb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105046ecc; end: 105046ed7; -[SCFriendUnifiedProfileSectionCreator setLifecycleAnnouncer:] */

void FUN_105046ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 105046ed8; end: 10504705f; -[SCFriendUnifiedProfileSectionCreator .cxx_destruct] */

void FUN_105046ed8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105047060; end: 1050477fb; -[SCFriendUnifiedProfileFactory initWithUserSession:snapchatterServices:grapheneServices:userInfoProvider:storiesDataAccess:remoteStoriesDataProvider:customStoriesDataFetcher:customStoriesDataSyncer:friendsFeedDataAccess:messagingExperimentService:sponsoredSnapAdResponseParser:sponsoredSnapBannerDataProvider:conversationServices:pinnedConversationsDataCoordinator:conversationIdResolver:featureSettingsService:creatorSettingService:circumstanceEngine:shareFriendScopeExposer:userBlizzardServices:friendmojiPresenter:discoverFeedNotificationServices:notificationServices:leaveCustomStoryLauncher:leaveCustomStoryScopeServices:safetyReportScopeExposer:friendStorySettingMutator:bitmojiEditAvatarBuilderPresenter:bitmojiEditAvatarBuilderScopeServices:shareFriendProfileScopeExposer:friendProfileSharingScopeServices:pageLauncherServices:mapSnapshotViewScopeServices:mapSnapshotViewScopeExposer:personLocationsProvider:simpleSnapchatExperimentConfigProvider:profilePageSourceType:bitmojiOutfitSharingLogger:bitmojiStyle:webBrowsingScopeExposer:] */

undefined8 *
FUN_105047060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_40);
  _objc_retain(param_42);
  puStack_70 = PTR_PTR_1126e5bf0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[2];
    puVar1[2] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_38;
    _objc_release(uVar2);
    puVar1[0x22] = param_39;
    _objc_retain(param_40);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_40;
    _objc_release(uVar2);
    puVar1[0x24] = param_41;
    _objc_retain(param_42);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_42;
    _objc_release(uVar2);
  }
  _objc_release(param_42);
  _objc_release(param_40);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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



/* Entry: 1050477fc; end: 105047823; -[SCFriendUnifiedProfileFactory circumstanceEngine] */

void FUN_1050477fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105047824; end: 105047a2f; -[SCFriendUnifiedProfileFactory friendUnifiedProfileDataSourceWithSnapchatter:conversationId:friendProfileConfiguration:] */

void FUN_105047824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar4 = PTR_PTR_1126b4168;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010bfb8b40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048d20(puVar4,param_2,param_3,param_4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar2,uVar10,
                      uVar16,uVar17,uVar14,uVar15,uVar1,uVar3,param_5,uVar11,uVar12,uVar13,
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x78));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105047a30; end: 105047b03; -[SCFriendUnifiedProfileFactory actionMenuDataProviderWithOpenFriendActionData:friendDataSource:plugins:] */

void FUN_105047a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b4240;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0286c0();
  puVar2 = PTR_PTR_1126b4248;
  _objc_alloc(PTR_PTR_1126b4248);
  func_0x00010c058fa0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105047b04; end: 105047c7b; -[SCFriendUnifiedProfileFactory friendUnifiedActionMenuActionHandlerWithDataSource:attributedPage:plugins:] */

void FUN_105047b04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b4250;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c244be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c244ae0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c244ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05da00(puVar1,*(undefined8 *)(param_1 + 0x80),uVar5,uVar2,uVar3,uVar4,
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),param_3,param_4,
                      *(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x88),
                      *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb0),param_5,*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 200),
                      *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105047c7c; end: 105047c83; -[SCFriendUnifiedProfileFactory conversationIdResolver] */

undefined8 FUN_105047c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 105047c84; end: 105047c8b; -[SCFriendUnifiedProfileFactory snapchatterServices] */

undefined8 FUN_105047c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 105047c8c; end: 105047c93; -[SCFriendUnifiedProfileFactory grapheneServices] */

undefined8 FUN_105047c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 105047c94; end: 105047e73; -[SCFriendUnifiedProfileFactory .cxx_destruct] */

void FUN_105047c94(long param_1)

{
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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



/* Entry: 105047e74; end: 105047f47; -[SCCallGroupAction initWithGroupId:context:callLauncherServices:] */

undefined1 *
FUN_105047e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5bf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 2;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105047f48; end: 105048003; -[SCCallGroupAction prominentActionButton] */

void FUN_105047f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3fc0;
  _objc_alloc(PTR_PTR_1126b3fc0);
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126b3fc8;
  _objc_alloc(PTR_PTR_1126b3fc8);
  func_0x00010c03b4e0();
  func_0x00010c28d0c0(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c1af000(puVar1,param_2,1);
  func_0x00010506bb04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc3578);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105048004; end: 105048007; -[SCCallGroupAction prominentActionView:handleActionWithModel:] */

void FUN_105048004(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAction_112566db8);
  return;
}



/* Entry: 105048008; end: 105048123; -[SCCallGroupAction _handleAction] */

void FUN_105048008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0x9b);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 105048124; end: 10504812b; -[SCCallGroupAction actionSheetCell] */

undefined8 FUN_105048124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10504812c; end: 105048133; -[SCCallGroupAction position] */

undefined8 FUN_10504812c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105048134; end: 10504817b; -[SCCallGroupAction .cxx_destruct] */

void FUN_105048134(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10504817c; end: 10504826b; -[SCChatGroupAction initWithGroupId:context:navigationServices:] */

undefined1 *
FUN_10504817c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e5c00;
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
    *(undefined8 *)((long)puVar1 + 0x28) = 1;
    uVar2 = param_5;
    func_0x00010c0d6760(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10504826c; end: 105048327; -[SCChatGroupAction prominentActionButton] */

void FUN_10504826c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3fc0;
  _objc_alloc(PTR_PTR_1126b3fc0);
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126b3fc8;
  _objc_alloc(PTR_PTR_1126b3fc8);
  func_0x00010c03b4e0();
  func_0x00010c28d0c0(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c1af000(puVar1,param_2,1);
  FUN_10506baec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc35b8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105048328; end: 10504832b; -[SCChatGroupAction prominentActionView:handleActionWithModel:] */

void FUN_105048328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAction_112566db8);
  return;
}



/* Entry: 10504832c; end: 10504847f; -[SCChatGroupAction _handleAction] */

void FUN_10504832c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd33e0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfce440(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfce420();
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 105048480; end: 1050484b3;  */

void FUN_105048480(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc9900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050484b4; end: 10504855f; -[SCChatGroupAction _afterDetachNavigateToChat:] */

void FUN_1050484b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a4ee8);
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  func_0x00010c183a80(lVar1);
  _objc_release(param_3);
  func_0x00010c0d5fa0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105048560; end: 105048567; -[SCChatGroupAction actionSheetCell] */

undefined8 FUN_105048560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105048568; end: 10504856f; -[SCChatGroupAction position] */

undefined8 FUN_105048568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105048570; end: 1050485b3; -[SCChatGroupAction .cxx_destruct] */

void FUN_105048570(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050485b4; end: 105048623; -[SCGroupActionSheetModalViewController initWithSourcePageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1050485b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5c08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271a5e4) = param_3;
    func_0x00010c18b480(puVar1);
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105048624; end: 105048633; -[SCGroupActionSheetModalViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105048624(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271a5e4);
}



/* Entry: 105048634; end: 105048af7; -[SCGroupActionSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105048634(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126b4258;
  _objc_alloc();
  lVar22 = (long)_DAT_11271a5e8;
  lVar19 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar19);
  func_0x00010c247a20();
  func_0x00010c04aae0();
  _objc_release(lVar19);
  lVar19 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar19);
  lVar2 = lVar19;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(lVar19);
  _objc_storeWeak(param_1 + _DAT_11271a5ec,puVar1);
  lVar19 = param_1 + _DAT_11271a5f0;
  _objc_loadWeakRetained();
  lVar2 = lVar19;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar19);
  _objc_initWeak(auStack_70,param_1);
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271a5f4;
  _objc_loadWeakRetained();
  lVar2 = lVar19;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e220();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar19);
  puVar6 = PTR_PTR_1126b4260;
  _objc_alloc();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11271a624;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271a5f8;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11271a5fc;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11271a600;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_11271a608;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_11271a60c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271a610;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_11271a614;
  _objc_loadWeakRetained();
  lVar17 = param_1 + _DAT_11271a618;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05da80();
  lVar21 = (long)_DAT_11271a61c;
  uVar20 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar6;
  _objc_release(uVar20);
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
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar19);
  uVar20 = *(undefined8 *)(param_1 + lVar21);
  lVar19 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar19);
  lVar3 = lVar19;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c247a20();
  param_1 = param_1 + lVar22;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe2700();
  func_0x00010c10c480(uVar20);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 105048af8; end: 105048b37;  */

void FUN_105048af8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be0de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105048b38; end: 105048bd3; -[SCGroupActionSheetEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105048b38(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_11271a61c));
  lVar2 = (long)_DAT_11271a604;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
  }
  func_0x00010bdfb780(param_1);
  puStack_38 = PTR_PTR_1126e5c10;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105048bd4; end: 105048bdf; -[SCGroupActionSheetEntryPoint groupActionDismissActionSheetWithCompletion:] */

void FUN_105048bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__detachUIAnimated_completion__11255c780,1,param_3);
  return;
}



/* Entry: 105048be0; end: 105048beb; -[SCGroupActionSheetEntryPoint groupActionSheetDidDismiss] */

void FUN_105048be0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfb790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachUIAnimated_completion__11255c780,0,0);
  return;
}



/* Entry: 105048bec; end: 105048ca7; -[SCGroupActionSheetEntryPoint groupActionShowCameraForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105048bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11271a5e8;
  _objc_loadWeakRetained();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105048ca8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(lVar1);
  func_0x00010bdfb780(param_1,param_2,0,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 105048ca8; end: 105048ce3;  */

void FUN_105048ca8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105048ce4; end: 105048d9f; -[SCGroupActionSheetEntryPoint groupActionOpenProfileForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105048ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11271a5e8;
  _objc_loadWeakRetained();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105048da0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(lVar1);
  func_0x00010bdfb780(param_1,param_2,0,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 105048da0; end: 105048ddb;  */

void FUN_105048da0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105048ddc; end: 105048e43; -[SCGroupActionSheetEntryPoint handlesGroupActionChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105048ddc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11271a5e8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_opt_respondsToSelector();
  _objc_release(lVar1);
  _objc_release(param_1);
  return (uint)lVar2 & 1;
}



/* Entry: 105048e44; end: 105048f0f; -[SCGroupActionSheetEntryPoint groupActioChatWithGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105048e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfd33e0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + _DAT_11271a5e8;
    _objc_loadWeakRetained();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105048f10;
    puStack_48 = &UNK_110841f80;
    lStack_40 = lVar1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    _objc_retain(lVar1);
    func_0x00010bdfb780(param_1,param_2,1,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105048f10; end: 105048f4f;  */

void FUN_105048f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105048f50; end: 1050490d3; -[SCGroupActionSheetEntryPoint _detachUIAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105048f50(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_11271a620) != '\x01') {
    *(undefined1 *)(param_1 + _DAT_11271a620) = 1;
    lVar4 = (long)_DAT_11271a5e8;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfce4c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar3 = (long)_DAT_11271a5ec;
    lVar2 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      _objc_storeWeak(param_1 + lVar3,0);
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained();
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      lVar2 = param_1;
      if (param_3 == 0) {
        _objc_retain(param_4);
        _objc_retain(param_1);
        func_0x00010c0f9680(puVar1);
        _objc_release(param_4);
      }
      else {
        func_0x00010c27ece0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6f440();
      }
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_1050490b4;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
LAB_1050490b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050490d4; end: 10504910f;  */

void FUN_1050490d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105049110; end: 105049383; -[SCGroupActionSheetEntryPoint _factory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105049110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126b4268;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271a624;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271a628;
  _objc_loadWeakRetained();
  lVar20 = (long)_DAT_11271a62c;
  lVar5 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271a630;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271a634;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271a638;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271a5f8;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_11271a618;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271a63c;
  _objc_loadWeakRetained();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar17 = param_1 + _DAT_11271a640;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271a644;
  _objc_loadWeakRetained();
  lVar19 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e660(puVar1,param_2,lVar3,lVar4,lVar6,lVar8,lVar10,lVar12,lVar13,lVar15,lVar16,
                      lVar20,lVar18,lVar19);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar20);
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
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105049384; end: 1050494ef; -[SCGroupActionSheetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105049384(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271a604,0);
  _objc_destroyWeak(param_1 + _DAT_11271a614);
  _objc_destroyWeak(param_1 + _DAT_11271a640);
  _objc_destroyWeak(param_1 + _DAT_11271a5f0);
  _objc_destroyWeak(param_1 + _DAT_11271a610);
  _objc_destroyWeak(param_1 + _DAT_11271a60c);
  _objc_destroyWeak(param_1 + _DAT_11271a608);
  _objc_destroyWeak(param_1 + _DAT_11271a600);
  _objc_destroyWeak(param_1 + _DAT_11271a5fc);
  _objc_destroyWeak(param_1 + _DAT_11271a644);
  _objc_destroyWeak(param_1 + _DAT_11271a618);
  _objc_destroyWeak(param_1 + _DAT_11271a654);
  _objc_destroyWeak(param_1 + _DAT_11271a650);
  _objc_destroyWeak(param_1 + _DAT_11271a64c);
  _objc_destroyWeak(param_1 + _DAT_11271a5f8);
  _objc_destroyWeak(param_1 + _DAT_11271a638);
  _objc_destroyWeak(param_1 + _DAT_11271a634);
  _objc_destroyWeak(param_1 + _DAT_11271a5f4);
  _objc_destroyWeak(param_1 + _DAT_11271a630);
  _objc_destroyWeak(param_1 + _DAT_11271a62c);
  _objc_destroyWeak(param_1 + _DAT_11271a63c);
  _objc_destroyWeak(param_1 + _DAT_11271a628);
  _objc_destroyWeak(param_1 + _DAT_11271a648);
  _objc_destroyWeak(param_1 + _DAT_11271a624);
  _objc_destroyWeak(param_1 + _DAT_11271a5e8);
  _objc_destroyWeak(param_1 + _DAT_11271a5ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271a61c,0);
  return;
}



/* Entry: 1050494f0; end: 105049903; -[SCGroupActionSheetProminentActionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050494f0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11271a658;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4270;
  _objc_alloc(PTR_PTR_1126b4270);
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar4);
  lVar11 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018b20(puVar3,param_2,lVar11,lVar6);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar1);
  lVar11 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4278;
  _objc_alloc(PTR_PTR_1126b4278);
  lVar4 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + (long)_DAT_11271a65c;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c018c60(puVar3,param_2,lVar6,lVar7,lVar2);
  func_0x00010c125b60(lVar11,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010beb3fe0(param_1,param_2,lVar4);
  if ((uVar8 & 1) == 0) {
    uVar8 = param_1 + lVar12;
    _objc_loadWeakRetained();
    uVar9 = uVar8;
    func_0x00010bf7fc00();
    _objc_release(uVar8);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if ((uVar9 & 1) != 0) {
      return;
    }
    lVar1 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar1);
    lVar6 = lVar1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4280;
    _objc_alloc(PTR_PTR_1126b4280);
    lVar4 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar5);
    lVar10 = lVar5;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11271a660;
    lVar2 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c018b40(puVar3,param_2,lVar7,lVar10,lVar2);
    func_0x00010c125b60(lVar6,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar10);
    _objc_release(lVar5);
    _objc_release(lVar7);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4288;
    _objc_alloc(PTR_PTR_1126b4288);
    lVar5 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar5);
    lVar2 = lVar5;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + lVar12;
    _objc_loadWeakRetained(lVar12);
    lVar6 = lVar12;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar11);
    func_0x00010c018b40(puVar3,param_2,lVar2,lVar6,lVar11);
    func_0x00010c125b60(lVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar11);
    _objc_release(lVar6);
    _objc_release(lVar12);
    _objc_release(lVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105049904; end: 105049a63; -[SCGroupActionSheetProminentActionEntryPoint _shouldHideCallingItemsForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105049904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  param_1 = param_1 + _DAT_11271a664;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf28300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf50500();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  func_0x00010bf86d40(lVar5);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(lVar5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105049a64; end: 105049abb;  */

void FUN_105049a64(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c09dd40();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 == 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105049abc; end: 105049b0b; -[SCGroupActionSheetProminentActionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105049abc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271a65c);
  _objc_destroyWeak(param_1 + _DAT_11271a664);
  _objc_destroyWeak(param_1 + _DAT_11271a660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271a658);
  return;
}



/* Entry: 105049b0c; end: 105049bb3; -[SCSnapGroupAction initWithGroupId:context:] */

undefined1 *
FUN_105049b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5c18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105049bb4; end: 105049c6f; -[SCSnapGroupAction prominentActionButton] */

void FUN_105049bb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3fc0;
  _objc_alloc(PTR_PTR_1126b3fc0);
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126b3fc8;
  _objc_alloc(PTR_PTR_1126b3fc8);
  func_0x00010c03b4e0();
  func_0x00010c28d0c0(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c1af000(puVar1,param_2,1);
  func_0x00010b0aea2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc35f8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105049c70; end: 105049c73; -[SCSnapGroupAction prominentActionView:handleActionWithModel:] */

void FUN_105049c70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAction_112566db8);
  return;
}



/* Entry: 105049c74; end: 105049cbb; -[SCSnapGroupAction _handleAction] */

void FUN_105049c74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105049cbc; end: 105049cc3; -[SCSnapGroupAction actionSheetCell] */

undefined8 FUN_105049cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105049cc4; end: 105049ccb; -[SCSnapGroupAction position] */

undefined8 FUN_105049cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105049ccc; end: 105049d07; -[SCSnapGroupAction .cxx_destruct] */

void FUN_105049ccc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105049d08; end: 105049ddb; -[SCVideoCallGroupAction initWithGroupId:context:callLauncherServices:] */

undefined1 *
FUN_105049d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5c20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 3;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105049ddc; end: 105049e97; -[SCVideoCallGroupAction prominentActionButton] */

void FUN_105049ddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3fc0;
  _objc_alloc(PTR_PTR_1126b3fc0);
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126b3fc8;
  _objc_alloc(PTR_PTR_1126b3fc8);
  func_0x00010c03b4e0();
  func_0x00010c28d0c0(puVar1,param_2,puVar2);
  puVar3 = puVar1;
  func_0x00010c1af000(puVar1,param_2,1);
  func_0x00010506bb1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc3638);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105049e98; end: 105049e9b; -[SCVideoCallGroupAction prominentActionView:handleActionWithModel:] */

void FUN_105049e98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAction_112566db8);
  return;
}



/* Entry: 105049e9c; end: 105049fb7; -[SCVideoCallGroupAction _handleAction] */

void FUN_105049e9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0a0440(*(undefined8 *)(param_1 + 0x10),param_2,0x9c);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 105049fb8; end: 105049fbf; -[SCVideoCallGroupAction actionSheetCell] */

undefined8 FUN_105049fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105049fc0; end: 105049fc7; -[SCVideoCallGroupAction position] */

undefined8 FUN_105049fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105049fc8; end: 10504a00f; -[SCVideoCallGroupAction .cxx_destruct] */

void FUN_105049fc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10504a010; end: 10504a09f; -[SCGroupUnifiedActionMenuActionHandler initWithSourcePageType:] */

undefined1 * FUN_10504a010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5c28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10504a0a0; end: 10504a0ab; +[SCGroupUnifiedActionMenuActionHandler announcerIdentifier] */

undefined ** FUN_10504a0a0(void)

{
  return &PTR____CFConstantStringClassReference_110dc3838;
}



/* Entry: 10504a0ac; end: 10504a0b3; -[SCGroupUnifiedActionMenuActionHandler addListener:] */

void FUN_10504a0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10504a0b4; end: 10504a0bb; -[SCGroupUnifiedActionMenuActionHandler removeListener:] */

void FUN_10504a0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10504a0bc; end: 10504a0c7; -[SCGroupUnifiedActionMenuActionHandler setActionMenuPresenter:] */

void FUN_10504a0bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10504a0c8; end: 10504a1c3; -[SCGroupUnifiedActionMenuActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_10504a0c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar8 = param_1;
  uVar5 = param_4;
  func_0x00010be25340();
  if ((int)lVar8 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x00010bf7dbc0(uVar7);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return lVar8;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar2 = uVar5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar2 = uVar5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        lVar8 = 0;
      }
      else {
        lVar6 = param_4 + 0x20;
        _objc_loadWeakRetained(lVar6);
        lVar8 = 1;
        func_0x00010bf849c0();
        _objc_release(lVar6);
      }
      goto LAB_10504a30c;
    }
    uVar3 = uVar5;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b4290;
    _objc_opt_class(PTR_PTR_1126b4290);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    lVar8 = param_4 + 0x20;
    _objc_loadWeakRetained(lVar8);
    uVar3 = uVar2;
    func_0x00010bfceb20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c247a20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c10ec60(lVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar8);
  }
  else {
    func_0x00010bf83100(param_4);
  }
  lVar8 = 1;
LAB_10504a30c:
  _objc_release(uVar5);
  return lVar8;
}



/* Entry: 10504a1c4; end: 10504a383; -[SCGroupUnifiedActionMenuActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10504a1c4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar5 = 0;
      }
      else {
        param_1 = param_1 + 0x20;
        _objc_loadWeakRetained(param_1);
        uVar5 = 1;
        func_0x00010bf849c0();
        _objc_release(param_1);
      }
      goto LAB_10504a30c;
    }
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4290;
    _objc_opt_class(PTR_PTR_1126b4290);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar2 = uVar1;
    func_0x00010bfceb20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c247a20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c10ec60(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    func_0x00010bf83100(param_1);
  }
  uVar5 = 1;
LAB_10504a30c:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 10504a384; end: 10504a3bb; -[SCGroupUnifiedActionMenuActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_10504a384(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf849c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504a3bc; end: 10504a413; -[SCGroupUnifiedActionMenuActionHandler dismissAllActionMenus] */

void FUN_10504a3bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf83dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10504a414; end: 10504a42b; -[SCGroupUnifiedActionMenuActionHandler actionMenuPresenter] */

void FUN_10504a414(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504a42c; end: 10504a443; -[SCGroupUnifiedActionMenuActionHandler delegate] */

void FUN_10504a42c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504a444; end: 10504a44f; -[SCGroupUnifiedActionMenuActionHandler setDelegate:] */

void FUN_10504a444(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10504a450; end: 10504a457; -[SCGroupUnifiedActionMenuActionHandler loggingService] */

undefined8 FUN_10504a450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10504a458; end: 10504a487; -[SCGroupUnifiedActionMenuActionHandler setLoggingService:] */

void FUN_10504a458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10504a488; end: 10504a4d3; -[SCGroupUnifiedActionMenuActionHandler .cxx_destruct] */

void FUN_10504a488(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10504a4d4; end: 10504a64f; -[SCGroupUnifiedActionMenuSettingsActionHandler initWithGroupsDataMutator:dataSource:conversationServices:circumstanceEngine:editGroupNameScopeExposer:editGroupNameScopeBuilderServices:createChatSelectionScopeExposer:] */

undefined1 *
FUN_10504a4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e5c30;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
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



/* Entry: 10504a650; end: 10504a65b; -[SCGroupUnifiedActionMenuSettingsActionHandler setPresentingViewController:] */

void FUN_10504a650(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10504a65c; end: 10504a71f; -[SCGroupUnifiedActionMenuSettingsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10504a65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = 0;
      goto LAB_10504a704;
    }
    func_0x00010be25760(param_1);
  }
  else {
    func_0x00010be28c60(param_1);
  }
  uVar2 = 1;
LAB_10504a704:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 10504a720; end: 10504a7d3; -[SCGroupUnifiedActionMenuSettingsActionHandler _handleEditName] */

void FUN_10504a720(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfceb20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23180(uVar4,param_2,uVar3,puVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10504a7d4; end: 10504a9b3; -[SCGroupUnifiedActionMenuSettingsActionHandler _handleAddToGroup] */

void FUN_10504a7d4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf366c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06ecc0();
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  if ((uVar2 & 1) == 0) {
    func_0x00010c0c2920();
  }
  else {
    func_0x00010c0c2900();
  }
  _objc_release(uVar3);
  uVar2 = uVar1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar3 < uVar4) {
    lVar5 = *(long *)(param_1 + 0x38);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar5 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c038f40(puVar6,param_2,lVar5,1);
    _objc_release(lVar5);
    puVar8 = PTR_PTR_1126b27d8;
    uVar2 = uVar1;
    func_0x00010bfceb20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc1c0(puVar8,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126b2848;
    _objc_alloc(PTR_PTR_1126b2848);
    func_0x00010c056d20();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
      puVar8 = PTR_PTR_1126b2aa8;
      _objc_alloc();
      func_0x00010c019480();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar8;
      _objc_release(uVar9);
      lVar5 = *(long *)(param_1 + 0x20);
    }
    func_0x00010c10cfa0(lVar5,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10504a9b4; end: 10504aa1f; -[SCGroupUnifiedActionMenuSettingsActionHandler createChatSelectionScopeWantsToDismiss:] */

void FUN_10504a9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10504aa20; end: 10504aa67; -[SCGroupUnifiedActionMenuSettingsActionHandler createChatSelectionScopeDidDismiss:] */

void FUN_10504aa20(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10504aa68; end: 10504aa9f; -[SCGroupUnifiedActionMenuSettingsActionHandler createChatSelectionScope:wantsToDismissWithNewChat:] */

void FUN_10504aa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10504aaa0; end: 10504aaa3; -[SCGroupUnifiedActionMenuSettingsActionHandler willDisplayEditGroupNameScope:] */

void FUN_10504aaa0(void)

{
  return;
}



/* Entry: 10504aaa4; end: 10504aaeb; -[SCGroupUnifiedActionMenuSettingsActionHandler didDismissEditGroupNameScope:didUpdate:] */

void FUN_10504aaa4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10504aaec; end: 10504ab03; -[SCGroupUnifiedActionMenuSettingsActionHandler presentingViewController] */

void FUN_10504aaec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504ab04; end: 10504ab83; -[SCGroupUnifiedActionMenuSettingsActionHandler .cxx_destruct] */

void FUN_10504ab04(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 10504ab84; end: 10504acf7; -[SCGroupUnifiedProfileMembersActionHandler initWithSnapchattersDataMutator:snapchattersDataProvider:navigateToChatActionHandler:showCameraActionHandler:navigationDelegate:startChatDelegate:userSession:friendActionSheetScopeExposer:launchProfileFromGroupEnabled:] */

undefined1 *
FUN_10504ab84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e5c38;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4128;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bdf7a00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049d60();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10504acf8; end: 10504aef7; -[SCGroupUnifiedProfileMembersActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10504acf8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfd0140();
  _objc_release(param_5);
  _objc_release(param_3);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = uVar1;
      func_0x00010c0720c0();
      if (((int)uVar2 == 0) &&
         ((*(char *)(param_1 + 0x30) != '\x01' ||
          (uVar2 = uVar1, func_0x00010c0720c0(), (int)uVar2 == 0)))) {
        uVar6 = 0;
        goto LAB_10504aeac;
      }
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b40a8;
      _objc_opt_class(PTR_PTR_1126b40a8);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c244280(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010beba6a0(param_1);
    }
    else {
      uVar3 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b3fe0;
      _objc_opt_class(PTR_PTR_1126b3fe0);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c244280(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bfce860(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010beb7740(param_1);
      _objc_release(uVar5);
    }
    _objc_release(uVar3);
  }
  uVar6 = 1;
LAB_10504aeac:
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 10504aef8; end: 10504af37; -[SCGroupUnifiedProfileMembersActionHandler friendActionSheetOpenProfile:] */

void FUN_10504aef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beba6a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10504af38; end: 10504afdb; -[SCGroupUnifiedProfileMembersActionHandler friendActionSheetShowCameraForSnap:] */

void FUN_10504af38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b40c8;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb9280(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x18),param_2,0,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


