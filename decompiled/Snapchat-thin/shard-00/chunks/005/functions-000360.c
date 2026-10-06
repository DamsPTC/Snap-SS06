/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100782574; end: 100782617; -[SCGenerativeAIDreamsServices initWithGenAIDreamsService:genAIDreamsBadgeService:] */

undefined1 *
FUN_100782574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fc808;
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



/* Entry: 100782618; end: 1007826d7;  */

void FUN_100782618(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007826d8; end: 100782973;  */

bool FUN_1007826d8(long *param_1)

{
  if ((*param_1 != 0) && (*(char *)(*param_1 + 4) == '\0')) {
    return param_1[1] != 0;
  }
  return false;
}



/* Entry: 100782974; end: 10078299b;  */

void FUN_100782974(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10078299c; end: 100782afb;  */

undefined * FUN_10078299c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110465b68;
  func_0x000107c613fc(&UNK_110465b68,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_50 = &UNK_101ca3690;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101ca3770;
  puStack_58 = &UNK_110465b80;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_50 = &UNK_101ca36a0;
  puStack_48 = (undefined *)0x0;
  puStack_70 = puVar5;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101ca376c;
  puStack_58 = &UNK_110465ba8;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126a8e60;
  func_0x000107c610f8(PTR_PTR_1126a8e60);
  func_0x000107c466e4();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 100782afc; end: 100782b1f;  */

void FUN_100782afc(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100782b20; end: 100782b4b;  */

void FUN_100782b20(void)

{
  long extraout_x8;
  
  FUN_10064dcb4();
  func_0x0001001b43c8();
                    /* WARNING: Could not recover jumptable at 0x000100782b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 100782b4c; end: 100782b63;  */

void FUN_100782b4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100782b64; end: 100782cff;  */

void FUN_100782b64(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auStack_48 [16];
  long *plStack_38;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     ((*(char *)(param_1 + 0xa1) != '\x01' || (*(long *)(param_1 + 0xd0) == param_2)))) {
    plVar7 = *(long **)(param_2 + 0x798);
    *(undefined8 *)(param_2 + 0x798) = 0;
    if ((*(long *)(param_1 + 0x28) == 0) || (func_0x000100782c60(), *(long *)(param_1 + 0x28) == 0))
    {
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b3ad2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7);
        return;
      }
    }
    else {
      func_0x00010064de24(param_1,param_2);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(0,0x100782c58);
        (*pcVar1)();
      }
      func_0x000100782c78(*(undefined8 *)(param_2 + 0x220),*(undefined8 *)(param_2 + 0x228),1);
      plStack_38 = plVar7;
      (**(code **)(**(long **)(param_1 + 0x30) + 0x10))
                (*(long **)(param_1 + 0x30),param_3,param_2 + 0x220,&plStack_38);
      plVar7 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        func_0x0001001afe1c();
      }
    }
    return;
  }
  if (*(int *)(param_2 + 0x630) == 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (lVar4 != 0) {
    func_0x000107c369a8();
  }
  if ((((*(long *)(param_1 + 0x40) != 0) || (*(long *)(param_1 + 0x48) != 0)) ||
      ((iVar5 = *(int *)(param_1 + 0x9c), iVar5 == 0 && (*(char *)(param_1 + 0xa0) != '\x01')))) ||
     (piVar6 = (int *)(param_1 + 0x98), *piVar6 != 0)) goto code_r0x0001001c6a98;
  if ((iVar5 == 0) && ((*(byte *)(param_1 + 0xa0) & 1) != 0)) {
    func_0x000107c369d8();
    func_0x000107c2de24();
  }
  else if (iVar5 != -0x6a && iVar5 != -0x15) {
    if (iVar5 == -0x69) {
      func_0x000100621180(auStack_48,param_1 + 0xe8);
      puVar2 = auStack_48;
      func_0x00010017d174(puVar2,param_1 + 0x58);
      func_0x000107c60ca0(auStack_48);
      if (((ulong)puVar2 & 1) != 0) goto code_r0x0001001c6a90;
      iVar5 = *(int *)(param_1 + 0x9c);
    }
    func_0x000100220d50(&UNK_10f75128e,-iVar5);
    func_0x000107c2d958(2);
    func_0x000107c369d8();
    func_0x000107c2de1c();
  }
code_r0x0001001c6a90:
  *(undefined1 *)(param_1 + 0xa0) = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
code_r0x0001001c6a98:
  if (((*(long *)(param_1 + 0x28) == 0) && (*(long *)(param_1 + 0x40) == 0)) &&
     (*(long *)(param_1 + 0x48) == 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = lVar3 + 0x10;
    func_0x0001001c6b00(lVar4,&stack0xffffffffffffffd8);
    if (lVar3 + 0x18 != lVar4) {
      func_0x0001001c6bec(lVar3 + 0x10,lVar4);
    }
    return;
  }
  return;
}



/* Entry: 100782d00; end: 100782da3; -[SCDreamsSessionService initWithDreamsSessionManager:asyncSessionManager:] */

undefined1 *
FUN_100782d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112704340;
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



/* Entry: 100782da4; end: 100782dcf;  */

void FUN_100782da4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100782dd0; end: 1007830eb;  */

void FUN_100782dd0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *plVar4;
  undefined1 auStack_48 [8];
  
  param_1 = param_1 + -8;
  func_0x0001001b4880();
  if (*(long *)(param_1 + 0x3f8) != 0) {
    func_0x000100889154();
    func_0x000107c3669c();
    func_0x000107c36700();
  }
  plVar4 = (long *)*unaff_x22;
  *unaff_x22 = 0;
  lVar2 = *(long *)(unaff_x19 + 0x3f8);
  *(long **)(unaff_x19 + 0x3f8) = plVar4;
  if (lVar2 != 0) {
    FUN_10089c060();
    plVar4 = *(long **)(unaff_x19 + 0x3f8);
  }
  func_0x00010015d41c(auStack_48,unaff_x19 + 0x768);
  (**(code **)(*plVar4 + 0xb0))(plVar4,auStack_48);
  func_0x000100140e00(auStack_48);
  func_0x000100782eec(unaff_x19 + 0x408);
  func_0x0001007832e0(unaff_x19 + 0x3a8);
  *(undefined1 *)(unaff_x19 + 0xea) = *(undefined1 *)(*(long *)(unaff_x19 + 0x3f0) + 0xa1);
  uVar1 = *(int *)(*(long *)(unaff_x19 + 0x3f0) + 0xa4) - 1;
  if (uVar1 < 3) {
    puVar3 = (&PTR_DAT_110cd99f0)[uVar1];
  }
  else {
    puVar3 = &UNK_10f759cc2;
  }
  lVar2 = unaff_x19 + 0x140;
  func_0x000107c60c64(lVar2,puVar3);
  *(undefined1 *)(unaff_x19 + 0xe9) = *(undefined1 *)(*(long *)(unaff_x19 + 0x3f0) + 0xa8);
  func_0x00010078343c();
  (**(code **)(extraout_x8 + 0xc0))();
  FUN_1001dacf4(unaff_x19 + 0x2c8,lVar2);
  func_0x000100783450();
  func_0x000100783554();
  return;
}



/* Entry: 1007830ec; end: 1007831cf; -[SCCloudSyncLoggingServiceProvider provide] */

void FUN_1007830ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d81f8;
  func_0x000107c610f4(PTR_PTR_1126d81f8);
  func_0x000107c45e74();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007831d0; end: 1007839cf;  */

void FUN_1007831d0(void)

{
  undefined1 in_ZR;
  
  func_0x0001001b469c();
  if (!(bool)in_ZR) {
    func_0x0001001b46d0();
    func_0x0001007831f8();
  }
  return;
}



/* Entry: 1007839d0; end: 100783a43; -[SCCloudSyncLoggingServices initWithCloudSyncLogger:] */

undefined1 * FUN_1007839d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbab0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100783a44; end: 100783a97;  */

void FUN_100783a44(void)

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



/* Entry: 100783a98; end: 100783a9f;  */

void FUN_100783a98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100783aa0; end: 100783af3;  */

void FUN_100783aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100783af4; end: 100783aff;  */

void FUN_100783af4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002a0408();
  func_0x000107c613fc();
  FUN_100783cc4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100783b00; end: 100783b93;  */

void FUN_100783b00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002a0408();
  func_0x000107c613fc();
  FUN_100783cc4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100783b94; end: 100783cc3;  */

void FUN_100783b94(long param_1)

{
  if (param_1 != 0) {
    func_0x000100140e00(param_1 + 0x40);
    func_0x000100783bc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100783cc4; end: 100783ea7;  */

void FUN_100783cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9440;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0x65536574696c7173;
  func_0x000107c5fadc(0x65536574696c7173,0xee00736563697672);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100783ea8; end: 10078414b;  */

bool FUN_100783ea8(long param_1)

{
  if ((*(long *)(param_1 + 8) != 0) && (*(char *)(*(long *)(param_1 + 8) + 4) == '\0')) {
    return *(long *)(param_1 + 0x10) != 0;
  }
  return false;
}



/* Entry: 10078414c; end: 100784267; -[SCMemoriesStorageServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078414c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112771e00;
    func_0x000107c61148();
  }
  lVar1 = lVar5;
  func_0x000107c4e604();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_112771e04;
    func_0x000107c61148();
  }
  lVar2 = lVar5;
  func_0x000107c5cec4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100b88708;
  puStack_48 = &UNK_110a14948;
  puVar3 = PTR_PTR_1126ae720;
  lStack_40 = lVar1;
  lStack_38 = lVar2;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_60);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126d8778;
  func_0x000107c610f4(PTR_PTR_1126d8778);
  func_0x000107c476cc();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100784268; end: 1007842d3;  */

void FUN_100784268(void)

{
  return;
}



/* Entry: 1007842d4; end: 100784347; -[SCMemoriesStorageServices initWithMemoriesAssetRepository:] */

undefined1 * FUN_1007842d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbd00;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100784348; end: 10078437b;  */

void FUN_100784348(void)

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



/* Entry: 10078437c; end: 1007846df;  */

undefined8 * FUN_10078437c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puStack_38;
  
  FUN_100697dac(param_1,0x71);
  puVar3 = *(undefined8 **)(param_1 + 0x438);
  puVar1 = (undefined4 *)0x38;
  func_0x000107c60e20();
  *puVar1 = 1;
  *(undefined **)(puVar1 + 2) = &UNK_10b3eee74;
  *(undefined8 *)(puVar1 + 4) = 0x1007844c4;
  *(undefined8 *)(puVar1 + 6) = 0x100142430;
  uVar2 = *param_3;
  *(long *)(puVar1 + 10) = param_1;
  *(undefined8 *)(puVar1 + 0xc) = uVar2;
  *param_3 = 0;
  puStack_38 = puVar1;
  (**(code **)*puVar3)(puVar3,param_1,param_2,&puStack_38);
  func_0x000100140e00(&puStack_38);
  if ((int)puVar3 != -1) {
    func_0x000100698064(param_1,puVar3);
  }
  return puVar3;
}



/* Entry: 1007846e0; end: 1007846e7;  */

void FUN_1007846e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007846e8; end: 10078473b;  */

void FUN_1007846e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078473c; end: 10078474b;  */

void FUN_10078473c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100219060();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_100784a00(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_100785678();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_1007856c8();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 10078474c; end: 10078492b;  */

void FUN_10078474c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  FUN_100219060();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_100784a00(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100785678();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_1007856c8();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 10078492c; end: 1007849ff;  */

undefined4 *
FUN_10078492c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = 0;
  param_1[1] = param_2;
  func_0x0001001a7c84(param_1 + 2,param_3);
  func_0x000100187f00(param_1 + 0x20,param_3);
  func_0x0001007849f8(param_1 + 0x2e,param_3);
  func_0x000100178054(param_1 + 0x34,param_4);
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 1;
  func_0x000107c60ee4(param_1 + 0x7e,0xa2);
  *(undefined8 *)((long)param_1 + 0x1e9) = 0;
  *(undefined8 *)((long)param_1 + 0x1e1) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0xa8) = param_5;
  *(undefined8 *)(param_1 + 0xaa) = param_6;
  *(undefined8 *)(param_1 + 0xac) = param_7;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  *(undefined4 **)(param_1 + 0xae) = param_1 + 0xb0;
  func_0x0001001b20ac(param_1 + 0xb6);
  return param_1;
}



/* Entry: 100784a00; end: 100784a37;  */

void FUN_100784a00(undefined8 param_1)

{
  if (lRam0000000112dee5b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e669580);
  return;
}



/* Entry: 100784a38; end: 100784af3;  */

void FUN_100784a38(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  
  *param_1 = param_2;
  if ((param_2 != (uint *)0x0) && (uVar1 = *param_2, *param_2 = uVar1 + 1, 0xfffffffe < uVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0,0x100784a58);
    (*pcVar2)();
  }
  return;
}



/* Entry: 100784af4; end: 100784b3f;  */

void FUN_100784af4(long param_1)

{
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = puStack_38;
  puStack_28 = puStack_38;
  puStack_20 = puStack_38;
  puStack_18 = puStack_38;
  func_0x000107c61524(param_1,0x100,5,&puStack_38,param_1 + 0x70);
  return;
}



/* Entry: 100784b40; end: 100785553;  */

void FUN_100784b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if (((*(long *)(param_1 + 0x198) != 0) && (*(char *)(param_1 + 0x1a4) != '\x01')) ||
     (lVar1 = param_1, func_0x000100784d7c(param_1,param_4), (int)lVar1 != 0)) {
    func_0x0001001db650(param_1 + 0x2d8,0x164,param_4);
    lVar1 = 0;
    if (*(int *)(param_1 + 0x1a0) != 5) {
      lVar1 = param_1 + 0x1a8;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x198);
    puStack_58 = &UNK_10b396120;
    uStack_50 = 0;
    puVar2 = &UNK_10b396a10;
    lStack_60 = param_1;
    func_0x000107c2da68(&UNK_10b396a10,&puStack_58,&lStack_60);
    puStack_48 = puVar2;
    func_0x000107c2da74(uVar3,lVar1,param_2,&puStack_48,param_1 + 0x1d8);
    func_0x000100140e00(&puStack_48);
    if ((int)uVar3 == -1) {
      func_0x0001001c2158(param_1 + 0x2d0,param_3);
    }
    else {
      func_0x000107c2da54(param_1,uVar3);
    }
  }
  return;
}



/* Entry: 100785554; end: 100785677;  */

undefined8 *
FUN_100785554(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_50;
  long lStack_48;
  
  ppcVar7 = &pcStack_80;
  ppcVar8 = &pcStack_80;
  ppcVar6 = &pcStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100785550();
  puVar9 = (undefined8 *)*param_1;
  FUN_10028c49c();
  lVar10 = puVar9[2];
  func_0x000107c60d88(lVar10 + 8);
  lVar11 = *(long *)(lVar10 + 0x70);
  pcStack_80 = FUN_100786a7c;
  ppuStack_78 = &PTR_DAT_110cd3460;
  uStack_70 = param_2;
  puStack_50 = param_1;
  FUN_1005760fc(lVar10 + 0x48);
  func_0x0001007858b8();
  puVar4 = (undefined8 *)(lVar10 + 8);
  func_0x000107c60d8c();
  if (lVar11 == 0) {
    plVar5 = (long *)*puVar9;
    ppuStack_78 = (undefined **)puVar9[3];
    pcStack_80 = (code *)puVar9[2];
    if (puVar9[3] != 0) {
      plVar1 = (long *)(puVar9[3] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar5 + 0x10))();
    FUN_100576684();
    puVar4 = ppcVar6;
    ppcVar7 = ppcVar8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  func_0x000107c60e78();
  FUN_100576684(&pcStack_80);
  func_0x000107c60bd8(puVar4);
  func_0x000107c61170();
  param_1[2] = ppcVar7;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  return param_1;
}



/* Entry: 100785678; end: 1007856c7;  */

void FUN_100785678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 1007856c8; end: 10078585f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1007856c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303ea38);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113080730);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113080ad0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c42eac();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar4 = &UNK_11042fce8;
  func_0x000107c613fc(&UNK_11042fce8,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  *(undefined8 *)(puVar4 + 0x30) = uVar3;
  FUN_1000285a8(0x112dee580,&UNK_10d9bb930);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  puVar5 = &UNK_101a41414;
  FUN_1000bdd8c(&UNK_101a41414,puVar4);
  uVar6 = 0;
  FUN_1002190ec(0);
  func_0x000107c610f8();
  FUN_1007858cc(puVar5,uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  return puVar5;
}



/* Entry: 100785860; end: 1007858a3;  */

void FUN_100785860(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007858a4; end: 1007858cb;  */

void FUN_1007858a4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_DAT_110cd3460;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1007858cc; end: 100785953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007858cc(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11303e690) = param_1;
  FUN_1002190ec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100785954; end: 10078595b;  */

void FUN_100785954(undefined8 *param_1)

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



/* Entry: 10078595c; end: 1007859af;  */

void FUN_10078595c(undefined8 *param_1)

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



/* Entry: 1007859b0; end: 1007859b7;  */

void FUN_1007859b0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_100289c38();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_100785a9c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_100785b18();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_100785ba0();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 1007859b8; end: 100785a9b;  */

void FUN_1007859b8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100289c38();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_100785a9c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_100785b18();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_100785ba0();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100785a9c; end: 100785b17;  */

void FUN_100785a9c(undefined8 param_1)

{
  if (lRam0000000112e27e98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e68df84);
  return;
}



/* Entry: 100785b18; end: 100785b9f;  */

void FUN_100785b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  FUN_1000285a8(0x112d6e3a8,&UNK_10d930310);
  uVar1 = param_2;
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return;
}



/* Entry: 100785ba0; end: 100785e23;  */

undefined * FUN_100785ba0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar9 = &puStack_90;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_101d42368;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101d42484;
  puStack_78 = &UNK_11047a2d0;
  puStack_68 = (undefined *)uVar10;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_11047a308;
  func_0x000107c613fc(&UNK_11047a308,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  puStack_70 = &UNK_101d42480;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101d42488;
  puStack_78 = &UNK_11047a320;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar5 = &UNK_11047a358;
  func_0x000107c613fc(&UNK_11047a358,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  FUN_1000285a8(0x112e27e68,&UNK_10da10248);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar7 = &UNK_101d423cc;
  FUN_1000bdd8c(&UNK_101d423cc,puVar5);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar5 = &UNK_11047a380;
  func_0x000107c613fc(&UNK_11047a380,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  puStack_70 = &UNK_101d423d4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101d4248c;
  puStack_78 = &UNK_11047a398;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  uVar10 = 0;
  FUN_100289cc4(0);
  func_0x000107c610f8();
  FUN_100785e7c(puVar4,puVar7,puVar8,uVar10);
  func_0x000107c61170(puVar2);
  return puVar4;
}



/* Entry: 100785e24; end: 100785e47;  */

void FUN_100785e24(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100785e48; end: 100785e6b;  */

void FUN_100785e48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100785e6c; end: 100785e7b;  */

void FUN_100785e6c(void)

{
  return;
}



/* Entry: 100785e7c; end: 100785ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100785e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ff4990) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff49a0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4998) = param_3;
  FUN_100289cc4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100785ed0; end: 100785fbf;  */

void FUN_100785ed0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 auStack_60 [32];
  
  if ((((int)param_2 == 0) &&
      (*(undefined1 *)(param_1 + 0x21) = 1, (*(byte *)(param_1 + 0x20) & 1) == 0)) &&
     (*(long *)(param_1 + 8) == 0)) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (*(int *)(lVar3 + 0x44) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    func_0x000107c35fd8();
    func_0x000107c2cf08(auStack_60,&UNK_10f74aab1,9,param_2);
    func_0x000107c2cf08(auStack_60,&UNK_10f74aabb,10,uVar1);
    func_0x000107c2cf04(auStack_60,&UNK_10f74aac6,10,uVar2);
    func_0x000107c2dfec(lVar3,0x1ae,param_1 + 0x30,2,auStack_60);
    func_0x000100139d84(auStack_60);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001001afc70((long *)(param_1 + 0x28),param_2);
  }
  return;
}



/* Entry: 100785fc0; end: 100785feb;  */

void FUN_100785fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100785fec; end: 100785fff;  */

void FUN_100785fec(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong in_x9;
  undefined8 *unaff_x20;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined1 auStack_60 [48];
  
  puVar3 = unaff_x20 + 0xdb;
  uVar2 = in_stack_00000040;
  uStack0000000000000058 = in_x9;
  uStack0000000000000060 = param_1;
  func_0x00010061bc24(in_stack_00000040,in_stack_00000048);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0,0x10061bdfc);
    (*pcVar1)();
  }
  func_0x00010061bd70(uStack0000000000000058,uStack0000000000000060);
  if ((uStack0000000000000058 & 1) != 0) {
    func_0x00010061be10(puVar3,&stack0x00000040,&stack0x00000058);
    puVar4 = puVar3;
    func_0x00010061be7c();
    if ((undefined8 *)puVar3[1] != puVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8)
                (puVar4 + 3,*unaff_x20,unaff_x20[1]);
      return;
    }
    func_0x00010061bee0();
    func_0x00010061bf28();
    func_0x00010061c2d0(auStack_60);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x10061be08);
  (*pcVar1)();
}



