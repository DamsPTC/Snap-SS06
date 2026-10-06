/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080c3c70; end: 1080c3d2f;  */

void FUN_1080c3c70(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined1 auStack_30 [16];
  
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x0001080c465c();
  if (lVar2 != 0) {
    func_0x0001080c45a4();
    puVar1 = auStack_30;
    func_0x00010b9812a4();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1080c3d30;
    puStack_48 = &UNK_110883780;
    func_0x0001080c465c();
    lStack_40 = lVar2;
    puStack_38 = puVar1;
    _objc_retain(puVar1);
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_release(puStack_38);
    _objc_release(lStack_40);
    func_0x0001080c45bc();
  }
  func_0x0001080c459c();
  return;
}



/* Entry: 1080c3d30; end: 1080c3d3b;  */

void FUN_1080c3d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_displayMessage__1125bf0c8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1080c3d3c; end: 1080c3d5f;  */

void FUN_1080c3d3c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001080c458c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080c3d60; end: 1080c3e2b;  */

void FUN_1080c3d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  
  func_0x00010b98101c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c45a4();
  func_0x00010b9812a4(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c4604();
  func_0x00010b9812a4(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133400(*(undefined8 *)(param_1 + 0x48));
  func_0x0001080c45c4();
  func_0x0001080c45bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080c3e2c; end: 1080c3ee7;  */

void FUN_1080c3e2c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *param_3;
  if ((lVar3 == 0) || (func_0x00010b94be7c(), (int)lVar3 != 0)) {
    plVar4 = (long *)0x28;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 1;
    *plVar4 = (long)&PTR_FUN_110a1ddc0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[2] = 0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar4 + 1;
      do {
        lVar3 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) goto LAB_1080c466c;
    }
    return;
  }
  plVar4 = (long *)0x40;
  __Znwm();
  func_0x00010b94d87c();
  plVar5 = plVar4 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar3 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
LAB_1080c466c:
                    /* WARNING: Could not recover jumptable at 0x0001080c4674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080c3ee8; end: 1080c3eef;  */

void FUN_1080c3ee8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *param_3;
  if ((lVar3 == 0) || (func_0x00010b94be7c(), (int)lVar3 != 0)) {
    plVar4 = (long *)0x28;
    __Znwm();
    plVar5 = plVar4 + 1;
    *plVar5 = 1;
    *plVar4 = (long)&PTR_FUN_110a1ddc0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[2] = 0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar4 + 1;
      do {
        lVar3 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) goto LAB_1080c466c;
    }
    return;
  }
  plVar4 = (long *)0x40;
  __Znwm();
  func_0x00010b94d87c();
  plVar5 = plVar4 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar3 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
LAB_1080c466c:
                    /* WARNING: Could not recover jumptable at 0x0001080c4674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080c3ef0; end: 1080c3fbb;  */

