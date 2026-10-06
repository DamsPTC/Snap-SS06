/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c94710; end: 100c948a7;  */

void FUN_100c94710(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR___sSTTL_11034db40;
  uVar4 = *(undefined8 *)(param_8 + 8);
  uVar2 = 0;
  func_0x000107c614b8(0,uVar4,param_6,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  func_0x000107c6156c(param_2);
  func_0x000107c61428();
  func_0x000107c614b4(uVar4,param_6,uVar2,puVar1,PTR___sST8IteratorST_StTn_11034db38);
  func_0x000107c601c0(&uStack_70,uVar2,uVar4);
  func_0x000107c614a8(auStack_e0);
  uStack_d0 = param_6;
  uStack_c8 = param_7;
  lStack_c0 = param_8;
  if (lStack_68 == 0) {
    func_0x000107c61428(param_3 + 0x10,&uStack_88,0,0);
    lVar3 = *(long *)(param_3 + 0x10);
    uVar2 = 0;
    lStack_b8 = param_4;
    uStack_b0 = param_5;
    func_0x000100c93310(0);
    func_0x000107c61434(lVar3);
    FUN_100c94bcc(param_1,FUN_100c94de8,auStack_e0,lVar3,uVar2,param_7,PTR___ss5NeverON_11034ee88,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
  }
  else {
    uStack_88 = uStack_70;
    lStack_80 = lStack_68;
    lStack_b8 = param_3;
    uStack_b0 = param_2;
    lStack_a8 = param_4;
    uStack_a0 = param_5;
    FUN_100c948a8(param_1,FUN_100c94a84,auStack_e0,param_7);
    lVar3 = lStack_80;
  }
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 100c948a8; end: 100c949eb;  */

void FUN_100c948a8(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  ulong uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [8];
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uStack_70 = uVar2;
  if ((uVar1 >> 0x3c & 1) != 0) {
    uVar5 = uVar1;
    FUN_100edbde8();
    func_0x000107c6142c(uVar1);
    *unaff_x20 = uVar2;
    unaff_x20[1] = uVar5;
    uStack_70 = uVar2;
    uVar1 = uVar5;
  }
  if ((uVar1 >> 0x3d & 1) == 0) {
    if ((uStack_70 >> 0x3c & 1) == 0) {
      func_0x000107c60358(uStack_70,uVar1);
    }
    else {
      uStack_70 = (uVar1 & 0xfffffffffffffff) + 0x20;
    }
    (*param_2)(param_1,uStack_70);
  }
  else {
    uStack_88 = uVar1 >> 0x38 & 0xf;
    uStack_68 = uVar1 & 0xffffffffffffff;
    uVar3 = 0x112da0170;
    uStack_90 = param_4;
    pcStack_80 = param_2;
    uStack_78 = param_3;
    func_0x0001000285a8(0x112da0170,&UNK_10d942638);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_100c949ec(param_1,&uStack_70,FUN_100c94b98,auStack_a0,uVar3,uVar4,param_4,
                  PTR___ss5ErrorWS_11034ee10,auStack_58);
  }
  return;
}



/* Entry: 100c949ec; end: 100c94a83;  */

void FUN_100c949ec(void)

{
  long in_x4;
  undefined8 in_x7;
  code *extraout_x12;
  long extraout_x13;
  long unaff_x21;
  long lVar1;
  
  lVar1 = *(long *)(in_x4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*extraout_x12)();
  if (unaff_x21 != 0) {
    (**(code **)(lVar1 + 0x20))
              (in_x7,&stack0xffffffffffffffc0 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0),in_x4);
  }
  return;
}



/* Entry: 100c94a84; end: 100c94b97;  */

void FUN_100c94a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0x21,0);
  uVar10 = *(ulong *)(lVar6 + 0x10);
  uVar8 = uVar10;
  func_0x000107c61558();
  *(ulong *)(lVar6 + 0x10) = uVar10;
  uVar9 = uVar10;
  if ((uVar8 & 1) == 0) {
    uVar9 = 0;
    FUN_100c90630(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    *(ulong *)(lVar6 + 0x10) = uVar9;
  }
  uVar8 = *(ulong *)(uVar9 + 0x10);
  uVar10 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_100c90630(uVar10,uVar8 + 1,1,uVar9);
  }
  *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
  lVar1 = uVar10 + uVar8 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(ulong *)(lVar6 + 0x10) = uVar10;
  func_0x000107c614a8(auStack_78);
  FUN_100c94710(param_1,uVar4,lVar6,uVar7,uVar11,uVar2,uVar5,uVar3);
  return;
}



/* Entry: 100c94b98; end: 100c94bcb;  */

void FUN_100c94b98(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x20))(param_1,*(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 != 0) {
    *param_3 = unaff_x21;
  }
  return;
}



/* Entry: 100c94bcc; end: 100c94c47;  */

void FUN_100c94bcc(void)

{
  long in_x5;
  undefined8 in_x7;
  long extraout_x12;
  long unaff_x21;
  long lVar1;
  
  lVar1 = *(long *)(in_x5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_100c94c48();
  if (unaff_x21 != 0) {
    (**(code **)(lVar1 + 0x20))
              (in_x7,&stack0xffffffffffffffd0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0),in_x5);
  }
  return;
}



/* Entry: 100c94c48; end: 100c94dd7;  */

