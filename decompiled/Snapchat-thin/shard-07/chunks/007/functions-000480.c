/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059095f0; end: 105909633;  */

void FUN_1059095f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainBlock();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000105909630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105909634; end: 1059096eb;  */

void FUN_105909634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059096ec; end: 10590984b;  */

void FUN_1059096ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
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
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10590984c;
  puStack_b0 = &UNK_1108bf5e8;
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = param_2;
  uStack_a0 = param_5;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar3;
  uStack_90 = param_3;
  uStack_58 = param_4;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar2;
  _objc_retain(uVar3);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  uStack_78 = uVar3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_c8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_88);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_2);
  return;
}



/* Entry: 10590984c; end: 105909927;  */

void FUN_10590984c(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  ppuVar3 = *(undefined ***)(param_1 + 0x20);
  ppuVar2 = ppuVar3;
  if (ppuVar3 == (undefined **)0x0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
                (*(long *)(param_1 + 0x40),0,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(param_1 + 0x50));
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28));
      goto LAB_1059098f4;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e0cf58;
    func_0x00010b291824();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  _objc_retain(ppuVar2);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined ***)(lVar4 + 0x28) = ppuVar2;
  _objc_release(uVar1);
  if (ppuVar3 == (undefined **)0x0) {
    _objc_release(ppuVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x70),0);
LAB_1059098f4:
                    /* WARNING: Could not recover jumptable at 0x000105909908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  return;
}



/* Entry: 105909928; end: 105909ac3;  */

void FUN_105909928(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  return;
}



/* Entry: 105909ac4; end: 105909e3b;  */

undefined1 *
FUN_105909ac4(long param_1,undefined1 *param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined **ppuVar9;
  undefined **unaff_x20;
  undefined1 *puStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_2 == (undefined1 *)0x0) {
    if (param_6 == 0) {
      unaff_x20 = (undefined **)PTR_PTR_1126c0028;
      func_0x00010c13b720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a3c0();
      lVar1 = *(long *)(param_1 + 0x20);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,unaff_x20);
      }
      _objc_release(unaff_x20);
    }
    else {
      ppuVar2 = param_4;
      uStack_140 = param_3;
      puStack_138 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar9 = ppuVar2;
      _objc_opt_isKindOfClass(ppuVar2,puVar3);
      ppuVar5 = ppuVar2;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar5 = (undefined **)0x0;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar2);
      ppuStack_160 = &PTR____CFConstantStringClassReference_110dd69d8;
      if (ppuVar5 != (undefined **)0x0) {
        ppuStack_160 = ppuVar5;
      }
      _objc_retain(ppuStack_160);
      _objc_release(ppuVar5);
      puVar3 = PTR_PTR_1126c0030;
      _objc_alloc(PTR_PTR_1126c0030);
      lStack_158 = param_1;
      lStack_150 = param_6;
      func_0x00010c003d40();
      ppuVar2 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar9 = ppuVar2;
      _objc_opt_isKindOfClass(ppuVar2,puVar4);
      ppuVar5 = ppuVar2;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar5 = (undefined **)0x0;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar2);
      unaff_x20 = ppuVar5;
      func_0x00010c2827c0();
      _objc_release(ppuVar5);
      func_0x00010c182140(puVar3);
      func_0x00010c20a3c0(puVar3);
      ppuStack_148 = param_4;
      func_0x00010b291f08();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      ppuVar5 = param_4;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar5;
      func_0x00010bf52a60();
      if (ppuVar2 != (undefined **)0x0) {
        lVar1 = *plStack_120;
        do {
          ppuVar9 = (undefined **)0x0;
          do {
            if (*plStack_120 != lVar1) {
              _objc_enumerationMutation(ppuVar5);
            }
            unaff_x20 = *(undefined ***)(lStack_128 + (long)ppuVar9 * 8);
            ppuVar6 = unaff_x20;
            func_0x00010c0720c0();
            if ((((ulong)ppuVar6 & 1) == 0) &&
               (ppuVar6 = unaff_x20, func_0x00010c0720c0(), ((ulong)ppuVar6 & 1) == 0)) {
              ppuVar6 = param_4;
              func_0x00010c0e00e0(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2201a0(puVar3);
              _objc_release(ppuVar6);
            }
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar2 != ppuVar9);
          ppuVar2 = ppuVar5;
          func_0x00010bf52a60();
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuVar5);
      lVar1 = *(long *)(lStack_158 + 0x20);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
      }
      _objc_release(param_4);
      _objc_release(puVar3);
      _objc_release(ppuStack_160);
      param_2 = puStack_138;
      param_3 = uStack_140;
      param_4 = ppuStack_148;
      param_6 = lStack_150;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar7;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_190;
  pcStack_168 = FUN_105909e3c;
  puStack_188 = PTR_PTR_1126eadf8;
  puStack_190 = puVar7;
  ppuStack_180 = unaff_x20;
  puStack_178 = param_2;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_190,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined1 **)0x0) {
    puVar7 = (undefined1 *)ppuVar8;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar8 + 8) = puVar7;
  }
  return (undefined1 *)ppuVar8;
}



