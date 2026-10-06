/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030ed7a0; end: 1030ed7c3;  */

void FUN_1030ed7a0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1030ed7c4; end: 1030ed7ef;  */

void FUN_1030ed7c4(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 1030ed7f0; end: 1030ed7ff;  */

void FUN_1030ed7f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    func_0x0001007d6d78();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1030ed800; end: 1030edb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ed800(void)

{
  char *pcVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307b800);
  func_0x000107c6157c(uVar7);
  pcVar1 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar2 = (long *)pcVar1;
  func_0x000100471e0c();
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(pcVar1);
  puVar3 = &UNK_11060cf00;
  func_0x000107c613fc(&UNK_11060cf00,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar7 = 0x1030ee5c0;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(0x1030ee5c0);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  uVar4 = uVar7;
  func_0x000107c614f0(uVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  (**(code **)(puVar6 + 0x18))(uVar8,uVar4,puVar6);
  func_0x000107c615e8(uVar7);
  FUN_1030ea684(unaff_x20 + 0x28,auStack_68);
  puVar5 = auStack_68;
  func_0x0001030ee608(puVar5,0x112f3c7d0,&UNK_10db89380);
  if (lStack_50 != 0) {
    func_0x0001030ed9ec();
    pcVar1 = "begin()";
    func_0x0001000c10c0();
    func_0x000107c61180();
    plVar2 = (long *)pcVar1;
    func_0x000100471e0c();
    func_0x000107c61574(puVar5);
    func_0x000107c615e8(pcVar1);
    puVar3 = &UNK_11060cf00;
    func_0x000107c613fc(&UNK_11060cf00,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar7 = 0x1030ee5c8;
    puVar6 = puVar3;
    (**(code **)(*plVar2 + 0x60))(0x1030ee5c8);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    uVar4 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar6 + 0x18))(uVar8,uVar4,puVar6);
    func_0x000107c615e8(uVar7);
  }
  return;
}



/* Entry: 1030edb5c; end: 1030edc9b;  */

bool FUN_1030edb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c61434(param_3);
  puVar1 = &uStack_70;
  func_0x000107c6061c(puVar1,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar1);
  if (param_1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,param_1);
    func_0x000107c615e8(param_1);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x0001030ee608(&uStack_50,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar2 = 0x112dec308;
    func_0x0001000285a8(0x112dec308,&UNK_10d9b80a0);
    plVar3 = &lStack_78;
    func_0x000107c6147c(plVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar4 = lStack_78;
      func_0x000107c51b0c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c4f654();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lStack_78);
        return lVar5 != 0;
      }
      func_0x000107c61170(lStack_78);
    }
  }
  return false;
}



/* Entry: 1030edc9c; end: 1030edd03;  */

void FUN_1030edc9c(undefined8 *param_1,long param_2)

{
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1030edd04(&uStack_60);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1030edd04; end: 1030ede77;  */

/* WARNING: Possible PIC construction at 0x0001030ee224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ee2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ede04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ee2e4) */
/* WARNING: Removing unreachable block (ram,0x0001030ee228) */
/* WARNING: Removing unreachable block (ram,0x0001030ede08) */

void FUN_1030edd04(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 *unaff_x20;
  undefined8 uVar11;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar2 = param_1[2];
  lVar6 = param_1[3];
  lVar3 = param_1[4];
  lVar7 = param_1[5];
  lVar4 = param_1[6];
  puVar9 = (undefined *)param_1[7];
  uVar10 = (uint)((ulong)lVar2 >> 0x3e);
  if (uVar10 == 0) {
    uVar11 = *unaff_x20;
    *(undefined1 *)(unaff_x20 + 0xd) = 0;
    unaff_x20[0xe] = 0;
    uStack_68 = unaff_x20[4];
    puVar8 = &UNK_11060cf00;
    puStack_70 = puVar9;
    func_0x000107c613fc(&UNK_11060cf00,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    puVar9 = &UNK_11060d018;
    func_0x000107c613fc(&UNK_11060d018,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *)(puVar9 + 0x18) = uVar11;
    func_0x000107c6157c(puVar8);
    FUN_1030ea974(lVar1,lVar5,lVar2,lVar6,lVar3,lVar7,lVar4,puStack_70);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar8);
    return;
  }
  if (uVar10 == 1) {
    if ((*(char *)(unaff_x20 + 0xd) != '\0') && (*(char *)((long)unaff_x20 + 0x69) != '\0')) {
      unaff_x20[0xe] = lVar1;
    }
    *(undefined1 *)((long)unaff_x20 + 0x6a) = 1;
  }
  else if (lVar2 == -0x8000000000000000 &&
           (((lVar6 == 0 && lVar5 == 0) && (lVar1 == 0 && lVar3 == 0)) &&
           ((lVar7 == 0 && lVar4 == 0) && puVar9 == (undefined *)0x0))) {
    FUN_1030eac4c(unaff_x20[4]);
  }
  else {
    *(undefined1 *)((long)unaff_x20 + 0x6a) = 0;
  }
  if ((((*(byte *)((long)unaff_x20 + 0x6a) & 1) == 0) || (*(char *)(unaff_x20 + 0xd) == '\0')) ||
     (*(char *)((long)unaff_x20 + 0x69) == '\0')) {
    *(undefined1 *)(unaff_x20[4] + 0x91) = 0;
    FUN_1030f3c74(0,0);
  }
  else if (*(char *)(unaff_x20 + 0xd) == '\x02' && *(char *)((long)unaff_x20 + 0x69) == '\x02') {
    uVar11 = *unaff_x20;
    *(undefined1 *)(unaff_x20 + 0xd) = 1;
    if ((double)unaff_x20[0xe] <= 0.0) {
      puVar8 = &UNK_11060cf00;
      func_0x000107c613fc(&UNK_11060cf00,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,unaff_x20);
      puVar9 = &UNK_11060cf28;
      func_0x000107c613fc(&UNK_11060cf28,0x20,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined8 *)(puVar9 + 0x18) = uVar11;
      func_0x000107c6157c(puVar8);
      FUN_1030eacb8(0x1030ee594,puVar9);
    }
    else {
      func_0x0001000c10c0("updateInAppPipCall()");
      func_0x000107c61180();
      puVar9 = &UNK_11060cf00;
      func_0x000107c613fc(&UNK_11060cf00,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,unaff_x20);
      puVar8 = &UNK_11060cf50;
      func_0x000107c613fc(&UNK_11060cf50,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar9;
      *(undefined8 *)(puVar8 + 0x18) = uVar11;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      func_0x000107c60bc4(&puStack_70);
    }
    goto code_r0x000107c61574;
  }
  return;
}



/* Entry: 1030ede78; end: 1030edf67;  */

void FUN_1030ede78(char *param_1,long param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return;
    }
    FUN_1030ea684(param_2 + 0x28,auStack_48);
    func_0x000107c61574(param_2);
    if (lStack_30 == 0) {
LAB_1030edf40:
      func_0x0001030ee608(auStack_48,0x112f3c7d0,&UNK_10db89380);
      return;
    }
    func_0x0001000a8868();
    FUN_1030f17e8();
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return;
    }
    FUN_1030ea684(param_2 + 0x28,auStack_48);
    func_0x000107c61574(param_2);
    if (lStack_30 == 0) goto LAB_1030edf40;
    func_0x0001000a8868();
    FUN_1030f1a94();
  }
  func_0x0001000834e4(auStack_48);
  return;
}



