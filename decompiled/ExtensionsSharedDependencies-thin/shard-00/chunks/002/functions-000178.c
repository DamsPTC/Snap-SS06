/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00435860; end: 00435907; -[SCConfigResult isEqual:] */

long FUN_00435860(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004358e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004358ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x007877e0();
          goto LAB_004358ec;
        }
        goto LAB_004358e0;
      }
    }
    lVar3 = 0;
  }
LAB_004358ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 00435908; end: 0043590f; -[SCConfigResult studyName] */

undefined8 FUN_00435908(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00435910; end: 00435917; -[SCConfigResult experimentId] */

undefined8 FUN_00435910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00435918; end: 00435947; -[SCConfigResult .cxx_destruct] */

void FUN_00435918(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00435948; end: 004359bb; -[SCUserIPInferredLocationServices initWithCountryCodeProvider:] */

undefined1 * FUN_00435948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3b50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004359bc; end: 004359c3; -[SCUserIPInferredLocationServices countryCodeProvider] */

undefined8 FUN_004359bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004359c4; end: 004359cf; -[SCUserIPInferredLocationServices .cxx_destruct] */

void FUN_004359c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004359d0; end: 00435aeb; -[SCNConfigConfigurationKey initWithKey:id:systemType:featureProvidedSignalsProto:] */

undefined1 *
FUN_004359d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac3b58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00435aec; end: 00435af3; -[SCNConfigConfigurationKey key] */

undefined8 FUN_00435aec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00435af4; end: 00435afb; -[SCNConfigConfigurationKey id] */

undefined8 FUN_00435af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00435afc; end: 00435b03; -[SCNConfigConfigurationKey systemType] */

undefined8 FUN_00435afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00435b04; end: 00435b0b; -[SCNConfigConfigurationKey featureProvidedSignalsProto] */

undefined8 FUN_00435b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00435b0c; end: 00435b47; -[SCNConfigConfigurationKey .cxx_destruct] */

void FUN_00435b0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00435b48; end: 00435beb; -[SCNConfigConfigurationState initWithCofGrapheneContext:] */

undefined1 * FUN_00435b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3b60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00435bec; end: 00435bf3; -[SCNConfigConfigurationState cofGrapheneContext] */

undefined8 FUN_00435bec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00435bf4; end: 00435bff; -[SCNConfigConfigurationState .cxx_destruct] */

void FUN_00435bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00435c00; end: 00435c3b;  */

long FUN_00435c00(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x10);
  func_0x00532f74(param_1 + 0x18);
  return param_1;
}



/* Entry: 00435c3c; end: 00435c3f;  */

long FUN_00435c3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x10);
  func_0x00532f74(param_1 + 0x18);
  return param_1;
}



/* Entry: 00435c40; end: 00435c53;  */

void FUN_00435c40(void)

{
  FUN_00435c00();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00435c54; end: 00435cd3;  */

undefined ** FUN_00435c54(void)

{
  return &PTR_DAT_009e3d10;
}



/* Entry: 00435cd4; end: 00435e9b;  */

long * FUN_00435cd4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)*puVar8;
      goto LAB_00435d1c;
    }
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_00435d1c:
      FUN_0054ddb8(puVar2,lVar3,1,"com.snapchat.proto.snaptoken.SnapAccessToken.access_token");
      plVar1 = param_3;
      FUN_00435e9c(param_3,1,puVar8,param_2);
      param_2 = plVar1;
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_00435d94;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_00435d94;
  }
  FUN_0054ddb8(puVar2,lVar3,1,"com.snapchat.proto.snaptoken.SnapAccessToken.scope");
  plVar1 = param_3;
  FUN_00435e9c(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_00435d94:
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    FUN_00435f80(param_3,*(long *)(param_1 + 0x20),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar1 < (long)(int)uVar7) {
      lVar11 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar11 < (int)uVar7) {
        do {
          iVar10 = (int)lVar11;
          _memcpy(plVar1,lVar3,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lVar3 = lVar3 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar1 + (long)iVar10);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            FUN_0054ec3c();
            plVar6 = (long *)((long)plVar1 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar6;
          } while (plVar5 <= plVar6);
          lVar11 = (long)plVar5 + (0x10 - (long)plVar1);
        } while ((int)lVar11 < (int)uVar7);
      }
      _memcpy(plVar1,lVar3,(long)(int)uVar7);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar1,lVar3,uVar9 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar7);
    }
  }
  return plVar1;
}



/* Entry: 00435e9c; end: 00435f7f;  */

byte * FUN_00435e9c(byte *param_1,undefined8 param_2,long *param_3,byte *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  uint uVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  undefined8 extraout_x8_00;
  uint uVar8;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  long lVar9;
  int iVar10;
  int iVar11;
  
  lVar9 = (long)*(char *)((long)param_3 + 0x17);
  if ((-1 < lVar9) || (lVar9 = param_3[1], lVar9 < 0x80)) {
    uVar3 = (uint)param_2 << 3;
    lVar1 = 4;
    if (((uint)param_2 & 0x1fffffff) >> 0x19 != 0) {
      lVar1 = 5;
    }
    lVar2 = 3;
    if (0x1fffff < uVar3) {
      lVar2 = lVar1;
    }
    lVar1 = 2;
    if (0x3fff < uVar3) {
      lVar1 = lVar2;
    }
    lVar2 = 1;
    if (0x7f < uVar3) {
      lVar2 = lVar1;
    }
    if (lVar9 <= (long)(*(long *)param_1 + ~(ulong)(param_4 + lVar2) + 0x10)) {
      uVar6 = uVar3 | 2;
      pbVar4 = param_4;
      uVar8 = uVar6;
      if (0x7f < uVar3) {
        do {
          param_4 = pbVar4 + 1;
          *pbVar4 = (byte)uVar8 | 0x80;
          uVar6 = uVar8 >> 7;
          uVar3 = uVar8 >> 0xe;
          pbVar4 = param_4;
          uVar8 = uVar6;
        } while (uVar3 != 0);
      }
      *param_4 = (byte)uVar6;
      param_4[1] = (byte)lVar9;
      plVar5 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar5 = param_3;
      }
      _memcpy(param_4 + 2,plVar5,lVar9);
      return param_4 + 2 + lVar9;
    }
  }
  func_0x0054f58c();
  func_0x0054f618();
  uVar7 = extraout_x10;
  while (0x7f < (uint)uVar7) {
    func_0x0054f6c4();
    uVar7 = extraout_x10_00;
  }
  func_0x0054f600();
  uVar7 = extraout_x8;
  while (0x7f < (uint)uVar7) {
    func_0x0054f69c();
    uVar7 = extraout_x8_00;
  }
  func_0x0054f5b0();
  iVar10 = (int)param_3;
  if ((param_1[0x39] == 1) && ((*(long *)param_1 - (long)param_4) + 0x10 <= (long)iVar10)) {
    pbVar4 = param_1;
    func_0x0054ed18(param_1,param_4);
    plVar5 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3);
    if (((ulong)plVar5 & 1) == 0) {
      func_0x0054f630();
    }
    return pbVar4;
  }
  if (*(long *)param_1 - (long)param_4 < (long)iVar10) {
    while( true ) {
      iVar11 = ((int)*(undefined8 *)param_1 - (int)param_4) + 0x10;
      iVar10 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar10 - iVar11);
      if (iVar10 - iVar11 == 0 || iVar10 < iVar11) break;
      func_0x0054f690();
      pbVar4 = param_4 + iVar11;
      param_4 = param_1;
      func_0x0054ed58(param_1,pbVar4);
    }
    func_0x0054f690();
    return param_4 + iVar10;
  }
  _memcpy(param_4);
  return param_4 + iVar10;
}



