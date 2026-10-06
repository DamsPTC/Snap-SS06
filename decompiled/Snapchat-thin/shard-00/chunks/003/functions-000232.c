/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100557ddc; end: 100557e43;  */

void FUN_100557ddc(long param_1,long param_2)

{
  long extraout_x8;
  
  func_0x00010045694c();
  *(undefined8 *)(param_1 + *(long *)(extraout_x8 + -0x18)) = *(undefined8 *)(param_2 + 0x18);
  FUN_1004569d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev_110346420)();
  return;
}



/* Entry: 100557e44; end: 10055801b;  */

long FUN_100557e44(long *param_1,long *param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  uint uVar2;
  long *plVar3;
  long *plVar5;
  long lVar6;
  long *unaff_x21;
  undefined1 auStack_b8 [128];
  undefined8 uStack_38;
  undefined1 *puVar4;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  if (param_1[0xf] == 0) {
LAB_100557e88:
    lVar6 = 0;
  }
  else {
    if (param_1[0x10] == 0) goto LAB_100558018;
    if ((*(uint *)((long)param_1 + 0x18c) >> 4 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x18c) >> 3 & 1) == 0) goto LAB_100557e88;
      puVar4 = auStack_b8;
      func_0x0001006255a0(puVar4,param_1 + 0x21);
      uVar2 = (uint)puVar4;
      in_ZR = *(char *)((long)param_1 + 0x192) == '\x01';
      if ((bool)in_ZR) {
        bVar1 = false;
        lVar6 = param_1[4] - param_1[3];
      }
      else {
        func_0x000105344f94();
        lVar6 = param_1[10] - param_1[9];
        in_ZR = uVar2 == 1;
        if ((int)uVar2 < 1) {
          in_ZR = param_1[3] == param_1[4];
          if ((bool)in_ZR) {
            bVar1 = false;
          }
          else {
            plVar5 = (long *)param_1[0x10];
            (**(code **)(*plVar5 + 0x40))
                      (plVar5,auStack_b8,param_1[8],param_1[9],param_1[3] - param_1[2]);
            lVar6 = (lVar6 + param_1[9]) - (param_1[8] + (long)(int)plVar5);
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
          lVar6 = lVar6 + (param_1[4] - param_1[3]) * (ulong)uVar2;
        }
      }
      plVar5 = (long *)param_1[0xf];
      param_2 = (long *)-lVar6;
      func_0x000107c60fe0(plVar5,param_2,1);
      if ((int)plVar5 == 0) {
        if (bVar1) {
          plVar5 = param_1 + 0x11;
          param_2 = (long *)auStack_b8;
          func_0x0001006255a0();
        }
        lVar6 = 0;
        param_1[9] = param_1[8];
        param_1[10] = param_1[8];
        *(undefined4 *)((long)param_1 + 0x18c) = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        goto LAB_100557fc8;
      }
    }
    else {
      if (param_1[6] != param_1[5]) {
        lVar6 = 0xffffffff;
        param_2 = (long *)0xffffffff;
        (**(code **)(*param_1 + 0x68))();
        in_ZR = 1;
        if ((int)plVar5 == -1) goto LAB_100557fc8;
      }
      do {
        plVar3 = (long *)param_1[0x10];
        param_2 = param_1 + 0x11;
        (**(code **)(*plVar3 + 0x28))();
        plVar5 = plVar3;
        FUN_100628890();
        func_0x0001006288a4();
        in_ZR = plVar5 == unaff_x21;
        if (!(bool)in_ZR) goto LAB_100557fc4;
      } while ((int)plVar3 == 1);
      in_ZR = (int)plVar3 == 2;
      if (!(bool)in_ZR) {
        plVar5 = (long *)param_1[0xf];
        func_0x000107c60fbc();
        if ((int)plVar5 == 0) goto LAB_100557e88;
      }
    }
LAB_100557fc4:
    lVar6 = 0xffffffff;
  }
LAB_100557fc8:
  func_0x0001000dedf4();
  if ((bool)in_ZR) {
    return lVar6;
  }
  func_0x000107c60e78();
LAB_100558018:
  func_0x000105344dc4();
  lVar6 = *plVar5;
  *plVar5 = (long)param_2;
  if (lVar6 != 0) {
    (*(code *)plVar5[1])();
  }
  return lVar6;
}



/* Entry: 10055801c; end: 100558047;  */

void FUN_10055801c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return;
}



/* Entry: 100558048; end: 10055806b;  */

undefined8 FUN_100558048(undefined8 param_1)

{
  FUN_10055801c(param_1,0);
  return param_1;
}



/* Entry: 10055806c; end: 100558073;  */

void FUN_10055806c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x000001e0);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 100558074; end: 100558143;  */

uint FUN_100558074(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long unaff_x22;
  undefined1 auStack_78 [72];
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
LAB_1005580c8:
    if (*(long *)(param_1 + 8) != 0) {
      FUN_100558144();
      FUN_1004a60f0();
      lVar3 = 8;
      if (unaff_x22 != 0) {
        lVar3 = 0x38;
      }
      func_0x0001004a626c();
      func_0x0001004a6274();
      plVar4 = *(long **)(param_1 + lVar3);
      (**(code **)(*plVar4 + 0x38))(plVar4,auStack_78);
      uVar2 = (uint)plVar4;
      uVar5 = uVar2 >> 8 & 0xff;
      func_0x0001004a6264();
      goto LAB_10055811c;
    }
  }
  else {
    FUN_1004a6058(lVar3,param_2);
    iVar1 = (int)lVar3;
    if (iVar1 == 0) goto LAB_1005580c8;
    func_0x000107c33f10();
    if (iVar1 != 0) {
      func_0x000107c29de4(param_1,param_2);
      uVar2 = (uint)param_1 & 0xffff;
      uVar5 = uVar2 >> 8;
      goto LAB_10055811c;
    }
  }
  uVar5 = 0;
  uVar2 = 0;
LAB_10055811c:
  if ((uVar5 & 1) != 0) {
    param_3 = uVar2;
  }
  return param_3 & 1;
}



/* Entry: 100558144; end: 100558153;  */

void FUN_100558144(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (&stack0x00000020);
  return;
}



/* Entry: 100558154; end: 1005581df; -[SCCircumstanceEngineConfigProvider getBooleanValue:] */

void FUN_100558154(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if (lVar1 == 0xc) {
    lVar1 = param_3;
    func_0x000107c4a8c4(param_3);
    func_0x000107c61180();
    func_0x000107c3ebd8(param_1,param_2,lVar1,0);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    param_1 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1005581e0; end: 1005581fb;  */

void FUN_1005581e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_setValue_forKey__112665ab0,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1005581fc; end: 10055823b;  */

void FUN_1005581fc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1004b4eb0(param_1);
  (*(code *)*param_2)(param_2);
  if ((char)param_1[2] == '\x01') {
    plVar1 = param_1;
    func_0x000100552990();
    *param_1 = *param_1 + (long)plVar1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 10055823c; end: 1005582a3;  */

void FUN_10055823c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_10007847c(auStack_38,&UNK_10f4d57e5);
  FUN_1005582a4(&uStack_40,**(undefined8 **)(param_1 + 0x18));
  lVar1 = *(long *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = uStack_40;
  if (lVar1 != 0) {
    func_0x000107c34440();
  }
  FUN_100078bd8(auStack_38);
  return;
}



/* Entry: 1005582a4; end: 1005582af;  */

/* WARNING: Removing unreachable block (ram,0x000100558340) */
/* WARNING: Removing unreachable block (ram,0x000100558334) */
/* WARNING: Removing unreachable block (ram,0x00010055835c) */

void FUN_1005582a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)0x1a8;
  func_0x000107c60e20();
  FUN_1005583c4(auStack_58);
  func_0x0001005583cc();
  FUN_10045e284();
  FUN_1005e33c0();
  *puVar1 = &PTR_DAT_110a7cb38;
  *param_1 = puVar1;
  return;
}



/* Entry: 1005582b0; end: 1005583c3;  */

void FUN_1005582b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)0x1a8;
  func_0x000107c60e20();
  FUN_1005583c4(auStack_58);
  func_0x0001005583cc();
  FUN_10045e284();
  FUN_1005e33c0();
  *puVar1 = &PTR_DAT_110a7cb38;
  *param_1 = puVar1;
  return;
}



