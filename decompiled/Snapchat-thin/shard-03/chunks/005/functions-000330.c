/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102942248; end: 10294229b;  */

void FUN_102942248(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102942650;
  plVar4[0x1b] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x1c] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x1d] = lVar2;
  plVar4[0x1e] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102940d58,lVar2,lVar3);
  return;
}



/* Entry: 10294229c; end: 1029422b3;  */

long FUN_10294229c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1029422b4; end: 102942307;  */

void FUN_1029422b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102942654;
  plVar4[5] = param_1;
  plVar4[6] = unaff_x20;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[7] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[8] = lVar2;
  plVar4[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294016c,lVar2,lVar3);
  return;
}



/* Entry: 102942308; end: 10294230f;  */

void FUN_102942308(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c4d8c0();
    bVar2 = 0 < param_1;
  }
  else {
    bVar2 = false;
  }
  *(bool *)*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28) = bVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102942310; end: 1029423a3;  */

void FUN_102942310(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  plVar9 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x102942658;
  plVar9[0xb] = lVar4;
  plVar9[0xc] = lVar10;
  plVar9[9] = lVar3;
  plVar9[10] = lVar1;
  plVar9[7] = lVar2;
  plVar9[8] = lVar8;
  plVar9[6] = lVar6;
  lVar6 = 0;
  FUN_102948bc0();
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xd] = uVar7;
  lVar8 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  plVar9[0xe] = lVar8;
  lVar6 = lVar8;
  func_0x000107c5fce8();
  plVar9[0xf] = lVar6;
  lVar6 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  plVar9[0x10] = lVar6;
  func_0x000107c5fca8();
  plVar9[0x11] = lVar8;
  plVar9[0x12] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10293f320,lVar8,lVar6);
  return;
}



/* Entry: 1029423a4; end: 1029423cf;  */

void FUN_1029423a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029423d0; end: 102942447;  */

void FUN_1029423d0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102942448;
  plVar4[0x19] = lVar2;
  plVar4[0x1a] = lVar5;
  plVar4[0x17] = param_2;
  plVar4[0x18] = lVar3;
  plVar4[0x16] = param_1;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar4[0x1b] = lVar2;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x1c] = lVar3;
  lVar3 = 0x112d45220;
  FUN_1029420b8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar4[0x1d] = lVar3;
  func_0x000107c5fca8();
  plVar4[0x1e] = lVar2;
  plVar4[0x1f] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294114c,lVar2,lVar3);
  return;
}



/* Entry: 102942448; end: 10294248b;  */

void FUN_102942448(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102942488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10294248c; end: 10294250b;  */

undefined8 FUN_10294248c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102948bc0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10294250c; end: 102942537;  */

void FUN_10294250c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102942538; end: 102942623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102942538(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  long alStack_78 [3];
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    alStack_78[0] = 0;
    uVar5 = 0;
    func_0x000103fd7dd8(0);
    func_0x000107c5f9e4(param_1,alStack_78,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
    lVar2 = alStack_78[0];
    if (alStack_78[0] == 0) {
      func_0x000107c61170(lVar4);
    }
    else {
      func_0x000100083b20(alStack_78);
      lVar3 = alStack_78[0];
      lVar6 = *(long *)(alStack_78[0] + _DAT_112fef5b8);
      uVar1 = ((long *)(alStack_78[0] + _DAT_112fef5b8))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61170(lVar3);
      if (*(long *)(lVar2 + 0x10) == 0) {
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar2);
      }
      else {
        func_0x000107c61434(lVar2);
        uVar9 = uVar1;
        func_0x000100029284();
        if ((uVar9 & 1) == 0) {
          func_0x000107c6142c(uVar1);
          func_0x000107c61430(lVar2,2);
        }
        else {
          lVar6 = *(long *)(*(long *)(lVar2 + 0x38) + lVar6 * 8);
          func_0x000107c61174();
          func_0x000107c6142c(uVar1);
          func_0x000107c61430(lVar2,2);
          if ((*(byte *)(lVar6 + _DAT_113041e98) & 1) == 0) {
            func_0x000107c61170(lVar6);
          }
          else {
            func_0x000107c61428(lVar6 + _DAT_113041eb8,alStack_78,0,0);
            func_0x000107c61170(lVar6);
          }
        }
      }
      puVar7 = &DAT_112ece2c8;
      func_0x00010293adf4(&DAT_112ece2c8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      puStack_60 = puVar8;
      func_0x0001007d6d78(&puStack_60);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(puVar7);
    }
  }
  return;
}



/* Entry: 102942624; end: 102942627; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController defaultProjectNameV3] */

void FUN_102942624(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102942628; end: 102942663; -[_TtC38FanPassSubscriptionScopeImplementation33FanPassSubscriptionViewController defaultProjectNameV2] */

void FUN_102942628(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102942664; end: 102942cbf;  */

undefined1  [16] FUN_102942664(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd0;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f0cda60);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0cd9f0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102942730);
  (*pcVar1)();
}



/* Entry: 102942cc0; end: 102942cef;  */

void FUN_102942cc0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102942cf0; end: 102942cfb;  */

void FUN_102942cf0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102942cfc; end: 102942e57;  */

/* WARNING: Possible PIC construction at 0x000102942d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102942dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102942dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102942d80) */
/* WARNING: Removing unreachable block (ram,0x000102942dcc) */
/* WARNING: Removing unreachable block (ram,0x000102942e00) */
/* WARNING: Removing unreachable block (ram,0x000102942e24) */
/* WARNING: Removing unreachable block (ram,0x000102942e38) */
/* WARNING: Removing unreachable block (ram,0x000102942ddc) */
/* WARNING: Removing unreachable block (ram,0x000102942d84) */

void FUN_102942cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2148;
  func_0x000107c610f8(PTR_PTR_1126e2148);
  func_0x000107c453e4();
  func_0x000107c57e94();
  func_0x000107c571f8(puVar1);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c59564(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102942e58; end: 102942f83;  */

/* WARNING: Possible PIC construction at 0x000102942ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102942f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102942ed8) */
/* WARNING: Removing unreachable block (ram,0x000102942f24) */
/* WARNING: Removing unreachable block (ram,0x000102942f54) */
/* WARNING: Removing unreachable block (ram,0x000102942f68) */
/* WARNING: Removing unreachable block (ram,0x000102942edc) */

void FUN_102942e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2148;
  func_0x000107c610f8(PTR_PTR_1126e2148);
  func_0x000107c453e4();
  func_0x000107c57e94();
  func_0x000107c571f8(puVar1);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c59564(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102942f84; end: 1029431eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102942f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar1 = 0;
  FUN_102948bc0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar3);
  func_0x0001029424c8(param_1,puVar6);
  puVar2 = puVar6;
  func_0x000107c614c4(puVar6,lVar1);
  if ((int)puVar2 < 2) {
    if ((int)puVar2 == 0) {
      uVar7 = *puVar6;
      lVar3 = *(long *)(&stack0xffffffffffffffa8 + lVar3);
    }
    else {
      func_0x0001000285a8(0x112ece3b8,&UNK_10daf3f00);
      lVar3 = 0;
      func_0x000107c5f918();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar6,lVar3);
      uVar7 = 0;
      lVar3 = 0;
    }
  }
  else {
    uVar7 = 0;
    lVar3 = 0;
  }
  puVar4 = PTR_PTR_1126e2148;
  func_0x000107c610f8(PTR_PTR_1126e2148);
  func_0x000107c453e4();
  func_0x000107c57e94();
  func_0x000107c571f8(puVar4);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c59564(puVar4);
  func_0x000107c61170(param_2);
  if (param_5 != 0) {
    func_0x000107c61174();
    func_0x000107c59578(puVar4);
    func_0x000107c5958c(puVar4);
    func_0x000107c61170(param_5);
  }
  func_0x000107c5a2ac(puVar4);
  if (lVar3 != 0) {
    func_0x000107c5fadc(uVar7,lVar3);
    func_0x000107c54664(puVar4);
    func_0x000107c61170(uVar7);
  }
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar5 = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c4bfb0(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 1029431ec; end: 10294320f;  */

void FUN_1029431ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102943210; end: 10294326f;  */

void FUN_102943210(void)

{
  FUN_102942cfc();
  return;
}



/* Entry: 102943270; end: 10294328f;  */

void FUN_102943270(void)

{
  func_0x000107c61168(&PTR_PTR_112ece400);
  return;
}



/* Entry: 102943290; end: 1029432fb;  */

long FUN_102943290(long param_1,long param_2)

{
  if ((param_1 == -0x2fffffffffffffe3) && (param_2 == -0x7ffffffef0f32480)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_1,param_2,0xd00000000000001d,0x800000010f0cdb80,0);
  return param_1;
}



/* Entry: 1029432fc; end: 1029433b7;  */

void FUN_1029432fc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c5b484();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029433b8);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x68) = lVar3;
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x70;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1029433b8;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_10294342c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001029433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1029433b8; end: 10294342b;  */

void FUN_1029433b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1029433f8,0,0);
  return;
}



/* Entry: 10294342c; end: 1029436cf;  */

void FUN_10294342c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  func_0x000107c61434(param_4);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar1);
  uVar3 = 0;
  FUN_102943ee8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar4 = &UNK_11056ff40;
  func_0x000107c613fc(&UNK_11056ff40,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  pcStack_50 = FUN_102943f28;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f6151c;
  puStack_58 = &UNK_11056ff58;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4b7e8(param_2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1029436d0; end: 1029437d3;  */

undefined1  [16] FUN_1029436d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_11056fea8;
  func_0x000107c613fc(&UNK_11056fea8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_1029437d4;
  return auVar2;
}



/* Entry: 1029437d4; end: 1029437db;  */

undefined * FUN_1029437d4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = param_1;
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
    func_0x000107c4a8a4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    param_1 = puVar1;
    func_0x000107c5cb24(puVar1);
    func_0x000107c61180();
  }
  else {
    FUN_102943bc8(param_1,puVar1);
  }
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 1029437dc; end: 102943ab3;  */

void FUN_1029437dc(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar9 = param_1;
  }
  puVar12 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar11 = *(undefined **)(puVar12 + 0x10);
    func_0x000107c61434();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar11 = puVar12;
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar11 = puVar9;
    }
    func_0x000107c60480();
    func_0x000107c61434(param_1);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (puVar11 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar12 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1029439ec);
            (*pcVar3)();
          }
          puVar4 = *(undefined **)(puVar9 + (long)puVar6 * 8 + 0x20);
          func_0x000107c61174();
          puVar10 = param_2;
        }
        else {
          puVar4 = puVar6;
          puVar10 = puVar9;
          func_0x00010103193c();
        }
        puVar1 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029439e8);
          (*pcVar3)();
        }
        puVar7 = puVar4;
        func_0x000107c5b37c();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) {
          bVar13 = true;
        }
        else {
          puVar5 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          puVar7 = puVar10;
          func_0x000107c5fb5c();
          func_0x000107c6142c(puVar10);
          bVar13 = (long)puVar5 < 1;
          puVar10 = puVar7;
        }
        puVar7 = puVar4;
        func_0x000107c40cdc();
        func_0x000107c61180();
        if (puVar7 != (undefined *)0x0) break;