/* Entry: 00435f80; end: 0043601f;  */

byte * FUN_00435f80(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 <= param_3) {
    do {
      if (*(char *)(param_1 + 7) == '\x01') {
        param_3 = param_1 + 2;
        break;
      }
      puVar1 = param_1;
      FUN_0054ec3c();
      param_3 = (undefined8 *)((long)puVar1 + (long)((int)param_3 - (int)puVar4));
      puVar4 = (undefined8 *)*param_1;
    } while (puVar4 <= param_3);
  }
  pbVar2 = (byte *)((long)param_3 + 1);
  *(undefined1 *)param_3 = 0x18;
  pbVar3 = pbVar2;
  uVar6 = param_2;
  if (0x7f < param_2) {
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6 | 0x80;
      param_2 = uVar6 >> 7;
      uVar5 = uVar6 >> 0xe;
      pbVar3 = pbVar2;
      uVar6 = param_2;
    } while (uVar5 != 0);
  }
  *pbVar2 = (byte)param_2;
  return pbVar2 + 1;
}



/* Entry: 00436020; end: 00436103;  */

long FUN_00436020(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 00436104; end: 004361b7;  */

void FUN_00436104(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004361b8; end: 004361eb;  */

void FUN_004361b8(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004361ec; end: 00436243;  */

long FUN_004361ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  return param_1;
}



/* Entry: 00436244; end: 00436263;  */

undefined ** FUN_00436244(void)

{
  return &PTR_DAT_009e3d60;
}



/* Entry: 00436264; end: 004363bb;  */

long * FUN_00436264(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    FUN_004363bc(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x0043645c(param_3,*(long *)(param_1 + 0x18),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            FUN_0054ec3c();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 004363bc; end: 004364fb;  */

byte * FUN_004363bc(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 <= param_3) {
    do {
      if (*(char *)(param_1 + 7) == '\x01') {
        param_3 = param_1 + 2;
        break;
      }
      puVar1 = param_1;
      FUN_0054ec3c();
      param_3 = (undefined8 *)((long)puVar1 + (long)((int)param_3 - (int)puVar4));
      puVar4 = (undefined8 *)*param_1;
    } while (puVar4 <= param_3);
  }
  pbVar2 = (byte *)((long)param_3 + 1);
  *(undefined1 *)param_3 = 8;
  pbVar3 = pbVar2;
  uVar6 = param_2;
  if (0x7f < param_2) {
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6 | 0x80;
      param_2 = uVar6 >> 7;
      uVar5 = uVar6 >> 0xe;
      pbVar3 = pbVar2;
      uVar6 = param_2;
    } while (uVar5 != 0);
  }
  *pbVar2 = (byte)param_2;
  return pbVar2 + 1;
}



/* Entry: 004364fc; end: 00436563;  */

ulong FUN_004364fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 00436564; end: 004365e3;  */

long FUN_00436564(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x40);
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  func_0x00532f74(param_1 + 0x58);
  func_0x00532f74(param_1 + 0x60);
  func_0x00532f74(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_00437b14(param_1 + 0x10);
  return param_1;
}



/* Entry: 004365e4; end: 004365e7;  */

long FUN_004365e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x40);
  func_0x00532f74(param_1 + 0x48);
  func_0x00532f74(param_1 + 0x50);
  func_0x00532f74(param_1 + 0x58);
  func_0x00532f74(param_1 + 0x60);
  func_0x00532f74(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_00437b14(param_1 + 0x10);
  return param_1;
}



/* Entry: 004365e8; end: 004365fb;  */

void FUN_004365e8(void)

{
  FUN_00436564();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004365fc; end: 00436607;  */

undefined ** FUN_004365fc(void)

{
  return &PTR_DAT_009e3dc0;
}



/* Entry: 00436608; end: 00436777;  */

void FUN_00436608(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437d90(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(ulong *)(param_1 + 0x40) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x50) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x58) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x60) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x68) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x70) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 00436778; end: 00436d8f;  */

