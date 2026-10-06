/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10810522c; end: 10810523f;  */

void FUN_10810522c(void)

{
  FUN_1081052c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108105240; end: 1081052bf;  */

void FUN_108105240(long param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  int extraout_w11;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001081065c8();
  func_0x00010b950b58(&uStack_38,*(undefined8 *)(param_1 + 0xb8));
  if (unaff_x21 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(long *)(unaff_x21 + 0xd0) != 0) {
      do {
        func_0x0001081063c0();
        uVar1 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
  }
  FUN_108104cd8(extraout_x8,unaff_x20 + 0xb0,&uStack_38);
  func_0x000104bd5718(uVar1);
  FUN_1080c5c80(uStack_38);
  return;
}



/* Entry: 1081052c0; end: 1081052ff;  */

undefined8 * FUN_1081052c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23b20;
  FUN_108105060(param_1 + 0x17);
  func_0x000107475310(param_1 + 0x16);
  *param_1 = &PTR_DAT_110d78f40;
  func_0x00010b9a1f08(param_1 + 0xc);
  func_0x00010b950e20(param_1 + 6);
  func_0x00010b8a83c8(param_1 + 5);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 108105300; end: 10810531b;  */

void FUN_108105300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23ad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10810531c; end: 10810532f;  */

void FUN_10810531c(void)

{
  FUN_1081053c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108105330; end: 10810533b;  */

void FUN_108105330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081064cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10810533c; end: 10810534f;  */

void FUN_10810533c(void)

{
  func_0x000108105390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108105350; end: 1081053bf;  */

void FUN_108105350(long param_1)

{
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x40))(&uStack_28);
  func_0x0001081066e4(&uStack_28);
  func_0x0001078bee50(uStack_28);
  return;
}



/* Entry: 1081053c0; end: 1081053cb;  */

void FUN_1081053c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a23b80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1081053cc; end: 1081053f7;  */

undefined1  [16] FUN_1081053cc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_1081053f8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1081053f8; end: 10810547f;  */

void FUN_1081053f8(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0xa0;
  }
  return;
}



/* Entry: 108105480; end: 10810553b;  */

void FUN_108105480(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  
  plVar2 = param_2;
  FUN_10810553c();
  plVar3 = param_2;
  puVar5 = param_3;
  func_0x000108105560(param_2,param_3,plVar2);
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = (undefined8 *)(param_2[1] + (long)plVar3 * 0xa0);
    *puVar5 = *param_3;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = puVar5 + 7;
    puVar5[6] = 1;
    puVar5[5] = 0;
    puVar5[0xe] = 0;
    puVar5[0xd] = 0;
    puVar5[0x10] = 0;
    puVar5[0xf] = 0;
    puVar5[0x12] = 0;
    puVar5[0x11] = 0;
    *(undefined4 *)(puVar5 + 0x13) = 0;
    *(undefined1 *)((long)puVar5 + 0x9c) = 1;
    *(byte *)(*param_2 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x000108106440();
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 0xa0;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 10810553c; end: 10810563b;  */

void FUN_10810553c(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x000108105620(&lStack_18);
  return;
}



/* Entry: 10810563c; end: 1081056af;  */

void FUN_10810563c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x000108106644();
  FUN_1081056b0();
  lVar2 = unaff_x19[5];
  lVar1 = *unaff_x19;
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + (long)param_1) == -2) {
      lVar2 = 0;
    }
    else {
      param_1 = unaff_x19;
      func_0x0001081056fc();
      func_0x000108106650();
      FUN_1081056b0();
      lVar1 = *unaff_x19;
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  return;
}



/* Entry: 1081056b0; end: 10810572b;  */

ulong FUN_1081056b0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 10810572c; end: 108105977;  */

void FUN_10810572c(void)

{
  long **pplVar1;
  long *plVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long lVar3;
  long *plStack_58;
  
  func_0x000108106714();
  FUN_108105978();
  unaff_x20[3] = unaff_x22;
  for (lVar3 = 0; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      pplVar1 = &plStack_58;
      plStack_58 = unaff_x20 + 5;
      FUN_108105a28(pplVar1,unaff_x21);
      plVar2 = unaff_x20;
      FUN_1081056b0();
      *(byte *)(*unaff_x20 + (long)plVar2) = (byte)pplVar1 & 0x7f;
      func_0x000108106440();
      FUN_108105a4c(unaff_x20 + 5,unaff_x20[1] + (long)plVar2 * 0xa0,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0xa0;
  }
  if (unaff_x24 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108105978; end: 1081059e7;  */

void FUN_108105978(long param_1,ulong param_2)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x00010810665c();
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 0x28;
  FUN_1081059e8(param_1,lVar1 + param_2 * 0xa0);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + lVar1;
  _memset();
  *(undefined1 *)(*unaff_x20 + unaff_x19) = 0xff;
  lVar1 = 6;
  if (unaff_x19 != 7) {
    lVar1 = unaff_x19 - (unaff_x19 >> 3);
  }
  unaff_x20[5] = lVar1 - unaff_x20[2];
  return;
}



/* Entry: 1081059e8; end: 108105a27;  */

void FUN_1081059e8(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x000108105a0c(&uStack_11,param_2 + 7U >> 3);
  return;
}



/* Entry: 108105a28; end: 108105a2f;  */

void FUN_108105a28(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010810661c(param_1,*param_2,param_2 + 1);
  return;
}



/* Entry: 108105a30; end: 108105a4b;  */

void FUN_108105a30(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010810661c(param_1,*param_2);
  return;
}



/* Entry: 108105a4c; end: 108105bab;  */

long FUN_108105a4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000108105a78(param_2,param_3);
  FUN_108104504(param_3 + 0x88);
  func_0x00010b8a3254(param_3 + 0x80);
  func_0x00010b8a2e48(param_3 + 0x68);
  func_0x00010b8a2eb0(param_3 + 0x20);
  func_0x000108104e70(param_3 + 0x18);
  func_0x000107c278f4(param_3 + 0x10);
  return param_3 + 8;
}



/* Entry: 108105bac; end: 108105c67;  */

void FUN_108105bac(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *param_2;
  uVar1 = (*param_3 - lStack_48) / 0x30;
  if ((ulong)param_1[2] < uVar1) {
    plVar2 = param_1;
    func_0x000108106650();
    FUN_108103f10();
    plVar3 = (long *)*param_1;
    if ((plVar3 != (long *)0x0) && (FUN_108103eb0(param_1), param_1 + 3 != plVar3)) {
      __ZdlPv(plVar3);
    }
    param_1[1] = 0;
    param_1[2] = uVar1;
    *param_1 = (long)plVar2;
    lStack_48 = *param_2;
    lStack_50 = *param_3;
    FUN_108105c68(param_1,&lStack_48,&lStack_50);
  }
  else {
    func_0x000108106504();
    FUN_108105cb8();
    param_1[1] = uVar1;
  }
  return;
}



/* Entry: 108105c68; end: 108105cb7;  */

void FUN_108105c68(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108106774();
  FUN_108105d64();
  lVar1 = 0;
  if (unaff_x21 != 0) {
    lVar1 = (param_1 - unaff_x20) / unaff_x21;
  }
  *(long *)(unaff_x19 + 8) = *(long *)(unaff_x19 + 8) + lVar1;
  return;
}



/* Entry: 108105cb8; end: 108105d63;  */

void FUN_108105cb8(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_4;
  if (param_5 < param_3) {
    uStack_58 = *param_2;
    func_0x000108105da8(&uStack_50,&uStack_58,param_5,&uStack_48);
    *param_2 = uStack_50;
    func_0x000108105e08(param_1,&uStack_50,param_3 - param_5,uStack_48);
  }
  else {
    uStack_50 = *param_2;
    puVar1 = &uStack_50;
    func_0x000108105e48(puVar1,param_3,param_4);
    func_0x000108103ed4(param_1,puVar1,param_5 - param_3);
  }
  return;
}



/* Entry: 108105d64; end: 108105e93;  */

void FUN_108105d64(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x0001081064f4();
  lVar1 = *param_2;
  while (lVar1 != *unaff_x19) {
    func_0x000108106528();
    lVar1 = *unaff_x20 + 0x30;
    *unaff_x20 = lVar1;
  }
  return;
}



/* Entry: 108105e94; end: 108105eeb;  */

void FUN_108105e94(void)

{
  func_0x0001081064d8();
  return;
}



/* Entry: 108105eec; end: 108105f3b;  */

void FUN_108105eec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x0001081042bc(param_1,param_4);
    lVar1 = param_1 + 0x10;
    func_0x000108104354(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
    return;
  }
  return;
}



/* Entry: 108105f3c; end: 108105f3f;  */

void FUN_108105f3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a23c30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108105f40; end: 108105f53;  */

void FUN_108105f40(void)

{
  func_0x000108105f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108105f54; end: 108105f67;  */

void FUN_108105f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081064cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108105f68; end: 108105f8f;  */

long FUN_108105f68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a81fc();
  }
  return param_1;
}



