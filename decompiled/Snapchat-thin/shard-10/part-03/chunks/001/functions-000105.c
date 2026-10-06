/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f07af0; end: 107f07b0b;  */

void FUN_107f07af0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x22;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x23;
  long unaff_x24;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x25;
  undefined *puVar14;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long lVar15;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    lVar13 = *(long *)(param_1 + 0x20);
    puVar1 = *(undefined **)(param_1 + 0x28);
    puVar14 = *(undefined **)(param_1 + 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    puVar8 = *(undefined **)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    lVar15 = *(long *)(param_1 + 0x50);
    puVar10 = (undefined *)(*(long *)(param_1 + 0x58) + 1);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar1);
    _objc_retain(puVar14);
    _objc_retain(uVar12);
    _objc_retain(puVar8);
    _objc_retain(uVar6);
    _objc_retain(lVar15);
    puVar9 = puVar14;
    func_0x00010bf529e0();
    if (puVar10 < puVar9) {
      *(long *)((long)register0x00000008 + -0x2b8) = lVar15;
      *(undefined8 *)((long)register0x00000008 + -0x2b0) = uVar6;
      unaff_x23 = (undefined *)((long)register0x00000008 + -0x210);
      *(undefined **)((long)register0x00000008 + -0x2d0) = puVar10;
      puVar9 = puVar14;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      *(undefined **)((long)register0x00000008 + -0x2a0) = puVar9;
      _objc_retain(puVar9);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
      _objc_retain(puVar1);
      puVar9 = puVar1;
      func_0x00010bf52a60();
      *(undefined **)((long)register0x00000008 + -0x2c8) = puVar8;
      *(undefined8 *)((long)register0x00000008 + -0x2c0) = uVar12;
      if (puVar9 == (undefined *)0x0) {
        unaff_x28 = (undefined *)0x7fffffffffffffff;
      }
      else {
        *(undefined **)((long)register0x00000008 + -0x2e0) = puVar14;
        *(long *)((long)register0x00000008 + -0x2d8) = lVar13;
        lVar15 = **(long **)((long)register0x00000008 + -0x1c0);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
        do {
          puVar14 = (undefined *)0x0;
          *(undefined **)((long)register0x00000008 + -0x2a8) = puVar9;
          do {
            if (**(long **)((long)register0x00000008 + -0x1c0) != lVar15) {
              _objc_enumerationMutation(puVar1);
            }
            puVar7 = *(undefined **)
                      (*(long *)((long)register0x00000008 + -0x1c8) + (long)puVar14 * 8);
            puVar10 = puVar7;
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = puVar10;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar12;
            func_0x00010bf0b260(uVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = unaff_x23;
            func_0x00010c0720c0();
            if (((ulong)puVar8 & 1) == 0) {
              _objc_release(uVar6);
              _objc_release(unaff_x23);
              _objc_release(puVar10);
            }
            else {
              puVar8 = puVar7;
              func_0x00010bf0af00();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar8;
              func_0x00010c27dd80();
              func_0x00010bf0b760();
              _objc_release(puVar8);
              _objc_release(uVar6);
              _objc_release(unaff_x23);
              _objc_release(puVar10);
              puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              iVar11 = (int)uVar12;
              puVar9 = *(undefined **)((long)register0x00000008 + -0x2a8);
              uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
              if ((int)puVar2 == iVar11) {
                func_0x00010bdc2b80(puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar14 = puVar10;
                func_0x00010c078c00();
                if (((ulong)puVar14 & 1) == 0) {
                  unaff_x28 = puVar1;
                  func_0x00010bfecde0();
                }
                else {
                  unaff_x28 = (undefined *)0x7fffffffffffffff;
                }
                puVar14 = *(undefined **)((long)register0x00000008 + -0x2e0);
                lVar13 = *(long *)((long)register0x00000008 + -0x2d8);
                puVar8 = *(undefined **)((long)register0x00000008 + -0x2c8);
                uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
                _objc_release(puVar7);
                goto LAB_107f07594;
              }
            }
            puVar14 = puVar14 + 1;
          } while (puVar9 != puVar14);
          puVar9 = puVar1;
          func_0x00010bf52a60();
        } while (puVar9 != (undefined *)0x0);
        unaff_x28 = (undefined *)0x7fffffffffffffff;
        puVar14 = *(undefined **)((long)register0x00000008 + -0x2e0);
        lVar13 = *(long *)((long)register0x00000008 + -0x2d8);
        puVar8 = *(undefined **)((long)register0x00000008 + -0x2c8);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
        puVar10 = (undefined *)0x0;
      }
LAB_107f07594:
      _objc_release(puVar1);
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
      _objc_release(uVar6);
      _objc_release(puVar1);
      if (unaff_x28 == (undefined *)0x7fffffffffffffff) {
        lVar15 = *(long *)((long)register0x00000008 + -0x2b8);
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
        FUN_107f072ec(lVar13,puVar1,puVar14,*(long *)((long)register0x00000008 + -0x2d0) + 1,uVar12,
                      puVar8,uVar6,lVar15);
      }
      else {
        func_0x00010bf0b760();
        if ((uint)uVar6 < 0x16) {
          func_0x00010b697928();
        }
        else {
          uVar6 = 0xfffffffffbadbeef;
        }
        uVar3 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
        func_0x00010bf0b260(uVar3);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = puVar8;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x000108018d28(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = unaff_x23;
        func_0x00010bfad280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -0x2a8) = puVar9;
        if (puVar9 == (undefined *)0x0) {
          puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          lVar15 = *(long *)((long)register0x00000008 + -0x2b8);
          (**(code **)(lVar15 + 0x10))(lVar15,0,puVar9);
          _objc_release(puVar9);
        }
        else {
          *(undefined **)((long)register0x00000008 + -0x2e8) = puVar10;
          *(undefined **)((long)register0x00000008 + -0x2e0) = unaff_x23;
          puVar8 = puVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
          puVar9 = puVar8;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460();
          _objc_retainAutoreleasedReturnValue();
          *(undefined **)((long)register0x00000008 + -0x2d8) = puVar10;
          _objc_release(puVar9);
          unaff_x28 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
          *(undefined **)((long)register0x00000008 + -0x2f0) = puVar8;
          func_0x00010c28dec0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010c123f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = puVar10;
          func_0x00010bf52a60();
          if (puVar8 != (undefined *)0x0) {
            lVar15 = **(long **)((long)register0x00000008 + -0x200);
            do {
              puVar9 = (undefined *)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x200) != lVar15) {
                  _objc_enumerationMutation(puVar10);
                }
                uVar6 = *(undefined8 *)
                         (*(long *)((long)register0x00000008 + -0x208) + (long)puVar9 * 8);
                uVar12 = uVar6;
                func_0x00010c296d80(uVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c086560(uVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(unaff_x28);
                _objc_release(uVar6);
                _objc_release(uVar12);
                puVar9 = puVar9 + 1;
              } while (puVar8 != puVar9);
              puVar8 = puVar10;
              func_0x00010bf52a60();
            } while (puVar8 != (undefined *)0x0);
          }
          _objc_release(puVar10);
          puVar10 = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined **)((long)register0x00000008 + -0x270) = PTR___NSConcreteStackBlock_11034bd00;
          unaff_d8 = 0xc2000000;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 0xc2000000;
          *(code **)((long)register0x00000008 + -0x260) = FUN_107f07af0;
          *(undefined **)((long)register0x00000008 + -600) = &UNK_110a12800;
          _objc_retain(lVar13);
          *(long *)((long)register0x00000008 + -0x250) = lVar13;
          _objc_retain(puVar1);
          *(undefined **)((long)register0x00000008 + -0x248) = puVar1;
          _objc_retain(puVar14);
          *(undefined **)((long)register0x00000008 + -0x240) = puVar14;
          *(undefined8 *)((long)register0x00000008 + -0x218) =
               *(undefined8 *)((long)register0x00000008 + -0x2d0);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
          _objc_retain(uVar12);
          *(undefined8 *)((long)register0x00000008 + -0x238) = uVar12;
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2c8);
          _objc_retain(uVar12);
          *(undefined8 *)((long)register0x00000008 + -0x230) = uVar12;
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
          _objc_retain(uVar12);
          *(undefined8 *)((long)register0x00000008 + -0x228) = uVar12;
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2b8);
          _objc_retain(uVar12);
          *(undefined8 *)((long)register0x00000008 + -0x220) = uVar12;
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x270);
          _objc_retainBlock();
          *(undefined **)((long)register0x00000008 + -0x298) = puVar10;
          *(undefined8 *)((long)register0x00000008 + -0x290) = 0xc2000000;
          *(code **)((long)register0x00000008 + -0x288) = FUN_107f07b0c;
          *(undefined **)((long)register0x00000008 + -0x280) = &UNK_1108ab6d0;
          _objc_retain(uVar12);
          *(undefined8 *)((long)register0x00000008 + -0x278) = uVar12;
          puVar5 = (undefined1 *)((long)register0x00000008 + -0x298);
          _objc_retainBlock();
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uVar6 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
          func_0x00010bf0b260();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar6;
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)((long)register0x00000008 + -0x308) = uVar6;
          *(undefined8 *)((long)register0x00000008 + -0x300) = uVar12;
          *(long *)((long)register0x00000008 + -0x310) = lVar13;
          func_0x00010c14de00(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(uVar6);
          puVar9 = unaff_x28;
          func_0x00010bf51e00(unaff_x28);
          *(undefined1 **)((long)register0x00000008 + -0x308) = puVar4;
          *(undefined1 **)((long)register0x00000008 + -0x300) = puVar5;
          *(undefined8 *)((long)register0x00000008 + -0x310) = 0;
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
          puVar10 = *(undefined **)((long)register0x00000008 + -0x2e8);
          func_0x00010c25f520(uVar12);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar5);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x278));
          puVar8 = *(undefined **)((long)register0x00000008 + -0x2c8);
          _objc_release(puVar4);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x220));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x228));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x230));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x238));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x240));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x248));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x250));
          lVar15 = *(long *)((long)register0x00000008 + -0x2b8);
          _objc_release(unaff_x28);
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2d8));
          _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2f0));
          unaff_x23 = *(undefined **)((long)register0x00000008 + -0x2e0);
        }
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2a8));
        _objc_release(puVar10);
        _objc_release(unaff_x23);
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
      }
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x2a0));
    }
    else {
      (**(code **)(lVar15 + 0x10))(lVar15,1,0);
    }
    _objc_release(lVar15);
    _objc_release(uVar6);
    _objc_release(puVar8);
    _objc_release(uVar12);
    _objc_release(puVar14);
    _objc_release(puVar1);
    param_1 = lVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x88)) {
      return;
    }
    unaff_x30 = FUN_107f07af0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x310);
    unaff_x19 = uVar6;
    unaff_x20 = uVar12;
    unaff_x21 = puVar10;
    unaff_x22 = puVar8;
    unaff_x24 = lVar15;
    unaff_x25 = lVar13;
    unaff_x26 = puVar14;
    unaff_x27 = puVar1;
  } while( true );
}