LAB_102943848:
        func_0x000107c61170(puVar4);
        param_2 = puVar10;
        puVar6 = puVar6 + 1;
        if (puVar1 == puVar11) goto LAB_102943a18;
      }
      puVar5 = puVar7;
      func_0x000107c4a10c();
      func_0x000107c61170(puVar7);
      if (bVar13 || (((uint)puVar5 ^ 0xffffffff) & 1) != 0) goto LAB_102943848;
      puVar7 = puVar4;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) goto LAB_102943848;
      puVar6 = puVar7;
      func_0x000107c5faec();
      param_2 = puVar10;
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar4);
      puVar4 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar4 & 1) == 0) {
        param_2 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
        puVar7 = (undefined *)0x0;
        FUN_102943ab4(0,param_2,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      puVar4 = (undefined *)(uVar2 + 1);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        param_2 = puVar4;
        FUN_102943ab4(puVar8,puVar4,1,puVar7,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(undefined **)(puVar8 + 0x10) = puVar4;
      *(undefined **)(puVar8 + uVar2 * 0x10 + 0x20) = puVar6;
      *(undefined **)(puVar8 + uVar2 * 0x10 + 0x28) = puVar10;
      puVar6 = puVar1;
    } while (puVar1 != puVar11);
  }
LAB_102943a18:
  func_0x000107c6142c(puVar9);
  puVar9 = puVar8;
  func_0x00010102c3b8(puVar8);
  func_0x000107c6142c(puVar8);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar11 = puVar9;
  func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar9);
  func_0x000107c45788(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c4d664(param_3);
  func_0x000107c61170(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_complete_1125ae760);
  return;
}



/* Entry: 102943ab4; end: 102943bc7;  */

undefined *
FUN_102943ab4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102943bc8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102943bc8; end: 102943eb3;  */

undefined * FUN_102943bc8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  uVar13 = 0;
  uVar14 = *(ulong *)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar3 = uVar13;
    if (uVar13 <= uVar14) {
      uVar3 = uVar14;
    }
    puVar12 = (ulong *)(param_1 + 0x28 + uVar13 * 0x10);
    do {
      if (uVar14 == uVar13) {
        if (*(long *)(puVar10 + 0x10) != 0) {
          func_0x000107c5b484();
          func_0x000107c61180();
          if (param_2 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102943eb4);
            (*pcVar5)();
          }
          lVar6 = param_2;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(param_2);
          if (lVar6 != 0) {
            puVar11 = PTR_PTR_1126b7e38;
            func_0x000107c61168();
            func_0x000107c50198();
            func_0x000107c61180();
            puVar7 = puVar10;
            func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
            func_0x000107c61574(puVar10);
            uVar8 = 0;
            FUN_102943ee8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
            func_0x000107c5ffdc();
            puVar10 = &UNK_11056fef0;
            func_0x000107c613fc(&UNK_11056fef0,0x18,7);
            *(undefined **)(puVar10 + 0x10) = puVar11;
            uStack_70 = 0x102943ec4;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            puStack_80 = &UNK_100f6151c;
            puStack_78 = &UNK_11056ff08;
            puStack_68 = puVar10;
            func_0x000107c60bc4(&puStack_90);
            puVar10 = puStack_68;
            func_0x000107c61174(puVar11);
            func_0x000107c61574(puVar10);
            func_0x000107c4b7e8(lVar6);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(uVar8);
            puVar10 = puVar11;
            func_0x000107c5cb24(puVar11);
            func_0x000107c61180();
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(puVar11);
            return puVar10;
          }
        }
        func_0x000107c61574(puVar10);
        puVar10 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c453e4();
        func_0x000107c4a8a4(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        puVar11 = puVar10;
        func_0x000107c5cb24(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        return puVar11;
      }
      uVar13 = uVar13 + 1;
      if (uVar3 + 1 == uVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102943eb0);
        (*pcVar5)();
      }
      uVar2 = puVar12[-1];
      uVar4 = *puVar12;
      puVar12 = puVar12 + 2;
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
    } while (uVar1 == 0);
    func_0x000107c61434(uVar4);
    puVar11 = puVar10;
    func_0x000107c61558();
    puStack_90 = puVar10;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
    }
    uVar3 = *(ulong *)(puStack_90 + 0x10);
    if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar3) {
      func_0x000100403514(1 < *(ulong *)(puStack_90 + 0x18),uVar3 + 1,1);
    }
    *(ulong *)(puStack_90 + 0x10) = uVar3 + 1;
    *(ulong *)(puStack_90 + uVar3 * 0x10 + 0x20) = uVar2;
    *(ulong *)(puStack_90 + uVar3 * 0x10 + 0x28) = uVar4;
    puVar10 = puStack_90;
  } while( true );
}



/* Entry: 102943eb4; end: 102943ee7;  */

undefined1  [16] FUN_102943eb4(void)

{
  return ZEXT816(0x11056fed0);
}



/* Entry: 102943ee8; end: 102943f27;  */

void FUN_102943ee8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102943f28; end: 102943f37;  */

/* WARNING: Possible PIC construction at 0x0001029435ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010294363c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029435f0) */
/* WARNING: Removing unreachable block (ram,0x000102943640) */

void FUN_102943f28(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      uVar5 = param_1;
      if (-1 < (long)param_1) {
        uVar5 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1029436d0);
          (*pcVar1)();
        }
        lVar2 = *(long *)(param_1 + 0x20);
        func_0x000107c61174();
      }
      else {
        lVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      lVar3 = lVar2;
      func_0x000107c5b37c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        lVar3 = lVar2;
        func_0x000107c40cdc();
        func_0x000107c61180();
        if (lVar3 == 0) {
          **(undefined1 **)(*(long *)(lVar4 + 0x40) + 0x28) = 0;
          func_0x000107c6144c(lVar4);
        }
        else {
          func_0x000107c4a10c();
          lVar2 = lVar3;
        }
      }
      else {
        func_0x000107c5faec();
        lVar2 = lVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  **(undefined1 **)(*(long *)(lVar4 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar4);
  return;
}



/* Entry: 102943f38; end: 10294408f;  */

void FUN_102943f38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x77656e6572;
  if (cVar3 != '\x01') {
    uVar1 = 0x6269726373627573;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe900000000000065;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102944090; end: 102944107;  */

void FUN_102944090(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102944108; end: 10294431f;  */

void FUN_102944108(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x77656e6572;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6269726373627573;
  }
  uVar2 = 0xe500000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000065;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102944320; end: 1029444ab;  */

void FUN_102944320(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000102944148(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1029444ac; end: 1029444bf;  */

void FUN_1029444ac(void)

{
  puRam0000000112ece4d0 = PTR___swiftEmptySetSingleton_11034f1d8;
  return;
}



/* Entry: 1029444c0; end: 1029444e7;  */

void FUN_1029444c0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112ece4c0 = puVar1;
  return;
}



/* Entry: 1029444e8; end: 1029445c7;  */

uint FUN_1029444e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (lRam0000000112ece4b8 != -1) {
    func_0x000107c61568(0x112ece4b8,FUN_1029444c0);
  }
  uVar1 = uRam0000000112ece4c0;
  func_0x000107c4b940(uRam0000000112ece4c0);
  if (lRam0000000112ece4c8 != -1) {
    func_0x000107c61568(0x112ece4c8,FUN_1029444ac);
  }
  func_0x000107c61428(0x112ece4d0,auStack_48,0,0);
  uVar2 = uRam0000000112ece4d0;
  func_0x000107c61434(uRam0000000112ece4d0);
  func_0x0001000f66f0(param_1,param_2,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5d278(uVar1);
  return (uint)param_1 & 1;
}



/* Entry: 1029445c8; end: 1029448c3;  */

void FUN_1029445c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_11;
  *(undefined8 *)(unaff_x22 + 200) = param_10;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_9;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_8;
  *(undefined1 *)(unaff_x22 + 0x228) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  lVar1 = 0;
  FUN_10294b0fc();
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar1 = 0;
  func_0x000107c5f93c();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  lVar1 = 0;
  func_0x000107c5f890();
  *(long *)(unaff_x22 + 0x108) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar2;
  lVar1 = 0;
  func_0x000107c5f950();
  *(long *)(unaff_x22 + 0x128) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x130) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x148) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x150) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x168) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x170) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x178) = uVar2;
  lVar1 = 0x112ece4d8;
  func_0x0001000285a8(0x112ece4d8,&UNK_10daf4018);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x180) = uVar2;
  lVar1 = 0;
  func_0x000107c5f970();
  *(long *)(unaff_x22 + 0x188) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 400) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x198) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1029447b8,0,0);
  return;
}



/* Entry: 1029448c4; end: 102944c93;  */

void FUN_1029448c4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar18 = 0xe900000000000065;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar10 = *(long *)(unaff_x22 + 400);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = uVar17;
  (**(code **)(lVar10 + 0x30))(uVar17,1,uVar9);
  if ((int)uVar8 == 1) {
    puVar12 = *(undefined8 **)(unaff_x22 + 0x88);
    uVar9 = 0x77656e6572;
    uVar8 = 0xe500000000000000;
    if (*(char *)(unaff_x22 + 0x228) != '\x01') {
      uVar9 = 0x6269726373627573;
      uVar8 = uVar18;
    }
    func_0x00010294a72c(uVar17,0x112ece4d8,&UNK_10daf4018);
    uVar14 = 0x800000010f0cdc60;
    func_0x000103b6883c(uVar9,uVar8,0xd000000000000011,0x800000010f0cdc60);
    func_0x000107c6142c(uVar8);
    *puVar12 = 0xd000000000000011;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
    lVar2 = *(long *)(unaff_x22 + 0x170);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(lVar10 + 0x20))(*(undefined8 *)(unaff_x22 + 0x1a0),uVar17,uVar9);
    func_0x000107c5eea8(uVar16,uVar14,uVar1);
    (**(code **)(lVar2 + 0x30))(uVar16,1,uVar8);
    if ((int)uVar16 != 1) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
      bVar7 = *(char *)(unaff_x22 + 0x228) != '\x01';
      uVar9 = 0xe500000000000000;
      if (bVar7) {
        uVar9 = uVar18;
      }
      uVar18 = 0x77656e6572;
      if (bVar7) {
        uVar18 = 0x6269726373627573;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x170) + 0x20))
                (uVar14,*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
      FUN_102948bf8(uVar17,uVar16,uVar14);
      *(undefined8 *)(unaff_x22 + 0x1c0) = uVar17;
      lVar10 = 0;
      func_0x00010294ae18();
      func_0x000107c61534();
      *(long *)(unaff_x22 + 0x1c8) = lVar10;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      func_0x000107c61614(lVar10 + 0x38,0);
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
      *(undefined8 *)(lVar10 + 0x18) = uVar18;
      *(undefined8 *)(lVar10 + 0x20) = uVar9;
      *(undefined8 *)(lVar10 + 0x28) = uVar19;
      *(undefined8 *)(lVar10 + 0x30) = 1000000000;
      *(undefined8 *)(lVar10 + 0x40) = uVar1;
      func_0x000107c61604(lVar10 + 0x38,uVar8);
      plVar15 = (long *)(ulong)*(uint *)(
                                        PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKFTu_110347de0
                                        + 4);
      func_0x000107c6157c(uVar13);
      func_0x000107c61434(uVar9);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1d0) = plVar15;
      *plVar15 = unaff_x22;
      plVar15[1] = (long)FUN_102944c94;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKF_110347dd8
      )(plVar15,*(undefined8 *)(unaff_x22 + 0x158),uVar17);
      return;
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar10 = *(long *)(unaff_x22 + 400);
    puVar12 = *(undefined8 **)(unaff_x22 + 0x88);
    bVar7 = *(char *)(unaff_x22 + 0x228) != '\x01';
    uVar9 = 0xe500000000000000;
    if (bVar7) {
      uVar9 = uVar18;
    }
    uVar18 = 0x77656e6572;
    if (bVar7) {
      uVar18 = 0x6269726373627573;
    }
    func_0x00010294a72c(*(undefined8 *)(unaff_x22 + 0x160),0x112d3bc20,&UNK_10d904ef0);
    uVar14 = 0x800000010f0cdc40;
    func_0x000103b6883c(uVar18,uVar9,0xd000000000000019,0x800000010f0cdc40);
    func_0x000107c6142c(uVar9);
    (**(code **)(lVar10 + 8))(uVar17,uVar8);
    *puVar12 = 0xd000000000000019;
  }
  puVar12[1] = uVar14;
  uVar9 = 0;
  FUN_102948bc0(0);
  func_0x000107c6159c(puVar12,uVar9,0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1a0));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000102944b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102944c94; end: 102944cef;  */