/* Entry: 108105f90; end: 108105fab;  */

void FUN_108105f90(undefined8 param_1)

{
  func_0x00010810661c(param_1,param_1);
  return;
}



/* Entry: 108105fac; end: 10810606f;  */

void FUN_108105fac(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  
  func_0x000108106644();
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_108106070(lVar3,uVar4);
  lVar2 = unaff_x19[5];
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + lVar1) == -2) {
      lVar2 = 0;
    }
    else {
      if ((uVar4 == 0) || (uVar4 - (uVar4 >> 3) >> 1 < (ulong)unaff_x19[2])) {
        FUN_1081060b0();
      }
      else {
        func_0x0001081061cc();
      }
      lVar3 = *unaff_x19;
      lVar1 = lVar3;
      FUN_108106070(lVar3,unaff_x19[3]);
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 108106070; end: 1081060af;  */

ulong FUN_108106070(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 1081060b0; end: 10810632f;  */

void FUN_1081060b0(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar4;
  long unaff_x24;
  long lVar5;
  
  func_0x000108106714();
  lVar5 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar2 = lVar5 + param_2 * 0x10;
  __Znwm();
  *unaff_x20 = lVar2;
  unaff_x20[1] = lVar2 + lVar5;
  _memset();
  lVar5 = 0;
  *(undefined1 *)(lVar2 + unaff_x22) = 0xff;
  lVar2 = 6;
  if (unaff_x22 != 7) {
    lVar2 = unaff_x22 - (unaff_x22 >> 3);
  }
  unaff_x20[5] = lVar2 - unaff_x20[2];
  unaff_x20[3] = unaff_x22;
  for (; unaff_x24 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar5)) {
      lVar2 = unaff_x21;
      FUN_108106330();
      lVar4 = *unaff_x20;
      lVar3 = lVar4;
      FUN_108106070(lVar4,unaff_x20[3],lVar2);
      bVar1 = (byte)lVar2 & 0x7f;
      *(byte *)(lVar4 + lVar3) = bVar1;
      *(byte *)(*unaff_x20 + (unaff_x20[3] & 7U) + (unaff_x20[3] & lVar3 - 8U) + 1) = bVar1;
      FUN_10810634c(unaff_x20[1] + lVar3 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108106330; end: 10810634b;  */

void FUN_108106330(undefined8 *param_1)

{
  func_0x00010810661c(param_1,*param_1);
  return;
}



/* Entry: 10810634c; end: 108106487;  */

undefined8 FUN_10810634c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001080fd160(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 108106488; end: 10810649f;  */

void FUN_108106488(void)

{
  FUN_10810503c();
  return;
}



/* Entry: 1081064a0; end: 10810679f;  */

void FUN_1081064a0(void)

{
  return;
}



/* Entry: 1081067a0; end: 10810751f;  */

undefined8 * FUN_1081067a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a23c90;
  FUN_1080c577c(param_1 + 2);
  return param_1;
}



/* Entry: 108107520; end: 1081078f7;  */

long * FUN_108107520(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  uint *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  long lStack_3a0;
  long *plStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  long lStack_378;
  undefined8 uStack_370;
  undefined5 uStack_368;
  undefined3 uStack_363;
  undefined1 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [704];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_3;
  uVar8 = param_3;
  FUN_1080cf62c(&plStack_398);
  if (plStack_398 == (long *)0x0) {
    func_0x0001003a8364();
    func_0x00010b9a9894(&lStack_378,param_3);
    plVar7 = &lStack_378;
    func_0x0001005d466c();
    plStack_390 = plVar7;
    uStack_388 = uVar8;
    func_0x0001003a91d4(&UNK_10f47b55f);
    func_0x0001003a9204(&puStack_348);
    func_0x0001003ac750(&lStack_3a0,uVar4,&puStack_348);
    plVar7 = &lStack_3a0;
    func_0x00010b99f560(&plStack_390);
    *param_1 = 2;
    param_1[1] = plStack_390;
    plStack_390 = (long *)0x0;
    func_0x000104bda960(0);
    func_0x0001003a8cb8(lStack_3a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_348);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_378);
  }
  else {
    puStack_348 = auStack_330;
    uStack_338 = 4;
    uStack_340 = 0;
    plVar10 = (long *)plStack_398[4];
    plVar7 = plVar10;
    func_0x0001078d30ec(&puStack_348);
    for (plVar13 = (long *)0x0; plVar13 != plVar10; plVar13 = (long *)((long)plVar13 + 1)) {
      ppuVar5 = &puStack_348;
      func_0x0001078d37fc();
      lVar11 = plStack_398[3] + (long)plVar13 * 0xf8;
      plVar7 = (long *)(lVar11 + 8);
      func_0x0001003b1eb0();
      if (*(char *)(lVar11 + 0x10) == '\x01') {
        func_0x0001080dcf80();
        FUN_10812c760(&lStack_378,0x3ff0000000000000,param_2);
        lVar9 = lStack_378;
        if (lStack_378 == 1) {
          plVar7 = &uStack_370;
          func_0x0001078d4460(ppuVar5 + 1);
        }
        else {
          *param_1 = 2;
          param_1[1] = CONCAT35(uStack_370._5_3_,(undefined5)uStack_370);
          uStack_370._0_5_ = 0;
          uStack_370._5_3_ = 0;
        }
        func_0x000107807ab8(&lStack_378);
        if (lVar9 != 1) goto LAB_108107820;
      }
      if (*(char *)(lVar11 + 0x28) == '\x01') {
        puVar6 = (uint *)(lVar11 + 0x20);
        func_0x0001080dd010();
        uVar1 = *puVar6;
        if ((*(byte *)((long)ppuVar5 + 0x14) & 1) == 0) {
          *(undefined1 *)((long)ppuVar5 + 0x14) = 1;
        }
        *(uint *)(ppuVar5 + 2) = uVar1 >> 8 | uVar1 << 0x18;
      }
      lVar9 = *(long *)(lVar11 + 0x30);
      if (lVar9 != 0) {
        if (*(char *)(lVar9 + 0x18) == '\x01') {
          puVar6 = (uint *)(lVar9 + 0x10);
          func_0x0001080dd074();
          uVar1 = *puVar6;
          if ((*(byte *)((long)ppuVar5 + 0x1c) & 1) == 0) {
            *(undefined1 *)((long)ppuVar5 + 0x1c) = 1;
          }
          *(uint *)(ppuVar5 + 3) = uVar1 >> 8 | uVar1 << 0x18;
          lVar9 = *(long *)(lVar11 + 0x30);
        }
        puVar14 = *(undefined1 **)(lVar9 + 0x20);
        ppuVar5[5] = *(undefined1 **)(lVar9 + 0x28);
        ppuVar5[4] = puVar14;
        if (((ulong)ppuVar5[6] & 1) == 0) {
          *(undefined1 *)(ppuVar5 + 6) = 1;
        }
        func_0x00010813f2bc(&lStack_378,(float)*(double *)(*(long *)(lVar11 + 0x30) + 0x30),
                            *(int *)(*(long *)(lVar11 + 0x30) + 0x38) == 3);
        lVar9 = lStack_378;
        if (*(char *)((long)ppuVar5 + 0x4c) == '\x01') {
          *(ulong *)((long)ppuVar5 + 0x3c) = CONCAT35(uStack_370._5_3_,(undefined5)uStack_370);
          *(long *)((long)ppuVar5 + 0x34) = lVar9;
          *(ulong *)((long)ppuVar5 + 0x41) = CONCAT53(uStack_368,uStack_370._5_3_);
        }
        else {
          *(ulong *)((long)ppuVar5 + 0x3c) = CONCAT35(uStack_370._5_3_,(undefined5)uStack_370);
          *(long *)((long)ppuVar5 + 0x34) = lVar9;
          *(ulong *)((long)ppuVar5 + 0x44) = CONCAT35(uStack_363,uStack_368);
          *(undefined1 *)((long)ppuVar5 + 0x4c) = 1;
        }
      }
      if (*(long *)(lVar11 + 0x38) != 0) {
        func_0x0001080f2ba4(&lStack_378);
        plVar7 = (long *)0x40;
        __Znwm();
        plVar12 = plVar7 + 1;
        *plVar12 = 1;
        *plVar7 = (long)&PTR_FUN_110a23dc8;
        plVar7[2] = lStack_378;
        (**(code **)(CONCAT35(uStack_370._5_3_,(undefined5)uStack_370) + 0x10))
                  (plVar7 + 3,&uStack_370);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_390 = plVar7;
        func_0x0001078d44b8(ppuVar5 + 0x15,&plStack_390);
        func_0x0001078d3de8(plStack_390);
        do {
          lVar9 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        (**(code **)CONCAT35(uStack_370._5_3_,(undefined5)uStack_370))(&uStack_370);
      }
      FUN_1081078f8(ppuVar5 + 0x14,lVar11 + 0xa8);
      plVar7 = (long *)(lVar11 + 0xb0);
      FUN_108107944(ppuVar5 + 0xb);
      uVar1 = *(int *)(lVar11 + 0x18) - 1;
      bVar3 = uVar1 < 5;
      if (!bVar3) {
        uVar1 = 0;
      }
      *(uint *)(ppuVar5 + 10) = uVar1;
      *(bool *)((long)ppuVar5 + 0x54) = bVar3;
    }
    func_0x0001078d3100(&lStack_378,&puStack_348);
    *param_1 = 1;
    param_1[1] = lStack_378;
    lStack_378 = 0;
    func_0x0001078ce4b4(0);
LAB_108107820:
    func_0x0001078d3e7c(&puStack_348);
  }
  FUN_1080cf6b0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (plStack_398 != plVar7) {
      lVar11 = *plStack_398;
      lVar9 = *plVar7;
      if (lVar9 != 0) {
        plVar7 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *plStack_398 = lVar9;
      func_0x0001078d39e8(lVar11);
    }
    return plStack_398;
  }
  return plStack_398;
}



/* Entry: 1081078f8; end: 108107943;  */

long * FUN_1081078f8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    lVar4 = *param_1;
    lVar5 = *param_2;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar5;
    func_0x0001078d39e8(lVar4);
  }
  return param_1;
}



/* Entry: 108107944; end: 10810796b;  */

long FUN_108107944(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x0001078d3a2c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return param_1;
    }
    FUN_108107a7c();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    FUN_1081079ec();
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    func_0x0001003b1eb0(param_1 + 0x38,param_2 + 0x38);
    return param_1;
  }
  return param_1;
}



