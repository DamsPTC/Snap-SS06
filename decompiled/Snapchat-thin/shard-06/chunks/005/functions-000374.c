/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a51a20; end: 104a51e1f; -[GTMSessionFetcher URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:] */

void FUN_104a51a20(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x28;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_190 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lStack_188 = param_4;
  func_0x00010c1fdd40(param_1);
  lVar3 = param_1;
  func_0x00010c293aa0();
  lVar4 = param_6;
  lStack_180 = param_5;
  if ((int)lVar3 == 0) {
    if ((param_5 != 0) && (param_6 != 0)) {
      lVar3 = param_1;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      lStack_198 = lVar3;
      func_0x00010c0d3c80();
      puVar6 = PTR_PTR_1126ae190;
      func_0x00010bdc2b80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_6;
      func_0x00010bdc2b80(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c124b60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21afe0(lVar4);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar3);
      lVar3 = param_6;
      func_0x00010bf001a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain();
      lVar5 = lVar3;
      func_0x00010bf52a60();
      if (lVar5 != 0) {
        param_5 = *plStack_120;
        do {
          param_4 = 0;
          do {
            if (*plStack_120 != param_5) {
              _objc_enumerationMutation(lVar3);
            }
            lVar7 = lVar3;
            func_0x00010c0dff20(lVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2201e0(lVar4);
            _objc_release(lVar7);
            param_4 = param_4 + 1;
          } while (lVar5 != param_4);
          lVar5 = lVar3;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar3);
      _objc_retain();
      _objc_release(param_6);
      func_0x00010c1ecf20(param_1);
      func_0x00010c0ab1e0(param_1);
      lVar5 = param_1;
      func_0x00010c2a6960();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        unaff_x28 = lVar4;
        func_0x00010c0d3c80(lVar4);
        func_0x00010c287e00(param_1);
      }
      else {
        _objc_retain();
        _objc_sync_enter();
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_104a51e20;
        puStack_160 = &UNK_11084e180;
        lVar7 = lVar5;
        _objc_retain();
        lVar8 = lStack_180;
        lStack_140 = lVar7;
        _objc_retain();
        lVar7 = lVar4;
        lStack_158 = lVar8;
        _objc_retain();
        lVar8 = param_7;
        lStack_150 = lVar7;
        lStack_148 = param_1;
        _objc_retain();
        ppuVar9 = &puStack_178;
        lStack_138 = lVar8;
        _objc_retainBlock(ppuVar9);
        func_0x00010c06ad20(param_1);
        _objc_release(ppuVar9);
        _objc_release(lStack_138);
        _objc_release(lStack_150);
        _objc_release(lStack_158);
        _objc_release(lStack_140);
        _objc_sync_exit(param_1);
        unaff_x28 = param_1;
      }
      _objc_release(unaff_x28);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lStack_198);
      if (lVar5 != 0) goto LAB_104a51da0;
    }
    (**(code **)(param_7 + 0x10))(param_7,lVar4);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
LAB_104a51da0:
  _objc_release(param_7);
  _objc_release(lVar4);
  _objc_release(lStack_180);
  _objc_release(lStack_188);
  lVar3 = lStack_190;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_sync_exit(unaff_x28);
    lVar5 = lVar3;
    __Unwind_Resume();
    pcStack_1a8 = FUN_104a51e20;
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f8 = 0xc2000000;
    uStack_1f0 = 0x104a51eac;
    puStack_1e8 = &UNK_1107c0258;
    uStack_1e0 = *(undefined8 *)(lVar5 + 0x30);
    lVar4 = *(long *)(lVar5 + 0x38);
    uVar10 = *(undefined8 *)(lVar5 + 0x40);
    lStack_1d0 = param_7;
    lStack_1c8 = param_5;
    lStack_1c0 = param_4;
    lStack_1b8 = lVar3;
    puStack_1b0 = &stack0xfffffffffffffff0;
    _objc_retain();
    uStack_1d8 = uVar10;
    (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,&puStack_200);
    _objc_release(uStack_1d8);
    return;
  }
  return;
}



/* Entry: 104a51e20; end: 104a51f0f;  */

void FUN_104a51e20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104a51eac;
  puStack_48 = &UNK_1107c0258;
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain();
  uStack_38 = uVar4;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,&puStack_60);
  _objc_release(uStack_38);
  return;
}



/* Entry: 104a51f10; end: 104a52103; -[GTMSessionFetcher URLSession:dataTask:didReceiveResponse:completionHandler:] */

