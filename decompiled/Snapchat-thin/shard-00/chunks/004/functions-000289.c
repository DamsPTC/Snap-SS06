/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100643a88; end: 100643beb; -[SCWeatherStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100643a88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_112725868;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_11272586c;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c5e174();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_10554daf4;
  puStack_58 = &UNK_110896830;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_70);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar5 = PTR_PTR_1126bab88;
  func_0x000107c610f4(PTR_PTR_1126bab88);
  func_0x000107c489f8();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(lStack_50);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100643bec; end: 100643bfb; -[_TtC17SCWeatherServices17SCWeatherServices weatherProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100643bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302efe0));
  return;
}



/* Entry: 100643bfc; end: 100643c9f; -[SCWeatherStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100643bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fdaa8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100643ca0; end: 100643cd3;  */

void FUN_100643ca0(void)

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



/* Entry: 100643cd4; end: 100643cdb;  */

void FUN_100643cd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100643cdc; end: 100643d2f;  */

void FUN_100643cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100643d30; end: 100643d37;  */

void FUN_100643d30(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d1c0c();
  func_0x000107c613fc();
  func_0x000100643d98(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100643d38; end: 100643e5f;  */

void FUN_100643d38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d1c0c();
  func_0x000107c613fc();
  func_0x000100643d98(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100643e60; end: 100643ef7; -[SCPollStickerInjectorServiceProvider provide] */

void FUN_100643e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108967b0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126baa58;
  func_0x000107c610f4(PTR_PTR_1126baa58);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100643ef8; end: 100643f9b; -[SCPollStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100643ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100643f9c; end: 100643fa3;  */

void FUN_100643f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100643fa4; end: 100643ff7;  */

void FUN_100643fa4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100643ff8; end: 100643fff;  */

void FUN_100643ff8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d1e60();
  func_0x000107c613fc();
  func_0x000100644060(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100644000; end: 100644127;  */

void FUN_100644000(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d1e60();
  func_0x000107c613fc();
  func_0x000100644060(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100644128; end: 1006441bf; -[SCQuestionStickerInjectorServiceProvider provide] */

void FUN_100644128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108967d0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126baa80;
  func_0x000107c610f4(PTR_PTR_1126baa80);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1006441c0; end: 100644263; -[SCQuestionStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_1006441c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda80;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100644264; end: 10064426b;  */

void FUN_100644264(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064426c; end: 1006442bf;  */

void FUN_10064426c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006442c0; end: 1006442c7;  */

void FUN_1006442c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1001dda94();
  func_0x000107c613fc();
  FUN_10064433c(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006442c8; end: 10064433b;  */

void FUN_1006442c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1001dda94();
  func_0x000107c613fc();
  FUN_10064433c(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10064433c; end: 10064449f;  */

void FUN_10064433c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8100;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 1006444a0; end: 100645e8f;  */

void FUN_1006444a0(undefined8 param_1)

{
  func_0x000100642dc8(param_1,&DAT_10f7602a3);
  func_0x000100642cfc();
  func_0x0001006428b4();
  func_0x0001006428e8();
  return;
}



/* Entry: 100645e90; end: 100645f97; -[SCStoryInviteStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100645e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272584c;
    func_0x000107c61148();
  }
  puVar1 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_105549bbc;
  puStack_40 = &UNK_1108965a0;
  lStack_38 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_58);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126baac0;
  func_0x000107c610f4(PTR_PTR_1126baac0);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100645f98; end: 100646333;  */

void FUN_100645f98(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 auStack_190 [37];
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar7 = auStack_190;
  puVar6 = auStack_190;
  func_0x0001001b51a8();
  uStack_58 = extraout_x8;
  func_0x0001001b5378(auStack_190);
  piStack_68 = (int *)*param_3;
  if (piStack_68 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
      if (bVar2) {
        *piStack_68 = *piStack_68 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_60 = param_3[1];
  plVar8 = *(long **)(param_1 + 0x58);
  plVar10 = (long *)(param_1 + 0x58);
  while (plVar12 = plVar10, plVar8 != (long *)0x0) {
    while (plVar12 = plVar8, iVar5 = (int)auStack_190, func_0x0001001c4f50(auStack_190,plVar12 + 4),
          iVar5 == 0) {
      plVar8 = plVar12 + 4;
      func_0x0001001c4f50(plVar8,auStack_190);
      if ((int)plVar8 == 0) {
        if (*plVar10 == 0) goto LAB_10064605c;
        goto LAB_1006461b4;
      }
      plVar10 = plVar12 + 1;
      plVar8 = (long *)*plVar10;
      if ((long *)*plVar10 == (long *)0x0) goto LAB_10064605c;
    }
    plVar10 = plVar12;
    plVar8 = (long *)*plVar12;
  }
LAB_10064605c:
  puVar6 = (undefined8 *)0x158;
  func_0x000107c60e20();
  func_0x0001001b5378(puVar6 + 4,auStack_190);
  piVar3 = piStack_68;
  piStack_68 = (int *)0x0;
  puVar6[0x29] = piVar3;
  puVar6[0x2a] = uStack_60;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = plVar12;
  *plVar10 = (long)puVar6;
  if (**(long **)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x50) = **(long **)(param_1 + 0x50);
    puVar6 = (undefined8 *)*plVar10;
  }
  FUN_1001292e0(*(undefined8 *)(param_1 + 0x58),puVar6);
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  FUN_10014f860(&piStack_68);
  func_0x0001001bbbb8();
  puVar9 = *(undefined8 **)(param_1 + 0x88);
  puVar6 = (undefined8 *)(param_1 + 0x88);
  while (puVar11 = puVar6, puVar9 != (undefined8 *)0x0) {
    while (puVar11 = puVar9, FUN_10063f62c(), (int)puVar7 == 0) {
      puVar7 = puVar11 + 4;
      func_0x0001001c4f50(puVar7,param_2);
      if ((int)puVar7 == 0) {
        puVar7 = (undefined8 *)*puVar6;
        if (puVar7 == (undefined8 *)0x0) goto LAB_100646114;
        goto LAB_100646170;
      }
      puVar6 = puVar11 + 1;
      puVar9 = (undefined8 *)*puVar6;
      if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_100646114;
    }
    puVar6 = puVar11;
    puVar9 = (undefined8 *)*puVar11;
  }
LAB_100646114:
  puVar7 = (undefined8 *)0x160;
  func_0x000107c60e20();
  func_0x0001001b5378(puVar7 + 4,param_2);
  puVar7[0x2a] = 0;
  puVar7[0x2b] = 0;
  puVar7[0x29] = puVar7 + 0x2a;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = puVar11;
  *puVar6 = puVar7;
  puVar9 = puVar7;
  if (**(long **)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = **(long **)(param_1 + 0x80);
    puVar9 = (undefined8 *)*puVar6;
  }
  FUN_1001292e0(*(undefined8 *)(param_1 + 0x88),puVar9);
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
LAB_100646170:
  FUN_1001c1e3c(puVar7 + 0x29,param_4);
  func_0x0001001b54f0(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
LAB_1006461b4:
  FUN_10014f860(puVar6 + 0x25);
  func_0x0001001bbbb8(auStack_190);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0,0x1006461c8);
  (*pcVar4)();
}



/* Entry: 100646334; end: 1006463d7; -[SCStoryInviteStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100646334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda90;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006463d8; end: 1006463eb;  */

void FUN_1006463d8(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1006463ec; end: 100646417;  */

void FUN_1006463ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100646418; end: 10064641f;  */

void FUN_100646418(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100646420; end: 100646473;  */

void FUN_100646420(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100646474; end: 10064647b;  */

void FUN_100646474(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10020d380();
  func_0x000107c613fc();
  FUN_1006464f0(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064647c; end: 1006464ef;  */

void FUN_10064647c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10020d380();
  func_0x000107c613fc();
  FUN_1006464f0(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1006464f0; end: 100646647;  */

void FUN_1006464f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a80e8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 100646648; end: 100646807;  */

void FUN_100646648(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)0x160;
  func_0x000107c60e20();
  uVar6 = *param_2;
  puVar2[5] = param_2[1];
  puVar2[4] = uVar6;
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)puVar2 + 0x32) = *(undefined2 *)((long)param_2 + 0x12);
  func_0x0001001b5378(puVar2 + 7,param_2 + 3);
  plVar5 = param_1 + 1;
  plVar4 = plVar5;
  plVar1 = (long *)*plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    do {
      while( true ) {
        plVar5 = plVar1;
        puVar3 = puVar2 + 4;
        func_0x000100671f78(puVar3,plVar5 + 4);
        if ((int)puVar3 == 0) break;
        plVar4 = plVar5;
        plVar1 = (long *)*plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_1006466d4;
      }
      plVar1 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar4 = plVar5 + 1;
  }
LAB_1006466d4:
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar5;
  *plVar4 = (long)puVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar2 = (undefined8 *)*plVar4;
  }
  FUN_1001292e0(param_1[1],puVar2);
  func_0x0001001b5494();
  return;
}



/* Entry: 100646808; end: 100646847;  */

void FUN_100646808(uint param_1)

{
  undefined1 auStack_38 [16];
  uint uStack_28;
  
  uStack_28 = param_1 | 0x3000000;
  func_0x000107c60ee0(auStack_38,&PTR_DAT_110c89f08,0x18,0x28,FUN_1001fbef4);
  return;
}



/* Entry: 100646848; end: 1006468af;  */

uint FUN_100646848(long param_1)

{
  long lVar1;
  uint uVar2;
  
  FUN_100646808();
  if (param_1 == 0) {
    uVar2 = 6;
  }
  else {
    lVar1 = param_1;
    FUN_100238134();
    uVar2 = 2;
    if ((int)lVar1 != 0x3b7) {
      uVar2 = 0;
    }
    uVar2 = (uVar2 | (*(uint *)(param_1 + 0x20) >> 1 & 1) << 2) ^ 4;
  }
  return uVar2;
}



/* Entry: 1006468b0; end: 100646a4b; -[SCSnapcodeStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006468b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_11272583c;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5da60();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  param_1 = param_1 + _DAT_112725840;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puVar4 = PTR_PTR_1126ae720;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  puStack_60 = &UNK_105548ef8;
  puStack_58 = &UNK_110896830;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar3);
  func_0x000107c3e4fc(puVar4,param_2,&puStack_70);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar6 = PTR_PTR_1126baaa0;
  func_0x000107c610f4(PTR_PTR_1126baaa0);
  func_0x000107c489f8();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(lStack_50);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100646a4c; end: 100646de7;  */

void FUN_100646a4c(void)

{
  return;
}



/* Entry: 100646de8; end: 100646e33;  */

byte FUN_100646de8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x618) >> 3 & 1) != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x1c8);
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x5e0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(lVar3 + 0x5d8), lVar1 != 0)) goto LAB_100646e20;
    plVar2 = (long *)(param_1 + 0x58);
  }
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    return 0;
  }
LAB_100646e20:
  return *(byte *)(lVar1 + 0x1b0) >> 6 & 1;
}



/* Entry: 100646e34; end: 100646e9b;  */

void FUN_100646e34(long param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_2 + 0x138);
  FUN_100646de8();
  if (iVar1 != 0) {
    uStack_30 = 0xaaaaaaaaaaaaaaaa;
    uStack_28 = 0xaaaaaaaaaaaaaaaa;
    FUN_100a76500(*(undefined8 *)(param_2 + 0x138),&uStack_28,&uStack_30);
    *(undefined8 *)(param_1 + 8) = uStack_28;
    *(undefined8 *)(param_1 + 0x10) = uStack_30;
  }
  *(bool *)param_1 = iVar1 != 0;
  return;
}



/* Entry: 100646e9c; end: 100646ea7;  */

undefined ** FUN_100646e9c(void)

{
  return &PTR_DAT_110a8bd28;
}



/* Entry: 100646ea8; end: 100646fa3;  */

/* WARNING: Possible PIC construction at 0x000100646ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100646f2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100646edc) */
/* WARNING: Removing unreachable block (ram,0x000100646ef4) */
/* WARNING: Removing unreachable block (ram,0x000100646eec) */
/* WARNING: Removing unreachable block (ram,0x00010017bd10) */
/* WARNING: Removing unreachable block (ram,0x000100646f30) */
/* WARNING: Removing unreachable block (ram,0x000100646f60) */
/* WARNING: Removing unreachable block (ram,0x000100646f68) */
/* WARNING: Removing unreachable block (ram,0x000100646f40) */
/* WARNING: Removing unreachable block (ram,0x000100646f4c) */
/* WARNING: Removing unreachable block (ram,0x000100646f74) */
/* WARNING: Removing unreachable block (ram,0x000100646f5c) */

long FUN_100646ea8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1a8 [264];
  
  func_0x00010017b1a0();
  func_0x00010017b588();
  func_0x00010017b618();
  func_0x00010016b2d4();
  lVar1 = (long)*(char *)(param_2 + 0x2f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_2 + 0x20);
  }
  if (lVar1 == 0) {
    func_0x00010017bcfc(extraout_x8);
    if ((bool)in_ZR) {
      return param_1;
    }
    func_0x000107c60e78();
  }
  else {
    func_0x0001001b2ab4();
  }
  lVar1 = param_4 + 0x28;
  func_0x000100174054(lVar1,auStack_1a8);
  func_0x00010017bda4();
  if (param_4 + 8 == lVar1) {
    auStack_218[0] = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    func_0x00010017be9c();
    func_0x00010017bea8();
    func_0x00010017c438(auStack_218);
  }
  return lVar1;
}



/* Entry: 100646fa4; end: 100647047; -[SCSnapcodeStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100646fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda88;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100647048; end: 100647073;  */

void FUN_100647048(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100647074; end: 100647343;  */

void FUN_100647074(void)

{
  return;
}



/* Entry: 100647344; end: 10064734b;  */

void FUN_100647344(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10064734c; end: 10064739f;  */

void FUN_10064734c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006473a0; end: 1006473a7;  */

void FUN_1006473a0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d19b8();
  func_0x000107c613fc();
  FUN_1006474cc(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1006473a8; end: 100647407;  */

void FUN_1006473a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d19b8();
  func_0x000107c613fc();
  FUN_1006474cc(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100647408; end: 1006474cb;  */

void FUN_100647408(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cdeb78;
  param_1[1] = &PTR_DAT_110cdec30;
  return;
}



/* Entry: 1006474cc; end: 100647593;  */

void FUN_1006474cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126a80c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return;
}



/* Entry: 100647594; end: 100647877;  */

long FUN_100647594(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x00010016fe0c(param_1 + 0x28);
  func_0x0001001b20ac(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  func_0x0001001460d8(param_1 + 0xe8,param_1);
  func_0x0001006475f0();
  return param_1;
}



/* Entry: 100647878; end: 10064790f; -[SCMentionStickerInjectorServiceProvider provide] */

void FUN_100647878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896790);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126baa38;
  func_0x000107c610f4(PTR_PTR_1126baa38);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100647910; end: 1006479b3; -[SCMentionStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100647910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda70;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006479b4; end: 1006479bb;  */

void FUN_1006479b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006479bc; end: 100647a0f;  */

void FUN_1006479bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100647a10; end: 100647a17;  */

void FUN_100647a10(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d460c();
  func_0x000107c613fc();
  func_0x000100647a78(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100647a18; end: 100647b3f;  */

void FUN_100647a18(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d460c();
  func_0x000107c613fc();
  func_0x000100647a78(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100647b40; end: 100647bd7; -[SCVenueStickerInjectorServiceProvider provide] */

void FUN_100647b40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108968b0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126bab28;
  func_0x000107c610f4(PTR_PTR_1126bab28);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100647bd8; end: 100647be3; -[SCExtensionSharedFile initFileWithDirectoryURL:filename:delegate:] */

void FUN_100647bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be39bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__initFileWithDirectoryURL_filena_11256c098,param_3,param_4,1,param_5);
  return;
}



/* Entry: 100647be4; end: 100647d0f; -[SCExtensionSharedFile _initFileWithDirectoryURL:filename:autoCreateDirectory:delegate:] */

undefined1 *
FUN_100647be4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270e1b8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_100647cd4;
    }
    lVar2 = param_3;
    func_0x000107c3ac04();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = lVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c56330(*(undefined8 *)((long)puVar1 + 0x20));
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_6);
    if (param_6 != 0) {
      func_0x000107c3d694(PTR__OBJC_CLASS___NSFileCoordinator_1126d3fa0);
    }
  }
  func_0x000107c61174(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_100647cd4:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return puVar5;
}



/* Entry: 100647d10; end: 100647db3; -[SCVenueStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100647d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fdaa0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100647db4; end: 100647dbb;  */

void FUN_100647db4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100647dbc; end: 100647e0f;  */

void FUN_100647dbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100647e10; end: 100647e17;  */

void FUN_100647e10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10021e8c8();
  func_0x000107c613fc();
  FUN_100647e8c(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100647e18; end: 100647e8b;  */

void FUN_100647e18(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10021e8c8();
  func_0x000107c613fc();
  FUN_100647e8c(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100647e8c; end: 100647fef;  */

void FUN_100647e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8038;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 100647ff0; end: 100648c5b;  */

bool FUN_100647ff0(long param_1)

{
  if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0')) {
    return *(long *)(param_1 + 0x38) != 0;
  }
  return false;
}



/* Entry: 100648c5c; end: 100648d63;  */

void FUN_100648c5c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bStack_31;
  
  *(undefined4 *)(param_1[6] + 0xbc) = 0;
  plVar1 = param_1;
  FUN_1001e83a0();
  func_0x000107c60e5c();
  *(undefined4 *)plVar1 = 0;
  if (param_1[0x13] == 0) {
    if (param_1[5] != 0) {
      bStack_31 = 0;
      do {
        if ((*(long *)(param_1[6] + 0x110) != 0) &&
           ((*(ushort *)(*(long *)(param_1[6] + 0x110) + 0x618) & 0x4008) == 0)) {
          plVar1 = param_1;
          FUN_1001e8bc0();
          if ((int)plVar1 < 0) {
            return;
          }
          if ((int)plVar1 == 0) {
            uVar2 = 0xd7;
            uVar3 = 0x429;
            goto LAB_100648cb0;
          }
        }
        (**(code **)(*param_1 + 0x48))(param_1,&bStack_31,param_2,param_3);
        if ((bStack_31 & 1) == 0) {
          return;
        }
      } while( true );
    }
    uVar2 = 0xe2;
    uVar3 = 0x41b;
  }
  else {
    uVar2 = 0x42;
    uVar3 = 0x416;
  }
LAB_100648cb0:
  FUN_1004d2c58(0x10,0,uVar2,&UNK_10f6d0a17,uVar3);
  return;
}



/* Entry: 100648d64; end: 100648e77; -[SCAltitudeStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100648d64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_1127257bc;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10553ef14;
  puStack_40 = &UNK_1108965a0;
  lStack_38 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc(puVar2,param_2,&puStack_58);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar4 = PTR_PTR_1126ba8f0;
  func_0x000107c610f4(PTR_PTR_1126ba8f0);
  func_0x000107c489f8();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100648e78; end: 100648f1b; -[SCAltitudeStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100648e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100648f1c; end: 100648f47;  */

void FUN_100648f1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100648f48; end: 100648f4f;  */

void FUN_100648f48(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100648f50; end: 100648fa3;  */

void FUN_100648f50(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100648fa4; end: 100648fab;  */

void FUN_100648fa4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001c9d2c();
  func_0x000107c613fc();
  func_0x00010064900c(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100648fac; end: 1006490d3;  */

void FUN_100648fac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001c9d2c();
  func_0x000107c613fc();
  func_0x00010064900c(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1006490d4; end: 10064916b; -[SCBatteryStickerInjectorServiceProvider provide] */

void FUN_1006490d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108965f0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126ba950;
  func_0x000107c610f4(PTR_PTR_1126ba950);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10064916c; end: 1006492df;  */

void FUN_10064916c(long param_1,undefined1 *param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  *param_2 = 0;
  lVar7 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar7 + 0xac) == 0) {
    uVar9 = *(uint *)(lVar7 + 0x90);
    *(undefined4 *)(lVar7 + 0x90) = 0;
    if ((-1 < (int)param_4) && (uVar10 = param_4 - uVar9, uVar9 <= param_4)) {
      if (((*(byte *)(param_1 + 0xa4) & 1) == 0) && (*(long *)(lVar7 + 0x110) != 0)) {
        uVar6 = *(uint *)(*(long *)(lVar7 + 0x110) + 0x618);
        uVar11 = 0;
        if ((uVar6 & 0x800) != 0) {
          uVar11 = uVar6 >> 0xe & 1;
        }
      }
      else {
        uVar11 = 0;
      }
      while( true ) {
        uVar5 = (uint)*(ushort *)(param_1 + 0x12);
        uVar6 = uVar5;
        if (uVar11 != 0) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
          uVar1 = *(uint *)(*(long *)(lVar7 + 0x5e0) + 0x17c);
          uVar6 = uVar1 - *(ushort *)(lVar7 + 0x620);
          if (uVar1 < *(ushort *)(lVar7 + 0x620) || uVar6 == 0) {
            *(uint *)(*(long *)(param_1 + 0x30) + 0x90) = uVar9;
            *(uint *)(lVar7 + 0x618) = *(uint *)(lVar7 + 0x618) & 0xffffbfff;
            *param_2 = 1;
            return;
          }
          if (uVar5 <= uVar6) {
            uVar6 = uVar5;
          }
        }
        if (uVar10 <= uVar6) {
          uVar6 = uVar10;
        }
        lVar7 = param_1;
        FUN_1006492e0(param_1,0x17,param_3 + (ulong)uVar9,uVar6);
        iVar2 = (int)lVar7;
        if (iVar2 < 1) break;
        if (uVar11 != 0) {
          lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
          *(short *)(lVar8 + 0x620) = *(short *)(lVar8 + 0x620) + (short)lVar7;
        }
        uVar10 = uVar10 - iVar2;
        if (uVar10 == 0) {
          return;
        }
        if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
          return;
        }
        uVar9 = iVar2 + uVar9;
      }
      *(uint *)(*(long *)(param_1 + 0x30) + 0x90) = uVar9;
      return;
    }
    uVar3 = 0x6f;
    uVar4 = 0x9c;
  }
  else {
    uVar3 = 0xc2;
    uVar4 = 0x8b;
  }
  FUN_1004d2c58(0x10,0,uVar3,&UNK_10f6d009d,uVar4);
  return;
}



/* Entry: 1006492e0; end: 100649523;  */

undefined8 * FUN_1006492e0(undefined8 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uStack_58;
  
  lVar11 = param_1[6];
  if ((*(ushort *)(lVar11 + 0xd4) >> 0xb & 1) == 0) {
    if ((0x4000 < param_4) || (*(short *)(lVar11 + 0x72) != 0)) {
      uVar5 = 0x44;
      uVar6 = 0xe2;
LAB_100649340:
      FUN_1004d2c58(0x10,0,uVar5,&UNK_10f6d009d,uVar6);
      return (undefined8 *)0xffffffff;
    }
    puVar4 = param_1;
    FUN_1001f11b0();
    if ((int)puVar4 == 0) {
      return (undefined8 *)0xffffffff;
    }
    plVar8 = *(long **)(param_1[6] + 0xe8);
    if (plVar8 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *plVar8 - (ulong)*(uint *)(param_1[6] + 0xf0);
    }
    uVar10 = uVar9;
    if (param_4 != 0) {
      puVar4 = param_1;
      FUN_1001f02d4();
      uVar1 = (long)puVar4 + (ulong)param_4;
      uVar10 = uVar1 + uVar9;
      if ((CARRY8((ulong)puVar4,(ulong)param_4)) || (CARRY8(uVar1,uVar9))) {
        uVar5 = 0x45;
        uVar6 = 0xf4;
        goto LAB_100649340;
      }
    }
    if (uVar10 == 0) {
      return (undefined8 *)0x0;
    }
    puVar4 = param_1;
    FUN_100649524(param_1);
    lVar7 = lVar11 + 0x68;
    func_0x0001001f2ca8(lVar7,(long)puVar4 + uVar9,uVar10);
    if ((int)lVar7 == 0) {
      return (undefined8 *)0xffffffff;
    }
    lVar7 = param_1[6];
    if (*(long *)(lVar7 + 0xe8) != 0) {
      if (uVar9 != 0) {
        func_0x000107c610b4(*(long *)(lVar11 + 0x68) + (ulong)*(ushort *)(lVar11 + 0x70) +
                            (ulong)*(ushort *)(lVar11 + 0x72),
                            *(long *)(*(long *)(lVar7 + 0xe8) + 8) + (ulong)*(uint *)(lVar7 + 0xf0),
                            uVar9);
        lVar7 = param_1[6];
      }
      puVar4 = (undefined8 *)(lVar7 + 0xe8);
      func_0x0001001e6c68(puVar4,0);
      lVar7 = param_1[6];
      *(undefined4 *)(lVar7 + 0xf0) = 0;
      if ((ulong)*(ushort *)(lVar11 + 0x74) - (ulong)*(ushort *)(lVar11 + 0x72) < uVar9)
      goto LAB_100649520;
      *(ushort *)(lVar11 + 0x72) = *(ushort *)(lVar11 + 0x72) + (short)uVar9;
    }
    if (param_4 != 0) {
      puVar4 = param_1;
      FUN_1001f0550(param_1,*(long *)(lVar11 + 0x68) + (ulong)*(ushort *)(lVar11 + 0x70) +
                            (ulong)*(ushort *)(lVar11 + 0x72),&uStack_58,
                    (ulong)*(ushort *)(lVar11 + 0x74) - (ulong)*(ushort *)(lVar11 + 0x72),param_2,
                    param_3,param_4);
      if ((int)puVar4 == 0) {
        return (undefined8 *)0xffffffff;
      }
      if ((ulong)*(ushort *)(lVar11 + 0x74) - (ulong)*(ushort *)(lVar11 + 0x72) < uStack_58) {
LAB_100649520:
        func_0x000107c60ebc();
        if ((*(byte *)(*(long *)(puVar4[6] + 0x108) + 0x271) & 1) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (ulong)*(byte *)(*(long *)(puVar4[6] + 0x108) + 0x26d);
        }
        if (*(char *)*puVar4 == '\0') {
          puVar3 = puVar4;
          FUN_1001f0388();
          if ((int)puVar3 == 0) {
            puVar4 = (undefined8 *)(uVar9 + 5);
          }
          else {
            uVar2 = *(int *)(**(long **)(puVar4[6] + 0x108) + 0x1c) - 1;
            if (uVar2 < 4) {
              lVar11 = *(long *)(&UNK_10e52b518 + (ulong)uVar2 * 8);
            }
            else {
              lVar11 = 0;
            }
            puVar4 = (undefined8 *)(uVar9 + 10 + lVar11);
          }
        }
        else {
          puVar4 = (undefined8 *)(uVar9 + 0xd);
        }
        return puVar4;
      }
      *(ushort *)(lVar11 + 0x72) = *(ushort *)(lVar11 + 0x72) + (short)uStack_58;
      lVar7 = param_1[6];
    }
    *(ushort *)(lVar7 + 0xd4) = *(ushort *)(lVar7 + 0xd4) & 0xfbff;
    lVar11 = param_1[6];
    *(long *)(lVar11 + 0xa0) = param_3;
    *(uint *)(lVar11 + 0x94) = param_4;
    *(int *)(lVar11 + 0x98) = (int)param_2;
    *(uint *)(lVar11 + 0x9c) = param_4;
    *(ushort *)(lVar11 + 0xd4) = *(ushort *)(lVar11 + 0xd4) | 0x800;
  }
  lVar11 = param_1[6];
  if (((int)param_4 < *(int *)(lVar11 + 0x94)) ||
     ((((*(byte *)((long)param_1 + 0x84) >> 1 & 1) == 0 && (*(long *)(lVar11 + 0xa0) != param_3)) ||
      (*(int *)(lVar11 + 0x98) != (int)param_2)))) {
    FUN_1004d2c58(0x10,0,0x76,&UNK_10f6d009d,0xcd);
    puVar4 = (undefined8 *)0xffffffff;
  }
  else {
    puVar4 = param_1;
    func_0x000100649724();
    if (0 < (int)puVar4) {
      *(ushort *)(param_1[6] + 0xd4) = *(ushort *)(param_1[6] + 0xd4) & 0xf7ff;
      puVar4 = (undefined8 *)(ulong)*(uint *)(param_1[6] + 0x9c);
    }
  }
  return puVar4;
}



/* Entry: 100649524; end: 1006495bb;  */

long FUN_100649524(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(byte *)(*(long *)(param_1[6] + 0x108) + 0x271) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)*(byte *)(*(long *)(param_1[6] + 0x108) + 0x26d);
  }
  if (*(char *)*param_1 == '\0') {
    puVar2 = param_1;
    FUN_1001f0388();
    if ((int)puVar2 == 0) {
      lVar3 = uVar4 + 5;
    }
    else {
      uVar1 = *(int *)(**(long **)(param_1[6] + 0x108) + 0x1c) - 1;
      if (uVar1 < 4) {
        lVar3 = *(long *)(&UNK_10e52b518 + (ulong)uVar1 * 8);
      }
      else {
        lVar3 = 0;
      }
      lVar3 = uVar4 + 10 + lVar3;
    }
  }
  else {
    lVar3 = uVar4 + 0xd;
  }
  return lVar3;
}



/* Entry: 1006495bc; end: 10064965f; -[SCBatteryStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_1006495bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda58;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100649660; end: 100649667;  */

void FUN_100649660(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100649668; end: 1006496bb;  */

void FUN_100649668(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006496bc; end: 1006496c3;  */

void FUN_1006496bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cd250();
  func_0x000107c613fc();
  FUN_100649928(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1006496c4; end: 10064988f;  */

void FUN_1006496c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001cd250();
  func_0x000107c613fc();
  FUN_100649928(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100649890; end: 100649927;  */

void FUN_100649890(long param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if ((param_4 < *(int *)(lVar1 + 0x94)) ||
     ((((*(byte *)(param_1 + 0x84) >> 1 & 1) == 0 && (*(long *)(lVar1 + 0xa0) != param_3)) ||
      (*(int *)(lVar1 + 0x98) != param_2)))) {
    FUN_1004d2c58(0x10,0,0x76,&UNK_10f6d009d,0xcd);
  }
  else {
    lVar1 = param_1;
    func_0x000100649724();
    if (0 < (int)lVar1) {
      *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) =
           *(ushort *)(*(long *)(param_1 + 0x30) + 0xd4) & 0xf7ff;
    }
  }
  return;
}



/* Entry: 100649928; end: 1006499ef;  */

void FUN_100649928(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126a8088;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return;
}



/* Entry: 1006499f0; end: 100649a87; -[SCDateTimeStickerInjectorServiceProvider provide] */

void FUN_1006499f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110896730);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba8e8;
  func_0x000107c610f4(PTR_PTR_1126ba8e8);
  func_0x000107c46298();
  puVar3 = PTR_PTR_1126ba9b8;
  func_0x000107c610f4(PTR_PTR_1126ba9b8);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100649a88; end: 100649b2b; -[SCDateTimeStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100649a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda68;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100649b2c; end: 100649b33;  */

void FUN_100649b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100649b34; end: 100649b87;  */

void FUN_100649b34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100649b88; end: 100649b9b;  */

void FUN_100649b88(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100219b60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  puVar2 = PTR_PTR_1126a8058;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar11 = uVar12;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar1 + 0x50) = uVar11;
  *param_1 = lVar1;
  return;
}



/* Entry: 100649b9c; end: 10064a093;  */

void FUN_100649b9c(long *param_1,long param_2)

{
  undefined *puVar1;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100219b60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126a8058;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(param_2 + 0x50) = uVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 10064a094; end: 10064a0c3;  */

long FUN_10064a094(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000107c60ca0(param_1 + 0x38);
  }
  return param_1;
}



/* Entry: 10064a0c4; end: 10064a0df;  */

void FUN_10064a0c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000058);
  return;
}



/* Entry: 10064a0e0; end: 10064a113;  */

undefined1 * FUN_10064a0e0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x50] = 0;
  func_0x00010064a0cc();
  return param_1;
}



/* Entry: 10064a114; end: 10064a14f;  */

undefined8 * FUN_10064a114(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c60c94(param_1 + 7,param_2 + 7);
  return param_1;
}



/* Entry: 10064a150; end: 10064a16b;  */

void FUN_10064a150(long param_1)

{
  FUN_10064a114();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 10064a16c; end: 10064a1f7;  */

void FUN_10064a16c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  uVar2 = *param_2;
  uVar3 = *param_3;
  uVar4 = *param_4;
  puVar1[1] = puVar1 + 1;
  puVar1[2] = puVar1 + 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *puVar1 = &PTR_DAT_110cd46f8;
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = 0x32aaaba7;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10064a1f8; end: 10064a2e7;  */

undefined8 * FUN_10064a1f8(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110cd4680;
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((param_2[0x50] == '\x01') && (*param_2 == '\x01')) {
    *(undefined1 *)(param_1 + 1) = 1;
    FUN_10064a16c(&uStack_38,param_2 + 8,param_2 + 0x10,param_2 + 0x18);
    uVar1 = uStack_38;
    uStack_38 = 0;
    func_0x00010064a2f4(puVar2,uVar1);
    FUN_10064a30c(&uStack_38);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x20);
    param_1[4] = *(undefined8 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x30);
    func_0x000107c60ca4(param_1 + 6,param_2 + 0x38);
  }
  else {
    func_0x00010064a2f4(puVar2,0);
  }
  return param_1;
}



/* Entry: 10064a2e8; end: 10064a30b;  */

void FUN_10064a2e8(void)

{
  return;
}