byte * FUN_00436778(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_004367cc;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_004367cc:
      FUN_0054ddb8(puVar15,lVar5,1,
                   "com.snapchat.proto.snaptoken.SnapAccessTokensRequest.refresh_token");
      pbVar9 = param_3;
      FUN_00435e9c(param_3,1,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  uVar20 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar5 = 8;
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(uVar8 + lVar5 + -1);
      }
      puVar15 = (undefined8 *)*puVar1;
      lVar6 = (long)*(char *)((long)puVar15 + 0x17);
      puVar14 = puVar15;
      if (lVar6 < 0) {
        lVar6 = puVar15[1];
        puVar14 = (undefined8 *)*puVar15;
      }
      FUN_0054ddb8(puVar14,lVar6,1,"com.snapchat.proto.snaptoken.SnapAccessTokensRequest.scopes");
      lVar6 = (long)*(char *)((long)puVar15 + 0x17);
      if (((lVar6 < 0) && (lVar6 = puVar15[1], 0x7f < lVar6)) ||
         ((*(long *)param_3 - (long)pbVar9) + 0xe < lVar6)) {
        param_2 = param_3;
        func_0x0054f030(param_3,2,puVar15,pbVar9);
      }
      else {
        *pbVar9 = 0x12;
        pbVar9[1] = (byte)lVar6;
        if (*(char *)((long)puVar15 + 0x17) < '\0') {
          puVar15 = (undefined8 *)*puVar15;
        }
        _memcpy(pbVar9 + 2,puVar15,lVar6);
        param_2 = pbVar9 + 2 + lVar6;
      }
      lVar5 = lVar5 + 8;
      uVar20 = uVar20 - 1;
      pbVar9 = param_2;
    } while (uVar20 != 0);
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_004368f4;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_004368f4:
      FUN_0054ddb8(puVar15,lVar5,1,"com.snapchat.proto.snaptoken.SnapAccessTokensRequest.device_id")
      ;
      pbVar9 = param_3;
      FUN_00435e9c(param_3,3,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  uVar13 = *(uint *)(param_1 + 0x38);
  if (uVar13 != 0) {
    for (; pbVar9 = *(byte **)param_3, pbVar9 <= param_2;
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar9)) {
      if (param_3[0x38] == 1) {
        param_2 = param_3 + 0x10;
        break;
      }
      pbVar10 = param_3;
      FUN_0054ec3c();
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x22;
    if (0x7f < uVar13) {
      do {
        param_2 = pbVar9;
        pbVar9 = param_2 + 1;
        *param_2 = (byte)uVar13 | 0x80;
        uVar2 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
      } while (uVar2 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar9 = (byte)uVar13;
    puVar16 = *(uint **)(param_1 + 0x30);
    iVar19 = *(int *)(param_1 + 0x28);
    pbVar9 = param_3 + 0x10;
    puVar17 = puVar16;
    do {
      pbVar10 = param_2;
      pbVar4 = *(byte **)param_3;
      if (*(byte **)param_3 <= param_2) {
        do {
          pbVar10 = pbVar9;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_004369d0:
            param_3[0x38] = 1;
LAB_00436a68:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar11 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar21 = *(undefined8 *)pbVar4;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar4 + 8);
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)(param_3 + 8) = pbVar4;
              goto LAB_00436a68;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar9,(long)pbVar4 - (long)pbVar9);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_004369d0;
            } while (uStack_64 == 0);
            puVar14 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar21 = *puVar14;
              *(undefined8 *)(param_3 + 0x18) = puVar14[1];
              *(undefined8 *)pbVar9 = uVar21;
              *(byte **)param_3 = pbVar9 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar9 + (int)uStack_64;
            }
            else {
              uVar21 = *puVar14;
              *(undefined8 *)(pbStack_70 + 8) = puVar14[1];
              *(undefined8 *)pbStack_70 = uVar21;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar10 = pbStack_70;
              pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar4);
          pbVar10 = param_2;
          pbVar4 = pbVar11;
        } while (pbVar11 <= param_2);
      }
      puVar18 = puVar17 + 1;
      uVar8 = (ulong)(int)*puVar17;
      uVar20 = uVar8;
      pbVar4 = pbVar10;
      if (0x7f < *puVar17) {
        do {
          pbVar10 = pbVar4 + 1;
          *pbVar4 = (byte)uVar20 | 0x80;
          uVar8 = uVar20 >> 7;
          uVar12 = uVar20 >> 0xe;
          uVar20 = uVar8;
          pbVar4 = pbVar10;
        } while (uVar12 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar8;
      puVar17 = puVar18;
    } while (puVar18 < puVar16 + iVar19);
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_00436abc;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_00436abc:
      FUN_0054ddb8(puVar15,lVar5,1,
                   "com.snapchat.proto.snaptoken.SnapAccessTokensRequest.persistent_attestation_device_id"
                  );
      pbVar9 = param_3;
      FUN_00435e9c(param_3,5,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 != 0) {
      puVar15 = (undefined8 *)*puVar14;
      goto LAB_00436b0c;
    }
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) != '\0') {
LAB_00436b0c:
      FUN_0054ddb8(puVar15,lVar5,1,
                   "com.snapchat.proto.snaptoken.SnapAccessTokensRequest.cloud_account_id");
      pbVar9 = param_3;
      FUN_00435e9c(param_3,6,puVar14,param_2);
      param_2 = pbVar9;
    }
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    pbVar9 = *(byte **)param_3;
    if (param_2 < pbVar9) {
      bVar7 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        FUN_0054ec3c();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= param_2);
      bVar7 = *(byte *)(param_1 + 0x70);
    }
    *param_2 = 0x38;
    param_2[1] = bVar7;
    param_2 = param_2 + 2;
  }
  uVar20 = *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar20 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar20 + 8);
  }
  pbVar9 = param_2;
  if (lVar5 != 0) {
    pbVar9 = param_3;
    FUN_00435e9c(param_3,8,uVar20,param_2);
  }
  puVar14 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar14 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar14[1];
    if (lVar5 == 0) goto LAB_00436bdc;
    puVar15 = (undefined8 *)*puVar14;
  }
  else {
    puVar15 = puVar14;
    if (*(char *)((long)puVar14 + 0x17) == '\0') goto LAB_00436bdc;
  }
  FUN_0054ddb8(puVar15,lVar5,1,
               "com.snapchat.proto.snaptoken.SnapAccessTokensRequest.attestation_request_token");
  pbVar10 = param_3;
  FUN_00435e9c(param_3,9,puVar14,pbVar9);
  pbVar9 = pbVar10;
LAB_00436bdc:
  if (*(char *)(param_1 + 0x71) == '\x01') {
    pbVar10 = *(byte **)param_3;
    if (pbVar9 < pbVar10) {
      bVar7 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar4 = param_3;
        FUN_0054ec3c();
        pbVar9 = pbVar4 + ((int)pbVar9 - (int)pbVar10);
        pbVar10 = *(byte **)param_3;
      } while (pbVar10 <= pbVar9);
      bVar7 = *(byte *)(param_1 + 0x71);
    }
    *pbVar9 = 0x50;
    pbVar9[1] = bVar7;
    pbVar9 = pbVar9 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar20 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar20 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar5 = *(long *)(uVar20 + 8);
      uVar8 = (ulong)*(uint *)(uVar20 + 0x10);
    }
    else {
      lVar5 = uVar20 + 8;
    }
    uVar13 = (uint)uVar8;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar13) {
      pbVar10 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar10 < (int)uVar13) {
        do {
          iVar19 = (int)pbVar10;
          _memcpy(pbVar9,lVar5,(long)iVar19);
          uVar13 = (int)uVar8 - iVar19;
          uVar8 = (ulong)uVar13;
          lVar5 = lVar5 + iVar19;
          pbVar10 = *(byte **)param_3;
          pbVar4 = pbVar9 + iVar19;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            FUN_0054ec3c();
            pbVar4 = pbVar9 + ((int)pbVar4 - (int)pbVar10);
            pbVar10 = *(byte **)param_3;
            pbVar9 = pbVar4;
          } while (pbVar10 <= pbVar4);
          pbVar10 = pbVar10 + (0x10 - (long)pbVar9);
        } while ((int)pbVar10 < (int)uVar13);
      }
      _memcpy(pbVar9,lVar5,(long)(int)uVar13);
      pbVar9 = pbVar9 + (int)uVar13;
    }
    else {
      _memcpy(pbVar9,lVar5,uVar8 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar13;
    }
  }
  return pbVar9;
}