/* Entry: 107f07b0c; end: 107f07ba7;  */

void FUN_107f07b0c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_3);
  if (param_2 == 0) {
    func_0x00010bf99400(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c252ee0(param_2);
    func_0x00010bf99340(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f07ba8; end: 107f08903;  */

/* WARNING: Possible PIC construction at 0x000107f0813c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f08140) */

undefined8 *
FUN_107f07ba8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined **param_6,undefined8 *param_7,ulong param_8)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined1 *unaff_x22;
  undefined1 *puVar16;
  undefined **unaff_x23;
  undefined8 uVar17;
  long lVar18;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_2;
  _objc_retain();
  puStack_148 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar20 = &uStack_130;
  puVar16 = auStack_f0;
  uVar13 = 0x10;
  puVar15 = param_3;
  puStack_140 = param_3;
  func_0x00010bf52a60();
  if (puVar15 == (undefined8 *)0x0) {
    puStack_150 = (undefined8 *)0x0;
  }
  else {
    puStack_150 = (undefined8 *)0x0;
    param_2 = (undefined8 *)*puStack_120;
    unaff_x23 = &PTR____CFConstantStringClassReference_110f726f8;
    do {
      param_3 = (undefined8 *)0x0;
      do {
        if ((undefined8 *)*puStack_120 != param_2) {
          _objc_enumerationMutation(puStack_140);
        }
        unaff_x25 = param_1;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = unaff_x25;
        func_0x00010c06cde0();
        if ((int)puVar20 != 0) {
          unaff_x26 = unaff_x25;
          func_0x00010bfad280();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x26;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          puStack_138 = (undefined1 *)0x0;
          unaff_x27 = puStack_148;
          func_0x00010bf0e880();
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = puStack_138;
          _objc_release(unaff_x28);
          if (unaff_x27 != (undefined8 *)0x0 && unaff_x22 == (undefined1 *)0x0) {
            puVar20 = unaff_x27;
            func_0x00010bfad040();
            puStack_150 = (undefined8 *)((long)puVar20 + (long)puStack_150);
          }
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
        }
        _objc_release(unaff_x25);
        param_3 = (undefined8 *)((long)param_3 + 1);
      } while (puVar15 != param_3);
      puVar20 = &uStack_130;
      puVar16 = auStack_f0;
      uVar13 = 0x10;
      puVar15 = puStack_140;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined8 *)0x0);
    unaff_x24 = 0;
  }
  _objc_release(puStack_140);
  _objc_release(puStack_148);
  puVar15 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puStack_150;
  }
  uVar23 = 0x107f07d94;
  ___stack_chk_fail();
  ppuVar1 = &puStack_150;
  puVar4 = (undefined8 *)register0x00000008;
  do {
    puVar2 = ppuVar1;
    puVar2[-0xc] = unaff_x28;
    puVar2[-0xb] = unaff_x27;
    puVar2[-10] = unaff_x26;
    puVar2[-9] = unaff_x25;
    puVar2[-8] = unaff_x24;
    puVar2[-7] = unaff_x23;
    puVar2[-6] = unaff_x22;
    puVar2[-5] = param_3;
    puVar2[-4] = param_2;
    puVar2[-3] = param_1;
    puVar2[-2] = (undefined1 *)((long)puVar4 + -0x10);
    puVar2[-1] = uVar23;
    puVar2[-0x2e] = puVar2[7];
    puVar2[-0x2a] = puVar2[6];
    puVar2[-0x30] = puVar2[5];
    puVar2[-0x27] = puVar2[4];
    puVar2[-0x28] = puVar2[3];
    uVar23 = puVar2[1];
    uVar10 = puVar2[2];
    uVar17 = *puVar2;
    puVar2[-0x32] = puVar15;
    _objc_retain();
    _objc_retain(puVar12);
    puVar2[-0x31] = puVar20;
    _objc_retain(puVar20);
    puVar2[-0x2f] = puVar16;
    _objc_retain(puVar16);
    puVar2[-0x29] = uVar13;
    _objc_retain(uVar13);
    _objc_retain(param_6);
    _objc_retain(param_8);
    puVar2[-0x2c] = uVar17;
    unaff_x26 = (undefined8 *)puVar2[-0x28];
    lVar18 = puVar2[-0x2a];
    unaff_x27 = (undefined8 *)puVar2[-0x30];
    _objc_retain(uVar17);
    puVar2[-0x2b] = uVar23;
    lVar21 = puVar2[-0x2e];
    _objc_retain(uVar23);
    puVar2[-0x2d] = uVar10;
    _objc_retain(uVar10);
    _objc_retain(unaff_x26);
    _objc_retain(puVar2[-0x27]);
    _objc_retain(unaff_x27);
    _objc_retain(lVar18);
    _objc_retain(lVar21);
    puVar20 = puVar12;
    func_0x00010bf529e0();
    if (puVar20 <= param_7) {
      puVar15 = (undefined8 *)puVar2[-0x32];
      (**(code **)(lVar21 + 0x10))(lVar21,unaff_x27,puVar15,puVar2[-0x29]);
      uVar13 = puVar2[-0x2f];
      uVar23 = puVar2[-0x31];
LAB_107f08660:
      _objc_release(lVar21);
      _objc_release(lVar18);
      _objc_release(unaff_x27);
      _objc_release(puVar2[-0x27]);
      _objc_release(puVar2[-0x28]);
      _objc_release(puVar2[-0x2d]);
      _objc_release(puVar2[-0x2b]);
      _objc_release(puVar2[-0x2c]);
      _objc_release(param_8);
      _objc_release(param_6);
      _objc_release(puVar2[-0x29]);
      _objc_release(uVar13);
      _objc_release(uVar23);
      _objc_release(puVar12);
      _objc_release(puVar15);
      return puVar15;
    }
    puVar2[-0x34] = param_8;
    puVar2[-0x33] = param_6;
    puVar20 = puVar12;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar20;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = (undefined8 *)puVar2[-0x32];
    puVar5 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x000107f086f8();
    puVar2[-0x35] = puVar5;
    if (((ulong)puVar4 & 1) != 0) {
      puVar2[-0x37] = param_7;
      puVar6 = PTR_PTR_1126d8588;
      func_0x00010c2b1da0(PTR_PTR_1126d8588);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(unaff_x27);
      _objc_release(puVar7);
      _objc_release(puVar6);
      func_0x00010c077900();
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = puVar20;
        func_0x00010c241220(puVar20);
        _objc_retainAutoreleasedReturnValue();
        iVar3 = (int)puVar2[-0x33];
        func_0x00010bf4b900();
        _objc_release(puVar4);
        if (iVar3 != 0) goto LAB_107f07fa8;
        puVar2[-0x36] = puVar20;
        puVar20 = puVar12;
        func_0x00010c0dfd40(puVar12);
        _objc_retainAutoreleasedReturnValue();
        param_8 = puVar2[-0x34];
        uVar8 = param_8;
        func_0x00010c13a8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar20);
        uVar9 = uVar8;
        func_0x00010c06cde0();
        puVar2[-0x39] = uVar8;
        if ((uVar9 & 1) == 0) {
          puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf993c0(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar18 + 0x10))(lVar18,puVar6);
          _objc_release(puVar6);
          param_6 = (undefined **)puVar2[-0x33];
          uVar13 = puVar2[-0x2f];
          uVar23 = puVar2[-0x31];
        }
        else {
          func_0x00010bfad280();
          _objc_retainAutoreleasedReturnValue();
          puVar2[-0x38] = uVar8;
          uVar10 = puVar2[-0x36];
          func_0x00010c241220(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = puVar2[-0x2f];
          uVar23 = uVar13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          uVar10 = uVar23;
          FUN_107effb70();
          puVar2[-0x3c] = uVar23;
          if ((int)uVar10 != 0) {
            func_0x00010bfad160();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar23;
            func_0x00010c0f5800();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = puVar2[-0x27];
            func_0x00010bf64a80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar13);
            lVar21 = lVar11;
            func_0x00010c08fa60();
            if (lVar21 != 0) {
              _objc_retain(uVar23);
              _objc_release(puVar2[-0x38]);
              puVar2[-0x38] = uVar23;
            }
            _objc_release(lVar11);
            _objc_release(uVar23);
            uVar13 = puVar2[-0x2f];
            lVar21 = puVar2[-0x2e];
            param_8 = puVar2[-0x34];
          }
          uVar23 = puVar2[-0x38];
          func_0x00010c0f5800(uVar23);
          _objc_retainAutoreleasedReturnValue();
          puVar2[-0xe] = 0;
          uVar10 = puVar2[-0x27];
          func_0x00010bf0e880();
          _objc_retainAutoreleasedReturnValue();
          puVar2[-0x3a] = uVar10;
          lVar11 = puVar2[-0xe];
          _objc_retain(lVar11);
          _objc_release(uVar23);
          puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
          puVar2[-0x3d] = lVar11;
          if ((lVar11 == 0) || (puVar2[-0x3a] != 0)) {
            uVar17 = puVar2[-0x35];
            uVar23 = uVar17;
            func_0x00010c0c6f20(uVar17);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar23;
            func_0x00010c28ea80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc3460();
            _objc_retainAutoreleasedReturnValue();
            puVar2[-0x3b] = puVar6;
            uVar19 = puVar2[-0x31];
            _objc_release(uVar10);
            uVar10 = puVar2[-0x34];
            _objc_release(uVar23);
            uVar23 = uVar17;
            func_0x00010c0c6f20();
            _objc_retainAutoreleasedReturnValue();
            puVar2[-0x3e] = uVar23;
            func_0x00010c28dec0();
            _objc_retainAutoreleasedReturnValue();
            puVar2[-0x3f] = uVar23;
            puVar2[-0x26] = PTR___NSConcreteStackBlock_11034bd00;
            puVar2[-0x25] = 0xc2000000;
            puVar2[-0x24] = 0x107f09028;
            puVar2[-0x23] = &UNK_110a12890;
            _objc_retain(unaff_x27);
            puVar2[-0x22] = unaff_x27;
            _objc_retain(puVar2[-0x36]);
            puVar2[-0x21] = puVar2[-0x36];
            uVar23 = puVar2[-0x2b];
            _objc_retain(uVar23);
            puVar2[-0x20] = uVar23;
            _objc_retain(puVar15);
            puVar2[-0x1f] = puVar15;
            _objc_retain(puVar12);
            puVar2[-0x1e] = puVar12;
            _objc_retain(uVar19);
            puVar2[-0x1d] = uVar19;
            _objc_retain(uVar13);
            puVar2[-0x1c] = uVar13;
            uVar22 = puVar2[-0x2d];
            uVar13 = puVar2[-0x29];
            _objc_retain(uVar13);
            puVar2[-0x1b] = uVar13;
            param_6 = (undefined **)puVar2[-0x33];
            _objc_retain(param_6);
            puVar2[-0x1a] = param_6;
            puVar2[-0xf] = puVar2[-0x37];
            _objc_retain(uVar10);
            puVar2[-0x19] = uVar10;
            uVar10 = puVar2[-0x2c];
            _objc_retain(uVar10);
            puVar2[-0x18] = uVar10;
            _objc_retain(uVar22);
            puVar2[-0x17] = uVar22;
            uVar13 = puVar2[-0x28];
            _objc_retain(uVar13);
            puVar2[-0x16] = uVar13;
            uVar19 = puVar2[-0x27];
            _objc_retain(uVar19);
            puVar2[-0x15] = uVar19;
            _objc_retain(lVar18);
            puVar2[-0x11] = lVar18;
            _objc_retain(puVar2[-0x2e]);
            puVar2[-0x10] = puVar2[-0x2e];
            uVar23 = puVar2[-0x3a];
            _objc_retain(uVar23);
            puVar2[-0x14] = uVar23;
            uVar13 = puVar2[-0x38];
            _objc_retain(uVar13);
            puVar2[-0x13] = uVar13;
            _objc_retain(uVar17);
            puVar2[-0x12] = uVar17;
            func_0x000107f09028(puVar2 + -0x26,puVar2[-0x3b]);
            _objc_release(puVar2[-0x3f]);
            _objc_release(puVar2[-0x3e]);
            _objc_release(uVar17);
            puVar2[-0x38] = uVar13;
            _objc_release(uVar13);
            _objc_release(uVar23);
            _objc_release(puVar2[-0x2e]);
            _objc_release(lVar18);
            uVar13 = puVar2[-0x2f];
            uVar23 = puVar2[-0x31];
            _objc_release(uVar19);
            _objc_release(puVar2[-0x28]);
            _objc_release(uVar22);
            unaff_x27 = (undefined8 *)puVar2[-0x30];
            _objc_release(uVar10);
            param_8 = puVar2[-0x34];
            _objc_release(param_8);
            _objc_release(param_6);
            lVar21 = puVar2[-0x2e];
            _objc_release(puVar2[-0x29]);
            _objc_release(uVar13);
            _objc_release(uVar23);
            _objc_release(puVar12);
            _objc_release(puVar15);
            _objc_release(puVar2[-0x2b]);
            _objc_release(puVar2[-0x36]);
            _objc_release(unaff_x27);
          }
          else {
            puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x00010bf99340();
            _objc_retainAutoreleasedReturnValue();
            pcVar14 = *(code **)(lVar18 + 0x10);
            puVar2[-0x3b] = puVar6;
            (*pcVar14)(lVar18);
            param_6 = (undefined **)puVar2[-0x33];
            uVar23 = puVar2[-0x31];
          }
          _objc_release(puVar2[-0x3b]);
          _objc_release(puVar2[-0x3a]);
          _objc_release(puVar2[-0x3d]);
          _objc_release(puVar2[-0x3c]);
          _objc_release(puVar2[-0x38]);
        }
        _objc_release(puVar2[-0x39]);