/* Entry: 1005583c4; end: 1005583d7;  */

void FUN_1005583c4(void)

{
  undefined8 unaff_x23;
  
  func_0x00010002b82c();
  func_0x000107c613d0(unaff_x23);
  func_0x000107c60c50();
  return;
}



/* Entry: 1005583d8; end: 100558407; -[SCDocObjectFetchedResult countByEnumeratingWithState:objects:count:] */

long FUN_1005583d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*param_3 != 0) {
    return 0;
  }
  param_3[2] = (long)(param_3 + 3);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_3 = 1;
  param_3[1] = lVar1;
  return lVar2 - lVar1 >> 3;
}



/* Entry: 100558408; end: 10055857f; -[SCCustomStoriesDataSyncer customStoryMetadataDidUpdateWithCustomStoryIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100558408(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  long lVar6;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          func_0x000107c61128(param_3);
        }
        unaff_x22 = *(undefined8 *)(lStack_128 + lVar6 * 8);
        lVar2 = *(long *)(param_1 + 0x10);
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x0001084dc184();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c43638();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar2);
        lVar3 = lVar4;
        func_0x000107c5d0f0();
        if (lVar3 == 10) {
          func_0x000107c4fa94(*(undefined8 *)(param_1 + 0x98));
        }
        func_0x000107c61170(lVar4);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x000107c4080c();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  lVar5 = param_3;
  func_0x000107c41df4(*(undefined8 *)(param_1 + 0x48));
  lVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_100558580;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5fc54(lVar5,PTR___sSSN_11034da80);
  }
  lStack_168 = lVar5;
  func_0x000107c61174();
  func_0x000107c5f1ec(&lStack_168);
  func_0x000107c61170(lVar1);
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 100558580; end: 100558603; -[SCCustomStoriesUpdateListenerAnnouncer didUpdateCustomStoriesWithPublicationIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100558580(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  }
  lStack_38 = param_3;
  func_0x000107c61174();
  func_0x000107c5f1ec(&lStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 100558604; end: 100558767;  */