/* Entry: 00436d90; end: 00437073;  */

long FUN_00436d90(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar9 = (ulong *)(uVar7 + 7);
    uVar6 = uVar4;
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar8 = (long)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar5 = 0;
  }
  else {
    lVar10 = 0;
    lVar5 = 0;
    do {
      lVar5 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x30) + (lVar10 >> 0x1e))) *
                      -9 + 0x280U >> 6) + lVar5;
      lVar10 = lVar10 + 0x100000000;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar4 = lVar5 + uVar4;
    if (lVar5 != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT((long)(int)lVar5) * -9 + 0x280U >> 6) + 1;
    }
  }
  *(int *)(param_1 + 0x38) = (int)lVar5;
  uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar6 + 0x17);
  lVar8 = lVar5;
  if (lVar5 < 0) {
    lVar8 = *(long *)(uVar6 + 8);
  }
  if (lVar8 != 0) {
    lVar8 = *(long *)(uVar6 + 8);
    if (-1 < *(char *)(uVar6 + 0x17)) {
      lVar8 = lVar5;
    }
    uVar4 = uVar4 + lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
  }
  lVar8 = uVar4 + (ulong)*(byte *)(param_1 + 0x70) * 2 + (ulong)*(byte *)(param_1 + 0x71) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    lVar8 = lVar5 + lVar8;
  }
  *(int *)(param_1 + 0x74) = (int)lVar8;
  return lVar8;
}



/* Entry: 00437074; end: 00437287;  */

void FUN_00437074(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_0054d20c(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      func_0x00437928(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar4 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    if (0 < iVar1) {
      uVar9 = iVar1 + 1;
      puVar6 = *(undefined4 **)(param_2 + 0x30);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 4);
      do {
        *puVar8 = *puVar6;
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
  }
  uVar3 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x40,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x48,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x50,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x58,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x60,uVar3,uVar5);
  }
  uVar3 = *(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar3 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar3 + 8);
  }
  if (lVar7 != 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x68,uVar3,uVar5);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00437288; end: 00437363;  */

undefined8 * FUN_00437288(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009e3cd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x0054d484(param_1 + 3,param_3 + 0x18);
  }
  puVar2 = (ulong *)(param_3 + 0x30);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x00532d08(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[6] = puVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_00437e80(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  return param_1;
}



/* Entry: 00437364; end: 004373bf;  */

long FUN_00437364(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      FUN_00437e3c();
    }
    __ZdlPv(lVar1);
  }
  FUN_00437bec(param_1 + 0x18);
  return param_1;
}



/* Entry: 004373c0; end: 004373c3;  */

long FUN_004373c0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      FUN_00437e3c();
    }
    __ZdlPv(lVar1);
  }
  FUN_00437bec(param_1 + 0x18);
  return param_1;
}



/* Entry: 004373c4; end: 004373d7;  */

void FUN_004373c4(void)

{
  FUN_00437364();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004373d8; end: 004373e3;  */

undefined ** FUN_004373d8(void)

{
  return &PTR_DAT_009e3e18;
}



/* Entry: 004373e4; end: 00437473;  */

void FUN_004373e4(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00437de0(param_1 + 0x18);
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00436250(*(undefined8 *)(param_1 + 0x38));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 00437474; end: 00437907;  */

byte * FUN_00437474(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0x20);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar5 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)((long)&MACH_HEADER.magic + 1);
      func_0x0054dae0(1,*puVar1,*(undefined4 *)(*puVar1 + 0x28),pbVar5,param_3);
      iVar12 = iVar12 + 1;
      pbVar5 = param_2;
    } while (iVar13 != iVar12);
  }
  uVar10 = *(uint *)(param_1 + 0x40);
  if (uVar10 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        FUN_0054ec3c();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar10 = *(uint *)(param_1 + 0x40);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar6 = (ulong)(int)uVar10;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar10) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  pbVar5 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar5 = (byte *)((long)&MACH_HEADER.magic + 3);
    func_0x0054dae0(3,*(long *)(param_1 + 0x38),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20),
                    param_2,param_3);
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar11[1];
    if (lVar3 == 0) goto LAB_00437584;
    puVar2 = (undefined8 *)*puVar11;
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_00437584;
  }
  FUN_0054ddb8(puVar2,lVar3,1,
               "com.snapchat.proto.snaptoken.SnapAccessTokensResponse.cloud_1tl_token");
  pbVar8 = param_3;
  FUN_00435e9c(param_3,4,puVar11,pbVar5);
  pbVar5 = pbVar8;
LAB_00437584:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar6 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar10 = (uint)uVar6;
    if (*(long *)param_3 - (long)pbVar5 < (long)(int)uVar10) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar5) + 0x10);
      if ((int)pbVar8 < (int)uVar10) {
        do {
          iVar13 = (int)pbVar8;
          _memcpy(pbVar5,lVar3,(long)iVar13);
          uVar10 = (int)uVar6 - iVar13;
          uVar6 = (ulong)uVar10;
          lVar3 = lVar3 + iVar13;
          pbVar8 = *(byte **)param_3;
          pbVar9 = pbVar5 + iVar13;
          do {
            pbVar5 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar5 = param_3;
            FUN_0054ec3c();
            pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar5 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar5);
        } while ((int)pbVar8 < (int)uVar10);
      }
      _memcpy(pbVar5,lVar3,(long)(int)uVar10);
      pbVar5 = pbVar5 + (int)uVar10;
    }
    else {
      _memcpy(pbVar5,lVar3,uVar6 & 0xffffffff);
      pbVar5 = pbVar5 + (int)uVar10;
    }
  }
  return pbVar5;
}



/* Entry: 00437908; end: 0043792b;  */

void FUN_00437908(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = section_00000068.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x005510c4(param_2,0x78);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009e3be0;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(char **)(pcVar1 + 0x20) = param_2;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(char **)(pcVar1 + 0x30) = param_2;
  *(dword *)(pcVar1 + 0x38) = 0;
  *(undefined **)(pcVar1 + 0x40) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x48) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x50) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x58) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x60) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x68) = &DAT_00b69408;
  *(undefined4 *)(pcVar1 + 0x74) = 0;
  *(undefined2 *)(pcVar1 + 0x70) = 0;
  return;
}



/* Entry: 0043792c; end: 00437a0f;  */