LAB_107f0864c:
        puVar20 = (undefined8 *)puVar2[-0x36];
      }
      else {
LAB_107f07fa8:
        puVar2[-0x42] = lVar18;
        puVar2[-0x41] = lVar21;
        puVar2[-0x44] = puVar2[-0x27];
        puVar2[-0x43] = unaff_x27;
        puVar2[-0x45] = unaff_x26;
        puVar2[-0x47] = puVar2[-0x2b];
        puVar2[-0x46] = puVar2[-0x2d];
        puVar2[-0x48] = puVar2[-0x2c];
        uVar23 = puVar2[-0x31];
        uVar13 = puVar2[-0x2f];
        param_6 = (undefined **)puVar2[-0x33];
        param_8 = puVar2[-0x34];
        FUN_107f08904(puVar15,puVar12,uVar23,uVar13,puVar2[-0x29],param_6,puVar2[-0x37],param_8);
      }
      _objc_release(puVar2[-0x35]);
      _objc_release(puVar20);
      goto LAB_107f08660;
    }
    puVar2[-0x36] = puVar20;
    while( true ) {
      param_7 = (undefined8 *)((long)param_7 + 1);
      puVar20 = puVar12;
      func_0x00010bf529e0();
      if (puVar20 <= param_7) {
        (**(code **)(lVar21 + 0x10))(lVar21,unaff_x27,puVar15,puVar2[-0x29]);
        uVar23 = puVar2[-0x31];
        uVar13 = puVar2[-0x2f];
        param_8 = puVar2[-0x34];
        param_6 = (undefined **)puVar2[-0x33];
        lVar18 = puVar2[-0x2a];
        goto LAB_107f0864c;
      }
      unaff_x28 = puVar12;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = unaff_x28;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = param_3;
      func_0x000107f086f8();
      if ((int)puVar20 != 0) break;
      _objc_release(param_3);
      _objc_release(unaff_x28);
    }
    uVar13 = puVar2[-0x29];
    puVar2[-0x42] = puVar2[-0x2a];
    puVar2[-0x41] = lVar21;
    puVar2[-0x44] = puVar2[-0x27];
    puVar2[-0x43] = unaff_x27;
    puVar2[-0x46] = puVar2[-0x2d];
    puVar2[-0x45] = unaff_x26;
    puVar2[-0x48] = puVar2[-0x2c];
    puVar2[-0x47] = puVar2[-0x2b];
    puVar20 = (undefined8 *)puVar2[-0x31];
    puVar16 = (undefined1 *)puVar2[-0x2f];
    param_6 = (undefined **)puVar2[-0x33];
    param_8 = puVar2[-0x34];
    uVar23 = 0x107f08140;
    ppuVar1 = (undefined8 **)(puVar2 + -0x48);
    param_1 = puVar15;
    param_2 = puVar12;
    unaff_x22 = puVar16;
    unaff_x23 = param_6;
    unaff_x24 = param_8;
    unaff_x25 = puVar20;
    puVar4 = puVar2;
  } while( true );
}



/* Entry: 107f08904; end: 107f094b3;  */

void FUN_107f08904(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  uVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar4 = lVar3;
  func_0x00010c26e460(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c28ea80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar2 = uVar1;
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar5 = lVar3;
  func_0x00010c26e460();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c28ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(lVar5);
  if ((lVar8 == 0) || (lVar4 == 0)) {
    FUN_107f09af4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15,param_16);
  }
  else {
    uVar2 = param_11;
    func_0x00010c1179e0(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1341c0(0x3f800000);
    _objc_release(uVar2);
    puVar9 = PTR_PTR_1126d8258;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c26e460();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c28dec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_14);
    _objc_retain(param_15);
    _objc_retain(param_16);
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_14);
    _objc_retain(param_15);
    _objc_retain(param_16);
    _objc_retain(uVar1);
    func_0x00010c13da80(puVar9);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(puVar9);
    _objc_release(uVar1);
    _objc_release(param_16);
    _objc_release(param_15);
    _objc_release(param_14);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_release(param_16);
    _objc_release(param_15);
    _objc_release(param_14);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  _objc_release(lVar4);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107f094b4; end: 107f096bf;  */

void FUN_107f094b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf001c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72040(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf001c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar6);
    _objc_release(lVar1);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126d8588;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c089820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b1da0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar1 = param_2;
  func_0x00010bf001c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5580(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar3);
  puVar5 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130f40(uVar3);
  _objc_release(puVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c252ee0(param_2);
  func_0x00010bf95a60(uVar3);
  FUN_107f08904(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x70),
                *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
  _objc_release(puVar4);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f096c0; end: 107f09773;  */

void FUN_107f096c0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),7);
  return;
}



/* Entry: 107f09774; end: 107f099af;  */