void FUN_100558604(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_100558768();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c3cc58(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61144(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar1 = uVar3;
  func_0x000107c4da54();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100558768; end: 10055883f;  */

void FUN_100558768(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126d8ff0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  func_0x000107c61180();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100558840; end: 10055887f;  */

void FUN_100558840(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a73d70;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 100558880; end: 1005588ff;  */

long FUN_100558880(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000100558874();
  func_0x0001005588a4();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100558900; end: 10055890b;  */

void FUN_100558900(undefined8 *param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100558908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(unaff_x20 + 8);
  return;
}



/* Entry: 10055890c; end: 10055895b;  */

long FUN_10055890c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10055895c; end: 1005589b3;  */

void FUN_10055895c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x70);
  return;
}



/* Entry: 1005589b4; end: 1005589fb;  */

void FUN_1005589b4(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1005589fc; end: 100558a5b;  */

void FUN_1005589fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  return;
}



/* Entry: 100558a5c; end: 100558a87;  */

bool FUN_100558a5c(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  func_0x0001004b538c(param_1,&uStack_14);
  return param_1 != 0;
}



/* Entry: 100558a88; end: 100558acb;  */

undefined1 * FUN_100558a88(long *param_1,undefined4 param_2)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (FUN_100558a5c(), (int)lVar3 != 0)) {
    lVar3 = *param_1;
    ppcVar2 = &pcStack_40;
    uStack_24 = param_2;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      FUN_10054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (FUN_10054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        FUN_10054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x1;
}



/* Entry: 100558acc; end: 100558adb;  */

void FUN_100558acc(void)

{
  return;
}



/* Entry: 100558adc; end: 100558ae7; +[SCStoriesPendingCustomStoryMetadata table] */

undefined * FUN_100558adc(void)

{
  return &UNK_10f4a1f68;
}



/* Entry: 100558ae8; end: 100558b0b;  */

void FUN_100558ae8(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100558b0c; end: 100558b17;  */

undefined8 FUN_100558b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100558b18; end: 100558b3b;  */

void FUN_100558b18(long param_1)

{
  FUN_100558b0c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100558b3c; end: 100558b5b;  */

void FUN_100558b3c(void)

{
  return;
}



/* Entry: 100558b5c; end: 100558b7f;  */

void FUN_100558b5c(long param_1)

{
  func_0x00010054e7b4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100558b80; end: 100558bb3;  */

undefined1 * FUN_100558b80(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0x20;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      FUN_10054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (FUN_10054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        FUN_10054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 100558bb4; end: 100558bff;  */

long FUN_100558bb4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100558c00; end: 100558c5b;  */

void FUN_100558c00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 100558c5c; end: 10055906f;  */

void FUN_100558c5c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                  long *param_13)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  if ((((*(char *)(param_8 + 0x28) == '\x01') && ((*(byte *)(param_8 + 0x10) & 1) != 0)) &&
      (lVar10 = *param_5, lVar10 != 0)) && (*param_13 != 0)) {
    lVar11 = param_5[1];
    puVar6 = (undefined8 *)0x30;
    func_0x000107c60e20();
    plVar12 = puVar6 + 1;
    *plVar12 = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110a73998;
    puVar9 = puVar6 + 3;
    *puVar9 = &PTR_DAT_110a739e8;
    puVar6[4] = lVar10;
    puVar6[5] = lVar11;
    if (lVar11 != 0) {
      do {
        func_0x000107c3376c();
      } while (extraout_w10 != 0);
    }
    puVar8 = (undefined8 *)*param_12;
    lVar10 = param_12[1];
    puStack_f0 = puVar8;
    lStack_e8 = lVar10;
    puStack_d0 = puVar9;
    puStack_c8 = puVar6;
    if (lVar10 != 0) {
      do {
        func_0x000107c3376c();
      } while (extraout_w10_00 != 0);
    }
    FUN_10002b838(&uStack_108,"MDP_CODEC_DOWNLOAD_BLOCK");
    puStack_f0 = (undefined8 *)0x0;
    lStack_e8 = 0;
    uStack_130 = uStack_100;
    uStack_138 = uStack_108;
    uStack_128 = uStack_f8;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_120 = uStack_120 & 0xffffffffff000000;
    puVar7 = (undefined8 *)0xa8;
    puStack_148 = puVar8;
    lStack_140 = lVar10;
    func_0x000107c60e20();
    plVar13 = puVar7 + 1;
    *plVar13 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110a73a90;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar2 = puVar7 + 3;
    puStack_c0 = puVar8;
    puStack_b8 = (undefined8 *)lVar10;
    puStack_80 = puVar9;
    puStack_78 = puVar6;
    func_0x000107c33768(&puStack_148);
    uStack_98 = CONCAT53(uStack_98._3_5_,*(undefined3 *)(extraout_x8 + 0x28));
    func_0x000107c29788(puVar2,&puStack_80,param_9,&puStack_c0,param_13);
    FUN_1005557d8(&puStack_c0);
    func_0x000107c2978c(&puStack_80);
    puStack_e0 = puVar2;
    puStack_d8 = puVar7;
    FUN_1005557d8(&puStack_148);
    func_0x000107c60ca0(&uStack_108);
    FUN_10054f94c(&puStack_f0);
    puVar6 = (undefined8 *)*param_12;
    lVar10 = param_12[1];
    puStack_158 = puVar6;
    lStack_150 = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x000107c3376c();
      } while (extraout_w10_01 != 0);
    }
    FUN_10002b838(&uStack_170,&UNK_10f4bc435);
    uStack_128 = uStack_160;
    puStack_158 = (undefined8 *)0x0;
    lStack_150 = 0;
    uStack_130 = uStack_168;
    uStack_138 = uStack_170;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    puStack_148 = puVar6;
    lStack_140 = lVar10;
    func_0x000107c60ca0(&uStack_170);
    FUN_10054f94c(&puStack_158);
    puVar8 = (undefined8 *)0x150;
    func_0x000107c60e20();
    plVar12 = puVar8 + 1;
    *plVar12 = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_110a73ae0;
    puVar9 = puVar8 + 3;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puStack_c0 = puVar6;
    puStack_b8 = (undefined8 *)lVar10;
    puStack_80 = puVar2;
    puStack_78 = puVar7;
    func_0x000107c33768(&puStack_148);
    uStack_90 = *(undefined8 *)(extraout_x8_00 + 0x30);
    uStack_98 = *(undefined8 *)(extraout_x8_00 + 0x28);
    uStack_88 = *(undefined1 *)(extraout_x8_00 + 0x38);
    func_0x000107c29774(puVar9,param_2,param_3,param_4,&puStack_80,param_6,param_7,param_9,param_13,
                        &puStack_c0);
    FUN_10055aeac(&puStack_c0);
    func_0x000107c29780(&puStack_80);
    pauVar1 = (undefined1 (*) [12])(param_8 + 0x14);
    uVar14 = (undefined4)((ulong)*(undefined8 *)(param_8 + 0x1c) >> 0x20);
    auVar15._12_4_ = uVar14;
    auVar15._0_12_ = *pauVar1;
    auVar5._12_4_ = uVar14;
    auVar5._0_12_ = *pauVar1;
    auVar15 = NEON_ext(auVar15,auVar5,0xc,1);
    puStack_78 = (undefined8 *)CONCAT44(auVar15._8_4_,SUB124(*pauVar1,8));
    puStack_80 = (undefined8 *)CONCAT44(auVar15._0_4_,SUB124(*pauVar1,0));
    puVar6 = (undefined8 *)0x190;
    puStack_180 = puVar9;
    puStack_178 = puVar8;
    func_0x000107c60e20();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110a73b30;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puStack_c0 = puVar9;
    puStack_b8 = puVar8;
    func_0x000107c29768(puVar6 + 3,param_3,&puStack_c0,&puStack_80,param_4,param_9,param_10,param_11
                       );
    func_0x000107c2976c(&puStack_c0);
    *param_1 = (long)(puVar6 + 3);
    param_1[1] = (long)puVar6;
    func_0x000107c29af8(&puStack_180);
    FUN_10055aeac(&puStack_148);
    func_0x000107c29af4(&puStack_e0);
    func_0x000107c29af0(&puStack_d0);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



/* Entry: 100559070; end: 100559097;  */

long FUN_100559070(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100559098; end: 10055909f;  */

void FUN_100559098(void)

{
  return;
}



/* Entry: 1005590a0; end: 1005590c7;  */

long FUN_1005590a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1005590c8; end: 1005590cf;  */

void FUN_1005590c8(void)

{
  return;
}



/* Entry: 1005590d0; end: 100559117;  */

void FUN_1005590d0(long param_1)

{
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100559118; end: 100559137;  */

void FUN_100559118(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c305fc();
  }
  return;
}



/* Entry: 100559138; end: 10055919f; -[SCCustomStoriesObserver _updatePendingCustomStoryMetadataDictionaryWithFetchedResult:] */

/* WARNING: Possible PIC construction at 0x00010055917c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100559180) */

void FUN_100559138(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_10050471c(param_3,&PTR___NSConcreteGlobalBlock_110a190a0,
                &PTR___NSConcreteGlobalBlock_110a190e0);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005591a0; end: 1005591b3;  */

undefined1 * FUN_1005591a0(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0x58;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      FUN_10054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (FUN_10054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        FUN_10054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 1005591b4; end: 100559cab;  */

undefined8 *
FUN_1005591b4(long param_1,undefined8 *param_2,long *param_3,ulong param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 in_register_00005008;
  undefined8 uVar15;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long lStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined2 uStack_4c0;
  undefined1 uStack_4be;
  long lStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined2 uStack_490;
  undefined1 uStack_48e;
  undefined1 uStack_488;
  undefined1 auStack_480 [24];
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 uStack_410;
  undefined7 uStack_40f;
  undefined1 uStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined2 uStack_338;
  undefined1 uStack_336;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined2 uStack_308;
  undefined1 uStack_306;
  undefined1 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined2 uStack_2c8;
  undefined1 uStack_2c6;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined2 uStack_298;
  undefined1 uStack_296;
  undefined1 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined2 uStack_258;
  undefined1 uStack_256;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined2 uStack_228;
  undefined1 uStack_226;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined2 uStack_1c8;
  undefined1 uStack_1c6;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined1 uStack_196;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  undefined1 uStack_166;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined1 uStack_106;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puVar9;
  
  uVar6 = param_4;
  FUN_1005591a0();
  uVar7 = param_4;
  FUN_100559cac();
  uVar8 = param_4;
  FUN_100559d4c();
  FUN_100559d7c();
  if ((int)param_4 == 0) {
    lVar11 = 0;
  }
  else {
    plVar12 = (long *)*param_3;
    FUN_10002b838(&lStack_100,&UNK_10f4b22c4);
    uVar10 = 0;
    (**(code **)(*plVar12 + 0x18))();
    func_0x000107c60ca0(&lStack_100);
    lVar11 = (long)plVar12 * 60000;
    if ((uVar10 & 1) == 0) {
      lVar11 = 0;
    }
  }
  func_0x000100559d90();
  lStack_140 = param_1;
  uStack_138 = in_register_00005008;
  if (extraout_x8 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10 != 0);
  }
  FUN_10002b838(&uStack_158,&UNK_10f4b215b);
  lStack_f8 = uStack_138;
  lStack_100 = lStack_140;
  uStack_e0 = uStack_148;
  uStack_e8 = uStack_150;
  uStack_f0 = uStack_158;
  uStack_138 = 0;
  lStack_140 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  uStack_108 = 0;
  uStack_106 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_d6 = 0;
  uStack_d8 = 0;
  uStack_d0 = 1;
  plVar12 = (long *)*param_3;
  puVar9 = &uStack_190;
  FUN_10002b838(puVar9,&UNK_10f4b22f9);
  uVar3 = SUB81(puVar9,0);
  func_0x000100559dac(*(undefined8 *)(*plVar12 + 0x10));
  func_0x000107c60ca0(&uStack_190);
  FUN_10055a714(&uStack_1c0,param_3);
  uVar15 = uStack_1b8;
  uVar14 = uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_188 = uVar15;
  uStack_190 = uVar14;
  uStack_178 = uStack_1a8;
  uStack_180 = uStack_1b0;
  uStack_170 = uStack_1a0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_168 = uStack_198;
  uStack_166 = uStack_196;
  uStack_160 = 1;
  func_0x000100559d90();
  uStack_200 = uVar14;
  uStack_1f8 = uVar15;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_00 != 0);
  }
  FUN_10002b838(&uStack_218,&UNK_10f4b2192);
  uStack_1e8 = uStack_1f8;
  uStack_1f0 = uStack_200;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1d8 = uStack_210;
  uStack_1e0 = uStack_218;
  uStack_1d0 = uStack_208;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_208 = 0;
  uStack_1c8 = 1;
  uStack_1c6 = 0;
  plVar12 = (long *)*param_3;
  puVar9 = &uStack_250;
  FUN_10002b838(puVar9,&UNK_10f4b231c);
  uVar4 = SUB81(puVar9,0);
  func_0x000100559dac(*(undefined8 *)(*plVar12 + 0x10));
  FUN_10055a8f8();
  plVar12 = (long *)*param_3;
  puVar9 = &uStack_250;
  FUN_10002b838(puVar9,&UNK_10f4b2348);
  uVar5 = SUB81(puVar9,0);
  func_0x000100559dac(*(undefined8 *)(*plVar12 + 0x10));
  FUN_10055a8f8();
  plVar12 = param_3;
  FUN_10055acbc();
  FUN_10055ad2c(&uStack_280,param_3);
  uStack_248 = uStack_278;
  uStack_250 = uStack_280;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_238 = uStack_268;
  uStack_240 = uStack_270;
  uStack_230 = uStack_260;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_228 = uStack_258;
  uStack_226 = uStack_256;
  uStack_220 = 1;
  FUN_10055ad84(&uStack_2f0,param_3);
  uVar15 = uStack_2e8;
  uVar14 = uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2b8 = uVar15;
  uStack_2c0 = uVar14;
  uStack_2a8 = uStack_2d8;
  uStack_2b0 = uStack_2e0;
  uStack_2a0 = uStack_2d0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_298 = uStack_2c8;
  uStack_296 = uStack_2c6;
  uStack_290 = 1;
  func_0x000100559d90();
  uStack_370 = uVar14;
  uStack_368 = uVar15;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_01 != 0);
  }
  FUN_10002b838(&uStack_388,&UNK_10f4b21bb);
  uVar15 = uStack_368;
  uVar14 = uStack_370;
  uStack_310 = uStack_378;
  uStack_318 = uStack_380;
  uStack_320 = uStack_388;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_380 = 0;
  uStack_388 = 0;
  uStack_378 = 0;
  uStack_338 = 0;
  uStack_336 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_328 = uVar15;
  uStack_330 = uVar14;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_306 = 0;
  uStack_308 = 0;
  uStack_300 = 1;
  func_0x000100559d90();
  uStack_3e0 = uVar14;
  uStack_3d8 = uVar15;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_02 != 0);
  }
  FUN_10002b838(&uStack_3f8,&UNK_10f4b21e1);
  uVar15 = uStack_3d8;
  uVar14 = uStack_3e0;
  uStack_3b0 = uStack_3e8;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3c8 = uVar15;
  uStack_3d0 = uVar14;
  uStack_3b8 = uStack_3f0;
  uStack_3c0 = uStack_3f8;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  func_0x000100559d90();
  uStack_450 = uVar14;
  uStack_448 = uVar15;
  if (extraout_x8_03 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_03 != 0);
  }
  FUN_10002b838(&uStack_468,&UNK_10f4b2203);
  uStack_438 = uStack_448;
  uStack_440 = uStack_450;
  uStack_420 = uStack_458;
  uStack_450 = 0;
  uStack_448 = 0;
  uStack_428 = uStack_460;
  uStack_430 = uStack_468;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  plVar13 = (long *)*param_3;
  FUN_10002b838(auStack_480,&UNK_10f4b2227);
  (**(code **)(*plVar13 + 0x10))(plVar13,auStack_480,0);
  lVar1 = *param_3;
  lVar2 = param_3[1];
  lStack_4f8 = lVar1;
  lStack_4f0 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_04 != 0);
  }
  FUN_10002b838(&uStack_510,&UNK_10f4b2256);
  uStack_498 = uStack_500;
  uStack_4a0 = uStack_508;
  uStack_4a8 = uStack_510;
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4c0 = 1;
  uStack_4be = 0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4d8 = 0;
  uStack_48e = 0;
  uStack_490 = 1;
  uStack_488 = 1;
  *param_2 = *param_5;
  *(char *)(param_2 + 1) = (char)uVar6;
  *(char *)((long)param_2 + 9) = (char)uVar7;
  *(ulong *)((long)param_2 + 0xc) = uVar8 & 0xffffffffff;
  param_2[3] = lVar11;
  lStack_4b8 = lVar1;
  lStack_4b0 = lVar2;
  FUN_10055adf0(param_2 + 4,&lStack_100);
  *(undefined1 *)(param_2 + 0xb) = uVar3;
  FUN_10055adf0(param_2 + 0xc,&uStack_190);
  param_2[0x14] = uStack_1e8;
  param_2[0x13] = uStack_1f0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  param_2[0x16] = uStack_1d8;
  param_2[0x15] = uStack_1e0;
  param_2[0x17] = uStack_1d0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  *(undefined2 *)(param_2 + 0x18) = uStack_1c8;
  *(undefined1 *)((long)param_2 + 0xc2) = uStack_1c6;
  *(undefined1 *)(param_2 + 0x19) = uVar4;
  *(undefined1 *)((long)param_2 + 0xc9) = uVar5;
  *(char *)((long)param_2 + 0xca) = (char)plVar12;
  FUN_10055adf0(param_2 + 0x1a,&uStack_330);
  param_2[0x22] = uStack_3c8;
  param_2[0x21] = uStack_3d0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  param_2[0x24] = uStack_3b8;
  param_2[0x23] = uStack_3c0;
  param_2[0x25] = uStack_3b0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  param_2[0x27] = CONCAT71(uStack_39f,uStack_3a0);
  param_2[0x26] = uStack_3a8;
  *(undefined1 *)(param_2 + 0x28) = uStack_398;
  param_2[0x2a] = uStack_438;
  param_2[0x29] = uStack_440;
  uStack_440 = 0;
  uStack_438 = 0;
  param_2[0x2d] = uStack_420;
  param_2[0x2c] = uStack_428;
  param_2[0x2b] = uStack_430;
  uStack_430 = 0;
  uStack_428 = 0;
  uStack_420 = 0;
  *(undefined1 *)(param_2 + 0x30) = uStack_408;
  param_2[0x2f] = CONCAT71(uStack_40f,uStack_410);
  param_2[0x2e] = uStack_418;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10002b838(&uStack_98,"");
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  param_2[0x35] = uStack_88;
  param_2[0x34] = uStack_90;
  param_2[0x33] = uStack_98;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  *(undefined2 *)(param_2 + 0x36) = 0;
  *(undefined1 *)((long)param_2 + 0x1b2) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&uStack_80);
  uStack_a8 = 0;
  uStack_a0 = 0;
  FUN_10002b838(&uStack_c0,"");
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  param_2[0x3b] = uStack_b0;
  param_2[0x3a] = uStack_b8;
  param_2[0x39] = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  *(undefined2 *)(param_2 + 0x3c) = 0;
  *(undefined1 *)((long)param_2 + 0x1e2) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&uStack_a8);
  *(char *)(param_2 + 0x3d) = (char)plVar13;
  FUN_10055adf0(param_2 + 0x3e,&lStack_4b8);
  *(undefined1 *)(param_2 + 0x45) = 0;
  FUN_10055adf0(param_2 + 0x46,&uStack_250);
  FUN_10055adf0(param_2 + 0x4d,&uStack_2c0);
  lVar11 = param_6[1];
  uVar14 = *param_6;
  param_2[0x55] = param_6[1];
  param_2[0x54] = uVar14;
  if (lVar11 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_05 != 0);
  }
  FUN_100555800(&lStack_4b8);
  FUN_1005557d8(&uStack_4e8);
  func_0x000107c60ca0(&uStack_510);
  FUN_10054f94c(&lStack_4f8);
  func_0x000107c60ca0(auStack_480);
  FUN_10055aeac(&uStack_440);
  func_0x000107c60ca0(&uStack_468);
  FUN_10054f94c(&uStack_450);
  FUN_10055aeac(&uStack_3d0);
  func_0x000107c60ca0(&uStack_3f8);
  FUN_10054f94c(&uStack_3e0);
  FUN_100555800(&uStack_330);
  FUN_1005557d8(&uStack_360);
  func_0x000107c60ca0(&uStack_388);
  FUN_10054f94c(&uStack_370);
  FUN_100555800(&uStack_2c0);
  FUN_1005557d8(&uStack_2f0);
  FUN_100555800(&uStack_250);
  FUN_1005557d8(&uStack_280);
  FUN_1005557d8(&uStack_1f0);
  func_0x000107c60ca0(&uStack_218);
  FUN_10054f94c(&uStack_200);
  FUN_100555800(&uStack_190);
  FUN_1005557d8(&uStack_1c0);
  FUN_100555800(&lStack_100);
  FUN_1005557d8(&uStack_130);
  func_0x000107c60ca0(&uStack_158);
  FUN_10054f94c(&lStack_140);
  lVar11 = *param_3;
  lVar1 = param_3[1];
  lStack_520 = lVar11;
  lStack_518 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_06 != 0);
  }
  FUN_10002b838(&uStack_538,&UNK_10f4b2286);
  lStack_520 = 0;
  lStack_518 = 0;
  uStack_e8 = uStack_530;
  uStack_f0 = uStack_538;
  uStack_e0 = uStack_528;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  lStack_100 = lVar11;
  lStack_f8 = lVar1;
  FUN_10055aef0(param_2 + 0x31,&lStack_100);
  FUN_1005557d8(&lStack_100);
  func_0x000107c60ca0(&uStack_538);
  FUN_10054f94c(&lStack_520);
  lVar11 = *param_3;
  lVar1 = param_3[1];
  lStack_548 = lVar11;
  lStack_540 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10_07 != 0);
  }
  FUN_10002b838(&uStack_560,&UNK_10f4b22a6);
  lStack_548 = 0;
  lStack_540 = 0;
  uStack_e8 = uStack_558;
  uStack_f0 = uStack_560;
  uStack_e0 = uStack_550;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_550 = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  lStack_100 = lVar11;
  lStack_f8 = lVar1;
  FUN_10055aef0(param_2 + 0x37,&lStack_100);
  FUN_1005557d8(&lStack_100);
  func_0x000107c60ca0(&uStack_560);
  FUN_10054f94c(&lStack_548);
  return param_2;
}