/* Entry: 10810796c; end: 1081079ab;  */

long FUN_10810796c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1081079ec();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  func_0x0001003b1eb0(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



/* Entry: 1081079ac; end: 1081079eb;  */

void FUN_1081079ac(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001078d3a2c();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1081079ec; end: 108107a37;  */

long * FUN_1081079ec(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  cVar2 = (char)param_1[1];
  if (cVar2 == (char)param_2[1]) {
    if (cVar2 != '\0') {
      func_0x0001003b1e6c();
      return param_1;
    }
  }
  else {
    if (cVar2 != '\0') {
      if ((char)param_1[1] == '\x01') {
        func_0x0001003a8c94();
        *(undefined1 *)(param_1 + 1) = 0;
      }
      return param_1;
    }
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar4;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 108107a38; end: 108107a7b;  */

void FUN_108107a38(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001003a8c94();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 108107a7c; end: 108107ac7;  */

void FUN_108107a7c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_108107ac8();
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  lVar4 = *(long *)(param_2 + 0x38);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x38) = lVar4;
  return;
}



/* Entry: 108107ac8; end: 108107b07;  */

void FUN_108107ac8(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((char)param_2[1] == '\x01') {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar4;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 108107b08; end: 108107b27;  */

void FUN_108107b08(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001078d3a2c();
  }
  return;
}



/* Entry: 108107b28; end: 108107b4f;  */

undefined1 * FUN_108107b28(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_108107b50();
  return param_1;
}



/* Entry: 108107b50; end: 108107b63;  */

void FUN_108107b50(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x0001078d3d24();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 108107b64; end: 108107b7f;  */

void FUN_108107b64(long param_1)

{
  func_0x0001078d3d24();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 108107b80; end: 108107bbb;  */

void FUN_108107b80(void)

{
  func_0x000108107c80();
  return;
}



/* Entry: 108107bbc; end: 108107c1f;  */

long FUN_108107bbc(long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  ppuVar2 = &PTR_DAT_110a26988;
  ___dynamic_cast(param_2,&PTR_DAT_110a26988,&PTR_DAT_110a26ee0,0);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108107c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return param_2;
  }
  ___cxa_bad_cast();
  cVar1 = *(char *)(param_2 + 0x40);
  if (cVar1 == *(char *)(ppuVar2 + 8)) {
    if (cVar1 != '\0') {
      func_0x0001078d4afc();
      func_0x0001078d4590();
      uVar3 = *(undefined8 *)(param_4 + 0x30);
      uVar6 = *(undefined8 *)(param_4 + 0x10);
      uVar5 = *(undefined8 *)(param_4 + 0x28);
      uVar4 = *(undefined8 *)(param_4 + 0x20);
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_4 + 0x18);
      *(undefined8 *)(param_3 + 0x10) = uVar6;
      *(undefined8 *)(param_3 + 0x28) = uVar5;
      *(undefined8 *)(param_3 + 0x20) = uVar4;
      *(undefined8 *)(param_3 + 0x30) = uVar3;
      func_0x00010090c1cc(param_3 + 0x38,param_4 + 0x38);
      return param_3;
    }
    return param_2;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x40) == '\x01') {
      func_0x0001078d3a2c();
      *(undefined1 *)(param_2 + 0x40) = 0;
    }
    return param_2;
  }
  func_0x0001078d3d24();
  *(undefined1 *)(param_2 + 0x40) = 1;
  return param_2;
}



/* Entry: 108107c20; end: 108107ca3;  */

void FUN_108107c20(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x0001078d3a2c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return;
    }
    func_0x0001078d3d24();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001078d4afc();
    func_0x0001078d4590();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
    func_0x00010090c1cc(unaff_x20 + 0x38,unaff_x19 + 0x38);
    return;
  }
  return;
}