void FUN_102944c94(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102944cf0;
  }
  else {
    pcVar1 = FUN_102944e08;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102944cf0; end: 102944e07;  */

void FUN_102944cf0(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long unaff_x22;
  double dVar16;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar11 = *(long *)(unaff_x22 + 0x130);
  (**(code **)(lVar11 + 0x10))(uVar2,*(undefined8 *)(unaff_x22 + 0x158),uVar3);
  uVar8 = uVar2;
  (**(code **)(lVar11 + 0x58))(uVar2,uVar3);
  iVar5 = *(int *)
           PTR___s8StoreKit7ProductV14PurchaseResultO7successyAeA012VerificationE0OyAA11TransactionVGcAEmFWC_110347d80
  ;
  pcVar15 = *(code **)(lVar11 + 8);
  *(code **)(unaff_x22 + 0x1e0) = pcVar15;
  (*pcVar15)(uVar2,uVar3);
  if ((int)uVar8 == iVar5) {
    dVar16 = *(double *)(unaff_x22 + 0x1a8);
    func_0x000107c31808();
    func_0x000103b68534(param_1 - dVar16,0x74696b65726f7473,0xe800000000000000);
  }
  cVar6 = *(char *)(unaff_x22 + 0x228);
  plVar9 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e8) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1029453f0;
  bVar7 = cVar6 != '\x01';
  lVar11 = 0x77656e6572;
  if (bVar7) {
    lVar11 = 0x6269726373627573;
  }
  lVar1 = -0x1b00000000000000;
  if (bVar7) {
    lVar1 = -0x16ffffffffffff9b;
  }
  lVar14 = *(long *)(unaff_x22 + 0x158);
  lVar4 = *(long *)(unaff_x22 + 0xd0);
  lVar10 = *(long *)(unaff_x22 + 0x88);
  plVar9[0xd] = *(long *)(unaff_x22 + 200);
  plVar9[0xe] = lVar4;
  plVar9[0xb] = lVar11;
  plVar9[0xc] = lVar1;
  plVar9[9] = lVar10;
  plVar9[10] = lVar14;
  lVar11 = 0;
  func_0x000107c5f918();
  plVar9[0xf] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x10] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x11] = uVar12;
  lVar11 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  plVar9[0x12] = lVar11;
  uVar12 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xf;
  uVar13 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x13] = uVar13;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x14] = uVar12;
  lVar11 = 0;
  func_0x000107c5f950();
  plVar9[0x15] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar9[0x16] = lVar11;
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x17] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029463b8,0,0);
  return;
}



/* Entry: 102944e08; end: 1029453ef;  */

void FUN_102944e08(double param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  code *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  double dVar29;
  
  lVar27 = -0x16ffffffffffff9b;
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar22 = *(ulong *)(unaff_x22 + 0x120);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c614b0();
  uVar12 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar22,(undefined8 *)(unaff_x22 + 0x78),uVar12,uVar23,0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1d8);
  if ((uVar22 & 1) == 0) {
    uVar24 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x78));
    *(undefined8 *)(unaff_x22 + 0x80) = uVar23;
    func_0x000107c614b0(uVar23);
    func_0x000107c6147c(uVar24,unaff_x22 + 0x80,uVar12,uVar19,0);
    if ((int)uVar24 == 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
      lVar16 = *(long *)(unaff_x22 + 0x1a0);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x188);
      lVar21 = *(long *)(unaff_x22 + 400);
      lVar25 = *(long *)(unaff_x22 + 0xb0);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
      (**(code **)(lVar21 + 0x10))(uVar12,lVar16,uVar23);
      if (0 < lVar25) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x1d8);
        FUN_102949560(uVar12);
        if (lVar16 != 0) {
          lVar21 = *(long *)(unaff_x22 + 0xb0);
          FUN_10294b304(1,uVar12,lVar16);
          func_0x000107c6142c(lVar16);
          lVar27 = lVar21 + 1;
          *(long *)(unaff_x22 + 0x1f0) = lVar27;
          if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1029453ec);
            (*pcVar10)();
          }
          if (1 < lVar27) {
            *(undefined8 *)(unaff_x22 + 0x1f8) = 2;
            plVar13 = (long *)(ulong)*(uint *)(
                                              PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                              + 4);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x200) = plVar13;
            *plVar13 = unaff_x22;
            plVar13[1] = (long)FUN_1029455c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                      (1000000000);
            return;
          }
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1029453f0);
          (*pcVar10)();
        }
      }
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
      puVar1 = *(undefined8 **)(unaff_x22 + 0xe0);
      (**(code **)(*(long *)(unaff_x22 + 400) + 8))
                (*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x188));
      *puVar1 = uVar23;
      func_0x000107c6159c(puVar1,uVar12,2);
      func_0x000107c614b0(uVar23);
      puVar1 = *(undefined8 **)(unaff_x22 + 0xe0);
      puVar14 = puVar1;
      func_0x000107c614c4(puVar1,*(undefined8 *)(unaff_x22 + 0xd8));
      if ((int)puVar14 == 0) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x128);
        lVar16 = *(long *)(unaff_x22 + 0x130);
        (**(code **)(lVar16 + 0x20))(uVar24,puVar1,uVar23);
        (**(code **)(lVar16 + 0x10))(uVar12,uVar24,uVar23);
        uVar24 = uVar12;
        (**(code **)(lVar16 + 0x58))(uVar12,uVar23);
        iVar8 = *(int *)
                 PTR___s8StoreKit7ProductV14PurchaseResultO7successyAeA012VerificationE0OyAA11TransactionVGcAEmFWC_110347d80
        ;
        pcVar10 = *(code **)(lVar16 + 8);
        *(code **)(unaff_x22 + 0x218) = pcVar10;
        (*pcVar10)(uVar12,uVar23);
        if ((int)uVar24 == iVar8) {
          dVar29 = *(double *)(unaff_x22 + 0x1a8);
          func_0x000107c31808();
          func_0x000103b68534(param_1 - dVar29,0x74696b65726f7473,0xee0079727465725f);
        }
        cVar9 = *(char *)(unaff_x22 + 0x228);
        plVar13 = (long *)0x100;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x220) = plVar13;
        *plVar13 = unaff_x22;
        plVar13[1] = (long)FUN_102945e98;
        bVar11 = cVar9 != '\x01';
        lVar16 = 0x77656e6572;
        if (bVar11) {
          lVar16 = 0x6269726373627573;
        }
        lVar21 = -0x1b00000000000000;
        if (bVar11) {
          lVar21 = lVar27;
        }
        lVar17 = *(long *)(unaff_x22 + 0x140);
        lVar27 = *(long *)(unaff_x22 + 0xd0);
        lVar25 = *(long *)(unaff_x22 + 0x88);
        plVar13[0xd] = *(long *)(unaff_x22 + 200);
        plVar13[0xe] = lVar27;
        plVar13[0xb] = lVar16;
        plVar13[0xc] = lVar21;
        plVar13[9] = lVar25;
        plVar13[10] = lVar17;
        lVar27 = 0;
        func_0x000107c5f918();
        plVar13[0xf] = lVar27;
        lVar27 = *(long *)(lVar27 + -8);
        plVar13[0x10] = lVar27;
        uVar22 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar13[0x11] = uVar22;
        lVar27 = 0x112dbf790;
        func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
        plVar13[0x12] = lVar27;
        uVar22 = *(long *)(*(long *)(lVar27 + -8) + 0x40) + 0xf;
        uVar15 = uVar22 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar13[0x13] = uVar15;
        uVar22 = uVar22 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar13[0x14] = uVar22;
        lVar27 = 0;
        func_0x000107c5f950();
        plVar13[0x15] = lVar27;
        lVar27 = *(long *)(lVar27 + -8);
        plVar13[0x16] = lVar27;
        uVar22 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar13[0x17] = uVar22;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_1029463b8,0,0);
        return;
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1c0);
      bVar11 = *(char *)(unaff_x22 + 0x228) != '\x01';
      lVar16 = -0x1b00000000000000;
      if (bVar11) {
        lVar16 = lVar27;
      }
      uVar24 = 0x77656e6572;
      if (bVar11) {
        uVar24 = 0x6269726373627573;
      }
      uVar19 = *puVar1;
      FUN_102947780(*(undefined8 *)(unaff_x22 + 0x88),uVar19,uVar24,lVar16);
      func_0x000107c6142c(lVar16);
      func_0x000107c6142c(uVar23);
      func_0x000107c614ac(uVar12);
      func_0x000107c614ac(uVar19);
    }
    else {
      uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar21 = *(long *)(unaff_x22 + 0xf0);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x88);
      bVar11 = *(char *)(unaff_x22 + 0x228) != '\x01';
      lVar16 = -0x1b00000000000000;
      if (bVar11) {
        lVar16 = lVar27;
      }
      uVar20 = 0x77656e6572;
      if (bVar11) {
        uVar20 = 0x6269726373627573;
      }
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1d8));
      (**(code **)(lVar21 + 0x20))(uVar12,uVar24,uVar23);
      FUN_102947468(uVar26,uVar12,uVar20,lVar16);
      func_0x000107c6142c(lVar16);
      func_0x000107c6142c(uVar19);
      (**(code **)(lVar21 + 8))(uVar12,uVar23);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x80));
    }
  }
  else {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar27 = *(long *)(unaff_x22 + 0x110);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x88);
    bVar11 = *(char *)(unaff_x22 + 0x228) != '\x01';
    uVar12 = 0xe500000000000000;
    if (bVar11) {
      uVar12 = 0xe900000000000065;
    }
    uVar2 = 0x77656e6572;
    if (bVar11) {
      uVar2 = 0x6269726373627573;
    }
    func_0x000107c614ac(uVar23);
    (**(code **)(lVar27 + 0x20))(uVar24,uVar26,uVar19);
    FUN_102946bf4(uVar28,uVar24,uVar2,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(uVar20);
    (**(code **)(lVar27 + 8))(uVar24,uVar19);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x78));
  }
  lVar21 = *(long *)(unaff_x22 + 0x1c8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar16 = *(long *)(unaff_x22 + 400);
  lVar27 = *(long *)(unaff_x22 + 0x170);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x168);
  cVar9 = *(char *)(unaff_x22 + 0x228);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1b0));
  uVar12 = 0xe500000000000000;
  if (cVar9 != '\x01') {
    uVar12 = 0xe900000000000065;
  }
  func_0x000107c6142c(uVar12);
  func_0x000107c61588(lVar21);
  FUN_102948e0c(lVar21 + 0x38);
  (**(code **)(lVar27 + 8))(uVar24,uVar26);
  (**(code **)(lVar16 + 8))(uVar19,uVar23);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar28 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1a0));
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar26);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar20);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar28);
  func_0x000107c615c0(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001029452c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029453f0; end: 102945457;  */

void FUN_1029453f0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = 0xe500000000000000;
  if (*(char *)(*unaff_x22 + 0x228) != '\x01') {
    uVar1 = 0xe900000000000065;
  }
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1e8));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102945458,0,0);
  return;
}