void FUN_100c94c48(undefined8 param_1,code *param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  
  lVar5 = *(long *)(param_7 + -8);
  uVar1 = param_4;
  uVar3 = param_5;
  uStack_78 = param_8;
  uStack_70 = param_9;
  pcStack_68 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c60324(uVar1,uVar3);
  if ((uVar1 & 1) == 0) {
    FUN_1014538cc(param_1,pcStack_68,param_3,param_4,param_5,param_6,param_7,uStack_78,
                  puVar4 + -extraout_x12);
    puVar4 = puVar4 + -extraout_x12;
  }
  else {
    uVar1 = param_4;
    func_0x000107c6031c(param_4,param_5);
    uVar2 = param_4;
    func_0x000107c60324(param_4,param_5);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar2 = param_4;
      }
      func_0x000107c60480(uVar2);
    }
    else {
      func_0x000107c60320(param_4,param_5);
      uVar2 = param_4;
      func_0x000107c6056c();
      func_0x000107c61574(param_4);
    }
    func_0x000107c5fabc(uVar1,uVar2,param_5);
    (*pcStack_68)(param_1);
  }
  if (unaff_x21 != 0) {
    (**(code **)(lVar5 + 0x20))(uStack_70,puVar4,param_7);
  }
  return;
}



/* Entry: 100c94dd8; end: 100c94de7;  */

/* WARNING: Possible PIC construction at 0x000100c94f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c94f74) */
/* WARNING: Removing unreachable block (ram,0x000100c94fe4) */

void FUN_100c94dd8(long param_1,long param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_58;
  long lStack_50;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (param_2 != 0) {
      if (param_1 == 0) {
LAB_100c94e5c:
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_1,
                            "UTF8 span pointer was nil with non-zero length");
        func_0x000107c61180();
        func_0x000107c5c170(&PTR____CFConstantStringClassReference_110daae38);
        func_0x000107c61180();
        goto code_r0x00010bdbf3e4;
      }
      plVar3 = (long *)(param_1 + 8);
      lVar7 = param_2;
      do {
        if ((plVar3[-1] == 0) && (*plVar3 != 0)) goto LAB_100c94e5c;
        plVar3 = plVar3 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (plVar1[2] != param_2) {
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_1,
                          "dimension name/value counts did not match");
      func_0x000107c61180();
      func_0x000107c5c170(&PTR____CFConstantStringClassReference_110daae38);
      func_0x000107c61180();
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    lVar7 = plVar1[1];
    plVar3 = plVar1;
    (*(code *)PTR_DAT_113403208)();
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar4 != 0) {
      if (((int)*plVar1 == 0) &&
         (lVar5 = (long)*(int *)(lVar7 + 0xac), auVar2 = SEXT816(lVar6), lVar6 = lVar6 * lVar5,
         SUB168(auVar2 * SEXT816(lVar5),8) != lVar6 >> 0x3f)) {
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_1,
                            "counter value overflowed after sample scaling");
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110daae38);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        goto code_r0x00010bdbf3e4;
      }
      FUN_100c93ce0(&lStack_58,param_1,param_2);
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar7 + 0x60,&lStack_58,lVar6);
      if (lStack_58 != 0) {
        for (; lStack_58 != lStack_50; lStack_50 = lStack_50 + -0x18) {
        }
        lStack_50 = lStack_58;
        func_0x000107c60e14(lStack_58);
      }
    }
  }
  return;
}



/* Entry: 100c94de8; end: 100c94e0f;  */

void FUN_100c94de8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return;
}



/* Entry: 100c94e10; end: 100c95057;  */

/* WARNING: Possible PIC construction at 0x000100c94f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c94f74) */
/* WARNING: Removing unreachable block (ram,0x000100c94fe4) */

void FUN_100c94e10(long *param_1,long param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_58;
  long lStack_50;
  
  if (param_1 != (long *)0x0) {
    if (param_3 != 0) {
      if (param_2 == 0) {
LAB_100c94e5c:
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            "UTF8 span pointer was nil with non-zero length");
        func_0x000107c61180();
        func_0x000107c5c170(&PTR____CFConstantStringClassReference_110daae38);
        func_0x000107c61180();
        goto code_r0x00010bdbf3e4;
      }
      plVar2 = (long *)(param_2 + 8);
      lVar5 = param_3;
      do {
        if ((plVar2[-1] == 0) && (*plVar2 != 0)) goto LAB_100c94e5c;
        plVar2 = plVar2 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[2] != param_3) {
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          "dimension name/value counts did not match");
      func_0x000107c61180();
      func_0x000107c5c170(&PTR____CFConstantStringClassReference_110daae38);
      func_0x000107c61180();
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    lVar5 = param_1[1];
    plVar2 = param_1;
    (*(code *)PTR_DAT_113403208)();
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar3 != 0) {
      if (((int)*param_1 == 0) &&
         (lVar4 = (long)*(int *)(lVar5 + 0xac), auVar1 = SEXT816(param_4), param_4 = param_4 * lVar4
         , SUB168(auVar1 * SEXT816(lVar4),8) != param_4 >> 0x3f)) {
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            "counter value overflowed after sample scaling");
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110daae38);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        goto code_r0x00010bdbf3e4;
      }
      FUN_100c93ce0(&lStack_58,param_2,param_3);
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5 + 0x60,&lStack_58,param_4);
      if (lStack_58 != 0) {
        for (; lStack_58 != lStack_50; lStack_50 = lStack_50 + -0x18) {
        }
        lStack_50 = lStack_58;
        func_0x000107c60e14(lStack_58);
      }
    }
  }
  return;
}