/* Entry: 108107ca4; end: 108109383;  */

long FUN_108107ca4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == 0) {
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    uStack_28 = *(undefined8 *)(param_2 + 0x20);
    uStack_30 = *(undefined8 *)(param_2 + 0x18);
    if (*(long *)(param_2 + 0x20) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  func_0x000108107350(param_1,&uStack_30);
  func_0x000108107324(&uStack_30);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return param_1;
}



/* Entry: 108109384; end: 108109493;  */

undefined8 FUN_108109384(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _CGPathCreateMutable();
  ppuStack_30 = &PTR_FUN_110a242c8;
  uStack_28 = uVar1;
  func_0x0001081423f4(param_1,&ppuStack_30);
  return uVar1;
}



/* Entry: 108109494; end: 10810952f;  */

void FUN_108109494(void)

{
  return;
}



/* Entry: 108109530; end: 1081095ef;  */

undefined8 * FUN_108109530(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = &PTR_DAT_110a24348;
  param_2[1] = 1;
  param_2[2] = param_3;
  func_0x00010b9a74e4();
  param_2[3] = param_1;
  param_2[4] = param_2 + 7;
  param_2[6] = 2;
  param_2[5] = 0;
  param_2[9] = param_2 + 0xc;
  param_2[0xb] = 2;
  param_2[10] = 0;
  param_2[0xe] = 0x32aaaba7;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_2[0x12] = 0;
  param_2[0x11] = 0;
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  return param_2;
}



/* Entry: 1081095f0; end: 10810962f;  */

void FUN_1081095f0(long param_1)

{
  long unaff_x19;
  
  func_0x000108109f3c();
  func_0x000108109eb0(param_1 + 0x70);
  FUN_108109630(unaff_x19 + 0x20);
  func_0x000108109ee4();
  func_0x000108109ed4();
  return;
}



/* Entry: 108109630; end: 10810969b;  */

void FUN_108109630(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_18 [8];
  
  lVar3 = *param_1;
  lVar7 = param_1[1];
  lVar1 = lVar7 * 8;
  if (lVar7 == param_1[2]) {
    FUN_108109acc(auStack_18);
  }
  else {
    lVar6 = *param_2;
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar7 = param_1[1];
    }
    *(long *)(lVar3 + lVar1) = lVar6;
    param_1[1] = lVar7 + 1;
  }
  return;
}