/* Entry: 102945458; end: 1029455c7;  */

void FUN_102945458(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long unaff_x22;
  undefined8 uVar19;
  
  pcVar18 = *(code **)(unaff_x22 + 0x1e0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1c0));
  (*pcVar18)(uVar16,uVar14);
  lVar17 = *(long *)(unaff_x22 + 0x1c8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar4 = *(long *)(unaff_x22 + 400);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x168);
  cVar12 = *(char *)(unaff_x22 + 0x228);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1b0));
  uVar14 = 0xe500000000000000;
  if (cVar12 != '\x01') {
    uVar14 = 0xe900000000000065;
  }
  func_0x000107c6142c(uVar14);
  func_0x000107c61588(lVar17);
  FUN_102948e0c(lVar17 + 0x38);
  (**(code **)(lVar1 + 8))(uVar5,uVar19);
  (**(code **)(lVar4 + 8))(uVar15,uVar16);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1a0));
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001029455c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029455c8; end: 102945643;  */

void FUN_1029455c8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x200));
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKFTu_110347de0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x208) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_102945644;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKF_110347dd8)
            (*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x1c0));
  return;
}



/* Entry: 102945644; end: 10294569f;  */

void FUN_102945644(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x210) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x208));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1029456a0;
  }
  else {
    pcVar1 = FUN_1029459f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1029456a0; end: 1029459f3;  */

void FUN_1029456a0(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long unaff_x22;
  undefined8 uVar28;
  double dVar29;
  
  lVar17 = *(long *)(unaff_x22 + 400);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar3 = *(long *)(unaff_x22 + 0x130);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000103b6897c(*(undefined8 *)(unaff_x22 + 0x1f8));
  (**(code **)(lVar17 + 8))(uVar27,uVar26);
  (**(code **)(lVar3 + 0x20))(uVar24,uVar28,uVar1);
  func_0x000107c6159c(uVar24,uVar23,0);
  puVar4 = *(undefined8 **)(unaff_x22 + 0xe0);
  puVar14 = puVar4;
  func_0x000107c614c4(puVar4,*(undefined8 *)(unaff_x22 + 0xd8));
  if ((int)puVar14 != 0) {
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1c0);
    bVar13 = *(char *)(unaff_x22 + 0x228) != '\x01';
    uVar1 = 0xe500000000000000;
    if (bVar13) {
      uVar1 = 0xe900000000000065;
    }
    uVar24 = 0x77656e6572;
    if (bVar13) {
      uVar24 = 0x6269726373627573;
    }
    uVar26 = *puVar4;
    FUN_102947780(*(undefined8 *)(unaff_x22 + 0x88),uVar26,uVar24,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar27);
    func_0x000107c614ac(uVar23);
    func_0x000107c614ac(uVar26);
    lVar25 = *(long *)(unaff_x22 + 0x1c8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar3 = *(long *)(unaff_x22 + 400);
    lVar17 = *(long *)(unaff_x22 + 0x170);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x168);
    cVar12 = *(char *)(unaff_x22 + 0x228);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1b0));
    uVar1 = 0xe500000000000000;
    if (cVar12 != '\x01') {
      uVar1 = 0xe900000000000065;
    }
    func_0x000107c6142c(uVar1);
    func_0x000107c61588(lVar25);
    FUN_102948e0c(lVar25 + 0x38);
    (**(code **)(lVar17 + 8))(uVar27,uVar26);
    (**(code **)(lVar3 + 8))(uVar24,uVar23);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1a0));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar23);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar27);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar24);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar26);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar28);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar21);
                    /* WARNING: Could not recover jumptable at 0x0001029458c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar17 = *(long *)(unaff_x22 + 0x130);
  (**(code **)(lVar17 + 0x20))(uVar27,puVar4,uVar23);
  (**(code **)(lVar17 + 0x10))(uVar1,uVar27,uVar23);
  uVar27 = uVar1;
  (**(code **)(lVar17 + 0x58))(uVar1,uVar23);
  iVar11 = *(int *)
            PTR___s8StoreKit7ProductV14PurchaseResultO7successyAeA012VerificationE0OyAA11TransactionVGcAEmFWC_110347d80
  ;
  pcVar22 = *(code **)(lVar17 + 8);
  *(code **)(unaff_x22 + 0x218) = pcVar22;
  (*pcVar22)(uVar1,uVar23);
  if ((int)uVar27 == iVar11) {
    dVar29 = *(double *)(unaff_x22 + 0x1a8);
    func_0x000107c31808();
    func_0x000103b68534(param_1 - dVar29,0x74696b65726f7473,0xee0079727465725f);
  }
  cVar12 = *(char *)(unaff_x22 + 0x228);
  plVar15 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x220) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_102945e98;
  bVar13 = cVar12 != '\x01';
  lVar17 = 0x77656e6572;
  if (bVar13) {
    lVar17 = 0x6269726373627573;
  }
  lVar3 = -0x1b00000000000000;
  if (bVar13) {
    lVar3 = -0x16ffffffffffff9b;
  }
  lVar20 = *(long *)(unaff_x22 + 0x140);
  lVar25 = *(long *)(unaff_x22 + 0xd0);
  lVar16 = *(long *)(unaff_x22 + 0x88);
  plVar15[0xd] = *(long *)(unaff_x22 + 200);
  plVar15[0xe] = lVar25;
  plVar15[0xb] = lVar17;
  plVar15[0xc] = lVar3;
  plVar15[9] = lVar16;
  plVar15[10] = lVar20;
  lVar17 = 0;
  func_0x000107c5f918();
  plVar15[0xf] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  plVar15[0x10] = lVar17;
  uVar18 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0x11] = uVar18;
  lVar17 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  plVar15[0x12] = lVar17;
  uVar18 = *(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xf;
  uVar19 = uVar18 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0x13] = uVar19;
  uVar18 = uVar18 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0x14] = uVar18;
  lVar17 = 0;
  func_0x000107c5f950();
  plVar15[0x15] = lVar17;
  lVar17 = *(long *)(lVar17 + -8);
  plVar15[0x16] = lVar17;
  uVar18 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0x17] = uVar18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029463b8,0,0);
  return;
}



/* Entry: 1029459f4; end: 102945e97;  */

void FUN_1029459f4(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long unaff_x22;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  
  uVar14 = *(ulong *)(unaff_x22 + 0x210);
  FUN_102948e30();
  if (param_3 != 0) {
    if ((uVar14 == 0x31303030303035 && param_3 == -0x1900000000000000) ||
       (uVar19 = uVar14, func_0x000107c605b8(uVar14,param_3,0x31303030303035,0xe700000000000000,0),
       (uVar19 & 1) != 0)) {
      uVar28 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar18 = *(long *)(unaff_x22 + 0x1f0);
      lVar3 = *(long *)(unaff_x22 + 0x1f8);
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x70) = 0xe000000000000000;
      func_0x000107c602fc(0x12);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
      *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000010;
      *(undefined8 *)(unaff_x22 + 0x60) = 0x800000010f0cdc80;
      func_0x000107c61434(param_3);
      func_0x000107c5fb78(uVar14,param_3);
      func_0x000107c61430(param_3,2);
      func_0x000107c6142c(param_5);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x60);
      FUN_10294b304(lVar3,*(undefined8 *)(unaff_x22 + 0x58),uVar23);
      func_0x000107c6142c(uVar23);
      func_0x000107c614ac(uVar28);
      if (lVar3 != lVar18) {
        if (SCARRY8(*(long *)(unaff_x22 + 0x1f8),1)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x102945e98);
          (*pcVar22)();
        }
        *(long *)(unaff_x22 + 0x1f8) = *(long *)(unaff_x22 + 0x1f8) + 1;
        plVar16 = (long *)(ulong)*(uint *)(
                                          PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                          + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x200) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_1029455c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                  (1000000000);
        return;
      }
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xd8);
      puVar4 = *(undefined8 **)(unaff_x22 + 0xe0);
      (**(code **)(*(long *)(unaff_x22 + 400) + 8))
                (*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x188));
      *puVar4 = uVar28;
      func_0x000107c6159c(puVar4,uVar23,1);
      func_0x000107c614b0(uVar28);
      goto LAB_102945bd8;
    }
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_5);
  }
  uVar28 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar4 = *(undefined8 **)(unaff_x22 + 0xe0);
  (**(code **)(*(long *)(unaff_x22 + 400) + 8))
            (*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x188));
  *puVar4 = uVar28;
  func_0x000107c6159c(puVar4,uVar23,2);