void FUN_104a51f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  _objc_retain();
  func_0x00010c1fdd40(param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104a52104;
  puStack_78 = &UNK_110875d40;
  lStack_70 = param_1;
  _objc_retain();
  ppuVar2 = &puStack_90;
  uStack_68 = param_6;
  _objc_retainBlock();
  _objc_retain();
  _objc_sync_enter();
  lVar3 = *(long *)(param_1 + 0x1c8);
  _objc_retainBlock();
  if (lVar3 == 0) {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    (*(code *)ppuVar2[2])(ppuVar2,1);
  }
  else {
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104a52228;
    puStack_b0 = &UNK_11097cfb0;
    lVar4 = lVar3;
    _objc_retain();
    uVar5 = param_5;
    lStack_a0 = lVar4;
    _objc_retain();
    ppuVar6 = ppuVar2;
    uStack_a8 = uVar5;
    _objc_retain();
    ppuVar7 = &puStack_c8;
    ppuStack_98 = ppuVar6;
    _objc_retainBlock(ppuVar7);
    func_0x00010c06ad20(param_1);
    _objc_release(ppuVar7);
    _objc_release(ppuStack_98);
    _objc_release(uStack_a8);
    _objc_release(lStack_a0);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a52104; end: 104a52217;  */

void FUN_104a52104(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c1ba840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0) = 0;
  if ((param_2 != 0) && (0 < lVar3)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a8);
    _objc_retainBlock();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = lVar3;
      _objc_retain();
      func_0x00010c06ad40(uVar4);
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 104a52218; end: 104a52227;  */

void FUN_104a52218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a52224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104a52228; end: 104a5229f;  */

void FUN_104a52228(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104a522a0;
  puStack_30 = &UNK_110852668;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  uStack_28 = uVar3;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 104a522a0; end: 104a522ab;  */

void FUN_104a522a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a522a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104a522ac; end: 104a522b3; -[GTMSessionFetcher URLSession:dataTask:didBecomeDownloadTask:] */

void FUN_104a522ac(undefined8 param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1fdd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSessionTask__11265d178,in_x4);
  return;
}



/* Entry: 104a522b4; end: 104a52433; -[GTMSessionFetcher URLSession:task:didReceiveChallenge:completionHandler:] */

void FUN_104a522b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  _objc_retain();
  func_0x00010c1fdd40(param_1,param_2,param_4);
  lVar1 = param_1;
  func_0x00010bf34c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c13b6a0(param_1,param_2,param_5,param_6);
  }
  else {
    _objc_retain();
    _objc_sync_enter();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104a52434;
    puStack_68 = &UNK_1108451b8;
    lVar2 = lVar1;
    _objc_retain();
    uVar3 = param_5;
    lStack_60 = param_1;
    lStack_50 = lVar2;
    _objc_retain();
    uVar4 = param_6;
    uStack_58 = uVar3;
    _objc_retain();
    uStack_48 = uVar4;
    func_0x00010c06ad20(param_1,param_2,1,&puStack_80);
    _objc_release(uStack_48);
    _objc_release(uStack_58);
    _objc_release(lStack_50);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a52434; end: 104a52447;  */

void FUN_104a52434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a52444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104a52448; end: 104a526bb; -[GTMSessionFetcher respondToChallenge:completionHandler:] */

void FUN_104a52448(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_3;
  func_0x00010c1126c0();
  if (2 < lVar1) {
    (**(code **)(param_4 + 0x10))(param_4,2,0);
    goto LAB_104a52658;
  }
  lVar1 = param_3;
  func_0x00010c118f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf10c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c071ae0();
  if ((int)lVar3 == 0) {
    lVar5 = *(long *)(param_1 + 0xb8);
    _objc_retain();
    lVar3 = param_3;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c07b6c0();
    lVar6 = lVar5;
    if ((int)lVar7 == 0) {
LAB_104a525cc:
      _objc_release(lVar3);
    }
    else {
      lVar7 = *(long *)(param_1 + 0xc0);
      _objc_release(lVar3);
      if (lVar7 != 0) {
        lVar6 = *(long *)(param_1 + 0xc0);
        _objc_retain();
        lVar3 = lVar5;
        goto LAB_104a525cc;
      }
    }
    if (lVar6 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,1,0);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4,0,lVar6);
    }
LAB_104a52644:
    _objc_release(lVar6);
  }
  else {
    lVar3 = param_3;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c15f640();
    _objc_release(lVar3);
    if (lVar7 != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104a526bc;
      puStack_60 = &UNK_1107c0288;
      lVar3 = param_4;
      _objc_retain();
      ppuVar4 = &puStack_78;
      lStack_58 = lVar3;
      _objc_retainBlock();
      if (*(char *)(param_1 + 0x17a) == '\x01') {
        (*(code *)ppuVar4[2])(ppuVar4,lVar7,1);
      }
      else {
        _objc_opt_class(param_1);
        func_0x00010bf99a60();
      }
      _objc_release(ppuVar4);
      lVar6 = lStack_58;
      goto LAB_104a52644;
    }
    (**(code **)(param_4 + 0x10))(param_4,1,0);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_104a52658:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a526bc; end: 104a5272b;  */

void FUN_104a526bc(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURLCredential_1126c8020;
    func_0x00010bf5bfa0(PTR__OBJC_CLASS___NSURLCredential_1126c8020,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a52728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2,0);
  return;
}



/* Entry: 104a5272c; end: 104a528b3; +[GTMSessionFetcher redirectURLWithOriginalRequestURL:redirectRequestURL:] */

void FUN_104a5272c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain();
  _objc_retain();
  ppuVar3 = param_3;
  if ((param_4 == (undefined **)0x0) || (ppuVar3 = param_4, param_3 == (undefined **)0x0)) {
    _objc_retain(ppuVar3);
    goto LAB_104a5288c;
  }
  ppuVar5 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_4;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar5 == (undefined **)0x0) || (ppuVar1 == (undefined **)0x0)) {
    if (ppuVar5 != (undefined **)0x0) goto LAB_104a527c4;
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc8d78;
LAB_104a527fc:
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    ppuVar4 = ppuVar5;
    func_0x00010c08fa60();
    if ((ppuVar2 == ppuVar4) &&
       (ppuVar2 = ppuVar1, func_0x00010bf32ee0(ppuVar1,param_2,ppuVar5),
       ppuVar2 == (undefined **)0x0)) goto LAB_104a52870;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6900();
    ppuVar3 = ppuVar2;
    func_0x00010bdc2b80(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  else {
    ppuVar2 = ppuVar5;
    func_0x00010bf32ee0(ppuVar5,param_2,ppuVar1);
    if (ppuVar2 != (undefined **)0x0) {
LAB_104a527c4:
      ppuVar2 = ppuVar5;
      func_0x00010bf32ee0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
      if (((ppuVar2 != (undefined **)0x0) || (ppuVar1 == (undefined **)0x0)) ||
         (ppuVar2 = ppuVar1,
         func_0x00010bf32ee0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d78),
         ppuVar2 != (undefined **)0x0)) goto LAB_104a527fc;
    }
LAB_104a52870:
    _objc_retain(param_4);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar5);
LAB_104a5288c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104a528b4; end: 104a5296b; +[GTMSessionFetcher evaluateServerTrust:forRequest:completionHandler:] */

void FUN_104a528b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _CFRetain(param_3);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104a5296c;
  puStack_48 = &UNK_110860cf8;
  uStack_40 = param_5;
  uStack_38 = param_3;
  _objc_retain(param_5);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 104a5296c; end: 104a52a0f;  */

void FUN_104a5296c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_38;
  
  lStack_38 = 0;
  puVar1 = PTR_PTR_1126ae190;
  _objc_opt_class(PTR_PTR_1126ae190);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _SecTrustEvaluateWithError(uVar2,&lStack_38);
  _objc_sync_exit(puVar1);
  _objc_release(puVar1);
  if (lStack_38 != 0) {
    _CFRelease();
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),uVar2);
  _CFRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104a52a10; end: 104a52a1b; -[GTMSessionFetcher invokeOnCallbackQueueUnlessStopped:] */

void FUN_104a52a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_invokeOnCallbackQueueAfterUserSt_1125f8558,0,param_3);
  return;
}



/* Entry: 104a52a1c; end: 104a52a1f; -[GTMSessionFetcher invokeOnCallbackQueueAfterUserStopped:block:] */

void FUN_104a52a1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invokeOnCallbackUnsynchronizedQu_1125f8568);
  return;
}



/* Entry: 104a52a20; end: 104a52a2f; -[GTMSessionFetcher invokeOnCallbackUnsynchronizedQueueAfterUserStopped:block:] */

void FUN_104a52a20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_invokeOnCallbackQueue_afterUserS_1125f8550,
             *(undefined8 *)(param_1 + 0xe0),param_3,param_4);
  return;
}