/* Entry: 100c95058; end: 100c9507b;  */

void FUN_100c95058(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c9507c; end: 100c9507f;  */

void FUN_100c9507c(void)

{
  return;
}



/* Entry: 100c95080; end: 100c950eb;  */

/* WARNING: Possible PIC construction at 0x000100c95094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c950a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c95098) */
/* WARNING: Removing unreachable block (ram,0x000100c950a8) */

void FUN_100c95080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100c950ec; end: 100c95b7f;  */

void FUN_100c950ec(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  double dVar15;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_78 [3];
  
  uVar8 = *(ulong *)(param_1 + 0x48);
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (*(double *)(param_1 + 0x40) <= 0.0) {
    lVar12 = 0;
  }
  else {
    dVar15 = *(double *)(param_1 + 0x40) * 1000.0;
    if (0x7fe < (ulong)dVar15 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b48);
      (*pcVar1)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b4c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b50);
      (*pcVar1)();
    }
    lVar12 = (long)dVar15;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 - 4U < 2) {
    puVar5 = auStack_78;
    func_0x000107c61428(param_1 + 0xb0,puVar5,0x20,0);
    lVar9 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar9 + 0x10) != 0) {
      lVar3 = 0x38;
      func_0x000100086a50();
      if (((ulong)puVar5 & 1) != 0) {
        lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + lVar3 * 8);
        func_0x000107c614a8(auStack_78);
        puVar5 = auStack_78;
        func_0x000107c61428(param_1 + 0xb0,puVar5,0x20,0);
        lVar9 = *(long *)(param_1 + 0xb0);
        if (*(long *)(lVar9 + 0x10) != 0) {
          lVar11 = 0x2f;
          func_0x000100086a50();
          if (((ulong)puVar5 & 1) != 0) {
            lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + lVar11 * 8);
            func_0x000107c614a8(auStack_78);
            puVar5 = auStack_78;
            func_0x000107c61428(param_1 + 0xb0,puVar5,0x20,0);
            lVar9 = *(long *)(param_1 + 0xb0);
            if (*(long *)(lVar9 + 0x10) != 0) {
              lVar4 = 0x37;
              func_0x000100086a50();
              if (((ulong)puVar5 & 1) != 0) {
                lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + lVar4 * 8);
                puVar5 = auStack_78;
                func_0x000107c614a8();
                uVar10 = *(ulong *)(param_1 + 0x100);
                if (0x7ffffffffffffffe < uVar10) {
                  uVar10 = 0x7fffffffffffffff;
                }
                lVar4 = uVar10 - lVar3;
                if (SBORROW8(uVar10,lVar3)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b68);
                  (*pcVar1)();
                }
                if (*(long *)(param_1 + 0x10) == 4) {
                  bVar2 = SBORROW8(uVar8,lVar9);
                  uVar8 = uVar8 - lVar9;
                  if (bVar2) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b80);
                    (*pcVar1)();
                  }
                  bVar2 = SBORROW8(lVar12,lVar9);
                  lVar12 = lVar12 - lVar9;
                  if (bVar2) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x100c952e8);
                    (*pcVar1)();
                  }
                }
                else if ((*(long *)(param_1 + 0x10) == 5) && (*(char *)(param_1 + 0x108) != '\0')) {
                  puVar5 = auStack_78;
                  func_0x000107c61428(param_1 + 0xb0,puVar5,0x20,0);
                  lVar9 = *(long *)(param_1 + 0xb0);
                  if (*(long *)(lVar9 + 0x10) != 0) {
                    lVar3 = 0x3a;
                    func_0x000100086a50();
                    if (((ulong)puVar5 & 1) != 0) {
                      lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + lVar3 * 8);
                    }
                  }
                  puVar5 = auStack_78;
                  func_0x000107c614a8();
                }
                lVar9 = lVar11 + lVar4;
                if (SCARRY8(lVar11,lVar4)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b6c);
                  (*pcVar1)();
                }
                goto LAB_100c9541c;
              }
            }
          }
        }
      }
    }
    goto LAB_100c95364;
  }
  if (lVar9 == 6) {
    puVar5 = auStack_78;
    func_0x000107c61428(param_1 + 0xb0,puVar5,0x20,0);
    lVar9 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar9 + 0x10) != 0) {
      lVar3 = 0x38;
      func_0x000100086a50();
      if (((ulong)puVar5 & 1) != 0) {
        lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + lVar3 * 8);
        func_0x000107c614a8(auStack_78);
        puVar5 = auStack_78;
        func_0x000107c61428(param_1 + 0xb0,puVar5,0x20,0);
        lVar9 = *(long *)(param_1 + 0xb0);
        if (*(long *)(lVar9 + 0x10) == 0) {
LAB_100c9538c:
          puVar5 = auStack_78;
          func_0x000107c614a8();
          lVar11 = lVar3;
          if (*(char *)(param_1 + 0x108) != '\x01') {
            return;
          }
        }
        else {
          lVar11 = 0x3a;
          func_0x000100086a50();
          if (((ulong)puVar5 & 1) == 0) goto LAB_100c9538c;
          lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + lVar11 * 8);
          puVar5 = auStack_78;
          func_0x000107c614a8();
        }
        uVar10 = *(ulong *)(param_1 + 0x100);
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        lVar4 = uVar10 - lVar3;
        if (SBORROW8(uVar10,lVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b64);
          (*pcVar1)();
        }
        lVar9 = lVar11 + lVar4;
        if (SCARRY8(lVar11,lVar4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c953c8);
          (*pcVar1)();
        }
        goto LAB_100c9541c;
      }
    }
  }
  else {
    if (lVar9 != 7) {
      return;
    }
    puVar5 = auStack_78;
    func_0x000107c61428(param_1 + 0xb0,puVar5,0x20,0);
    lVar9 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar9 + 0x10) != 0) {
      lVar3 = 0x3a;
      func_0x000100086a50();
      if (((ulong)puVar5 & 1) != 0) {
        lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + lVar3 * 8);
        puVar5 = auStack_78;
        func_0x000107c614a8();
        uVar10 = *(ulong *)(param_1 + 0x100);
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        lVar4 = uVar10 - lVar3;
        if (SBORROW8(uVar10,lVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b60);
          (*pcVar1)();
        }
        lVar9 = lVar3 + lVar4;
        if (SCARRY8(lVar3,lVar4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c951fc);
          (*pcVar1)();
        }
LAB_100c9541c:
        func_0x0001000298f0();
        puVar13 = auStack_78;
        func_0x000107c61428();
        lVar3 = lVar9 + uVar8;
        if (SCARRY8(lVar9,uVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b54);
          (*pcVar1)();
        }
        uVar6 = *puVar5;
        uStack_90 = 0;
        uStack_88 = 0xe000000000000000;
        func_0x000107c61174(uVar6);
        func_0x000107c602fc(0x18);
        func_0x000107c6142c(uStack_88);
        uStack_90 = 0xd000000000000013;
        uStack_88 = 0x800000010f1ed970;
        if (*(char *)(param_1 + 0x28) == '\x01') {
          puVar13 = (undefined8 *)0xe400000000000000;
        }
        else {
          func_0x0001000e48c0(*(undefined8 *)(param_1 + 0x20));
        }
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb78(0x5f,0xe100000000000000);
        lVar11 = *(long *)(param_1 + 0x10);
        if (lVar11 < 6) {
          if (lVar11 == 4) {
            uVar14 = 0xe400000000000000;
            uVar7 = 0x444c4f43;
          }
          else if (lVar11 == 5) {
            uVar14 = 0xe700000000000000;
            uVar7 = 0x4d524157455250;
          }
          else {
LAB_100c95520:
            uVar14 = 0xe400000000000000;
            uVar7 = 0x4c4c554e;
          }
        }
        else if (lVar11 == 6) {
          uVar14 = 0xe800000000000000;
          uVar7 = 0x5353454c44414548;
        }
        else {
          if (lVar11 != 7) goto LAB_100c95520;
          uVar14 = 0xe300000000000000;
          uVar7 = 0x544f48;
        }
        func_0x000107c5fb78(uVar7,uVar14);
        func_0x000107c6142c(uVar14);
        uVar7 = uStack_88;
        FUN_100c95b80(lVar9,lVar3,uStack_90,uStack_88);
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar7);
        puVar13 = &uStack_90;
        func_0x000107c61428(puVar5,puVar13,0,0);
        uVar8 = *(ulong *)(param_1 + 0x50);
        if (0x7ffffffffffffffe < uVar8) {
          uVar8 = 0x7fffffffffffffff;
        }
        if (SCARRY8(lVar3,uVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b58);
          (*pcVar1)();
        }
        uVar6 = *puVar5;
        uStack_a8 = 0;
        uStack_a0 = 0xe000000000000000;
        func_0x000107c61174(uVar6);
        func_0x000107c602fc(0x1a);
        func_0x000107c6142c(uStack_a0);
        uStack_a8 = 0xd000000000000015;
        uStack_a0 = 0x800000010f1ed990;
        if (*(char *)(param_1 + 0x28) == '\x01') {
          puVar13 = (undefined8 *)0xe400000000000000;
        }
        else {
          func_0x0001000e48c0(*(undefined8 *)(param_1 + 0x20));
        }
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb78(0x5f,0xe100000000000000);
        lVar11 = *(long *)(param_1 + 0x10);
        if (lVar11 < 6) {
          if (lVar11 == 4) {
            uVar14 = 0xe400000000000000;
            uVar7 = 0x444c4f43;
          }
          else if (lVar11 == 5) {
            uVar14 = 0xe700000000000000;
            uVar7 = 0x4d524157455250;
          }
          else {
LAB_100c9569c:
            uVar14 = 0xe400000000000000;
            uVar7 = 0x4c4c554e;
          }
        }
        else if (lVar11 == 6) {
          uVar14 = 0xe800000000000000;
          uVar7 = 0x5353454c44414548;
        }
        else {
          if (lVar11 != 7) goto LAB_100c9569c;
          uVar14 = 0xe300000000000000;
          uVar7 = 0x544f48;
        }
        func_0x000107c5fb78(uVar7,uVar14);
        func_0x000107c6142c(uVar14);
        uVar7 = uStack_a0;
        FUN_100c95b80(lVar3,lVar3 + uVar8,uStack_a8,uStack_a0);
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar7);
        puVar13 = &uStack_a8;
        func_0x000107c61428(puVar5,puVar13,0,0);
        if (SCARRY8(lVar9,lVar12)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b5c);
          (*pcVar1)();
        }
        uVar6 = *puVar5;
        uStack_c0 = 0x203a583247;
        uStack_b8 = 0xe500000000000000;
        if (*(char *)(param_1 + 0x28) == '\x01') {
          func_0x000107c61174(uVar6);
          puVar13 = (undefined8 *)0xe400000000000000;
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c61174(uVar6);
          func_0x0001000e48c0(uVar7);
        }
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb78(0x5f,0xe100000000000000);
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 < 6) {
          if (lVar3 == 4) {
            uVar14 = 0xe400000000000000;
            uVar7 = 0x444c4f43;
          }
          else if (lVar3 == 5) {
            uVar14 = 0xe700000000000000;
            uVar7 = 0x4d524157455250;
          }
          else {
LAB_100c957fc:
            uVar14 = 0xe400000000000000;
            uVar7 = 0x4c4c554e;
          }
        }
        else if (lVar3 == 6) {
          uVar14 = 0xe800000000000000;
          uVar7 = 0x5353454c44414548;
        }
        else {
          if (lVar3 != 7) goto LAB_100c957fc;
          uVar14 = 0xe300000000000000;
          uVar7 = 0x544f48;
        }
        func_0x000107c5fb78(uVar7,uVar14);
        func_0x000107c6142c(uVar14);
        uVar7 = uStack_b8;
        FUN_100c95b80(lVar9,lVar9 + lVar12,uStack_c0,uStack_b8);
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar7);
        puVar13 = &uStack_c0;
        func_0x000107c61428(param_1 + 0xb0,puVar13,0x20,0);
        lVar12 = *(long *)(param_1 + 0xb0);
        if (*(long *)(lVar12 + 0x10) == 0) {
LAB_100c95944:
          func_0x000107c614a8(&uStack_c0);
        }
        else {
          lVar9 = 0x33;
          func_0x000100086a50();
          if (((ulong)puVar13 & 1) == 0) goto LAB_100c95944;
          lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + lVar9 * 8);
          func_0x000107c614a8(&uStack_c0);
          puVar13 = &uStack_c0;
          func_0x000107c61428(param_1 + 0xb0,puVar13,0x20,0);
          lVar12 = *(long *)(param_1 + 0xb0);
          if (*(long *)(lVar12 + 0x10) == 0) goto LAB_100c95944;
          lVar3 = 0x34;
          func_0x000100086a50();
          if (((ulong)puVar13 & 1) == 0) goto LAB_100c95944;
          lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + lVar3 * 8);
          func_0x000107c614a8(&uStack_c0);
          func_0x000107c61428(puVar5,auStack_e8,0,0);
          if (SCARRY8(lVar9,lVar4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b70);
            (*pcVar1)();
          }
          if (SCARRY8(lVar12,lVar4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b78);
            (*pcVar1)();
          }
          uVar6 = *puVar5;
          func_0x000107c61174(uVar6);
          FUN_100c95b80(lVar9 + lVar4,lVar12 + lVar4,0xd000000000000016,0x800000010f1ed9d0);
          func_0x000107c61170(uVar6);
        }
        puVar13 = &uStack_c0;
        func_0x000107c61428(param_1 + 0xb0,puVar13,0x20,0);
        lVar12 = *(long *)(param_1 + 0xb0);
        if (*(long *)(lVar12 + 0x10) != 0) {
          lVar9 = 0x35;
          func_0x000100086a50();
          if (((ulong)puVar13 & 1) != 0) {
            lVar9 = *(long *)(*(long *)(lVar12 + 0x38) + lVar9 * 8);
            func_0x000107c614a8(&uStack_c0);
            puVar13 = &uStack_c0;
            func_0x000107c61428(param_1 + 0xb0,puVar13,0x20,0);
            lVar12 = *(long *)(param_1 + 0xb0);
            if (*(long *)(lVar12 + 0x10) != 0) {
              lVar3 = 0x36;
              func_0x000100086a50();
              if (((ulong)puVar13 & 1) != 0) {
                lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + lVar3 * 8);
                func_0x000107c614a8(&uStack_c0);
                puVar13 = &uStack_c0;
                func_0x000107c61428(puVar5,puVar13,0,0);
                if (SCARRY8(lVar9,lVar4)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b74);
                  (*pcVar1)();
                }
                if (SCARRY8(lVar12,lVar4)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95b7c);
                  (*pcVar1)();
                }
                uVar6 = *puVar5;
                uStack_d0 = 0;
                uStack_c8 = 0xe000000000000000;
                func_0x000107c61174(uVar6);
                func_0x000107c602fc(0x1c);
                func_0x000107c6142c(uStack_c8);
                uStack_d0 = 0xd000000000000017;
                uStack_c8 = 0x800000010f1ed9b0;
                if (*(char *)(param_1 + 0x28) == '\x01') {
                  puVar13 = (undefined8 *)0xe400000000000000;
                }
                else {
                  func_0x0001000e48c0(*(undefined8 *)(param_1 + 0x20));
                }
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar13);
                func_0x000107c5fb78(0x5f,0xe100000000000000);
                lVar3 = *(long *)(param_1 + 0x10);
                if (lVar3 < 6) {
                  if (lVar3 == 4) {
                    uVar14 = 0xe400000000000000;
                    uVar7 = 0x444c4f43;
                    goto LAB_100c95b04;
                  }
                  if (lVar3 == 5) {
                    uVar14 = 0xe700000000000000;
                    uVar7 = 0x4d524157455250;
                    goto LAB_100c95b04;
                  }
                }
                else {
                  if (lVar3 == 6) {
                    uVar14 = 0xe800000000000000;
                    uVar7 = 0x5353454c44414548;
                    goto LAB_100c95b04;
                  }
                  if (lVar3 == 7) {
                    uVar14 = 0xe300000000000000;
                    uVar7 = 0x544f48;
                    goto LAB_100c95b04;
                  }
                }
                uVar14 = 0xe400000000000000;
                uVar7 = 0x4c4c554e;
