/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100866dfc; end: 100866e43;  */

void FUN_100866dfc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5ba1c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    param_1 = lVar1;
  }
  func_0x000107c61174(param_1);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100866e44; end: 100866e57;  */

void FUN_100866e44(void)

{
  return;
}



/* Entry: 100866e58; end: 100866ed3;  */

void FUN_100866e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001086f56c8(param_1,param_4);
    func_0x0001086f5714(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000100866f10(&uStack_40);
  return;
}



/* Entry: 100866ed4; end: 100866f3b;  */

undefined8 * FUN_100866ed4(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100866e58(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0xa8);
  return param_1;
}



/* Entry: 100866f3c; end: 100866f5f;  */

void FUN_100866f3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,&UNK_10dde32a0);
  return;
}



/* Entry: 100866f60; end: 100866f87;  */

void FUN_100866f60(void)

{
  func_0x000100866f48();
  FUN_100866f88();
  return;
}



/* Entry: 100866f88; end: 100866feb;  */

void FUN_100866f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000100865a50();
    func_0x0001086f85fc();
    func_0x0001086f9f6c();
    func_0x0001086f8634();
  }
  uStack_38 = 1;
  FUN_100866fec(&uStack_40);
  return;
}



/* Entry: 100866fec; end: 100867017;  */

long FUN_100866fec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_100867028(param_1);
  }
  return param_1;
}



/* Entry: 100867018; end: 100867027;  */

void FUN_100867018(void)

{
  return;
}



/* Entry: 100867028; end: 1008670fb;  */