LAB_102945bd8:
  puVar4 = *(undefined8 **)(unaff_x22 + 0xe0);
  puVar15 = puVar4;
  func_0x000107c614c4(puVar4,*(undefined8 *)(unaff_x22 + 0xd8));
  if ((int)puVar15 == 0) {
    uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar18 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(lVar18 + 0x20))(uVar25,puVar4,uVar28);
    (**(code **)(lVar18 + 0x10))(uVar23,uVar25,uVar28);
    uVar25 = uVar23;
    (**(code **)(lVar18 + 0x58))(uVar23,uVar28);
    iVar11 = *(int *)
              PTR___s8StoreKit7ProductV14PurchaseResultO7successyAeA012VerificationE0OyAA11TransactionVGcAEmFWC_110347d80
    ;
    pcVar22 = *(code **)(lVar18 + 8);
    *(code **)(unaff_x22 + 0x218) = pcVar22;
    (*pcVar22)(uVar23,uVar28);
    if ((int)uVar25 == iVar11) {
      dVar29 = *(double *)(unaff_x22 + 0x1a8);
      func_0x000107c31808();
      func_0x000103b68534(param_1 - dVar29,0x74696b65726f7473,0xee0079727465725f);
    }
    cVar12 = *(char *)(unaff_x22 + 0x228);
    plVar16 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x220) = plVar16;
    *plVar16 = unaff_x22;
    plVar16[1] = (long)FUN_102945e98;
    bVar13 = cVar12 != '\x01';
    lVar18 = 0x77656e6572;
    if (bVar13) {
      lVar18 = 0x6269726373627573;
    }
    lVar3 = -0x1b00000000000000;
    if (bVar13) {
      lVar3 = -0x16ffffffffffff9b;
    }
    lVar20 = *(long *)(unaff_x22 + 0x140);
    lVar26 = *(long *)(unaff_x22 + 0xd0);
    lVar17 = *(long *)(unaff_x22 + 0x88);
    plVar16[0xd] = *(long *)(unaff_x22 + 200);
    plVar16[0xe] = lVar26;
    plVar16[0xb] = lVar18;
    plVar16[0xc] = lVar3;
    plVar16[9] = lVar17;
    plVar16[10] = lVar20;
    lVar18 = 0;
    func_0x000107c5f918();
    plVar16[0xf] = lVar18;
    lVar18 = *(long *)(lVar18 + -8);
    plVar16[0x10] = lVar18;
    uVar14 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar16[0x11] = uVar14;
    lVar18 = 0x112dbf790;
    func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
    plVar16[0x12] = lVar18;
    uVar14 = *(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xf;
    uVar19 = uVar14 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar16[0x13] = uVar19;
    uVar14 = uVar14 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar16[0x14] = uVar14;
    lVar18 = 0;
    func_0x000107c5f950();
    plVar16[0x15] = lVar18;
    lVar18 = *(long *)(lVar18 + -8);
    plVar16[0x16] = lVar18;
    uVar14 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar16[0x17] = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1029463b8,0,0);
    return;
  }
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar18 = 0x77656e6572;
  lVar3 = -0x1b00000000000000;
  if (*(char *)(unaff_x22 + 0x228) != '\x01') {
    lVar18 = 0x6269726373627573;
    lVar3 = -0x16ffffffffffff9b;
  }
  uVar25 = *puVar4;
  FUN_102947780(*(undefined8 *)(unaff_x22 + 0x88),uVar25,lVar18,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(uVar28);
  func_0x000107c614ac(uVar23);
  func_0x000107c614ac(uVar25);
  lVar26 = *(long *)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar3 = *(long *)(unaff_x22 + 400);
  lVar18 = *(long *)(unaff_x22 + 0x170);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x168);
  cVar12 = *(char *)(unaff_x22 + 0x228);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1b0));
  uVar23 = 0xe500000000000000;
  if (cVar12 != '\x01') {
    uVar23 = 0xe900000000000065;
  }
  func_0x000107c6142c(uVar23);
  func_0x000107c61588(lVar26);
  FUN_102948e0c(lVar26 + 0x38);
  (**(code **)(lVar18 + 8))(uVar25,uVar27);
  (**(code **)(lVar3 + 8))(uVar24,uVar28);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1a0));
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar28);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar25);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar27);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar21);
                    /* WARNING: Could not recover jumptable at 0x000102945d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102945e98; end: 102945eff;  */

void FUN_102945e98(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = 0xe500000000000000;
  if (*(char *)(*unaff_x22 + 0x228) != '\x01') {
    uVar1 = 0xe900000000000065;
  }
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x220));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102945f00,0,0);
  return;
}



/* Entry: 102945f00; end: 10294607b;  */

void FUN_102945f00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x22;
  code *pcVar18;
  undefined8 uVar19;
  
  pcVar18 = *(code **)(unaff_x22 + 0x218);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1c0));
  func_0x000107c614ac(uVar15);
  (*pcVar18)(uVar13,uVar17);
  lVar16 = *(long *)(unaff_x22 + 0x1c8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar4 = *(long *)(unaff_x22 + 400);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x168);
  cVar11 = *(char *)(unaff_x22 + 0x228);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1b0));
  uVar13 = 0xe500000000000000;
  if (cVar11 != '\x01') {
    uVar13 = 0xe900000000000065;
  }
  func_0x000107c6142c(uVar13);
  func_0x000107c61588(lVar16);
  FUN_102948e0c(lVar16 + 0x38);
  (**(code **)(lVar1 + 8))(uVar17,uVar19);
  (**(code **)(lVar4 + 8))(uVar14,uVar15);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1a0));
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000102946078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10294607c; end: 102946157;  */

void FUN_10294607c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  lVar1 = 0;
  func_0x000107c5f970();
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  uVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  plVar5 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZTu_110347dd0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  uVar4 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar6 = uVar4;
  func_0x000100c94510();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102946158;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZ_110347dc8)
            ((undefined8 *)(unaff_x22 + 0x10),uVar4,uVar6);
  return;
}



/* Entry: 102946158; end: 1029461bf;  */

void FUN_102946158(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1029461c0;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_102946298;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1029461c0; end: 102946297;  */

void FUN_1029461c0(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x48);
  bVar1 = *(long *)(lVar7 + 0x10) == 0;
  if (bVar1) {
    func_0x000107c6142c(lVar7);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar5 = *(long *)(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    (**(code **)(lVar5 + 0x10))
              (uVar2,lVar7 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)),uVar3);
    func_0x000107c6142c(lVar7);
    pcVar8 = *(code **)(lVar5 + 0x20);
    (*pcVar8)(uVar4,uVar2,uVar3);
    (*pcVar8)(uVar6,uVar4,uVar3);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x18),bVar1,1,*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102946294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102946298; end: 1029462eb;  */

void FUN_102946298(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x18),1,1,*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001029462e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029462ec; end: 1029463b7;  */

void FUN_1029462ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  lVar1 = 0;
  func_0x000107c5f918();
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar1 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  lVar1 = 0;
  func_0x000107c5f950();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029463b8,0,0);
  return;
}



/* Entry: 1029463b8; end: 10294688b;  */

void FUN_1029463b8(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  int *piVar14;
  undefined8 *puVar15;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  
  lVar11 = *(long *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(lVar11 + 0x10))(uVar6,*(undefined8 *)(unaff_x22 + 0x50),uVar10);
  (**(code **)(lVar11 + 0x58))(uVar6,uVar10);
  iVar2 = (int)uVar6;
  if (iVar2 == *(int *)
                PTR___s8StoreKit7ProductV14PurchaseResultO7successyAeA012VerificationE0OyAA11TransactionVGcAEmFWC_110347d80
     ) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    (**(code **)(*(long *)(unaff_x22 + 0xb0) + 0x60))(uVar12,*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x000101718fc4(uVar12,uVar6);
    FUN_10294a6a4(uVar6,uVar3,0x112dbf790,&UNK_10d97ae40);
    func_0x000107c614c4(uVar3,uVar10);
    lVar11 = *(long *)(unaff_x22 + 0x98);
    if ((int)uVar3 == 1) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
      pcVar9 = *(code **)(*(long *)(unaff_x22 + 0x80) + 0x20);
      *(code **)(unaff_x22 + 0xc0) = pcVar9;
      (*pcVar9)(uVar6,lVar11,*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c5f8f4();
      *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
      puVar4 = PTR___ss6UInt64VN_11034f048;
      puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c();
      *(undefined **)(unaff_x22 + 200) = puVar4;
      *(undefined **)(unaff_x22 + 0xd0) = puVar8;
      if (lRam0000000112ece4b8 != -1) {
        func_0x000107c61568(0x112ece4b8,FUN_1029444c0);
      }
      uVar6 = uRam0000000112ece4c0;
      *(undefined8 *)(unaff_x22 + 0xd8) = uRam0000000112ece4c0;
      func_0x000107c4b940(uVar6);
      if (lRam0000000112ece4c8 != -1) {
        func_0x000107c61568(0x112ece4c8,FUN_1029444ac);
      }
      piVar14 = *(int **)(unaff_x22 + 0x68);
      func_0x000107c61428(0x112ece4d0,unaff_x22 + 0x10,0x21,0);
      func_0x000107c61434(puVar8);
      func_0x000100403b00(auStack_68,puVar4,puVar8);
      func_0x000107c614a8(unaff_x22 + 0x10);
      func_0x000107c6142c(uStack_60);
      func_0x000107c5d278(uVar6);
      iVar2 = *piVar14;
      plVar5 = (long *)(ulong)(uint)piVar14[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_10294688c;
                    /* WARNING: Could not recover jumptable at 0x000102946594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar14))(puVar4,puVar8);
      return;
    }
    lVar13 = 0x112dbf7a0;
    func_0x0001000285a8(0x112dbf7a0,&UNK_10d97ae50);
    iVar2 = *(int *)(lVar13 + 0x30);
    lVar13 = lVar11;
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
      lVar13 = *(long *)(unaff_x22 + 0x98);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar1 = *(long *)(unaff_x22 + 0x80);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x48);
    func_0x000103b6883c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                        0x6966697265766e75,0xea00000000006465);
    func_0x00010294a72c(uVar10,0x112dbf790,&UNK_10d97ae40);
    *puVar15 = 0x6966697265766e75;
    puVar15[1] = 0xea00000000006465;
    uVar10 = 0;
    FUN_102948bc0(0);
    func_0x000107c6159c(puVar15,uVar10,0);
    lVar7 = 0x112dbf7a8;
    func_0x0001000285a8(0x112dbf7a8,&UNK_10d97ae58);
    (**(code **)(*(long *)(lVar7 + -8) + 8))(lVar11 + iVar2,lVar7);
    pcVar9 = *(code **)(lVar1 + 8);
  }
  else {
    if (iVar2 == *(int *)PTR___s8StoreKit7ProductV14PurchaseResultO13userCancelledyA2EmFWC_110347d70
       ) {
      if (lRam0000000112ece4e0 != -1) {
        func_0x000107c61568(0x112ece4e0,0x102944470);
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
      func_0x000103b6883c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                          0x6e61635f72657375,0xee0064656c6c6563);
      uVar6 = 0;
      FUN_102948bc0(0);
      func_0x000107c6159c(uVar10,uVar6,3);
      goto LAB_1029467ac;
    }
    if (iVar2 == *(int *)PTR___s8StoreKit7ProductV14PurchaseResultO7pendingyA2EmFWC_110347d78) {
      if (lRam0000000112ece4e0 != -1) {
        func_0x000107c61568(0x112ece4e0,0x102944470);
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
      func_0x000103b688dc(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
      uVar6 = 0;
      FUN_102948bc0(0);
      func_0x000107c6159c(uVar10,uVar6,4);
      goto LAB_1029467ac;
    }
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
    }
    lVar11 = *(long *)(unaff_x22 + 0xb0);
    lVar13 = *(long *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x48);
    func_0x000103b6883c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                        0x6e776f6e6b6e75,0xe700000000000000);
    *puVar15 = 0x6e776f6e6b6e75;
    puVar15[1] = 0xe700000000000000;
    uVar10 = 0;
    FUN_102948bc0(0);
    func_0x000107c6159c(puVar15,uVar10,0);
    pcVar9 = *(code **)(lVar11 + 8);
  }
  (*pcVar9)(lVar13,uVar6);
LAB_1029467ac:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001029467f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10294688c; end: 1029468db;  */

void FUN_10294688c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xe8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029468dc,0,0);
  return;
}



/* Entry: 1029468dc; end: 102946ac3;  */

void FUN_1029468dc(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  if (*(int *)(unaff_x22 + 0xe8) != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c4b940(uVar6);
    func_0x000107c61428(0x112ece4d0,unaff_x22 + 0x28,0x21,0);
    uVar7 = uVar4;
    func_0x0001010af1e4(uVar5,uVar4);
    func_0x000107c614a8(unaff_x22 + 0x28);
    func_0x000107c6142c(uVar7);
    func_0x000107c5d278(uVar6);
    func_0x000107c6142c(uVar4);
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
    pcVar9 = *(code **)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar8 = *(long *)(unaff_x22 + 0x48);
    func_0x000103b6883c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),
                        0x5f646e656b636162,0xef6572756c696166);
    func_0x00010294a72c(uVar4,0x112dbf790,&UNK_10d97ae40);
    lVar2 = 0x112ece3b8;
    func_0x0001000285a8(0x112ece3b8,&UNK_10daf3f00);
    iVar1 = *(int *)(lVar2 + 0x30);
    (*pcVar9)(lVar8,uVar6,uVar7);
    *(undefined8 *)(lVar8 + iVar1) = uVar5;
    uVar4 = 0;
    FUN_102948bc0(0);
    func_0x000107c6159c(lVar8,uVar4,1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102946a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xd0));
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102946ac4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit11TransactionV6finishyyYaF_110347c30)();
  return;
}