void FUN_1080c3ef0(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [16];
  
  func_0x00010b98101c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c45a4();
  func_0x00010b9812a4(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c4604();
  func_0x00010b9812a4(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132a40(*(undefined8 *)(param_1 + 0x48));
  func_0x0001080c45c4();
  func_0x0001080c45bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080c3fbc; end: 1080c3ffb;  */

void FUN_1080c3fbc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)0x2;
  func_0x00010813eda4();
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1080c3ffc; end: 1080c400b;  */

void FUN_1080c3ffc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)0x2;
  func_0x00010813eda4();
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1080c400c; end: 1080c4087;  */

void FUN_1080c400c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_1080c4088(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1080c4088; end: 1080c40af;  */

undefined8 FUN_1080c4088(long param_1)

{
  undefined8 unaff_x19;
  
  _objc_release(*(undefined8 *)(param_1 + 8));
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 1080c40b0; end: 1080c4113;  */

undefined1 * FUN_1080c40b0(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar1 = (undefined1 *)(param_1[2] - *param_1 >> 2);
    if (puVar1 <= param_2) {
      puVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar1 = (undefined1 *)0x1fffffffffffffff;
    }
    return puVar1;
  }
  func_0x000104bfe13c();
  uStack_18 = 0x1080c40f0;
  puVar1 = &uStack_21;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0001003a85b8(puVar1,param_1);
  return puVar1;
}



/* Entry: 1080c4114; end: 1080c41e3;  */

void FUN_1080c4114(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_1080c41e4(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_1080c415c;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_1080c415c;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_1080c41b8:
    FUN_1080c4224(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_1080c41b8;
    }
    func_0x0001080c434c(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_1080c41e4(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_1080c415c:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 1080c41e4; end: 1080c4223;  */

ulong FUN_1080c41e4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 1080c4224; end: 1080c4507;  */

void FUN_1080c4224(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_1080c4508();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_1080c41e4(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_1080c452c(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1080c4508; end: 1080c452b;  */

void FUN_1080c4508(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 1080c452c; end: 1080c4683;  */

undefined8 FUN_1080c452c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *param_2 = 0;
  _objc_release(param_2[1]);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 1080c4684; end: 1080c46af;  */

undefined8 * FUN_1080c4684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1ddc0;
  FUN_1080c577c(param_1 + 2);
  return param_1;
}



/* Entry: 1080c46b0; end: 1080c46b3;  */

undefined8 * FUN_1080c46b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1ddc0;
  FUN_1080c577c(param_1 + 2);
  return param_1;
}



/* Entry: 1080c46b4; end: 1080c46c7;  */

void FUN_1080c46b4(void)

{
  FUN_1080c4684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c46c8; end: 1080c46cf;  */

void FUN_1080c46c8(void)

{
  return;
}



/* Entry: 1080c46d0; end: 1080c4857;  */

void FUN_1080c46d0(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c069fa0(param_2);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar6 != puVar1) {
    puVar4 = (undefined8 *)0x30;
    __Znwm();
    plVar7 = puVar4 + 1;
    *plVar7 = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110a1df40;
    plVar8 = puVar4 + 3;
    *plVar8 = (long)puVar6;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar4[4] = puVar1;
    puVar4[5] = uVar5;
    *(long *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    plStack_60 = plVar8;
    puStack_58 = puVar4;
    if (param_2 == 0) {
      for (; puVar6 != puVar1; puVar6 = puVar6 + 6) {
        (*(code *)*puVar6)(puVar6);
      }
    }
    else {
      func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
      func_0x0001080c5d44(PTR__OBJC_CLASS___CATransaction_1126b5718);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_70 = plVar8;
      puStack_68 = puVar4;
      func_0x00010c17fb40();
      func_0x00010c1cbe20(param_2);
      func_0x00010c1cbd40(param_2);
      func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      FUN_1080c5c34(&plStack_70);
    }
    FUN_1080c5c34(&plStack_60);
  }
  func_0x0001080c5cb8();
  return;
}



/* Entry: 1080c4858; end: 1080c488f;  */

void FUN_1080c4858(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*(long **)(param_1 + 0x20))[1];
  for (puVar2 = (undefined8 *)**(long **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 6) {
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 1080c4890; end: 1080c48bf;  */

void FUN_1080c4890(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001080c5d94(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1080c48c0; end: 1080c4abf;  */

void FUN_1080c48c0(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  int extraout_w10;
  long lVar5;
  undefined8 uStack_58;
  
  lVar5 = param_3 + 0x20;
  FUN_1080dd62c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_3 + 0x20);
    uVar1 = 0;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      do {
        func_0x0001080c5d94();
      } while (extraout_w10 != 0);
    }
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c076f00();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar2 != 0) {
      if (lVar5 != 0) {
        func_0x00010b8c2988(&uStack_58,lVar5);
      }
      func_0x00010c25d9e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(uVar1);
      _objc_release(puVar3);
      if (lVar5 != 0) {
        func_0x000104bddf04(uStack_58);
      }
    }
    func_0x0001080c5cf8();
    func_0x000105276914(lVar5);
  }
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21fea0();
  if (param_4 == 0) {
    func_0x00010c220000(param_2);
  }
  else {
    _objc_alloc(PTR_PTR_1126d9408);
    func_0x00010c062040();
    func_0x00010c220000(param_2);
    uVar4 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_didMoveToValdiContext_viewNode__1125bb978);
    if ((uVar4 & 1) != 0) {
      func_0x00010bf77f40(param_2);
    }
    func_0x0001080c5cd4();
  }
  func_0x0001080c5cdc();
  func_0x0001080c5cb8();
  return;
}



/* Entry: 1080c4ac0; end: 1080c4bcf;  */

void FUN_1080c4ac0(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1080c4bd0(param_2,param_5);
    _objc_retain(param_2);
    func_0x0001080c5d6c();
    _objc_retain(param_2);
    uVar1 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_contentViewForInsertingValdiChil_1125b1108);
    if ((uVar1 & 1) != 0) {
      func_0x00010bf4dd80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c5cc0();
    }
    func_0x00010c066fa0(param_2);
    func_0x0001080c5cd4();
    func_0x0001080c5cb8();
    func_0x0001080c5cc0();
  }
  func_0x0001080c5cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080c4bd0; end: 1080c4c6f;  */

void FUN_1080c4bd0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if (*param_2 != 0) {
    lVar1 = *param_2 + 0x18;
    func_0x00010b96de64();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5cb00();
    if ((int)lVar2 != 0) {
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc640(lVar1);
      func_0x0001080c5cdc();
    }
    func_0x0001080c5cc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080c4c70; end: 1080c4d0b;  */

void FUN_1080c4c70(long param_1)

{
  long lVar1;
  
  func_0x0001080c5d88();
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    func_0x0001080c5cd4();
    FUN_1080c4bd0(lVar1);
    func_0x00010c12c960(param_1);
  }
  func_0x0001080c5cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080c4d0c; end: 1080c4d4f;  */

void FUN_1080c4d0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1080c617c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080c4d50; end: 1080c4fc7;  */

void FUN_1080c4d50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  long lVar5;
  uint *unaff_x21;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  func_0x0001080c5d88();
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    uVar6 = (ulong)*unaff_x21;
    uVar7 = (ulong)unaff_x21[1];
    uVar8 = unaff_x21[2];
    uVar9 = 0;
    uVar10 = unaff_x21[3];
    uVar11 = 0;
    func_0x00010b968614(uVar6,uVar7);
    dVar1 = (double)CONCAT44(uVar9,uVar8);
    dVar2 = (double)CONCAT44(uVar11,uVar10);
    func_0x00010bf20c00(param_1);
    if (*param_5 == 0) {
      func_0x00010c17a6a0(uVar6,uVar7,param_1);
      func_0x0001080c5d74(param_1);
      func_0x00010c1739e0();
    }
    else {
      dVar3 = (double)CONCAT44(uVar11,uVar10);
      lVar5 = *param_5 + 0x18;
      func_0x00010b96de64(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297180(uVar6,uVar7,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c5d24();
      func_0x0001080c5cdc();
      func_0x0001080c5cf8();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c5d74(PTR__OBJC_CLASS___NSValue_1126afdf8);
      func_0x00010c2971a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c5d24();
      func_0x0001080c5cdc();
      func_0x0001080c5cf8();
      bVar4 = false;
      if (((double)CONCAT44(uVar9,uVar8) == dVar1) && (bVar4 = false, !NAN(dVar3) && !NAN(dVar2))) {
        bVar4 = dVar3 == dVar2;
      }
      if (!bVar4) {
        if (((double)CONCAT44(uVar9,uVar8) == 0.0) || (dVar3 == 0.0)) {
          func_0x00010c1cbd40(param_1);
        }
        else {
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0xc2000000;
          pcStack_98 = FUN_1080c4fc8;
          puStack_90 = &UNK_11087bb00;
          func_0x0001080c5d6c();
          lStack_88 = param_1;
          func_0x00010bef78c0(lVar5,param_2,&puStack_a8);
          _objc_release(lStack_88);
        }
      }
    }
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72540();
    func_0x0001080c5cc0();
    func_0x0001080c5cdc();
  }
  func_0x0001080c5cb8();
  return;
}



/* Entry: 1080c4fc8; end: 1080c4fcf;  */

void FUN_1080c4fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 1080c4fd0; end: 1080c507b;  */

void FUN_1080c4fd0(undefined8 param_1,long param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    uVar1 = (ulong)*param_3;
    func_0x00010b9685a0(uVar1);
    uVar2 = (ulong)param_3[1];
    func_0x00010b9685a0(uVar2);
    uVar3 = (ulong)*param_4;
    func_0x00010b9685a0(uVar3);
    uVar4 = (ulong)param_4[1];
    func_0x00010b9685a0(uVar4);
    func_0x00010c152280(uVar1,uVar2,uVar3,uVar4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080c507c; end: 1080c515b;  */

void FUN_1080c507c(ulong param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *unaff_x21;
  long lStack_38;
  
  func_0x0001080c5d88();
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 != 0) &&
     (uVar4 = param_1,
     _objc_opt_respondsToSelector(param_1,PTR_s_onValdiAssetDidChange_shouldFlip_112617808),
     (uVar4 & 1) != 0)) {
    lStack_38 = *unaff_x21;
    if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_38 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010b981064(&lStack_38,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e77c0(param_1);
    func_0x0001080c5cdc();
    func_0x000104bddf04(lStack_38);
  }
  func_0x0001080c5cb8();
  return;
}



/* Entry: 1080c515c; end: 1080c519b;  */

void FUN_1080c515c(undefined8 param_1,undefined8 param_2)

{
  FUN_1080c617c(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080c519c; end: 1080c5203;  */

void FUN_1080c519c(undefined8 param_1,long param_2)

{
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    func_0x0001080c5cc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080c5204; end: 1080c5443;  */

void FUN_1080c5204(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar3;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 *apuStack_a8 [5];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [5];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_opt_respondsToSelector();
  if ((((ulong)puVar3 & 1) == 0) ||
     (puVar3 = puVar1, func_0x00010c2a63c0(), ((ulong)puVar3 & 1) == 0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)0x1;
  }
  func_0x00010c21fea0(puVar1);
  func_0x00010c220000(puVar1);
  if ((int)puVar3 != 0) {
    func_0x00010c295800(puVar1);
    puVar3 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf03d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x0001080c5cf8();
    func_0x0001080c5cd4();
    if (puVar2 == (undefined8 *)0x0) {
      (*(code *)*param_3)(*param_2,param_3);
    }
    else {
      func_0x00010c08c0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      func_0x0001080c5cd4();
      FUN_1080c583c(&uStack_78,param_3);
      param_2 = (undefined8 *)*param_2;
      if ((param_2 != (undefined8 *)0x0) && (param_2[2] != 0)) {
        do {
          func_0x0001080c5d94();
        } while (extraout_w10 != 0);
      }
      func_0x0001080c5d44();
      uStack_c8 = 0xc6000000;
      pcStack_c0 = FUN_1080c5444;
      puStack_b8 = &UNK_110a1dea0;
      puVar3 = &uStack_78;
      FUN_1080c583c(auStack_b0,&uStack_78);
      if ((param_2 != (undefined8 *)0x0) && (param_2[2] != 0)) {
        do {
          func_0x0001080c5d94();
        } while (extraout_w10_00 != 0);
      }
      puStack_80 = param_2;
      func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,auStack_d0);
      func_0x0001080c5c80(puStack_80);
      (*(code *)*apuStack_a8[0])(apuStack_a8);
      func_0x0001080c5c80(param_2);
      (*(code *)*apuStack_70[0])(apuStack_70);
    }
  }
  func_0x0001080c5cb8();
  func_0x0001080c5d34(uStack_48);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    func_0x0001080c5c80(param_2);
    puVar3 = puVar3 + 1;
    (*(code *)*apuStack_70[0])();
    func_0x0001080c5cb8();
    func_0x0001080c5d1c();
                    /* WARNING: Could not recover jumptable at 0x0001080c5450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar3[4])(puVar3[10]);
    return;
  }
  return;
}



/* Entry: 1080c5444; end: 1080c5453;  */

void FUN_1080c5444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080c5450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 1080c5454; end: 1080c54d3;  */

void FUN_1080c5454(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_1080c583c(param_1 + 0x20,param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x50);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x50) = lVar4;
  return;
}



/* Entry: 1080c54d4; end: 1080c5667;  */

void FUN_1080c54d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_68 [3];
  
  func_0x0001080c5d88();
  FUN_1080c617c();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    alStack_68[0] = 0;
    alStack_68[1] = 0;
    alStack_68[2] = 0;
    func_0x0001080c5d10();
    if (alStack_68[0] != 0) {
      func_0x0001080c5cc8();
    }
  }
  else {
    func_0x00010bf20c00(param_5);
    puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc();
    func_0x00010bff9500(param_1,param_2,param_3,param_4);
    func_0x0001080c5d44();
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1080c56ec;
    puStack_98 = &UNK_110a1ded0;
    func_0x0001080c5d6c();
    lStack_90 = param_5;
    uStack_88 = param_1;
    uStack_80 = param_2;
    uStack_78 = param_3;
    uStack_70 = param_4;
    func_0x00010bdc1e00(puVar1,param_6,auStack_b0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      alStack_68[0] = 0;
      alStack_68[1] = 0;
      alStack_68[2] = 0;
      func_0x0001080c5d10();
    }
    else {
      func_0x00010b9813b8(alStack_68,puVar1);
      func_0x0001080c5d10();
    }
    if (alStack_68[0] != 0) {
      func_0x0001080c5cc8();
    }
    func_0x0001080c5cd4();
    _objc_release(lStack_90);
    func_0x0001080c5cc0();
  }
  func_0x0001080c5cb8();
  return;
}



/* Entry: 1080c5668; end: 1080c56eb;  */

void FUN_1080c5668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  code *pcVar2;
  long extraout_x9_00;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001080c5d34(param_1);
  pcVar2 = (code *)*param_1;
  uStack_40 = *param_2;
  uStack_48 = 1;
  *param_2 = 0;
  uStack_30 = param_2[2];
  uStack_38 = param_2[1];
  uStack_28 = extraout_x9;
  (*pcVar2)(&uStack_48,extraout_x8);
  puVar1 = &uStack_48;
  func_0x0001080c5c8c();
  func_0x0001080c5d34(uStack_28);
  if (extraout_x9_00 == extraout_x8_00) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c5c8c(&uStack_48);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1[5],puVar1[6],puVar1[7],puVar1[8],puVar1[4],
             PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1);
  return;
}



/* Entry: 1080c56ec; end: 1080c5733;  */

void FUN_1080c56ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,1);
  return;
}



/* Entry: 1080c5734; end: 1080c576f;  */

long FUN_1080c5734(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001080c5864();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_1080c58a0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 1080c5770; end: 1080c577b;  */

void FUN_1080c5770(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001080c5778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(param_2);
  return;
}



/* Entry: 1080c577c; end: 1080c57eb;  */

undefined8 FUN_1080c577c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001080c57b0(&uStack_28);
  return param_1;
}



/* Entry: 1080c57ec; end: 1080c57f3;  */

void FUN_1080c57ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    (*(code *)**(undefined8 **)(lVar2 + -0x28))((undefined8 *)(lVar2 + -0x28));
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1080c57f4; end: 1080c583b;  */

void FUN_1080c57f4(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x30) {
    (*(code *)**(undefined8 **)(lVar1 + -0x28))((undefined8 *)(lVar1 + -0x28));
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1080c583c; end: 1080c589f;  */

undefined8 * FUN_1080c583c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000100556b24(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1080c58a0; end: 1080c595b;  */

long FUN_1080c58a0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_1080c595c(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_1080c5a3c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  *puStack_48 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puStack_48 + 1,param_2 + 1);
  puStack_48 = puStack_48 + 6;
  FUN_1080c59ac(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001080c5b8c(auStack_58);
  return lVar2;
}



/* Entry: 1080c595c; end: 1080c59ab;  */

long * FUN_1080c595c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x555555555555555;
    }
    return plVar2;
  }
  FUN_1080c5a30();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_1080c5ad8(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 1080c59ac; end: 1080c5a2f;  */

void FUN_1080c59ac(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_1080c5ad8(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1080c5a30; end: 1080c5a3b;  */

long * FUN_1080c5a30(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080c5a88();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 1080c5a3c; end: 1080c5aab;  */

long * FUN_1080c5a3c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001080c5a88();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 1080c5aac; end: 1080c5ad7;  */

void FUN_1080c5aac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
      *param_4 = *puVar1;
      (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
      param_4 = param_4 + 6;
    }
    for (; param_2 != param_3; param_2 = param_2 + 6) {
      (**(code **)param_2[1])(param_2 + 1);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
  return;
}



/* Entry: 1080c5ad8; end: 1080c5b4f;  */

void FUN_1080c5ad8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
    *param_4 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
    param_4 = param_4 + 6;
  }
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    (**(code **)param_2[1])(param_2 + 1);
  }
  return;
}



/* Entry: 1080c5b50; end: 1080c5bb7;  */

void FUN_1080c5b50(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
  }
  return;
}



/* Entry: 1080c5bb8; end: 1080c5bbf;  */

void FUN_1080c5bb8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar1 = *(long *)(param_1 + 0x10), lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(param_1 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar3)();
  }
  return;
}



/* Entry: 1080c5bc0; end: 1080c5bff;  */

void FUN_1080c5bc0(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x28);
    *(long *)(param_1 + 0x10) = lVar1 + -0x30;
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 1080c5c00; end: 1080c5c03;  */

void FUN_1080c5c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1df40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080c5c04; end: 1080c5c17;  */

void FUN_1080c5c04(void)

{
  func_0x0001080c5c24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c5c18; end: 1080c5c33;  */

long FUN_1080c5c18(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  func_0x0001080c57b0(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 1080c5c34; end: 1080c5c7f;  */

long FUN_1080c5c34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return param_1;
}



/* Entry: 1080c5c80; end: 1080c5da3;  */

void FUN_1080c5c80(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080c5da4; end: 1080c5e3f;  */

undefined8 * FUN_1080c5da4(undefined8 *param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d78e70;
  *(undefined1 *)(param_1 + 3) = 1;
  func_0x00010b9803f0(param_1 + 4,param_2);
  *param_1 = &PTR_FUN_110a1df90;
  param_1[4] = &PTR_DAT_110a1dff0;
  param_1[6] = &PTR_DAT_110a1e028;
  func_0x0001080c6a14();
  return param_1;
}



/* Entry: 1080c5e40; end: 1080c5e53;  */

long FUN_1080c5e40(long param_1)

{
  func_0x00010b980378(param_1 + 0x20);
  func_0x0001003a81d8(param_1 + 8);
  return param_1;
}



/* Entry: 1080c5e54; end: 1080c5e67;  */

void FUN_1080c5e54(void)

{
  func_0x0001080c5e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c5e68; end: 1080c5e77;  */

void FUN_1080c5e68(long param_1)

{
  func_0x0001080c5e14(param_1 + -0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c5e78; end: 1080c5ed7;  */

undefined8 FUN_1080c5e78(void)

{
  int iVar1;
  
  if ((bRam0000000113729308 & 1) == 0) {
    iVar1 = 0x13729308;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113729300,&UNK_10f479e90);
      ___cxa_guard_release(0x113729308);
    }
  }
  return 0x113729300;
}



/* Entry: 1080c5ed8; end: 1080c5edf;  */

undefined8 FUN_1080c5ed8(void)

{
  return 0;
}



/* Entry: 1080c5ee0; end: 1080c5f2f;  */

void FUN_1080c5ee0(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x00010b9803d0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c6a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080c5f30; end: 1080c5ffb;  */

void FUN_1080c5f30(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  code **ppcVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a1;
  code **ppcStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  uStack_7c = param_2;
  func_0x0001080c6a38();
  *param_1 = 1;
  pcStack_78 = FUN_1080c624c;
  ppuStack_70 = &PTR_FUN_110a1e078;
  puVar1 = (undefined8 *)0x38;
  uStack_80 = param_3;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar1 = param_4;
  puVar1[1] = param_1;
  puVar1[2] = param_6;
  puVar1[3] = &uStack_7c;
  puVar1[4] = &uStack_80;
  puVar1[5] = param_5;
  puVar1[6] = param_7;
  ppcVar2 = &pcStack_78;
  puStack_68 = puVar1;
  FUN_1080c5ffc();
  func_0x0001080c6a50();
  func_0x0001080c6a00(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c6a50();
  puVar1 = param_1;
  func_0x0001080c6234();
  func_0x0001080c6a60();
  pcStack_88 = FUN_1080c5ffc;
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  ppcStack_a0 = ppcVar2;
  puStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010c077480();
  if ((int)puVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080c6034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(puVar1);
    return;
  }
  func_0x00010b9a8ad8(&uStack_a1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc0000000;
  uStack_c0 = 0x1080c6228;
  puStack_b8 = &UNK_110848088;
  puStack_b0 = puVar1;
  func_0x000107c27da4(PTR___dispatch_main_q_11034be20,&puStack_d0);
  func_0x00010b9a8b40(&uStack_a1);
  return;
}



/* Entry: 1080c5ffc; end: 1080c6097;  */

void FUN_1080c5ffc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 *puStack_30;
  undefined1 uStack_21;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080c6034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1);
    return;
  }
  func_0x00010b9a8ad8(&uStack_21);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc0000000;
  pcStack_40 = FUN_1080c6228;
  puStack_38 = &UNK_110848088;
  puStack_30 = param_1;
  func_0x000107c27da4(PTR___dispatch_main_q_11034be20,&puStack_50);
  func_0x00010b9a8b40(&uStack_21);
  return;
}



/* Entry: 1080c6098; end: 1080c617b;  */

void FUN_1080c6098(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x0001080c6a38();
  uStack_38 = extraout_x8;
  _objc_retain();
  puVar2 = PTR_PTR_1126caff0;
  _objc_alloc(PTR_PTR_1126caff0);
  func_0x00010c01e460();
  FUN_1080c68b8(auStack_50,1);
  puStack_40[2] = 0;
  *puStack_40 = &PTR_FUN_110a1e0a8;
  puStack_40[1] = 0;
  FUN_1080c5da4(puStack_40 + 3,puVar2);
  puVar1 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  FUN_1080c689c(auStack_60,puVar1 + 3);
  puVar3 = auStack_50;
  FUN_1080c69b4();
  *param_1 = auStack_60[0];
  func_0x0001080c6a48();
  func_0x0001080c6a14();
  func_0x0001080c6a00(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c6a48();
  func_0x0001080c6a14();
  func_0x0001080c6a60();
  pcStack_68 = FUN_1080c617c;
  puStack_80 = puVar3;
  uStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_1080c61e4(&lStack_88);
  if (lStack_88 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lStack_88;
    FUN_1080c5ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080c69c4(lStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1080c617c; end: 1080c61e3;  */

void FUN_1080c617c(void)

{
  long lVar1;
  long lStack_28;
  
  FUN_1080c61e4(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    FUN_1080c5ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080c69c4(lStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080c61e4; end: 1080c6227;  */

void FUN_1080c61e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    ___dynamic_cast(lVar1,&PTR_DAT_110d78ec0,&PTR_DAT_110a1e040,0);
  }
  FUN_1080c69d0();
  *param_1 = lVar1;
  return;
}



/* Entry: 1080c6228; end: 1080c624b;  */

void FUN_1080c6228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080c6230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 1080c624c; end: 1080c6693;  */

undefined8 * FUN_1080c624c(double param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double dVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  ppuVar7 = &puStack_160;
  func_0x0001080c6a38();
  puVar10 = *(undefined8 **)(param_2 + 0x10);
  puVar1 = (undefined8 *)*puVar10;
  uStack_78 = extraout_x8;
  FUN_1080c5ee0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)&UNK_10f479e9d;
    func_0x0001080c6a94();
  }
  else {
    puVar2 = puVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined8 *)0x0) {
      puVar8 = (uint *)puVar10[2];
      _objc_retain(puVar1);
      dVar11 = (double)(ulong)*puVar8;
      uVar12 = (ulong)puVar8[1];
      dVar14 = (double)(ulong)puVar8[2];
      dVar16 = (double)(ulong)puVar8[3];
      func_0x00010b968614(dVar11,uVar12);
      param_1 = dVar11;
      uVar13 = uVar12;
      dVar15 = dVar14;
      dVar17 = dVar16;
      func_0x00010bf20c00(puVar1);
      func_0x00010c17a6a0(dVar11,uVar12,puVar1);
      func_0x00010c1739e0(param_1,uVar13,dVar14,dVar16,puVar1);
      if (dVar17 != dVar16 || dVar15 != dVar14) {
        func_0x00010c2954e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf72540();
        func_0x0001080c6a48();
      }
      func_0x0001080c6a14();
    }
    fVar18 = *(float *)puVar10[3];
    fVar19 = *(float *)puVar10[4];
    _objc_retain(puVar1);
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    if ((double)fVar19 <= param_1) {
      param_1 = (double)fVar19;
    }
    func_0x0001080c6a48();
    in_ZR = param_1 == 0.0;
    if (0.0 < param_1) {
      func_0x00010c08c0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      FUN_1080c66d8(param_1);
      func_0x0001080c6a48();
    }
    func_0x0001080c6a14();
    puVar3 = puVar1;
    func_0x00010c08cdc0();
    func_0x0001080c6a84();
    (**(code **)(extraout_x8_00 + 0x38))(&iStack_c8);
    func_0x0001080c6a84();
    (**(code **)(extraout_x8_01 + 0x40))();
    if (puVar3 != (undefined8 *)0x0) {
      puVar6 = puVar3;
      _CGColorSpaceCreateDeviceRGB();
      piVar4 = &iStack_c8;
      func_0x00010b971ffc(piVar4);
      puVar2 = (undefined8 *)(long)iStack_c8;
      _CGBitmapContextCreate(puVar3,puVar2,(long)iStack_c4,8,uStack_b8,puVar6,piVar4);
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f479ec6;
        func_0x0001080c6a94();
        func_0x0001080c6a1c();
        func_0x0001080c6234(&puStack_b0);
        func_0x000104bda960(puStack_100);
      }
      else {
        _UIGraphicsPushContext(puVar3);
        _CGContextClearRect(0,0,(double)iStack_c8,(double)iStack_c4,puVar3);
        uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        puStack_100 = *(undefined8 **)PTR__CGAffineTransformIdentity_110347008;
        uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        uStack_f0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        uStack_e0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        puStack_b0 = puStack_100;
        uStack_a8 = uStack_f8;
        uStack_a0 = uStack_f0;
        uStack_98 = uStack_e8;
        uStack_90 = uStack_e0;
        uStack_88 = uStack_d8;
        _CGAffineTransformTranslate(&puStack_b0,0,(double)iStack_c4,&puStack_100);
        dStack_128 = (double)uStack_a8;
        puStack_130 = puStack_b0;
        dStack_118 = (double)uStack_98;
        dStack_120 = (double)uStack_a0;
        dStack_108 = (double)uStack_88;
        dStack_110 = (double)uStack_90;
        _CGAffineTransformScale(&puStack_100,0x3ff0000000000000,0xbff0000000000000,&puStack_130);
        func_0x0001080c6a68();
        func_0x0001080c6a9c();
        _CGAffineTransformMakeScale
                  (&puStack_100,(double)*(float *)puVar10[3],(double)*(float *)puVar10[4]);
        func_0x0001080c6aa8();
        puVar9 = (undefined8 *)puVar10[6];
        puVar5 = puVar9;
        func_0x00010b9ada08();
        if (((ulong)puVar5 & 1) == 0) {
          puStack_130 = (undefined8 *)(double)(float)*puVar9;
          dStack_128 = (double)(float)((ulong)*puVar9 >> 0x20);
          dStack_120 = (double)(float)puVar9[1];
          dStack_118 = (double)(float)((ulong)puVar9[1] >> 0x20);
          dStack_110 = (double)(float)puVar9[2];
          dStack_108 = (double)(float)((ulong)puVar9[2] >> 0x20);
          uStack_158 = uStack_a8;
          puStack_160 = puStack_b0;
          uStack_148 = uStack_98;
          uStack_150 = uStack_a0;
          uStack_138 = uStack_88;
          uStack_140 = uStack_90;
          _CGAffineTransformConcat(&puStack_100,&puStack_130);
          func_0x0001080c6aa8();
          puVar2 = ppuVar7;
        }
        dStack_118 = (double)uStack_98;
        dStack_120 = (double)uStack_a0;
        dStack_108 = (double)uStack_88;
        dStack_110 = (double)uStack_90;
        dStack_128 = (double)uStack_a8;
        puStack_130 = puStack_b0;
        _CGAffineTransformTranslate
                  (&puStack_100,(double)*(float *)puVar10[2],(double)((float *)puVar10[2])[1],
                   &puStack_130);
        func_0x0001080c6a68();
        func_0x0001080c6a9c();
        func_0x00010c08c0e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12fc60();
        _objc_release(puVar1);
        _UIGraphicsPopContext();
        _CGContextRelease(puVar3);
      }
      _CGColorSpaceRelease();
      func_0x0001080c6a84();
      (**(code **)(extraout_x8_02 + 0x48))();
      goto LAB_1080c65ec;
    }
    puVar2 = (undefined8 *)&UNK_10f479eaa;
    func_0x0001080c6a94();
  }
  func_0x0001080c6a1c();
  func_0x0001080c6234(&puStack_b0);
  puVar6 = puStack_100;
  func_0x000104bda960();
LAB_1080c65ec:
  func_0x0001080c6a14();
  func_0x0001080c6a00(uStack_78);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001080c6a48();
  func_0x0001080c6a14();
  func_0x0001080c6a14();
  func_0x0001080c6a60();
  if (puVar6 != puVar2) {
    func_0x0001080c6234(puVar6);
    *puVar6 = *puVar2;
    puVar6[1] = puVar2[1];
    *puVar2 = 0;
  }
  return puVar6;
}



/* Entry: 1080c6694; end: 1080c66d7;  */

undefined8 * FUN_1080c6694(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    func_0x0001080c6234(param_1);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 1080c66d8; end: 1080c6823;  */

void FUN_1080c66d8(double param_1,ulong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  dVar5 = param_1;
  func_0x0001080c6a38();
  uStack_58 = extraout_x8;
  _objc_retain();
  func_0x00010bf4e040(param_2);
  uVar1 = dVar5 == param_1;
  if (!(bool)uVar1) {
    func_0x00010c182d20(param_1,param_2);
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar3 = *plStack_110;
    do {
      uVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        FUN_1080c66d8(param_1,*(undefined8 *)(lStack_118 + uVar4 * 8));
        uVar4 = uVar4 + 1;
        uVar1 = uVar4 == uVar2;
      } while (uVar4 < uVar2);
      uVar2 = param_2;
      func_0x00010bf52a60(param_2,param_3,&uStack_120,auStack_d8,0x10);
    } while (uVar2 != 0);
  }
  uVar2 = param_2;
  _objc_release();
  func_0x0001080c6a14();
  func_0x0001080c6a00(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  func_0x0001080c6a14();
  __Unwind_Resume();
  if (*(long *)(uVar2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080c6824; end: 1080c684b;  */

void FUN_1080c6824(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080c684c; end: 1080c689b;  */

void FUN_1080c684c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a1e078;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  uVar4 = puVar2[5];
  uVar3 = puVar2[4];
  uVar8 = puVar2[1];
  uVar7 = *puVar2;
  puVar1[6] = puVar2[6];
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1080c689c; end: 1080c68b7;  */

void FUN_1080c689c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1080c68b8; end: 1080c68df;  */

long FUN_1080c68b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080c68e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080c68e0; end: 1080c690b;  */

void FUN_1080c68e0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_FUN_110a1e0a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080c690c; end: 1080c690f;  */

void FUN_1080c690c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1e0a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080c6910; end: 1080c6923;  */

void FUN_1080c6910(void)

{
  func_0x0001080c6934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080c6924; end: 1080c6947;  */

void FUN_1080c6924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080c692c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080c6948; end: 1080c69b3;  */

void FUN_1080c6948(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080c69b4; end: 1080c69cf;  */

void FUN_1080c69b4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080c69d0; end: 1080c69ff;  */

ulong FUN_1080c69d0(ulong param_1)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010b9a5818(), (uVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    return uVar1;
  }
  return param_1;
}



/* Entry: 1080c6a00; end: 1080c6af7;  */

void FUN_1080c6a00(void)

{
  return;
}



/* Entry: 1080c6af8; end: 1080c6b6f;  */

void FUN_1080c6af8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_opt_new(PTR_PTR_1126d91f0);
  func_0x0001080c9474();
  func_0x00010bef9040();
  func_0x0001080c9474();
  func_0x00010c12c9c0();
  func_0x0001080c933c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080c6b70; end: 1080c6baf; -[SCValdiTapGestureRecognizer init] */

long FUN_1080c6b70(long param_1)

{
  func_0x0001080c9394();
  func_0x0001080c9518();
  func_0x0001080c9384();
  func_0x0001080c93d4();
  if (param_1 != 0) {
    func_0x0001080c927c();
  }
  return param_1;
}



/* Entry: 1080c6bb0; end: 1080c6bdb; -[SCValdiTapGestureRecognizer reset] */

void FUN_1080c6bb0(void)

{
  func_0x0001080c95c8();
  func_0x0001080c9308();
  func_0x0001080c9518();
  func_0x0001080c920c();
  return;
}



/* Entry: 1080c6bdc; end: 1080c6c2b; -[SCValdiTapGestureRecognizer touchesBegan:withEvent:] */

void FUN_1080c6bdc(void)

{
  FUN_1080c91b8();
  func_0x0001080c95c8();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9518();
  func_0x0001080c9364();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c6c2c; end: 1080c6c7b; -[SCValdiTapGestureRecognizer touchesMoved:withEvent:] */

void FUN_1080c6c2c(void)

{
  FUN_1080c91b8();
  func_0x0001080c95c8();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9518();
  func_0x0001080c9354();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c6c7c; end: 1080c6ccb; -[SCValdiTapGestureRecognizer touchesEnded:withEvent:] */

void FUN_1080c6c7c(void)

{
  FUN_1080c91b8();
  func_0x0001080c95c8();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9518();
  func_0x0001080c9344();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c6ccc; end: 1080c6d1b; -[SCValdiTapGestureRecognizer touchesCancelled:withEvent:] */

void FUN_1080c6ccc(void)

{
  FUN_1080c91b8();
  func_0x0001080c95c8();
  func_0x0001080c91ec();
  func_0x0001080c93f0();
  func_0x0001080c93e0();
  func_0x0001080c9518();
  func_0x0001080c9374();
  func_0x0001080c91cc();
  func_0x0001080c933c();
  func_0x0001080c9334();
  return;
}



/* Entry: 1080c6d1c; end: 1080c6d3f; -[SCValdiTapGestureRecognizer setFunction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c6d1c(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_112774708);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c6d40; end: 1080c6d63; -[SCValdiTapGestureRecognizer setPredicate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080c6d40(void)

{
  func_0x0001080c91fc();
  func_0x0001080c944c((long)_DAT_11277470c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080c6d64; end: 1080c6d6f; -[SCValdiTapGestureRecognizer gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080c6d64(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  
  func_0x0001080c95f8(param_1,*(undefined8 *)(param_1 + _DAT_11277470c));
  uStack_58 = extraout_x8;
  _objc_retain();
  func_0x0001080c93c4();
  if (unaff_x20 == 0) {
    unaff_x20 = 1;
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00();
    func_0x0001080c94ec();
    func_0x0001080c946c();
    func_0x00010b988770(auStack_a0);
    func_0x0001080c9458(auStack_b0,unaff_x19);
    func_0x00010b9884d4();
    func_0x0001080c9558();
    func_0x0001080c9424();
    func_0x0001080c942c();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b988854();
    param_1 = unaff_x20;
    func_0x0001080c9424();
    func_0x0001080c9414();
  }
  func_0x0001080c933c();
  func_0x0001080c9334();
  func_0x0001080c9314(uStack_58);
  if ((bool)in_ZR) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  func_0x0001080c9424();
  func_0x0001080c9414();
  func_0x0001080c933c();
  func_0x0001080c9334();
  __Unwind_Resume(param_1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c9328();
  func_0x0001080c94ec();
  func_0x0001080c933c();
  func_0x0001080c946c();
  func_0x0001080c9458(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c27bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}