void FUN_107f09774(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulong)param_1 >> 0x20);
  uVar10 = (undefined4)param_1;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    func_0x00010bf99400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c252ee0(param_3);
    func_0x00010bf99340();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c252ee0();
  puVar2 = puVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(puVar1);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95a60(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(*(long *)(param_2 + 0x38),puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(puVar2);
  func_0x00010c1179e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb67a0(puVar2);
  _objc_release(puVar2);
  func_0x00010c1341c0((float)(double)CONCAT44(uVar11,uVar10),uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107f099b0; end: 107f09a2f;  */

void FUN_107f099b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c1179e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb67a0(param_3);
  _objc_release(param_3);
  func_0x00010c1341c0((float)(double)CONCAT44(uVar3,uVar2),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f09a30; end: 107f09af3;  */

void FUN_107f09a30(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  _objc_retain(*(undefined8 *)(param_2 + 0xa0));
  __Block_object_assign(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xb0),7);
  return;
}



/* Entry: 107f09af4; end: 107f0a2d3;  */

void FUN_107f09af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  uVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = lVar3;
  func_0x00010c0efe20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c28ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (lVar6 == 0) {
    FUN_107f0a608(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,param_8,param_9,param_10
                  ,param_11,param_12,param_13,param_14,param_15,param_16);
  }
  else {
    uVar2 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar7;
    func_0x00010bfad280(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_13;
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar4 == 0) {
      FUN_107f0a608(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,param_8,param_9,
                    param_10,param_11,param_12,param_13,param_14,param_15,param_16);
    }
    else {
      lVar5 = lVar3;
      func_0x00010c0efe20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c28ea80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_107f0b0d0;
      puStack_110 = &UNK_110a12830;
      _objc_retain(uVar1);
      uStack_108 = uVar1;
      _objc_retain(param_10);
      uStack_100 = param_10;
      _objc_retain(puVar8);
      puStack_f8 = puVar8;
      _objc_retain(param_14);
      uStack_f0 = param_14;
      uStack_80 = param_7;
      _objc_retain(param_1);
      lStack_e8 = param_1;
      _objc_retain(param_2);
      uStack_e0 = param_2;
      _objc_retain(param_3);
      uStack_d8 = param_3;
      _objc_retain(param_4);
      uStack_d0 = param_4;
      _objc_retain(param_5);
      uStack_c8 = param_5;
      _objc_retain(param_6);
      uStack_c0 = param_6;
      _objc_retain(param_8);
      uStack_b8 = param_8;
      _objc_retain(param_9);
      uStack_b0 = param_9;
      _objc_retain(param_11);
      uStack_a8 = param_11;
      _objc_retain(param_12);
      uStack_a0 = param_12;
      _objc_retain(param_13);
      lStack_98 = param_13;
      _objc_retain(param_15);
      uStack_90 = param_15;
      _objc_retain(param_16);
      uStack_88 = param_16;
      ppuVar9 = &puStack_128;
      _objc_retainBlock();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_107f0b250;
      puStack_150 = &UNK_110a10f60;
      _objc_retain(uVar1);
      uStack_148 = uVar1;
      _objc_retain(param_10);
      uStack_140 = param_10;
      puStack_138 = puVar8;
      _objc_retain(param_15);
      uStack_130 = param_15;
      _objc_retain(puVar8);
      ppuVar10 = &puStack_168;
      _objc_retainBlock();
      uVar2 = uVar1;
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(lVar4);
      func_0x00010bf18ec0(param_10);
      _objc_release(uVar2);
      uVar2 = param_11;
      func_0x00010c1179e0(param_11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1341c0(0x3f800000);
      _objc_release(uVar2);
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar2 = uVar1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar2;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_release(uVar2);
      uVar2 = uVar7;
      func_0x00010bfad280(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c0efe20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c28dec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f520(param_9);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(uVar2);
      _objc_release(puVar12);
      _objc_release(ppuVar10);
      _objc_release(uStack_130);
      _objc_release(puStack_138);
      _objc_release(uStack_140);
      _objc_release(uStack_148);
      _objc_release(ppuVar9);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_release(lStack_98);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(uStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_release(lStack_e8);
      _objc_release(uStack_f0);
      _objc_release(puStack_f8);
      _objc_release(uStack_100);
      _objc_release(uStack_108);
      _objc_release(puVar8);
    }
    _objc_release(lVar4);
    _objc_release(uVar7);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107f0a2d4; end: 107f0a31f;  */

void FUN_107f0a2d4(long param_1)

{
  FUN_107f09af4(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
  return;
}



/* Entry: 107f0a320; end: 107f0a3cb;  */

void FUN_107f0a320(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),7);
  return;
}



/* Entry: 107f0a3cc; end: 107f0a607;  */

void FUN_107f0a3cc(long param_1,int param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,ulong param_8)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  ulong uStack_240;
  undefined *puStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  long lStack_140;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 == 0) {
    puVar2 = *(undefined **)(param_1 + 0x88);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x88));
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108e00074(&PTR____CFConstantStringClassReference_110ec3fd8,
                        &PTR____CFConstantStringClassReference_110ec3ff8,puVar5,uVar19);
    _objc_release(uVar19);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  else {
    uVar1 = param_3;
    func_0x00010c252ee0();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (uVar1 != 0x19c) {
      lVar22 = *(long *)(param_1 + 0x90);
      if (param_3 == 0) {
        uVar1 = param_4;
        func_0x00010bf99400();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar1 = param_3;
        func_0x00010c252ee0();
        uVar20 = param_4;
        func_0x00010bf99340();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = puVar3;
      (**(code **)(lVar22 + 0x10))(lVar22);
      _objc_release(puVar3);
      goto LAB_107f0a5c0;
    }
  }
  puVar2 = *(undefined **)(param_1 + 0x28);
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar20 = *(ulong *)(param_1 + 0x38);
  param_5 = *(undefined8 *)(param_1 + 0x40);
  param_6 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  param_7 = *(long *)(param_1 + 0xa0);
  param_8 = *(ulong *)(param_1 + 0x50);
  uStack_b8 = *(undefined8 *)(param_1 + 0x60);
  uStack_c0 = *(ulong *)(param_1 + 0x58);
  uStack_a8 = *(undefined8 *)(param_1 + 0x70);
  uStack_b0 = *(undefined8 *)(param_1 + 0x68);
  lStack_98 = *(long *)(param_1 + 0x80);
  uStack_a0 = *(undefined8 *)(param_1 + 0x78);
  uStack_90 = *(undefined8 *)(param_1 + 0x90);
  FUN_107f09af4(*(undefined8 *)(param_1 + 0x20));
LAB_107f0a5c0:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar20);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(uStack_c0);
  _objc_retain(uStack_b8);
  _objc_retain(uStack_b0);
  _objc_retain(uStack_a8);
  _objc_retain(uStack_a0);
  _objc_retain(lStack_98);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar4 = puVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar7 = uVar6;
  func_0x00010bfc0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  if (param_8 < uVar8) {
    uVar7 = uVar6;
    func_0x00010bfc0e60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010c28ea80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c08fa60();
    _objc_release(uVar7);
    if (uVar9 == 0) {
      param_8 = param_8 + 1;
      uVar7 = uVar6;
      func_0x00010bfc0e60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      if (param_8 < uVar9) {
        do {
          uVar7 = uVar6;
          func_0x00010bfc0e60();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar9;
          func_0x00010c28ea80();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar7;
          func_0x00010c08fa60();
          _objc_release(uVar7);
          if (uVar18 != 0) {
            puVar3 = puVar2;
            FUN_107f0a608(param_3,puVar2,uVar1,uVar20,param_5,param_6,param_7,param_8,uStack_c0,
                          uStack_b8,uStack_b0,uStack_a8,uStack_a0,lStack_98,uStack_90,uStack_88,
                          uStack_80);
            goto LAB_107f0af94;
          }
          _objc_release(uVar9);
          param_8 = param_8 + 1;
          uVar7 = uVar6;
          func_0x00010bfc0e60();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010bf529e0();
          _objc_release(uVar7);
        } while (param_8 < uVar9);
      }
      puVar3 = puVar2;
      func_0x000107f07d94(param_3,puVar2,uVar1,uVar20,param_5,param_6,param_7 + 1,uStack_c0,
                          uStack_b8,uStack_b0,uStack_a8,uStack_a0,lStack_98,uStack_90,uStack_88,
                          uStack_80);
    }
    else {
      uVar7 = uVar8;
      func_0x00010bf0b760();
      uVar9 = uStack_c0;
      func_0x00010c13a8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar7;
      func_0x000108018d28(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfad280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      lVar21 = lStack_98;
      func_0x00010bf64ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (lVar21 == 0) {
        puVar3 = puVar2;
        FUN_107f0a608(param_3,puVar2,uVar1,uVar20,param_5,param_6,param_7,param_8 + 1,uStack_c0,
                      uStack_b8,uStack_b0,uStack_a8,uStack_a0,lStack_98,uStack_90,uStack_88,
                      uStack_80);
      }
      else {
        uVar18 = uVar8;
        func_0x00010c28ea80(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar18);
        puVar13 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_278 = 0xc2000000;
        pcStack_270 = FUN_107f0b48c;
        puStack_268 = &UNK_110a12920;
        _objc_retain(puVar4);
        puStack_260 = puVar4;
        _objc_retain(uVar8);
        uStack_258 = uVar8;
        _objc_retain(uStack_b0);
        uStack_250 = uStack_b0;
        _objc_retain(puVar5);
        puStack_248 = puVar5;
        _objc_retain(param_3);
        uStack_240 = param_3;
        _objc_retain(puVar2);
        puStack_238 = puVar2;
        _objc_retain(uVar1);
        uStack_230 = uVar1;
        _objc_retain(uVar20);
        uStack_228 = uVar20;
        _objc_retain(param_5);
        uStack_220 = param_5;
        _objc_retain(param_6);
        uStack_218 = param_6;
        lStack_1d0 = param_7;
        uStack_1c8 = param_8;
        _objc_retain(uStack_c0);
        uStack_210 = uStack_c0;
        _objc_retain(uStack_b8);
        uStack_208 = uStack_b8;
        _objc_retain(uStack_a8);
        uStack_200 = uStack_a8;
        _objc_retain(uStack_a0);
        uStack_1f8 = uStack_a0;
        _objc_retain(lStack_98);
        lStack_1f0 = lStack_98;
        _objc_retain(uStack_90);
        uStack_1e8 = uStack_90;
        _objc_retain(uStack_88);
        uStack_1e0 = uStack_88;
        _objc_retain(uStack_80);
        uStack_1d8 = uStack_80;
        ppuVar11 = &puStack_280;
        _objc_retainBlock();
        puStack_2c8 = puVar13;
        uStack_2c0 = 0xc2000000;
        pcStack_2b8 = FUN_107f0b5d8;
        puStack_2b0 = &UNK_110a12950;
        _objc_retain(puVar4);
        puStack_2a8 = puVar4;
        _objc_retain(uVar8);
        uStack_2a0 = uVar8;
        _objc_retain(uStack_b0);
        uStack_298 = uStack_b0;
        _objc_retain(puVar5);
        puStack_290 = puVar5;
        _objc_retain(uStack_88);
        uStack_288 = uStack_88;
        ppuVar12 = &puStack_2c8;
        _objc_retainBlock();
        puVar13 = puVar4;
        func_0x00010c241220(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b697864(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(lVar21);
        func_0x00010bf18ea0(uStack_b0);
        _objc_release(uVar7);
        _objc_release(puVar13);
        puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar8;
        func_0x00010c28dec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010bf52a60();
        lVar22 = lRam0000000000000000;
        while (uVar7 != 0) {
          uVar23 = 0;
          do {
            if (lRam0000000000000000 != lVar22) {
              _objc_enumerationMutation(uVar18);
            }
            uVar14 = uVar8;
            func_0x00010c28dec0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar14;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar13);
            _objc_release(uVar15);
            _objc_release(uVar14);
            uVar23 = uVar23 + 1;
          } while (uVar7 != uVar23);
          uVar7 = uVar18;
          func_0x00010bf52a60();
        }
        _objc_release(uVar18);
        uVar19 = uStack_a8;
        func_0x00010c1179e0(uStack_a8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1341c0(0x3f800000);
        _objc_release(uVar19);
        puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar16 = puVar4;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar8;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar7;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar18);
        _objc_release(uVar7);
        _objc_release(puVar16);
        puVar16 = puVar13;
        func_0x00010bf51e00(puVar13);
        func_0x00010c25f520(uStack_b8);
        _objc_release(puVar16);
        _objc_release(puVar17);
        _objc_release(puVar13);
        _objc_release(ppuVar12);
        _objc_release(uStack_288);
        _objc_release(puStack_290);
        _objc_release(uStack_298);
        _objc_release(uStack_2a0);
        _objc_release(puStack_2a8);
        _objc_release(ppuVar11);
        _objc_release(uStack_1d8);
        _objc_release(uStack_1e0);
        _objc_release(uStack_1e8);
        _objc_release(lStack_1f0);
        _objc_release(uStack_1f8);
        _objc_release(uStack_200);
        _objc_release(uStack_208);
        _objc_release(uStack_210);
        _objc_release(uStack_218);
        _objc_release(uStack_220);
        _objc_release(uStack_228);
        _objc_release(uStack_230);
        _objc_release(puStack_238);
        _objc_release(uStack_240);
        _objc_release(puStack_248);
        _objc_release(uStack_250);
        _objc_release(uStack_258);
        _objc_release(puStack_260);
        _objc_release(puVar5);
      }
      _objc_release(lVar21);
      _objc_release(uVar10);
LAB_107f0af94:
      _objc_release(uVar9);
    }
    _objc_release(uVar8);
  }
  else {
    puVar3 = puVar2;
    func_0x000107f07d94(param_3,puVar2,uVar1,uVar20,param_5,param_6,param_7 + 1,uStack_c0,uStack_b8,
                        uStack_b0,uStack_a8,uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80);
  }
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar20);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar19 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c252ee0(puVar3);
  func_0x00010bf95a60(uVar19);
  lVar21 = *(long *)(param_3 + 0x38);
  func_0x00010bf529e0();
  if (lVar21 != 0) {
    uVar19 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c089820(uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d8588;
    func_0x00010c2b1da0(PTR_PTR_1126d8588);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf001c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7820(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar24 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010bf529e0(uVar24);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar24);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar19);
  }
  FUN_107f0a608(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48),
                *(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),
                *(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_3 + 0x68),
                *(undefined8 *)(param_3 + 0xa8),0,*(undefined8 *)(param_3 + 0x70),
                *(undefined8 *)(param_3 + 0x78),*(undefined8 *)(param_3 + 0x28),
                *(undefined8 *)(param_3 + 0x80),*(undefined8 *)(param_3 + 0x88),
                *(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0x38),
                *(undefined8 *)(param_3 + 0x98),*(undefined8 *)(param_3 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f0a608; end: 107f0b0cf;  */

void FUN_107f0a608(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8,ulong param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar21 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar21;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = uVar3;
  func_0x00010bfc0e60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (param_8 < uVar5) {
    uVar4 = uVar3;
    func_0x00010bfc0e60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010c28ea80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    if (uVar6 == 0) {
      param_8 = param_8 + 1;
      uVar4 = uVar3;
      func_0x00010bfc0e60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      if (param_8 < uVar6) {
        do {
          uVar4 = uVar3;
          func_0x00010bfc0e60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          uVar4 = uVar6;
          func_0x00010c28ea80();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar4;
          func_0x00010c08fa60();
          _objc_release(uVar4);
          if (uVar16 != 0) {
            uVar19 = param_2;
            FUN_107f0a608(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
            goto LAB_107f0af94;
          }
          _objc_release(uVar6);
          param_8 = param_8 + 1;
          uVar4 = uVar3;
          func_0x00010bfc0e60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf529e0();
          _objc_release(uVar4);
        } while (param_8 < uVar6);
      }
      uVar19 = param_2;
      func_0x000107f07d94(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + 1,param_9,
                          param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
    }
    else {
      uVar4 = uVar5;
      func_0x00010bf0b760();
      uVar6 = param_9;
      func_0x00010c13a8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar4;
      func_0x000108018d28(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfad280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      lVar17 = param_14;
      func_0x00010bf64ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (lVar17 == 0) {
        uVar19 = param_2;
        FUN_107f0a608(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 + 1,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
      else {
        uVar16 = uVar5;
        func_0x00010c28ea80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        puVar11 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_107f0b48c;
        puStack_1a8 = &UNK_110a12920;
        _objc_retain(uVar21);
        uStack_1a0 = uVar21;
        _objc_retain(uVar5);
        uStack_198 = uVar5;
        _objc_retain(param_11);
        uStack_190 = param_11;
        _objc_retain(puVar8);
        puStack_188 = puVar8;
        _objc_retain(param_1);
        uStack_180 = param_1;
        _objc_retain(param_2);
        uStack_178 = param_2;
        _objc_retain(param_3);
        uStack_170 = param_3;
        _objc_retain(param_4);
        uStack_168 = param_4;
        _objc_retain(param_5);
        uStack_160 = param_5;
        _objc_retain(param_6);
        uStack_158 = param_6;
        lStack_110 = param_7;
        uStack_108 = param_8;
        _objc_retain(param_9);
        uStack_150 = param_9;
        _objc_retain(param_10);
        uStack_148 = param_10;
        _objc_retain(param_12);
        uStack_140 = param_12;
        _objc_retain(param_13);
        uStack_138 = param_13;
        _objc_retain(param_14);
        lStack_130 = param_14;
        _objc_retain(param_15);
        uStack_128 = param_15;
        _objc_retain(param_16);
        uStack_120 = param_16;
        _objc_retain(param_17);
        uStack_118 = param_17;
        ppuVar9 = &puStack_1c0;
        _objc_retainBlock();
        puStack_208 = puVar11;
        uStack_200 = 0xc2000000;
        pcStack_1f8 = FUN_107f0b5d8;
        puStack_1f0 = &UNK_110a12950;
        _objc_retain(uVar21);
        uStack_1e8 = uVar21;
        _objc_retain(uVar5);
        uStack_1e0 = uVar5;
        _objc_retain(param_11);
        uStack_1d8 = param_11;
        _objc_retain(puVar8);
        puStack_1d0 = puVar8;
        _objc_retain(param_16);
        uStack_1c8 = param_16;
        ppuVar10 = &puStack_208;
        _objc_retainBlock();
        uVar2 = uVar21;
        func_0x00010c241220(uVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b697864(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60(lVar17);
        func_0x00010bf18ea0(param_11);
        _objc_release(uVar4);
        _objc_release(uVar2);
        puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar5;
        func_0x00010c28dec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar16;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (uVar4 != 0) {
          uVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(uVar16);
            }
            uVar12 = uVar5;
            func_0x00010c28dec0(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(uVar13);
            _objc_release(uVar12);
            uVar20 = uVar20 + 1;
          } while (uVar4 != uVar20);
          uVar4 = uVar16;
          func_0x00010bf52a60();
        }
        _objc_release(uVar16);
        uVar2 = param_12;
        func_0x00010c1179e0(param_12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1341c0(0x3f800000);
        _objc_release(uVar2);
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar2 = uVar21;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar4;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        _objc_release(uVar4);
        _objc_release(uVar2);
        puVar15 = puVar11;
        func_0x00010bf51e00(puVar11);
        func_0x00010c25f520(param_10);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar11);
        _objc_release(ppuVar10);
        _objc_release(uStack_1c8);
        _objc_release(puStack_1d0);
        _objc_release(uStack_1d8);
        _objc_release(uStack_1e0);
        _objc_release(uStack_1e8);
        _objc_release(ppuVar9);
        _objc_release(uStack_118);
        _objc_release(uStack_120);
        _objc_release(uStack_128);
        _objc_release(lStack_130);
        _objc_release(uStack_138);
        _objc_release(uStack_140);
        _objc_release(uStack_148);
        _objc_release(uStack_150);
        _objc_release(uStack_158);
        _objc_release(uStack_160);
        _objc_release(uStack_168);
        _objc_release(uStack_170);
        _objc_release(uStack_178);
        _objc_release(uStack_180);
        _objc_release(puStack_188);
        _objc_release(uStack_190);
        _objc_release(uStack_198);
        _objc_release(uStack_1a0);
        _objc_release(puVar8);
      }
      _objc_release(lVar17);
      _objc_release(uVar7);
LAB_107f0af94:
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
  }
  else {
    uVar19 = param_2;
    func_0x000107f07d94(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + 1,param_9,param_10
                        ,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  }
  _objc_release(uVar3);
  _objc_release(uVar21);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar19);
  uVar21 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252ee0(uVar19);
  func_0x00010bf95a60(uVar21);
  lVar17 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar17 != 0) {
    uVar18 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c089820(uVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126d8588;
    func_0x00010c2b1da0(PTR_PTR_1126d8588);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf001c0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar21;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7820(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar21);
    uVar21 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf529e0(uVar21);
    puVar11 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar21);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(uVar18);
  }
  FUN_107f0a608(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0xa8),0,*(undefined8 *)(param_1 + 0x70),
                *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar19);
  return;
}



/* Entry: 107f0b0d0; end: 107f0b24f;  */

void FUN_107f0b0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252ee0(param_2);
  func_0x00010bf95a60(uVar6);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d8588;
    func_0x00010c2b1da0(PTR_PTR_1126d8588);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf001c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7820(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf529e0(uVar6);
    puVar5 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  FUN_107f0a608(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0xa8),0,*(undefined8 *)(param_1 + 0x70),
                *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f0b250; end: 107f0b48b;  */

void FUN_107f0b250(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_2 == 0) {
    func_0x00010bf99400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c252ee0(param_2);
    func_0x00010bf99340();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c252ee0();
  puVar3 = puVar2;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar2;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf3ec40(puVar2);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95a60(uVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = puVar2;
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c252ee0(puVar3);
  func_0x00010bf95a60(uVar1);
  FUN_107f0a608(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),
                *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                *(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0xb0),*(long *)(param_2 + 0xb8) + 1,
                *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78),
                *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x80),
                *(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x90),
                *(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0xa0),
                *(undefined8 *)(param_2 + 0xa8));
  return;
}



/* Entry: 107f0b48c; end: 107f0b51b;  */

void FUN_107f0b48c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c252ee0(param_2);
  func_0x00010bf95a60(uVar1);
  FUN_107f0a608(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                *(undefined8 *)(param_1 + 0xb0),*(long *)(param_1 + 0xb8) + 1,
                *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x80),
                *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                *(undefined8 *)(param_1 + 0xa8));
  return;
}



/* Entry: 107f0b51c; end: 107f0b5d7;  */

void FUN_107f0b51c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),7);
  return;
}



/* Entry: 107f0b5d8; end: 107f0b813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_107f0b5d8(long param_1,undefined8 ***param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar20;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_2 == (undefined8 ***)0x0) {
    func_0x00010bf99400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c252ee0(param_2);
    func_0x00010bf99340();
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = *(undefined8 *)(param_1 + 0x38);
  pppuVar7 = param_2;
  func_0x00010c252ee0();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dca358;
  puVar8 = puVar6;
  ppuStack_b0 = pppuVar7;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110db0db8;
  puVar10 = puVar6;
  puStack_80 = puVar9;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110db0dd8;
  puStack_78 = puVar11;
  func_0x00010bf3ec40(puVar6);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar12;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 0;
  uVar17 = uStack_a8;
  pppuVar7 = (undefined8 ***)ppuStack_b0;
  puVar19 = puVar13;
  func_0x00010bf95a60(uStack_a0);
  _objc_release(puVar13);
  _objc_release(puVar12);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar10);
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar6);
  _objc_release(puVar6);
  _objc_release(param_3);
  pppuVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar14;
  }
  ___stack_chk_fail();
  ppuVar5 = ppuStack_90;
  ppuVar4 = ppuStack_98;
  uVar3 = uStack_a0;
  uVar2 = uStack_a8;
  ppuVar1 = ppuStack_b0;
  pcStack_b8 = FUN_107f0b814;
  puStack_110 = puVar10;
  puStack_108 = puVar13;
  puStack_100 = puVar12;
  puStack_f8 = puVar11;
  puStack_f0 = puVar9;
  puStack_e8 = puVar8;
  puStack_e0 = puVar6;
  lStack_d8 = param_1;
  uStack_d0 = param_3;
  ppuStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar17);
  _objc_retain(uVar18);
  _objc_retain(pppuVar7);
  _objc_retain(puVar19);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(ppuVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar3);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar5);
  puStack_118 = PTR_PTR_1126fba18;
  pppuVar15 = &ppuStack_120;
  ppuStack_120 = pppuVar14;
  _objc_msgSendSuper2(pppuVar15,PTR_s_init_1125d9248);
  if (pppuVar15 != (undefined8 ***)0x0) {
    lVar20 = (long)_DAT_1127714d0;
    _objc_retain(uVar17);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = uVar17;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714d4;
    _objc_retain(uVar18);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = uVar18;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714d8;
    _objc_retain(pppuVar7);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 ****)((long)pppuVar15 + lVar20) = pppuVar7;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714dc;
    _objc_retain(puVar19);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined **)((long)pppuVar15 + lVar20) = puVar19;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714e0;
    _objc_retain(in_x6);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = in_x6;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714e4;
    _objc_retain(in_x7);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = in_x7;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714e8;
    _objc_retain(ppuVar1);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 ***)((long)pppuVar15 + lVar20) = ppuVar1;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714ec;
    _objc_retain(uVar2);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = uVar2;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714f0;
    _objc_retain(uVar3);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined8 *)((long)pppuVar15 + lVar20) = uVar3;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714f4;
    _objc_retain(ppuVar4);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined ***)((long)pppuVar15 + lVar20) = ppuVar4;
    _objc_release(uVar16);
    lVar20 = (long)_DAT_1127714f8;
    _objc_retain(ppuVar5);
    uVar16 = *(undefined8 *)((long)pppuVar15 + lVar20);
    *(undefined ***)((long)pppuVar15 + lVar20) = ppuVar5;
    _objc_release(uVar16);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(puVar19);
  _objc_release(pppuVar7);
  _objc_release(uVar18);
  _objc_release(uVar17);
  return pppuVar15;
}



/* Entry: 107f0b814; end: 107f0bacf; -[SCCloudSyncAddSnapsStep initWithCloudFS:dataVault:dataObjectContext:thumbnailFileGenerator:networker:grapheneRegistry:progressReporter:userTrackedLogger:performer:logger:dependencyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107f0b814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fba18;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127714d0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714d4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714d8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714dc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714e0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714e4;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714e8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714ec;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714f0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714f4;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127714f8;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 107f0bad0; end: 107f0bad7; -[SCCloudSyncAddSnapsStep stepName] */

undefined8 FUN_107f0bad0(void)

{
  return 4;
}



/* Entry: 107f0bad8; end: 107f0bc6f; -[SCCloudSyncAddSnapsStep runWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0bad8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf42aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    uVar4 = 8;
    FUN_107f188fc(8,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127714f4);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f0bc70; end: 107f0bd83;  */

void FUN_107f0bc70(long param_1,undefined *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f0bd84;
    puStack_50 = &UNK_110a129e0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_40 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar4;
    _objc_retain(param_2);
    ppuVar2 = &puStack_68;
    puStack_38 = param_2;
    _objc_retainBlock(ppuVar2);
    func_0x00010be5c0e0(lVar1);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(puStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f0bd84; end: 107f0bf37;  */

void FUN_107f0bd84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0c09e0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f0bf38; end: 107f0c10f;  */

void FUN_107f0bf38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d8358;
  func_0x00010bf3e420(PTR_PTR_1126d8358,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010befb7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010befb600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf42aa0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c241320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  FUN_107f59dac(puVar1,puVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = puVar3;
  func_0x00010bf024c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  puVar2 = puVar3;
  func_0x00010bf024c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97860();
  puVar4 = puVar3;
  func_0x00010bf024c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c400();
  func_0x00010c0a4aa0(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7);
  _objc_release(puVar1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f0c110; end: 107f0c267;  */

void FUN_107f0c110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_107f18aa0(param_4,param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f0c268; end: 107f0c42f; -[SCCloudSyncAddSnapsStep _makeRequestWithStepData:resultHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0c268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf42aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2412e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf42aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c241320();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c6c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x00010c2413a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127714d0);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127714e0);
  uVar11 = *(undefined8 *)(param_1 + _DAT_1127714d4);
  uVar13 = *(undefined8 *)(param_1 + _DAT_1127714d8);
  uVar14 = *(undefined8 *)(param_1 + _DAT_1127714dc);
  uVar15 = *(undefined8 *)(param_1 + _DAT_1127714e4);
  uVar16 = *(undefined8 *)(param_1 + _DAT_1127714e8);
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127714ec);
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127714f8);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127714f0);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  FUN_107ef68d0(uVar1,uVar3,uVar5,uVar7,uVar9,uVar10,uVar11,uVar13,uVar14,uVar15,uVar16,uVar17,
                uVar12,uVar8,param_4);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f0c430; end: 107f0c4ff; -[SCCloudSyncAddSnapsStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0c430(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127714f8,0);
  _objc_storeStrong(param_1 + _DAT_1127714f4,0);
  _objc_storeStrong(param_1 + _DAT_1127714f0,0);
  _objc_storeStrong(param_1 + _DAT_1127714ec,0);
  _objc_storeStrong(param_1 + _DAT_1127714e8,0);
  _objc_storeStrong(param_1 + _DAT_1127714e4,0);
  _objc_storeStrong(param_1 + _DAT_1127714e0,0);
  _objc_storeStrong(param_1 + _DAT_1127714dc,0);
  _objc_storeStrong(param_1 + _DAT_1127714d8,0);
  _objc_storeStrong(param_1 + _DAT_1127714d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127714d0,0);
  return;
}



/* Entry: 107f0c500; end: 107f0c5cf; -[SCCloudSyncCUPSUploadStep initWithDependencyProvider:timeProvider:dbTimeoutInSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f0c500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fba20;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127714fc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771500;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771504) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107f0c5d0; end: 107f0c5d7; -[SCCloudSyncCUPSUploadStep stepName] */

undefined8 FUN_107f0c5d0(void)

{
  return 3;
}



/* Entry: 107f0c5d8; end: 107f0c8ab; -[SCCloudSyncCUPSUploadStep runWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0c5d8(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf67b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar1 = param_3;
    func_0x00010bf42aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar1 != 0) {
      lVar4 = param_3;
      FUN_107efa5b8(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf67b40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0dba00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 == 0) {
        puVar6 = PTR_PTR_1126d8470;
        func_0x00010c261b80(PTR_PTR_1126d8470);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126d8358;
        func_0x00010bf3e420();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c2bc140();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c2a7f00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126ae6b8;
        _objc_retain(puVar9);
        func_0x00010bf54280(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + _DAT_1127714fc);
        func_0x00010c0f98a0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar5;
        func_0x00010c0e0ec0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(puVar5);
        _objc_release(puVar9);
        _objc_release(puVar9);
        _objc_release(puVar6);
      }
      else {
        func_0x00010bee5da0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107f0c880;
    }
  }
  puVar5 = PTR_PTR_1126af5d0;
  param_1 = PTR_PTR_1126ae6b8;
  lVar4 = 0x1c;
  FUN_107f188fc(0x1c,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
LAB_107f0c880:
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f0c8ac; end: 107f0c923;  */

void FUN_107f0c8ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_2);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 107f0c924; end: 107f0cdab; -[SCCloudSyncCUPSUploadStep _uploadSnapsWithStepData:previouslyUploadedSnapRequestInfoMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0c924(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar16 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar4 = *(undefined8 *)(lVar17 * 8);
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf67b40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0dba00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar4;
      func_0x00010c241220(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf4b900();
      _objc_release(uVar14);
      _objc_release(lVar6);
      _objc_release(lVar5);
      if ((int)lVar7 != 0) {
        lVar5 = param_1;
        func_0x00010bee5d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar4);
        lVar6 = lVar5;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + _DAT_1127714fc);
        func_0x00010c0f98a0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0e0ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        _objc_release(uVar8);
        _objc_release(lVar6);
        _objc_release(lVar5);
        func_0x00010befa120(puVar2);
        _objc_release(lVar7);
        _objc_release(uVar4);
      }
      _objc_release(uVar4);
      lVar17 = lVar17 + 1;
    } while (lVar16 != lVar17);
    lVar16 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar9 = puVar2;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x00010bf54280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127714fc);
    func_0x00010c0f98a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = puVar2;
    func_0x00010bf51e00();
    lVar16 = (long)_DAT_1127714fc;
    uVar4 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c0f98a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    param_2 = uVar14;
    FUN_107effdb0(puVar9,uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    puVar11 = puVar10;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar11;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(puVar10);
  }
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puStack_228 = &uStack_230;
    uStack_230 = 0;
    uStack_220 = 0x3032000000;
    pcStack_218 = FUN_107f0ced8;
    uStack_210 = 0x107f0cee8;
    uStack_208 = 0;
    uVar14 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar14);
    func_0x00010c0c0800(param_2);
    puVar15 = (undefined *)puStack_228[5];
    _objc_retain(puVar15);
    _objc_release(uVar14);
    __Block_object_dispose(&uStack_230,8);
    _objc_release(uStack_208);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107f0cdac; end: 107f0ced7;  */

void FUN_107f0cdac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107f0ced8;
  uStack_50 = 0x107f0cee8;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f0ced8; end: 107f0ceef;  */

void FUN_107f0ced8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f0cef0; end: 107f0cf9b;  */

void FUN_107f0cef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c241220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x000107ef85f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107f0cf9c; end: 107f0d053;  */

void FUN_107f0cf9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f0d054; end: 107f0d19b;  */

void FUN_107f0d054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107f0ced8;
  uStack_60 = 0x107f0cee8;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f0d19c; end: 107f0d367;  */

void FUN_107f0d19c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      uVar5 = uVar7;
      func_0x00010c28e540(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c241220(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar2);
      _objc_release(uVar7);
      _objc_release(uVar5);
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
    lVar6 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  uVar5 = uVar2;
  func_0x00010bf51e00(uVar2);
  uVar7 = uVar5;
  FUN_107efa4d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar3;
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f0d368; end: 107f0d3af;  */

void FUN_107f0d368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f0d3b0; end: 107f0d6df; -[SCCloudSyncCUPSUploadStep _uploadSnap:stepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0d3b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar11 = *(undefined8 *)(param_1 + _DAT_1127714fc);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112771504);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771500);
  _objc_retain();
  _objc_retain(uVar11);
  lVar2 = param_4;
  func_0x00010c28e600();
  uVar3 = uVar11;
  func_0x00010c0c7dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d84b8;
  _objc_alloc(PTR_PTR_1126d84b8);
  func_0x00010c0105c0();
  uVar6 = uVar11;
  func_0x00010c0f98a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010c0b3760(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c253780(param_1);
  FUN_107f194d4();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  FUN_107ef8454(uVar12,uVar3,uVar4,puVar5,uVar7,uVar9,param_1,uVar1,lVar2 != 2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = uVar10;
  func_0x00010bfb2660(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar4 = uVar3;
  func_0x00010bfb2660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010c0f98a0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107f0d6e0; end: 107f0d7a7;  */

void FUN_107f0d6e0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_107effc6c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  if (param_2 == 0) {
    puVar3 = *(undefined **)(param_1 + 0x28);
    FUN_107ef90d8(puVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x000107f18f1c(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f0d7a8; end: 107f0d90f;  */

void FUN_107f0d7a8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  FUN_107effc6c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = *(undefined **)(param_1 + 0x20);
    func_0x00010c241220(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c7dc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0f98a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0b3760(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    FUN_107efa27c(*(undefined8 *)(param_1 + 0x40),puVar3,param_2,uVar4,uVar1,uVar6,uVar8,
                  *(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  else {
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107f0d910; end: 107f0d94f; -[SCCloudSyncCUPSUploadStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0d910(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771500,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127714fc,0);
  return;
}



/* Entry: 107f0d950; end: 107f0da37; -[SCCloudSyncDedupeSnapsStep initWithMemoriesAssetRepository:logger:timeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f0d950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fba28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112771508;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277150c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771510;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f0da38; end: 107f0da3f; -[SCCloudSyncDedupeSnapsStep stepName] */

undefined8 FUN_107f0da38(void)

{
  return 2;
}



/* Entry: 107f0da40; end: 107f0dbf7; -[SCCloudSyncDedupeSnapsStep runWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0da40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    uVar5 = 0xc;
    FUN_107f188fc(0xc,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112771510);
    _objc_retain(uVar5);
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(uVar5);
    func_0x00010bf54280(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f0dbf8; end: 107f0dea7;  */

void FUN_107f0dbf8(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puVar4 = param_2;
    FUN_107eff934(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010befb600(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar3 = lVar1;
    func_0x00010bdf8c60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_107f0def0;
    uStack_60 = 0x107f0df00;
    uStack_58 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_107f0def0;
    uStack_90 = 0x107f0df00;
    uStack_88 = 0;
    func_0x00010c0c0800();
    if (puStack_a8[5] == 0) {
      puVar4 = PTR_PTR_1126d8358;
      func_0x00010bf3e420(PTR_PTR_1126d8358);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2abe40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    else {
      func_0x00010c0d9840(param_2);
      puVar4 = PTR_PTR_1126b0418;
      func_0x00010bf54280(PTR_PTR_1126b0418);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f0dea8; end: 107f0deef;  */

void FUN_107f0dea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c23f220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f0def0; end: 107f0df07;  */

void FUN_107f0def0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f0df08; end: 107f0df77;  */

void FUN_107f0df08(long param_1,undefined8 param_2)

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



/* Entry: 107f0df78; end: 107f0e3a7; -[SCCloudSyncDedupeSnapsStep _dedupeSnapsWithIds:stepData:timeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0df78(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = (long)_DAT_112771508;
  lVar2 = (long)_DAT_11277150c;
  uVar10 = *(undefined8 *)(param_2 + lVar2);
  lVar3 = param_2;
  func_0x00010c253780(param_2);
  FUN_107f194d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c0a4980(uVar10);
  func_0x00010bf5fd80(param_6);
  dVar11 = param_1;
  _objc_release(param_6);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_2 + lVar1);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bfcbc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126afec0;
  func_0x00010bf5fd80(param_6);
  func_0x00010c155420(dVar11 - param_1,puVar5);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107f0def0;
  uStack_80 = 0x107f0df00;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_107f0def0;
  uStack_b0 = 0x107f0df00;
  uStack_a8 = 0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_5);
  func_0x00010c0c0800(uVar10);
  uVar4 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c253780(param_2);
  FUN_107f194d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a49a0(uVar4);
  _objc_release(param_2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puStack_c8[5] == 0) {
    func_0x00010bf529e0(puStack_98[5]);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puStack_98[5]);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_98[5];
    _objc_retain();
    _objc_retain(puVar5);
    func_0x00010bf97ce0(uVar4);
    puVar7 = PTR_PTR_1126d8590;
    _objc_alloc(PTR_PTR_1126d8590);
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02fc20(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    puVar8 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107f0e3a8; end: 107f0e4a7;  */

void FUN_107f0e3a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar5 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c072060();
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    uVar5 = 0xe;
    FUN_107f188fc(0xe,0,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = uVar5;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = param_2;
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f0e4a8; end: 107f0e4eb;  */

void FUN_107f0e4a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = 0xd;
  FUN_107f188fc(0xd,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f0e4ec; end: 107f0e547;  */

void FUN_107f0e4ec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c067ec0();
  lVar1 = 0x20;
  if (param_3 != 3) {
    lVar1 = 0x28;
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f0e548; end: 107f0e597; -[SCCloudSyncDedupeSnapsStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0e548(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771510,0);
  _objc_storeStrong(param_1 + _DAT_11277150c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771508,0);
  return;
}



/* Entry: 107f0e598; end: 107f0e653; -[SCCloudSyncPrepareSnapDocThumbnailStep initWithThumbnailFileGenerator:logger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f0e598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fba30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112771514;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771518;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f0e654; end: 107f0e65b; -[SCCloudSyncPrepareSnapDocThumbnailStep stepName] */

undefined8 FUN_107f0e654(void)

{
  return 9;
}



/* Entry: 107f0e65c; end: 107f0e81b; -[SCCloudSyncPrepareSnapDocThumbnailStep runWithStepData:] */

void FUN_107f0e65c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010befb620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_48,param_1);
      puVar6 = PTR_PTR_1126ae6b8;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010bf54280(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_107f0e7dc;
    }
  }
  puVar5 = PTR_PTR_1126af5d0;
  puVar6 = PTR_PTR_1126ae6b8;
  uVar4 = 0x21;
  FUN_107f188fc(0x21,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
LAB_107f0e7dc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f0e81c; end: 107f0e98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0e81c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar7 = *(undefined8 *)(lVar1 + _DAT_112771514);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23fe00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befb620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    _objc_retain(param_2);
    func_0x00010c1304e0(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f0e98c; end: 107f0ea57;  */

void FUN_107f0e98c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8580;
  _objc_retain(param_2);
  func_0x00010bf3e460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bafa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f0ea58; end: 107f0ea97; -[SCCloudSyncPrepareSnapDocThumbnailStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0ea58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771518,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771514,0);
  return;
}



/* Entry: 107f0ea98; end: 107f0eb5f; -[SCCloudSyncPrepareStep initWithDependencyProvider:thumbnailFileGenerator:shouldUseCups:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f0ea98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fba38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277151c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771520;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112771524) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f0eb60; end: 107f0eb67; -[SCCloudSyncPrepareStep stepName] */

undefined8 FUN_107f0eb60(void)

{
  return 1;
}



/* Entry: 107f0eb68; end: 107f0eceb; -[SCCloudSyncPrepareStep runWithStepData:] */

void FUN_107f0eb68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126af5d0;
  puVar5 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    uVar3 = 6;
    FUN_107f188fc(6,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar5 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bf54280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f0ecec; end: 107f0ef7b;  */

void FUN_107f0ecec(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010be1ad80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_107f0ef7c;
    uStack_60 = 0x107f0ef8c;
    uStack_58 = 0;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_107f0ef7c;
    uStack_90 = 0x107f0ef8c;
    uStack_88 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    func_0x00010c0c0800(lVar2);
    if (puStack_78[5] == 0) {
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
    }
    else {
      puVar3 = PTR_PTR_1126d8358;
      func_0x00010bf3e420(PTR_PTR_1126d8358);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2aaac0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(param_2);
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107f0ef7c; end: 107f0ef93;  */

void FUN_107f0ef7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f0ef94; end: 107f0f00f;  */

void FUN_107f0ef94(long param_1,undefined8 param_2)

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



/* Entry: 107f0f010; end: 107f0f293; -[SCCloudSyncPrepareStep _generateCommonPropsWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0f010(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf529e0();
  _objc_release(uVar10);
  if (uVar2 != 0) {
    uVar10 = 0;
    lVar9 = (long)_DAT_112771520;
    do {
      lVar12 = *(long *)(param_1 + lVar9);
      uVar2 = param_3;
      func_0x00010befb600(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010befb600(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf6f520();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (lVar12 == 0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar8);
      }
      else {
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar12);
      uVar10 = uVar10 + 1;
      uVar2 = param_3;
      func_0x00010befb600();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
    } while (uVar10 < uVar3);
  }
  uVar10 = param_3;
  func_0x00010bf024c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010c27dd80();
  _objc_release(uVar10);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11277151c);
  uVar10 = param_3;
  func_0x00010befb600(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf51e00(puVar1);
  FUN_107ef6464(uVar11,uVar10,puVar8,*(undefined1 *)(param_1 + _DAT_112771524),uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 107f0f294; end: 107f0f2d3; -[SCCloudSyncPrepareStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f0f294(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771520,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277151c,0);
  return;
}



/* Entry: 107f0f2d4; end: 107f0f4bf; -[SCCloudSyncSnapDocUpdateEntriesStep initWithDataObjectContext:dataVault:thumbnailFileGenerator:networker:logger:progressReporter:performer:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107f0f2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126fba40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112771528;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277152c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112771530;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112771534;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112771538;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11277153c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112771540;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771544);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771544) = uVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 107f0f4c0; end: 107f0f4c7; -[SCCloudSyncSnapDocUpdateEntriesStep stepName] */

undefined8 FUN_107f0f4c0(void)

{
  return 0xb;
}



/* Entry: 107f0f4c8; end: 107f0f6ff; -[SCCloudSyncSnapDocUpdateEntriesStep runWithStepData:] */

void FUN_107f0f4c8(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf97120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar3 = param_3;
      func_0x00010befb620();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        _objc_initWeak(auStack_48,param_1);
        lVar1 = param_3;
        func_0x00010befb620(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdd60c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_3);
        puVar7 = param_1;
        func_0x00010bfb2660(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        _objc_destroyWeak(auStack_50);
        _objc_release(param_1);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_destroyWeak(auStack_48);
        goto LAB_107f0f6b8;
      }
    }
  }
  puVar6 = PTR_PTR_1126af5d0;
  puVar7 = PTR_PTR_1126ae6b8;
  uVar5 = 0x29;
  FUN_107f188fc(0x29,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar5);
LAB_107f0f6b8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f0f700; end: 107f0f8bb;  */

void FUN_107f0f700(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    uVar3 = 1;
    FUN_107f188fc(1,0,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_107f0f8bc;
    uStack_60 = 0x107f0f8cc;
    uStack_58 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    puVar4 = (undefined *)puStack_78[5];
    _objc_retain(puVar4);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_80,8);
    uVar3 = uStack_58;
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f0f8bc; end: 107f0f8d3;  */

void FUN_107f0f8bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f0f8d4; end: 107f0f91b;  */

void FUN_107f0f8d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be306a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f0f91c; end: 107f0f993;  */

void FUN_107f0f91c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f0f994; end: 107f0faa7; -[SCCloudSyncSnapDocUpdateEntriesStep _handleSnapDocUpdateEntriesRequestWithStepData:encryptionBlob:] */

void FUN_107f0f994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f0faa8; end: 107f0fc6f;  */

void FUN_107f0faa8(long param_1,undefined *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar7 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107f0fc70;
    puStack_78 = &UNK_110a12bd0;
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uStack_70 = uVar8;
    _objc_retain(param_2);
    ppuVar2 = &puStack_90;
    puStack_68 = param_2;
    _objc_retainBlock();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23fe00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97120(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010befb620(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26d860(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26da00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5c2e0(lVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(puStack_68);
    _objc_release(uStack_70);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f0fc70; end: 107f0fdfb;  */

void FUN_107f0fc70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0a00(param_2);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f0fdfc; end: 107f1002b;  */

void FUN_107f0fdfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8580;
  _objc_retain(param_2);
  func_0x00010bf3e460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ad460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107f1002c; end: 107f1013f; -[SCCloudSyncSnapDocUpdateEntriesStep _buildEncryptBlobForSnapId:stepData:] */

void FUN_107f1002c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f10140; end: 107f10467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f10140(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = param_2;
    FUN_107eff934(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112771530);
    puVar3 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    func_0x00010c135a60(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f10468; end: 107f105e3; -[SCCloudSyncSnapDocUpdateEntriesStep _makeSnapDocUpdateEntriesRequestWithSnapDoc:entryData:addSnapEntity:thumbnailUrl:thumbnailData:encryptionBlob:resultHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f10468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11277152c);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112771534);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277153c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112771538);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112771528);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112771544);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771540);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  FUN_107f058cc(param_3,param_4,uVar1,param_6,param_7,param_5,param_8,uVar8,uVar7,uVar3,uVar4,uVar5,
                uVar6,uVar2,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f105e4; end: 107f10683; -[SCCloudSyncSnapDocUpdateEntriesStep .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f105e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771544,0);
  _objc_storeStrong(param_1 + _DAT_112771540,0);
  _objc_storeStrong(param_1 + _DAT_11277153c,0);
  _objc_storeStrong(param_1 + _DAT_112771538,0);
  _objc_storeStrong(param_1 + _DAT_112771534,0);
  _objc_storeStrong(param_1 + _DAT_112771530,0);
  _objc_storeStrong(param_1 + _DAT_11277152c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771528,0);
  return;
}



/* Entry: 107f10684; end: 107f106d7; -[SCCloudSyncStep stepName] */

void FUN_107f10684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  uVar3 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c253780();
  FUN_107f194d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fd80(*(undefined8 *)(puVar1 + 0x28));
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236ee0(PTR_PTR_1126d82c0);
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c142c60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + 0x40);
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(puVar1 + 0x28);
  _objc_retain(uVar6);
  _objc_retain(uVar3);
  uVar2 = uVar5;
  func_0x00010bf87460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f106d8; end: 107f10737; -[SCCloudSyncStep runWithStepData:] */

void FUN_107f106d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c253780();
  FUN_107f194d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fd80(*(undefined8 *)(puVar1 + 0x28));
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236ee0(PTR_PTR_1126d82c0);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c142c60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + 0x40);
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(puVar1 + 0x28);
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  uVar5 = uVar4;
  func_0x00010bf87460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107f10738; end: 107f109b7;  */

void FUN_107f10738(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c253780();
  FUN_107f194d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x28));
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110ec4058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236ee0(PTR_PTR_1126d82c0,param_3,puVar2,*(undefined8 *)(param_2 + 0x30),1);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c142c60(uVar3,param_3,*(undefined8 *)(param_2 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x107f10890;
  puStack_78 = &UNK_110a12c30;
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uStack_70 = uVar5;
  uStack_68 = uVar1;
  _objc_retain(uVar4);
  uStack_60 = uVar4;
  uStack_58 = param_1;
  _objc_retain(uVar1);
  uVar4 = uVar3;
  func_0x00010bf87460(uVar3,param_3,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107f109b8; end: 107f109bf;  */

void FUN_107f109b8(void)

{
  return;
}



/* Entry: 107f109c0; end: 107f10c7f;  */

void FUN_107f109c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c236ee0(PTR_PTR_1126d82c0);
    puVar3 = PTR_PTR_1126ae6b8;
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(lVar1);
    func_0x00010bf6ab80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_retain(param_1);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(lVar1);
    puVar3 = puVar2;
    func_0x00010bfb2660(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f10c80; end: 107f10e3f;  */

void FUN_107f10c80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107f10e40;
  uStack_60 = 0x107f10e50;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f10e40; end: 107f10e57;  */

void FUN_107f10e40(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f10e58; end: 107f10fbb;  */

void FUN_107f10e58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf529e0(uVar4);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_107f109c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f10fbc; end: 107f11113;  */

void FUN_107f10fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_1);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf6ab80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f11114; end: 107f111bb;  */

void FUN_107f11114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_107f109c0(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107f111bc; end: 107f11233;  */

void FUN_107f111bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8598;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010c04c5c0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f11234; end: 107f1134f; -[SCCloudSyncTranscodeStep initWithMemoriesBackupBatchTranscoder:logger:fileManager:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107f11234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fba48;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112771548;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277154c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771550;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112771554;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f11350; end: 107f11357; -[SCCloudSyncTranscodeStep stepName] */

undefined8 FUN_107f11350(void)

{
  return 0;
}



/* Entry: 107f11358; end: 107f11587; -[SCCloudSyncTranscodeStep runWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f11358(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010befb600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    param_1 = (undefined *)0x1b;
    FUN_107f188fc(0x1b,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010be1b660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar4 = puVar3;
    func_0x00010c0b8600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f11588; end: 107f117af; -[SCCloudSyncTranscodeStep _generateMediaTranscodingResultWithStepData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f11588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010befb600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf147c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf97120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c07b240();
  uVar6 = param_3;
  func_0x00010bf42aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x00010c241320(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_107f01050(uVar1,uVar2,uVar4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c279960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11277154c;
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  uVar2 = uVar3;
  func_0x00010c15a880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afaa0(uVar5);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112771550);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112771548);
  _objc_retain(uVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c2799c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  uVar5 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}