/* Entry: 100559cac; end: 100559cbf;  */

undefined1 * FUN_100559cac(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0x89;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      FUN_10054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (FUN_10054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        FUN_10054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 100559cc0; end: 100559d4b;  */

ulong FUN_100559cc0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  puVar1 = auStack_50;
  FUN_1004b5428(auStack_50);
  if ((bStack_38 & 1) == 0) {
    uVar2 = (ulong)param_3 & 0xffffff0000000000;
    uVar3 = (ulong)param_3 & 0xff00000000;
  }
  else {
    func_0x000107c60d84(auStack_50,0,10);
    uVar2 = 0;
    uVar3 = 0x100000000;
    param_3 = puVar1;
  }
  FUN_1001148fc(auStack_50);
  return uVar2 | uVar3 | (ulong)param_3 & 0xffffffff;
}



/* Entry: 100559d4c; end: 100559d7b;  */

ulong FUN_100559d4c(ulong param_1)

{
  ulong uVar1;
  
  FUN_100559cc0(param_1,0x8d,0);
  uVar1 = 0;
  if ((param_1 & 0x1ffffffff) != 0x100000000) {
    uVar1 = param_1 & 0xffffffffff;
  }
  return uVar1;
}



/* Entry: 100559d7c; end: 100559db7;  */

undefined1 * FUN_100559d7c(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0xa1;
    func_0x0001004b538c(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      func_0x000107c60c94(&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        func_0x000107c60e80();
        *pcStack_40 = (char)ppcVar2;
      }
      FUN_10054eae8();
      if ((((ulong)ppcVar2 & 1) == 0) && (FUN_10054eae8(), ((ulong)ppcVar2 & 1) == 0)) {
        FUN_10054eae8();
      }
      else {
        ppcVar2 = (char **)0x1;
      }
      func_0x000107c60ca0(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 100559db8; end: 100559f23;  */

void FUN_100559db8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    uVar2 = uVar1;
    FUN_100559f24();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c3cc78(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61144(auStack_48,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x000107c4f7c0(uVar4);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    uVar1 = uVar3;
    func_0x000107c4da54();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar1;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100559f24; end: 10055a107;  */

void FUN_100559f24(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126b47a0);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_10055a108();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  FUN_1000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10055a108; end: 10055a1bf;  */

undefined8 FUN_10055a108(void)

{
  int iVar1;
  
  if ((bRam0000000113827b98 & 1) == 0) {
    iVar1 = 0x13827b98;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113827b30 = 0xe;
      puRam0000000113827b38 = &UNK_10f4a1005;
      uRam0000000113827b40 = 0x100;
      puRam0000000113827b48 = &UNK_108508104;
      puRam0000000113827b50 = &UNK_108508144;
      ppuRam0000000113827b28 = &PTR_DAT_1108629c8;
      uRam0000000113827b68 = 0;
      uRam0000000113827b60 = 0;
      uRam0000000113827b78 = 0;
      uRam0000000113827b70 = 0;
      uRam0000000113827b88 = 0;
      uRam0000000113827b80 = 0;
      uRam0000000113827b90 = 0;
      func_0x000107c60e34(&DAT_105007830,0x113827b28,0x100000000);
      func_0x000107c60e4c(0x113827b98);
    }
  }
  return 0x113827b28;
}



/* Entry: 10055a1c0; end: 10055a3f7;  */

undefined1  [16] FUN_10055a1c0(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10055a3c4;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  func_0x000107c60e20();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_1000e9bf8(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar6;
    if (*plVar10 != 0) {
      uVar3 = *(ulong *)(*plVar10 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar3 = uVar3 & uVar7 - 1;
      }
      else if (uVar7 <= uVar3) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar3 / uVar7;
        }
        uVar3 = uVar3 - uVar11 * uVar7;
      }
      *(long **)(lVar4 + uVar3 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10055a3c4:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10055a3f8; end: 10055a52b;  */

long * FUN_10055a3f8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  
  if (param_2 == (ulong *)0x0) {
    plVar13 = (long *)*param_1;
    *param_1 = 0;
    if (plVar13 != (long *)0x0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104bd35f4();
      uVar3 = param_1[1];
      if ((uVar3 != 0) && (param_1[3] != 0)) {
        uVar5 = *param_2;
        uVar9 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
        uVar9 = (uVar5 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
        uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
        uVar10 = uVar3 - 1;
        if ((uVar3 & uVar10) == 0) {
          uVar12 = uVar9 & uVar10;
        }
        else {
          uVar12 = uVar9;
          if (uVar3 <= uVar9) {
            uVar12 = 0;
            if (uVar3 != 0) {
              uVar12 = uVar9 / uVar3;
            }
            uVar12 = uVar9 - uVar12 * uVar3;
          }
        }
        plVar13 = *(long **)(*param_1 + uVar12 * 8);
        if (plVar13 != (long *)0x0) {
          plVar13 = (long *)*plVar13;
          do {
            if (plVar13 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar14 = plVar13[1];
            if (uVar14 == uVar9) {
              if (plVar13[2] == uVar5) {
                return plVar13;
              }
            }
            else {
              if ((uVar3 & uVar10) == 0) {
                uVar14 = uVar14 & uVar10;
              }
              else if (uVar3 <= uVar14) {
                uVar1 = 0;
                if (uVar3 != 0) {
                  uVar1 = uVar14 / uVar3;
                }
                uVar14 = uVar14 - uVar1 * uVar3;
              }
              if (uVar14 != uVar12) {
                return (long *)0x0;
              }
            }
            plVar13 = (long *)*plVar13;
          } while( true );
        }
      }
      return (long *)0x0;
    }
    plVar15 = (long *)((long)param_2 << 3);
    func_0x000107c60e20();
    lVar2 = *param_1;
    *param_1 = (long)plVar15;
    if (lVar2 != 0) {
      func_0x000107c60e14();
      plVar15 = (long *)*param_1;
    }
    param_1[1] = (long)param_2;
    plVar13 = plVar15;
    func_0x000107c60ee4(plVar15,(long *)((long)param_2 << 3));
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      puVar6 = (ulong *)plVar4[1];
      uVar3 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar3) == 0) {
        puVar6 = (ulong *)((ulong)puVar6 & uVar3);
      }
      else if (param_2 <= puVar6) {
        uVar5 = 0;
        if (param_2 != (ulong *)0x0) {
          uVar5 = (ulong)puVar6 / (ulong)param_2;
        }
        puVar6 = (ulong *)((long)puVar6 - uVar5 * (long)param_2);
      }
      plVar15[(long)puVar6] = (long)(param_1 + 2);
      plVar7 = (long *)*plVar4;
      while (plVar7 != (long *)0x0) {
        puVar11 = (ulong *)plVar7[1];
        if (((ulong)param_2 & uVar3) == 0) {
          puVar11 = (ulong *)((ulong)puVar11 & uVar3);
        }
        else if (param_2 <= puVar11) {
          uVar5 = 0;
          if (param_2 != (ulong *)0x0) {
            uVar5 = (ulong)puVar11 / (ulong)param_2;
          }
          puVar11 = (ulong *)((long)puVar11 - uVar5 * (long)param_2);
        }
        plVar8 = plVar7;
        if (puVar11 != puVar6) {
          if (plVar15[(long)puVar11] == 0) {
            plVar15[(long)puVar11] = (long)plVar4;
            puVar6 = puVar11;
          }
          else {
            *plVar4 = *plVar7;
            *plVar7 = *(undefined8 *)plVar15[(long)puVar11];
            *(long **)plVar15[(long)puVar11] = plVar7;
            plVar8 = plVar4;
          }
        }
        plVar4 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return plVar13;
}



/* Entry: 10055a52c; end: 10055a60b;  */

long * FUN_10055a52c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10055a60c; end: 10055a6cb;  */

void FUN_10055a60c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (ulong *)(param_1 + 2);
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)*puVar2) {
    puVar8 = puVar6 + 1;
    *puVar6 = *param_2;
  }
  else {
    lVar7 = (long)puVar6 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000104c43284();
      if ((ulong)param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
        return;
      }
      func_0x000104bd35f4();
      FUN_10055a6cc();
      return;
    }
    uVar3 = (long)*puVar2 - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    FUN_10055a6e4();
    puVar6 = (undefined8 *)((long)puVar2 + lVar7);
    lVar5 = (long)puVar6 - (param_1[1] - *param_1);
    puVar8 = puVar6 + 1;
    *puVar6 = *param_2;
    func_0x000107c610b4(lVar5);
    lVar7 = *param_1;
    *param_1 = lVar5;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(puVar2 + uVar4);
    if (lVar7 != 0) {
      func_0x000107c60e14();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10055a6cc; end: 10055a6e3;  */

void FUN_10055a6cc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_10055a6cc();
  return;
}



/* Entry: 10055a6e4; end: 10055a703;  */

void FUN_10055a6e4(void)

{
  FUN_10055a6cc();
  return;
}



/* Entry: 10055a704; end: 10055a713;  */

void FUN_10055a704(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 10055a714; end: 10055a76b;  */

void FUN_10055a714(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd0fe);
  func_0x0001005555b8();
  *(undefined2 *)(unaff_x19 + 0x28) = 1;
  FUN_10055a76c();
  func_0x0001005555ec();
  return;
}



/* Entry: 10055a76c; end: 10055a777;  */

void FUN_10055a76c(void)

{
  long unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 0x2a) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10055a778; end: 10055a823; -[SCPostableCustomStoriesObserver _updatePostableCustomStoriesFetchedResult:] */

/* WARNING: Possible PIC construction at 0x00010055a7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055a7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010055a7b4) */
/* WARNING: Removing unreachable block (ram,0x00010055a7e4) */
/* WARNING: Removing unreachable block (ram,0x00010055a814) */
/* WARNING: Removing unreachable block (ram,0x00010055a7f0) */

void FUN_10055a778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_100504554(param_3,&PTR___NSConcreteGlobalBlock_110a191e0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10055a824; end: 10055a82b; -[SCCustomStoriesDataSyncer didUpdatePostableStories] */

void FUN_10055a824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_didUpdatePostableStories_1125bd310);
  return;
}



/* Entry: 10055a82c; end: 10055a8b3; -[SCCustomStoriesUpdateListenerAnnouncer didUpdatePostableStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10055a82c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = 0x113080278;
  FUN_1000285a8(0x113080278,&UNK_10dd0b490);
  uVar2 = 0x1130802d8;
  FUN_10055a8b4(0x1130802d8,0x113080278,&UNK_10dd0b490,
                PTR___s7Combine18PassthroughSubjectCyxq_GAA0C0AAMc_11034ae10);
  func_0x000107c5f1f8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10055a8b4; end: 10055a8f7;  */

void FUN_10055a8b4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_10002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10055a8f8; end: 10055a8ff;  */

void FUN_10055a8f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000340);
  return;
}



/* Entry: 10055a900; end: 10055aa5f;  */

void FUN_10055a900(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c3c8b4(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  FUN_100447b78();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3e1b8();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar3;
  func_0x000107c4080c();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        func_0x000107c61128(lVar3);
      }
      lVar7 = *(long *)(lVar9 * 8);
      lVar4 = lVar7;
      func_0x000107c5d0f0();
      if (lVar4 == 10) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c4f638();
        func_0x000107c61180();
        func_0x000107c3b678(uVar8);
        func_0x000107c61170(lVar7);
      }
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar3;
    func_0x000107c4080c();
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  func_0x000107c60e78();
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61144(auStack_188,lVar3);
    lVar5 = lVar2;
    func_0x000107c406ec(lVar2);
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    puStack_1a0 = &UNK_108053620;
    puStack_198 = &UNK_11085bab8;
    func_0x000107c6111c(auStack_190,auStack_188);
    lVar3 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    lVar5 = lVar2;
    func_0x000107c40660(lVar2);
    func_0x000107c61180();
    puStack_1d8 = puVar1;
    uStack_1d0 = 0xc2000000;
    puStack_1c8 = &UNK_108053730;
    puStack_1c0 = &UNK_110a19180;
    func_0x000107c6111c(auStack_1b8,auStack_188);
    lVar3 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    lVar5 = lVar2;
    func_0x000107c406c8(lVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_1e0,auStack_188);
    lVar3 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61120(auStack_1e0);
    func_0x000107c61120(auStack_1b8);
    func_0x000107c61120(auStack_190);
    func_0x000107c61120(auStack_188);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10055aa60; end: 10055ac9b; -[SCFriendOfGroupStoryPostableConsentObserver _startGlobalConversationObservationOnPerformer] */

void FUN_10055aa60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61144(auStack_68,param_1);
    lVar3 = lVar2;
    func_0x000107c406ec(lVar2);
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    puStack_80 = &UNK_108053620;
    puStack_78 = &UNK_11085bab8;
    func_0x000107c6111c(auStack_70,auStack_68);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c40660(lVar2);
    func_0x000107c61180();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_108053730;
    puStack_a0 = &UNK_110a19180;
    func_0x000107c6111c(auStack_98,auStack_68);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c406c8(lVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_c0,auStack_68);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 10055ac9c; end: 10055aca3; -[SCArroyoConversationDataUpdateAnnouncer conversationUpdateEvent] */

undefined8 FUN_10055ac9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10055aca4; end: 10055acab; -[SCArroyoConversationDataUpdateAnnouncer conversationCreatedEvent] */

undefined8 FUN_10055aca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10055acac; end: 10055acbb; -[SCArroyoConversationDataUpdateAnnouncer conversationRemovalEvent] */

undefined8 FUN_10055acac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10055acbc; end: 10055ad07;  */

undefined8 * FUN_10055acbc(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  func_0x00010055acb4(param_1,&UNK_10f4b058d);
  FUN_10055ad08(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010055ad18();
  return param_1;
}



/* Entry: 10055ad08; end: 10055ad2b;  */

void FUN_10055ad08(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00010055ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10055ad2c; end: 10055ad83;  */

void FUN_10055ad2c(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd1ca);
  func_0x0001005555b8();
  *(undefined2 *)(unaff_x19 + 0x28) = 1;
  FUN_10055a76c();
  func_0x0001005555ec();
  return;
}



/* Entry: 10055ad84; end: 10055addb;  */

void FUN_10055ad84(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd1f3);
  func_0x0001005555b8();
  *(undefined2 *)(unaff_x19 + 0x28) = 1;
  FUN_10055a76c();
  func_0x0001005555ec();
  return;
}



/* Entry: 10055addc; end: 10055adef;  */

void FUN_10055addc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_10055ae28();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 10055adf0; end: 10055ae27;  */

undefined1 * FUN_10055adf0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_10055addc();
  return param_1;
}



/* Entry: 10055ae28; end: 10055ae8f;  */

undefined8 * FUN_10055ae28(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100559d9c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c60c94(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined2 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2a) = *(undefined1 *)((long)param_2 + 0x2a);
  *(undefined2 *)(param_1 + 5) = uVar1;
  return param_1;
}



/* Entry: 10055ae90; end: 10055aeab;  */

void FUN_10055ae90(long param_1)

{
  FUN_10055ae28();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10055aeac; end: 10055aed3;  */

undefined8 FUN_10055aeac(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c60ca0(param_1 + 0x10);
  func_0x00010054e364();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10055aed4; end: 10055aeef;  */

void FUN_10055aed4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10055aef0; end: 10055af37;  */

long FUN_10055aef0(long param_1,long param_2)

{
  undefined2 uVar1;
  
  FUN_10055aed4();
  FUN_10054f94c();
  FUN_100066230(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined2 *)(param_1 + 0x28) = uVar1;
  return param_1;
}



/* Entry: 10055af38; end: 10055af43;  */

void FUN_10055af38(void)

{
  return;
}



/* Entry: 10055af44; end: 10055af73;  */

long FUN_10055af44(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x492492492492493) {
    lVar1 = param_2 * 0x38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10055af44();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10055af74; end: 10055af9b;  */

long FUN_10055af74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10055af44();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10055af9c; end: 10055afc3;  */

void FUN_10055af9c(void)

{
  return;
}



/* Entry: 10055afc4; end: 10055b0fb;  */

undefined8 * FUN_10055afc4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  *param_1 = &PTR_DAT_110a63348;
  uVar3 = *param_2;
  lVar1 = param_2[1];
  uStack_50 = uVar3;
  lStack_48 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010055afb4();
    } while (extraout_w10 != 0);
  }
  FUN_10002b838(&uStack_68,&UNK_10f4b0918);
  param_1[1] = uVar3;
  param_1[2] = lVar1;
  uStack_50 = 0;
  lStack_48 = 0;
  param_1[4] = uStack_60;
  param_1[3] = uStack_68;
  param_1[5] = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  func_0x000107c60ca0(&uStack_68);
  FUN_10054f94c(&uStack_50);
  uVar3 = *param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  FUN_10002b838(&uStack_90,&UNK_10f4b0947);
  param_1[7] = uVar3;
  param_1[8] = uVar2;
  uStack_78 = 0;
  uStack_70 = 0;
  param_1[10] = uStack_88;
  param_1[9] = uStack_90;
  param_1[0xb] = uStack_80;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  func_0x000107c60ca0(&uStack_90);
  FUN_10054f94c(&uStack_78);
  uVar3 = *param_3;
  param_1[0xe] = param_3[1];
  param_1[0xd] = uVar3;
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



/* Entry: 10055b0fc; end: 10055b123;  */

long FUN_10055b0fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10055b124; end: 10055b137;  */

void FUN_10055b124(void)

{
  return;
}



/* Entry: 10055b138; end: 10055b15b;  */

void FUN_10055b138(long param_1)

{
  func_0x00010055b12c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055b15c; end: 10055b18b;  */

void FUN_10055b15c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10055b18c; end: 10055b1bf;  */

void FUN_10055b18c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10055b1c0; end: 10055b46b; -[SCCustomStoriesDataSyncer _forceSyncCustomStoriesMetadataOnPerformerWithFullSync:] */

/* WARNING: Possible PIC construction at 0x00010055b230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b5d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010055b698) */
/* WARNING: Removing unreachable block (ram,0x00010055b6d8) */
/* WARNING: Removing unreachable block (ram,0x00010055b70c) */
/* WARNING: Removing unreachable block (ram,0x00010055b704) */
/* WARNING: Removing unreachable block (ram,0x00010055b73c) */
/* WARNING: Removing unreachable block (ram,0x00010055b6b0) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010055b688) */
/* WARNING: Removing unreachable block (ram,0x00010055b610) */
/* WARNING: Removing unreachable block (ram,0x00010055b650) */
/* WARNING: Removing unreachable block (ram,0x00010055b61c) */
/* WARNING: Removing unreachable block (ram,0x00010055b664) */
/* WARNING: Removing unreachable block (ram,0x00010055b634) */
/* WARNING: Removing unreachable block (ram,0x00010055b66c) */
/* WARNING: Removing unreachable block (ram,0x00010055b5e0) */
/* WARNING: Removing unreachable block (ram,0x00010055b5ec) */
/* WARNING: Removing unreachable block (ram,0x00010055b3d8) */
/* WARNING: Removing unreachable block (ram,0x00010055b424) */
/* WARNING: Removing unreachable block (ram,0x00010055b454) */
/* WARNING: Removing unreachable block (ram,0x00010055b464) */
/* WARNING: Removing unreachable block (ram,0x00010055b640) */
/* WARNING: Removing unreachable block (ram,0x00010055b690) */
/* WARNING: Removing unreachable block (ram,0x00010055b4bc) */
/* WARNING: Removing unreachable block (ram,0x00010055b608) */
/* WARNING: Removing unreachable block (ram,0x00010055b524) */
/* WARNING: Removing unreachable block (ram,0x00010055b534) */
/* WARNING: Removing unreachable block (ram,0x00010055b538) */
/* WARNING: Removing unreachable block (ram,0x00010055b548) */
/* WARNING: Removing unreachable block (ram,0x00010055b550) */
/* WARNING: Removing unreachable block (ram,0x00010055b574) */
/* WARNING: Removing unreachable block (ram,0x00010055b584) */
/* WARNING: Removing unreachable block (ram,0x00010055b588) */
/* WARNING: Removing unreachable block (ram,0x00010055b5a8) */
/* WARNING: Removing unreachable block (ram,0x00010055b58c) */
/* WARNING: Removing unreachable block (ram,0x00010055b5d8) */
/* WARNING: Removing unreachable block (ram,0x00010055b400) */
/* WARNING: Removing unreachable block (ram,0x00010055b3c8) */
/* WARNING: Removing unreachable block (ram,0x00010055b3b8) */
/* WARNING: Removing unreachable block (ram,0x00010055b30c) */
/* WARNING: Removing unreachable block (ram,0x00010055b2dc) */
/* WARNING: Removing unreachable block (ram,0x00010055b2e8) */
/* WARNING: Removing unreachable block (ram,0x00010055b234) */
/* WARNING: Removing unreachable block (ram,0x00010055b304) */
/* WARNING: Removing unreachable block (ram,0x00010055b28c) */
/* WARNING: Removing unreachable block (ram,0x00010055b294) */
/* WARNING: Removing unreachable block (ram,0x00010055b298) */
/* WARNING: Removing unreachable block (ram,0x00010055b2a8) */
/* WARNING: Removing unreachable block (ram,0x00010055b2b0) */
/* WARNING: Removing unreachable block (ram,0x00010055b770) */

void FUN_10055b1c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_100 [136];
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61144(auStack_100,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  FUN_100447b78();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10055b46c; end: 10055b6db; -[SCStoriesIndividualRequestDebouncer debounceRequests:] */

/* WARNING: Possible PIC construction at 0x00010055b5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b5d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010055b698) */
/* WARNING: Removing unreachable block (ram,0x00010055b6d8) */
/* WARNING: Removing unreachable block (ram,0x00010055b70c) */
/* WARNING: Removing unreachable block (ram,0x00010055b704) */
/* WARNING: Removing unreachable block (ram,0x00010055b73c) */
/* WARNING: Removing unreachable block (ram,0x00010055b6b0) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010055b688) */
/* WARNING: Removing unreachable block (ram,0x00010055b610) */
/* WARNING: Removing unreachable block (ram,0x00010055b650) */
/* WARNING: Removing unreachable block (ram,0x00010055b61c) */
/* WARNING: Removing unreachable block (ram,0x00010055b664) */
/* WARNING: Removing unreachable block (ram,0x00010055b634) */
/* WARNING: Removing unreachable block (ram,0x00010055b66c) */
/* WARNING: Removing unreachable block (ram,0x00010055b5e0) */
/* WARNING: Removing unreachable block (ram,0x00010055b5ec) */
/* WARNING: Removing unreachable block (ram,0x00010055b770) */

void FUN_10055b46c(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  puVar1 = param_4;
  func_0x000107c40808();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c6071c();
    puVar2 = param_4;
    func_0x000107c4d2d4();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar3 = param_4;
    func_0x000107c40808(param_4);
    func_0x000107c3e170(puVar1,param_3,puVar3);
    func_0x000107c61180();
    dVar5 = 0.0;
    puStack_138 = (undefined8 *)0x0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    func_0x000107c61174(param_4);
    puVar3 = param_4;
    func_0x000107c4080c(param_4,param_3,&uStack_140,auStack_100,0x10);
    if (puVar3 != (undefined *)0x0) {
      if (*plStack_130 != *plStack_130) {
        func_0x000107c61128(param_4);
      }
      uVar4 = *puStack_138;
      param_4 = *(undefined **)(param_2 + 0x28);
      func_0x000107c4d9e8(param_4,param_3,uVar4);
      func_0x000107c61180();
      if ((param_4 == (undefined *)0x0) ||
         (func_0x000107c4223c(param_4), dVar5 + *(double *)(param_2 + 0x18) <= param_1)) {
        param_4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c4d954(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61180();
        func_0x000107c56bd8(*(undefined8 *)(param_2 + 0x28),param_3,param_4,uVar4);
      }
      else {
        func_0x000107c4ff80(puVar2,param_3,uVar4);
        func_0x000107c3d798(puVar1,param_3,uVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10055b6dc; end: 10055b78b; -[SCCustomStoriesDataSyncer _syncCustomStoriesWithFullSync:completion:] */

/* WARNING: Possible PIC construction at 0x00010055b76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010055b738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010055b770) */

void FUN_10055b6dc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_4);
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    FUN_10055b78c();
    func_0x000107c61180();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c4f7c0(uVar1);
    func_0x000107c61180();
    func_0x000107c5c540(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10055b78c; end: 10055ba0f;  */

void FUN_10055b78c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61158(PTR_PTR_1126d8ff8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_10055c144();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  func_0x000107c61174(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  FUN_1000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  func_0x000107c61180();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    func_0x000107c60e14();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  FUN_100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  FUN_100105004(&puStack_1a0);
  func_0x000107c61170(uStack_158);
  FUN_1000e76e0(&uStack_78);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_90);
  puVar4 = puVar3;
  func_0x000107c43638(puVar3);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5c5bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10055ba10; end: 10055ba1f;  */

void FUN_10055ba10(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}