/* Entry: 104a52a30; end: 104a52adf; -[GTMSessionFetcher invokeOnCallbackQueue:afterUserStopped:block:] */

void FUN_104a52a30(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104a52ae0;
    puStack_60 = &UNK_1108523f8;
    uVar1 = param_5;
    lStack_58 = param_1;
    uStack_48 = param_4;
    _objc_retain();
    uStack_50 = uVar1;
    FUN_104c62d88(uVar2,param_3,&puStack_78);
    _objc_release(uStack_50);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 104a52ae0; end: 104a52bb7;  */

void FUN_104a52ae0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x20) + 0x17b) & 1) == 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x100);
    func_0x00010c256fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_sync_enter();
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x119) & 1) != 0) {
LAB_104a52b80:
      _objc_sync_exit(uVar2);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    if (lVar1 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x150);
      func_0x00010bf433a0();
      if (lVar3 != 1) goto LAB_104a52b80;
    }
    _objc_sync_exit(uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000104a52b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 104a52bb8; end: 104a52d53; -[GTMSessionFetcher invokeFetchCallbacksOnCallbackQueueWithData:error:mayDecorate:shouldReleaseCallbacks:] */

void FUN_104a52bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,int param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain();
  if (param_5 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x100);
    _objc_opt_respondsToSelector(uVar1,PTR_s_decorators_1125b7750);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x100);
      func_0x00010bf676a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        func_0x00010bf082c0(param_1);
        goto LAB_104a52d28;
      }
      _objc_release(lVar2);
    }
  }
  _objc_retain();
  _objc_sync_enter();
  lVar2 = *(long *)(param_1 + 400);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(uVar4);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (param_6 != 0) {
    func_0x00010c1284a0(param_1);
  }
  if (lVar2 != 0) {
    lVar3 = lVar2;
    _objc_retain();
    uVar5 = param_3;
    _objc_retain();
    uVar6 = param_4;
    _objc_retain();
    func_0x00010c06ad00(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
  _objc_release(uVar4);
LAB_104a52d28:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a52d54; end: 104a52de3;  */

void FUN_104a52d54(long param_1)

{
  undefined *puVar1;
  
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c1d0640(puVar1);
  }
  func_0x00010c1049e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a52de4; end: 104a52eeb; -[GTMSessionFetcher postNotificationOnMainThreadWithName:userInfo:requireAsync:] */

void FUN_104a52de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104a52eec;
  puStack_60 = &UNK_110848ba8;
  _objc_retain();
  uStack_58 = param_3;
  uStack_50 = param_1;
  _objc_retain();
  ppuVar1 = &puStack_78;
  uStack_48 = param_4;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((int)puVar2 == 0) || ((param_5 & 1) != 0)) {
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a52eec; end: 104a52f2f;  */

void FUN_104a52eec(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a52f30; end: 104a53073; -[GTMSessionFetcher URLSession:task:needNewBodyStream:] */

void FUN_104a52f30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  func_0x00010c1fdd40(param_1);
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retainBlock();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    lVar2 = lVar1;
    _objc_retain();
    lVar3 = param_5;
    _objc_retain();
    func_0x00010c06ad40(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a53074; end: 104a53083;  */

void FUN_104a53074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a53080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104a53084; end: 104a53177; -[GTMSessionFetcher URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:] */

void FUN_104a53084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1fdd40(param_1,param_2,param_4);
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x1e0) != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104a53178;
    puStack_68 = &UNK_11084e430;
    lStack_60 = param_1;
    uStack_58 = param_5;
    uStack_50 = param_6;
    uStack_48 = param_7;
    func_0x00010c06ad40(param_1,param_2,&puStack_80);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a53178; end: 104a531e7;  */

void FUN_104a53178(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x1e0);
  _objc_retainBlock();
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))
              (lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104a531e8; end: 104a533bf; -[GTMSessionFetcher URLSession:dataTask:didReceiveData:] */

void FUN_104a531e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  func_0x00010c1fdd40(param_1,param_2,param_4);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_retain();
    _objc_sync_enter();
    lVar2 = *(long *)(param_1 + 0x1a8);
    _objc_retainBlock();
    if (lVar2 == 0) {
      if ((*(byte *)(param_1 + 0x119) & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0x88);
        if (lVar3 == 0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
          _objc_alloc_init();
          uVar5 = *(undefined8 *)(param_1 + 0x88);
          *(undefined **)(param_1 + 0x88) = puVar4;
          _objc_release(uVar5);
          lVar3 = *(long *)(param_1 + 0x88);
        }
        func_0x00010bf06ae0(lVar3,param_2,param_5);
        uVar5 = *(undefined8 *)(param_1 + 0x88);
        func_0x00010c08fa60();
        *(undefined8 *)(param_1 + 0xb0) = uVar5;
        if (*(long *)(param_1 + 0x1b0) != 0) {
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc2000000;
          pcStack_90 = FUN_104a533d0;
          puStack_88 = &UNK_110848c48;
          lStack_80 = param_1;
          lStack_78 = lVar1;
          func_0x00010c06ad40(param_1,param_2,&puStack_a0);
        }
      }
    }
    else {
      *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + lVar1;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_104a533c0;
      puStack_58 = &UNK_11084aaa8;
      lVar1 = lVar2;
      _objc_retain();
      lVar3 = param_5;
      lStack_48 = lVar1;
      _objc_retain();
      lStack_50 = lVar3;
      func_0x00010c06ad40(param_1,param_2,&puStack_70);
      _objc_release(lStack_50);
      _objc_release(lStack_48);
    }
    _objc_release(lVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a533c0; end: 104a533cf;  */

void FUN_104a533c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a533cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a533d0; end: 104a53447;  */

void FUN_104a533d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_sync_enter();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x1b0);
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x28),uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104a53448; end: 104a535bf; -[GTMSessionFetcher URLSession:dataTask:willCacheResponse:completionHandler:] */

void FUN_104a53448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0x1e8);
  _objc_retainBlock();
  if (lVar1 == 0) {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    (**(code **)(param_6 + 0x10))(param_6,param_5);
  }
  else {
    lVar2 = lVar1;
    _objc_retain();
    uVar3 = param_5;
    _objc_retain();
    lVar4 = param_6;
    _objc_retain();
    func_0x00010c06ad20(param_1);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a535c0; end: 104a535d3;  */

void FUN_104a535c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a535d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104a535d4; end: 104a53703; -[GTMSessionFetcher URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:] */

void FUN_104a535d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1fdd40(param_1,param_2,param_4);
  _objc_retain();
  _objc_sync_enter();
  lVar2 = *(long *)(param_1 + 0x1b8);
  _objc_retainBlock();
  if (lVar2 != 0) {
    lVar1 = *(long *)PTR__NSURLSessionTransferSizeUnknown_110345640;
    if (param_6 <= param_7) {
      lVar1 = param_7;
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104a53704;
    puStack_78 = &UNK_1107c0018;
    lVar3 = lVar2;
    _objc_retain();
    lStack_70 = lVar3;
    uStack_68 = param_5;
    lStack_60 = param_6;
    lStack_58 = lVar1;
    func_0x00010c06ad40(param_1,param_2,&puStack_90);
    _objc_release(lStack_70);
  }
  _objc_release(lVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a53704; end: 104a53717;  */

void FUN_104a53704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a53714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104a53718; end: 104a5371f; -[GTMSessionFetcher URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:] */

void FUN_104a53718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fdd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSessionTask__11265d178,param_4);
  return;
}



/* Entry: 104a53720; end: 104a539d3; -[GTMSessionFetcher URLSession:downloadTask:didFinishDownloadingToURL:] */

void FUN_104a53720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010c1fdd40(param_1);
  func_0x00010bfc99e0(param_5);
  uVar1 = 0;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar2);
  uVar5 = uVar1;
  func_0x00010c0b4ca0();
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c12cc60();
  uVar5 = 0;
  _objc_retain(0);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010bf3ec40(uVar5);
  }
  lVar6 = param_1;
  func_0x00010c252f80();
  if (lVar6 - 400U < 0xffffffffffffff38) {
    if (0x270 < *(long *)(param_1 + 0xb0) - 1U >> 5) goto LAB_104a53944;
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar4;
  }
  else {
    uVar7 = uVar2;
    func_0x00010bdc2cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf55da0();
    uVar8 = 0;
    _objc_retain();
    if ((int)puVar4 == 0) {
LAB_104a53918:
      _objc_storeStrong(param_1 + 0x90,uVar8);
      uVar9 = uVar8;
    }
    else {
      puVar4 = puVar3;
      func_0x00010c0d1580();
      uVar9 = uVar8;
      _objc_retain(uVar8);
      _objc_release(uVar8);
      uVar8 = uVar9;
      if (((ulong)puVar4 & 1) == 0) goto LAB_104a53918;
    }
    _objc_release(uVar7);
  }
  _objc_release(uVar9);