/* Entry: 10810969c; end: 108109717;  */

void FUN_10810969c(double param_1,long *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((param_2[5] == 0) && (param_2[10] == 0)) {
    if ((*(byte *)(param_2 + 0x17) != 0) && (func_0x00010b9a74e4(), (double)param_2[3] < param_1)) {
      uVar1 = 0;
      lVar2 = 0x38;
LAB_1081096d8:
      *(undefined1 *)(param_2 + 0x17) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001081096f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + lVar2))(param_2,param_3);
      return;
    }
  }
  else if ((*(byte *)(param_2 + 0x17) & 1) == 0) {
    uVar1 = 1;
    lVar2 = 0x30;
    goto LAB_1081096d8;
  }
  return;
}



/* Entry: 108109718; end: 108109757;  */

void FUN_108109718(long param_1)

{
  long unaff_x19;
  
  func_0x000108109f3c();
  func_0x000108109eb0(param_1 + 0x70);
  FUN_108109630(unaff_x19 + 0x48);
  func_0x000108109ee4();
  func_0x000108109ed4();
  return;
}



/* Entry: 108109758; end: 108109837;  */

undefined8 FUN_108109758(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x19;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    uVar6 = param_1;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x60);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000108109f3c();
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x48);
    param_1 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 2;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    __ZNSt3__15mutex4lockEv(param_2 + 0x70);
    FUN_108109c98((undefined1 *)((long)register0x00000008 + -0x60),unaff_x20);
    func_0x000108109ef0();
    __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x70);
    puVar1 = *(undefined8 **)((long)register0x00000008 + -0x60);
    for (lVar5 = *(long *)((long)register0x00000008 + -0x58) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
      param_1 = uVar6;
      (**(code **)(*(long *)*puVar1 + 0x20))();
      puVar1 = puVar1 + 1;
    }
    uVar4 = *(undefined8 *)((long)register0x00000008 + -0x58);
    FUN_108109958();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    FUN_108109958();
    unaff_x30 = FUN_108109838;
    func_0x000108109edc();
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar3;
    unaff_x19 = puVar2;
    unaff_d8 = uVar6;
  }
  return uVar4;
}