/* Entry: 100786000; end: 100786007;  */

void FUN_100786000(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100786008; end: 10078605b;  */

void FUN_100786008(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078605c; end: 100786067;  */

void FUN_10078605c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100284324();
  func_0x000107c613fc();
  FUN_100786248(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100786068; end: 1007860fb;  */

void FUN_100786068(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100284324();
  func_0x000107c613fc();
  FUN_100786248(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1007860fc; end: 10078620f;  */

void FUN_1007860fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000068);
  return;
}



/* Entry: 100786210; end: 100786247;  */

void FUN_100786210(undefined8 param_1)

{
  if (lRam0000000112e27bf8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e68de44);
  return;
}



/* Entry: 100786248; end: 100786323;  */

void FUN_100786248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_100786210(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1007866d4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100786f60();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100786324; end: 10078637b;  */

void FUN_100786324(long param_1)

{
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = puStack_38;
  puStack_20 = puStack_38;
  puStack_18 = puStack_28;
  func_0x000107c61524(param_1,0x100,5,&puStack_38,param_1 + 0x70);
  return;
}



/* Entry: 10078637c; end: 10078640f;  */

void FUN_10078637c(undefined8 param_1,long *param_2)

{
  long unaff_x19;
  long lVar1;
  
  func_0x00010061bfa0();
  for (lVar1 = *param_2; lVar1 != *(long *)(unaff_x19 + 8); lVar1 = lVar1 + 0x30) {
    func_0x00010061bda8();
  }
  return;
}



/* Entry: 100786410; end: 10078669f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100786410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  FUN_1000285a8(0x112e27cc0,&UNK_10da10110);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  puVar1 = &UNK_101d40e40;
  FUN_1000bdd8c(&UNK_101d40e40,0);
  FUN_1000285a8(0x112e27cc8,&UNK_10da10118);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar2 = &UNK_101d41080;
  FUN_1000bdd8c(&UNK_101d41080,puVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  FUN_1000285a8(0x112e27cd0,&UNK_10da10120);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  puVar2 = &UNK_101d410b4;
  FUN_1000bdd8c(&UNK_101d410b4,puVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_60 = &UNK_101d410e8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101d40e70;
  puStack_68 = &UNK_11047a000;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar7 = puStack_58;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  FUN_1000d224c(&puStack_80);
  puVar3 = puStack_60;
  puVar7 = puStack_68;
  FUN_1000a8868(&puStack_80,puStack_68);
  uVar6 = 2;
  FUN_10043c5c0(2,0xd,0,puVar7,puVar3,ppuVar5);
  func_0x0001000834e4(&puStack_80);
  puVar7 = &UNK_11047a038;
  func_0x000107c613fc(&UNK_11047a038,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar6;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  FUN_1000285a8(0x112e27cd8,&UNK_10da10128);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(param_3);
  puVar3 = &UNK_101d41114;
  FUN_1000bdd8c(&UNK_101d41114,puVar7);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  return;
}



/* Entry: 1007866a0; end: 1007866d3;  */

void FUN_1007866a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007866d4; end: 100786723;  */

undefined8 FUN_1007866d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100786410();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 100786724; end: 100786a23;  */

ulong FUN_100786724(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  byte bVar6;
  ulong uVar7;
  undefined1 auStack_158 [112];
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_1 + -8;
  func_0x000100783c30();
  uVar2 = *(char *)(lVar4 + 0x148) == '\x01';
  uStack_48 = extraout_x8;
  if ((bool)uVar2) {
    uVar7 = (ulong)*(uint *)(param_1 + 0x144);
  }
  else {
    (*(code *)PTR_FUN_11336f910)();
    if (*(long *)(param_1 + 0x138) == 0) goto LAB_100786970;
    *(long *)(*(long *)(param_1 + 0x138) + 0x158) = lVar4;
    if (*(long *)(param_1 + 0x220) != 0) {
      *(long *)(*(long *)(param_1 + 0x220) + 0x80) = lVar4;
    }
    if (*(long *)(param_1 + 0x280) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x100786980);
      (*pcVar1)();
    }
    iVar3 = (int)*(undefined8 *)(param_1 + 0x218);
    func_0x0001007869b8();
    if (iVar3 != 0) {
      puVar5 = &UNK_10e58a168;
      func_0x0001007869ec(&UNK_10e58a168);
      func_0x000100786c14(param_1 + 0x280,puVar5);
      *(undefined4 *)(param_1 + 0x288) = 0;
    }
    if (*param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x10078698c);
      (*pcVar1)();
    }
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(0,0x100786998);
      (*pcVar1)();
    }
    if (*(long *)(param_1 + 0x228) != 0) {
      func_0x000100885894(param_3);
      FUN_10089ba88(param_1 + 0x228,0);
    }
    *(long *)(param_1 + 0x220) = param_3;
    uStack_60 = 0xaaaaaaaaaaaaaaaa;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    uStack_50 = 0xaa00;
    uVar7 = *(ulong *)(param_1 + 0x138);
    func_0x000100786c54(uVar7,&uStack_60);
    if ((int)uVar7 == 0) {
      lVar4 = *(long *)(param_1 + 0x220);
      *(undefined8 *)(lVar4 + 0x50) = uStack_58;
      *(undefined8 *)(lVar4 + 0x48) = uStack_60;
      *(undefined4 *)(lVar4 + 0x58) = uStack_50;
      uVar2 = **(int **)(param_1 + 0x138) == 2;
      if ((bool)uVar2) {
        if (*(long *)(param_1 + 0x268) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(0,0x1007869a4);
          (*pcVar1)();
        }
        func_0x0001001c2158(param_1 + 0x268,param_4);
        uVar7 = 0xffffffff;
      }
      else {
        uStack_88 = 0xaaaaaaaaaaaaaaaa;
        uStack_90 = 0xaaaaaaaaaaaaaaaa;
        uStack_78 = 0xaaaaaaaaaaaaaaaa;
        uStack_80 = 0xaaaaaaaaaaaaaaaa;
        uStack_a8 = 0xaaaaaaaaaaaaaaaa;
        uStack_b0 = 0xaaaaaaaaaaaaaaaa;
        uStack_98 = 0xaaaaaaaaaaaaaaaa;
        uStack_a0 = 0xaaaaaaaaaaaaaaaa;
        uStack_c8 = 0xaaaaaaaaaaaaaaaa;
        uStack_d0 = 0xaaaaaaaaaaaaaaaa;
        uStack_b8 = 0xaaaaaaaaaaaaaaaa;
        uStack_c0 = 0xaaaaaaaaaaaaaaaa;
        uStack_d8 = 0xaaaaaaaaaaaaaaaa;
        uStack_e0 = 0xaaaaaaaaaaaaaaaa;
        func_0x000100641dd4(&uStack_e0);
        func_0x000100652770(*(undefined8 *)(param_1 + 0x218),param_2,&uStack_e0);
        lVar4 = *(long *)(*(long *)(param_1 + 0x138) + 0x1f8);
        puStack_e8 = &uStack_e0;
        if (*(int *)(lVar4 + 0x44) != 0) {
          ppuStack_68 = &puStack_e8;
          ppuStack_70 = &PTR_DAT_110cdf160;
          func_0x000107c2dfe8(lVar4,0xab,*(long *)(param_1 + 0x138) + 0x1e8,0,&ppuStack_70);
        }
        FUN_100786e8c(param_1,&uStack_e0);
        uVar7 = *(ulong *)(param_1 + 0x218);
        func_0x0001007869b8();
        if ((uVar7 & 1) == 0) {
          lVar4 = param_1 + 0x18;
          func_0x00010064670c();
          bVar6 = *(byte *)(lVar4 + 0x440) ^ 1;
        }
        else {
          bVar6 = 0;
        }
        uVar7 = *(ulong *)(param_1 + 0x138);
        func_0x0001006544a0(auStack_158,&uStack_e0);
        func_0x0001006546dc(uVar7,auStack_158,bVar6);
        func_0x000100654af8(auStack_158);
        uVar2 = (int)uVar7 == -1;
        if ((bool)uVar2) {
          if (*(long *)(param_1 + 0x260) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(0,0x1007869b0);
            (*pcVar1)();
          }
          func_0x0001001c2158(param_1 + 0x260,param_4);
        }
        func_0x000100654af8(&uStack_e0);
      }
    }
  }
  FUN_100784268(uStack_48);
  if ((bool)uVar2) {
    return uVar7;
  }
  func_0x000107c60e78();
LAB_100786970:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x100786974);
  (*pcVar1)();
}