LAB_104a53944:
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a539d4; end: 104a53d7b; -[GTMSessionFetcher URLSession:task:didCompleteWithError:] */

void FUN_104a539d4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  byte bVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  func_0x00010c1fdd40(param_1,param_2,param_4);
  puVar2 = param_1;
  func_0x00010c252ee0();
  _objc_retain();
  _objc_sync_enter();
  puVar4 = param_1;
  if ((param_1[0xc9] & 1) == 0) {
    if (param_1[0x119] == '\x01') {
      bVar9 = param_1[0x17b];
      bVar10 = bVar9;
      if (param_5 != 0) goto LAB_104a53a78;
LAB_104a53a98:
      param_5 = *(long *)(param_1 + 0x90);
      _objc_retain();
      if ((param_5 == 0 && puVar2 < (undefined *)0x12c) && (bVar10 & 1) == 0) {
        uVar3 = param_4;
        func_0x00010bf52ca0();
        *(undefined8 *)(param_1 + 0x1a0) = uVar3;
      }
      _objc_sync_exit(param_1);
      _objc_release(param_1);
      if ((bVar10 & 1) != 0) goto LAB_104a53adc;
      if (param_5 == 0 && puVar2 < (undefined *)0x12c) {
        func_0x00010bfafe80(param_1,param_2,0,0);
        goto LAB_104a53d38;
      }
    }
    else {
      bVar9 = 0;
      bVar10 = 0;
      if (param_5 == 0) goto LAB_104a53a98;
LAB_104a53a78:
      _objc_sync_exit(param_1);
      _objc_release(param_1);
      if ((bVar9 & 1) != 0) {
LAB_104a53adc:
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560();
        if (param_5 != 0) {
          func_0x00010c1d0560(puVar4,param_2,param_5,
                              *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660);
        }
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110da95f8,0xfffffffffffffff9,
                            puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfafe80(param_1,param_2,puVar2,0);
        _objc_release(puVar2);
        goto LAB_104a53d2c;
      }
    }
    if ((puVar2 == (undefined *)0x193) &&
       (puVar5 = param_1, func_0x00010c0829e0(), (int)puVar5 != 0)) {
      puVar5 = param_1;
      func_0x00010c13b720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = param_1;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c071ae0();
      _objc_release(puVar7);
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = puVar5;
        func_0x00010bf001a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        bVar1 = puVar8 != (undefined *)0x0;
        if (puVar8 != (undefined *)0x0) {
          puVar7 = puVar5;
          func_0x00010c0d3c80(puVar5);
          func_0x00010c21afe0();
          func_0x00010c287e00(param_1,param_2,puVar7);
          func_0x00010c1fd860(param_1,param_2,0);
          _objc_release(puVar7);
        }
        _objc_release(puVar8);
      }
      else {
        bVar1 = false;
      }
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    else {
      bVar1 = false;
    }
    func_0x00010c160260();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010c1fdb80(param_1,param_2,0);
      func_0x00010bfafc60(puVar4);
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104a53d7c;
    puStack_78 = &UNK_110848bd8;
    puStack_70 = param_1;
    lStack_68 = param_5;
    _objc_retain(param_5);
    func_0x00010c232c20(param_1,param_2,puVar2,param_5,bVar1,&puStack_90);
    _objc_release(lStack_68);
  }
  else {
    _objc_sync_exit(param_1);
  }
LAB_104a53d2c:
  _objc_release(puVar4);
  _objc_release(param_5);
LAB_104a53d38:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a53d7c; end: 104a53d8b;  */

void FUN_104a53d7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfafe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishWithError_shouldRetry__1125c9948,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 104a53d8c; end: 104a53eaf; -[GTMSessionFetcher URLSession:task:didFinishCollectingMetrics:] */

void FUN_104a53d8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  lVar1 = *(long *)(param_1 + 0x1f8);
  _objc_retainBlock();
  if (lVar1 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104a53eb0;
    puStack_58 = &UNK_11084aaa8;
    lVar2 = lVar1;
    _objc_retain();
    uVar3 = param_5;
    lStack_48 = lVar2;
    _objc_retain();
    uStack_50 = uVar3;
    func_0x00010c06ad40(param_1,param_2,&puStack_70);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
  }
  _objc_release(lVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a53eb0; end: 104a53ebf;  */

void FUN_104a53eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a53ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a53ec0; end: 104a53fbf; -[GTMSessionFetcher URLSessionDidFinishEventsForBackgroundURLSession:] */

void FUN_104a53ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c12d980(param_1);
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_1;
  func_0x00010c266ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211060(param_1,param_2,0);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
    _objc_retain();
    _objc_sync_enter();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar3);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010bfafc60(uVar2);
    }
    _objc_release(uVar2);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a53fc0; end: 104a54033; -[GTMSessionFetcher URLSession:didBecomeInvalidWithError:] */