/* Entry: 108109838; end: 10810983f;  */

undefined8 FUN_108109838(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *unaff_x19;
  long lVar5;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar6;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x60);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x000108109f3c();
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x48);
    uVar6 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 2;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    __ZNSt3__15mutex4lockEv(param_2 + 0x70);
    FUN_108109c98((undefined1 *)((long)register0x00000008 + -0x60),unaff_x20);
    func_0x000108109ef0();
    __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x70);
    puVar1 = *(undefined8 **)((long)register0x00000008 + -0x60);
    for (lVar5 = *(long *)((long)register0x00000008 + -0x58) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
      uVar6 = param_1;
      (**(code **)(*(long *)*puVar1 + 0x20))();
      puVar1 = puVar1 + 1;
    }
    uVar4 = *(undefined8 *)((long)register0x00000008 + -0x58);
    FUN_108109958();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    ___stack_chk_fail();
    FUN_108109958();
    unaff_x30 = FUN_108109838;
    func_0x000108109edc();
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar3;
    unaff_x19 = puVar2;
    param_1 = uVar6;
    unaff_d8 = param_1;
  }
  return uVar4;
}



/* Entry: 108109840; end: 1081098cf;  */

void FUN_108109840(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  
  func_0x00010b9a74e4();
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar4 = param_1;
  puVar4[1] = param_2;
  uStack_38 = 0;
  FUN_108109a50(&uStack_38);
  func_0x000104c62cd8(PTR___dispatch_main_q_11034be20,puVar4,FUN_1081098d0);
  FUN_108109838(param_1,param_2);
  return;
}



/* Entry: 1081098d0; end: 108109957;  */

void FUN_1081098d0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_40 [16];
  
  dVar2 = param_1[1];
  dVar3 = *param_1;
  dVar1 = dVar2;
  FUN_108109758(dVar2,(long)dVar2 + 0x48);
  FUN_108109eb0((long)dVar2 + 0x70);
  if (dVar1 != 0.0) {
    func_0x00010b9a74e4();
    *(double *)((long)dVar2 + 0x18) = dVar3 + 1.0;
  }
  FUN_10810969c(dVar2,auStack_40);
  func_0x000108109ed4();
  FUN_108109a50(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108109958; end: 108109983;  */

undefined8 * FUN_108109958(undefined8 *param_1)

{
  FUN_108109984(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_108109a34(param_1,param_1);
  }
  return param_1;
}



/* Entry: 108109984; end: 1081099b3;  */

void FUN_108109984(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1081099b4(param_2);
    param_2 = param_2 + 8;
  }
  return;
}



/* Entry: 1081099b4; end: 1081099db;  */

undefined8 * FUN_1081099b4(undefined8 *param_1)

{
  FUN_1081099dc(*param_1);
  return param_1;
}



/* Entry: 1081099dc; end: 1081099ff;  */

void FUN_1081099dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108109f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108109a00; end: 108109a33;  */

long FUN_108109a00(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108109a34(param_1,param_1);
  }
  return param_1;
}



/* Entry: 108109a34; end: 108109a4f;  */

void FUN_108109a34(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108109a50; end: 108109a77;  */

undefined8 * FUN_108109a50(undefined8 *param_1)

{
  FUN_108109a78(*param_1);
  return param_1;
}



/* Entry: 108109a78; end: 108109a9b;  */

void FUN_108109a78(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108109f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108109a9c; end: 108109acb;  */

undefined8 * FUN_108109a9c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*param_1);
  }
  return param_1;
}