/* Entry: 1030edf68; end: 1030ee133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030edf68(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x68) == '\0') {
    *(undefined1 *)(param_2 + 0x68) = 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x0001030ee05c(0);
  }
  else {
    *(undefined1 *)(param_2 + 0x69) = 0;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar2 = lVar3 + _DAT_11307b808;
    func_0x000107c61428(lVar2,auStack_60,0,0);
    lVar1 = lVar2;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar2 + 8);
      lVar2 = lVar1;
      func_0x000107c614f0();
      (**(code **)(lVar4 + 0x10))(lVar3,0,lVar2,lVar4);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar1);
      return;
    }
  }
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 1030ee134; end: 1030ee2ff;  */

/* WARNING: Possible PIC construction at 0x0001030ee224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ee2e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ee228) */
/* WARNING: Removing unreachable block (ram,0x0001030ee2e4) */

void FUN_1030ee134(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if ((((*(byte *)((long)unaff_x20 + 0x6a) & 1) == 0) || (*(char *)(unaff_x20 + 0xd) == '\0')) ||
     (*(char *)((long)unaff_x20 + 0x69) == '\0')) {
    *(undefined1 *)(unaff_x20[4] + 0x91) = 0;
    FUN_1030f3c74(0,0);
  }
  else if (*(char *)(unaff_x20 + 0xd) == '\x02' && *(char *)((long)unaff_x20 + 0x69) == '\x02') {
    uVar3 = *unaff_x20;
    *(undefined1 *)(unaff_x20 + 0xd) = 1;
    if ((double)unaff_x20[0xe] <= 0.0) {
      puVar1 = &UNK_11060cf00;
      func_0x000107c613fc(&UNK_11060cf00,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      puVar2 = &UNK_11060cf28;
      func_0x000107c613fc(&UNK_11060cf28,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = uVar3;
      func_0x000107c6157c(puVar1);
      FUN_1030eacb8(0x1030ee594,puVar2);
    }
    else {
      func_0x0001000c10c0("updateInAppPipCall()");
      func_0x000107c61180();
      puVar1 = &UNK_11060cf00;
      func_0x000107c613fc(&UNK_11060cf00,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      puVar2 = &UNK_11060cf50;
      func_0x000107c613fc(&UNK_11060cf50,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = uVar3;
      uStack_50 = 0x1030ee59c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11060cf68;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      puVar1 = puStack_48;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1030ee300; end: 1030ee35f;  */

void FUN_1030ee300(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x68) == '\x01') {
      FUN_1030ee360();
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1030ee360; end: 1030ee4f3;  */

/* WARNING: Possible PIC construction at 0x0001030ee3d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ee3dc) */

void FUN_1030ee360(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_11060cf00;
  func_0x000107c613fc(&UNK_11060cf00,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11060cfa0;
  func_0x000107c613fc(&UNK_11060cfa0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c6157c(puVar1);
  FUN_1030eacb8(0x1030ee650,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030ee4f4; end: 1030ee56f;  */

void FUN_1030ee4f4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001030ee608(unaff_x20 + 0x28,0x112f3c7d0,&UNK_10db89380);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030ee570; end: 1030ee5d7;  */

/* WARNING: Possible PIC construction at 0x0001030ee224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ee2e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ee228) */
/* WARNING: Removing unreachable block (ram,0x0001030ee2e4) */

void FUN_1030ee570(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if (*(char *)((long)unaff_x20 + 0x69) != '\0') {
    return;
  }
  *(undefined1 *)((long)unaff_x20 + 0x69) = 2;
  if (param_1 == 0) {
    *(undefined1 *)((long)unaff_x20 + 0x6a) = 0;
  }
  if ((((*(byte *)((long)unaff_x20 + 0x6a) & 1) == 0) || (*(char *)(unaff_x20 + 0xd) == '\0')) ||
     (*(char *)((long)unaff_x20 + 0x69) == '\0')) {
    *(undefined1 *)(unaff_x20[4] + 0x91) = 0;
    FUN_1030f3c74(0,0);
  }
  else if (*(char *)(unaff_x20 + 0xd) == '\x02' && *(char *)((long)unaff_x20 + 0x69) == '\x02') {
    uVar3 = *unaff_x20;
    *(undefined1 *)(unaff_x20 + 0xd) = 1;
    if ((double)unaff_x20[0xe] <= 0.0) {
      puVar1 = &UNK_11060cf00;
      func_0x000107c613fc(&UNK_11060cf00,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      puVar2 = &UNK_11060cf28;
      func_0x000107c613fc(&UNK_11060cf28,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = uVar3;
      func_0x000107c6157c(puVar1);
      FUN_1030eacb8(0x1030ee594,puVar2);
    }
    else {
      func_0x0001000c10c0("updateInAppPipCall()");
      func_0x000107c61180();
      puVar1 = &UNK_11060cf00;
      func_0x000107c613fc(&UNK_11060cf00,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      puVar2 = &UNK_11060cf50;
      func_0x000107c613fc(&UNK_11060cf50,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = uVar3;
      uStack_50 = 0x1030ee59c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11060cf68;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      puVar1 = puStack_48;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1030ee5d8; end: 1030ee647;  */

void FUN_1030ee5d8(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = (byte)*param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 1030ee648; end: 1030ee653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ee648(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x68) == '\0') {
    *(undefined1 *)(lVar1 + 0x68) = 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x0001030ee05c(0);
  }
  else {
    *(undefined1 *)(lVar1 + 0x69) = 0;
    lVar4 = *(long *)(lVar1 + 0x10);
    lVar3 = lVar4 + _DAT_11307b808;
    func_0x000107c61428(lVar3,auStack_60,0,0);
    lVar2 = lVar3;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar3 + 8);
      lVar3 = lVar2;
      func_0x000107c614f0();
      (**(code **)(lVar5 + 0x10))(lVar4,0,lVar3,lVar5);
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(lVar2);
      return;
    }
  }
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 1030ee654; end: 1030ee787;  */

void FUN_1030ee654(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar6 = *unaff_x20;
  lVar1 = unaff_x20[2];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar3 = &UNK_11060d050;
    func_0x000107c613fc(&UNK_11060d050,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11060d078;
    func_0x000107c613fc(&UNK_11060d078,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = uVar6;
    pcStack_60 = FUN_1030eee50;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1029c997c;
    puStack_68 = &UNK_11060d090;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c5bad0(lVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1030ee788; end: 1030ee927;  */

void FUN_1030ee788(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_11060d0c8;
    func_0x000107c613fc(&UNK_11060d0c8,0x28,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    puVar3 = &UNK_11060d0f0;
    func_0x000107c613fc(&UNK_11060d0f0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x1030eeeb0;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x1030eeee4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1029c99e4;
    puStack_90 = &UNK_11060d108;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c6157c(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11060d140;
    func_0x000107c613fc(&UNK_11060d140,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1030eef04;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    pcStack_88 = FUN_1030eef08;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_1030eea70;
    puStack_90 = &UNK_11060d158;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1030ee928; end: 1030eea6f;  */

void FUN_1030ee928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar6 = *unaff_x20;
  lVar1 = unaff_x20[4];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x000107c5fadc(param_3,param_4);
    puVar3 = &UNK_11060d050;
    func_0x000107c613fc(&UNK_11060d050,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11060d190;
    func_0x000107c613fc(&UNK_11060d190,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = param_3;
    *(undefined8 *)(puVar4 + 0x30) = param_4;
    *(undefined8 *)(puVar4 + 0x38) = uVar6;
    pcStack_70 = FUN_1030eef28;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1030eedac;
    puStack_78 = &UNK_11060d1a8;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c43078(lVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1030eea70; end: 1030eea93;  */

void FUN_1030eea70(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  return;
}



/* Entry: 1030eea94; end: 1030eeae7; -[_TtC10CallUIImpl17CallingLinkSharer sendCallingLinkToConvoId:] */

void FUN_1030eea94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_1030ee654(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1030eeae8; end: 1030eeda7;  */

void FUN_1030eeae8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      lVar8 = *(long *)(param_2 + 0x18);
      func_0x000107c61174(param_1);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 == 0) {
        func_0x000107c61574(param_2);
      }
      else {
        puVar1 = PTR_PTR_1126b1a40;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar2 = puVar1;
        func_0x000107c5e7ec();
        func_0x000107c61180();
        func_0x000107c61170(puVar1);
        puVar1 = puVar2;
        func_0x000107c5e4a4();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        puVar2 = puVar1;
        func_0x000107c5e5cc();
        func_0x000107c61180();
        func_0x000107c61170(puVar1);
        puVar1 = puVar2;
        func_0x000107c5e500(puVar2);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x00010011df08();
        func_0x000107c61180();
        if (puVar2 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar7);
        }
        puVar3 = puVar1;
        func_0x000107c5e870(puVar1);
        func_0x000107c61180();
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar2);
        puVar1 = puVar3;
        func_0x000107c3ecc8(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c5fadc(param_3,param_4);
        lVar4 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar4 + 0x18) = 2;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        *(undefined8 *)(lVar4 + 0x20) = param_5;
        *(undefined8 *)(lVar4 + 0x28) = param_6;
        func_0x000107c61434(param_6);
        lVar5 = lVar4;
        func_0x000107c5fc48(lVar4,PTR___sSSN_11034da80);
        func_0x000107c61574(lVar4);
        pcStack_88 = FUN_1030eeda8;
        uStack_80 = 0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f5c588;
        puStack_90 = &UNK_11060d1d0;
        ppuVar6 = &puStack_a8;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c51ee4(lVar8);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(param_3);
        param_1 = lVar5;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1030eeda8; end: 1030eedab;  */

void FUN_1030eeda8(void)

{
  return;
}



/* Entry: 1030eedac; end: 1030eedfb;  */

void FUN_1030eedac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1030eedfc; end: 1030eee4f;  */

void FUN_1030eedfc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030eee50; end: 1030eee77;  */

void FUN_1030eee50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    puVar5 = &UNK_11060d0c8;
    func_0x000107c613fc(&UNK_11060d0c8,0x28,7);
    *(long *)(puVar5 + 0x10) = lVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar2;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    puVar6 = &UNK_11060d0f0;
    func_0x000107c613fc(&UNK_11060d0f0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1030eeeb0;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x1030eeee4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1029c99e4;
    puStack_90 = &UNK_11060d108;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_80;
    func_0x000107c6157c(lVar4);
    func_0x000107c61434(uVar1);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11060d140;
    func_0x000107c613fc(&UNK_11060d140,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1030eef04;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    pcStack_88 = FUN_1030eef08;
    puStack_a8 = puVar3;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_1030eea70;
    puStack_90 = &UNK_11060d158;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 1030eee78; end: 1030eef03;  */

void FUN_1030eee78(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030eef04; end: 1030eef07;  */

void FUN_1030eef04(void)

{
  return;
}



/* Entry: 1030eef08; end: 1030eef27;  */

void FUN_1030eef08(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030eef28; end: 1030eef57;  */

void FUN_1030eef28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar12 = auStack_78;
  func_0x000107c61428(lVar4 + 0x10,puVar12,0,0,uVar3,uVar2,*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574();
    }
    else {
      lVar13 = *(long *)(lVar4 + 0x18);
      func_0x000107c61174(param_1);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar13 == 0) {
        func_0x000107c61574(lVar4);
      }
      else {
        puVar5 = PTR_PTR_1126b1a40;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar6 = puVar5;
        func_0x000107c5e7ec();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        puVar5 = puVar6;
        func_0x000107c5e4a4();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        puVar6 = puVar5;
        func_0x000107c5e5cc();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        puVar5 = puVar6;
        func_0x000107c5e500(puVar6);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x00010011df08();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar12);
        }
        puVar7 = puVar5;
        func_0x000107c5e870(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        puVar5 = puVar7;
        func_0x000107c3ecc8(puVar7);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c5fadc(uVar8,uVar1);
        lVar9 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar9 + 0x18) = 2;
        *(undefined8 *)(lVar9 + 0x10) = 1;
        *(undefined8 *)(lVar9 + 0x20) = uVar3;
        *(undefined8 *)(lVar9 + 0x28) = uVar2;
        func_0x000107c61434(uVar2);
        lVar10 = lVar9;
        func_0x000107c5fc48(lVar9,PTR___sSSN_11034da80);
        func_0x000107c61574(lVar9);
        pcStack_88 = FUN_1030eeda8;
        uStack_80 = 0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f5c588;
        puStack_90 = &UNK_11060d1d0;
        ppuVar11 = &puStack_a8;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c51ee4(lVar13);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar13);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar8);
        param_1 = lVar10;
      }
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1030eef58; end: 1030eef67;  */

undefined1  [16] FUN_1030eef58(void)

{
  return ZEXT816(0x11060d208);
}



/* Entry: 1030eef68; end: 1030ef31b;  */

undefined1 FUN_1030eef68(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  uStack_71 = 4;
  puVar4 = &UNK_11060d230;
  func_0x000107c613fc(&UNK_11060d230,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_71;
  puVar5 = &UNK_11060d258;
  func_0x000107c613fc(&UNK_11060d258,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1030ef31c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1030ef328;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11060d270;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11060d2a8;
  func_0x000107c613fc(&UNK_11060d2a8,0x18,7);
  *(undefined1 **)(puVar7 + 0x10) = &uStack_71;
  puVar8 = &UNK_11060d2d0;
  func_0x000107c613fc(&UNK_11060d2d0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x1030ef364;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_88 = (code *)0x1030ef3ac;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11060d2e8;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_11060d320;
  func_0x000107c613fc(&UNK_11060d320,0x18,7);
  *(undefined1 **)(puVar10 + 0x10) = &uStack_71;
  puVar11 = &UNK_11060d348;
  func_0x000107c613fc(&UNK_11060d348,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x1030ef374;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_88 = (code *)0x1030ef3b0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11060d360;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_11060d398;
  func_0x000107c613fc(&UNK_11060d398,0x18,7);
  *(undefined1 **)(puVar13 + 0x10) = &uStack_71;
  puVar14 = &UNK_11060d3c0;
  func_0x000107c613fc(&UNK_11060d3c0,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x1030ef384;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_88 = (code *)0x1030ef3b4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11060d3d8;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7dc(unaff_x20);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_71;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x67,9,0x18,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1030ef310);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x67,0xb,0x15,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1030ef314);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x67,0xd,0x15,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1030ef318);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",0x67,0xf,0x14,1);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1030ef31c);
  (*pcVar3)();
}



/* Entry: 1030ef31c; end: 1030ef327;  */

void FUN_1030ef31c(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1030ef328; end: 1030ef347;  */

void FUN_1030ef328(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030ef348; end: 1030ef3b7;  */

void FUN_1030ef348(long param_1,long param_2)

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



/* Entry: 1030ef3b8; end: 1030ef453; -[_TtC10CallUIImpl16LensRectListener lensSafeRenderRectDidChangeWithRect:] */

void FUN_1030ef3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c6157c(param_5);
  func_0x000107c5dc54(param_1,param_2,param_3,param_4,puVar1);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_6,puVar1);
  func_0x000107c61574(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1030ef454; end: 1030ef4ef; -[_TtC10CallUIImpl16LensRectListener lensCaptureButtonRectDidChangeWithRect:] */

void FUN_1030ef454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c6157c(param_5);
  func_0x000107c5dc54(param_1,param_2,param_3,param_4,puVar1);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_6,puVar1);
  func_0x000107c61574(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1030ef4f0; end: 1030ef53b;  */

void FUN_1030ef4f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030ef53c; end: 1030ef54b; -[_TtC10CallUIImpl23LensTalkCarouselAdapter lensCarouselContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ef53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f3cef8));
  return;
}



/* Entry: 1030ef54c; end: 1030ef57f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter lensesTouchView] */

void FUN_1030ef54c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030ef580();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030ef580; end: 1030ef62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030ef580(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  lVar1 = _DAT_112f3cf00;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f3cf00);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001000d224c(&lStack_48);
    lVar3 = lStack_48;
    func_0x000107c5df60();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1030ef62c; end: 1030ef65f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setLensesTouchView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ef62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f3cf00);
  *(undefined8 *)(param_1 + _DAT_112f3cf00) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030ef660; end: 1030ef66f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter sponsoredLensCTAContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ef660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f3cf08));
  return;
}



/* Entry: 1030ef670; end: 1030ef67f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter arBarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ef670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f3cf10));
  return;
}



/* Entry: 1030ef680; end: 1030ef68b; -[_TtC10CallUIImpl23LensTalkCarouselAdapter arBarPreferredHeight] */

undefined8 FUN_1030ef680(void)

{
  return 0x404a000000000000;
}



/* Entry: 1030ef68c; end: 1030ef92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ef68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f3ce78;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3ce80;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3ce88;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3ce90;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3ce98;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3cea0;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3cea8;
  func_0x0001030f0ecc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = 0;
  func_0x000107c60110(0);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3ceb0;
  uVar3 = 0;
  func_0x000107c60110(0);
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f3ceb8) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112f3cec0;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3cec8;
  func_0x0001030f0b60();
  puVar4 = puVar2;
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112f3ced0;
  func_0x000107c613fc(puVar2,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61614(unaff_x20 + _DAT_112f3ced8,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f3cee0) = 0;
  lVar1 = _DAT_112f3cef8;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f3cf00) = 0;
  lVar1 = _DAT_112f3cf08;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f3cf10;
  puVar2 = PTR_PTR_1126b40c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f3ce70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f3cee8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f3cef0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030ef92c; end: 1030ef93b; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setTouchesAllowed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ef92c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112f3cee0) = param_3;
  return;
}



/* Entry: 1030ef93c; end: 1030ef96f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter isConsumingTouches] */

uint FUN_1030ef93c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030ef970();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1030ef970; end: 1030efa5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030ef970(double param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  FUN_1030ef580();
  uVar3 = param_2;
  func_0x000107c43e88();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (uVar3 != 0) {
    uVar1 = 0;
    func_0x0001030f0ecc(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar2 = uVar3;
    func_0x000107c5fc54(uVar3,uVar1);
    func_0x000107c61170(uVar3);
    if (uVar2 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar3 = uVar2;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar2);
    if (uVar3 != 0) {
      return true;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f3cea8);
  func_0x000107c5dc0c(uVar1);
  func_0x000107c61180();
  func_0x000107c4223c();
  func_0x000107c61170(uVar1);
  return 0.0 < param_1;
}



/* Entry: 1030efa5c; end: 1030efad3; -[_TtC10CallUIImpl23LensTalkCarouselAdapter willDisplayLensCarousel] */

/* WARNING: Possible PIC construction at 0x0001030efabc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030efac0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efa5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3ce80);
  puVar1 = PTR_PTR_1126ddf30;
  func_0x000107c61168(PTR_PTR_1126ddf30);
  func_0x000107c61174(param_1);
  func_0x000107c5e360(puVar1);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030efad4; end: 1030efb1b; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setSponsoredLensAttachmentUIContainer:] */

/* WARNING: Possible PIC construction at 0x0001030efb08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030efb0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(*(long *)(param_1 + _DAT_112f3cec8) + 0x10) = param_3;
  func_0x000107c615f4(param_3,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1030efb1c; end: 1030efbb3; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setMiniCameraTrayUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3cec0);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000107c453e4(puVar1);
  func_0x000107c4d664(uVar2,param_2,puVar1);
  func_0x000107c61170(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_112f3ced0) + 0x10);
  *(undefined8 *)(*(long *)(param_1 + _DAT_112f3ced0) + 0x10) = param_3;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1030efbb4; end: 1030efbc3; -[_TtC10CallUIImpl23LensTalkCarouselAdapter trayHeightObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f3cea8));
  return;
}



/* Entry: 1030efbc4; end: 1030efceb; -[_TtC10CallUIImpl23LensTalkCarouselAdapter chromeDismissTimerEnabledObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efbc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f3ceb0);
  func_0x000107c61174();
  func_0x0001000b637c(uVar5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f3cea8);
  func_0x0001000b637c(uVar1);
  uVar2 = uVar1;
  func_0x0001006c733c();
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar1);
  pcVar3 = FUN_1030efcec;
  func_0x0001000bfde0(FUN_1030efcec,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar2);
  puVar4 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar3);
  uVar5 = 0;
  func_0x0001030f0ecc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 0x1030efd34;
  func_0x0001000bfde0(0x1030efd34,0,uVar5);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1030efcec; end: 1030efd6b;  */

void FUN_1030efcec(undefined8 param_1,double param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = *param_3;
  uVar1 = param_3[1];
  func_0x000107c3ebcc();
  if ((uVar2 & 1) == 0) {
    func_0x000107c4223c(uVar1);
    bVar3 = param_2 <= 0.0;
  }
  else {
    bVar3 = false;
  }
  *(bool *)param_1 = bVar3;
  return;
}



/* Entry: 1030efd6c; end: 1030efe5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efd6c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f3ceb8,auStack_48,0x21,0);
    func_0x000100f73bdc(param_2);
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112f3ceb8,auStack_48,0x21,0);
    func_0x000100f73104(auStack_50,param_2);
  }
  func_0x000107c614a8(auStack_48);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f3ceb0);
  func_0x000107c61428(unaff_x20 + _DAT_112f3ceb8,auStack_48,0,0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1030efe5c; end: 1030efe9f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setLensSurfaceTouchActive:surface:] */

void FUN_1030efe5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1030efd6c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030efea0; end: 1030efeab; -[_TtC10CallUIImpl23LensTalkCarouselAdapter dismissTray] */

/* WARNING: Possible PIC construction at 0x0001030f0898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f089c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3cec0);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030efeac; end: 1030efeb7; -[_TtC10CallUIImpl23LensTalkCarouselAdapter presentLensExplorer] */

/* WARNING: Possible PIC construction at 0x0001030f0898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f089c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030efeac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3cea0);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030efeb8; end: 1030eff17; -[_TtC10CallUIImpl23LensTalkCarouselAdapter init] */

void FUN_1030efeb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUIImpl.LensTalkCarouselAdapter",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030efee4);
  (*pcVar1)();
}



/* Entry: 1030eff18; end: 1030f006f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030eff44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030eff64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030eff84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030effa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030effd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f0034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030f0054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f0038) */
/* WARNING: Removing unreachable block (ram,0x0001030effd8) */
/* WARNING: Removing unreachable block (ram,0x0001030effa8) */
/* WARNING: Removing unreachable block (ram,0x0001030eff88) */
/* WARNING: Removing unreachable block (ram,0x0001030eff68) */
/* WARNING: Removing unreachable block (ram,0x0001030eff48) */
/* WARNING: Removing unreachable block (ram,0x0001030f0058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030eff18(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3ce70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3ce78));
  return;
}



/* Entry: 1030f0070; end: 1030f008f;  */

void FUN_1030f0070(void)

{
  func_0x000107c61168(&PTR_PTR_1128b7110);
  return;
}



/* Entry: 1030f0090; end: 1030f010f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setLensesProcessingEnabled:] */

/* WARNING: Possible PIC construction at 0x0001030f00f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f00fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3ce78);
  puVar1 = PTR_PTR_1126ddf20;
  func_0x000107c61168(PTR_PTR_1126ddf20);
  func_0x000107c61174(param_1);
  func_0x000107c5d520(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f0110; end: 1030f0123; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0110(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f3ced8,param_3);
  return;
}



/* Entry: 1030f0124; end: 1030f01b7; -[_TtC10CallUIImpl23LensTalkCarouselAdapter setLensToRestore:] */

/* WARNING: Possible PIC construction at 0x0001030f0198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f019c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3ce78);
  puVar1 = PTR_PTR_1126ddf20;
  func_0x000107c61168(PTR_PTR_1126ddf20);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5d50c(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f01b8; end: 1030f02e3; -[_TtC10CallUIImpl23LensTalkCarouselAdapter selectLens:] */

/* WARNING: Possible PIC construction at 0x0001030f022c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f0230) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f01b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3ce78);
  puVar1 = PTR_PTR_1126ddf20;
  func_0x000107c61168(PTR_PTR_1126ddf20);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c51c3c(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f02e4; end: 1030f0333; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didActivateLens:] */

/* WARNING: Possible PIC construction at 0x0001030f031c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f0320) */

void FUN_1030f02e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001030f024c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030f0334; end: 1030f0453; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didSelectLens:] */

/* WARNING: Possible PIC construction at 0x0001030f03a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f03ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3ce88);
  puVar1 = PTR_PTR_1126ddf28;
  func_0x000107c61168(PTR_PTR_1126ddf28);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c41bfc(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f0454; end: 1030f047b; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didDeactivateLens] */

void FUN_1030f0454(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001030f03c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f047c; end: 1030f04c7; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didChangeLensProcessingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f047c(long param_1)

{
  param_1 = param_1 + _DAT_112f3ced8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4b378();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1030f04c8; end: 1030f0513; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didTurnOnLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f04c8(long param_1)

{
  param_1 = param_1 + _DAT_112f3ced8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4b4d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1030f0514; end: 1030f055f; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didTurnOffLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0514(long param_1)

{
  param_1 = param_1 + _DAT_112f3ced8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4b4d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1030f0560; end: 1030f0753;  */

undefined * FUN_1030f0560(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030f0754);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001030f0ecc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x000100ff3f88(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        func_0x0001030f0ecc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1030f0754; end: 1030f0837; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didUpdateLensesList:] */

/* WARNING: Possible PIC construction at 0x0001030f07e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f07ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001030f0ecc(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_1030f0560(param_3);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c5fc48(param_3,PTR___sypN_11034f1a8 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1030f0838; end: 1030f0843; -[_TtC10CallUIImpl23LensTalkCarouselAdapter didRequestLoadMoreLenses] */

/* WARNING: Possible PIC construction at 0x0001030f0898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f089c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0838(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3ce98);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f0844; end: 1030f08af;  */

/* WARNING: Possible PIC construction at 0x0001030f0898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f089c) */

void FUN_1030f0844(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030f08b0; end: 1030f0933; -[_TtC10CallUIImpl23LensTalkCarouselAdapter lensTouchesAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030f08b0(double param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + _DAT_112f3cee0) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f3cea8);
    func_0x000107c61174();
    func_0x000107c5dc0c(uVar1);
    func_0x000107c61180();
    func_0x000107c4223c();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    return param_1 <= 0.0;
  }
  return false;
}



/* Entry: 1030f0934; end: 1030f0a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030f0934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f3cef8);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3cf10);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1030ef580();
  func_0x000107c3ed64(param_1,param_2,uVar3,uVar4,puVar1,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return param_1;
}



/* Entry: 1030f0a68; end: 1030f0ae7; -[_TtC10CallUIImpl23LensTalkCarouselAdapter trayHeightDidChange:] */

/* WARNING: Possible PIC construction at 0x0001030f0acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030f0ad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0a68(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f3cea8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_2);
  func_0x000107c466c0(param_1,puVar1);
  func_0x000107c4d664(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1030f0ae8; end: 1030f0af7; -[_TtC10CallUIImpl23LensTalkCarouselAdapter dismissTrayRequestedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f3cec0));
  return;
}



/* Entry: 1030f0af8; end: 1030f0b0f; -[_TtC10CallUIImpl31LensTalkUIContainerProviderImpl uiContainer] */

void FUN_1030f0af8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030f0b10; end: 1030f0b3b; -[_TtC10CallUIImpl31LensTalkUIContainerProviderImpl setUiContainer:] */

void FUN_1030f0b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1030f0b3c; end: 1030f0b7f;  */

void FUN_1030f0b3c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030f0b80; end: 1030f0f2f;  */

ulong FUN_1030f0b80(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030f0c50);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030f0c54);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001030e9160(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001030e9160(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000003a,0x800000010f121e10);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030f0d1c);
  (*pcVar2)();
}



/* Entry: 1030f0f30; end: 1030f0fc7;  */

void FUN_1030f0f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f3cfe0,&UNK_10db89760);
  puVar1 = &UNK_11060d428;
  func_0x000107c613fc(&UNK_11060d428,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1030f10bc,puVar1);
  return;
}



/* Entry: 1030f0fc8; end: 1030f10bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f0fc8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  func_0x000100083b20(&lStack_60);
  FUN_1030f11d0();
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_11307b7f8);
  uVar1 = uVar3;
  func_0x000107c615f0(uVar3);
  func_0x0001000cad14();
  uVar2 = *(undefined8 *)(lStack_60 + _DAT_1130813f0);
  FUN_1030f0070(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  FUN_1030ef68c(uVar3,uVar1,uVar2);
  func_0x000107c61170(lStack_58);
  func_0x000107c61170(lStack_60);
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 1030f10bc; end: 1030f10c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f10bc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&lStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&lStack_60);
  FUN_1030f11d0();
  func_0x000107c613fc();
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_11307b7f8);
  uVar2 = uVar4;
  func_0x000107c615f0(uVar4);
  func_0x0001000cad14();
  uVar3 = *(undefined8 *)(lStack_60 + _DAT_1130813f0);
  FUN_1030f0070(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  FUN_1030ef68c(uVar4,uVar2,uVar3);
  func_0x000107c61170(lStack_58);
  func_0x000107c61170(lStack_60);
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  *param_1 = lVar1;
  return;
}



/* Entry: 1030f10c8; end: 1030f119b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030f10c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307b7f8);
  uVar1 = uVar2;
  func_0x000107c615f0(uVar2);
  func_0x0001000cad14();
  uVar3 = *(undefined8 *)(param_3 + _DAT_1130813f0);
  FUN_1030f0070(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  FUN_1030ef68c(uVar2,uVar1,uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return unaff_x20;
}



/* Entry: 1030f119c; end: 1030f11bf;  */

void FUN_1030f119c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030f11c0; end: 1030f11cf;  */

undefined1  [16] FUN_1030f11c0(void)

{
  return ZEXT816(0x11060d450);
}



/* Entry: 1030f11d0; end: 1030f11ef;  */

void FUN_1030f11d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f3d028);
  return;
}



/* Entry: 1030f11f0; end: 1030f126b;  */

undefined8
FUN_1030f11f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1030f126c(param_1,param_2,param_3,param_4,param_5,param_6);
  return unaff_x20;
}



/* Entry: 1030f126c; end: 1030f152f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1030f126c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined *puVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  
  uVar6 = *unaff_x20;
  lVar1 = *(long *)(param_4 + _DAT_113074f78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61170(param_6);
  }
  else {
    func_0x0001000d224c(&puStack_90);
    ppuVar3 = ppuStack_70;
    puVar7 = puStack_78;
    func_0x0001000a8868(&puStack_90,puStack_78);
    (*(code *)ppuVar3[0x28])(puVar7,ppuVar3);
    func_0x0001000834e4(&puStack_90);
    if (((ulong)puVar7 & 1) == 0) {
      lVar4 = lVar1;
      func_0x000107c4a6e0();
      if ((int)lVar4 != 0) {
        puVar7 = *(undefined **)(param_3 + 0x10);
        uVar5 = 0;
        FUN_1030f0070();
        ppuStack_70 = &PTR_DAT_11060d400;
        puStack_90 = puVar7;
        puStack_78 = (undefined *)uVar5;
        func_0x0001000a8868(&puStack_90,uVar5);
        func_0x000107c61174(puVar7);
        uVar6 = param_2;
        FUN_1030f0934(param_2);
        func_0x0001000834e4(&puStack_90);
        func_0x000107c42c1c(param_6);
        func_0x000107c61170(uVar6);
      }
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(param_3);
      func_0x000107c61170(param_1);
    }
    else {
      puVar7 = &UNK_11060d470;
      func_0x000107c613fc(&UNK_11060d470,0x18,7);
      func_0x000107c61644(puVar7 + 0x10,unaff_x20);
      puVar2 = &UNK_11060d498;
      func_0x000107c613fc(&UNK_11060d498,0x38,7);
      *(undefined **)(puVar2 + 0x10) = puVar7;
      *(undefined8 *)(puVar2 + 0x18) = param_2;
      *(long *)(puVar2 + 0x20) = param_3;
      *(undefined8 *)(puVar2 + 0x28) = param_6;
      *(undefined8 *)(puVar2 + 0x30) = uVar6;
      ppuStack_70 = (undefined **)FUN_1030f169c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f3aa0;
      puStack_78 = &UNK_11060d4b0;
      ppuVar3 = &puStack_90;
      puStack_68 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar7 = puStack_68;
      func_0x000107c61174(param_2);
      func_0x000107c6157c(param_3);
      func_0x000107c61174(param_6);
      func_0x000107c61574(puVar7);
      func_0x000107c3e49c(lVar1);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61574(param_3);
      func_0x000107c61170(param_6);
      func_0x000107c60bd0(ppuVar3);
    }
  }
  return unaff_x20;
}



/* Entry: 1030f1530; end: 1030f169b;  */

void FUN_1030f1530(undefined1 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar4 = 0;
  func_0x000107c60714(param_6,0);
  puVar1 = &UNK_11060d470;
  func_0x000107c613fc(&UNK_11060d470,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  func_0x000107c61574(param_2);
  puVar2 = &UNK_11060d500;
  func_0x000107c613fc(&UNK_11060d500,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  pcStack_78 = FUN_1030f17cc;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_11060d518;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c5fb28(param_6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x0001000d76cc(param_6 + 0x20,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_6);
  return;
}



/* Entry: 1030f169c; end: 1030f16ab;  */

void FUN_1030f169c(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  uVar8 = 0;
  func_0x000107c60714(lVar9,0);
  puVar4 = &UNK_11060d470;
  func_0x000107c613fc(&UNK_11060d470,0x18,7);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648(lVar5);
  func_0x000107c61644(puVar4 + 0x10,lVar5);
  func_0x000107c61574(lVar5);
  puVar6 = &UNK_11060d500;
  func_0x000107c613fc(&UNK_11060d500,0x38,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  puVar6[0x18] = param_1;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = uVar3;
  pcStack_78 = FUN_1030f17cc;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_11060d518;
  ppuVar7 = &puStack_98;
  puStack_70 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar4 = puStack_70;
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c5fb28(lVar9,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x0001000d76cc(lVar9 + 0x20,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(lVar9);
  return;
}



/* Entry: 1030f16ac; end: 1030f1773;  */

void FUN_1030f16ac(long param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if ((param_1 != 0) && (func_0x000107c61574(), (param_2 & 1) != 0)) {
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    uVar1 = 0;
    FUN_1030f0070();
    ppuStack_60 = &PTR_DAT_11060d400;
    auStack_80[0] = uVar2;
    uStack_68 = uVar1;
    func_0x0001000a8868(auStack_80,uVar1);
    func_0x000107c61174(uVar2);
    FUN_1030f0934(param_3);
    func_0x0001000834e4(auStack_80);
    func_0x000107c42c1c(param_5);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1030f1774; end: 1030f17ab;  */

void FUN_1030f1774(long param_1,long param_2)

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



/* Entry: 1030f17ac; end: 1030f17cb;  */

void FUN_1030f17ac(void)

{
  func_0x000107c61168(&PTR_PTR_112f3d0c8);
  return;
}



/* Entry: 1030f17cc; end: 1030f17e7;  */

void FUN_1030f17cc(void)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if ((lVar5 != 0) && (func_0x000107c61574(), (bVar2 & 1) != 0)) {
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = 0;
    FUN_1030f0070();
    ppuStack_60 = &PTR_DAT_11060d400;
    auStack_80[0] = uVar7;
    uStack_68 = uVar3;
    func_0x0001000a8868(auStack_80,uVar3);
    func_0x000107c61174(uVar7);
    FUN_1030f0934(uVar4);
    func_0x0001000834e4(auStack_80);
    func_0x000107c42c1c(uVar6);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1030f17e8; end: 1030f191f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030f17e8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar1 = _DAT_112f3d138;
  ppuVar6 = &puStack_60;
  if ((*(byte *)(unaff_x20 + _DAT_112f3d138) & 1) == 0) {
    lVar2 = unaff_x20;
    func_0x000107c614f0();
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f3d120);
    func_0x000107c419f0(uVar3);
    func_0x000107c61180();
    puVar4 = &UNK_11060d598;
    func_0x000107c613fc(&UNK_11060d598,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_11060d5c0;
    func_0x000107c613fc(&UNK_11060d5c0,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar2;
    pcStack_40 = FUN_1030f2320;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100c1de60;
    puStack_48 = &UNK_11060d5d8;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    uVar7 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c3e924(uVar7);
    func_0x000107c61170(uVar7);
    FUN_1030f199c();
  }
  return;
}