/* Entry: 105909e3c; end: 105909eaf; -[SCGraphenePlaybackWebProxyMetric2 init] */

undefined1 * FUN_105909e3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eadf8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105909eb0; end: 10590a0df;  */

/* WARNING: Removing unreachable block (ram,0x00010590a368) */

char * FUN_105909eb0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  char *unaff_x24;
  char *pcStack_230;
  undefined *puStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar7 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    pcVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_160;
  pcStack_a8 = FUN_10590a0e0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar11 = pcVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_140,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_110,pcVar2);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,auStack_140,&lStack_f8,3);
    pcVar6 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bf6c8,acStack_160,param_5);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar12 = 0;
    pcVar8 = pcVar9;
    pcVar11 = param_5;
    do {
      if ((&cStack_f9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    puStack_198 = auStack_140;
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (char *)puStack_198);
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_168 = FUN_10590a3a0;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar8;
    puStack_1a0 = (undefined8 *)unaff_x24;
    pcStack_190 = pcVar2;
    pcStack_188 = pcVar10;
    pcStack_180 = pcVar7;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_b0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    if (pcVar3 != (char *)0x0) {
      plVar13 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1d8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1c0,pcVar1);
      acStack_1f8[0] = '\0';
      acStack_1f8[1] = '\0';
      acStack_1f8[2] = '\0';
      acStack_1f8[3] = '\0';
      acStack_1f8[4] = '\0';
      acStack_1f8[5] = '\0';
      acStack_1f8[6] = '\0';
      acStack_1f8[7] = '\0';
      acStack_1f8[8] = '\0';
      acStack_1f8[9] = '\0';
      acStack_1f8[10] = '\0';
      acStack_1f8[0xb] = '\0';
      acStack_1f8[0xc] = '\0';
      acStack_1f8[0xd] = '\0';
      acStack_1f8[0xe] = '\0';
      acStack_1f8[0xf] = '\0';
      acStack_1f8[0x10] = '\0';
      acStack_1f8[0x11] = '\0';
      acStack_1f8[0x12] = '\0';
      acStack_1f8[0x13] = '\0';
      acStack_1f8[0x14] = '\0';
      acStack_1f8[0x15] = '\0';
      acStack_1f8[0x16] = '\0';
      acStack_1f8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
      pcVar9 = acStack_1f8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bf718,pcVar9,pcVar11);
      pcStack_1e0 = acStack_1f8;
      func_0x00010007e5dc(&pcStack_1e0);
      lVar12 = 0;
      do {
        if ((&cStack_1a9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      __Unwind_Resume();
      ppcVar4 = &pcStack_230;
      pcStack_208 = FUN_10590a5d0;
      pcStack_220 = pcVar8;
      pcStack_218 = pcVar6;
      pppuStack_210 = &ppuStack_170;
      _objc_retain(pcVar9);
      puStack_228 = PTR_PTR_1126eae00;
      pcStack_230 = pcVar1;
      _objc_msgSendSuper2(&pcStack_230,PTR_s_init_1125d9248);
      if (ppcVar4 != (char **)0x0) {
        _objc_retain(pcVar9);
        uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
        *(char **)((long)ppcVar4 + 8) = pcVar9;
        _objc_release(uVar5);
      }
      _objc_release(pcVar9);
      return (char *)ppcVar4;
    }
    return pcVar1;
  }
  return pcVar2;
}



/* Entry: 10590a0e0; end: 10590a39f;  */

/* WARNING: Removing unreachable block (ram,0x00010590a368) */

char * FUN_10590a0e0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *unaff_x24;
  char *pcStack_190;
  undefined *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108bf6c8,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    pcVar7 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10590a3a0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  puStack_100 = unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar8 = acStack_158;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108bf718,pcVar8,pcVar4);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar9 = 0;
    do {
      if ((&cStack_109)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    __Unwind_Resume();
    ppcVar5 = &pcStack_190;
    pcStack_168 = FUN_10590a5d0;
    pcStack_180 = pcVar7;
    pcStack_178 = pcVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar8);
    puStack_188 = PTR_PTR_1126eae00;
    pcStack_190 = pcVar4;
    _objc_msgSendSuper2(&pcStack_190,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      _objc_retain(pcVar8);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
      *(char **)((long)ppcVar5 + 8) = pcVar8;
      _objc_release(uVar6);
    }
    _objc_release(pcVar8);
    return (char *)ppcVar5;
  }
  return pcVar4;
}