/* Entry: 108109acc; end: 108109c43;  */

long * FUN_108109acc(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  ulong extraout_x9;
  ulong uVar9;
  long lVar10;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong uVar11;
  long lStack_68;
  
  if ((ulong)((*(long *)(param_2 + 8) + 1) - *(long *)(param_2 + 0x10)) <=
      0xfffffffffffffffU - *(long *)(param_2 + 0x10)) {
    func_0x000108109f3c();
    if (extraout_x9 >> 0x3d == 0) {
      uVar9 = (extraout_x9 << 3) / 5;
    }
    else {
      uVar9 = extraout_x9 << 3;
      if (4 < extraout_x9 >> 0x3d) {
        uVar9 = 0xffffffffffffffff;
      }
    }
    uVar11 = *unaff_x20;
    if (0xffffffffffffffe < uVar9) {
      uVar9 = 0xfffffffffffffff;
    }
    uVar1 = extraout_x8;
    if (extraout_x8 <= uVar9) {
      uVar1 = uVar9;
    }
    uVar4 = uVar1;
    FUN_108109c44();
    uVar9 = *unaff_x20;
    uVar6 = unaff_x20[1];
    for (lVar7 = 0; puVar8 = (undefined8 *)(uVar9 + lVar7), puVar8 != param_3; lVar7 = lVar7 + 8) {
      *(undefined8 *)(uVar4 + lVar7) = *puVar8;
      *puVar8 = 0;
    }
    lVar10 = *param_4;
    if (lVar10 != 0) {
      plVar5 = (long *)(lVar10 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(long *)(uVar4 + lVar7) = lVar10;
    for (puVar8 = param_3; lVar7 = lVar7 + 8, puVar8 != (undefined8 *)(uVar9 + uVar6 * 8);
        puVar8 = puVar8 + 1) {
      *(undefined8 *)(uVar4 + lVar7) = *puVar8;
      *puVar8 = 0;
    }
    lStack_68 = 0;
    uVar6 = unaff_x20[1];
    if (uVar9 != 0) {
      FUN_108109984();
      func_0x000108109ef8();
      uVar6 = unaff_x20[1];
    }
    *unaff_x20 = uVar4;
    unaff_x20[1] = uVar6 + 1;
    unaff_x20[2] = uVar1;
    plVar5 = &lStack_68;
    FUN_108109c60(plVar5);
    *unaff_x19 = (long)param_3 + (*unaff_x20 - uVar11);
    return plVar5;
  }
  func_0x000108109f04();
  plVar5 = &lStack_68;
  FUN_108109c60();
  func_0x000108109edc();
  if ((ulong)plVar5 >> 0x3c == 0) {
    plVar5 = (long *)((long)plVar5 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar5);
    return plVar5;
  }
  func_0x000108109f04();
  if ((*plVar5 != 0) && (plVar5[1] + 0x18 != *plVar5)) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 108109c44; end: 108109c5f;  */

long * FUN_108109c44(long *param_1)

{
  if ((ulong)param_1 >> 0x3c == 0) {
    param_1 = (long *)((long)param_1 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1);
    return param_1;
  }
  func_0x000108109f04();
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108109c60; end: 108109c97;  */

long * FUN_108109c60(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108109c98; end: 108109ccb;  */

long FUN_108109c98(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_108109ccc(param_1,param_2,0);
  }
  return param_1;
}



/* Entry: 108109ccc; end: 108109e4b;  */

void FUN_108109ccc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  
  puVar6 = (ulong *)*param_2;
  if (param_2 + 3 != puVar6) {
    func_0x000108109ef0();
    if (*param_1 != 0) {
      func_0x000108109ef8();
    }
    *param_1 = *param_2;
    uVar7 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar7;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  uVar7 = param_2[1];
  if (param_1[2] < uVar7) {
    uVar4 = uVar7;
    FUN_108109c44();
    puVar8 = (ulong *)*param_1;
    if ((puVar8 != (ulong *)0x0) && (func_0x000108109ef0(), param_1 + 3 != puVar8)) {
      __ZdlPv(puVar8);
    }
    *param_1 = uVar4;
    param_1[2] = uVar7;
    for (lVar5 = 0; uVar7 * 8 - lVar5 != 0; lVar5 = lVar5 + 8) {
      *(undefined8 *)(uVar4 + lVar5) = *(undefined8 *)((long)puVar6 + lVar5);
      *(undefined8 *)((long)puVar6 + lVar5) = 0;
    }
    param_1[1] = lVar5 >> 3;
  }
  else {
    uVar4 = *param_1;
    uVar1 = param_1[1];
    uVar2 = uVar7;
    uVar3 = uVar1;
    if (uVar1 < uVar7) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        func_0x000108109f1c();
        puVar6 = puVar6 + 1;
        uVar4 = uVar4 + 8;
      }
      for (lVar5 = 0; uVar7 - uVar1 != lVar5; lVar5 = lVar5 + 1) {
        *(ulong *)(uVar4 + lVar5 * 8) = puVar6[lVar5];
        puVar6[lVar5] = 0;
      }
    }
    else {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        func_0x000108109f1c();
        uVar4 = uVar4 + 8;
      }
      FUN_108109984(param_1,uVar4,uVar1 - uVar7);
    }
    param_1[1] = uVar7;
  }
  FUN_108109984(param_2,*param_2,param_2[1]);
  param_2[1] = 0;
  return;
}



/* Entry: 108109e4c; end: 108109e73;  */

void FUN_108109e4c(undefined8 *param_1)

{
  FUN_108109984(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 108109e74; end: 108109eaf;  */

undefined8 * FUN_108109e74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1081099dc(uVar1);
  }
  return param_1;
}



/* Entry: 108109eb0; end: 108109f47;  */

void FUN_108109eb0(undefined8 param_1)

{
  undefined8 uStack0000000000000000;
  undefined1 uStack0000000000000008;
  
  uStack0000000000000008 = 1;
  uStack0000000000000000 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)();
  return;
}