LAB_100c95b04:
                func_0x000107c5fb78(uVar7,uVar14);
                func_0x000107c6142c(uVar14);
                uVar7 = uStack_c8;
                FUN_100c95b80(lVar9 + lVar4,lVar12 + lVar4,uStack_d0,uStack_c8);
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(uVar7);
                return;
              }
            }
          }
        }
        puVar5 = &uStack_c0;
        goto LAB_100c95368;
      }
    }
  }
LAB_100c95364:
  puVar5 = auStack_78;
LAB_100c95368:
  func_0x000107c614a8(puVar5);
  return;
}



/* Entry: 100c95b80; end: 100c95c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c95b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c49710(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 100c95c14; end: 100c95c5f;  */

void FUN_100c95c14(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000100c8f3b0(unaff_x20 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c95c60; end: 100c95d1b;  */

/* WARNING: Possible PIC construction at 0x000100c95d00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c95d04) */

void FUN_100c95c60(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (uint)param_2;
  if ((uVar3 & 0xff) != 1 && (param_1 & 0xffffffff) == 0x1f) {
    return;
  }
  puVar2 = PTR_PTR_1126af680;
  uVar4 = uVar3;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    if ((uVar3 & 0xff) != 1) {
      func_0x0001000e48c0(param_1);
      func_0x000107c5fadc();
      func_0x000107c6142c(CONCAT44(uVar5,uVar4));
    }
    func_0x000107c3de50(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100c95d1c);
  (*pcVar1)();
}



/* Entry: 100c95d1c; end: 100c95df3;  */

void FUN_100c95d1c(void)

{
  undefined *puVar1;
  undefined1 auStack_40 [32];
  
  if (cRam0000000113839535 == '\x01') {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    func_0x000107c427e8();
    func_0x000107c61170();
    uRam0000000113839430 = 0;
    func_0x000107c6106c();
    cRam0000000113839535 = '\0';
    puRam00000001138394b0 = puVar1;
    func_0x000100c95d94(auStack_40);
  }
  return;
}



/* Entry: 100c95df4; end: 100c95df7;  */

void FUN_100c95df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c95df8; end: 100c95e1b;  */

void FUN_100c95df8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c95e1c; end: 100c95ecf;  */

void FUN_100c95e1c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x10))
            (uVar3,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x40));
  lVar4 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar1,1,1,lVar4);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0x21,0);
  func_0x0001000f2ba4(uVar1,uVar3);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100c95ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100c95ed0; end: 100c95f0f;  */