/* Entry: 102946ac4; end: 102946b0b;  */

void FUN_102946ac4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102946b0c,0,0);
  return;
}



/* Entry: 102946b0c; end: 102946bf3;  */

void FUN_102946b0c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ece4e0 != -1) {
    func_0x000107c61568(0x112ece4e0,0x102944470);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000103b687d0(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  func_0x00010294a72c(uVar3,0x112dbf790,&UNK_10d97ae40);
  uVar2 = 0;
  FUN_102948bc0(0);
  func_0x000107c6159c(uVar5,uVar2,2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102946bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102946bf4; end: 102947467;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102946bf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long alStack_80 [4];
  
  lVar3 = 0;
  alStack_80[0] = param_4;
  func_0x000107c5efd0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  plVar14 = (long *)((long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  func_0x000107c5f890();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  plVar13 = (long *)((long)plVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pcVar10 = *(code **)(lVar15 + 0x10);
  (*pcVar10)(plVar13,param_2,lVar4);
  plVar5 = plVar13;
  (**(code **)(lVar15 + 0x58))(plVar13,lVar4);
  iVar2 = (int)plVar5;
  if (iVar2 == *(int *)
                PTR___s8StoreKit0aB5ErrorO07networkC0yAC10Foundation8URLErrorVcACmFWC_110347ae0) {
    (**(code **)(lVar15 + 0x60))(plVar13,lVar4);
    (**(code **)(lVar11 + 0x20))(plVar14,plVar13,lVar3);
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
    }
    func_0x000103b6883c(param_3,alStack_80[0],0x5f6b726f7774656e,0xed0000726f727265);
    alStack_80[2] = 0;
    alStack_80[3] = 0xe000000000000000;
    func_0x000107c602fc(0x11);
    func_0x000107c5fb78(0x5f6b726f7774656e,0xef203a726f727265);
    func_0x000107c603d0(plVar14,alStack_80 + 2,lVar3,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    *param_1 = alStack_80[2];
    param_1[1] = alStack_80[3];
    uVar6 = 0;
    FUN_102948bc0(0);
    func_0x000107c6159c(param_1,uVar6,0);
    pcVar10 = *(code **)(lVar11 + 8);
    plVar13 = plVar14;
    lVar4 = lVar3;
LAB_102946db8:
    (*pcVar10)(plVar13,lVar4);
    return;
  }
  if (iVar2 == *(int *)PTR___s8StoreKit0aB5ErrorO06systemC0yACs0C0_pcACmFWC_110347ad8) {
    (**(code **)(lVar15 + 0x60))(plVar13);
    lVar12 = *plVar13;
    lVar3 = lVar12;
    func_0x000107c5ed2c();
    lVar11 = lVar3;
    func_0x000107c42210();
    func_0x000107c61180();
    lVar15 = lVar11;
    func_0x000107c5faec();
    func_0x000107c61170(lVar11);
    alStack_80[2] = lVar15;
    alStack_80[3] = lVar4;
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    lVar4 = lVar3;
    func_0x000107c3fcb0();
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    alStack_80[1] = lVar4;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    lVar4 = alStack_80[3];
    lVar11 = alStack_80[2];
    lVar15 = alStack_80[3];
    func_0x000107c5fb1c(alStack_80[2],alStack_80[3]);
    func_0x000107c6142c(lVar4);
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
    }
    func_0x000107c61434(lVar15);
    func_0x000103b6883c(param_3,alStack_80[0],lVar11,lVar15);
    func_0x000107c6142c(lVar15);
    alStack_80[2] = 0;
    alStack_80[3] = 0xe000000000000000;
    func_0x000107c602fc(0x14);
    func_0x000107c5fb78(0x655f6d6574737973,0xed000028726f7272);
    func_0x000107c5fb78(lVar11,lVar15);
    func_0x000107c6142c(lVar15);
    func_0x000107c5fb78(0x203a29,0xe300000000000000);
    uVar6 = 0x112d393f0;
    alStack_80[1] = lVar12;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(alStack_80 + 1,alStack_80 + 2,uVar6,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c614ac(lVar12);
    func_0x000107c61170(lVar3);
LAB_102946f68:
    *param_1 = alStack_80[2];
    param_1[1] = alStack_80[3];
  }
  else {
    if (iVar2 != *(int *)PTR___s8StoreKit0aB5ErrorO7unknownyA2CmFWC_110347b08) {
      if (iVar2 == *(int *)PTR___s8StoreKit0aB5ErrorO13userCancelledyA2CmFWC_110347af8) {
        if (lRam0000000112ece4e0 != -1) {
          func_0x000107c61568(0x112ece4e0,0x102944470);
        }
        func_0x000103b6883c(param_3,alStack_80[0],0x6e61635f72657375,0xee0064656c6c6563);
        uVar6 = 0;
        FUN_102948bc0(0);
        uVar9 = 3;
        goto LAB_102946fe8;
      }
      if (iVar2 == *(int *)PTR___s8StoreKit0aB5ErrorO24notAvailableInStorefrontyA2CmFWC_110347b00) {
        if (lRam0000000112ece4e0 != -1) {
          func_0x000107c61568(0x112ece4e0,0x102944470);
        }
        func_0x000103b6883c(param_3,alStack_80[0],0xd00000000000001b,0x800000010f0cdbd0);
        alStack_80[2] = 0;
        alStack_80[3] = 0xe000000000000000;
        func_0x000107c602fc(0x3b);
        func_0x000107c5fb78(0xd00000000000001b,0x800000010f0cdbd0);
        pcVar1 = ": The product is not available in the current storefront.";
        uVar6 = 0xd000000000000039;
      }
      else {
        if ((PTR___s8StoreKit0aB5ErrorO11notEntitledyA2CmFWC_110347ae8 == (undefined *)0x0) ||
           (iVar2 != *(int *)PTR___s8StoreKit0aB5ErrorO11notEntitledyA2CmFWC_110347ae8)) {
          uVar6 = 0x112ece608;
          func_0x00010294a6ec(0x112ece608,PTR___s8StoreKit0aB5ErrorOMa_110347b10,
                              PTR___s8StoreKit0aB5ErrorOs0C0AAMc_110347b20);
          lVar3 = lVar4;
          func_0x000107c613f8(lVar4,uVar6,0,0);
          uVar9 = param_2;
          (*pcVar10)(uVar6,param_2,lVar4);
          lVar11 = lVar3;
          func_0x000107c5ed2c();
          func_0x000107c614ac(lVar3);
          alStack_80[2] = 0;
          alStack_80[3] = 0xe000000000000000;
          func_0x000107c602fc(0x14);
          func_0x000107c6142c(alStack_80[3]);
          alStack_80[2] = 0x74696b65726f7473;
          alStack_80[3] = 0xef5f726f7272655f;
          lVar3 = lVar11;
          func_0x000107c42210(lVar11);
          func_0x000107c61180();
          lVar12 = lVar3;
          func_0x000107c5faec();
          func_0x000107c61170(lVar3);
          func_0x000107c5fb78(lVar12,uVar9);
          func_0x000107c6142c(uVar9);
          func_0x000107c5fb78(0x5f,0xe100000000000000);
          lVar3 = lVar11;
          func_0x000107c3fcb0();
          puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          alStack_80[1] = lVar3;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar7);
          lVar3 = alStack_80[3];
          lVar12 = alStack_80[2];
          lVar8 = alStack_80[3];
          func_0x000107c5fb1c(alStack_80[2],alStack_80[3]);
          func_0x000107c6142c(lVar3);
          if (lRam0000000112ece4e0 != -1) {
            func_0x000107c61568(0x112ece4e0,0x102944470);
          }
          func_0x000107c61434(lVar8);
          func_0x000103b6883c(param_3,alStack_80[0],lVar12,lVar8);
          func_0x000107c6142c(lVar8);
          alStack_80[2] = 0;
          alStack_80[3] = 0xe000000000000000;
          func_0x000107c5fb78(lVar12,lVar8);
          func_0x000107c6142c(lVar8);
          func_0x000107c5fb78(0x203a,0xe200000000000000);
          func_0x000107c603d0(param_2,alStack_80 + 2,lVar4,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c61170(lVar11);
          *param_1 = alStack_80[2];
          param_1[1] = alStack_80[3];
          uVar6 = 0;
          FUN_102948bc0(0);
          func_0x000107c6159c(param_1,uVar6,0);
          pcVar10 = *(code **)(lVar15 + 8);
          goto LAB_102946db8;
        }
        if (lRam0000000112ece4e0 != -1) {
          func_0x000107c61568(0x112ece4e0,0x102944470);
        }
        func_0x000103b6883c(param_3,alStack_80[0],0x69746e655f746f6e,0xec00000064656c74);
        alStack_80[2] = 0;
        alStack_80[3] = 0xe000000000000000;
        func_0x000107c602fc(0x39);
        func_0x000107c5fb78(0x69746e655f746f6e,0xec00000064656c74);
        pcVar1 = ": The application is not entitled to perform the action";
        uVar6 = 0xd000000000000037;
      }
      func_0x000107c5fb78(uVar6,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
      goto LAB_102946f68;
    }
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
    }
    func_0x000103b6883c(param_3,alStack_80[0],0xd000000000000010,0x800000010f0cdbb0);
    *param_1 = 0xd000000000000010;
    param_1[1] = 0x800000010f0cdbb0;
  }
  uVar6 = 0;
  FUN_102948bc0(0);
  uVar9 = 0;
LAB_102946fe8:
  func_0x000107c6159c(param_1,uVar6,uVar9);
  return;
}



/* Entry: 102947468; end: 10294777f;  */

void FUN_102947468(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  char *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  ulong uStack_58;
  
  lVar2 = 0;
  func_0x000107c5f93c();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(lVar6,param_2,lVar2);
  lVar3 = lVar6;
  (**(code **)(lVar5 + 0x58))(lVar6,lVar2);
  iVar1 = (int)lVar3;
  if (iVar1 == *(int *)PTR___s8StoreKit7ProductV13PurchaseErrorO15invalidQuantityyA2EmFWC_110347cd8)
  {
    uVar7 = 0x800000010f0cde30;
    uVar8 = 0xd000000000000019;
    goto LAB_1029475ec;
  }
  if (iVar1 == *(int *)
                PTR___s8StoreKit7ProductV13PurchaseErrorO18productUnavailableyA2EmFWC_110347cf0) {
    pcVar4 = "purchase_product_unavailable";
LAB_102947548:
    uVar8 = 0xd00000000000001c;
    uVar7 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  }
  else {
    if (iVar1 == *(int *)
                  PTR___s8StoreKit7ProductV13PurchaseErrorO18purchaseNotAllowedyA2EmFWC_110347cf8) {
      uVar7 = 0x800000010f0cddf0;
      uVar8 = 0xd000000000000014;
      goto LAB_1029475ec;
    }
    if (iVar1 == *(int *)
                  PTR___s8StoreKit7ProductV13PurchaseErrorO18ineligibleForOfferyA2EmFWC_110347ce8) {
      uVar7 = 0x800000010f0cddd0;
      uVar8 = 0xd00000000000001d;
      goto LAB_1029475ec;
    }
    if (iVar1 == *(int *)
                  PTR___s8StoreKit7ProductV13PurchaseErrorO22invalidOfferIdentifieryA2EmFWC_110347d08
       ) {
      pcVar4 = "purchase_invalid_offer_identifier";
    }
    else {
      if (iVar1 == *(int *)
                    PTR___s8StoreKit7ProductV13PurchaseErrorO17invalidOfferPriceyA2EmFWC_110347ce0)
      {
        pcVar4 = "purchase_invalid_offer_price";
        goto LAB_102947548;
      }
      if (iVar1 == *(int *)
                    PTR___s8StoreKit7ProductV13PurchaseErrorO21invalidOfferSignatureyA2EmFWC_110347d00
         ) {
        uVar7 = 0x800000010f0cdd50;
        uVar8 = 0xd000000000000020;
        goto LAB_1029475ec;
      }
      if (iVar1 != *(int *)
                    PTR___s8StoreKit7ProductV13PurchaseErrorO22missingOfferParametersyA2EmFWC_110347d10
         ) {
        (**(code **)(lVar5 + 8))(lVar6,lVar2);
        uVar7 = 0xee00726f7272655f;
        uVar8 = 0x6573616863727570;
        goto LAB_1029475ec;
      }
      pcVar4 = "purchase_missing_offer_parameters";
    }
    uVar7 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    uVar8 = 0xd000000000000021;
  }
LAB_1029475ec:
  lVar3 = lRam0000000112ece4e0;
  func_0x000107c61434(uVar7);
  if (lVar3 != -1) {
    func_0x000107c61568(0x112ece4e0,0x102944470);
  }
  func_0x000103b6883c(param_3,param_4,uVar8,uVar7);
  func_0x000107c6142c(uVar7);
  uStack_60 = uVar8;
  uStack_58 = uVar7;
  func_0x000107c5fb78(0x203a,0xe200000000000000);
  uVar8 = 0x112ece610;
  func_0x00010294a6ec(0x112ece610,PTR___s8StoreKit7ProductV13PurchaseErrorOMa_110347d20,
                      PTR___s8StoreKit7ProductV13PurchaseErrorOs0E0AAMc_110347d30);
  func_0x000107c60640(lVar2,uVar8);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar8);
  *param_1 = uStack_60;
  param_1[1] = uStack_58;
  uVar8 = 0;
  FUN_102948bc0(0);
  func_0x000107c6159c(param_1,uVar8,0);
  return;
}



/* Entry: 102947780; end: 102947b1f;  */

void FUN_102947780(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_2;
  lVar4 = param_3;
  lVar2 = param_4;
  FUN_102948e30();
  if (lVar4 == 0) {
    lVar2 = param_2;
    func_0x000107c5ed2c();
    lVar1 = lVar2;
    func_0x000107c42210();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    lStack_70 = lVar3;
    lStack_68 = lVar4;
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    lVar1 = lVar2;
    func_0x000107c3fcb0();
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_78 = lVar1;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar7);
    lVar1 = lStack_68;
    lVar4 = lStack_70;
    lVar3 = lStack_68;
    func_0x000107c5fb1c(lStack_70,lStack_68);
    func_0x000107c6142c(lVar1);
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
    }
    func_0x000107c61434(lVar3);
    func_0x000103b6883c(param_3,param_4,lVar4,lVar3);
    func_0x000107c6142c(lVar3);
    lStack_70 = 0;
    lStack_68 = -0x2000000000000000;
    func_0x000107c5fb78(lVar4,lVar3);
    func_0x000107c6142c(lVar3);
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    uVar6 = 0x112d393f0;
    lStack_78 = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&lStack_78,&lStack_70,uVar6,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c61170(lVar2);
  }
  else {
    lVar3 = param_5;
    if (param_5 == 0) {
      func_0x000107c61434(lVar4);
      lVar2 = lVar1;
      lVar3 = lVar4;
    }
    uVar5 = 0;
    if (((lVar1 == 0x34313130303034) && (lVar4 == -0x1900000000000000)) ||
       (func_0x000107c605b8(0x34313130303034,0xe700000000000000,lVar1,lVar4,0), (uVar5 & 1) != 0)) {
      func_0x000107c6142c(lVar4);
      lVar1 = -0x7ffffffef0f323f0;
      lVar4 = -0x2fffffffffffffde;
    }
    else {
      uVar5 = 0;
      if (((lVar1 == 0x30313030343034) && (lVar4 == -0x1900000000000000)) ||
         (func_0x000107c605b8(0x30313030343034,0xe700000000000000,lVar1,lVar4,0), (uVar5 & 1) != 0))
      {
        func_0x000107c6142c(lVar4);
        lVar1 = -0x7ffffffef0f32410;
        lVar4 = -0x2fffffffffffffeb;
      }
      else {
        lStack_70 = 0;
        lStack_68 = 0xe000000000000000;
        func_0x000107c61434(param_5);
        func_0x000107c602fc(0x12);
        func_0x000107c6142c(lStack_68);
        lStack_70 = -0x2ffffffffffffff0;
        lStack_68 = -0x7ffffffef0f32380;
        func_0x000107c5fb78(lVar1,lVar4);
        func_0x000107c6142c(param_5);
        func_0x000107c6142c(lVar4);
        lVar1 = lStack_68;
        lVar4 = lStack_70;
      }
    }
    if (lRam0000000112ece4e0 != -1) {
      func_0x000107c61568(0x112ece4e0,0x102944470);
    }
    func_0x000107c61434(lVar1);
    func_0x000103b6883c(param_3,param_4,lVar4,lVar1);
    func_0x000107c6142c(lVar1);
    lStack_70 = lVar4;
    lStack_68 = lVar1;
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    func_0x000107c5fb78(lVar2,lVar3);
    func_0x000107c6142c(lVar3);
  }
  *param_1 = lStack_70;
  param_1[1] = lStack_68;
  uVar6 = 0;
  FUN_102948bc0(0);
  func_0x000107c6159c(param_1,uVar6,0);
  return;
}



/* Entry: 102947b20; end: 102947b27;  */

undefined8 FUN_102947b20(void)

{
  return 0;
}



/* Entry: 102947b28; end: 102947c43;  */

void FUN_102947b28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000107c5f918();
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  lVar1 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar1 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  lVar1 = 0;
  func_0x000107c5f8c0();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar1 = 0;
  func_0x000107c5f8b8();
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102947c44,0,0);
  return;
}