void FUN_104a53fc0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fd870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSession__11265d040,0);
  return;
}



/* Entry: 104a54034; end: 104a544f7; -[GTMSessionFetcher finishWithError:shouldRetry:] */

void FUN_104a54034(double param_1,ulong param_2,undefined8 param_3,undefined *param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain();
  func_0x00010c12d980(param_2);
  uVar2 = param_2;
  func_0x00010c252ee0();
  uVar3 = param_2;
  func_0x00010bf6ec00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_sync_enter();
  if ((param_4 == (undefined *)0x0) && (uVar2 < 300)) {
    lVar4 = *(long *)(param_2 + 0x88);
    func_0x00010c08fa60();
    puVar10 = (undefined *)0x0;
    if ((lVar4 != 0) && (uVar3 != 0)) {
      puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      uVar2 = uVar3;
      func_0x00010bdc2cc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf55da0();
      puVar5 = (undefined *)0x0;
      _objc_retain();
      puVar10 = puVar5;
      if ((int)puVar9 == 0) {
LAB_104a5441c:
        _objc_retain();
        uVar6 = *(undefined8 *)(param_2 + 0x90);
        *(undefined **)(param_2 + 0x90) = puVar10;
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_2 + 0x88);
        func_0x00010c2be5a0();
        _objc_retain();
        _objc_release(puVar5);
        if (iVar1 == 0) goto LAB_104a5441c;
        uVar6 = *(undefined8 *)(param_2 + 0x88);
        *(undefined8 *)(param_2 + 0x88) = 0;
      }
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(puVar7);
    }
    uVar6 = *(undefined8 *)(param_2 + 0x88);
    _objc_retain(uVar6);
  }
  else {
    if ((param_5 & 1) != 0) {
      _objc_sync_exit(param_2);
      _objc_release(param_2);
      func_0x00010bf18900(param_2);
      func_0x00010c15cd00(param_2);
      goto LAB_104a5449c;
    }
    if (param_4 == (undefined *)0x0) {
      lVar8 = *(long *)(param_2 + 0x88);
      func_0x00010c08fa60();
      lVar4 = 0xa0;
      if (lVar8 != 0) {
        lVar4 = 0x88;
      }
      lVar4 = *(long *)(param_2 + lVar4);
      uVar2 = param_2;
      func_0x00010c13b8e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_104a544f8(lVar4,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      param_4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = *(long *)(param_2 + 0x1c0);
      _objc_retainBlock();
      uVar6 = *(undefined8 *)(param_2 + 0x1c0);
      *(undefined8 *)(param_2 + 0x1c0) = 0;
      _objc_release(uVar6);
      if (lVar4 != 0) {
        puVar10 = param_4;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar10;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        if (puVar7 != (undefined *)0x0) {
          param_1 = 1.60807493534087e-314;
          lVar8 = lVar4;
          _objc_retain();
          puVar10 = puVar7;
          _objc_retain();
          func_0x00010c06ad20(param_2);
          _objc_release(puVar10);
          _objc_release(lVar8);
        }
        _objc_release(puVar7);
      }
    }
    _objc_release(lVar4);
    lVar4 = *(long *)(param_2 + 0x88);
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x88);
      _objc_retain(uVar6);
    }
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar10 = param_4;
    if (*(long *)(param_2 + 0x128) != 0) {
      func_0x00010c292820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72020(puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x158));
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(-param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar7);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar7);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar9 = param_4;
      func_0x00010bf87dc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3ec40(param_4);
      func_0x00010bf99240(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
  }
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  func_0x00010c15cd00(param_2);
  func_0x00010c2324a0(param_2);
  func_0x00010c06aca0(param_2);
  func_0x00010c255f20(param_2);
  _objc_release(uVar6);
  param_4 = puVar10;
LAB_104a5449c:
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 104a544f8; end: 104a545d7;  */