/* Entry: 100786a24; end: 100786a43;  */

void FUN_100786a24(void)

{
  func_0x000107c61168(&PTR_PTR_112802858);
  return;
}



/* Entry: 100786a44; end: 100786a7b;  */

void FUN_100786a44(undefined8 *param_1,undefined4 param_2)

{
  func_0x0001001f30c8();
  *param_1 = &PTR_DAT_110cd7418;
  *(undefined4 *)(param_1 + 3) = param_2;
  return;
}



/* Entry: 100786a7c; end: 100786aa3;  */

void FUN_100786a7c(long param_1)

{
  func_0x000100786a70(*(undefined8 *)(param_1 + 0x10));
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100786b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    return;
  }
  return;
}



/* Entry: 100786aa4; end: 100786c93;  */

void FUN_100786aa4(long param_1)

{
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = 0;
  (**(code **)(lStack_18 + 8))(lStack_18);
  func_0x000100140e00(&lStack_18);
  return;
}



/* Entry: 100786c94; end: 100786cb3;  */

void FUN_100786c94(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100786cb4; end: 100786d43; -[SCNNetworkApiNetworkApi getNQEService] */

void FUN_100786cb4(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x000100786ca8();
  (**(code **)(extraout_x8 + 0x68))(auStack_30);
  FUN_100786df0(auStack_30);
  func_0x000107c61180();
  FUN_10063a040(auStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100786d44; end: 100786d7b;  */

void FUN_100786d44(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x1d8);
  uVar2 = *(undefined8 *)(param_2 + 0x1d0);
  param_1[1] = *(undefined8 *)(param_2 + 0x1d8);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010060f468(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 100786d7c; end: 100786def;  */

void FUN_100786d7c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cec788;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000100786d6c();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_100786e1c);
  func_0x000107c61180();
  func_0x000100787678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100786df0; end: 100786e1b;  */

void FUN_100786df0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100786d7c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100786e1c; end: 100786e8b;  */

void FUN_100786e1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e01f8;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100786d6c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10063a040(&uStack_30);
  return;
}



/* Entry: 100786e8c; end: 100786f5f;  */

void FUN_100786e8c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    plVar2 = (long *)(param_2 + 0x28);
    while (uStack_78 = uStack_48, lVar3 = *plVar2, lVar3 != param_2 + 0x20) {
      puVar1 = (undefined8 *)(lVar3 + 0x20);
      func_0x000100658a14();
      func_0x000107c2dd68(&uStack_60,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
      plVar2 = (long *)(lVar3 + 8);
    }
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_80 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = uStack_40;
    uStack_68 = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*(long *)(param_1 + 0x10) + 8))(*(long *)(param_1 + 0x10),&uStack_90);
    func_0x000107c2dd64(&uStack_90);
    func_0x000107c2dd64(&uStack_60);
  }
  return;
}