void FUN_100867028(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x0001086f86ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1008670fc; end: 100867107;  */

void FUN_1008670fc(void)

{
  return;
}



/* Entry: 100867108; end: 100867153;  */

void FUN_100867108(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010871f5a0();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 100867154; end: 10086715b;  */

void FUN_100867154(void)

{
  char in_stack_00000748;
  
  if (in_stack_00000748 == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10086715c; end: 1008671a3;  */

/* WARNING: Possible PIC construction at 0x000100867190: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100867194) */

void FUN_10086715c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3e2cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008671a4; end: 100867213;  */

void FUN_1008671a4(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  uVar2 = *param_2;
  uVar1 = *(uint *)(param_2 + 1);
  FUN_100606fd8(auStack_50,param_2 + 2);
  if ((uVar1 & 1) != 0) {
    FUN_100867214(param_1,uVar2,auStack_50);
  }
  FUN_1005fce88(auStack_50);
  return;
}



/* Entry: 100867214; end: 100867297;  */

long * FUN_100867214(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  
  if ((char)param_1[1] == '\x01') {
    if ((*param_1 <= param_2) &&
       ((plVar1 = param_1, param_2 != *param_1 ||
        (plVar1 = param_3, func_0x000108664d0c(param_3,param_1 + 2), (char)plVar1 < '\x01')))) {
      return plVar1;
    }
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  if ((char)param_1[5] == '\x01') {
    func_0x000107c27cfc();
  }
  else {
    func_0x000107c279d8(param_1 + 2,param_3);
  }
  return param_1 + 2;
}



/* Entry: 100867298; end: 1008672cf;  */

void FUN_100867298(void)

{
  return;
}



/* Entry: 1008672d0; end: 10086737f;  */

void FUN_1008672d0(int param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001008672bc();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_10061ec34();
  if (param_1 != 0) {
    FUN_10061fe54(unaff_x20 + 0x80);
    FUN_100620260();
  }
  FUN_1008674f4(*(long *)(unaff_x20 + 0x20) + 0x3768);
  return;
}



/* Entry: 100867380; end: 1008674df; -[SCNavigationService attachViewController:] */

/* WARNING: Possible PIC construction at 0x0001008673c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100867488) */
/* WARNING: Removing unreachable block (ram,0x00010086744c) */
/* WARNING: Removing unreachable block (ram,0x000100867464) */
/* WARNING: Removing unreachable block (ram,0x000100867428) */
/* WARNING: Removing unreachable block (ram,0x0001008673c8) */
/* WARNING: Removing unreachable block (ram,0x0001008673d8) */
/* WARNING: Removing unreachable block (ram,0x000100867498) */
/* WARNING: Removing unreachable block (ram,0x00010086749c) */

void FUN_100867380(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    func_0x000107c3c314(param_1,param_2,&PTR____CFConstantStringClassReference_110e63358,
                        &PTR____CFConstantStringClassReference_110e63378);
  }
  else {
    lVar1 = param_1 + 0x70;
    func_0x000107c61148();
    if (lVar1 == 0) {
      func_0x000107c61148(param_1 + 0x68);
      func_0x000107c3e2c0();
    }
    else {
      func_0x000107c61148(param_1 + 0x70);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008674e0; end: 1008674f3;  */

void FUN_1008674e0(void)

{
  return;
}



/* Entry: 1008674f4; end: 10086754b;  */

void FUN_1008674f4(void)

{
  FUN_1008674e0();
  FUN_10086754c();
  func_0x000100867560();
  func_0x00010086756c();
  func_0x000100867574();
  FUN_1008675ac();
  FUN_10061f190();
  func_0x000100867aa4();
  func_0x000100867aac();
  return;
}



/* Entry: 10086754c; end: 1008675ab;  */

void FUN_10086754c(void)

{
  return;
}



/* Entry: 1008675ac; end: 1008675f3;  */

void FUN_1008675ac(void)

{
  int unaff_w23;
  
  func_0x00010086758c();
  func_0x0001005ef16c();
  FUN_100867974();
  FUN_100867a10();
  FUN_100867a20();
  FUN_100867a4c();
  FUN_100867a5c();
  FUN_100867a84();
  FUN_1005edd44();
  func_0x000107c6132c();
  if (unaff_w23 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    FUN_1003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1008675f4; end: 1008676ff; -[SCSwipeViewContainerViewController attachUI:] */

/* WARNING: Possible PIC construction at 0x000100867648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008676a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008676dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008676a4) */
/* WARNING: Removing unreachable block (ram,0x0001008676b0) */
/* WARNING: Removing unreachable block (ram,0x0001008676bc) */
/* WARNING: Removing unreachable block (ram,0x00010086764c) */
/* WARNING: Removing unreachable block (ram,0x0001008676e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008675f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c5c9f4(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar2 = (long)_DAT_112776b18;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100867700; end: 10086770f; -[SCSwipeViewContainerViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100867700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112776b18),PTR_s_pageViewName_11261a2a0);
  return;
}



/* Entry: 100867710; end: 100867717; -[SCMainCameraScreenRootViewController pageViewName] */

undefined8 FUN_100867710(void)

{
  return 0x1f;
}



/* Entry: 100867718; end: 100867747; -[SCPageLoadTrace setPageName:] */

void FUN_100867718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100867748; end: 10086789b; -[SCActiveUserNGSNavigationRouter containerViewDidAttachViewController:] */

/* WARNING: Possible PIC construction at 0x0001008677a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008677e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100867864) */
/* WARNING: Removing unreachable block (ram,0x000100867878) */
/* WARNING: Removing unreachable block (ram,0x000100867880) */
/* WARNING: Removing unreachable block (ram,0x00010086782c) */
/* WARNING: Removing unreachable block (ram,0x0001008677ac) */
/* WARNING: Removing unreachable block (ram,0x0001008677bc) */
/* WARNING: Removing unreachable block (ram,0x000100867888) */

void FUN_100867748(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x1b0) == -1) {
    uVar1 = param_3;
    func_0x000107c61164(param_3,PTR_s_headerItem_1125d5738);
    if ((uVar1 & 1) != 0) {
      func_0x000107c44ca0();
      func_0x000107c61180();
      if (param_3 != 0) {
        func_0x000107c61148(param_1 + 0x18);
        func_0x000107c4ec38();
        goto code_r0x000107c61170;
      }
    }
    func_0x000107c3db64(*(undefined8 *)(param_1 + 0x188));
    func_0x000107c61180();
    func_0x000107c43638();
    func_0x000107c61180();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
    func_0x000107c4d9e8(uVar2);
    func_0x000107c61180();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10086789c; end: 100867973; -[SCSwipeViewContainerViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086789c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_1126a5648;
  lVar6 = (long)_DAT_112776b24;
  uVar4 = *(ulong *)(param_1 + lVar6);
  if (uVar4 == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112776b18);
    func_0x000107c61174(uVar5);
    uVar4 = uVar5;
    FUN_10010fab4(uVar5,puVar2);
    uVar1 = uVar5;
    if ((int)uVar4 == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(uVar5);
    uVar5 = uVar1;
    func_0x000107c61164(uVar1,PTR_s_headerItem_1125d5738);
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar1;
      func_0x000107c44ca0();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar4;
      func_0x000107c61170(uVar3);
      uVar4 = uVar1;
      func_0x000107c44ca0(uVar1);
      func_0x000107c61180();
    }
    func_0x000107c61170(uVar1);
  }
  else {
    func_0x000107c61174(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100867974; end: 100867983;  */

void FUN_100867974(int param_1)

{
  FUN_10054c7ec();
  FUN_1005ecddc();
  func_0x000107c61324();
  if (param_1 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    FUN_1003a91d4(&UNK_10f82fa8c);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 100867984; end: 100867a0f;  */

void FUN_100867984(int param_1)

{
  FUN_10054c7ec();
  FUN_1005ecddc();
  func_0x000107c61324();
  if (param_1 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    FUN_1003a91d4(&UNK_10f82fa8c);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 100867a10; end: 100867a1f;  */

void FUN_100867a10(void)

{
  return;
}



/* Entry: 100867a20; end: 100867a4b;  */

void FUN_100867a20(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  if (*(char *)(param_3 + 8) == '\x01') {
    FUN_1005edd44();
    iVar1 = (int)param_1;
    func_0x000107c6132c();
    if (iVar1 != 0) {
      func_0x000107c3a4f8();
      func_0x000107c3a50c();
      func_0x000107c3a520();
      FUN_1003a91d4(&UNK_10f82fa21);
      func_0x000107c3a500();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x000107c31418(param_1,param_2,&stack0xffffffffffffffef);
  return;
}



/* Entry: 100867a4c; end: 100867a5b;  */

void FUN_100867a4c(void)

{
  return;
}



/* Entry: 100867a5c; end: 100867a83;  */

void FUN_100867a5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*(char *)(param_3 + 0x18) != '\x01') {
    func_0x000107c34568();
    return;
  }
  FUN_1005ed240(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_1005ecd60(param_1,param_2,ppuStack_48,uStack_40);
  func_0x00010061fa30();
  return;
}



/* Entry: 100867a84; end: 100867ac7;  */

void FUN_100867a84(void)

{
  return;
}



/* Entry: 100867ac8; end: 100867af7; -[SCMainCameraScreenRootViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100867ac8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127433d4);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100867af8; end: 100867aff;  */

void FUN_100867af8(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 100867b00; end: 100867b67;  */

long FUN_100867b00(long param_1)

{
  long lStack_28;
  
  func_0x000100867064(param_1 + 0x30);
  func_0x000100633494(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100867098(&lStack_28);
  return param_1;
}



/* Entry: 100867b68; end: 100867b73;  */

void FUN_100867b68(void)

{
  return;
}



/* Entry: 100867b74; end: 100867bcb;  */

void FUN_100867b74(void)

{
  FUN_100867b68();
  func_0x000100867b94();
  FUN_100867bcc();
  return;
}



/* Entry: 100867bcc; end: 100867bef;  */

void FUN_100867bcc(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 100867bf0; end: 100867c17;  */

long FUN_100867bf0(long param_1)

{
  long lStack_28;
  
  func_0x000100633494(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_1006334d4(&lStack_28);
  return param_1;
}



/* Entry: 100867c18; end: 100867c5f; -[SCActiveUserNGSNavigationRouter _attachSearchPulldownIfNeccessary] */

void FUN_100867c18(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x188);
  func_0x000107c4d9e8(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70f0);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3dc20();
  func_0x000107c52680(uVar1,param_2,uVar2 | 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100867c60; end: 100867d57; -[SCMainCameraScreenRouterImpl _uiDidAttachToRootViewController:] */

void FUN_100867c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c6111c(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c5dc68(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100867d58; end: 100867dab;  */

/* WARNING: Possible PIC construction at 0x000100867d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100867d98) */

void FUN_100867d58(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x28);
  func_0x000107c3b14c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100867dac; end: 100867e7b; -[SCMainCameraScreenRouterImpl _configureViewContainers:parentView:] */

/* WARNING: Possible PIC construction at 0x000100867e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100867e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100867e4c) */

void FUN_100867dac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_4 == 0) {
    func_0x000107c61170(0);
  }
  else {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x50) = 1;
      func_0x000107c3c6ec(param_1,param_2,param_3,param_4);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c5c42c();
    func_0x000107c61180();
    param_3 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    func_0x000107c3ec8c(uVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100867e7c; end: 100868df3; -[SCMainCameraScreenRouterImpl _setupViewsWithFeatureContainerView:parentView:] */

void FUN_100867e7c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_6);
  uVar25 = *(undefined8 *)(param_4 + 0x30);
  func_0x000107c61174(param_7);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(param_7,param_5,uVar25);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar25;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar14 = param_7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar15 = uVar2;
  func_0x000107c40280(uVar2,param_5,uVar14);
  func_0x000107c61180();
  uVar21 = uVar25;
  uStack_a8 = uVar15;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = param_7;
  func_0x000107c515ac();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar5 = uVar21;
  func_0x000107c40280(uVar21,param_5,uVar4);
  func_0x000107c61180();
  uVar6 = uVar25;
  uStack_a0 = uVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar22 = param_7;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar23 = uVar6;
  func_0x000107c40280(uVar6,param_5,uVar22);
  func_0x000107c61180();
  uVar24 = uVar25;
  uStack_98 = uVar23;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar7 = param_7;
  func_0x000107c5ce8c(param_7);
  func_0x000107c61180();
  uVar11 = uVar24;
  func_0x000107c40280(uVar24,param_5,uVar7);
  func_0x000107c61180();
  uVar12 = uVar25;
  uStack_90 = uVar11;
  func_0x000107c515ac();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar16 = param_7;
  func_0x000107c515ac(param_7);
  func_0x000107c61180();
  func_0x000107c61170(param_7);
  uVar8 = uVar16;
  func_0x000107c3ec1c(uVar16);
  func_0x000107c61180();
  uVar9 = uVar13;
  func_0x000107c40280(uVar13,param_5,uVar8);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar9;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_a8,5);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_5,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  uVar11 = *(undefined8 *)(param_4 + 0x48);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  uVar12 = *(undefined8 *)(param_4 + 200);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar11,param_5,uVar12);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar12;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar14 = uVar11;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar15 = uVar2;
  func_0x000107c40280(uVar2,param_5,uVar14);
  func_0x000107c61180();
  uVar21 = uVar12;
  uStack_c8 = uVar15;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar11;
  func_0x000107c3ec1c(uVar11);
  func_0x000107c61180();
  uVar4 = uVar21;
  func_0x000107c40280(uVar21,param_5,uVar3);
  func_0x000107c61180();
  uVar5 = uVar12;
  uStack_c0 = uVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar6 = uVar11;
  func_0x000107c4acb0(uVar11);
  func_0x000107c61180();
  uVar22 = uVar5;
  func_0x000107c40280(uVar5,param_5,uVar6);
  func_0x000107c61180();
  uVar23 = uVar12;
  uStack_b8 = uVar22;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar24 = uVar11;
  func_0x000107c5ce8c(uVar11);
  func_0x000107c61180();
  uVar7 = uVar23;
  func_0x000107c40280(uVar23,param_5,uVar24);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b0 = uVar7;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_c8,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_5,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  uVar13 = *(undefined8 *)(param_4 + 0xb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar11,param_5,uVar13);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar13;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar14 = uVar11;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar15 = uVar2;
  func_0x000107c40280(uVar2,param_5,uVar14);
  func_0x000107c61180();
  uVar21 = uVar13;
  uStack_e8 = uVar15;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar3 = uVar11;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar4 = uVar21;
  func_0x000107c40280(uVar21,param_5,uVar3);
  func_0x000107c61180();
  uVar7 = uVar13;
  uStack_e0 = uVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar24 = uVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar23 = uVar7;
  func_0x000107c40280(uVar7,param_5,uVar24);
  func_0x000107c61180();
  uVar22 = uVar13;
  uStack_d8 = uVar23;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar6 = uVar11;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar5 = uVar22;
  func_0x000107c40280(uVar22,param_5,uVar6);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar5;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_e8,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_5,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c3defc(param_6,param_5,uVar13);
  uVar14 = *(undefined8 *)(param_4 + 0x88);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar12,param_5,uVar14);
  uVar15 = *(undefined8 *)(param_4 + 0x40);
  func_0x000107c5c734(uVar15);
  func_0x000107c61180();
  uVar2 = uVar15;
  func_0x000107c4abc0();
  func_0x000107c61180();
  func_0x000107c51a80();
  dVar26 = 58.0 - param_3;
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  dVar27 = 46.0;
  if (46.0 <= dVar26) {
    dVar27 = dVar26;
  }
  uVar2 = uVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar15 = uVar12;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar21 = uVar2;
  func_0x000107c40280(uVar2,param_5,uVar15);
  func_0x000107c61180();
  uVar3 = uVar14;
  uStack_108 = uVar21;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar4 = uVar12;
  func_0x000107c5ce8c(uVar12);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c40280(uVar3,param_5,uVar4);
  func_0x000107c61180();
  uVar6 = uVar14;
  uStack_100 = uVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(param_4 + 0xd8);
  func_0x000107c5c734(uVar16);
  func_0x000107c61180();
  uVar22 = uVar16;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar23 = uVar6;
  func_0x000107c40280(uVar6,param_5,uVar22);
  func_0x000107c61180();
  uVar24 = uVar14;
  uStack_f8 = uVar23;
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar7 = uVar24;
  func_0x000107c40290(dVar27);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f0 = uVar7;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_108,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_5,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  lVar17 = param_4 + 0xa8;
  func_0x000107c61148();
  lVar18 = lVar17;
  func_0x000107c3f238();
  func_0x000107c61180();
  lVar19 = lVar18;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar20 = lVar19;
  func_0x000107c49cd8();
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if ((int)lVar20 != 0) {
    uVar2 = uVar14;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar15 = uVar12;
    func_0x000107c3ec1c(uVar12);
    func_0x000107c61180();
    uVar21 = uVar2;
    func_0x000107c402a4(uVar2,param_5,uVar15);
    func_0x000107c61180();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_110 = uVar21;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_110,1);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1,param_5,puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c3defc(param_6,param_5,uVar14);
  uVar15 = *(undefined8 *)(param_4 + 0x90);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar12,param_5,uVar15);
  uVar21 = *(undefined8 *)(param_4 + 0x40);
  func_0x000107c5c734(uVar21);
  func_0x000107c61180();
  uVar2 = uVar21;
  func_0x000107c4abc0();
  func_0x000107c61180();
  func_0x000107c51a80();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar21);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  dVar27 = 0.0;
  if (0.0 <= 5.0 - param_3) {
    dVar27 = 5.0 - param_3;
  }
  uVar2 = uVar15;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar21 = uVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40280(uVar2,param_5,uVar21);
  func_0x000107c61180();
  uVar4 = uVar15;
  uStack_130 = uVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar5 = uVar14;
  func_0x000107c5ce8c(uVar14);
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c40280(uVar4,param_5,uVar5);
  func_0x000107c61180();
  uVar22 = uVar15;
  uStack_128 = uVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar23 = uVar14;
  func_0x000107c5cbe4(uVar14);
  func_0x000107c61180();
  uVar24 = uVar22;
  func_0x000107c40284(dVar27,uVar22,param_5,uVar23);
  func_0x000107c61180();
  uVar7 = uVar15;
  uStack_120 = uVar24;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar16 = uVar14;
  func_0x000107c3ec1c(uVar14);
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c40280(uVar7,param_5,uVar16);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_118 = uVar8;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_130,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_5,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar2);
  uVar22 = *(undefined8 *)(param_4 + 0x98);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar13,param_5,uVar22);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar22;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar21 = uVar13;
  func_0x000107c50890(uVar13);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40284(0xc020000000000000,uVar2,param_5,uVar21);
  func_0x000107c61180();
  uVar4 = uVar22;
  uStack_140 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar23 = *(undefined8 *)(param_4 + 0xd8);
  func_0x000107c5c734(uVar23);
  func_0x000107c61180();
  uVar5 = uVar23;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c40284(dVar27,uVar4,param_5,uVar5);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_138 = uVar6;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_140,2);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_5,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar2);
  uVar23 = *(undefined8 *)(param_4 + 0xa0);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c3d89c(uVar13,param_5,uVar23);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = uVar23;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar21 = uVar13;
  func_0x000107c4ace0(uVar13);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40284(0x4020000000000000,uVar2,param_5,uVar21);
  func_0x000107c61180();
  uVar4 = uVar23;
  uStack_150 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar24 = *(undefined8 *)(param_4 + 0xd8);
  func_0x000107c5c734(uVar24);
  func_0x000107c61180();
  uVar5 = uVar24;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000107c40284(dVar27,uVar4,param_5,uVar5);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_148 = uVar6;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_150,2);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_5,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61160(PTR_PTR_1126c8e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100868df4; end: 100868e0f;  */

void FUN_100868df4(void)

{
  func_0x000107c61160(PTR_PTR_1126c8e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100868e10; end: 100868e3b;  */

long FUN_100868e10(long param_1)

{
  FUN_1006a2628(param_1 + 0x30);
  FUN_1005fce88(param_1 + 0x10);
  return param_1;
}



/* Entry: 100868e3c; end: 100868e53;  */

void FUN_100868e3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1008659e4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100868e54; end: 100868e77;  */

undefined8 FUN_100868e54(undefined8 param_1)

{
  FUN_100868e3c(param_1,0);
  return param_1;
}



/* Entry: 100868e78; end: 100868f37;  */

long FUN_100868e78(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    FUN_100865598();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar6 != plVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 100868f38; end: 100868f77;  */

void FUN_100868f38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  uStack_28 = param_2;
  FUN_100868e78(param_1,&uStack_28);
  if (lVar1 != 0) {
    func_0x0001086f4d98(param_1,lVar1);
  }
  return;
}



/* Entry: 100868f78; end: 100868f93;  */

void FUN_100868f78(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1008659e4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100868f94; end: 100868fa7;  */

void FUN_100868f94(void)

{
  return;
}



/* Entry: 100868fa8; end: 100869007;  */

void FUN_100868fa8(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x000100864b68(param_2 + 3);
    func_0x000107c60e14(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 100869008; end: 10086901f;  */

void FUN_100869008(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100869020; end: 100869043;  */

undefined8 FUN_100869020(undefined8 param_1)

{
  FUN_100869008(param_1,0);
  return param_1;
}



/* Entry: 100869044; end: 10086906b;  */

void FUN_100869044(void)

{
  return;
}



/* Entry: 10086906c; end: 1008690e7;  */

long * FUN_10086906c(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long *plVar5;
  
  uVar4 = 0;
  plVar5 = (long *)*param_2;
  plVar3 = (long *)param_2[1];
  plVar1 = (long *)param_1[1];
  for (plVar2 = (long *)*param_1;
      ((plVar5 != plVar3 && plVar2 != plVar1) && uVar4 < param_3 &&
      ((*(byte *)(plVar2 + 0x11) & 1) == 0)); plVar2 = plVar2 + 0x15) {
    plVar5 = plVar5 + 0x6f;
    uVar4 = uVar4 + 1;
  }
  if (plVar2 != plVar1) {
    func_0x0001086f7e04(param_1,plVar2,plVar1);
    plVar3 = (long *)param_2[1];
  }
  if (plVar5 != plVar3) {
    func_0x0001086f9fd0();
    if (plVar2 != plVar3) {
      func_0x0001086fa0b0();
      func_0x0001086f9554();
      func_0x000107c27b44(unaff_x20);
    }
    return plVar2;
  }
  return param_1;
}



/* Entry: 1008690e8; end: 100869107;  */

void FUN_1008690e8(void)

{
  return;
}



/* Entry: 100869108; end: 1008691cf;  */

void FUN_100869108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 uStack_81;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = auStack_70;
  func_0x0001008690f8();
  uStack_58 = extraout_x8;
  FUN_100869234(auStack_70,1);
  FUN_100869268(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar2 = lStack_60;
  lStack_60 = 0;
  func_0x00010086935c(param_1,lVar2 + 0x18);
  func_0x000100869470(auStack_70);
  func_0x000100869480(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000108772d44();
  func_0x000100869470();
  func_0x000108772ce8();
  pcStack_78 = FUN_1008691d0;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_100869108(&uStack_81,puVar1,lVar2,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1008691d0; end: 100869233;  */

void FUN_1008691d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_11;
  
  FUN_100869108(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 100869234; end: 10086925b;  */

long FUN_100869234(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100869208();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10086925c; end: 100869267;  */

void FUN_10086925c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,uint *param_6,uint *param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar6;
  
  uVar2 = (ulong)*param_6;
  uVar4 = (ulong)*param_7;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar6;
  if (lVar5 != 0) {
    do {
      FUN_1008692ac();
    } while (extraout_w10 != 0);
  }
  lVar5 = param_3[1];
  uVar6 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar6;
  if (lVar5 != 0) {
    do {
      FUN_1008692ac();
    } while (extraout_w10_00 != 0);
  }
  lVar5 = param_4[1];
  uVar6 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar6;
  if (lVar5 != 0) {
    do {
      FUN_1008692ac();
    } while (extraout_w10_01 != 0);
  }
  uVar3 = (undefined4)uVar4;
  uVar1 = (undefined4)uVar2;
  lVar5 = param_5[1];
  uVar6 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar6;
  if (lVar5 != 0) {
    do {
      FUN_1008692ac();
      uVar3 = (undefined4)uVar4;
      uVar1 = (undefined4)uVar2;
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)((long)param_1 + 0x54) = uVar3;
  param_1[0xb] = 0;
  return;
}



/* Entry: 100869268; end: 1008692ab;  */

undefined8 * FUN_100869268(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a67e40;
  param_1[1] = 0;
  FUN_10086925c(param_1 + 3);
  return param_1;
}



/* Entry: 1008692ac; end: 10086936f;  */

void FUN_1008692ac(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100869370; end: 1008693cf;  */

void FUN_100869370(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        FUN_100570568();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_1008693d0(param_2,&uStack_20);
    func_0x000100869440(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1008693d0; end: 100869467;  */

undefined8 * FUN_1008693d0(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010054e67c();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010086941c(&uStack_30);
  return param_1;
}



/* Entry: 100869468; end: 1008694a7;  */

void FUN_100869468(void)

{
  return;
}



/* Entry: 1008694a8; end: 100869517;  */

void FUN_1008694a8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100869494();
  if (extraout_x8 != 0) {
    do {
      func_0x0001006aee88();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(unaff_x19 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  FUN_100869518(unaff_x19 + 0x28,param_2 + 0x28);
  func_0x0001005fad5c(unaff_x19 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 100869518; end: 10086955f;  */

long FUN_100869518(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100632cf0();
  FUN_100632dc0(lVar1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 100869560; end: 1008695af;  */

void FUN_100869560(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  
  func_0x000100869494();
  if (extraout_x8 != 0) {
    do {
      func_0x0001006aee88();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x0001005fad5c(unaff_x19 + 0x18,param_2 + 0x18);
  return;
}



/* Entry: 1008695b0; end: 1008695bf;  */

void FUN_1008695b0(void)

{
  return;
}



/* Entry: 1008695c0; end: 100869c63;  */

void FUN_1008695c0(long param_1,long *param_2,ulong *param_3,long param_4,undefined8 *param_5)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  undefined8 **ppuVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 ***pppuVar11;
  long *plVar12;
  undefined8 extraout_x8;
  long lVar13;
  undefined8 extraout_x8_00;
  ulong uVar14;
  undefined8 extraout_x9;
  long *extraout_x9_00;
  int extraout_w10;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [24];
  long lStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  ulong *puStack_110;
  long *plStack_108;
  long *plStack_100;
  ulong uStack_f8;
  undefined4 uStack_f0;
  undefined4 auStack_e0 [8];
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_88;
  undefined8 uStack_78;
  
  FUN_1008695b0();
  uStack_78 = extraout_x8;
  FUN_100869c64();
  lStack_b8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  auStack_e0[0] = *(undefined4 *)(param_1 + 0x50);
  iVar3 = (int)param_3[1];
  if (iVar3 == 0) {
    lVar17 = 0;
    bVar1 = false;
LAB_10086969c:
    lVar15 = lStack_b0;
    if ((*param_3 & 1) != 0) {
      param_3 = (ulong *)(*param_3 + 7);
    }
    if (bVar1) {
      if ((long)(uStack_a8 - lStack_b0) / 0x78 < lVar17) {
        lVar4 = (lStack_b0 - lStack_b8) / 0x78;
        uVar2 = lVar4 + lVar17;
        if (0x222222222222222 < uVar2) {
          func_0x0001086f4f2c();
          goto LAB_100869b1c;
        }
        uVar5 = (long)(uStack_a8 - lStack_b8) / 0x78;
        uVar14 = uVar5 * 2;
        if (uVar14 < uVar2 || uVar14 - uVar2 == 0) {
          uVar14 = uVar2;
        }
        if (0x111111111111110 < uVar5) {
          uVar14 = 0x222222222222222;
        }
        func_0x0001086f4f38(&puStack_110,uVar14,lVar4,&uStack_a8);
        lVar17 = lVar17 * 0x78;
        lVar4 = (long)plStack_100 + lVar17;
        for (; lVar17 != 0; lVar17 = lVar17 + -0x78) {
          func_0x00010868cc20(plStack_100,*param_3);
          plStack_100 = (long *)((long)plStack_100 + 0x78);
          param_3 = param_3 + 1;
        }
        func_0x0001086f4fa4(&uStack_a8,lVar15,lStack_b0,lVar4);
        lVar13 = lStack_b0 - lVar15;
        lVar16 = (long)plStack_108 + ((lVar15 - lStack_b8) / -0x78) * 0x78;
        lStack_b0 = lVar15;
        func_0x0001086f4fa4(&uStack_a8,lStack_b8,lVar15,lVar16);
        lVar17 = lStack_b8;
        uStack_a8 = uStack_f8;
        lStack_b8 = lVar16;
        lStack_b0 = lVar4 + lVar13;
        func_0x0001086f6008(lVar17);
      }
      else if (lVar17 < 1) {
        func_0x0001086f50b8(&lStack_b8,lStack_b0,lStack_b0,lStack_b0 + (long)(int)lVar17 * 0x78);
        func_0x0001086f5150(&lStack_b8,param_3,lVar17,lVar15);
      }
      else {
        plStack_108 = &lStack_130;
        plStack_100 = &lStack_a0;
        uStack_f8 = uStack_f8 & 0xffffffffffffff00;
        puStack_110 = &uStack_a8;
        lStack_130 = lStack_b0;
        for (lVar17 = lVar17 << 3; lStack_a0 = lVar15, lVar17 != 0; lVar17 = lVar17 + -8) {
          func_0x00010868cc20(lVar15,*param_3);
          lVar15 = lStack_a0 + 0x78;
          param_3 = param_3 + 1;
        }
        uVar2 = uStack_f8 >> 8;
        uStack_f8 = CONCAT71((int7)uVar2,1);
        func_0x0001086f502c(&puStack_110);
        lStack_b0 = lVar15;
      }
    }
    lVar15 = lStack_b0;
    plStack_108 = (long *)0x0;
    puStack_110 = (ulong *)0x0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_f0 = 0x3f800000;
    ppuStack_178 = &puStack_110;
    uStack_170 = 0;
    for (lVar17 = lStack_b8; lVar17 != lVar15; lVar17 = lVar17 + 0x78) {
      func_0x0001086a6ac0(&lStack_a0,lVar17);
      FUN_100696384(&lStack_130,&lStack_a0);
      FUN_1005f73a4(&lStack_a0);
      func_0x0001086f51c0(&ppuStack_178,&lStack_130);
      FUN_100100fec(&lStack_130);
    }
    FUN_100869e04(auStack_148,param_2,&puStack_110);
    FUN_100869efc(&lStack_a0);
    lVar17 = lStack_a0;
    puVar10 = (undefined8 *)0xc0;
    func_0x000107c60e20();
    plVar19 = puVar10 + 1;
    *plVar19 = 0;
    puVar10[2] = 0;
    puVar18 = puVar10 + 3;
    *(undefined2 *)puVar18 = 0;
    puVar10[4] = 0;
    *puVar10 = &PTR_DAT_110a67088;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[8] = lStack_98;
    puVar10[7] = lVar17;
    if (lStack_98 != 0) {
      do {
        FUN_1008692ac();
      } while (extraout_w10 != 0);
    }
    lVar17 = *param_2;
    puVar10[10] = param_2[1];
    puVar10[9] = lVar17;
    FUN_100869f40();
    puVar10[0xb] = extraout_x8_00;
    puVar10[0xc] = extraout_x9;
    (**(code **)(*(long *)(param_4 + 8) + 0x10))(puVar10 + 0xd,(long *)(param_4 + 8));
    puVar10[0x12] = *param_5;
    (**(code **)(param_5[1] + 0x10))(puVar10 + 0x13,param_5 + 1);
    FUN_100869f5c(puVar10 + 4,(long)(puVar10[10] - puVar10[9]) / 0xa8);
    puStack_158 = puVar18;
    puStack_150 = puVar10;
    func_0x000100869440(&lStack_a0);
    pppuVar11 = &ppuStack_178;
    FUN_100869efc();
    ppuVar7 = ppuStack_178;
    do {
      cVar6 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar1) {
        *plVar19 = *plVar19 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    ppuStack_198 = ppuStack_178;
    uStack_190 = uStack_170;
    ppuStack_178 = (undefined8 **)0x0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    plStack_88 = (long *)0x0;
    puStack_188 = puVar18;
    puStack_180 = puVar10;
    func_0x000100869fec();
    *pppuVar11 = (undefined8 **)&PTR_SUB_110a670d8;
    pppuVar11[1] = ppuVar7;
    ppuStack_198 = (undefined8 **)0x0;
    uStack_190 = 0;
    func_0x000100869ff4(&ppuStack_198);
    func_0x00010086a008();
    func_0x00010086ad8c();
    FUN_10086ac74(&ppuStack_198);
    plVar12 = &lStack_1b8;
    FUN_100869efc();
    lVar17 = lStack_1b8;
    do {
      cVar6 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar1) {
        *plVar19 = *plVar19 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lStack_130 = lStack_1b8;
    uStack_128 = uStack_1b0;
    lStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    puStack_120 = puVar18;
    puStack_118 = puVar10;
    func_0x000100869fec();
    *plVar12 = (long)&PTR_FUN_110a67158;
    plVar12[1] = lVar17;
    lStack_130 = 0;
    uStack_128 = 0;
    func_0x000100869ff4(&lStack_130);
    uVar9 = plStack_c0 == extraout_x9_00;
    if ((bool)uVar9) {
      (**(code **)(*plStack_c0 + 0x18))(plStack_c0,&lStack_a0);
      (**(code **)(*plStack_c0 + 0x20))();
      plStack_c0 = plStack_88;
      plStack_88 = &lStack_a0;
    }
    else {
      plStack_88 = plStack_c0;
      plStack_c0 = plVar12;
    }
    func_0x00010086ad8c();
    FUN_10086ad94(&lStack_130);
    FUN_10086ad94(&lStack_1b8);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))(*(long **)(param_1 + 0x10),auStack_e0);
    FUN_10086ac74(&ppuStack_178);
    FUN_10086acd0(&puStack_158);
    func_0x00010086ad3c(auStack_148);
    func_0x000100864b68(&puStack_110);
    func_0x000100870634(auStack_e0);
    func_0x00010086ad78(uStack_78);
    if ((bool)uVar9) {
      return;
    }
    func_0x000107c60e78();
  }
  else if (-1 < iVar3) {
    func_0x0001086f4f38(&puStack_110,(long)iVar3,0,&uStack_a8);
    lVar15 = (long)plStack_108 + ((lStack_b0 - lStack_b8) / -0x78) * 0x78;
    func_0x0001086f4fa4(&uStack_a8,lStack_b8,lStack_b0,lVar15);
    lVar17 = lStack_b8;
    uStack_a8 = uStack_f8;
    lStack_b0 = (long)plStack_100;
    lStack_b8 = lVar15;
    func_0x0001086f6008(lVar17);
    lVar17 = (long)(int)param_3[1];
    bVar1 = 0 < lVar17;
    goto LAB_10086969c;
  }
  func_0x0001086f4f2c();
LAB_100869b1c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100869b20);
  (*pcVar8)();
}



/* Entry: 100869c64; end: 100869cdb;  */

void FUN_100869c64(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  FUN_100869cf8();
  func_0x000100869d1c();
  FUN_100869d38(*unaff_x20,unaff_x20[1],auStack_50,0);
  func_0x000100869da8();
  func_0x000100869dbc();
  func_0x000100869dd4();
  FUN_100868e3c(unaff_x19 + 0x58,uStack_58);
  func_0x000100869de0();
  func_0x000100869de8();
  func_0x000100869df0();
  return;
}



/* Entry: 100869cdc; end: 100869cf7;  */

void FUN_100869cdc(void)

{
  func_0x000107c61160(PTR_PTR_1126c8e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100869cf8; end: 100869d37;  */

void FUN_100869cf8(void)

{
  return;
}



/* Entry: 100869d38; end: 100869d9b;  */

undefined1  [16]
FUN_100869d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [31];
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1006a25a8();
  uStack_30 = param_3;
  uStack_28 = param_4;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xa8) {
    func_0x0001086f54f4(auStack_50,&uStack_31,unaff_x20);
    func_0x0001086f51c0(&uStack_30,auStack_50);
    FUN_100100fec(auStack_50);
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 100869d9c; end: 100869e03;  */

void FUN_100869d9c(void)

{
  return;
}



/* Entry: 100869e04; end: 100869efb;  */

void FUN_100869e04(undefined8 *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar7;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar3 = param_2[1];
  FUN_100866e44();
  for (; lVar6 != lVar3; lVar6 = lVar6 + 0xa8) {
    if ((*(byte *)(lVar6 + 0x88) & 1) == 0) {
      lVar1 = unaff_x23;
      if (*(long *)(lVar6 + 0x38) != 0) {
        lVar1 = *(long *)(lVar6 + 0x38);
      }
      lVar2 = unaff_x24;
      if (*(long *)(lVar1 + 0x18) != 0) {
        lVar2 = *(long *)(lVar1 + 0x18);
      }
      FUN_100696384(auStack_68,lVar2);
      uVar5 = param_3;
      func_0x000108699578(param_3,auStack_68);
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        cVar4 = *(char *)(lVar6 + 0x89);
        FUN_10054f8dc(auStack_88,auStack_68);
        uStack_70 = 0;
        if (cVar4 == '\0') {
          uStack_70 = uVar7;
        }
        func_0x0001086fa060();
        func_0x0001086f9fc0();
      }
      FUN_100100fec(auStack_68);
    }
  }
  return;
}



/* Entry: 100869efc; end: 100869f03;  */

undefined8 * FUN_100869efc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  
  lVar1 = unaff_x19[1];
  *param_1 = *unaff_x19;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  puVar2 = (undefined8 *)0x0;
  func_0x00010527822c();
  *unaff_x22 = 0;
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  return puVar2;
}



/* Entry: 100869f04; end: 100869f3f;  */

undefined8 * FUN_100869f04(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x22;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  puVar2 = (undefined8 *)0x0;
  func_0x00010527822c();
  *unaff_x22 = 0;
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  return puVar2;
}



/* Entry: 100869f40; end: 100869f5b;  */

void FUN_100869f40(void)

{
  undefined8 *unaff_x22;
  
  *unaff_x22 = 0;
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  return;
}



/* Entry: 100869f5c; end: 100869fe3;  */

void FUN_100869f5c(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x38) < param_2) {
    if (param_2 < 0x492492492492493) {
      func_0x0001086e7fac(auStack_48,param_2,(param_1[1] - *param_1) / 0x38);
      func_0x0001086e9514();
      func_0x0001086e9490();
    }
    else {
      func_0x0001086e7f5c();
      func_0x0001086e9490();
      func_0x0001086e92c8();
    }
  }
  return;
}



/* Entry: 100869fe4; end: 10086a01b;  */

void FUN_100869fe4(void)

{
  return;
}



/* Entry: 10086a01c; end: 10086a183;  */

/* WARNING: Removing unreachable block (ram,0x00010086a164) */

undefined1 * FUN_10086a01c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined8 extraout_x8;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_160 [48];
  undefined1 uStack_130;
  undefined1 auStack_128 [80];
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010086a010();
  lVar1 = param_1;
  FUN_1008695b0();
  uStack_48 = extraout_x8;
  FUN_1004b4e98();
  FUN_100869f04(auStack_98,param_1);
  lStack_88 = param_1;
  FUN_10086a184(auStack_80);
  uStack_60 = 0;
  uStack_50 = 1;
  plVar6 = *(long **)(param_1 + 0x10);
  auStack_d8[0] = *(undefined4 *)(param_1 + 0x50);
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_c0 = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  lStack_58 = lVar1;
  FUN_10086a1d0(auStack_128,auStack_98);
  puStack_a0 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)0x58;
  func_0x000107c60e20();
  *puVar2 = &PTR_SUB_110a672d8;
  FUN_10086a1d0(puVar2 + 1,auStack_128);
  auStack_160[0] = 0;
  uStack_130 = 0;
  puVar4 = auStack_d8;
  puStack_a0 = puVar2;
  (**(code **)(*plVar6 + 0x38))(plVar6,puVar4,auStack_160);
  FUN_10086ab34(auStack_160);
  func_0x00010086aba8(auStack_d8);
  FUN_10086abf8(auStack_128);
  puVar3 = auStack_98;
  FUN_10086abf8(puVar3);
  func_0x00010086ad78(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001086f60a8();
    FUN_10086ab34();
    func_0x00010086aba8(auStack_d8);
    FUN_10086abf8(auStack_128);
    puVar3 = auStack_98;
    FUN_10086abf8();
    func_0x0001086f5f4c();
    puVar5 = *(undefined4 **)(puVar4 + 6);
    if (puVar5 == (undefined4 *)0x0) {
      *(undefined8 *)(puVar3 + 0x18) = 0;
    }
    else if (puVar5 == puVar4) {
      func_0x0001086e93a4();
      func_0x0001086e946c();
    }
    else {
      *(undefined4 **)(puVar3 + 0x18) = puVar5;
      *(undefined8 *)(puVar4 + 6) = 0;
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10086a184; end: 10086a1cf;  */

long FUN_10086a184(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001086e93a4();
    func_0x0001086e946c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10086a1d0; end: 10086a20f;  */

void FUN_10086a1d0(long param_1,long param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1006a25a8();
  FUN_10086a210();
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  FUN_10086a184(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 10086a210; end: 10086a233;  */

void FUN_10086a210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10086a234; end: 10086a66b;  */

void FUN_10086a234(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long *aplStack_110 [2];
  uint uStack_100;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined ***pppuStack_c0;
  undefined1 uStack_b8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  
  puVar11 = param_2;
  func_0x00010086a224();
  lVar1 = *(long *)(puVar11 + 2);
  lVar6 = *(long *)(puVar11 + 4);
  uVar4 = lVar1 == lVar6;
  uStack_78 = extraout_x8;
  if ((bool)uVar4) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    FUN_10086a66c(param_2 + 8,&uStack_140);
    FUN_10086aa78(&uStack_140);
  }
  else {
    puVar5 = (undefined8 *)0x60;
    func_0x000107c60e20();
    plVar10 = puVar5 + 1;
    *plVar10 = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_DAT_110a65de0;
    puVar9 = puVar5 + 3;
    func_0x0001086f3de4(puVar9,lVar6 - lVar1 >> 5,param_2 + 8);
    puStack_150 = puVar9;
    puStack_148 = puVar5;
    while (uVar4 = *(long *)(param_2 + 2) == *(long *)(param_2 + 4), !(bool)uVar4) {
      lStack_168 = 0;
      lStack_160 = 0;
      uStack_158 = 0;
      while (((ulong)((lStack_160 - lStack_168) / 0x50) < 0x32 &&
             (lVar1 = *(long *)(param_2 + 4), *(long *)(param_2 + 2) != lVar1))) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uStack_100 = *param_2;
        uStack_fc = 0x101;
        uStack_f0 = (undefined4)*(undefined8 *)(lVar1 + -0x18);
        uStack_ec = (undefined4)((ulong)*(undefined8 *)(lVar1 + -0x18) >> 0x20);
        uStack_f8 = (undefined4)*(undefined8 *)(lVar1 + -0x20);
        uStack_f4 = (undefined4)((ulong)*(undefined8 *)(lVar1 + -0x20) >> 0x20);
        ppuStack_e8 = *(undefined ***)(lVar1 + -0x10);
        *(undefined8 *)(lVar1 + -0x18) = 0;
        *(undefined8 *)(lVar1 + -0x10) = 0;
        *(undefined8 *)(lVar1 + -0x20) = 0;
        ppuStack_e0 = *(undefined ***)(lVar1 + -8);
        uStack_98 = 0;
        uStack_90 = 0;
        ppuStack_d8 = &PTR_DAT_110a65e30;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_b8 = 0;
        puStack_d0 = puVar9;
        puStack_c8 = puVar5;
        pppuStack_c0 = &ppuStack_d8;
        func_0x0001086e7274(&lStack_168,&uStack_100);
        func_0x0001086cf1c0(&uStack_100);
        func_0x0001086e7b44(&uStack_178);
        func_0x0001086b1558(puVar11 + 2,*(long *)(param_2 + 4) + -0x20);
        func_0x0001086e7b44(&uStack_98);
      }
      lStack_128 = 0;
      lStack_120 = 0;
      uVar12 = 0x120097;
      uStack_118 = 0;
      while (lVar1 = lStack_160, lStack_168 != lStack_160) {
        puVar13 = (undefined4 *)(lStack_160 + -0x50);
        lVar6 = param_1;
        func_0x0001086e67e4(param_1,puVar13);
        if ((int)lVar6 == 0) {
          uVar7 = param_1 + 0x48;
          func_0x0001086e6640(uVar7,lVar1 + -0x48);
          if ((uVar7 & 1) == 0) {
            uVar12 = *puVar13;
            FUN_10065d008(&lStack_128,lVar1 + -0x48);
          }
          func_0x0001086e6874(param_1 + 0x48,puVar13);
        }
        else {
          uStack_100 = uStack_100 & 0xffffff00;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_fc = 0;
          uStack_fa = 0;
          uStack_f8 = 0;
          uStack_ec = 0;
          ppuStack_e8 = (undefined **)CONCAT44(ppuStack_e8._4_4_,1);
          func_0x0001086e6818(puVar13,&uStack_100);
        }
        func_0x0001086e76a0(&lStack_168,lStack_160 + -0x50);
      }
      if (lStack_128 != lStack_120) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        uStack_f8 = (undefined4)*(undefined8 *)(param_1 + 0x10);
        uStack_f4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
        uStack_100 = (uint)uVar14;
        uStack_fc = (undefined2)((ulong)uVar14 >> 0x20);
        uStack_fa = (undefined2)((ulong)uVar14 >> 0x30);
        if (*(long *)(param_1 + 0x10) != 0) {
          do {
            FUN_100565610();
          } while (extraout_w10 != 0);
        }
        func_0x0001005fad5c(&uStack_f0,&lStack_128);
        pppuVar8 = &ppuStack_d8;
        func_0x0001086e76d4(&ppuStack_d8,param_3);
        uStack_a0 = uVar12;
        func_0x0001086e9464();
        *pppuVar8 = &PTR_DAT_110a65fc0;
        pppuVar8[2] = (undefined **)CONCAT44(uStack_f4,uStack_f8);
        pppuVar8[1] = (undefined **)CONCAT26(uStack_fa,CONCAT24(uStack_fc,uStack_100));
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_fa = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        pppuVar8[4] = ppuStack_e8;
        pppuVar8[3] = (undefined **)CONCAT44(uStack_ec,uStack_f0);
        pppuVar8[5] = ppuStack_e0;
        ppuStack_e8 = (undefined **)0x0;
        ppuStack_e0 = (undefined **)0x0;
        uStack_f0 = 0;
        uStack_ec = 0;
        func_0x0001086e76d4(pppuVar8 + 6,&ppuStack_d8);
        *(undefined4 *)(pppuVar8 + 0xd) = uStack_a0;
        pppuStack_80 = pppuVar8;
        func_0x0001086e6758(&uStack_100);
        func_0x0001086e5330(aplStack_110,param_1 + 0x28);
        if (aplStack_110[0] != (long *)0x0) {
          (**(code **)(*aplStack_110[0] + 0x78))
                    (aplStack_110[0],uVar12,&lStack_128,&uStack_98,param_3);
        }
        FUN_1005640e4(aplStack_110);
        func_0x0001086e8d68(&uStack_98);
      }
      func_0x0001005fb56c(&lStack_128);
      func_0x0001086e7638(&lStack_168);
    }
    func_0x0001086e7b44(&puStack_150);
  }
  FUN_10086ab20(uStack_78);
  if ((bool)uVar4) {
    return;
  }
  func_0x000107c60e78();
  puVar9 = &uStack_140;
  FUN_10086aa78();
  func_0x0001086e92c8();
  plVar10 = (long *)puVar9[3];
  if (plVar10 == (long *)0x0) {
    func_0x000104bfeb48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010086a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x30))();
  return;
}



/* Entry: 10086a66c; end: 10086a683;  */

void FUN_10086a66c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 == (long *)0x0) {
    func_0x000104bfeb48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010086a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}



/* Entry: 10086a684; end: 10086a68f;  */

void FUN_10086a684(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010086a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 10086a690; end: 10086a70b;  */

void FUN_10086a690(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001086e82ec(param_1,param_4);
    func_0x0001086e8338(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_10086a814(&uStack_40);
  return;
}



/* Entry: 10086a70c; end: 10086a747;  */

undefined8 * FUN_10086a70c(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10086a690(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x38);
  return param_1;
}



/* Entry: 10086a748; end: 10086a813;  */

void FUN_10086a748(long param_1)

{
  undefined ***pppuVar1;
  long *plVar2;
  long lVar3;
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(param_1 + 0x18);
  FUN_10086a70c(auStack_48);
  FUN_10086a66c(param_1 + 0x20,auStack_48);
  FUN_10086aa78(auStack_48);
  plVar2 = *(long **)(lVar3 + 0x40);
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110a609a8;
  uStack_68 = 0;
  uStack_50 = 0x66;
  pppuVar1 = &ppuStack_70;
  FUN_10086aac8(pppuVar1,*(undefined4 *)(lVar3 + 0x50));
  param_1 = param_1 + 0x40;
  FUN_1005e3518();
  lStack_78 = param_1;
  (**(code **)(*plVar2 + 0x18))(plVar2,pppuVar1,&lStack_78);
  FUN_1005505e4(&ppuStack_70);
  return;
}



/* Entry: 10086a814; end: 10086a83f;  */

long FUN_10086a814(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010086aa9c(param_1);
  }
  return param_1;
}



/* Entry: 10086a840; end: 10086a857;  */

void FUN_10086a840(long param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [24];
  undefined1 uStack_100;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  lVar5 = *param_2;
  lVar2 = param_2[1];
  pcVar3[1] = '\x01';
  plVar7 = (long *)(pcVar3 + 8);
  lVar11 = lVar2 - lVar5;
  if (0 < lVar11) {
    lVar8 = *(long *)(pcVar3 + 0x10);
    plVar9 = (long *)(pcVar3 + 0x18);
    if (*plVar9 - lVar8 < lVar11) {
      plVar4 = plVar7;
      func_0x0001086e8294(plVar7,(lVar8 - *plVar7) / 0x38 + lVar11 / 0x38);
      func_0x0001086e7fac(&plStack_88,plVar4,(lVar8 - *plVar7) / 0x38,plVar9);
      pcVar1 = (char *)((long)plStack_78 + lVar11);
      for (; lVar11 != 0; lVar11 = lVar11 + -0x38) {
        func_0x0001086d48a8(plStack_78,lVar5);
        plStack_78 = plStack_78 + 7;
        lVar5 = lVar5 + 0x38;
      }
      plStack_78 = (long *)pcVar1;
      func_0x0001086e803c(plVar9,lVar8,*(undefined8 *)(pcVar3 + 0x10),pcVar1);
      lVar5 = *(long *)(pcVar3 + 8);
      plStack_78 = (long *)((long)plStack_78 + (*(long *)(pcVar3 + 0x10) - lVar8));
      *(long *)(pcVar3 + 0x10) = lVar8;
      func_0x0001086e803c(plVar9,lVar5,lVar8,plStack_80 + ((lVar8 - lVar5) / -0x38) * 7);
      plStack_88 = *(long **)(pcVar3 + 8);
      *(long **)(pcVar3 + 8) = plStack_80 + ((lVar8 - lVar5) / -0x38) * 7;
      uVar6 = *(ulong *)(pcVar3 + 0x18);
      *(ulong *)(pcVar3 + 0x18) = uStack_70;
      *(long **)(pcVar3 + 0x10) = plStack_78;
      plStack_80 = plStack_88;
      plStack_78 = plStack_88;
      uStack_70 = uVar6;
      func_0x0001086e8160(&plStack_88);
    }
    else {
      plStack_80 = &lStack_60;
      plStack_78 = &lStack_58;
      uStack_70 = uStack_70 & 0xffffffffffffff00;
      plStack_88 = plVar9;
      lStack_60 = lVar8;
      for (; lStack_58 = lVar8, lVar5 != lVar2; lVar5 = lVar5 + 0x38) {
        func_0x0001086d48a8(lVar8,lVar5);
        lVar8 = lStack_58 + 0x38;
      }
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      func_0x0001086e80e0(&plStack_88);
      *(long *)(pcVar3 + 0x10) = lVar8;
    }
  }
  if ((*pcVar3 == '\x01') && (pcVar3[1] == '\x01')) {
    lVar5 = *(long *)(pcVar3 + 0x20);
    if (*(long *)(lVar5 + 0x58) != 0) {
      func_0x0001008659a8();
    }
    uStack_68 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    if (*(long *)(pcVar3 + 0x30) != *(long *)(pcVar3 + 0x38)) {
      uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x18);
      FUN_10002b838(auStack_c0,&UNK_10f4b1e35);
      FUN_10054b97c(auStack_a8,uVar10,auStack_c0);
      func_0x000107c60ca0(auStack_c0);
      auStack_118[0] = 0;
      uStack_100 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      plVar9 = *(long **)(*(long *)(lVar5 + 0x20) + 0x10);
      (**(code **)(*plVar9 + 0xb8))
                (auStack_f8,plVar9,*(undefined4 *)(lVar5 + 0x54),pcVar3 + 0x30,auStack_118,
                 auStack_a8,&uStack_190,0);
      FUN_1006a25b4(&uStack_68,auStack_f8);
      FUN_100867bf0(auStack_f8);
      FUN_100868e10(&uStack_190);
      FUN_1001148fc(auStack_118);
      FUN_10054cbac(auStack_a8);
      FUN_10054d120(auStack_a8);
    }
    FUN_10086b104(&uStack_190,*plVar7,*(undefined8 *)(pcVar3 + 0x10));
    (**(code **)(pcVar3 + 0x48))(&uStack_68,&uStack_190,pcVar3 + 0x48);
    func_0x000100870590(&uStack_190);
    func_0x00010063350c(&uStack_68);
    return;
  }
  return;
}



/* Entry: 10086a858; end: 10086aa77;  */

void FUN_10086a858(char *param_1,long param_2,long param_3)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [24];
  undefined1 uStack_100;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar4 = (long *)(param_1 + 8);
  lVar8 = param_3 - param_2;
  if (0 < lVar8) {
    lVar5 = *(long *)(param_1 + 0x10);
    plVar6 = (long *)(param_1 + 0x18);
    if (*plVar6 - lVar5 < lVar8) {
      plVar2 = plVar4;
      func_0x0001086e8294(plVar4,(lVar5 - *plVar4) / 0x38 + lVar8 / 0x38);
      func_0x0001086e7fac(&plStack_88,plVar2,(lVar5 - *plVar4) / 0x38,plVar6);
      pcVar1 = (char *)((long)plStack_78 + lVar8);
      for (; lVar8 != 0; lVar8 = lVar8 + -0x38) {
        func_0x0001086d48a8(plStack_78,param_2);
        plStack_78 = plStack_78 + 7;
        param_2 = param_2 + 0x38;
      }
      plStack_78 = (long *)pcVar1;
      func_0x0001086e803c(plVar6,lVar5,*(undefined8 *)(param_1 + 0x10),pcVar1);
      lVar8 = *(long *)(param_1 + 8);
      plStack_78 = (long *)((long)plStack_78 + (*(long *)(param_1 + 0x10) - lVar5));
      *(long *)(param_1 + 0x10) = lVar5;
      func_0x0001086e803c(plVar6,lVar8,lVar5,plStack_80 + ((lVar5 - lVar8) / -0x38) * 7);
      plStack_88 = *(long **)(param_1 + 8);
      *(long **)(param_1 + 8) = plStack_80 + ((lVar5 - lVar8) / -0x38) * 7;
      uVar3 = *(ulong *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = uStack_70;
      *(long **)(param_1 + 0x10) = plStack_78;
      plStack_80 = plStack_88;
      plStack_78 = plStack_88;
      uStack_70 = uVar3;
      func_0x0001086e8160(&plStack_88);
    }
    else {
      plStack_80 = &lStack_60;
      plStack_78 = &lStack_58;
      uStack_70 = uStack_70 & 0xffffffffffffff00;
      plStack_88 = plVar6;
      lStack_60 = lVar5;
      for (; lStack_58 = lVar5, param_2 != param_3; param_2 = param_2 + 0x38) {
        func_0x0001086d48a8(lVar5,param_2);
        lVar5 = lStack_58 + 0x38;
      }
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      func_0x0001086e80e0(&plStack_88);
      *(long *)(param_1 + 0x10) = lVar5;
    }
  }
  if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
    lVar8 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar8 + 0x58) != 0) {
      func_0x0001008659a8();
    }
    uStack_68 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    if (*(long *)(param_1 + 0x30) != *(long *)(param_1 + 0x38)) {
      uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x18);
      FUN_10002b838(auStack_c0,&UNK_10f4b1e35);
      FUN_10054b97c(auStack_a8,uVar7,auStack_c0);
      func_0x000107c60ca0(auStack_c0);
      auStack_118[0] = 0;
      uStack_100 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      plVar6 = *(long **)(*(long *)(lVar8 + 0x20) + 0x10);
      (**(code **)(*plVar6 + 0xb8))
                (auStack_f8,plVar6,*(undefined4 *)(lVar8 + 0x54),param_1 + 0x30,auStack_118,
                 auStack_a8,&uStack_190,0);
      FUN_1006a25b4(&uStack_68,auStack_f8);
      FUN_100867bf0(auStack_f8);
      FUN_100868e10(&uStack_190);
      FUN_1001148fc(auStack_118);
      FUN_10054cbac(auStack_a8);
      FUN_10054d120(auStack_a8);
    }
    FUN_10086b104(&uStack_190,*plVar4,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(param_1 + 0x48))(&uStack_68,&uStack_190,param_1 + 0x48);
    func_0x000100870590(&uStack_190);
    func_0x00010063350c(&uStack_68);
    return;
  }
  return;
}