undefined * FUN_104a544f8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar2);
    lVar3 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c1d0640(puVar2);
    }
    _objc_release(lVar3);
  }
  puVar4 = puVar2;
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retainAutoreleaseReturnValue(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 104a545d8; end: 104a545e7;  */

void FUN_104a545d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a545e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a545e8; end: 104a545ef; -[GTMSessionFetcher shouldReleaseCallbacksUponCompletion] */

undefined8 FUN_104a545e8(void)

{
  return 1;
}



/* Entry: 104a545f0; end: 104a5464b; -[GTMSessionFetcher logNowWithError:] */

void FUN_104a545f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_logFetchWithError__1125256a0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0f8f20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a5464c; end: 104a5475f; -[GTMSessionFetcher isRetryError:] */

undefined *
FUN_104a5464c(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined *param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  bool bVar14;
  undefined **appuStack_b0 [6];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_4;
  _objc_retain();
  ppuVar11 = &PTR____CFConstantStringClassReference_110da9618;
  appuStack_b0[1] = &PTR____CFConstantStringClassReference_110da9618;
  appuStack_b0[2] = (undefined **)0x1f6;
  appuStack_b0[3] = &PTR____CFConstantStringClassReference_110da9618;
  appuStack_b0[4] = (undefined **)0x1f7;
  appuStack_b0[5] = &PTR____CFConstantStringClassReference_110da9618;
  uStack_80 = 0x1f8;
  uStack_78 = *(undefined8 *)PTR__NSURLErrorDomain_110345620;
  uStack_70 = 0xfffffffffffffc17;
  uStack_60 = 0xfffffffffffffc13;
  uStack_58 = 0;
  uStack_50 = 0;
  ppuVar3 = param_4;
  uStack_68 = uStack_78;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_4;
  func_0x00010bf3ec40();
  pppuVar12 = appuStack_b0 + 1;
  do {
    if (ppuVar4 == pppuVar12[-1]) {
      ppuVar5 = ppuVar3;
      func_0x00010c071ae0();
      uVar10 = (uint)param_6;
      ppuVar9 = ppuVar11;
      if (((ulong)ppuVar5 & 1) != 0) {
        puVar6 = (undefined *)0x1;
        goto LAB_104a54718;
      }
    }
    uVar10 = (uint)param_6;
    ppuVar11 = *pppuVar12;
    pppuVar12 = pppuVar12 + 2;
  } while (ppuVar11 != (undefined **)0x0);
  puVar6 = (undefined *)0x0;
  ppuVar11 = ppuVar9;
LAB_104a54718:
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  puVar6 = param_4[0x1f];
  if (puVar6 == (undefined *)0x0) {
LAB_104a54800:
    bVar14 = false;
  }
  else {
    bVar14 = false;
    if ((ppuVar11 == (undefined **)0x191) && (((ulong)param_4[0x2c] & 1) == 0)) {
      _objc_opt_respondsToSelector(puVar6,PTR_s_primeForRefresh_1126226a0);
      if (((ulong)puVar6 & 1) != 0) {
        iVar2 = (int)param_4[0x1f];
        func_0x00010c113200();
        if (iVar2 != 0) {
          bVar14 = true;
          *(undefined1 *)(param_4 + 0x2c) = 1;
          func_0x00010c289440(param_4);
          goto LAB_104a54804;
        }
      }
      goto LAB_104a54800;
    }
  }
LAB_104a54804:
  _objc_retain();
  _objc_sync_enter();
  ppuVar11 = param_4;
  func_0x00010c07c980();
  if ((int)ppuVar11 == 0) {
    bVar1 = false;
LAB_104a54870:
    if ((bVar14 || (uVar10 & 1) != 0) || (bVar1)) goto LAB_104a54884;
    ppuVar11 = (undefined **)0x0;
  }
  else {
    ppuVar11 = param_4;
    func_0x00010bfdb400();
    if (((ulong)ppuVar11 & 1) == 0) {
      func_0x00010c0d9e40(param_4);
      puVar6 = param_4[0x26];
      bVar1 = param_1 < (double)puVar6;
      if ((bVar1) && (0.0 < (double)puVar6)) {
        func_0x00010c26f3a0(param_4[0x2b]);
        bVar1 = -param_1 <= (double)puVar6 * 3.0;
      }
      goto LAB_104a54870;
    }
LAB_104a54884:
    puVar13 = param_4[0x11];
    ppuVar11 = param_4;
    func_0x00010c13b8e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_104a544f8(puVar13,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == (undefined *)0x0) {
      param_5 = puVar6;
      _objc_retain();
    }
    if ((bVar14 || (uVar10 & 1) != 0) ||
       (ppuVar11 = param_4, func_0x00010c07c9a0(), ((ulong)ppuVar11 & 1) != 0)) {
      ppuVar11 = (undefined **)0x1;
    }
    else if (param_5 == puVar6) {
      ppuVar11 = (undefined **)0x0;
    }
    else {
      ppuVar11 = param_4;
      func_0x00010c07c9a0();
    }
    puVar7 = param_4[0x3e];
    _objc_retainBlock();
    if (puVar7 != (undefined *)0x0) {
      _objc_retain();
      _objc_retain();
      lVar8 = param_7;
      _objc_retain();
      func_0x00010c06ad40(param_4);
      _objc_release(lVar8);
      _objc_release(param_5);
      _objc_release(puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar13);
      _objc_sync_exit(param_4);
      _objc_release(param_4);
      goto LAB_104a549f4;
    }
    _objc_release(puVar6);
    _objc_release(puVar13);
  }
  _objc_sync_exit(param_4);
  _objc_release(param_4);
  (**(code **)(param_7 + 0x10))(param_7,ppuVar11);
LAB_104a549f4:
  _objc_release(param_7);
  _objc_release(param_5);
  return param_5;
}



/* Entry: 104a54760; end: 104a54a6b; -[GTMSessionFetcher shouldRetryNowForStatus:error:forceAssumeRetry:response:] */

void FUN_104a54760(double param_1,ulong param_2,undefined8 param_3,long param_4,undefined *param_5,
                  uint param_6,long param_7)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  double dVar9;
  
  _objc_retain();
  _objc_retain();
  uVar3 = *(ulong *)(param_2 + 0xf8);
  if (uVar3 == 0) {
LAB_104a54800:
    bVar8 = false;
  }
  else {
    bVar8 = false;
    if ((param_4 == 0x191) && ((*(byte *)(param_2 + 0x160) & 1) == 0)) {
      _objc_opt_respondsToSelector(uVar3,PTR_s_primeForRefresh_1126226a0);
      if ((uVar3 & 1) != 0) {
        iVar2 = (int)*(undefined8 *)(param_2 + 0xf8);
        func_0x00010c113200();
        if (iVar2 != 0) {
          bVar8 = true;
          *(undefined1 *)(param_2 + 0x160) = 1;
          func_0x00010c289440(param_2);
          goto LAB_104a54804;
        }
      }
      goto LAB_104a54800;
    }
  }
LAB_104a54804:
  _objc_retain();
  _objc_sync_enter();
  uVar3 = param_2;
  func_0x00010c07c980();
  if ((int)uVar3 == 0) {
    bVar1 = false;
LAB_104a54870:
    if ((bVar8 || (param_6 & 1) != 0) || (bVar1)) goto LAB_104a54884;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010bfdb400();
    if ((uVar3 & 1) == 0) {
      func_0x00010c0d9e40(param_2);
      dVar9 = *(double *)(param_2 + 0x130);
      bVar1 = param_1 < dVar9;
      if ((bVar1) && (0.0 < dVar9)) {
        func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x158));
        bVar1 = -param_1 <= dVar9 * 3.0;
      }
      goto LAB_104a54870;
    }
LAB_104a54884:
    uVar7 = *(undefined8 *)(param_2 + 0x88);
    uVar3 = param_2;
    func_0x00010c13b8e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_104a544f8(uVar7,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == (undefined *)0x0) {
      param_5 = puVar4;
      _objc_retain();
    }
    if ((bVar8 || (param_6 & 1) != 0) || (uVar3 = param_2, func_0x00010c07c9a0(), (uVar3 & 1) != 0))
    {
      uVar3 = 1;
    }
    else if (param_5 == puVar4) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_2;
      func_0x00010c07c9a0();
    }
    lVar5 = *(long *)(param_2 + 0x1f0);
    _objc_retainBlock();
    if (lVar5 != 0) {
      _objc_retain();
      _objc_retain();
      lVar6 = param_7;
      _objc_retain();
      func_0x00010c06ad40(param_2);
      _objc_release(lVar6);
      _objc_release(param_5);
      _objc_release(lVar5);
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(uVar7);
      _objc_sync_exit(param_2);
      _objc_release(param_2);
      goto LAB_104a549f4;
    }
    _objc_release(puVar4);
    _objc_release(uVar7);
  }
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  (**(code **)(param_7 + 0x10))(param_7,uVar3);
LAB_104a549f4:
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 104a54a6c; end: 104a54a83;  */

void FUN_104a54a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a54a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104a54a84; end: 104a54ad7; -[GTMSessionFetcher hasRetryAfterInterval] */

