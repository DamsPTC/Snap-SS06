/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bb8c730; end: 10bb8c737; -[SCADirectSnapEdit getPayloadIdentifier] */

undefined8 FUN_10bb8c730(void)

{
  return 0x2d5;
}



/* Entry: 10bb8c738; end: 10bb8f7f7; -[SCADirectSnapPreview fromDictionary:] */

undefined ** FUN_10bb8c738(ulong param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uStack_3f8;
  undefined *puStack_3f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_3f0 = PTR_PTR_11270d1f8;
  uStack_3f8 = param_1;
  _objc_msgSendSuper2(&uStack_3f8,PTR_s_fromDictionary__1125cc478,param_3);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c176660(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c176fc0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c179280(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baef3f4();
    func_0x00010c1792c0(param_1);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126b5870;
  _objc_alloc(PTR_PTR_1126b5870);
  func_0x00010c00c560();
  func_0x00010c185860(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1968c0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf7214();
    func_0x00010c196b80(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c199560(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c19c240(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf9c24();
    func_0x00010c19c600(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf9ee0();
    func_0x00010c19dbc0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1a1a00(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1a1a20(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafa2c4();
    func_0x00010c1a1aa0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1bc480(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1bcc00(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb00104();
    func_0x00010c1bcca0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1bd9e0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb00d30();
    func_0x00010c1c1040(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1ca440(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb04d88();
    func_0x00010c1cd640(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb06e80();
    func_0x00010c1ddc60(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c204680(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c205660(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c20a960(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c20a980(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c20a9a0(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2271c0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c227be0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c227d20(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1bc3e0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c56a0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1ea120(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1c9fe0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bc9109c();
    func_0x00010c1ca4e0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20a880(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20aa80(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20aca0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20ae80(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b8e0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1f64e0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1ffc60(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf9e20();
    func_0x00010c19db40(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c176a60(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1f6fe0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126c4750;
  _objc_alloc(PTR_PTR_1126c4750);
  func_0x00010c00c560();
  func_0x00010c1ee3c0(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1df0c0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126c4758;
  _objc_alloc(PTR_PTR_1126c4758);
  func_0x00010c00c560();
  func_0x00010c216da0(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c9ea0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1ca140(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1e8fe0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c208000(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb13634();
    func_0x00010c208420(param_1);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126c4768;
  _objc_alloc(PTR_PTR_1126c4768);
  func_0x00010c00c560();
  func_0x00010c1c9480(param_1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126e2bf0;
  _objc_alloc(PTR_PTR_1126e2bf0);
  func_0x00010c00c560();
  func_0x00010c1a4480(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf63c0();
    func_0x00010c21a5c0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c18c600(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bb09cdc();
    func_0x00010c178da0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b2a00(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c222000(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c2059a0(param_1);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126c4730;
  _objc_alloc(PTR_PTR_1126c4730);
  func_0x00010c00c560();
  func_0x00010c16bee0(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c18e4e0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2260c0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226620(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1eb7e0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1ee340(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1ee440(param_1);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126c4728;
  _objc_alloc(PTR_PTR_1126c4728);
  func_0x00010c00c560();
  func_0x00010c1e9e60(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1e9060(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c1c52e0(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c1bd0c0(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1e9e20(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1a67a0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c213840(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c213860(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c17a100(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1bcf40(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126d7518;
  _objc_alloc(PTR_PTR_1126d7518);
  func_0x00010c00c560();
  func_0x00010c1c16c0(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010baee09c();
    func_0x00010c16e1e0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1768c0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf2bf0();
    func_0x00010c182160(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c212c20(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1c9ee0(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c212740(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126c4760;
  _objc_alloc(PTR_PTR_1126c4760);
  func_0x00010c00c560();
  func_0x00010c227b80(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226260(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c176640(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    ppuVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar6 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = param_1;
        func_0x00010be45600();
        if ((uVar3 & 1) == 0) {
          func_0x00010befa120(puVar5);
        }
        ppuVar6 = (undefined **)((long)ppuVar6 + 1);
      } while (ppuVar2 != ppuVar6);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    func_0x00010c199680(param_1);
    _objc_release(puVar5);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19c3c0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1af380(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1c1140(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1c1160(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  puVar5 = PTR_PTR_1126c4738;
  _objc_alloc(PTR_PTR_1126c4738);
  func_0x00010c00c560();
  func_0x00010c1c9180(param_1);
  _objc_release(puVar5);
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1c2f20(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c173cc0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1ca220(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b22e0(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1bc180(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c206b60(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1c8d00(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c19f820(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b2320(param_1);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf51e00();
    func_0x00010c1bc640(param_1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be45600();
  _objc_release(ppuVar2);
  if ((uVar3 & 1) == 0) {
    ppuVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bafc40c();
    func_0x00010c212cc0(param_1);
    _objc_release(ppuVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110fc6498;
}



/* Entry: 10bb8f7f8; end: 10bb8f803; -[SCADirectSnapPreview getEventName] */

undefined ** FUN_10bb8f7f8(void)

{
  return &PTR____CFConstantStringClassReference_110fc6498;
}



/* Entry: 10bb8f804; end: 10bb8f80b; -[SCADirectSnapPreview getEventQoS] */

undefined8 FUN_10bb8f804(void)

{
  return 1;
}



/* Entry: 10bb8f80c; end: 10bb8f823; -[SCADirectSnapPreview setCameraFlipActionPreCapture:] */

void FUN_10bb8f80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101a758,0x13,param_3,0);
  return;
}



/* Entry: 10bb8f824; end: 10bb8f83b; -[SCADirectSnapPreview setCameraSdk:] */

void FUN_10bb8f824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb9738,0x14,param_3,0);
  return;
}



/* Entry: 10bb8f83c; end: 10bb8f853; -[SCADirectSnapPreview setCaptureSessionId:] */

void FUN_10bb8f83c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,0x20,param_3,0);
  return;
}



/* Entry: 10bb8f854; end: 10bb8f8d3; -[SCADirectSnapPreview setCaptureSource:] */

void FUN_10bb8f854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baef3d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9f38,0x21,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8f8d4; end: 10bb8f91b; -[SCADirectSnapPreview setCreativeKitMetadata:] */

void FUN_10bb8f8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbbaf8,0x2b,param_3,
                      6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb8f91c; end: 10bb8f933; -[SCADirectSnapPreview setEntryId:] */

void FUN_10bb8f91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e29c18,0x38,param_3,0);
  return;
}



/* Entry: 10bb8f934; end: 10bb8f9b3; -[SCADirectSnapPreview setEntryType:] */

void FUN_10bb8f934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf71f4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e29c38,0x39,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8f9b4; end: 10bb8f9cb; -[SCADirectSnapPreview setExternalId:] */

void FUN_10bb8f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbe438,0x40,param_3,0);
  return;
}



/* Entry: 10bb8f9cc; end: 10bb8f9e3; -[SCADirectSnapPreview setFilterLensId:] */

void FUN_10bb8f9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5d58,0x4d,param_3,0);
  return;
}



/* Entry: 10bb8f9e4; end: 10bb8fa63; -[SCADirectSnapPreview setFilterStreak:] */

void FUN_10bb8f9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf9c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fce238,0x57,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fa64; end: 10bb8fae3; -[SCADirectSnapPreview setFlashTriggerSource:] */

void FUN_10bb8fa64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf9ebc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbab58,0x5f,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fae4; end: 10bb8fafb; -[SCADirectSnapPreview setGalleryCollectionCategory:] */

void FUN_10bb8fae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcd158,0x60,param_3,0);
  return;
}



/* Entry: 10bb8fafc; end: 10bb8fb13; -[SCADirectSnapPreview setGalleryCollectionId:] */

void FUN_10bb8fafc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe7398,0x61,param_3,0);
  return;
}



/* Entry: 10bb8fb14; end: 10bb8fb93; -[SCADirectSnapPreview setGalleryContextMenuSource:] */

void FUN_10bb8fb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bafa2a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb39d8,0x62,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fb94; end: 10bb8fbab; -[SCADirectSnapPreview setLensOptionId:] */

void FUN_10bb8fb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f55758,0x71,param_3,0);
  return;
}



/* Entry: 10bb8fbac; end: 10bb8fbc3; -[SCADirectSnapPreview setLensSessionId:] */

void FUN_10bb8fbac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae358,0x72,param_3,0);
  return;
}



/* Entry: 10bb8fbc4; end: 10bb8fc43; -[SCADirectSnapPreview setLensSource:] */

void FUN_10bb8fbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb000e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f557f8,0x73,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fc44; end: 10bb8fc97; -[SCADirectSnapPreview setLightSensorValue:] */

void FUN_10bb8fc44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9f98,0x74,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fc98; end: 10bb8fd17; -[SCADirectSnapPreview setLowLightStatus:] */

void FUN_10bb8fc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00d10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fba9d8,0x75,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fd18; end: 10bb8fd2f; -[SCADirectSnapPreview setMusicTrackId:] */

void FUN_10bb8fd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb59f8,0x81,param_3,0);
  return;
}



/* Entry: 10bb8fd30; end: 10bb8fdaf; -[SCADirectSnapPreview setNightModeState:] */

void FUN_10bb8fd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb04d68(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9fb8,0x82,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fdb0; end: 10bb8fe2f; -[SCADirectSnapPreview setPlayerVersion:] */

void FUN_10bb8fdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb06e5c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe7538,0x84,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8fe30; end: 10bb8fe47; -[SCADirectSnapPreview setSnapId:] */

void FUN_10bb8fe30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e06db8,0x95,param_3,0);
  return;
}



/* Entry: 10bb8fe48; end: 10bb8fe5f; -[SCADirectSnapPreview setSnapSessionId:] */

void FUN_10bb8fe48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e445d8,0x96,param_3,0);
  return;
}



/* Entry: 10bb8fe60; end: 10bb8fea7; -[SCADirectSnapPreview setStickerBloopList:] */

void FUN_10bb8fe60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3b38,0xa3,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb8fea8; end: 10bb8feef; -[SCADirectSnapPreview setStickerBloopListDetailed:] */

void FUN_10bb8fea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101aab8,0xa4,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb8fef0; end: 10bb8ff37; -[SCADirectSnapPreview setStickerBloopListDetailedPosition:] */

void FUN_10bb8fef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101aad8,0xa5,param_3,
                      7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb8ff38; end: 10bb8ff8b; -[SCADirectSnapPreview setWithZooming:] */

void FUN_10bb8ff38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbad78,0xe7,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8ff8c; end: 10bb8ffdf; -[SCADirectSnapPreview setZoomLevel:] */

void FUN_10bb8ff8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbe198,0xe8,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb8ffe0; end: 10bb90033; -[SCADirectSnapPreview setZslCapture:] */

void FUN_10bb8ffe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9898,0xe9,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90034; end: 10bb9004b; -[SCADirectSnapPreview setLensNamespace:] */

void FUN_10bb90034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f55818,0xea,param_3,0);
  return;
}



/* Entry: 10bb9004c; end: 10bb9009f; -[SCADirectSnapPreview setMediaVolume:] */

void FUN_10bb9004c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbe7d8,0xef,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb900a0; end: 10bb900b7; -[SCADirectSnapPreview setRemixSourceSnapId:] */

void FUN_10bb900a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3c38,0xf1,param_3,0);
  return;
}



/* Entry: 10bb900b8; end: 10bb900cf; -[SCADirectSnapPreview setMusicPickerSessionId:] */

void FUN_10bb900b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3c98,0xf8,param_3,0);
  return;
}



/* Entry: 10bb900d0; end: 10bb9014f; -[SCADirectSnapPreview setMusicTrackPageSource:] */

void FUN_10bb900d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3cb8,0xf9,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90150; end: 10bb901a3; -[SCADirectSnapPreview setStickerBitmojiFromFavoritesCount:] */

void FUN_10bb90150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce2d8,0xfb,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb901a4; end: 10bb901f7; -[SCADirectSnapPreview setStickerCameoFromFavoritesCount:] */

void FUN_10bb901a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce2f8,0xfc,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb901f8; end: 10bb9024b; -[SCADirectSnapPreview setStickerCustomFromFavoritesCount:] */

void FUN_10bb901f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce318,0xfd,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb9024c; end: 10bb9029f; -[SCADirectSnapPreview setStickerEmojiFromFavoritesCount:] */

void FUN_10bb9024c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce338,0xfe,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb902a0; end: 10bb902f3; -[SCADirectSnapPreview setStickerSnapchatFromFavoritesCount:] */

void FUN_10bb902a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce358,0xff,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb902f4; end: 10bb9030b; -[SCADirectSnapPreview setScanSessionId:] */

void FUN_10bb902f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbed18,0x100,param_3,0);
  return;
}



/* Entry: 10bb9030c; end: 10bb90323; -[SCADirectSnapPreview setShortcutId:] */

void FUN_10bb9030c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e1f8d8,0x101,param_3,0);
  return;
}



/* Entry: 10bb90324; end: 10bb903a3; -[SCADirectSnapPreview setFlashMode:] */

void FUN_10bb90324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf9e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f4bd78,0x104,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb903a4; end: 10bb9048b; -[SCADirectSnapPreview setCameraModes:] */

void FUN_10bb903a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bb9048c;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fba178,0x109,puVar2,
                      10,uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bb9048c; end: 10bb904df;  */

void FUN_10bb9048c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10baee48c(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb904e0; end: 10bb904f7; -[SCADirectSnapPreview setScreenCanvasResolution:] */

void FUN_10bb904e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101aaf8,0x10c,param_3,0);
  return;
}



/* Entry: 10bb904f8; end: 10bb9053f; -[SCADirectSnapPreview setRingFlashParams:] */

void FUN_10bb904f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce378,0x10d,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb90540; end: 10bb90557; -[SCADirectSnapPreview setPostCaptureLensId:] */

void FUN_10bb90540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fba858,0x110,param_3,0);
  return;
}



/* Entry: 10bb90558; end: 10bb9059f; -[SCADirectSnapPreview setToneModeParams:] */

void FUN_10bb90558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce3b8,0x116,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb905a0; end: 10bb905f3; -[SCADirectSnapPreview setMusicItemPos:] */

void FUN_10bb905a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ab18,0x11c,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb905f4; end: 10bb90647; -[SCADirectSnapPreview setMusicSectionPos:] */

void FUN_10bb905f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ab38,0x11d,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90648; end: 10bb9065f; -[SCADirectSnapPreview setRecordingSpeed:] */

void FUN_10bb90648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e43818,0x11e,param_3,0);
  return;
}



/* Entry: 10bb90660; end: 10bb90677; -[SCADirectSnapPreview setSponsoredLensAdId:] */

void FUN_10bb90660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbbc98,0x123,param_3,0);
  return;
}



/* Entry: 10bb90678; end: 10bb906f7; -[SCADirectSnapPreview setSponsoredType:] */

void FUN_10bb90678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb13614(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fae338,0x124,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb906f8; end: 10bb9073f; -[SCADirectSnapPreview setMultiCamModeParams:] */

void FUN_10bb906f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce438,0x126,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb90740; end: 10bb90787; -[SCADirectSnapPreview setGreenScreenModeParams:] */

void FUN_10bb90740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce458,0x127,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb90788; end: 10bb90807; -[SCADirectSnapPreview setTrimmedSource:] */

void FUN_10bb90788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf639c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101ab58,0x128,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90808; end: 10bb9081f; -[SCADirectSnapPreview setDetailedCameraModes:] */

void FUN_10bb90808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fba5b8,0x129,param_3,0);
  return;
}



/* Entry: 10bb90820; end: 10bb9089f; -[SCADirectSnapPreview setCaptureBorderRingStyle:] */

void FUN_10bb90820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09cbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111017bd8,0x12e,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb908a0; end: 10bb908f3; -[SCADirectSnapPreview setIsMultiFrameCapture:] */

void FUN_10bb908a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce498,0x12f,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb908f4; end: 10bb90947; -[SCADirectSnapPreview setVideoStabilizationMode:] */

void FUN_10bb908f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb9af8,0x130,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90948; end: 10bb9099b; -[SCADirectSnapPreview setSnapTrimmedSourceDurationMs:] */

void FUN_10bb90948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ab78,0x131,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb9099c; end: 10bb909e3; -[SCADirectSnapPreview setAudioMixingOptions:] */

void FUN_10bb9099c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce4b8,0x137,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb909e4; end: 10bb90a37; -[SCADirectSnapPreview setDirectorModeSegmentCount:] */

void FUN_10bb909e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ab98,0x138,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90a38; end: 10bb90a8b; -[SCADirectSnapPreview setWithCtlensEffect:] */

void FUN_10bb90a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce518,0x139,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90a8c; end: 10bb90adf; -[SCADirectSnapPreview setWithMagicEraser:] */

void FUN_10bb90a8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce538,0x13a,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90ae0; end: 10bb90af7; -[SCADirectSnapPreview setRepostSourceSnapId:] */

void FUN_10bb90ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3d38,0x13b,param_3,0);
  return;
}



/* Entry: 10bb90af8; end: 10bb90b4b; -[SCADirectSnapPreview setRingFlashAutoEnable:] */

void FUN_10bb90af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbb478,0x13c,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90b4c; end: 10bb90b9f; -[SCADirectSnapPreview setRingFlashTooltipShown:] */

void FUN_10bb90b4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbb498,0x13d,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90ba0; end: 10bb90be7; -[SCADirectSnapPreview setRemixCameraModeParams:] */

void FUN_10bb90ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce558,0x13e,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb90be8; end: 10bb90c3b; -[SCADirectSnapPreview setRecoveredSnap:] */

void FUN_10bb90be8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce578,0x13f,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90c3c; end: 10bb90d23; -[SCADirectSnapPreview setMediaSources:] */

void FUN_10bb90c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bb90d24;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fba638,0x141,puVar2,
                      10,uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bb90d24; end: 10bb90d77;  */

void FUN_10bb90d24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10bb1396c(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90d78; end: 10bb90dbf; -[SCADirectSnapPreview setLensTools:] */

void FUN_10bb90d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce598,0x142,param_3
                      ,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb90dc0; end: 10bb90e13; -[SCADirectSnapPreview setRemixAllowed:] */

void FUN_10bb90dc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce5b8,0x143,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90e14; end: 10bb90e67; -[SCADirectSnapPreview setHasPreviewCreativeTool:] */

void FUN_10bb90e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101abb8,0x144,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90e68; end: 10bb90ebb; -[SCADirectSnapPreview setTextToSpeechCount:] */

void FUN_10bb90e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce5f8,0x145,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90ebc; end: 10bb90f0f; -[SCADirectSnapPreview setTextToSpeechFailed:] */

void FUN_10bb90ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101abd8,0x146,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb90f10; end: 10bb90f27; -[SCADirectSnapPreview setCategoryId:] */

void FUN_10bb90f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dcef58,0x147,param_3,0);
  return;
}



/* Entry: 10bb90f28; end: 10bb90f3f; -[SCADirectSnapPreview setLensTabSessionId:] */

void FUN_10bb90f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fce618,0x148,param_3,0);
  return;
}



/* Entry: 10bb90f40; end: 10bb90f87; -[SCADirectSnapPreview setMagicCaptionData:] */

void FUN_10bb90f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce658,0x149,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb90f88; end: 10bb91007; -[SCADirectSnapPreview setBackCameraDeviceType:] */

void FUN_10bb90f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fce678,0x14b,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb91008; end: 10bb9105b; -[SCADirectSnapPreview setCameraLensPosition:] */

void FUN_10bb91008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce698,0x14d,puVar1,
                      2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb9105c; end: 10bb910db; -[SCADirectSnapPreview setContentLossReason:] */

void FUN_10bb9105c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf2bd0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fba2d8,0x14f,puVar1,
                      3,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb910dc; end: 10bb910f3; -[SCADirectSnapPreview setTemplateId:] */

void FUN_10bb910dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe7798,0x150,param_3,0);
  return;
}



/* Entry: 10bb910f4; end: 10bb9110b; -[SCADirectSnapPreview setMusicLyricsStickerType:] */

void FUN_10bb910f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb5a18,0x155,param_3,0);
  return;
}



/* Entry: 10bb9110c; end: 10bb91123; -[SCADirectSnapPreview setTargetingCampaignId:] */

void FUN_10bb9110c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3e38,0x157,param_3,0);
  return;
}



/* Entry: 10bb91124; end: 10bb9116b; -[SCADirectSnapPreview setZoomFactorsPillParams:] */

void FUN_10bb91124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fce6b8,0x158,param_3
                      ,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bb9116c; end: 10bb911bf; -[SCADirectSnapPreview setWithExternalMedia:] */

void FUN_10bb9116c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101abf8,0x159,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb911c0; end: 10bb911d7; -[SCADirectSnapPreview setCameraFlipActionDuringCapture:] */

void FUN_10bb911c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101a838,0x15a,param_3,0);
  return;
}



/* Entry: 10bb911d8; end: 10bb912bf; -[SCADirectSnapPreview setExternalMediaImportMethods:] */

void FUN_10bb911d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bb912c0;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101ac18,0x15b,puVar2,
                      10,uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bb912c0; end: 10bb91313;  */

void FUN_10bb912c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10baf7bd0(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb91314; end: 10bb91367; -[SCADirectSnapPreview setFilterRemovalCount:] */

void FUN_10bb91314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ac38,0x15c,puVar1,
                      4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb91368; end: 10bb913bb; -[SCADirectSnapPreview setIsAspectRatioButtonActivated:] */

void FUN_10bb91368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbb758,0x15d,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb913bc; end: 10bb9140f; -[SCADirectSnapPreview setLyricsRenderedInLens:] */

void FUN_10bb913bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3e58,0x15e,puVar1,
                      1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bb91410; end: 10bb91427; -[SCADirectSnapPreview setLyricsTrackIdInLens:] */

void FUN_10bb91410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb3e78,0x15f,param_3,0);
  return;
}