/* Entry: 10590a3a0; end: 10590a5cf;  */

char * FUN_10590a3a0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108bf718,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar3 = &pcStack_d0;
  pcStack_a8 = FUN_10590a5d0;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puStack_c8 = PTR_PTR_1126eae00;
  pcStack_d0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(char **)((long)ppcVar3 + 8) = pcVar1;
    _objc_release(uVar4);
  }
  _objc_release(pcVar1);
  return (char *)ppcVar3;
}



/* Entry: 10590a5d0; end: 10590a643; -[UNISCIAPTokenPbEntitleEntitlement initWithUnifiedGrpcService:] */

undefined1 * FUN_10590a5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eae00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10590a644; end: 10590a727; -[UNISCIAPTokenPbEntitleEntitlement consumeItemWithRequest:callOptionsBuilder:handler:] */

void FUN_10590a644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0038;
  _objc_opt_class(PTR_PTR_1126c0038);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0cf78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590a728; end: 10590a80b; -[UNISCIAPTokenPbEntitleEntitlement ackConsumeItemWithRequest:callOptionsBuilder:handler:] */

void FUN_10590a728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0040;
  _objc_opt_class(PTR_PTR_1126c0040);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0cf98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590a80c; end: 10590a8ef; -[UNISCIAPTokenPbEntitleEntitlement getItemWithRequest:callOptionsBuilder:handler:] */

void FUN_10590a80c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0048;
  _objc_opt_class(PTR_PTR_1126c0048);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0cfb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590a8f0; end: 10590a9d3; -[UNISCIAPTokenPbEntitleEntitlement getItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10590a8f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0050;
  _objc_opt_class(PTR_PTR_1126c0050);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0cfd8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590a9d4; end: 10590aab7; -[UNISCIAPTokenPbEntitleEntitlement clearInventoryWithRequest:callOptionsBuilder:handler:] */

void FUN_10590a9d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0058;
  _objc_opt_class(PTR_PTR_1126c0058);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0cff8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590aab8; end: 10590aac3; -[UNISCIAPTokenPbEntitleEntitlement .cxx_destruct] */

void FUN_10590aab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10590aac4; end: 10590ab37; -[UNISCIAPTokenPbOrderOrder initWithUnifiedGrpcService:] */

undefined1 * FUN_10590aac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eae08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10590ab38; end: 10590ac1b; -[UNISCIAPTokenPbOrderOrder orderWithRequest:callOptionsBuilder:handler:] */

void FUN_10590ab38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0060;
  _objc_opt_class(PTR_PTR_1126c0060);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d018,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590ac1c; end: 10590acff; -[UNISCIAPTokenPbOrderOrder consumeOrderWithRequest:callOptionsBuilder:handler:] */

void FUN_10590ac1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0068;
  _objc_opt_class(PTR_PTR_1126c0068);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d038,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590ad00; end: 10590ade3; -[UNISCIAPTokenPbOrderOrder getUnconsumedOrdersWithRequest:callOptionsBuilder:handler:] */

void FUN_10590ad00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0070;
  _objc_opt_class(PTR_PTR_1126c0070);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d058,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590ade4; end: 10590aec7; -[UNISCIAPTokenPbOrderOrder listItemsWithRequest:callOptionsBuilder:handler:] */

void FUN_10590ade4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0078;
  _objc_opt_class(PTR_PTR_1126c0078);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d078,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590aec8; end: 10590aed3; -[UNISCIAPTokenPbOrderOrder .cxx_destruct] */

void FUN_10590aec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10590aed4; end: 10590af47; -[UNISCIAPTokenPbShop initWithUnifiedGrpcService:] */

undefined1 * FUN_10590aed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eae10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10590af48; end: 10590b02b; -[UNISCIAPTokenPbShop purchaseWithRequest:callOptionsBuilder:handler:] */

void FUN_10590af48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0080;
  _objc_opt_class(PTR_PTR_1126c0080);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d098,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590b02c; end: 10590b10f; -[UNISCIAPTokenPbShop getTokenPacksWithRequest:callOptionsBuilder:handler:] */

void FUN_10590b02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0088;
  _objc_opt_class(PTR_PTR_1126c0088);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d0b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590b110; end: 10590b1f3; -[UNISCIAPTokenPbShop getPromotionsWithRequest:callOptionsBuilder:handler:] */

void FUN_10590b110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0090;
  _objc_opt_class(PTR_PTR_1126c0090);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d0d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590b1f4; end: 10590b2d7; -[UNISCIAPTokenPbShop acceptPromotionWithRequest:callOptionsBuilder:handler:] */

void FUN_10590b1f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c0098;
  _objc_opt_class(PTR_PTR_1126c0098);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d0f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590b2d8; end: 10590b3bb; -[UNISCIAPTokenPbShop getBalanceWithRequest:callOptionsBuilder:handler:] */

void FUN_10590b2d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c00a0;
  _objc_opt_class(PTR_PTR_1126c00a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0d118,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590b3bc; end: 10590b3c7; -[UNISCIAPTokenPbShop .cxx_destruct] */

void FUN_10590b3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10590b3c8; end: 10590b643; -[SCIAPTokenInAppPurchaseServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10590b3c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  puVar1 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10590b644;
  puStack_90 = &UNK_1108bf7d8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272c12c);
  *(undefined **)(param_1 + _DAT_11272c12c) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_d0 = puVar2;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10590b684;
  puStack_b8 = &UNK_1108bf808;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272c130);
  *(undefined **)(param_1 + _DAT_11272c130) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_f8 = puVar2;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x10590b6c4;
  puStack_e0 = &UNK_1108bf838;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272c134);
  *(undefined **)(param_1 + _DAT_11272c134) = puVar1;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272c138);
  *(undefined **)(param_1 + _DAT_11272c138) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c00a8;
  _objc_alloc(PTR_PTR_1126c00a8);
  func_0x00010c01d520();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10590b644; end: 10590b743;  */