void FUN_0043792c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  plVar4 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    if ((int)param_3 < 2) goto LAB_00437980;
  }
  else {
    plVar4 = (long *)plVar4[-1];
    if ((int)param_3 < 2) {
LAB_00437980:
      uVar5 = 2;
      goto LAB_00437998;
    }
    if (0x3ffffffb < iVar2) {
      uVar5 = 0x7fffffff;
      goto LAB_00437998;
    }
  }
  uVar1 = iVar2 * 2 + 2;
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  uVar5 = (ulong)uVar1;
LAB_00437998:
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)(uVar5 * 4 + 8);
    __Znwm();
  }
  else {
    plVar3 = plVar4;
    func_0x005510f0(plVar4,uVar5 * 4 + 0xf & 0x3fffffff8);
  }
  *plVar3 = (long)plVar4;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar3 + 1,*(undefined8 *)(param_1 + 8),(ulong)param_2 << 2);
    }
    FUN_00437a10(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar5;
  *(long **)(param_1 + 8) = plVar3 + 1;
  return;
}



/* Entry: 00437a10; end: 00437a67;  */

void FUN_00437a10(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long *plVar5;
  long extraout_x8;
  ulong uVar6;
  undefined8 *extraout_x9;
  long lVar7;
  
  plVar5 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar5);
    return;
  }
  ppuVar3 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)((long)*(int *)(param_1 + 4));
  if (ppuVar3[1] == (undefined *)*extraout_x9) {
    puVar4 = ppuVar3[2];
    uVar1 = extraout_x8 * 4 + 8;
    uVar6 = 0x3b - LZCOUNT(uVar1);
    bVar2 = puVar4[0x50];
    if (uVar6 < bVar2) {
      lVar7 = *(long *)(puVar4 + 0x58);
      *plVar5 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar5;
    }
    else {
      if (bVar2 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar5,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
        lVar7 = (ulong)(byte)puVar4[0x50] << 3;
      }
      uVar6 = uVar1 >> 3;
      if (0 < (long)((uVar1 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar5 + lVar7);
      }
      *(long **)(puVar4 + 0x58) = plVar5;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar4[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 00437a68; end: 00437b13;  */

void FUN_00437a68(long param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0x3b - LZCOUNT(param_3);
  bVar1 = *(byte *)(param_1 + 0x50);
  if (uVar2 < bVar1) {
    lVar3 = *(long *)(param_1 + 0x58);
    *param_2 = *(undefined8 *)(lVar3 + uVar2 * 8);
    *(undefined8 **)(lVar3 + uVar2 * 8) = param_2;
  }
  else {
    if (bVar1 == 0) {
      lVar3 = 0;
    }
    else {
      _memmove(param_2,*(undefined8 *)(param_1 + 0x58),(ulong)bVar1 << 3);
      lVar3 = (ulong)*(byte *)(param_1 + 0x50) << 3;
    }
    uVar2 = param_3 >> 3;
    if (0 < (long)((param_3 & 0xfffffffffffffff8) - lVar3)) {
      _bzero((long)param_2 + lVar3);
    }
    *(undefined8 **)(param_1 + 0x58) = param_2;
    if (0x3f < uVar2) {
      uVar2 = 0x40;
    }
    *(char *)(param_1 + 0x50) = (char)uVar2;
  }
  return;
}



/* Entry: 00437b14; end: 00437b47;  */

long * FUN_00437b14(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00437b48(param_1);
  }
  return param_1;
}



/* Entry: 00437b48; end: 00437beb;  */

void FUN_00437b48(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  
  if (param_1[2] == 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 & 1;
    if ((uVar1 & 1) == 0) {
      uVar3 = (uint)(uVar1 != 0);
    }
    else {
      uVar3 = *(uint *)(uVar1 - 1);
    }
    puVar5 = param_1;
    if (uVar2 != 0) {
      puVar5 = (ulong *)(uVar1 + 7);
    }
    if (0 < (int)uVar3) {
      uVar1 = (ulong)uVar3;
      do {
        puVar4 = (undefined8 *)*puVar5;
        if (puVar4 != (undefined8 *)0x0) {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            __ZdlPv(*puVar4);
          }
          __ZdlPv(puVar4);
        }
        uVar1 = uVar1 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar1 != 0);
      uVar1 = *param_1;
      uVar2 = uVar1 & 1;
    }
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(uVar1 - 1);
      return;
    }
  }
  return;
}



/* Entry: 00437bec; end: 00437c1f;  */

long * FUN_00437bec(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00437c20; end: 00437d8f;  */

void FUN_00437c20(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = section_00000068.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x78);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009e3be0;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(char **)(pcVar1 + 0x20) = param_1;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(char **)(pcVar1 + 0x30) = param_1;
  *(dword *)(pcVar1 + 0x38) = 0;
  *(undefined **)(pcVar1 + 0x40) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x48) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x50) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x58) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x60) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x68) = &DAT_00b69408;
  *(undefined4 *)(pcVar1 + 0x74) = 0;
  *(undefined2 *)(pcVar1 + 0x70) = 0;
  return;
}



/* Entry: 00437d90; end: 00437ddf;  */

void FUN_00437d90(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar1 = (uint)param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  uVar3 = (ulong)uVar1;
  do {
    puVar4 = (undefined8 *)*puVar2;
    if (*(char *)((long)puVar4 + 0x17) < '\0') {
      *(undefined1 *)*puVar4 = 0;
      puVar4[1] = 0;
    }
    else {
      *(undefined1 *)puVar4 = 0;
      *(undefined1 *)((long)puVar4 + 0x17) = 0;
    }
    uVar3 = uVar3 - 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 != 0);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 00437de0; end: 00437e3b;  */

void FUN_00437de0(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  uVar3 = (ulong)uVar1;
  do {
    (**(code **)(*(long *)*puVar2 + 0x18))();
    uVar3 = uVar3 - 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 != 0);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 00437e3c; end: 00437e7f;  */

void FUN_00437e3c(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 & 0xfffffffffffffffe;
  if (uVar1 != 0) {
    if (*(char *)(uVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(uVar1 + 8));
    }
    __ZdlPv(uVar1);
  }
  *param_1 = 0;
  return;
}



/* Entry: 00437e80; end: 00437f0b;  */

char * FUN_00437e80(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_009e3c30;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  FUN_004361b8();
  return pcVar1;
}



/* Entry: 00437f0c; end: 00437fe7;  */

undefined8 * FUN_00437f0c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009e3ef0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    FUN_0054d20c(param_1 + 2,param_3 + 0x10);
  }
  puVar2 = (ulong *)(param_3 + 0x28);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x00532d08(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[5] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x30);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x00532d08(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[6] = puVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar4;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 00437fe8; end: 0043802b;  */

long FUN_00437fe8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x28);
  func_0x00532f74(param_1 + 0x30);
  FUN_00437b14(param_1 + 0x10);
  return param_1;
}



/* Entry: 0043802c; end: 0043802f;  */