undefined8 FUN_100c95ed0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100c95f10; end: 100c96053;  */

void FUN_100c95f10(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x0001000c8928(param_2);
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0x112e009e8;
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101b4585c();
    }
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar4 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar4 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_2,lVar4);
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0x112e009e8;
    func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    FUN_100c96054(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100c96040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 100c96054; end: 100c962e7;  */

void FUN_100c96054(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_80 [8];
  code *pcStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = param_2 + 0x40;
  uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1 + 1 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar5 = ~uVar5;
    uVar13 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar5);
    uStack_70 = uVar13 + 1 & uVar5;
    lVar7 = *(long *)(lVar10 + 0x48);
    pcStack_78 = *(code **)(lVar10 + 0x10);
    lStack_68 = lVar10;
    do {
      lVar10 = lVar7 * uVar12;
      (*pcStack_78)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                    *(long *)(param_2 + 0x30) + lVar10,lVar3);
      uVar13 = *(ulong *)(param_2 + 0x28);
      uVar4 = 0x112d6c668;
      func_0x0001000fb874(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSHAAMc_110350c48);
      func_0x000107c5fa4c(uVar13,lVar3,uVar4);
      (**(code **)(lStack_68 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      uVar13 = uVar13 & uVar5;
      if ((long)param_1 < (long)uStack_70) {
        if (uStack_70 <= uVar13 || (long)uVar13 <= (long)param_1) {
LAB_100c961d8:
          lVar6 = lVar7 * param_1;
          uVar13 = *(long *)(param_2 + 0x30) + lVar6;
          lVar11 = *(long *)(param_2 + 0x30) + lVar10;
          if ((lVar6 < lVar10) || ((ulong)(lVar11 + lVar7) <= uVar13)) {
            func_0x000107c61414(uVar13,lVar11,1,lVar3);
          }
          else if (lVar6 - lVar10 != 0) {
            func_0x000107c61410(uVar13,lVar11,1,lVar3);
          }
          lVar11 = *(long *)(param_2 + 0x38);
          lVar10 = 0x112e009e8;
          func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
          lVar9 = *(long *)(*(long *)(lVar10 + -8) + 0x48);
          lVar6 = lVar9 * param_1;
          uVar13 = lVar11 + lVar6;
          lVar8 = lVar9 * uVar12;
          lVar11 = lVar11 + lVar8;
          param_1 = uVar12;
          if (lVar6 < lVar8 || (ulong)(lVar11 + lVar9) <= uVar13) {
            func_0x000107c61414(uVar13,lVar11,1,lVar10);
          }
          else if (lVar6 - lVar8 != 0) {
            func_0x000107c61410(uVar13,lVar11,1);
          }
        }
      }
      else if (uStack_70 <= uVar13 && (long)uVar13 <= (long)param_1) goto LAB_100c961d8;
      uVar12 = uVar12 + 1 & uVar5;
    } while ((*(ulong *)(lVar1 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar5 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100c962e8);
  (*pcVar2)();
}



/* Entry: 100c962e8; end: 100c962eb;  */

void FUN_100c962e8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100c8ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100c962ec; end: 100c9635f;  */

void FUN_100c962ec(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96360; end: 100c963af;  */

void FUN_100c96360(void)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  long unaff_x22;
  
  pcVar2 = *(char **)(unaff_x22 + 0x38);
  cVar3 = *(char *)(unaff_x22 + 0x90);
  func_0x000107c5fcd8(**(undefined8 **)(unaff_x22 + 0x40),&UNK_110744d00);
  cVar1 = '\x03';
  if (cVar3 != '\x06') {
    cVar1 = cVar3;
  }
  *pcVar2 = cVar1;
                    /* WARNING: Could not recover jumptable at 0x000100c963ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100c963b0; end: 100c963b3;  */

void FUN_100c963b0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100c8ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100c963b4; end: 100c9644b;  */

void FUN_100c963b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x90));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar5 + 0x88);
    pcVar4 = *(code **)(lVar5 + 0x70);
    uVar1 = *(undefined8 *)(lVar5 + 0x60);
    uVar3 = *(undefined8 *)(lVar5 + 0x68);
    (**(code **)(*(long *)(lVar5 + 0x80) + 8))(uVar2,*(undefined8 *)(lVar5 + 0x78));
    (*pcVar4)(uVar3,uVar1);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar3);
    pcVar4 = (code *)&UNK_1040bd428;
  }
  else {
    pcVar4 = FUN_100c9644c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 100c9644c; end: 100c964c3;  */

void FUN_100c9644c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  pcVar1 = *(code **)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x78));
  (*pcVar1)(uVar4,uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x98));
  **(undefined1 **)(unaff_x22 + 0x28) = 3;
                    /* WARNING: Could not recover jumptable at 0x000100c964c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100c964c4; end: 100c964cf;  */