/* Entry: 102947c44; end: 102947fd7;  */

void FUN_102947c44(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  long *plVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte **ppbVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *pbStack_48;
  ulong uStack_40;
  
  pbVar15 = *(byte **)(unaff_x22 + 0x10);
  pbVar13 = *(byte **)(unaff_x22 + 0x18);
  pbVar12 = (byte *)((ulong)pbVar15 & 0xffffffffffff);
  pbVar14 = (byte *)((ulong)pbVar13 >> 0x38 & 0xf);
  pbVar19 = pbVar12;
  if (((ulong)pbVar13 & 0x2000000000000000) != 0) {
    pbVar19 = pbVar14;
  }
  if (pbVar19 == (byte *)0x0) goto LAB_102947eb4;
  if (((ulong)pbVar13 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar13 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar15 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar13 & 0xfffffffffffffff) + 0x20);
        pbVar13 = pbVar12;
      }
      if (*pbVar15 != 0x2b) {
        if (*pbVar15 != 0x2d) {
          if (pbVar13 == (byte *)0x0) goto LAB_102947eb4;
          pbVar19 = (byte *)0x0;
          pbVar14 = pbVar15;
          while (pbVar14 != (byte *)0x0) {
            if (((9 < *pbVar15 - 0x30) ||
                (auVar8._8_8_ = 0, auVar8._0_8_ = pbVar19, SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
               (uVar17 = (long)pbVar19 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
               pbVar19 = (byte *)(uVar17 + uVar1), CARRY8(uVar17,uVar1))) goto LAB_102947eb4;
            pbVar13 = pbVar13 + -1;
            pbVar15 = pbVar15 + 1;
            pbVar14 = pbVar13;
          }
          goto LAB_102947f10;
        }
        pbVar14 = pbVar13 + -1;
        if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x102947fcc);
          (*pcVar10)();
        }
        if (pbVar14 != (byte *)0x0) {
          pbVar19 = (byte *)0x0;
          do {
            pbVar15 = pbVar15 + 1;
            if (((9 < *pbVar15 - 0x30) ||
                (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar19, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
               (uVar17 = (long)pbVar19 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
               pbVar19 = (byte *)(uVar17 - uVar1), uVar17 < uVar1)) goto LAB_102947eb4;
            pbVar14 = pbVar14 + -1;
          } while (pbVar14 != (byte *)0x0);
          goto LAB_102947f10;
        }
        goto LAB_102947eb4;
      }
      pbVar14 = pbVar13 + -1;
      if ((long)pbVar13 < 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102947fd4);
        (*pcVar10)();
      }
      if (pbVar14 == (byte *)0x0) goto LAB_102947eb4;
      pbVar19 = (byte *)0x0;
      do {
        pbVar15 = pbVar15 + 1;
        if (((9 < *pbVar15 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar19, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar17 = (long)pbVar19 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
           pbVar19 = (byte *)(uVar17 + uVar1), CARRY8(uVar17,uVar1))) goto LAB_102947eb4;
        pbVar14 = pbVar14 + -1;
      } while (pbVar14 != (byte *)0x0);
      goto LAB_102947f10;
    }
    pbStack_48 = pbVar15;
    uStack_40 = (ulong)pbVar13 & 0xffffffffffffff;
    uVar18 = (uint)pbVar15 & 0xff;
    if (uVar18 == 0x2b) {
      if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102947fd8);
        (*pcVar10)();
      }
      pbVar14 = pbVar14 + -1;
      if (pbVar14 == (byte *)0x0) goto LAB_102947ea0;
      pbVar19 = (byte *)0x0;
      pbVar15 = (byte *)((ulong)&pbStack_48 | 1);
      do {
        if (((9 < *pbVar15 - 0x30) ||
            (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar19, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
           (uVar17 = (long)pbVar19 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
           pbVar19 = (byte *)(uVar17 + uVar1), CARRY8(uVar17,uVar1))) goto LAB_102947ea0;
        uVar18 = 0;
        pbVar14 = pbVar14 + -1;
        pbVar15 = pbVar15 + 1;
      } while (pbVar14 != (byte *)0x0);
    }
    else if (uVar18 == 0x2d) {
      if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x102947fd0);
        (*pcVar10)();
      }
      pbVar14 = pbVar14 + -1;
      if (pbVar14 == (byte *)0x0) {
LAB_102947ea0:
        uVar18 = 1;
        pbVar19 = (byte *)0x0;
      }
      else {
        pbVar19 = (byte *)0x0;
        pbVar15 = (byte *)((ulong)&pbStack_48 | 1);
        do {
          if (((9 < *pbVar15 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar19, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar17 = (long)pbVar19 * 10, uVar1 = (ulong)(byte)(*pbVar15 - 0x30),
             pbVar19 = (byte *)(uVar17 - uVar1), uVar17 < uVar1)) goto LAB_102947ea0;
          uVar18 = 0;
          pbVar14 = pbVar14 + -1;
          pbVar15 = pbVar15 + 1;
        } while (pbVar14 != (byte *)0x0);
      }
    }
    else {
      if (pbVar14 == (byte *)0x0) goto LAB_102947ea0;
      pbVar19 = (byte *)0x0;
      ppbVar16 = &pbStack_48;
      do {
        if (((9 < *(byte *)ppbVar16 - 0x30) ||
            (auVar9._8_8_ = 0, auVar9._0_8_ = pbVar19, SUB168(auVar9 * ZEXT816(10),8) != 0)) ||
           (uVar17 = (long)pbVar19 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar16 - 0x30),
           pbVar19 = (byte *)(uVar17 + uVar1), CARRY8(uVar17,uVar1))) goto LAB_102947ea0;
        uVar18 = 0;
        pbVar14 = pbVar14 + -1;
        ppbVar16 = (byte **)((long)ppbVar16 + 1);
      } while (pbVar14 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(pbVar13);
    pbVar19 = pbVar13;
    func_0x000100f5015c(pbVar15,pbVar13,10);
    uVar18 = (uint)pbVar19;
    func_0x000107c6142c(pbVar13);
    pbVar19 = pbVar15;
  }
  if ((uVar18 & 0xff) == 1) {
LAB_102947eb4:
    uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c615c0(uVar21);
    func_0x000107c615c0(uVar20);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar22);
    func_0x000107c615c0(uVar23);
                    /* WARNING: Could not recover jumptable at 0x000102947f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_102947f10:
  *(byte **)(unaff_x22 + 0x90) = pbVar19;
  uVar20 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5f8f8(uVar3);
  func_0x000107c5f8bc(uVar20);
  (**(code **)(lVar2 + 8))(uVar3,uVar21);
  plVar11 = (long *)(ulong)*(uint *)(
                                    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                    + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_102947fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
  )(plVar11,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102947fd8; end: 10294801f;  */