long FUN_0043802c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00437e3c();
  }
  func_0x00532f74(param_1 + 0x28);
  func_0x00532f74(param_1 + 0x30);
  FUN_00437b14(param_1 + 0x10);
  return param_1;
}



/* Entry: 00438030; end: 00438043;  */

void FUN_00438030(void)

{
  FUN_00437fe8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00438044; end: 0043804f;  */

undefined ** FUN_00438044(void)

{
  return &PTR_DAT_009e3f30;
}



/* Entry: 00438050; end: 004380ff;  */

void FUN_00438050(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437d90(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 00438100; end: 004383df;  */

long * FUN_00438100(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar13;
  undefined1 *puVar12;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 != 0) {
      puVar10 = (undefined8 *)*puVar9;
      goto LAB_00438150;
    }
  }
  else {
    puVar10 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_00438150:
      FUN_0054ddb8(puVar10,lVar4,1,"snapchat.snaptoken.StoredAccessToken.token_value");
      plVar2 = param_3;
      FUN_00435e9c(param_3,1,puVar9,param_2);
      param_2 = plVar2;
    }
  }
  uVar13 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar4 = 8;
    plVar2 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + lVar4 + -1);
      }
      puVar10 = (undefined8 *)*puVar1;
      lVar5 = (long)*(char *)((long)puVar10 + 0x17);
      puVar9 = puVar10;
      if (lVar5 < 0) {
        lVar5 = puVar10[1];
        puVar9 = (undefined8 *)*puVar10;
      }
      FUN_0054ddb8(puVar9,lVar5,1,"snapchat.snaptoken.StoredAccessToken.scopes");
      lVar5 = (long)*(char *)((long)puVar10 + 0x17);
      if (((lVar5 < 0) && (lVar5 = puVar10[1], 0x7f < lVar5)) ||
         ((*param_3 - (long)plVar2) + 0xe < lVar5)) {
        param_2 = param_3;
        func_0x0054f030(param_3,2,puVar10,plVar2);
      }
      else {
        *(undefined1 *)plVar2 = 0x12;
        *(char *)((long)plVar2 + 1) = (char)lVar5;
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          puVar10 = (undefined8 *)*puVar10;
        }
        _memcpy((undefined1 *)((long)plVar2 + 2),puVar10,lVar5);
        param_2 = (long *)((undefined1 *)((long)plVar2 + 2) + lVar5);
      }
      lVar4 = lVar4 + 8;
      uVar13 = uVar13 - 1;
      plVar2 = param_2;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_004382a0;
    puVar10 = (undefined8 *)*puVar9;
  }
  else {
    puVar10 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_004382a0;
  }
  FUN_0054ddb8(puVar10,lVar4,1,"snapchat.snaptoken.StoredAccessToken.user_id");
  plVar2 = param_3;
  FUN_00435e9c(param_3,3,puVar9,param_2);
  param_2 = plVar2;
LAB_004382a0:
  plVar2 = param_2;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = param_3;
    FUN_004383e0(param_3,*(long *)(param_1 + 0x38),param_2);
  }
  plVar3 = plVar2;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar3 = param_3;
    func_0x00438480(param_3,*(long *)(param_1 + 0x40),plVar2);
  }
  plVar2 = plVar3;
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar2 = param_3;
    func_0x00438520(param_3,*(long *)(param_1 + 0x48),plVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar13 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar4 = *(long *)(uVar13 + 8);
      uVar6 = (ulong)*(uint *)(uVar13 + 0x10);
    }
    else {
      lVar4 = uVar13 + 8;
    }
    uVar8 = (uint)uVar6;
    if (*param_3 - (long)plVar2 < (long)(int)uVar8) {
      puVar12 = (undefined1 *)((*param_3 - (long)plVar2) + 0x10);
      if ((int)puVar12 < (int)uVar8) {
        do {
          iVar11 = (int)puVar12;
          _memcpy(plVar2,lVar4,(long)iVar11);
          uVar8 = (int)uVar6 - iVar11;
          uVar6 = (ulong)uVar8;
          lVar4 = lVar4 + iVar11;
          plVar7 = (long *)*param_3;
          plVar3 = (long *)((long)plVar2 + (long)iVar11);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            FUN_0054ec3c();
            plVar3 = (long *)((long)plVar2 + (long)((int)plVar3 - (int)plVar7));
            plVar7 = (long *)*param_3;
            plVar2 = plVar3;
          } while (plVar7 <= plVar3);
          puVar12 = (undefined1 *)((long)plVar7 + (0x10 - (long)plVar2));
        } while ((int)puVar12 < (int)uVar8);
      }
      _memcpy(plVar2,lVar4,(long)(int)uVar8);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar2,lVar4,uVar6 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
  }
  return plVar2;
}



/* Entry: 004383e0; end: 004385bf;  */

byte * FUN_004383e0(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 <= param_3) {
    do {
      if (*(char *)(param_1 + 7) == '\x01') {
        param_3 = param_1 + 2;
        break;
      }
      puVar1 = param_1;
      FUN_0054ec3c();
      param_3 = (undefined8 *)((long)puVar1 + (long)((int)param_3 - (int)puVar4));
      puVar4 = (undefined8 *)*param_1;
    } while (puVar4 <= param_3);
  }
  pbVar2 = (byte *)((long)param_3 + 1);
  *(undefined1 *)param_3 = 0x20;
  pbVar3 = pbVar2;
  uVar6 = param_2;
  if (0x7f < param_2) {
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar6 | 0x80;
      param_2 = uVar6 >> 7;
      uVar5 = uVar6 >> 0xe;
      pbVar3 = pbVar2;
      uVar6 = param_2;
    } while (uVar5 != 0);
  }
  *pbVar2 = (byte)param_2;
  return pbVar2 + 1;
}



/* Entry: 004385c0; end: 0043874b;  */

ulong FUN_004385c0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    puVar9 = (ulong *)(uVar8 + 7);
    uVar5 = uVar4;
    do {
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar1 = puVar9;
      }
      bVar3 = *(byte *)(*puVar1 + 0x17);
      uVar2 = *(ulong *)(*puVar1 + 8);
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      uVar4 = uVar2 + uVar4 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      puVar9 = puVar9 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  lVar6 = lVar7;
  if (lVar7 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(uVar5 + 8);
    if (-1 < *(char *)(uVar5 + 0x17)) {
      lVar6 = lVar7;
    }
    uVar4 = uVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  lVar6 = lVar7;
  if (lVar7 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(uVar5 + 8);
    if (-1 < *(char *)(uVar5 + 0x17)) {
      lVar6 = lVar7;
    }
    uVar4 = uVar4 + lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x50) = (int)uVar4;
  return uVar4;
}



/* Entry: 0043874c; end: 0043882b;  */

