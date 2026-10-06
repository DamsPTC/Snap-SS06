/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021b153c; end: 1021b16ef;  */

long FUN_1021b153c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  lVar1 = 0;
  FUN_1021b1be0(0,0x112d604c0,&PTR_PTR_1126b78f8);
  uVar2 = 0x112d604c8;
  lStack_48 = lVar1;
  func_0x0001000285a8(0x112d604c8,&UNK_10d9269e8);
  plVar3 = &lStack_48;
  func_0x000107c5fb18(plVar3,uVar2);
  func_0x00010257b1cc(lVar1,param_2,param_3,plVar3,uVar2,param_4,lVar1);
  func_0x000107c6142c(uVar2);
  lVar4 = lVar1;
  func_0x000107c59a2c();
  func_0x000107c5eff4();
  lVar5 = lVar1;
  func_0x000107c5d204(lVar1);
  func_0x000107c61180();
  lVar6 = lVar1;
  if (lVar4 == 0) {
    lVar4 = lVar5;
    FUN_1021b2868();
    uVar2 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c59e18(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c5d204(lVar1);
    func_0x000107c61180();
    lVar4 = lVar6;
    FUN_1021b288c();
  }
  else {
    lVar4 = lVar5;
    FUN_1021b2958();
    uVar2 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c59e18(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c5d204(lVar1);
    func_0x000107c61180();
    lVar4 = lVar6;
    func_0x0001021b2a2c();
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c59a8c(lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  return lVar1;
}



/* Entry: 1021b16f0; end: 1021b179f;  */

long * FUN_1021b16f0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1021b17a0; end: 1021b17e3;  */

void FUN_1021b17a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001021b17e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 1021b17e4; end: 1021b1867;  */

undefined8 * FUN_1021b17e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  iVar2 = *(int *)(param_3 + 0x14);
  lVar3 = 0;
  func_0x000107c5ede0();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar4)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Entry: 1021b1868; end: 1021b19bf;  */

undefined8 * FUN_1021b1868(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Entry: 1021b19c0; end: 1021b19d7;  */

void FUN_1021b19c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1021b19d8; end: 1021b1ae7;  */

void FUN_1021b19d8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10da67e28;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10da67e40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1021b1ae8; end: 1021b1afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b1ae8(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  cVar2 = *(char *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar9 + 0x10,auStack_68,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  if (lVar9 == 0) {
    return;
  }
  if (cVar2 == '\x01') {
    lVar3 = *(long *)(lVar9 + _DAT_112e5ff28);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_1021b042c;
    lVar4 = lVar10;
    func_0x000107c5fadc(lVar10,uVar1);
    puVar5 = &UNK_1104da720;
    func_0x000107c613fc(&UNK_1104da720,0x30,7);
    *(long *)(puVar5 + 0x10) = lVar9;
    *(long *)(puVar5 + 0x18) = lVar10;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    *(undefined8 *)(puVar5 + 0x28) = param_1;
    pcStack_78 = FUN_1021b1afc;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e10;
    puStack_80 = &UNK_1104da738;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_70;
    func_0x000107c61174(lVar9);
    func_0x000107c61434(uVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar5);
    func_0x000107c416d4(lVar3);
    lVar10 = lVar9;
    lVar9 = lVar4;
  }
  else {
    if (cVar2 != '\0') {
      pcVar7 = "clearLensNotification(lensId:sender:error:)";
      func_0x0001000c10c0("clearLensNotification(lensId:sender:error:)");
      func_0x000107c61180();
      pcVar8 = pcVar7;
      func_0x000107c614f0();
      puVar5 = &UNK_1104da6f8;
      func_0x000107c613fc(&UNK_1104da6f8,0x38,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(long *)(puVar5 + 0x20) = lVar10;
      *(undefined8 *)(puVar5 + 0x28) = uVar1;
      *(long *)(puVar5 + 0x30) = lVar9;
      func_0x000107c61174(lVar9);
      func_0x000107c61434(uVar1);
      func_0x000107c61174(param_1);
      func_0x00010090569c(0x1021b1af8,puVar5,pcVar8);
      func_0x000107c61170(lVar9);
      func_0x000107c615e8(pcVar7);
      func_0x000107c61574(puVar5);
      return;
    }
    lVar3 = *(long *)(lVar9 + _DAT_112e5ff20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_1021b042c;
    lVar4 = lVar10;
    func_0x000107c5fadc(lVar10,uVar1);
    puVar5 = &UNK_1104da770;
    func_0x000107c613fc(&UNK_1104da770,0x30,7);
    *(long *)(puVar5 + 0x10) = lVar9;
    *(long *)(puVar5 + 0x18) = lVar10;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    *(undefined8 *)(puVar5 + 0x28) = param_1;
    pcStack_78 = (code *)0x1021b1b5c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e10;
    puStack_80 = &UNK_1104da788;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_70;
    func_0x000107c61174(lVar9);
    func_0x000107c61434(uVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar5);
    func_0x000107c416fc(lVar3);
    lVar10 = lVar9;
    lVar9 = lVar4;
  }
  func_0x000107c61170(lVar10);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(lVar3);
LAB_1021b042c:
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 1021b1afc; end: 1021b1bc3;  */

void FUN_1021b1afc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1021b044c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&UNK_1104da7e8,
                0x1021b2010);
  return;
}



/* Entry: 1021b1bc4; end: 1021b1bdf;  */

void FUN_1021b1bc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar6 = &puStack_70;
  puVar5 = &UNK_1104da810;
  func_0x000107c613fc(&UNK_1104da810,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  *(undefined8 *)(puVar5 + 0x28) = uVar7;
  uStack_50 = 0x1021b1bd4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104da828;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c614b0(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c420a8(uVar1);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 1021b1be0; end: 1021b1c1f;  */

void FUN_1021b1be0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021b1c20; end: 1021b1c3b;  */

void FUN_1021b1c20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  uStack_40 = 0x1021b1c28;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104da878;
  uStack_38 = uVar2;
  func_0x000107c60bc4(&puStack_60);
  uVar3 = uStack_38;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c420a8(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1021b1c3c; end: 1021b1c7f;  */

void FUN_1021b1c3c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1021ae9b8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1021b1c80; end: 1021b1c8b;  */

void FUN_1021b1c80(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  puVar3 = auStack_60;
  func_0x000107c61428(lVar1 + 0x10,puVar3,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    puVar3 = auStack_78;
    func_0x000107c61428(lVar4 + 0x10,puVar3,0,0);
    if (*(char *)(lVar4 + 0x10) != '\x01') {
      func_0x0001021b23a0();
      goto LAB_1021aeb78;
    }
  }
  func_0x0001021b22d4();
LAB_1021aeb78:
  FUN_1021ac2f4();
  func_0x000107c6142c(puVar3);
  FUN_1021ac798();
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1021b1c8c; end: 1021b1cc7;  */

void FUN_1021b1c8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021b1cc8; end: 1021b1cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b1cc8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  char *pcVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(lVar1 + _DAT_112e5ff38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
    uVar11 = *(undefined8 *)(lVar6 + 0x10);
    uVar5 = uVar11;
    func_0x000107c61434(uVar11);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar11);
    lVar6 = lVar4;
    func_0x000107c44100(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    puVar7 = &UNK_1104da568;
    func_0x000107c613fc(&UNK_1104da568,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar1);
    puVar8 = &UNK_1104daba8;
    func_0x000107c613fc(&UNK_1104daba8,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar2;
    *(undefined8 *)(puVar8 + 0x20) = uVar3;
    pcStack_68 = FUN_1021b1dac;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100bcda3c;
    puStack_70 = &UNK_1104dabc0;
    ppuVar9 = &puStack_88;
    puStack_60 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_60;
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(puVar7);
    pcVar10 = "loadData()";
    func_0x0001000c10c0("loadData()");
    func_0x000107c61180();
    func_0x000107c5dc68(lVar6);
    func_0x000107c615e8(pcVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1021b1ce0; end: 1021b1d13;  */

void FUN_1021b1ce0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021b1d14; end: 1021b1d1f;  */

void FUN_1021b1d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar3 = "loadData()";
  func_0x0001000c10c0("loadData()");
  func_0x000107c61180();
  pcVar4 = pcVar3;
  func_0x000107c614f0();
  puVar5 = &UNK_1104dab58;
  func_0x000107c613fc(&UNK_1104dab58,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  func_0x000107c61434(param_1);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x00010090569c(0x1021b1fa8,puVar5,pcVar4);
  func_0x000107c615e8(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar5);
  return;
}



/* Entry: 1021b1d20; end: 1021b1dab;  */

void FUN_1021b1d20(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021b1dac; end: 1021b1f1f;  */

void FUN_1021b1dac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  long alStack_60 [3];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (param_2 != 0) {
    return;
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      alStack_60[0] = 0;
      uVar4 = 0;
      FUN_1021b1be0(0,0x112dc0c68,&PTR_PTR_1126c8b58);
      func_0x000107c5fc50(param_1,alStack_60,uVar4);
      lVar2 = alStack_60[0];
      if (alStack_60[0] != 0) {
        func_0x000107c61428(lVar1 + 0x10,alStack_60,0,0);
        uVar6 = *(undefined8 *)(lVar1 + 0x10);
        func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
        uVar4 = *(undefined8 *)(lVar5 + 0x10);
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar4);
        FUN_1021ad248(lVar2,uVar6,uVar4);
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(lVar2);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar4);
        return;
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1021b1f20; end: 1021b1f5f;  */

void FUN_1021b1f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e60058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da67eac;
  func_0x000107c61520(&UNK_10da67eac,&UNK_1104dac68);
  puRam0000000112e60058 = puVar1;
  return;
}



/* Entry: 1021b1f60; end: 1021b1ff7;  */

void FUN_1021b1f60(long param_1,long param_2)

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



/* Entry: 1021b1ff8; end: 1021b1ffb; -[SCLensSettingsViewController defaultProjectNameV3] */

void FUN_1021b1ff8(void)

{
  func_0x000107c5fadc(0x6172656d6143,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021b1ffc; end: 1021b206f; -[SCLensSettingsViewController defaultProjectNameV2] */

void FUN_1021b1ffc(void)

{
  func_0x000107c5fadc(0x6172656d6143,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021b2070; end: 1021b2867;  */

undefined1  [16] FUN_1021b2070(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f06b050);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010da67ec0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b213c);
  (*pcVar1)();
}



/* Entry: 1021b2868; end: 1021b288b;  */

undefined1  [16] FUN_1021b2868(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x74735f6c61636f6c;
  func_0x000107c5fadc(0x74735f6c61636f6c,0xed0000656761726f);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010da67ec0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b2a2c);
  (*pcVar1)();
}



/* Entry: 1021b288c; end: 1021b2957;  */

undefined1  [16] FUN_1021b288c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f06af30);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010da67ec0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b2958);
  (*pcVar1)();
}



/* Entry: 1021b2958; end: 1021b297b;  */

undefined1  [16] FUN_1021b2958(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x74735f64756f6c63;
  func_0x000107c5fadc(0x74735f64756f6c63,0xed0000656761726f);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010da67ec0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b2a2c);
  (*pcVar1)();
}



/* Entry: 1021b297c; end: 1021b2af7;  */

undefined1  [16] FUN_1021b297c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010da67ec0);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b2a2c);
  (*pcVar1)();
}



/* Entry: 1021b2af8; end: 1021b2b07;  */

undefined1  [16] FUN_1021b2af8(void)

{
  return ZEXT816(0x1104dacc0);
}



/* Entry: 1021b2b08; end: 1021b2c4b;  */

void FUN_1021b2b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dad60;
  func_0x000107c613fc(&UNK_1104dad60,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x1021b2ba0,puVar1);
  return;
}



/* Entry: 1021b2c4c; end: 1021b2ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b2c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e60060) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60068) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60070) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60078) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021b2ccc; end: 1021b2de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b2ccc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_48;
  
  lVar1 = _DAT_112e60060;
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112e60060);
  puVar7 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    func_0x000100083b20(&lStack_48);
    lVar2 = lStack_48;
    func_0x000100083b20(&lStack_48);
    lVar3 = lStack_48;
    func_0x000100083b20(&lStack_48);
    lVar6 = lStack_48;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1021b2de4);
      (*pcVar4)();
    }
    puVar7 = PTR_PTR_1126aa0b0;
    func_0x000107c610f8();
    func_0x000107c45f2c();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(lVar6);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61170(uVar8);
    puVar5 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar5);
  return puVar7;
}



/* Entry: 1021b2de4; end: 1021b2e0f; -[_TtC39SCComposerDynamicDeliverySettingsPlugin48ComposerDynamicDeliverySettingsRowProviderPlugin sectionRow] */

void FUN_1021b2de4(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c3d014();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021b2e10; end: 1021b2e43; -[_TtC39SCComposerDynamicDeliverySettingsPlugin48ComposerDynamicDeliverySettingsRowProviderPlugin rowViewModel] */

void FUN_1021b2e10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b2e44();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021b2e44; end: 1021b2f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b2e44(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = (undefined *)0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f06b090);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    if ((int)lVar4 == 0) {
      puVar5 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar3 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c4d73c();
      func_0x000107c61180();
      func_0x000107c4a8a4(puVar5);
    }
    else {
      FUN_1021b2ccc();
      puVar5 = puVar3;
      func_0x000107c5093c();
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b2f58);
  (*pcVar1)();
}



/* Entry: 1021b2f58; end: 1021b2fb7; -[_TtC39SCComposerDynamicDeliverySettingsPlugin48ComposerDynamicDeliverySettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b2f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b2f9c) */

void FUN_1021b2f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021b2ccc();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b2fb8; end: 1021b2feb;  */

void FUN_1021b2fb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021b2fec; end: 1021b2ffb;  */

undefined1  [16] FUN_1021b2fec(void)

{
  return ZEXT816(0x1104dad88);
}



/* Entry: 1021b2ffc; end: 1021b3053; -[_TtC39SCComposerDynamicDeliverySettingsPlugin48ComposerDynamicDeliverySettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b2ffc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60078));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60070));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60068));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60060));
  return;
}



/* Entry: 1021b3054; end: 1021b3073;  */

void FUN_1021b3054(void)

{
  func_0x000107c61168(&PTR_PTR_112824538);
  return;
}



/* Entry: 1021b3074; end: 1021b318f;  */

void FUN_1021b3074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dae38;
  func_0x000107c613fc(&UNK_1104dae38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021b3190,puVar1);
  return;
}



/* Entry: 1021b3190; end: 1021b3197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b3190(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1021b3990();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e600a8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e600b0) = 0;
  *(long *)(lVar5 + _DAT_112e600b8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e600c0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1021b3198; end: 1021b3213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b3198(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e600a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e600b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e600b8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e600c0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021b3214; end: 1021b32eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b3214(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112e600a8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e600a8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(0x112e600f0,&UNK_10da68080);
    func_0x000107c610f8();
    uVar4 = uStack_48;
    func_0x00010017da58(uStack_48);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021b32ec; end: 1021b334f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021b32ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e600b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e600b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1021b3350();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1021b3350; end: 1021b3517;  */

undefined * FUN_1021b3350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = param_1;
  FUN_1021b39d4();
  puVar2 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  uVar3 = uVar1;
  func_0x000107c5fadc(uVar1,param_2);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f06b160);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48db4(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  puVar5 = PTR_PTR_1126aeae0;
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c5e2b8();
  func_0x000107c61180();
  puVar6 = &UNK_1104dae80;
  func_0x000107c613fc(&UNK_1104dae80,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_1);
  puVar7 = PTR_PTR_1126aeae8;
  func_0x000107c610f8(PTR_PTR_1126aeae8);
  pcStack_60 = FUN_1021b39b0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ea3124;
  puStack_68 = &UNK_1104dae98;
  ppuVar8 = &puStack_80;
  puStack_58 = puVar6;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(puVar6);
  func_0x000107c48560(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar8);
  puVar2 = puStack_58;
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar2);
  return puVar7;
}



/* Entry: 1021b3518; end: 1021b3573;  */

void FUN_1021b3518(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1021b3574(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1021b3574; end: 1021b36a3;  */

/* WARNING: Possible PIC construction at 0x0001021b35bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b35f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b366c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b35f8) */
/* WARNING: Removing unreachable block (ram,0x0001021b35c0) */
/* WARNING: Removing unreachable block (ram,0x0001021b3600) */
/* WARNING: Removing unreachable block (ram,0x0001021b35c8) */
/* WARNING: Removing unreachable block (ram,0x0001021b3670) */

void FUN_1021b3574(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c4d508();
    func_0x000107c61180();
    if (param_1 != 0) {
      FUN_1021b3214();
      func_0x000107c5194c();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1021b36a4; end: 1021b36cf; -[_TtC36SCSpotlightRepliesSettingsEntryPoint41SpotlightRepliesSettingsRowProviderPlugin sectionRow] */

void FUN_1021b36a4(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c5e2b8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021b36d0; end: 1021b3703; -[_TtC36SCSpotlightRepliesSettingsEntryPoint41SpotlightRepliesSettingsRowProviderPlugin rowViewModel] */

void FUN_1021b36d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b3704();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021b3704; end: 1021b37db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b3704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_38;
  
  func_0x000100083b20(&puStack_38);
  puVar1 = puStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puStack_38);
  puVar2 = puVar1;
  func_0x0001005929c0();
  func_0x000107c615e8(puVar1);
  if ((int)puVar2 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar1 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar2,param_2,puVar1);
  }
  else {
    FUN_1021b32ec();
    puVar2 = puVar1;
    func_0x000107c5093c();
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1021b37dc; end: 1021b383b; -[_TtC36SCSpotlightRepliesSettingsEntryPoint41SpotlightRepliesSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b381c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b3820) */

void FUN_1021b37dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021b32ec();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b383c; end: 1021b38c7; -[_TtC36SCSpotlightRepliesSettingsEntryPoint41SpotlightRepliesSettingsRowProviderPlugin didCompleteSpotlightRepliesSettingPageScope:] */

/* WARNING: Possible PIC construction at 0x0001021b3870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b38a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b3874) */
/* WARNING: Removing unreachable block (ram,0x0001021b3878) */
/* WARNING: Removing unreachable block (ram,0x0001021b38ac) */
/* WARNING: Removing unreachable block (ram,0x0001021b38b4) */

void FUN_1021b383c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021b3214();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b38c8; end: 1021b3927; -[_TtC36SCSpotlightRepliesSettingsEntryPoint41SpotlightRepliesSettingsRowProviderPlugin init] */

void FUN_1021b38c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightRepliesSettingsEntryPoint.SpotlightRepliesSettingsRowProviderPlugin"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b38f4);
  (*pcVar1)();
}



/* Entry: 1021b3928; end: 1021b3937;  */

undefined1  [16] FUN_1021b3928(void)

{
  return ZEXT816(0x1104dae60);
}



/* Entry: 1021b3938; end: 1021b398f; -[_TtC36SCSpotlightRepliesSettingsEntryPoint41SpotlightRepliesSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021b3974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b3978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b3938(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e600b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e600c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e600a8));
  return;
}



/* Entry: 1021b3990; end: 1021b39af;  */

void FUN_1021b3990(void)

{
  func_0x000107c61168(&PTR_PTR_112824610);
  return;
}



/* Entry: 1021b39b0; end: 1021b39d3;  */

void FUN_1021b39b0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1021b3574(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1021b39d4; end: 1021b3a9f;  */

undefined1  [16] FUN_1021b39d4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f06b180);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f06b1a0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b3aa0);
  (*pcVar1)();
}



/* Entry: 1021b3aa0; end: 1021b3aaf;  */

undefined1  [16] FUN_1021b3aa0(void)

{
  return ZEXT816(0x1104daed0);
}



/* Entry: 1021b3ab0; end: 1021b3c2b;  */

void FUN_1021b3ab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104daf70;
  func_0x000107c613fc(&UNK_1104daf70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1021b3b30,puVar1);
  return;
}



/* Entry: 1021b3c2c; end: 1021b3cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021b3c2c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112e600f8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e600f8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    uVar4 = uStack_48;
    func_0x000100083b20(&uStack_48);
    puVar3 = PTR_PTR_1126aa0b8;
    func_0x000107c610f8();
    func_0x000107c45f30();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uStack_48);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021b3d00; end: 1021b3d53; -[_TtC48SCFriendingRecentlyActiveIndicatorSettingsPlugin48RecentlyActiveIndicatorSettingsRowProviderPlugin sectionRow] */

void FUN_1021b3d00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b3c2c();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b3d54; end: 1021b3da7; -[_TtC48SCFriendingRecentlyActiveIndicatorSettingsPlugin48RecentlyActiveIndicatorSettingsRowProviderPlugin rowViewModel] */

void FUN_1021b3d54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b3c2c();
  uVar2 = uVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b3da8; end: 1021b3e07; -[_TtC48SCFriendingRecentlyActiveIndicatorSettingsPlugin48RecentlyActiveIndicatorSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b3de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b3dec) */

void FUN_1021b3da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021b3c2c();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b3e08; end: 1021b3e3b;  */

void FUN_1021b3e08(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021b3e3c; end: 1021b3e4b;  */

undefined1  [16] FUN_1021b3e3c(void)

{
  return ZEXT816(0x1104daf98);
}



/* Entry: 1021b3e4c; end: 1021b3e93; -[_TtC48SCFriendingRecentlyActiveIndicatorSettingsPlugin48RecentlyActiveIndicatorSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b3e4c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60100));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60108));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e600f8));
  return;
}



/* Entry: 1021b3e94; end: 1021b3eb3;  */

void FUN_1021b3e94(void)

{
  func_0x000107c61168(&PTR_PTR_1128246e8);
  return;
}



/* Entry: 1021b3eb4; end: 1021b420f;  */

void FUN_1021b3eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104db038;
  func_0x000107c613fc(&UNK_1104db038,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1021b3f58,puVar1);
  return;
}



/* Entry: 1021b4210; end: 1021b4263; -[_TtC28BlockedFriendsSettingsPlugin39BlockedFriendsSettingsRowProviderPlugin sectionRow] */

void FUN_1021b4210(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001021b4098();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b4264; end: 1021b42b7; -[_TtC28BlockedFriendsSettingsPlugin39BlockedFriendsSettingsRowProviderPlugin rowViewModel] */

void FUN_1021b4264(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001021b4098();
  uVar2 = uVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021b42b8; end: 1021b4317; -[_TtC28BlockedFriendsSettingsPlugin39BlockedFriendsSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b42f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b42fc) */

void FUN_1021b42b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001021b4098();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021b4318; end: 1021b434b;  */

void FUN_1021b4318(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021b434c; end: 1021b435b;  */

undefined1  [16] FUN_1021b434c(void)

{
  return ZEXT816(0x1104db060);
}



/* Entry: 1021b435c; end: 1021b43b3; -[_TtC28BlockedFriendsSettingsPlugin39BlockedFriendsSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021b4378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b437c) */
/* WARNING: Removing unreachable block (ram,0x0001021b439c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b435c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e60148));
  return;
}



/* Entry: 1021b43b4; end: 1021b43d3;  */

void FUN_1021b43b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128247b8);
  return;
}



/* Entry: 1021b43d4; end: 1021b445b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021b43d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e601a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e601a8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112e601b0);
    func_0x0001033939d0();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000103393490();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1021b445c; end: 1021b44bb; -[_TtC28FriendingFindFriendsSettings30FindFriendsSettingsRowProvider init] */

void FUN_1021b445c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingFindFriendsSettings.FindFriendsSettingsRowProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021b4488);
  (*pcVar1)();
}



/* Entry: 1021b44bc; end: 1021b4543; -[_TtC28FriendingFindFriendsSettings30FindFriendsSettingsRowProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021b44d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b44f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b44fc) */
/* WARNING: Removing unreachable block (ram,0x0001021b44dc) */
/* WARNING: Removing unreachable block (ram,0x0001021b452c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b44bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60180));
  return;
}



/* Entry: 1021b4544; end: 1021b456f; -[_TtC28FriendingFindFriendsSettings30FindFriendsSettingsRowProvider sectionRow] */

void FUN_1021b4544(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c5e2b8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021b4570; end: 1021b45f3; -[_TtC28FriendingFindFriendsSettings30FindFriendsSettingsRowProvider rowViewModel] */

void FUN_1021b4570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = puVar1;
  FUN_1021b4fa4();
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4e01c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c4a8a4(puVar1,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1021b45f4; end: 1021b4acb;  */

/* WARNING: Possible PIC construction at 0x0001021b4658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b49ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b49fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021b4a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b4abc) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a30) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a20) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a10) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a00) */
/* WARNING: Removing unreachable block (ram,0x0001021b49f0) */
/* WARNING: Removing unreachable block (ram,0x0001021b467c) */
/* WARNING: Removing unreachable block (ram,0x0001021b4680) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a84) */
/* WARNING: Removing unreachable block (ram,0x0001021b4694) */
/* WARNING: Removing unreachable block (ram,0x0001021b4ab4) */
/* WARNING: Removing unreachable block (ram,0x0001021b46b4) */
/* WARNING: Removing unreachable block (ram,0x0001021b465c) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a5c) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a60) */
/* WARNING: Removing unreachable block (ram,0x0001021b4660) */
/* WARNING: Removing unreachable block (ram,0x0001021b4a8c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b45f4(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e60180);
    func_0x000107c61174();
    func_0x000107c5dbd4(uVar1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1021b4acc; end: 1021b4b7f;  */

void FUN_1021b4acc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1104db290;
  func_0x000107c613fc(&UNK_1104db290,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uStack_40 = 0x1021b50e8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104db2a8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1021b4b80; end: 1021b4d0b;  */

void FUN_1021b4b80(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar5,param_1,param_2);
  puVar2 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar5);
  }
  else {
    (**(code **)(lVar6 + 0x20))(lVar4,puVar5,lVar1);
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      lVar3 = param_3;
      FUN_1021b43d4();
      func_0x000107c61170(param_3);
      func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61618(param_4);
      func_0x0001033934dc(lVar4,param_4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_4);
    }
    (**(code **)(lVar6 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 1021b4d0c; end: 1021b4d67;  */

void FUN_1021b4d0c(uint param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1021b4d68(param_1 & 1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1021b4d68; end: 1021b4f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b4d68(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e60190);
  func_0x000107c4f808();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b15b0;
    func_0x000107c61168(PTR_PTR_1126b15b0);
    if ((param_1 & 1) == 0) {
      func_0x000107c4d6e0();
    }
    else {
      func_0x000107c42b14();
    }
    func_0x000107c61180();
    pcStack_40 = FUN_1021b4f80;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_101095cec;
    puStack_48 = &UNK_1104db258;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c5d5c0(lVar2,param_2,puVar3,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1021b4f2c; end: 1021b4f7f; -[_TtC28FriendingFindFriendsSettings30FindFriendsSettingsRowProvider handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021b4f68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021b4f6c) */

void FUN_1021b4f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021b45f4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021b4f80; end: 1021b4f83;  */

void FUN_1021b4f80(void)

{
  return;
}



/* Entry: 1021b4f84; end: 1021b4fa3;  */

void FUN_1021b4f84(void)

{
  func_0x000107c61168(&PTR_PTR_112824890);
  return;
}



/* Entry: 1021b4fa4; end: 1021b509b;  */

undefined * FUN_1021b4fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1021b5a78();
  uVar1 = param_1;
  uVar4 = param_2;
  FUN_1021b5a78();
  uVar2 = uVar1;
  uVar5 = uVar4;
  FUN_1021b5a78();
  puVar3 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(uVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c48db4(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return puVar3;
}



/* Entry: 1021b509c; end: 1021b511b;  */

void FUN_1021b509c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  puVar3 = &UNK_1104db290;
  func_0x000107c613fc(&UNK_1104db290,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  uStack_40 = 0x1021b50e8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104db2a8;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1021b511c; end: 1021b52e7;  */

void FUN_1021b511c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104db2e0;
  func_0x000107c613fc(&UNK_1104db2e0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1021b52e8,puVar1);
  return;
}



/* Entry: 1021b52e8; end: 1021b52f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b52e8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_1021b5a38();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112e601e0) = 1;
  *(long *)(lVar9 + _DAT_112e601e8) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112e601f0) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112e601f8) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112e60200) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112e60208) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112e60210) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 1021b52f8; end: 1021b53bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b52f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e601e0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e601e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e601f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e601f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e60200) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e60208) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e60210) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021b53bc; end: 1021b5427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021b53bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e601e0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e601e0);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_1021b5428();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    FUN_1021b5a58(uVar4);
  }
  func_0x0001021b5a68(lVar3);
  return lVar2;
}



/* Entry: 1021b5428; end: 1021b5623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021b5428(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  lVar3 = *(long *)(lStack_58 + _DAT_1130220f0);
  func_0x000107c61174();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000100083b20(&lStack_58);
    lVar3 = lStack_58;
    uVar5 = 0x112e4de20;
    func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
    func_0x000107c610f8();
    func_0x00010017da58(lVar3,uVar5);
    puVar6 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&lStack_58);
    lVar3 = lStack_58;
    func_0x000100083b20(&lStack_58);
    lVar1 = lStack_58;
    lVar7 = lStack_58;
    func_0x000107c42eac();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021b5624);
      (*pcVar2)();
    }
    func_0x000100083b20(&lStack_58);
    lVar8 = 0;
    FUN_1021b4f84();
    lVar9 = lVar8;
    func_0x000107c610f8();
    lVar1 = _DAT_112e601a0;
    pcVar10 = "FindFriendsSettingsRowProvider";
    func_0x0001000c10c0();
    func_0x000107c61180();
    *(char **)(lVar9 + lVar1) = pcVar10;
    *(undefined8 *)(lVar9 + _DAT_112e601a8) = 0;
    *(long *)(lVar9 + _DAT_112e60180) = lVar3;
    *(long *)(lVar9 + _DAT_112e60188) = lVar7;
    *(long *)(lVar9 + _DAT_112e60190) = lStack_58;
    *(long *)(lVar9 + _DAT_112e60198) = lVar4;
    *(undefined **)(lVar9 + _DAT_112e601b0) = puVar6;
    lStack_68 = lVar9;
    lStack_60 = lVar8;
    func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 1021b5624; end: 1021b564f; -[_TtC28FriendingFindFriendsSettings36FindFriendsSettingsRowProviderPlugin sectionRow] */

void FUN_1021b5624(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c5e2b8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021b5650; end: 1021b5683; -[_TtC28FriendingFindFriendsSettings36FindFriendsSettingsRowProviderPlugin rowViewModel] */

void FUN_1021b5650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021b5684();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