void FUN_102947fd8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102948020,0,0);
  return;
}



/* Entry: 102948020; end: 10294820f;  */

void FUN_102948020(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = uVar4;
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x30))(uVar4,1,uVar1);
  if ((int)uVar7 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001029480c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar9 = (undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *puVar9;
  puVar10 = (undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *puVar10;
  func_0x000101718fc4(uVar4,uVar6);
  FUN_10294a6a4(uVar6,uVar7,0x112dbf790,&UNK_10d97ae40);
  func_0x000107c614c4(uVar7,uVar1);
  if ((int)uVar7 == 1) {
    lVar5 = *(long *)(unaff_x22 + 0x90);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x20))
              (lVar2,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x20));
    func_0x000107c5f8f4();
    if (lVar2 == lVar5) {
      plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102948210;
                    /* WARNING: Could not recover jumptable at 0x00010bdb719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___s8StoreKit11TransactionV6finishyyYaF_110347c30)();
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x28) + 8))
              (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x20));
    puVar10 = puVar9;
  }
  else {
    func_0x00010294a72c(*puVar9,0x112dbf790,&UNK_10d97ae40);
  }
  func_0x00010294a72c(*puVar10,0x112dbf790,&UNK_10d97ae40);
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102947fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
  )(plVar3,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102948210; end: 102948257;  */

void FUN_102948210(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102948258,0,0);
  return;
}



/* Entry: 102948258; end: 10294830b;  */

void FUN_102948258(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 8))
            (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x20));
  func_0x00010294a72c(uVar2,0x112dbf790,&UNK_10d97ae40);
  (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
            (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102948308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10294830c; end: 1029484e7;  */

/* WARNING: Removing unreachable block (ram,0x000102948374) */

undefined1  [16] FUN_10294830c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lStack_38;
  
  uVar1 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  uVar2 = uVar1;
  FUN_102949660();
  func_0x000107c5eb1c(&lStack_38,&UNK_1105701a8,param_1,param_2,&UNK_1105701a8,uVar2);
  if ((lStack_38 == 0) || (lStack_38 == 1)) {
    func_0x000107c61574(uVar1);
  }
  else {
    if (*(long *)(lStack_38 + 0x10) != 0) {
      uVar2 = *(undefined8 *)(lStack_38 + 0x20);
      uVar3 = *(undefined8 *)(lStack_38 + 0x28);
      func_0x000107c61434(uVar3);
      func_0x000107c61574(uVar1);
      FUN_1029496a0(lStack_38);
      goto LAB_10294838c;
    }
    func_0x000107c61574(uVar1);
    FUN_1029496a0(lStack_38);
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_10294838c:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1029484e8; end: 1029484ff;  */

undefined8 FUN_1029484e8(void)

{
  return 1;
}



/* Entry: 102948500; end: 102948583;  */

void FUN_102948500(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x554b53 && param_3 == -0x1d00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x53;
    func_0x000107c605b8(0x554b53,0xe300000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102948584; end: 10294858f;  */

undefined1  [16] FUN_102948584(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102948590; end: 1029485df;  */

void FUN_102948590(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010294ab2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1029485e0; end: 102948613;  */

void FUN_1029485e0(void)

{
  FUN_102948a2c();
  return;
}



/* Entry: 102948614; end: 10294862f;  */

undefined8 FUN_102948614(void)

{
  return 1;
}



/* Entry: 102948630; end: 1029486af;  */

void FUN_102948630(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x69;
  if (param_2 == 0x736d657469 && param_3 == -0x1b00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x736d657469,0xe500000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1029486b0; end: 1029486bb;  */

undefined1  [16] FUN_1029486b0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1029486bc; end: 10294870b;  */

void FUN_1029486bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010294a5b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10294870c; end: 102948733;  */

void FUN_10294870c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10294a298();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102948734; end: 102948757;  */

undefined8 FUN_102948734(void)

{
  return 1;
}



/* Entry: 102948758; end: 1029487e7;  */

void FUN_102948758(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if ((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef1049f50)) {
    func_0x000107c6142c(0x800000010efb60b0);
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    func_0x000107c605b8(0xd000000000000014,0x800000010efb60b0,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1029487e8; end: 1029487f3;  */

undefined1  [16] FUN_1029487e8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1029487f4; end: 102948843;  */

void FUN_1029487f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10294a4f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102948844; end: 10294886b;  */

void FUN_102948844(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10294a3d0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10294886c; end: 102948873;  */

undefined8 FUN_10294886c(void)

{
  return 1;
}



/* Entry: 102948874; end: 1029488ef;  */

void FUN_102948874(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1029488f0; end: 10294890b;  */

undefined1  [16] FUN_1029488f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f0cdee0;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 10294890c; end: 10294899b;  */

void FUN_10294890c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if ((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef0f32120)) {
    func_0x000107c6142c(0x800000010f0cdee0);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x11;
    func_0x000107c605b8(0xd000000000000011,0x800000010f0cdee0,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10294899c; end: 1029489a7;  */

undefined1  [16] FUN_10294899c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1029489a8; end: 1029489f7;  */

void FUN_1029489a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010294a574();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1029489f8; end: 102948a2b;  */

void FUN_1029489f8(void)

{
  FUN_102948a2c();
  return;
}



/* Entry: 102948a2c; end: 102948b5b;  */

/* WARNING: Removing unreachable block (ram,0x000102948af8) */

void FUN_102948a2c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  
  puStack_68 = param_1;
  func_0x0001000285a8(param_5,param_6);
  lVar5 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  (*param_7)();
  func_0x000107c606e0(auStack_70 + -extraout_x8,param_8,param_8,lVar4,uVar1,uVar2);
  puVar3 = puStack_68;
  if (unaff_x21 == 0) {
    lVar4 = param_5;
    func_0x000107c604d4();
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,param_5);
    func_0x0001000834e4(param_2);
    *puVar3 = param_8;
    puVar3[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102948b5c; end: 102948bbf;  */

ulong FUN_102948b5c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (0xe < uVar1) {
    uVar1 = 0xf;
  }
  return uVar1;
}



/* Entry: 102948bc0; end: 102948bf7;  */

void FUN_102948bc0(undefined8 param_1)

{
  if (lRam0000000112ece580 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ff900);
  return;
}