void FUN_100c964c4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100c8ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100c964d0; end: 100c96507;  */

void FUN_100c964d0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010007d980(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined1 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96508; end: 100c96597;  */

int FUN_100c96508(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100c96584;
        goto LAB_100c96568;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100c96568:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_100c96584:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100c96598; end: 100c96667;  */

void FUN_100c96598(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96668; end: 100c96697;  */

bool FUN_100c96668(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100c96698; end: 100c9679b;  */

ulong FUN_100c96698(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  lVar1 = 0;
  FUN_100dd3544();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100c966e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((uVar3 + 0x7ffffffe & 0x7fffffff) + 1);
  }
  return uVar2;
}



/* Entry: 100c9679c; end: 100c9679f;  */

void FUN_100c9679c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,3,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100dd3ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 100c967a0; end: 100c967e7;  */

int FUN_100c967a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
  iVar1 = 0;
  if (2 < (uint)param_1) {
    iVar1 = (uint)param_1 - 3;
  }
  return iVar1;
}



/* Entry: 100c967e8; end: 100c9683b;  */

void FUN_100c967e8(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 3;
  }
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000100c96838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,iVar1,param_3,lVar2);
  return;
}



/* Entry: 100c9683c; end: 100c9685f;  */

void FUN_100c9683c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96860; end: 100c96967;  */