/* Entry: 100786f60; end: 100787097;  */

void FUN_100786f60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1002ad988(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000100786fdc(uVar1,uVar2,uVar4,uVar3);
  return;
}



/* Entry: 100787098; end: 1007870cb;  */

void FUN_100787098(void)

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



/* Entry: 1007870cc; end: 1007870d3;  */

void FUN_1007870cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007870d4; end: 100787127;  */

void FUN_1007870d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100787128; end: 100787133;  */

void FUN_100787128(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10020e244();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1007872a0(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar4 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  uVar5 = uStack_58;
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar6 = uVar5;
  FUN_100787334(uVar5,uVar3,uVar4,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_100787390();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 100787134; end: 10078729f;  */

void FUN_100787134(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10020e244();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1007872a0(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  uVar4 = uStack_58;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar5 = uVar4;
  FUN_100787334(uVar4,uVar2,uVar3,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_100787390();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1007872a0; end: 100787327;  */

void FUN_1007872a0(undefined8 param_1)

{
  if (lRam0000000112dee848 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6696f4);
  return;
}



/* Entry: 100787328; end: 100787333;  */

undefined1  [16] FUN_100787328(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x130);
}



/* Entry: 100787334; end: 10078736f;  */

void FUN_100787334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 100787370; end: 10078738f;  */

void FUN_100787370(void)

{
  func_0x000107c61168(&PTR_PTR_112dee700);
  return;
}



/* Entry: 100787390; end: 10078756f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100787390(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar1 = 0;
  FUN_100787370();
  func_0x000107c613fc();
  FUN_1000285a8(0x112dee800,&UNK_10d9bba90);
  func_0x000107c613fc();
  puVar2 = &UNK_101a42560;
  FUN_1000bdd8c(&UNK_101a42560,0);
  puVar3 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083868);
  puVar4 = &UNK_11042fe38;
  func_0x000107c613fc(&UNK_11042fe38,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  FUN_1000285a8(0x112dee808,&UNK_10d9bba98);
  func_0x000107c613fc();
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(puVar3);
  puVar5 = &UNK_101a42638;
  FUN_1000bdd8c(&UNK_101a42638,puVar4);
  uVar7 = 0x112dee810;
  FUN_1000285a8(0x112dee810,&UNK_10d9bbaa0);
  puVar4 = &UNK_101a42644;
  FUN_1000cb480(&UNK_101a42644,0,uVar7);
  uVar7 = 0x112dee818;
  FUN_1000285a8(0x112dee818,&UNK_10d9bbaa8);
  puVar6 = &UNK_101a42658;
  FUN_1000cb480(&UNK_101a42658,0,uVar7);
  uVar7 = 0;
  FUN_10020e2d0(0);
  func_0x000107c610f8();
  FUN_100787b14(puVar4,puVar6,uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar1);
  return puVar4;
}



/* Entry: 100787570; end: 1007875ab;  */

void FUN_100787570(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007875ac; end: 1007875eb; -[SCNNetworkQualityEstimationNetworkQualityEstimationService .cxx_construct] */

undefined8 * FUN_1007875ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100786d6c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1007875ec; end: 1007875f3;  */

void FUN_1007875ec(void)

{
  return;
}



/* Entry: 1007875f4; end: 10078766b; -[SCNNetworkQualityEstimationNetworkQualityEstimationService initWithCpp:] */

undefined1 * FUN_1007875f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127063e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000100786d6c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10063a040(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10078766c; end: 10078768f;  */

void FUN_10078766c(void)

{
  return;
}



/* Entry: 100787690; end: 1007876db; -[SCNNetworkQualityEstimationNetworkQualityEstimationService downloadBandwidthKbps] */

void FUN_100787690(void)

{
  long extraout_x8;
  
  func_0x000100787684();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 1007876dc; end: 1007876e3;  */

undefined8 FUN_1007876dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1007876e4; end: 100787737; -[SCNNetworkQualityEstimationNetworkQualityEstimationService .cxx_destruct] */

void FUN_1007876e4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cec788;
    FUN_1004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_10063a040((long *)(param_1 + 0x18));
  FUN_1004a5588(param_1 + 8);
  return;
}