void FUN_0043874c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_0054d20c(param_1 + 0x10,param_2 + 0x10);
  }
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x30,uVar1,uVar2);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0043882c; end: 004388b7;  */

void FUN_0043882c(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x10 + lVar2);
    *(undefined1 *)(param_1 + 0x10 + lVar2) = *(undefined1 *)(param_2 + 0x10 + lVar2);
    *(undefined1 *)(param_2 + 0x10 + lVar2) = uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x38 + lVar2);
    *(undefined1 *)(param_1 + 0x38 + lVar2) = *(undefined1 *)(param_2 + 0x38 + lVar2);
    *(undefined1 *)(param_2 + 0x38 + lVar2) = uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x18);
  return;
}



/* Entry: 004388b8; end: 004389a7;  */

void FUN_004388b8(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &segment_command_00000020.maxprot;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x58);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009e3ef0;
  *(dword **)(pdVar1 + 2) = param_1;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)(pdVar1 + 6) = 0;
  *(dword **)(pdVar1 + 8) = param_1;
  *(undefined **)(pdVar1 + 10) = &DAT_00b69408;
  *(undefined **)(pdVar1 + 0xc) = &DAT_00b69408;
  *(undefined8 *)(pdVar1 + 0xe) = 0;
  *(undefined8 *)(pdVar1 + 0x10) = 0;
  *(undefined8 *)(pdVar1 + 0x12) = 0;
  pdVar1[0x14] = 0;
  return;
}



/* Entry: 004389a8; end: 00438b7b;  */

long FUN_004389a8(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_00999d30;
  uVar1 = uVar4;
  _CFStringCreateExternalRepresentation(uVar4,param_1,0x8000100,0);
  _CFDictionaryCreateMutable
            (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_00999d80,
             PTR__kCFTypeDictionaryValueCallBacks_00999d88);
  _CFDictionaryAddValue();
  _CFDictionaryAddValue(uVar4,*(undefined8 *)PTR__kSecAttrGeneric_00999888,uVar1);
  _CFDictionaryAddValue(uVar4,*(undefined8 *)PTR__kSecAttrAccount_00999880,uVar1);
  uVar5 = *(undefined8 *)PTR__kSecAttrAccessible_00999858;
  _CFDictionaryAddValue
            (uVar4,uVar5,
             *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_00999868);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecAttrService_00999890,
             &PTR____CFConstantStringClassReference_00a24a80);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecAttrSynchronizable_00999898,
             *(undefined8 *)PTR__kCFBooleanFalse_00999d38);
  _CFRelease(uVar1);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecMatchLimit_009998b0,
             *(undefined8 *)PTR__kSecMatchLimitOne_009998c0);
  _CFDictionaryAddValue
            (uVar4,*(undefined8 *)PTR__kSecReturnData_009998d0,
             *(undefined8 *)PTR__kCFBooleanTrue_00999d40);
  if (param_2 != 0) {
    _CFDictionaryReplaceValue
              (uVar4,uVar5,*(undefined8 *)PTR__kSecAttrAccessibleWhenUnlockedThisDeviceOnly_00999878
              );
  }
  lStack_38 = 0;
  uVar1 = uVar4;
  _SecItemCopyMatching(uVar4,&lStack_38);
  _CFRelease(uVar4);
  if ((int)uVar1 == 0) {
    lVar2 = lStack_38;
    _CFGetTypeID();
    lVar3 = lVar2;
    _CFDataGetTypeID();
    if (lVar2 == lVar3) {
      return lStack_38;
    }
  }
  if (lStack_38 != 0) {
    _CFRelease();
  }
  return 0;
}



/* Entry: 00438b7c; end: 00438c17; -[SCSnapTokenKeychainBackedByArchiveDiskStorage initWithLogger:] */

undefined1 * FUN_00438b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3b68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_00ac2cd0;
    _objc_alloc();
    func_0x00785b00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00438c18; end: 00438c8b; -[SCSnapTokenKeychainBackedByArchiveDiskStorage accessTokenDataWithUserId:accessType:] */

void FUN_00438c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  pcVar1 = "accessTokenDataWithUserId:accessType:";
  func_0x00634fc8("accessTokenDataWithUserId:accessType:");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0077e200(uVar2,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00438c8c; end: 00438d17; -[SCSnapTokenKeychainBackedByArchiveDiskStorage setAccessTokenDataWithData:userId:accessType:] */

undefined8
FUN_00438c8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  pcVar1 = "setAccessTokenDataWithData:data:userId:accessType:";
  func_0x00634fc8("setAccessTokenDataWithData:data:userId:accessType:");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078c9a0(uVar2,param_2,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  FUN_00635084(pcVar1);
  return uVar2;
}



/* Entry: 00438d18; end: 00438d83; -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeAccessTokenDataWithUserId:accessType:] */

undefined8 FUN_00438d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  pcVar1 = "removeAccessTokenDataWithUserId:userId:accessType:";
  func_0x00634fc8("removeAccessTokenDataWithUserId:userId:accessType:");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078b260(uVar2,param_2,param_3,param_4);
  _objc_release(param_3);
  FUN_00635084(pcVar1);
  return uVar2;
}



/* Entry: 00438d84; end: 00438e47; -[SCSnapTokenKeychainBackedByArchiveDiskStorage refreshTokenDataWithUserId:] */