void FUN_10590b644(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10590b744; end: 10590b7cb; -[SCIAPTokenInAppPurchaseServiceProvider _InAppProductService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10590b744(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11272c13c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126c00b0;
  _objc_alloc(PTR_PTR_1126c00b0);
  func_0x00010c0352a0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10590b7cc; end: 10590bacb; -[SCIAPTokenInAppPurchaseServiceProvider _tokenPackPurchaseService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10590b7cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x00010bf6a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272c13c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11272c140;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11272c144;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11272c148;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11272c14c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar11 = *(undefined8 *)(param_1 + _DAT_11272c12c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272c150;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c273100();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar13 = PTR_PTR_1126c00c0;
  _objc_alloc();
  param_1 = param_1 + _DAT_11272c154;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9a40(puVar13,param_2,puVar1,puVar2,puVar3,lVar6,lVar7,lVar9,lVar10,uVar11,lVar8,
                      lVar12,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10590bacc; end: 10590bbd3; -[SCIAPTokenInAppPurchaseServiceProvider _itemOrderService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10590bacc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_11272c13c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11272c144;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c00c8;
  _objc_alloc(PTR_PTR_1126c00c8);
  func_0x00010bff9a60();
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10590bbd4; end: 10590bcdb; -[SCIAPTokenInAppPurchaseServiceProvider _itemEntitleService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10590bbd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_11272c13c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11272c144;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c00d0;
  _objc_alloc(PTR_PTR_1126c00d0);
  func_0x00010bff9a60();
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10590bcdc; end: 10590bddf; -[SCIAPTokenInAppPurchaseServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10590bcdc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272c154);
  _objc_destroyWeak(param_1 + _DAT_11272c150);
  _objc_destroyWeak(param_1 + _DAT_11272c14c);
  _objc_destroyWeak(param_1 + _DAT_11272c148);
  _objc_destroyWeak(param_1 + _DAT_11272c144);
  _objc_destroyWeak(param_1 + _DAT_11272c140);
  _objc_destroyWeak(param_1 + _DAT_11272c13c);
  _objc_destroyWeak(param_1 + _DAT_11272c158);
  _objc_storeStrong(param_1 + _DAT_11272c138,0);
  _objc_storeStrong(param_1 + _DAT_11272c134,0);
  _objc_storeStrong(param_1 + _DAT_11272c130,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272c12c,0);
  return;
}



/* Entry: 10590bde0; end: 10590be87;  */

void FUN_10590bde0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (lRam00000001136c15a0 != -1) {
    func_0x00010002a2fc(0x1136c15a0,&PTR___NSConcreteGlobalBlock_1108bf898);
  }
  uVar1 = uRam00000001136c1598;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(uRam00000001136c1598);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c25d4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10590be88; end: 10590bed3;  */

void FUN_10590be88(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new();
  uVar1 = puRam00000001136c1598;
  puRam00000001136c1598 = puVar2;
  _objc_release(uVar1);
  func_0x00010c19ed20(puRam00000001136c1598);
                    /* WARNING: Could not recover jumptable at 0x00010c1d02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001136c1598,PTR_s_setNumberStyle__112651ae0,1);
  return;
}



/* Entry: 10590bed4; end: 10590c04f;  */

undefined1 * FUN_10590bed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar6 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126eae18;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar6 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010c0f9920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar5);
      puVar3 = PTR_PTR_1126ae728;
      func_0x00010bf24820(PTR_PTR_1126ae728);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196320();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1eeba0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c214be0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c17ca40(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf56360(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c00d8;
      _objc_alloc();
      func_0x00010c058f80();
      uVar5 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined **)((long)plVar1 + 0x10) = puVar4;
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar6;
}



/* Entry: 10590c050; end: 10590c2db;  */

void FUN_10590c050(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined *param_6,undefined *param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR___dispatch_main_q_11034be20;
  if (param_1 != 0) {
    if ((param_6 == (undefined *)0x0) && (param_7 != (undefined *)0x0)) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_6 = puVar2;
    }
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      if (param_7 == (undefined *)0x0) goto LAB_10590c294;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10590c2dc;
      puStack_70 = &UNK_110849530;
      _objc_retain(param_7);
      puStack_68 = param_7;
      func_0x00010007380c(param_6,&puStack_88);
      puVar2 = puStack_68;
    }
    else {
      lVar1 = param_3;
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        if (param_7 == (undefined *)0x0) goto LAB_10590c294;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        uStack_a0 = 0x10590c2f0;
        puStack_98 = &UNK_110849530;
        _objc_retain(param_7);
        puStack_90 = param_7;
        func_0x00010007380c(param_6,&puStack_b0);
        puVar2 = puStack_90;
      }
      else {
        lVar1 = param_4;
        func_0x00010c08fa60();
        if (lVar1 == 0) {
          if (param_7 == (undefined *)0x0) goto LAB_10590c294;
          puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d0 = 0xc2000000;
          uStack_c8 = 0x10590c304;
          puStack_c0 = &UNK_110849530;
          _objc_retain(param_7);
          puStack_b8 = param_7;
          func_0x00010007380c(param_6,&puStack_d8);
          puVar2 = puStack_b8;
        }
        else {
          puVar2 = PTR_PTR_1126c00e0;
          _objc_opt_new(PTR_PTR_1126c00e0);
          func_0x00010c1a99c0();
          func_0x00010c168ae0(puVar2);
          func_0x00010c1b62a0(puVar2);
          func_0x00010c1811c0(puVar2);
          uVar3 = *(undefined8 *)(param_1 + 0x10);
          _objc_retain(param_7);
          _objc_retain(param_6);
          func_0x00010bf49980(uVar3);
          _objc_release(param_6);
          _objc_release(param_7);
        }
      }
    }
    _objc_release(puVar2);
  }
LAB_10590c294:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10590c2dc; end: 10590c317;  */

void FUN_10590c2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590c2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 10590c318; end: 10590c42b;  */

void FUN_10590c318(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if ((param_2 == 0) || (param_3 != 0)) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x10590c440;
      puStack_70 = &UNK_11084aaa8;
      _objc_retain(lVar2);
      lStack_60 = lVar2;
      _objc_retain(param_3);
      lStack_68 = param_3;
      func_0x00010007380c(uVar1,&puStack_88);
      _objc_release(lStack_68);
      lVar2 = lStack_60;
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10590c42c;
      puStack_40 = &UNK_110849530;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      func_0x00010007380c(uVar1,&puStack_58);
      lVar2 = lStack_38;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10590c42c; end: 10590c453;  */

void FUN_10590c42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590c43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 10590c454; end: 10590c5c7;  */

void FUN_10590c454(long param_1,long param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR___dispatch_main_q_11034be20;
  if (param_1 != 0) {
    if ((param_3 == (undefined *)0x0) && (param_4 != (undefined *)0x0)) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_3 = puVar2;
    }
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      if (param_4 == (undefined *)0x0) goto LAB_10590c598;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10590c5c8;
      puStack_50 = &UNK_110849530;
      _objc_retain(param_4);
      puStack_48 = param_4;
      func_0x00010007380c(param_3,&puStack_68);
      puVar2 = puStack_48;
    }
    else {
      puVar2 = PTR_PTR_1126c00e8;
      _objc_opt_new(PTR_PTR_1126c00e8);
      func_0x00010c168ae0();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010bfc6960(uVar3);
      _objc_release(param_3);
      _objc_release(param_4);
    }
    _objc_release(puVar2);
  }
LAB_10590c598:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10590c5c8; end: 10590c5e3;  */

void FUN_10590c5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,PTR____NSArray0__struct_11034ab48,0);
  return;
}



/* Entry: 10590c5e4; end: 10590c75f;  */

void FUN_10590c5e4(long param_1,undefined *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = *(undefined **)(param_1 + 0x28);
  if (puVar4 != (undefined *)0x0) {
    if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x10590c870;
      puStack_88 = &UNK_11084aaa8;
      _objc_retain(puVar4);
      puStack_78 = puVar4;
      _objc_retain(param_3);
      lStack_80 = param_3;
      func_0x00010007380c(uVar3,&puStack_a0);
      _objc_release(lStack_80);
      puVar4 = puStack_78;
    }
    else {
      puVar2 = param_2;
      func_0x00010c085000();
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = param_2;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x000100504554();
        _objc_release(puVar2);
      }
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10590c858;
      puStack_58 = &UNK_11084aaa8;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar1);
      puStack_50 = puVar4;
      uStack_48 = uVar1;
      _objc_retain(puVar4);
      func_0x00010007380c(uVar3,&puStack_70);
      _objc_release(puStack_50);
      _objc_release(uStack_48);
    }
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10590c760; end: 10590c857;  */

void FUN_10590c760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c00f0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfe5ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c23e6c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf6e6e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49b60(param_2);
  _objc_release(param_2);
  func_0x00010c020040(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10590c858; end: 10590c88b;  */

void FUN_10590c858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010590c86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10590c88c; end: 10590c8bb; -[SCIAPTokenEntitleGRPCServiceImpl .cxx_destruct] */

void FUN_10590c88c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10590c8bc; end: 10590c8c3; -[SCIAPTokenFetchProductsRequestItem completionQueue] */

undefined8 FUN_10590c8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10590c8c4; end: 10590c8f3; -[SCIAPTokenFetchProductsRequestItem setCompletionQueue:] */

void FUN_10590c8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10590c8f4; end: 10590c8fb; -[SCIAPTokenFetchProductsRequestItem completionBlock] */

undefined8 FUN_10590c8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10590c8fc; end: 10590c903; -[SCIAPTokenFetchProductsRequestItem setCompletionBlock:] */

void FUN_10590c8fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10590c904; end: 10590c90b; -[SCIAPTokenFetchProductsRequestItem succeeded] */

undefined1 FUN_10590c904(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10590c90c; end: 10590c913; -[SCIAPTokenFetchProductsRequestItem setSucceeded:] */

void FUN_10590c90c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10590c914; end: 10590c91b; -[SCIAPTokenFetchProductsRequestItem products] */

undefined8 FUN_10590c914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10590c91c; end: 10590c923; -[SCIAPTokenFetchProductsRequestItem setProducts:] */

void FUN_10590c91c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10590c924; end: 10590c92b; -[SCIAPTokenFetchProductsRequestItem error] */

undefined8 FUN_10590c924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10590c92c; end: 10590c95b; -[SCIAPTokenFetchProductsRequestItem setError:] */

void FUN_10590c92c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10590c95c; end: 10590c9a3; -[SCIAPTokenFetchProductsRequestItem .cxx_destruct] */

void FUN_10590c95c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10590c9a4; end: 10590ca93; -[SCIAPTokenInAppProductServiceImplementation initWithPerformerProvider:] */

undefined1 * FUN_10590c9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eae20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10590ca94; end: 10590cbf3; -[SCIAPTokenInAppProductServiceImplementation fetchProductsWithProductIdentifiers:completionQueue:completionBlock:] */

void FUN_10590ca94(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_5 != 0) {
    if (param_4 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      param_4 = puVar1;
    }
    puVar1 = PTR_PTR_1126c00f8;
    _objc_opt_new();
    func_0x00010c17fc00();
    func_0x00010c17fb40(puVar1);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590cbf4; end: 10590cd0f;  */

void FUN_10590cbf4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c080280();
    if (iVar1 == 0) {
      puVar4 = PTR__OBJC_CLASS___SKProductsRequest_1126c0100;
      _objc_alloc(PTR__OBJC_CLASS___SKProductsRequest_1126c0100);
      func_0x00010c03a920();
      func_0x00010c18b5e0();
      func_0x00010c1d0560(*(undefined8 *)(lVar2 + 0x20));
      func_0x00010c24d960(puVar4);
    }
    else {
      func_0x00010c20f880(*(undefined8 *)(param_1 + 0x28));
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10590cd10;
      puStack_40 = &UNK_110894890;
      puVar4 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar4);
      puStack_38 = puVar4;
      func_0x00010bd869d0(uVar3,&puStack_58,&PTR___NSConcreteGlobalBlock_1108bf978);
      func_0x00010c1e3e60(*(undefined8 *)(param_1 + 0x28));
      _objc_release(uVar3);
      func_0x00010bde3200(lVar2);
      puVar4 = puStack_38;
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10590cd10; end: 10590cd87;  */

void FUN_10590cd10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf4b900();
  uVar1 = param_2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10590cd88; end: 10590ce8b; -[SCIAPTokenInAppProductServiceImplementation fetchProductWithProductIdentifier:completionQueue:completionBlock:] */

void FUN_10590cd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_5 != 0) {
    _objc_retain(param_4);
    func_0x00010c2268e0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10590ce8c;
    puStack_58 = &UNK_1108bf998;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010bfa9780(param_1,param_2,puVar1,param_4,&puStack_70);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10590ce8c; end: 10590cf0b;  */

void FUN_10590ce8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if ((int)param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3,param_4)
  ;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10590cf0c; end: 10590cf17; -[SCIAPTokenInAppProductServiceImplementation priceStringForPrice:priceLocale:] */

void FUN_10590cf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  if (lRam00000001136c15b0 != -1) {
    func_0x00010002a2fc(0x1136c15b0,&PTR___NSConcreteGlobalBlock_1108bfa28);
  }
  uVar1 = uRam00000001136c15a8;
  _objc_retain(uRam00000001136c15a8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x00010c1bf3e0(uVar1);
  uVar2 = uVar1;
  func_0x00010c25d4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10590cf18; end: 10590cf1f; -[SCIAPTokenInAppProductServiceImplementation priceInMillisForPrice:] */

undefined8 FUN_10590cf18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  _objc_retain();
  func_0x00010bf667e0(puVar1,param_2,1,3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf667a0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c067fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10590cf20; end: 10590cf27; -[SCIAPTokenInAppProductServiceImplementation priceCurrencyCodeForPriceLocale:] */

void FUN_10590cf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_currencyCode_1125b5148);
  return;
}



/* Entry: 10590cf28; end: 10590cfff; -[SCIAPTokenInAppProductServiceImplementation requestDidFinish:] */

void FUN_10590cf28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10590d000; end: 10590d077;  */

void FUN_10590d000(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0dff20(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f880();
    func_0x00010bde31c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bde3200(lVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590d078; end: 10590d177; -[SCIAPTokenInAppProductServiceImplementation request:didFailWithError:] */

void FUN_10590d078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590d178; end: 10590d1fb;  */

void FUN_10590d178(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0dff20(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f880();
    func_0x00010c196ee0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010bde31c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bde3200(lVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590d1fc; end: 10590d3f3; -[SCIAPTokenInAppProductServiceImplementation productsRequest:didReceiveResponse:] */

void FUN_10590d1fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010c1163e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010050471c();
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar4 = uVar1;
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar4 = param_4;
  func_0x00010c069c40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590d3f4; end: 10590d3fb;  */

void FUN_10590d3f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c115eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_productIdentifier_1126231c8);
  return;
}



/* Entry: 10590d3fc; end: 10590d423;  */

void FUN_10590d3fc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10590d424; end: 10590d4a7;  */

void FUN_10590d424(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c280520(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c280520(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010bef7f60(*(undefined8 *)(lVar1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0dff20(uVar2,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3e60();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590d4a8; end: 10590d4eb; -[SCIAPTokenInAppProductServiceImplementation _completeRequest:] */

void FUN_10590d4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18b5e0(param_3,param_2,0);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10590d4ec; end: 10590d587; -[SCIAPTokenInAppProductServiceImplementation _completeRequestItem:] */

void FUN_10590d4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf44140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10590d588;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10590d588; end: 10590d66f;  */

void FUN_10590d588(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf44000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c261600(uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c261600();
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1163e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c261600();
  if (iVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf987e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4,uVar5,uVar6);
    _objc_release(uVar6);
  }
  else {
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4,uVar5,0);
  }
  if (iVar1 != 0) {
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10590d670; end: 10590d6b7; -[SCIAPTokenInAppProductServiceImplementation .cxx_destruct] */

void FUN_10590d670(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10590d6b8; end: 10590d797;  */

void FUN_10590d6b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  if (lRam00000001136c15b0 != -1) {
    func_0x00010002a2fc(0x1136c15b0,&PTR___NSConcreteGlobalBlock_1108bfa28);
  }
  uVar1 = uRam00000001136c15a8;
  _objc_retain(uRam00000001136c15a8);
  _objc_retain(uVar1);
  _objc_sync_enter(uVar1);
  func_0x00010c1bf3e0(uVar1);
  uVar2 = uVar1;
  func_0x00010c25d4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10590d798; end: 10590d827;  */

undefined8 FUN_10590d798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  _objc_retain();
  func_0x00010bf667e0(puVar1,param_2,1,3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf667a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c067fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10590d828; end: 10590d873;  */

void FUN_10590d828(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new();
  uVar1 = puRam00000001136c15a8;
  puRam00000001136c15a8 = puVar2;
  _objc_release(uVar1);
  func_0x00010c19ed20(puRam00000001136c15a8);
                    /* WARNING: Could not recover jumptable at 0x00010c1d02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001136c15a8,PTR_s_setNumberStyle__112651ae0,2);
  return;
}



/* Entry: 10590d874; end: 10590d9cb; -[SCIAPTokenItemEntitleServiceImplementation initWithBundle:performerProvider:grpcClientFactory:] */

undefined1 *
FUN_10590d874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eae28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0108;
    _objc_alloc();
    FUN_10590bed4();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10590d9cc; end: 10590d9f3; -[SCIAPTokenItemEntitleServiceImplementation getItemsUpdateObservable] */

void FUN_10590d9cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10590d9f4; end: 10590da1b; -[SCIAPTokenItemEntitleServiceImplementation consumeItemUpdateObservable] */

void FUN_10590d9f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10590da1c; end: 10590db53; -[SCIAPTokenItemEntitleServiceImplementation consumeItemWithIdentifer:appId:itemSku:consumptionQuantity:] */

void FUN_10590da1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_50 = param_6;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590db54; end: 10590db97;  */

void FUN_10590db54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bde7120(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590db98; end: 10590dc6f; -[SCIAPTokenItemEntitleServiceImplementation getItemsWithAppId:] */

void FUN_10590db98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10590dc70; end: 10590dcab;  */

void FUN_10590dc70(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be1fdc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10590dcac; end: 10590ddef; -[SCIAPTokenItemEntitleServiceImplementation _getItemsWithAppId:] */

void FUN_10590dcac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = PTR_PTR_1126c0110;
    func_0x00010bf9fec0(PTR_PTR_1126c0110);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10590ddf0;
    puStack_50 = &UNK_1108bfa48;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    FUN_10590c454(uVar1,param_3,uVar3,&puStack_68);
    _objc_release(uVar3);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10590ddf0; end: 10590de9b;  */

void FUN_10590ddf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c0110;
    if (param_4 == 0) {
      func_0x00010c261680(PTR_PTR_1126c0110,param_2,*(undefined8 *)(param_1 + 0x20),param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf9fec0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x20),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10590de9c; end: 10590e073; -[SCIAPTokenItemEntitleServiceImplementation _consumeItemWithIdentifer:appId:itemSku:consumptionQuantity:] */

void FUN_10590de9c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (((lVar2 == 0) || (lVar2 = param_4, func_0x00010c08fa60(), lVar2 == 0)) ||
     (lVar2 = param_5, func_0x00010c08fa60(), lVar2 == 0)) {
    puVar4 = PTR_PTR_1126c0118;
    func_0x00010bf9fee0(PTR_PTR_1126c0118);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10590e074;
    puStack_88 = &UNK_1108bfa78;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    lStack_80 = param_4;
    _objc_retain(param_5);
    lStack_78 = param_5;
    _objc_retain(param_3);
    lStack_70 = param_3;
    uStack_60 = param_6;
    FUN_10590c050(uVar1,param_3,param_4,param_5,param_6,uVar3,&puStack_a0);
    _objc_release(uVar3);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10590e074; end: 10590e157;  */

void FUN_10590e074(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
      func_0x0001059142b0(0,&PTR____CFConstantStringClassReference_110daafd8,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c0118;
      func_0x00010bf9fee0(PTR_PTR_1126c0118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar2);
    }
    else {
      puVar1 = PTR_PTR_1126c0118;
      func_0x00010c261640(PTR_PTR_1126c0118);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10590e158; end: 10590e1b7; -[SCIAPTokenItemEntitleServiceImplementation .cxx_destruct] */

void FUN_10590e158(long param_1)

{
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



/* Entry: 10590e1b8; end: 10590e357; -[SCIAPTokenItemOrderServiceImplementation initWithBundle:performerProvider:grpcClientFactory:] */

undefined1 *
FUN_10590e1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eae30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c0120;
    _objc_alloc();
    func_0x00010c035320();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10590e358; end: 10590e37f; -[SCIAPTokenItemOrderServiceImplementation listItemUpdateObservable] */

void FUN_10590e358(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10590e380; end: 10590e3a7; -[SCIAPTokenItemOrderServiceImplementation orderUpdateObservable] */

void FUN_10590e380(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