bool FUN_104a54a84(long param_1)

{
  long lVar1;
  
  func_0x00010c13b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 104a54ad8; end: 104a54c17; -[GTMSessionFetcher retryAfterInterval] */

double FUN_104a54ad8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x00010c13b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0.0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
    func_0x00010c026a60();
    func_0x00010c1bf3e0(puVar2,param_3,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c26fd80(PTR__OBJC_CLASS___NSTimeZone_1126b7518,param_3,
                        &PTR____CFConstantStringClassReference_110ebf658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215860(puVar2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c189b60(puVar2,param_3,&PTR____CFConstantStringClassReference_110da99d8);
    puVar3 = puVar2;
    func_0x00010bf65160(puVar2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      lVar4 = lVar1;
      func_0x00010c067ec0();
      param_1 = (double)(int)lVar4;
    }
    else {
      func_0x00010c26f3a0(puVar3);
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 104a54c18; end: 104a54dc7; -[GTMSessionFetcher beginRetryTimer] */

void FUN_104a54c18(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar1 & 1) == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104a54dc8;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_2;
    FUN_104c62d88(*(undefined8 *)(param_2 + 0xe8),PTR___dispatch_main_q_11034be20,&puStack_58);
    return;
  }
  func_0x00010bf6f0c0(param_2);
  func_0x00010bf94240(param_2);
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c0d9e40(param_2);
  dVar3 = *(double *)(param_2 + 0x130);
  if (dVar3 <= 0.0) {
    dVar3 = 1.79769313486232e+308;
  }
  if (dVar3 <= param_1) {
    param_1 = dVar3;
  }
  *(double *)(param_2 + 0x148) = param_1;
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  *(undefined **)(param_2 + 0x120) = puVar1;
  _objc_release(uVar2);
  func_0x00010c216ce0(0x3ff0000000000000,*(undefined8 *)(param_2 + 0x120));
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar1);
  _objc_sync_exit(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1049f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_postNotificationOnMainThreadWith_11261ec98,
             &PTR____CFConstantStringClassReference_110da9598,0,0);
  return;
}



/* Entry: 104a54dc8; end: 104a54dcf;  */

void FUN_104a54dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf18910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_beginRetryTimer_1125a3be8);
  return;
}



/* Entry: 104a54dd0; end: 104a54e77; -[GTMSessionFetcher retryTimerFired:] */

void FUN_104a54dd0(long param_1)

{
  func_0x00010bf6f0c0();
  _objc_retain();
  _objc_sync_enter();
  *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010c15fc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa3a0();
  _objc_release(param_1);
  return;
}



/* Entry: 104a54e78; end: 104a54e7f;  */

void FUN_104a54e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13f6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_retryFetch_11262d7d0)
  ;
  return;
}



/* Entry: 104a54e80; end: 104a54f0b; -[GTMSessionFetcher destroyRetryTimer] */

void FUN_104a54e80(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x120) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    _objc_release(uVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1049f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_postNotificationOnMainThreadWith_11261ec98,
               &PTR____CFConstantStringClassReference_110da95b8,0,0);
    return;
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a54f0c; end: 104a54f47; -[GTMSessionFetcher retryCount] */

undefined8 FUN_104a54f0c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a54f48; end: 104a54fa7; -[GTMSessionFetcher nextRetryInterval] */

undefined8 FUN_104a54f48(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c0d9e40(param_2);
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 104a54fa8; end: 104a5500f; -[GTMSessionFetcher nextRetryIntervalUnsynchronized] */

double FUN_104a54fa8(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = param_2;
  func_0x00010c252f80();
  if ((lVar1 == 0x1f7) && (lVar1 = param_2, func_0x00010bfdb400(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c13f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_retryAfterInterval_11262d6f0);
    return param_1;
  }
  dVar2 = *(double *)(param_2 + 0x148) * *(double *)(param_2 + 0x140);
  dVar4 = *(double *)(param_2 + 0x130);
  dVar3 = dVar2;
  if (dVar4 <= dVar2) {
    dVar3 = dVar4;
  }
  if (dVar4 <= 0.0) {
    dVar3 = dVar2;
  }
  dVar2 = *(double *)(param_2 + 0x138);
  if (*(double *)(param_2 + 0x138) <= dVar3) {
    dVar2 = dVar3;
  }
  return dVar2;
}



/* Entry: 104a55010; end: 104a55053; -[GTMSessionFetcher retryTimer] */

void FUN_104a55010(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a55054; end: 104a5508f; -[GTMSessionFetcher isRetryEnabled] */

undefined1 FUN_104a55054(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + 0x11a);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a55090; end: 104a55097; -[GTMSessionFetcher isRetryEnabledUnsynchronized] */

undefined1 FUN_104a55090(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11a);
}



/* Entry: 104a55098; end: 104a55127; -[GTMSessionFetcher setRetryEnabled:] */

void FUN_104a55098(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x11a) & 1) == 0)) {
    uVar1 = 0xffff;
    _arc4random_uniform();
    *(double *)(param_1 + 0x138) = (double)(uVar1 & 0xffffffff) / 65535.0 + 1.0;
    *(undefined8 *)(param_1 + 0x130) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0x4000000000000000;
  }
  *(char *)(param_1 + 0x11a) = (char)param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55128; end: 104a5516b; -[GTMSessionFetcher maxRetryInterval] */