void FUN_100c96860(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_100dd9bb4();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    lVar1 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + *(int *)(param_3 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x000100c968dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return;
}



/* Entry: 100c96968; end: 100c96993;  */

void FUN_100c96968(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100c96970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 100c96994; end: 100c969ff;  */

void FUN_100c96994(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96a00; end: 100c96aef;  */

ulong FUN_100c96a00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  FUN_100dd8cfc();
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100c96a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 100c96af0; end: 100c96afb;  */

void FUN_100c96af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 100c96afc; end: 100c96b4b;  */

void FUN_100c96afc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96b4c; end: 100c96b4f;  */

undefined8 * FUN_100c96b4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar2 = *(byte *)(param_2 + 2);
  if (bVar2 < 4) {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    func_0x000100dd0978(uVar3,uVar1,bVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    *(byte *)(param_1 + 2) = bVar2;
  }
  else {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 100c96b50; end: 100c96b9b;  */

void FUN_100c96b50(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (4 < uVar1) {
    func_0x000107c61174(uVar1);
  }
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_2[1];
  return;
}



/* Entry: 100c96b9c; end: 100c96bd7;  */

void FUN_100c96b9c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    func_0x000107c61174(uVar1);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 100c96bd8; end: 100c96c4b;  */

void FUN_100c96bd8(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96c4c; end: 100c96c4f;  */

void FUN_100c96c4c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c96c50; end: 100c96c9f;  */

void FUN_100c96c50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96ca0; end: 100c96cf3;  */

void FUN_100c96ca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96cf4; end: 100c96d17;  */

void FUN_100c96cf4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96d18; end: 100c96d23;  */

void FUN_100c96d18(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96d24; end: 100c96d73;  */

void FUN_100c96d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96d74; end: 100c96d93;  */

void FUN_100c96d74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96d94; end: 100c96ddb;  */

void FUN_100c96d94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96ddc; end: 100c96e07;  */

void FUN_100c96ddc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100c96de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 100c96e08; end: 100c96f7f;  */

ulong FUN_100c96e08(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  
  lVar2 = 0;
  FUN_100dee474();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  }
  else {
    lVar2 = 0x112d36368;
    func_0x0001000285a8(0x112d36368,&UNK_10d9008e0);
    if ((int)param_2 != *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
      uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x1c) + 8);
      if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
      }
      uVar1 = (int)uVar3 - 1;
      if (0x7fffffff < uVar1) {
        uVar1 = 0xffffffff;
      }
      return (ulong)(uVar1 + 1);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x000100c96e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar2);
  return param_1;
}



/* Entry: 100c96f80; end: 100c96fcf;  */

void FUN_100c96f80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c96fd0; end: 100c96fdf;  */

void FUN_100c96fd0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100c96fe0; end: 100c97027;  */

void FUN_100c96fe0(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97028; end: 100c97203;  */

void FUN_100c97028(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar4 = *(long *)(lVar4 + -8);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = uVar3 + 0x78 & (uVar3 ^ 0xffffffffffffffff);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  lVar2 = unaff_x20 + uVar3;
  (**(code **)(lVar5 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 8))(unaff_x20 + uVar3,lVar1);
  }
  func_0x000107c615e8(*(undefined8 *)
                       (unaff_x20 + (uVar3 + *(long *)(lVar4 + 0x40) + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97204; end: 100c97207;  */

void FUN_100c97204(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97208; end: 100c9724b;  */

void FUN_100c97208(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c9724c; end: 100c972ef;  */

void FUN_100c9724c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar5));
  plVar1 = (long *)(unaff_x20 + uVar5 + 8);
  if (*plVar1 != 0) {
    func_0x000107c61574(plVar1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c972f0; end: 100c97313;  */

void FUN_100c972f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97314; end: 100c973ef;  */

void FUN_100c97314(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c973f0; end: 100c97413;  */

undefined8 FUN_100c973f0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100c97414; end: 100c974bb;  */

void FUN_100c97414(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c974bc; end: 100c974c3;  */

void FUN_100c974bc(void)

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



/* Entry: 100c974c4; end: 100c975bf;  */

void FUN_100c974c4(void)

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



/* Entry: 100c975c0; end: 100c975c3;  */

void FUN_100c975c0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c975c4; end: 100c97683;  */

void FUN_100c975c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97684; end: 100c97687;  */

void FUN_100c97684(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97688; end: 100c97727;  */

void FUN_100c97688(void)

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



/* Entry: 100c97728; end: 100c9777f;  */

long FUN_100c97728(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100c97780; end: 100c97797;  */

void FUN_100c97780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100c97798; end: 100c977bb;  */

void FUN_100c97798(void)

{
  func_0x000107c60690(0);
  return;
}



/* Entry: 100c977bc; end: 100c977e3;  */

void FUN_100c977bc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 100c977e4; end: 100c9784f;  */

void FUN_100c977e4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97850; end: 100c9786b;  */

void FUN_100c97850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c9786c; end: 100c97927;  */

void FUN_100c9786c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97928; end: 100c9794b;  */

void FUN_100c97928(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c9794c; end: 100c9796f;  */

void FUN_100c9794c(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97970; end: 100c97983;  */

void FUN_100c97970(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97984; end: 100c979c7;  */

void FUN_100c97984(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c979c8; end: 100c979f3;  */

undefined8 * FUN_100c979c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100c979f4; end: 100c97a17;  */

void FUN_100c979f4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97a18; end: 100c97a1b;  */

void FUN_100c97a18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97a1c; end: 100c97a6b;  */

void FUN_100c97a1c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97a6c; end: 100c97a77;  */

void FUN_100c97a6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97a78; end: 100c97b27;  */

void FUN_100c97a78(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97b28; end: 100c97b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c97b28(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_100e1c628();
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d398d8);
  *(undefined8 *)(param_1 + _DAT_112d398d8) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  func_0x0001000285a8(0x112d39808,&UNK_10d9032d0);
  func_0x000107c613fc();
  pcVar2 = FUN_100e1c504;
  func_0x0001000bdd8c(FUN_100e1c504,0);
  uVar3 = 0;
  FUN_101427e44(0);
  func_0x000107c610f8();
  func_0x0001014279ac(pcVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 100c97b2c; end: 100c97b97;  */

void FUN_100c97b2c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97b98; end: 100c97b9b;  */

void FUN_100c97b98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c97b9c; end: 100c97bc3;  */

void FUN_100c97b9c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100e1f3cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c97bc4; end: 100c97bd3;  */

void FUN_100c97bc4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100c97bd4; end: 100c97bf7;  */

void FUN_100c97bd4(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