/* Entry: 108109f48; end: 108109f8f; -[SCSnapDrawingDisplayLinkTarget initWithScheduler:] */

void FUN_108109f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc730;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108109f90; end: 108109f97; -[SCSnapDrawingDisplayLinkTarget vsync] */

void FUN_108109f90(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_2 + 8);
  func_0x00010b9a74e4();
  puVar4 = (undefined8 *)0x10;
  __Znwm();
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar4 = param_1;
  puVar4[1] = lVar5;
  uStack_38 = 0;
  FUN_108109a50(&uStack_38);
  func_0x000104c62cd8(PTR___dispatch_main_q_11034be20,puVar4,FUN_1081098d0);
  FUN_108109838(param_1,lVar5);
  return;
}



/* Entry: 108109f98; end: 10810a04f;  */

undefined8 * FUN_108109f98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  FUN_108109530();
  *puVar1 = &PTR_FUN_110a243c8;
  puVar1[0x18] = 0;
  puVar2 = PTR_PTR_1126d94d0;
  _objc_alloc(PTR_PTR_1126d94d0);
  func_0x00010c041d40();
  puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,puVar2,PTR_s_vsync_11253b4f0
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1[0x18];
  param_1[0x18] = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 10810a050; end: 10810a09b;  */

undefined8 * FUN_10810a050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a243c8;
  func_0x00010c069d00(param_1[0x18]);
  uVar1 = param_1[0x18];
  param_1[0x18] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0x18]);
  *param_1 = &PTR_DAT_110a24348;
  func_0x00010b9a1f08(param_1 + 0xe);
  FUN_108109958(param_1 + 9);
  FUN_108109958(param_1 + 4);
  return param_1;
}



/* Entry: 10810a09c; end: 10810a09f;  */

undefined8 * FUN_10810a09c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a243c8;
  func_0x00010c069d00(param_1[0x18]);
  uVar1 = param_1[0x18];
  param_1[0x18] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0x18]);
  *param_1 = &PTR_DAT_110a24348;
  func_0x00010b9a1f08(param_1 + 0xe);
  FUN_108109958(param_1 + 9);
  FUN_108109958(param_1 + 4);
  return param_1;
}



/* Entry: 10810a0a0; end: 10810a0b3;  */

void FUN_10810a0a0(void)

{
  FUN_10810a050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10810a0b4; end: 10810a107;  */

void FUN_10810a0b4(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  FUN_10810a19c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0xc0);
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010810a1b4();
  func_0x00010befc2c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10810a108; end: 10810a147;  */

void FUN_10810a108(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    __ZNSt3__15mutex6unlockEv(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f47b58a);
  FUN_10810a19c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0xc0);
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010810a1b4();
  func_0x00010c12c900(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10810a148; end: 10810a19b;  */

void FUN_10810a148(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  FUN_10810a19c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0xc0);
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010810a1b4();
  func_0x00010c12c900(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10810a19c; end: 10810a1c7;  */

void FUN_10810a19c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    __ZNSt3__15mutex6unlockEv(*param_2);
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f47b58a);
  FUN_10810a19c();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010810a1b4();
  func_0x00010c12c900(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10810a1c8; end: 10810a233;  */

void FUN_10810a1c8(undefined8 param_1,long param_2)

{
  _objc_retain(param_2);
  _objc_retain(param_1);
  if (param_2 != 0) {
    func_0x00010c10bf00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10810a234; end: 10810a273;  */

undefined8 FUN_10810a234(undefined8 param_1)

{
  func_0x00010bf41ae0();
  _objc_retainAutoreleasedReturnValue();
  _CFRetain();
  FUN_10810a428();
  return param_1;
}



/* Entry: 10810a274; end: 10810a2f3;  */

void FUN_10810a274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10810a2f4(&uStack_40,param_2);
  FUN_10810a2f4(&uStack_38,param_3);
  FUN_1082678ec(param_1,&uStack_40,param_4);
  FUN_10810a3c8(&uStack_40);
  return;
}



/* Entry: 10810a2f4; end: 10810a337;  */

void FUN_10810a2f4(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    return;
  }
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 10810a338; end: 10810a393;  */

void FUN_10810a338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_108276184(param_1,param_2,0,param_3,param_4,&uStack_28,0,param_5);
  FUN_10810a400(&uStack_28);
  return;
}