undefined8 FUN_104a55128(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a5516c; end: 104a551b7; -[GTMSessionFetcher setMaxRetryInterval:] */

void FUN_104a5516c(double param_1,long param_2)

{
  _objc_retain();
  _objc_sync_enter();
  if (param_1 <= 0.0) {
    param_1 = -1.0;
  }
  *(double *)(param_2 + 0x130) = param_1;
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a551b8; end: 104a551fb; -[GTMSessionFetcher minRetryInterval] */

undefined8 FUN_104a551b8(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a551fc; end: 104a55277; -[GTMSessionFetcher setMinRetryInterval:] */

void FUN_104a551fc(double param_1,long param_2)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  if (param_1 <= 0.0) {
    uVar1 = 0xffff;
    _arc4random_uniform();
    param_1 = (double)(uVar1 & 0xffffffff) / 65535.0 + 1.0;
  }
  *(double *)(param_2 + 0x138) = param_1;
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104a55278; end: 104a5529b; -[GTMSessionFetcher systemCompletionHandler] */

void FUN_104a55278(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c266ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104a5529c; end: 104a552db; -[GTMSessionFetcher setSystemCompletionHandler:] */

void FUN_104a5529c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010c211080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a552dc; end: 104a553e7; +[GTMSessionFetcher setSystemCompletionHandler:forSessionIdentifier:] */

void FUN_104a552dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain();
  if (param_4 == 0) {
    _NSLog(&PTR____CFConstantStringClassReference_110da99f8);
  }
  else {
    puVar2 = PTR_PTR_1126ae190;
    _objc_opt_class(PTR_PTR_1126ae190);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    if ((param_3 != 0) && (puRam00000001136a1c90 == (undefined *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      puVar1 = puRam00000001136a1c90;
      puRam00000001136a1c90 = puVar3;
      _objc_release(puVar1);
    }
    puVar1 = puRam00000001136a1c90;
    lVar4 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010c220220(puVar1,param_2,lVar4,param_4);
    _objc_release(lVar4);
    _objc_sync_exit(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a553e8; end: 104a55487; +[GTMSessionFetcher systemCompletionHandlerForSessionIdentifier:] */

void FUN_104a553e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126ae190;
    _objc_opt_class(PTR_PTR_1126ae190);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    uVar2 = uRam00000001136a1c90;
    func_0x00010c0dff20(uRam00000001136a1c90,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a55488; end: 104a554df; -[GTMSessionFetcher request] */

void FUN_104a55488(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a554e0; end: 104a55563; -[GTMSessionFetcher setRequest:] */

void FUN_104a554e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_1;
  func_0x00010c072de0();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0d3c80();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a55564; end: 104a5556b; -[GTMSessionFetcher mutableRequestForTesting] */

void FUN_104a55564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104a5556c; end: 104a555bb; -[GTMSessionFetcher updateMutableRequest:] */

void FUN_104a5556c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a555bc; end: 104a55623; -[GTMSessionFetcher setRequestValue:forHTTPHeaderField:] */

void FUN_104a555bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c072d80();
  if ((uVar1 & 1) == 0) {
    func_0x00010c289440(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a55624; end: 104a556b3; -[GTMSessionFetcher updateRequestValue:forHTTPHeaderField:] */

void FUN_104a55624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
  _objc_sync_enter();
  func_0x00010c2201e0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a556b4; end: 104a55703; -[GTMSessionFetcher setResponse:] */

void FUN_104a556b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55704; end: 104a557fb; -[GTMSessionFetcher bodyLength] */

long FUN_104a55704(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_sync_enter();
  lVar5 = *(long *)(param_1 + 0x1a0);
  if (lVar5 == *(long *)PTR__NSURLSessionTransferSizeUnknown_110345640) {
    lVar1 = *(long *)(param_1 + 0x198);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 != 0) {
        uStack_38 = 0;
        uStack_40 = 0;
        func_0x00010bfc99e0(lVar1,param_2,&uStack_38,*(undefined8 *)PTR__NSURLFileSizeKey_11034ab08,
                            &uStack_40);
        uVar2 = uStack_38;
        _objc_retain();
        uVar3 = uStack_40;
        _objc_retain(uStack_40);
        if ((int)lVar1 != 0) {
          uVar4 = uVar2;
          func_0x00010c0b4ca0();
          *(undefined8 *)(param_1 + 0x1a0) = uVar4;
        }
        _objc_release(uVar3);
        _objc_release(uVar2);
        lVar5 = *(long *)(param_1 + 0x1a0);
      }
    }
    else {
      func_0x00010c08fa60();
      *(long *)(param_1 + 0x1a0) = lVar1;
      lVar5 = lVar1;
    }
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return lVar5;
}



/* Entry: 104a557fc; end: 104a55837; -[GTMSessionFetcher useUploadTask] */

undefined1 FUN_104a557fc(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a55838; end: 104a5587b; -[GTMSessionFetcher setUseUploadTask:] */

void FUN_104a55838(long param_1,undefined8 param_2,uint param_3)

{
  _objc_retain();
  _objc_sync_enter();
  if (*(byte *)(param_1 + 0x10) != param_3) {
    *(char *)(param_1 + 0x10) = (char)param_3;
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a5587c; end: 104a558bf; -[GTMSessionFetcher bodyFileURL] */

void FUN_104a5587c(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a558c0; end: 104a5592f; -[GTMSessionFetcher setBodyFileURL:] */

void FUN_104a558c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x18) != lVar1) {
    _objc_storeStrong((long *)(param_1 + 0x18),param_3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a55930; end: 104a55973; -[GTMSessionFetcher bodyStreamProvider] */

void FUN_104a55930(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainBlock(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a55974; end: 104a559eb; -[GTMSessionFetcher setBodyStreamProvider:] */

void FUN_104a55974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a559ec; end: 104a55a2f; -[GTMSessionFetcher authorizer] */

void FUN_104a559ec(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a55a30; end: 104a55ac3; -[GTMSessionFetcher setAuthorizer:] */

void FUN_104a55a30(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  if ((*(long *)(param_1 + 0xf8) != lVar1) &&
     (uVar2 = param_1, func_0x00010c072de0(), (uVar2 & 1) == 0)) {
    _objc_storeStrong((long *)(param_1 + 0xf8),param_3);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a55ac4; end: 104a55b07; -[GTMSessionFetcher downloadedData] */

void FUN_104a55ac4(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a55b08; end: 104a55b7f; -[GTMSessionFetcher setDownloadedData:] */

void FUN_104a55b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a55b80; end: 104a55bbb; -[GTMSessionFetcher downloadedLength] */

undefined8 FUN_104a55b80(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a55bbc; end: 104a55bf3; -[GTMSessionFetcher setDownloadedLength:] */

void FUN_104a55bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_sync_enter();
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55bf4; end: 104a55c37; -[GTMSessionFetcher callbackQueue] */

void FUN_104a55bf4(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a55c38; end: 104a55cc3; -[GTMSessionFetcher setCallbackQueue:] */

void FUN_104a55c38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_3 == 0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined **)(param_1 + 0xe0) = puVar1;
  }
  else {
    lVar2 = param_3;
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = lVar2;
  }
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a55cc4; end: 104a55d07; -[GTMSessionFetcher session] */

void FUN_104a55cc4(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a55d08; end: 104a55d43; -[GTMSessionFetcher servicePriority] */

undefined8 FUN_104a55d08(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104a55d44; end: 104a55d87; -[GTMSessionFetcher setServicePriority:] */

void FUN_104a55d44(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain();
  _objc_sync_enter();
  if (*(long *)(param_1 + 0x110) != param_3) {
    *(long *)(param_1 + 0x110) = param_3;
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55d88; end: 104a55dd7; -[GTMSessionFetcher setSession:] */

void FUN_104a55d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104a55dd8; end: 104a55e13; -[GTMSessionFetcher canShareSession] */

undefined1 FUN_104a55dd8(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter();
  uVar1 = *(undefined1 *)(param_1 + 0x178);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}