void FUN_00438d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  pcVar1 = "refreshTokenDataWithUserId:userId:";
  func_0x00634fc8("refreshTokenDataWithUserId:userId:");
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x0078b120(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1;
    func_0x0077bfe0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x007889c0(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_00a24aa0);
    }
    FUN_00635084(pcVar1);
  }
  else {
    FUN_00635084(pcVar1);
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 00438e48; end: 00438efb; -[SCSnapTokenKeychainBackedByArchiveDiskStorage setRefreshTokenDataWithData:userId:] */

uint FUN_00438e48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  pcVar1 = "setRefreshTokenDataWithData:data:userId";
  func_0x00634fc8("setRefreshTokenDataWithData:data:userId");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078fbe0(uVar2,param_2,param_3,param_4);
  lVar3 = param_1;
  func_0x0077c020(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (((uint)uVar2 == 0) && ((uint)lVar3 != 0)) {
    func_0x007889c0(*(undefined8 *)(param_1 + 8),param_2,
                    &PTR____CFConstantStringClassReference_00a24ac0);
  }
  FUN_00635084(pcVar1);
  return ((uint)uVar2 | (uint)lVar3) & 1;
}



/* Entry: 00438efc; end: 00438f97; -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeRefreshTokenDataWithUserId:] */

uint FUN_00438efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  pcVar1 = "removeRefreshTokenDataWithUserId:data:userId";
  func_0x00634fc8("removeRefreshTokenDataWithUserId:data:userId");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078b540(uVar2,param_2,param_3);
  lVar3 = param_1;
  func_0x0077c000(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((uint)uVar2 == 0 || (uint)lVar3 != 0) {
    func_0x007889c0(*(undefined8 *)(param_1 + 8),param_2,
                    &PTR____CFConstantStringClassReference_00a24ae0);
  }
  FUN_00635084(pcVar1);
  return ((uint)uVar2 | (uint)lVar3) & 1;
}



/* Entry: 00438f98; end: 00439003; -[SCSnapTokenKeychainBackedByArchiveDiskStorage cloud1TLTokenDataWithUserId:] */

void FUN_00438f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  pcVar1 = "cloud1TLTokenDataWithUserId:data";
  func_0x00634fc8("cloud1TLTokenDataWithUserId:data");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00780400(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00439004; end: 0043907f; -[SCSnapTokenKeychainBackedByArchiveDiskStorage setCloud1TLTokenDataWithData:forUserId:] */

undefined8 FUN_00439004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  pcVar1 = "setCloud1TLTokenDataWithData:data:userId:";
  func_0x00634fc8("setCloud1TLTokenDataWithData:data:userId:");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078d4e0(uVar2,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  FUN_00635084(pcVar1);
  return uVar2;
}



/* Entry: 00439080; end: 004390e3; -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeCloud1TLTokenDataWithUserId:] */

undefined8 FUN_00439080(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  pcVar1 = "removeCloud1TLTokenDataWithUserId:userId:";
  func_0x00634fc8("removeCloud1TLTokenDataWithUserId:userId:");
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x0078b2c0(uVar2,param_2,param_3);
  _objc_release(param_3);
  FUN_00635084(pcVar1);
  return uVar2;
}



/* Entry: 004390e4; end: 004391af; -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveSetRefreshTokenData:forUserId:] */

undefined *
FUN_004390e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007851e0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_00ac2cd8;
  func_0x007914e0(PTR_PTR_00ac2cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a480(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x0078bea0(puVar2,param_2,puVar1,param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 004391b0; end: 0043923f; -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRemoveRefreshTokenDataForUserId:] */

undefined * FUN_004391b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2cd8;
  _objc_retain(param_3);
  func_0x007914e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a480(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x0078b340(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 00439240; end: 0043933f; -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRefreshTokenDataForUserId:] */

void FUN_00439240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2cd8;
  func_0x007914e0(PTR_PTR_00ac2cd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a480(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00788440(puVar1,param_2,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x007815a0(puVar3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00439340; end: 004393cb; -[SCSnapTokenKeychainBackedByArchiveDiskStorage pathForUserId:] */

void FUN_00439340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a24b00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac2cd8;
  func_0x007914e0(PTR_PTR_00ac2cd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078a4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 004393cc; end: 004393fb; -[SCSnapTokenKeychainBackedByArchiveDiskStorage .cxx_destruct] */

void FUN_004393cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004393fc; end: 004394e3; -[SCArchiveLoader initWithClass:fileName:performerContext:] */

undefined1 *
FUN_004393fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3b70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    puVar2 = PTR_PTR_00ac2cd8;
    func_0x007914e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0078a4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
    _objc_alloc();
    func_0x00785a40();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 004394e4; end: 004395ff; -[SCArchiveLoader loadFromDiskAsync:completion:] */

void FUN_004394e4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00439600;
  puStack_50 = &UNK_009e3f90;
  ppuVar2 = &puStack_68;
  lStack_48 = param_1;
  _objc_retainBlock();
  if (param_3 == 0) {
    ppuVar3 = ppuVar2;
    (*(code *)ppuVar2[2])();
    if ((int)ppuVar3 != 0) {
      puStack_c0 = puVar1;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x4396b4;
      puStack_a8 = &UNK_009e3fc0;
      lStack_a0 = param_1;
      __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_c0);
    }
  }
  else {
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_00439620;
    puStack_80 = &UNK_009e3670;
    _objc_retain(ppuVar2);
    lStack_78 = param_1;
    ppuStack_70 = ppuVar2;
    __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_98);
    _objc_release(ppuStack_70);
  }
  _objc_release(ppuVar2);
  return;
}



/* Entry: 00439600; end: 0043961f;  */

bool FUN_00439600(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  if (lVar1 == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
  }
  return lVar1 == 0;
}



/* Entry: 00439620; end: 004396ab;  */

void FUN_00439620(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0078ad00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a560();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 004396ac; end: 004396bb;  */

void FUN_004396ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x20),PTR_s__unarchive_00aba490);
  return;
}



/* Entry: 004396bc; end: 004397f7; -[SCArchiveLoader _unarchive] */

/* WARNING: Removing unreachable block (ram,0x004397a4) */

void FUN_004396bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_00ac2cd8;
  func_0x007914e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _NSStringFromClass(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00788440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_004397f8;
  puStack_48 = &UNK_009e36d0;
  lStack_40 = param_1;
  _objc_retain(puVar3);
  puStack_38 = puVar3;
  __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(puVar3);
  return;
}



/* Entry: 004397f8; end: 00439803;  */

void FUN_004397f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didFinishLoadingFromDiskWithObj_00ab9ed8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00439804; end: 0043991f; -[SCArchiveLoader waitUntilLoadFromDiskCallback:] */

void FUN_00439804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_00999f30;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x43988c;
  puStack_38 = &UNK_009e3670;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 00439920; end: 004399a7; -[SCArchiveLoader _didFinishLoadingFromDiskWithObject:] */

void FUN_00439920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_00999f30;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_004399a8;
  puStack_38 = &UNK_009e36d0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  __runOnMainThreadAsynchronouslyIfNecessary("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 004399a8; end: 00439ae3;  */

undefined * FUN_004399a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 2;
  lVar5 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lVar5 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
    lVar5 = *(long *)(param_1 + 0x20);
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar5 = *(long *)(lVar5 + 0x20);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00780ea0();
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        (**(code **)(*(long *)(lStack_108 + lVar7 * 8) + 0x10))();
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      puVar4 = &uStack_110;
      func_0x00780ea0();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  func_0x0078b280(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_00ac2cd8;
  _objc_retain(puVar4);
  func_0x007914e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078bea0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 00439ae4; end: 00439b53; -[SCArchiveLoader saveObject:] */

undefined * FUN_00439ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2cd8;
  _objc_retain(param_3);
  func_0x007914e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078bea0();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 00439b54; end: 00439b5b; -[SCArchiveLoader queuePerformer] */

undefined8 FUN_00439b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00439b5c; end: 00439b63; -[SCArchiveLoader loadState] */

undefined8 FUN_00439b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00439b64; end: 00439b6b; -[SCArchiveLoader setLoadState:] */

void FUN_00439b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}


